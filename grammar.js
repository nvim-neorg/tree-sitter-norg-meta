module.exports = grammar({
    name: 'norg_meta',

    rules: {
        title: $ => seq(
            "title",
            ":"
            // TODO
        ),

        description: $ => seq(
            "description",
            ":"
            // TODO
        ),

        author: $ => seq(
            "author",
            ":"
            // TODO
        ),

        categories: $ => seq(
            "categories",
            ":"
            // TODO
        ),

        created: $ => seq(
            "created",
            ":"
            // TODO
        ),

        version: $ => seq(
            "version",
            ":"
            // TODO
        )
    }
});
