# CHANGELOG

## 2024-11-27 v0.7.0

- **BREAKING:** Reorder `QVariant` constructors for new `QMap<>` support (#13)
- **BREAKING:** Rename `qt/qprintsupport` to `qt/printsupport` (#57, #90 by @jamalsa)
- **BREAKING:** Move uncommonly used Qt CBOR classes to new `qt/cbor` subpackage (#8, #82 by @rcalixte)
- Add subclassing support (#42, #69, #78)
- Add Qt 6.8 compatibility (#84, #91)
- Add Qt 5/6 Network bindings (#57)
- Add Qt 5/6 Multimedia and MultimediaWidgets bindings (#50, #57, #71, #75)
- Add Qt 5/6 Svg bindings (#95)
- Add Qt 5/6 WebEngine bindings (#96)
- Add Qt 5 Webkit bindings (#95)
- Add Qt 5 Script bindings (#95)
- Add Qt 6 Spatial Audio bindings (#57)
- Add Qt 6 QScintilla bindings (#57)
- Add `QMap<>` and `QHash<>` bindings (#13)
- Add `QPair<>` bindings (#81)
- Add automatic goroutine thread affinity with `runtime.LockOSThread` (#72, #83)
- Optimize C ABI allocations for `miqt_array` / `QList<>` (#56)
- Fix lint warnings (#77 vy @rcalixte)
- Fix an issue with virtual parent pointers (#80, #78)
- Fix an issue with typedefs in `QMap<>` (#81)
- Examples: Add `trivialwizard6` and `mdoutliner6` (#66 by @rcalixte, #67 by @rcalixte)
- Examples: Add model/view examples (#88, #93)
- Docs: Update docs for libicu on Windows (#56)
- Docs: Add Linux ARM64 support to README (#64 by @rcalixte)

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

## 2024-08-06 v0.0.0

- Initial development start
