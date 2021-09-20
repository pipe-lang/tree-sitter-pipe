const PREC = {
  range: 10
};

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
      $.unary
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
    unary:         $ => seq($.unary_operator, $._expression),

    unary_operator: $ => choice('not'),

    name:       $ => /[A-Z]+\w*/,   // NOTE should it be able to start with numbers?
    identifier: $ => /[a-z]+\w*/,   // NOTE should it be able to start with numbers?

    if:     $ => seq('if', $._expression, $._block),
    elseif: $ => seq('elseif', $._expression, $._block),
    else:   $ => seq('else', $._block),

    _block:  $ => field('body', repeat1($._expression))
  }
});

// NOTE How to build this grammar using pipe lang?
