module.exports = grammar({
  name: 'zeppelin',
  // The parser supports no whitespace except for outside of eval blocks
  // and in arg lists, very inconsistent so we model it case by case
  extras: $ => [],
  rules: {
    source_file: $ => repeat(
      choice(
        $.content,
        $.eval_block
      )
    ), 

    content: $ => /[^{})]+/,

    eval_block: $ => seq(
      '{', 
          optional(
            choice(
              $.fn,
              $.string,
              $.number,
              $.property
            )
          ),
      '}'
    ),

    fn: $ => seq(
      field('name', $.ident), 
      field('args', $.arguments),
    ),

    _arg: $ => choice($.string, $.number, $.fn, $.property),

    arguments: $ => seq(
       $.open_paren,
       seq(optional($._arg), optional(repeat(seq(/\s*,\s*/, $._arg)))),
       $.close_paren,
    ),

    property: $ => seq(
      field("base", $.ident),
      // `args` is accessed using a digit, so we need to allow that here
      field("values", optional(repeat(seq('.', choice($.ident, $.number)))))
    ),
    
    open_paren: $ => '(',
    close_paren: $ => ')',
    ident: $ => /[a-zA-Z]+/,
    string: $ => /"[^"]*"/,
    number: $ => /\d+/,
  }
});
