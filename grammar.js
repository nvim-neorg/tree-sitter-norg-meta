module.exports = grammar({
    name: 'norg_meta',

    rules: {
        metadata: $ => repeat(
            $.statement
        ),

        statement: $ => seq(
            $.keyword,
            $._separator,
            $._space,
            $.value
        ),

        keyword: $ => /[^\s:]+/,

        value: $ => seq(
            optional(
                repeat($._text_with_trailing_modifier)
            ),
            $._text_till_eol
        ),

        _separator: $ => ":",

        _space: $ => /\s+/,

        _text_till_eol: $ => /[^(\~\n)]+/,

        _text_with_trailing_modifier: $ => seq(
            $._text_till_eol,
            "\~\n"
        )

    }
});
