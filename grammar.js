module.exports = grammar({
  name: 'pipe',

  rules: {
    instruction: $ => choice(
      $.number
    ),

    number: $ => /\d+/
  }
});

// NOTE: How to build this grammar using pipe lang?
