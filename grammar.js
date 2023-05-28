let newline = choice("\n", "\r", "\r\n");
let newline_or_eof = choice("\n", "\r", "\r\n", "\0");

const precs = {
    non_string: 1,
    key: 2,
    above_key: 3,
};

module.exports = grammar({
    name: "norg_meta",

    extras: ($) => [],

    supertypes: ($) => [$.value],

    rules: {
        metadata: ($) =>
            seq(
                repeat(newline),
                repeat(
                    seq(
                        optional($._whitespace),
                        choice($.pair, $.delimiter),
                        repeat1(newline_or_eof)
                    )
                )
            ),

        _whitespace: (_) =>
            token(prec(precs.non_string, /[\t                　]+/)),

        key: (_) => token(prec(precs.key, /[^\s:]+/)),

        number: (_) => token(/\d+/),

        array: ($) =>
            seq(
                token(prec(precs.non_string, "[")),
                optional(token(prec(precs.non_string, /[\n\r\s]+/))),
                optional(
                    seq(
                        $.value,
                        repeat(
                            prec.left(
                                seq(
                                    repeat1(newline),
                                    optional($._whitespace),
                                    optional($.value)
                                )
                            )
                        )
                    )
                ),
                token(prec(precs.non_string, "]"))
            ),

        string: (_) => /[^\n]+/,

        object: ($) =>
            seq(
                token(prec(precs.non_string, "{")),
                optional(token(prec(precs.above_key, /[\n\r\s]+/))),
                optional(
                    seq(
                        choice($.pair, $.delimiter),
                        repeat(
                            prec.left(
                                seq(
                                    repeat1(newline),
                                    optional($._whitespace),
                                    optional(choice($.pair, $.delimiter))
                                )
                            )
                        )
                    )
                ),
                token(prec(precs.above_key, "}"))
            ),

        value: ($) => choice($.number, $.string, $.array, $.object),

        pair: ($) =>
            prec.right(
                seq($.key, ":", optional(seq($._whitespace, optional($.value))))
            ),

        delimiter: ($) =>
            seq(token(prec(precs.above_key, /-+/)), optional(/.+/)),
    },
});
