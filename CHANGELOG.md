# Changelog

## 0.1.0 (2024-04-13)


### ⚠ BREAKING CHANGES

* rewrite the parser to be more error prone

### Features

* add luarocks support ([2673f0e](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/2673f0e57694347bc55bcaf319cb8e0a5e7a4c29))
* basic delimiter support ([7268ed1](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/7268ed1e2571b21c0ec728b94f06984f7b9ba4be))
* basic statement_group support ([90a73d1](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/90a73d19f7bdc678ef1e7d40936f1a60e7cd0888))
* change some node names, add support for nested objects + arrays, write new tests ([7c9057c](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/7c9057ca182bfbcb52d5f9f2e4ea3da21b43c7fb))
* crude trailing modifier support ([22ae523](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/22ae5236e5e349acd183d32f372ce7184dad1f40))
* rewrite parser to make it more flexible ([35d9f25](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/35d9f25b440959eec1cf671632757357aa0425d9))
* rewrite the parser to be more error prone ([0a00389](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/0a003896cf7bb42f52b5f188a90e42f8f3fbe57d))
* veeery crude named delimiter support ([17741af](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/17741afcf6fd94b81399dab47ca9ece6456c9741))


### Bug Fixes

* allow one-char values for pairs ([4687b53](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/4687b53e656b920cde6c0b9a7b9acf9a665cd838))
* **ast:** don't make the separator a part of `key` ([bf5a57d](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/bf5a57dd74b22048aac72be2a71e13f1fc718e83))
* broken parsing of values with special chars ([e93dcbc](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/e93dcbc56a472649547cfc288f10ae4a93ef8795))
* incorrect detection of trailing modifiers ([#3](https://github.com/nvim-neorg/tree-sitter-norg-meta/issues/3)) ([323ef05](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/323ef0576e95d7c530546f6954362173fbaa56ac))
* multi word descriptions ([ab7f37f](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/ab7f37f9186fdb49a9f9d764079b24db8556830c))
* remove hard-coded space groups ([99b1ffc](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/99b1ffcc5d1f0fb9a0edb382980ddf21e0f0d546))
* repo links ([8d9792b](https://github.com/nvim-neorg/tree-sitter-norg-meta/commit/8d9792bf94a22e4a1d0fdf6de52e099c471bf26e))
