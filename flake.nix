{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };
  outputs = { self, nixpkgs, flake-utils, ... }@inputs:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = import nixpkgs { inherit system; }; in
      {
        defaultPackage = pkgs.callPackage (nixpkgs + "/pkgs/development/tools/parsing/tree-sitter/grammar.nix") { } {
          language = "norg-meta";
          source = ./.;
          inherit (pkgs.tree-sitter) version;
        };
        devShell = pkgs.mkShell {
          nativeBuildInputs = with pkgs; [
            nodejs
            nodePackages.node-gyp
            tree-sitter
          ];
        };
      });
}