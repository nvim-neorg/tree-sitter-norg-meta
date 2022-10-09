module.exports = grammar({
    name: 'norg_meta',

    rules: {
        metadata: $ => repeat(choice(
            $.pair,
            $.delimiter,
        )),

        key: _ => /[^\-\s:][^\s:]*/,

        value: $ => seq(
            /[^\s][^\n\~]*/,
            optional(
                choice(
                    seq(
                        "~",
                        /[^\n\~]+/,
                    ),
                    seq(
                        "~\n",
                        alias($.value, "_value")
                    )
                )
            )
        ),

        array: $ => seq(
            '[',
            repeat(
                choice(
                    $.array,
                    $.value,
                    $.object,
                ),
            ),
            ']',
        ),

        object: $ => seq(
            '{',
            repeat($.pair),
            '}',
        ),

        pair: $ => seq(
            $.key,
            token.immediate(':'),
            /[\t\v ]*/,
            choice(
                $.array,
                $.value,
                $.object,
            ),
            optional(token.immediate('\n')),
        ),

        delimiter: _ => seq(
            "-",
            /[^\n]*/,
        )
    }
});
