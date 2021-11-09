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

        keyword: $ => /[^\s:]+/,

        description: $ => seq(
            $._word,
            optional(
                repeat(
                    seq(
                        $._space,
                        $._word
                    )
                )
            )
        ),

        _separator: $ => ":",

        _space: $ => /\s+/,

        _word: $ => /\S+/

    }
});
