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

        value: $ => /[^\n]+/,

        _separator: $ => ":",

        _space: $ => /\s+/

    }
});
