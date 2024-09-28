# miqt-uic

The miqt-uic program compiles Qt Designer `.ui` files into MIQT `.go` files.

For usage information, see the `examples/uidesigner` folder.

## Architecture design

1. Parse xml type definitions
2. Recursively walk and emit Go code.

When developing `miqt-uic`, it's useful to run Qt `uic` side-by-side, and compare the output of each program for missing attributes or assignments.

There is a hardcoded list of known MIQT constructor functions taking single `parent *qt.QWidget` argument.
- A bash function to regenerate this list is included in `constructors.go`. It should be re-run if MIQT is updated.
- "Promoted Widget" will result in no matching found constructor function (current known issue).
