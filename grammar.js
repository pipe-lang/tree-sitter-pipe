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
      const begin = field('begin', $._instruction);
      const end   = field('end', $._instruction);

      return prec(PREC.range, choice(
        prec.left(
          PREC.range + 1,
          seq(begin, '..', end),
        ),
        seq('..', end),
        seq(begin, '..'),
      ))
    },

    _unquoted_string:   $ => /[a-z]+\w*/,
    _quoted_string:     $ => /\"\w*\"/,
  }
});

// NOTE: How to build this grammar using pipe lang?
