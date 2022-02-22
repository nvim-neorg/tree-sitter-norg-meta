module.exports = grammar({
    name: 'norg_meta',

    rules: {
        metadata: $ => repeat(choice(
            $.pair,
            $.delimiter,
        )),

        key: _ => /[^\-\s:][^\s:]*/,

        value: $ => seq(
            /[^\s\[\]\{\}][^\n\[\]\{\}(\~\n)]*/,
            optional(
                seq(
                    "~\n",
                    alias($.value, "_value")
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
            seq(
                choice(
                    $.array,
                    $.value,
                    $.object,
                    '\n',
                ),
            ),
        ),

        delimiter: _ => seq(
            "-",
            /[^\n]*/,
        )
    }
});
