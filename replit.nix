{ pkgs }: {
	deps = [
		pkgs.haskellPackages.hello
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}