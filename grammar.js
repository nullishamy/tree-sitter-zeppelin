module.exports = grammar({
  name: 'zeppelin',
  rules: {
    source_file: $ => repeat(
      choice(
        $.eval_block, 
        /[a-zA-Z0-9\s]+/,
      )
    ), 

    eval_block: $ => seq(
      '{', 
        optional(
          seq(
            $.fn
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
       seq($._arg, optional(repeat(seq(",", $._arg)))),
       $.close_paren,
    ),

    property: $ => seq(
      field("base", $.ident), 
      field("values", optional(repeat(seq('.', $.ident))))
    ),
    
    open_paren: $ => '(',
    close_paren: $ => ')',
    ident: $ => /[a-zA-Z]+/,
    string: $ => /"[^"]*"/,
    number: $ => /\d+/,
  }
});
