# miqt-uic

The miqt-uic program compiles Qt Designer `.ui` files into MIQT `.go` files.

## Usage

For example usage information, see the `examples/uidesigner` folder.

```
Usage of ./miqt-uic:
  -InFile string
        Input .ui file
  -OutFile string
        Output .go file, or - for stdout (default "-")
  -Package string
        Custom package name (default "main")
  -Qt6
        Use Qt 6 instead of Qt 5
```

## Architecture design

1. Parse xml type definitions
2. Recursively walk and emit Go code.

When developing `miqt-uic`, it's useful to run Qt `uic` side-by-side, and compare the output of each program for missing attributes or assignments.
