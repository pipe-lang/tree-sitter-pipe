const PREC = {
  range: 10
};

module.exports = grammar({
  name: 'pipe',

  rules: {
    module: $ => repeat($._instruction),

    _instruction: $ => choice(
      $.number,
      $.float,
      $.bool,
      $.string,
      $.array,
      $.range,
    ),

    number: $ => /\d+/,
    float:  $ => /\d+\.\d+/,
    bool:   $ => choice('true', 'false'),
    string: $ => choice( $._quoted_string, $._unquoted_string),
    array:  $ => seq('[', repeat($._instruction), ']'),
    range:  $ => {
      const begin    = field('begin', $._instruction);
      const end      = field('end', $._instruction);
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

    _unquoted_string:   $ => /[a-z]+\w*/,
    _quoted_string:     $ => /\"\w*\"/,

    _range_operator: $ => choice($.inclusive, $.exclusive,),
    inclusive: $ => '..',
    exclusive: $ => '..<'
  }
});

// NOTE: How to build this grammar using pipe lang?
