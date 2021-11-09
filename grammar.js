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

        description: $ => /[^\n]+/,

        _separator: $ => ":",

        _space: $ => /\s+/

    }
});
