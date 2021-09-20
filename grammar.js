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
    ),

    number: $ => /\d+/,
    float:  $ => /\d+\.\d+/,
    bool:   $ => choice('true', 'false'),
    string: $ => choice( $._quoted_string, $._unquoted_string),
    array:  $ => seq('[', repeat($._instruction), ']'),

    _unquoted_string:   $ => /[a-z]+\w*/,
    _quoted_string:     $ => /\"\w*\"/,
  }
});

// NOTE: How to build this grammar using pipe lang?
