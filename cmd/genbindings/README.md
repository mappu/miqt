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

It's tested to work on with Debian 12 with system packages (Qt 5.15 / Qt 6.4 / Clang 14 / GCC 12).

You should check the following configuration:

- `config-libraries.go`: Input directories containing Qt headers
- `config-allowlist.go`: Check everything

## Steps to add extra libraries to MIQT

1. Git clone this repository
2. In `docker/genbindings.Dockerfile`, add your library's headers and pkg-config file.
    - If your library does not include a pkg-config file, [you must create one.](../../doc/pkg-config.md)
3. Patch `cmd/genbindings/config-libraries.go` to add a new `generate` block for your target library
4. Run `genbindings` to regenerate all bindings
	- The first run must populate clang ASTs into a cache directory and may be slower, but it is fast afterwards
5. Add a `cflags.go` file to the generated binding directory
	- It should have a `#cgo pkg-config: LibraryName` stanza and any extra flags (e.g. `--std=c++17`) that are required but not system-specific
6. Try to use the new binding within the repo, by adding an example in the `examples/libraries` directory
7. Commit the generated bindings
    - You can then use your forked MIQT repo with `replace` inside `go.mod`
    - Or, [open a Pull Request](https://github.com/mappu/miqt/compare) to add the library to MIQT

## Native string-view regression

`TestQAnyStringViewLifetime` compiles both freshly emitted and checked-in
QAnyStringView Go/CABI/C++ bindings in a small temporary package. It tests
owned string and byte inputs, source deletion, copied UTF-8/UTF-16/Latin-1
views, null and empty strings, Unicode, embedded NULs, invalid UTF-8,
finalizers, unsafe native wrappers, and QObject/QSettings consumers.
Qt 6 Widgets development files and a CGo C++ toolchain are required;
the test skips when Qt development files are unavailable.

```sh
go test -vet=off ./cmd/genbindings -run '^TestQAnyStringViewLifetime$' -count=1 -v
# On a Go platform/toolchain supporting AddressSanitizer:
MIQT_TEST_ASAN=1 go test -vet=off ./cmd/genbindings -run '^TestQAnyStringViewLifetime$' -count=1 -v
```

Set `MIQT_TEST_GUI=1` on an isolated X11 display, such as Xvfb, to also send
Space press/release events to a native QPushButton. Its clicked signal must
persist the exact view-backed object name as a settings key, exactly once,
without a stuck button or modal dialog. This optional test runs in its own
process to isolate QApplication thread ownership. Keep temporary files and
the Go build cache in the same task directory across runs; the test inherits
`TMPDIR`, `GOTMPDIR` and `GOCACHE`.

The Go constructors retain native character snapshots until `Delete` or Go
finalization. A copy constructor owns an independent snapshot. `UnsafePointer`
exposes a borrowed native view; retain the owning Go wrapper while native code
uses its characters. `UnsafeNewQAnyStringView` wraps an external native view
without acquiring ownership of its character buffer.
