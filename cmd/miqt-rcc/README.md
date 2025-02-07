# miqt-rcc

The miqt-rcc program generates the necessary wrappers to use a Qt Designer `.qrc`
resource pack in MIQT `.go` files.

## Usage

```
Usage of ./miqt-rcc:
  -Input string
        Path to .qrc input file
  -OutputGo string
        (Optional) Path to .go output file. If omitted, interred from the input file path
  -OutputRcc string
        (Optional) Path to .rcc output file. If omitted, inferred from the output Go file path
  -Package string
        Package to use in generated Go files (default "main")
  -Qt6
        Use Qt 6 instead of Qt 5
  -RccBinary string
        (Optional) Custom path to the Qt rcc program (default "rcc")
  -VariableName string
        Temporary global variable name for loading embedded data (default "_resourceRcc")
```
