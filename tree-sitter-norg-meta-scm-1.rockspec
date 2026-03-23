package = "tree-sitter-norg-meta"

version = "scm-1"

rockspec_format = "3.0"

source = {
  url = "git://github.com/nvim-neorg/tree-sitter-norg-meta",
}

description = {
  summary = "tree-sitter parser for norg-meta",
  homepage = "https://github.com/nvim-neorg/tree-sitter-norg-meta",
  license = "MIT"
}

dependencies = {
  "lua >= 5.1",
}

build_dependencies = {
  "luarocks-build-treesitter-parser ~> 2",
}

build = {
  type = "treesitter-parser",
  lang = "norg-meta",
  sources = { "src/parser.c" },
}
