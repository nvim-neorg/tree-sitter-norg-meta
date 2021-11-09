module.exports = grammar({
    name: 'norg_meta',

    rules: {
        metadata: $ => repeat(
            choice(
                $.statement,
                $.delimiter
            )
        ),

        statement: $ => seq(
            $.keyword,
            $.value
        ),


        keyword: $ => seq(
            /[^\s:]+/,
            $._separator
        ),

        value: $ => seq(
            optional(
                repeat($._text_with_trailing_modifier)
            ),
            $._text_till_eol
        ),

        delimiter: $ => choice(
            $._delimiter,
            $.named_delimiter
        ),

        _delimiter: $ => /---+\n/,

        named_delimiter: $ => prec(3, seq(
            /---+\s*/,
            prec.left(2,
                seq(
                    field("title", /[^-]+/),
                    /\s*/
                )
            ),
            $._delimiter,
        )),

        _separator: $ => ":",

        _text_till_eol: $ => /[^(\~\n)]+/,

        _text_with_trailing_modifier: $ => seq(
            $._text_till_eol,
            "\~\n"
        )

    }
});
