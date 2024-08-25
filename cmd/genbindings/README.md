# genbindings

The `genbindings` program regenerates the qt bindings.

## Archicture design

Bindings are generated as follows:

1. Scan input directory for header files.
2. For each header file:
3. Run `clang --ast-dump=json` to get a JSON ast.
	- This is somewhat slow, the results will be cached in `./cachedir` after the first run.
4. Convert Clang AST to our own intermediate representation.
5. Emit CABI cpp/h pair.
	- The CABI is a projection of Qt into plain C. The translation unit itself is C++, but the header can be used as extern c.
6. Emit Go binding file.

## Configuration

It's tested to work on with Debian 12 / Qt 5.15 / Clang 14 / GCC 12.

You should check the following configuration:

- Input directories containing Qt headers
- All of `exceptions.go`
