# miqt-lupdate

The miqt-lupdate program generates `.ts` Qt translation files from MIQT `.go` files.

## Usage

For example usage information, see the `examples/linguist` or `examples/linguist6` folder.

Comments are supported with [similar syntax natively supported by Qt](https://doc.qt.io/qt-6/i18n-source-translation.html):

```go
// an ignored/private comment

/* an ignored/private comment block */

//: a comment for translators

/*: an included comment block for translators */
```

```text
Usage of ./miqt-lupdate:
  -AddComments
        (Optional) Include code comments in the output file, defaults to false
  -InFile string
        Input file (.go) or directory
  -KeepObsolete
        (Optional) Keep obsolete and vanished strings, defaults to false
  -Language string
        (Optional) Language code, defaults to empty
  -NoRecursive
        (Optional) Disable recursively parsing all subdirectories, defaults to recurse if input is a directory
  -OutFile string
        (Optional) Path to .ts output file; if omitted, inferred from the input file or directory path
```

## Architecture design

1. Tokenize and parse valid MIQT .go files
2. Generate translation contexts based on the Go code structure

   i. Example of valid and supported syntax structures<sup>1</sup>:

    ```go
    l := NewQLabel3(QCoreApplication_Translate("Context", "My string to translate"))

    p := NewQPushButton3(QPushButton_Tr("My string to translate"))
    ```

3. Write out translation file

<sup>1</sup>Only raw string and integer parameter types used in valid syntax are supported.
