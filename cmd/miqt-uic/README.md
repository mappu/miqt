# miqt-uic

The miqt-uic program compiles Qt Designer `.ui` files into MIQT `.go` files.

For usage information, see the `examples/uidesigner` folder.

## Architecture design

1. Parse xml type definitions
2. Recursively walk and emit Go code.

When developing `miqt-uic`, it's useful to run Qt `uic` side-by-side, and compare the output of each program for missing attributes or assignments.
