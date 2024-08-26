# genbindings

The `genbindings` program regenerates the Qt bindings.

## Architecture design

Bindings are generated in two passes:

Pass 1

1. Scan input directory for header files.
2. For each header file:
3. Run `clang --ast-dump=json` to get a JSON ast.
	- This is somewhat slow, the results will be cached in `./cachedir` after the first run.
	- Strip all Clang AST nodes that were included from other files, to only consider the header's own definitions.
4. Convert Clang AST to our own intermediate representation.
5. Run some transformations on the intermediate representation.
6. Cache and collect the global state of all known class names, enum names, and typedefs.

Pass 2

1. For each intermediate-representation AST:
2. Emit "CABI" cpp/h pair.
	- The CABI is a projection of Qt into plain C. The translation unit itself is C++, but the header can be used as extern c.
3. Emit Go binding file.
	- The Go binding uses CGO to call into the CABI binding.

## Configuration

It's tested to work on with Debian 12 / Qt 5.15 / Clang 14 / GCC 12.

You should check the following configuration:

- `main.go`: Input directories containing Qt headers
- `exceptions.go`: Check everything
