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
      $.string,
      $.array,
      $.range,
      $.struct,
      $.enum,
    ),

    _expression: $ => choice(
      $._literal,
      $.function_call,
      $.unary,
      $.binary,
      $.postfix,
      $.assignment,
    ),

    _declaration: $ => choice(
      $.conditional
    ),

    number: $ => /\d+/,
    float:  $ => /\d+\.\d+/,
    bool:   $ => choice('true', 'false'),
    string: $ => choice( $._quoted_string, $._unquoted_string),
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

    _unquoted_string:   $ => /[a-z]+\w*/,
    _quoted_string:     $ => /\"\w*\"/,

    _range_operator: $ => choice($.inclusive, $.exclusive,),

    inclusive: $ => '..',
    exclusive: $ => '..<',

    attributes: $ => choice(repeat1($._literal), repeat1(seq($.identifier, ':', $._literal))),

    conditional: $ => seq($.if, repeat($.elseif), optional($.else), 'end'),

    function_call: $ => seq($.identifier, '(', repeat($._expression), ')'),
    unary:         $ => prec.left(PREC.unary, seq($.unary_operator, $._expression)),
    binary:        $ => prec.left(PREC.binary,
      seq(field('left', $._expression), $.binary_operator, field('right', $._expression))
    ),
    postfix:       $ => seq($.number, $.postfix_operator),

    assignment: $ => seq(field('name', $.identifier), '=', field('value', $._expression)),

    unary_operator:   $ => choice('not'),
    postfix_operator: $ => { return choice(...POSTFIX.map(x => token.immediate(x))) },

    binary_operator: $ => choice(
      prec.left(PREC.and,            'and'),
      prec.left(PREC.or,             'or'),
      prec.left(PREC.comparative,    choice('eq', 'not eq', '<', '<=', '>', '>=')),
      prec.left(PREC.additive,       choice('+', '-')),
      prec.left(PREC.multiplicative, choice('*', '/', 'mod')),
    ),

    name:       $ => /[A-Z]+\w*/,   // NOTE should it be able to start with numbers?
    identifier: $ => /[a-z]+\w*/,   // NOTE should it be able to start with numbers?

    if:     $ => seq('if', $._expression, $._block),
    elseif: $ => seq('elseif', $._expression, $._block),
    else:   $ => seq('else', $._block),

    _block:  $ => field('body', repeat1($._expression))
  }
});

// NOTE How to build this grammar using pipe lang?
