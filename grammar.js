const PREC = {
  range:          1,
  and:            2,
  or:             3,
  comparative:    4,
  additive:       5,
  multiplicative: 6,
  binary:         7,
  unary:          8,
}

const POSTFIX = [
  'b',
  'kb',
  'mb',
  'gb',
  'tb',
  'pb',

  'bi',
  'kbi',
  'mbi',
  'gbi',
  'tbi',
  'pbi',

  'sec',
  'min',
  'hr',
  'hrs',
  'day',
  'days',
  'wk',
  'wks',
];

module.exports = grammar({
  name: 'pipe',

  rules: {
    module: $ => repeat(choice($._declaration, $._expression)),

    _literal: $ => choice(
      $.number,
      $.float,
      $.bool,
      $.variable,
      $.string,
      $.array,
      $.range,
      $.struct,
      $.enum,
    ),

    _expression: $ => choice(
      $._literal,
      $.conditional,
      $.function_call,
      $.unary,
      $.binary,
      $.postfix,
      $.assignment,
      $.pipe,
    ),

    _declaration: $ => choice(
      $._loops,
      $.function,
      $.import,
      $.include,
    ),

    number: $ => /\d+/,
    float:  $ => /\d+\.\d+/,
    bool:   $ => choice('true', 'false'),
    string: $ => choice($._quoted_string),
    array:  $ => seq('[', repeat($._literal), ']'),
    range:  $ => {
      const begin    = field('begin', $._literal);
      const end      = field('end', $._literal);
      const operator = field('operator', $._range_operator);

      return prec(PREC.range, choice(
        prec.left(
          PREC.range + 1,
          seq(begin, operator, end),
        ),
        seq(operator, end),
        seq(begin, operator),
      ))
    },
    struct: $ => choice(seq($.name, '{', '}'), seq($.name, '{', $.attributes, '}')),
    enum: $ => seq($.name, '::', choice($.number, $.bool, $.identifier, $.name)),

    _quoted_string:     $ => /\"\w*\"/,

    _range_operator: $ => choice($.inclusive, $.exclusive,),

    inclusive: $ => '..',
    exclusive: $ => '..<',

    attributes: $ => choice(repeat1($._literal), repeat1(seq($.identifier, ':', $._literal))),

    conditional:   $ => seq($.if, repeat($.elseif), optional($.else), 'end'),
    function_call: $ => seq($.identifier, '(', field('params', repeat($._expression)), ')'),
    unary:         $ => prec.left(PREC.unary, seq($.unary_operator, $._expression)),
    binary:        $ => prec.left(PREC.binary,
      seq(field('left', $._expression), $.binary_operator, field('right', $._expression))
    ),
    postfix:       $ => seq($.number, $.postfix_operator),
    assignment:    $ => prec(1, seq($.variable, '=', field('value', $._expression))),
    variable:      $ => alias($.identifier, 'name'),
    pipe:          $ => prec.left(seq($.term, '|', $._expression)),

    unary_operator:   $ => choice('not'),
    postfix_operator: $ => { return choice(...POSTFIX.map(x => token.immediate(x))) },

    binary_operator: $ => choice(
      prec.left(PREC.and,            'and'),
      prec.left(PREC.or,             'or'),
      prec.left(PREC.comparative,    choice('eq', 'not eq', '<', '<=', '>', '>=')),
      prec.left(PREC.additive,       choice('+', '-')),
      prec.left(PREC.multiplicative, choice('*', '/', 'mod')),
    ),

    if:     $ => seq('if', $._expression, $.body),
    elseif: $ => seq('elseif', $._expression, $.body),
    else:   $ => seq('else', $.body),

    _loops:   $ => choice($.loop, $.for),
    import:   $ => seq('import', alias(/\w+/, $.name), optional(seq('as', $.identifier))),
    include:  $ => seq('include', alias(/\w+/, $.name)),
    function: $ => seq(
      field('name', $.identifier),
      '(',
      field('params', repeat($.param)),
      ')',
      $.body,
      optional($.check),
      'end'
    ),

    param: $ => seq(alias($.identifier, $.name), token.immediate(':'), alias($.name, $.type)),
    loop:  $ => seq('loop', $.body, 'end'),
    for:   $ => seq('for', field('params', repeat($.variable)), 'in', field('in', $._expression), $.body, 'end'),
    check: $ => seq('check', repeat1(choice($._expression, $.is))),
    is:    $ => prec.right(1, seq($._expression, 'is', $._expression)),
    term:  $ => repeat1($._expression),

    name:       $ => /[A-Z]+\w*/,   // NOTE should it be able to start with numbers?
    identifier: $ => /[a-z]+\w*/,   // NOTE should it be able to start with numbers?

    body:  $ => prec.left(repeat1($._expression))
  },

  conflicts: $ => [
    [$.check,    $.term],
    [$.elseif,   $.term,          $.body],
    [$.for,      $.term,          $.body],
    [$.function, $.function_call],
    [$.if,       $.term,          $.body],
    [$.module,   $.term],
    [$.pipe,     $.term],
    [$.term],
  ]
});

// NOTE How to build this grammar using pipe lang?
