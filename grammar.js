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
            $.description
        ),

        keyword: $ => choice(
            $._word
        ),

        description: $ => prec.left(1,
            repeat1(
                $._word
            )
        ),

        _separator: $ => ":",

        _space: $ => /\s+/,

        _word: $ => /[^\s:]+/

    }
});
