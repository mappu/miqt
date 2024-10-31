# CHANGELOG

## 2024-10-31 v0.6.0

- **BREAKING:** Represent `QByteArray` as Go `[]byte`
- **BREAKING:** Reorder class constructors for stability
- **BREAKING:** More accurate bindings for some namespaces, enums, integer types, void pointers, and type aliases
- Add macOS support
- Add Qt 6 binding
- Add bindings for QPrintSupport, QScintilla, and ScintillaEdit
- Add `uic` and `rcc` implementations for Qt Designer
- Add extra `UnsafeNew`, `UnsafePointer` class methods
- Fix an issue with `cgo.Handle` correctness
- Docs: Add Windows (MSYS2), macOS (Homebrew / Docker) build guide
- Docs: Add FAQs for custom locations, pkg-config, Qt 5/6 upgrades, extra library bindings

## 2024-09-24 v0.5.0

- **BREAKING:** Shorter enum names
- **BREAKING:** More accurate type definitions for enums and `QFlags<T>`
- Expand binding to cover `void*` return methods and `QSet<>` types
- Android support
- Support native compilation on Windows without Docker

## 2024-09-15 v0.4.0

- **BREAKING:** Expand binding to cover signal argument types
- Add Github Actions CI
- Update `mdoutliner` example

## 2024-09-04 v0.3.0

- Expand binding to cover enum types
- Add dockerfiles for Go1.23
- Embed qwindows plugin and qwindowsvistastyle into static Windows builds
- Add `windowsmanifest` example

## 2024-09-01 v0.2.2

- Support compiling on Windows

## 2024-09-01 v0.2.1

- Qt types returned as nil pointers are now returned as Go nil pointers
- Add `mdoutliner` example

## 2024-08-29 v0.2.0

- Expand binding to cover many excluded methods and inner classes

## 2024-08-25 v0.1.0

- Initial public release (QtCore, QtGui, QtWidgets)
- Add `helloworld` example
