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
      '(',
       seq($._arg, optional(repeat(seq(",", $._arg)))),
      ')'
    ),

    property: $ => seq(
      field("base", $.ident), 
      field("values", optional(repeat(seq('.', $.ident))))
    ),
    
    ident: $ => /[a-zA-Z]+/,
    string: $ => /"[^"]*"/,
    number: $ => /\d+/,
  }
});
