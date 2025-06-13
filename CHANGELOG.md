# CHANGELOG

## 2025-06-11 v0.11.0

- Add `miqt-docker` helper command (#208)
- Add Qt PDF bindings and example (#205 by @rcalixte)
- Add lcdclock example (#223 by @rcalixte)
- Add bindings for signals using `QPrivateSignal` such as `QTimer::OnTimeout` (#225 by @rcalixte, #122)
- Faster generation of Docker images by supporting context-free builds (#208)
- miqt-uic: Support SizePolicy, nested QMenu, icon themes, nested layouts, connections, tooltips, spacers (#202, #211, #213, #214, #229)
- Fix intermittent failures of Android Qt 6 compilation (#181, #208)
- Fix `setObjectName` errors when using miqt-uic against Qt 6 (#201, #213)
- Fix miqt-docker compatibility with Podman (#220 by @mrex)
- Fix miqt-docker Ctrl+C behaviour in terminals (#240)
- Fix miqt-uic compatibility with `QIcon::FromTheme` in Qt 6.7 (#228, #229)
- Docs: Group compatibility notes, add note for Android `QFileDialog` (#208)

## 2025-04-15 v0.10.0

- **BREAKING:** Rename a small number of overloaded methods (#196)
- **BREAKING:** Drop support for deprecated `QWebEngineQuotaRequest` (#199)
- **BREAKING:** Split `qnetwork/sctp`, `qnetwork/dtls`, and `qwebchannel/qmlwebchannel` into subpackages (#199)
- Support Qt 6.9.0 (#195 by @rcalixte, #199)
- Add Qt 6 QML bindings and example (#189 by @VelorumS)
- Add Qt 6 Charts bindings and example (#61, #186, #187 by @rcalixte)
- Add `QVariantList` support (#196 by @arnetheduck)
- Add new examples for Qt6Network and for Qt6Network SCTP (#199)
- Fix FTBFS issues with the QScintilla6, ScintillaEdit, Qt5Multimedia, and Windows Manifest examples (#191, #192)
- Fix `noexcept` warnings in ScintillaEdit (#192)
- Fix `qmlwebchannel` header import warnings when using Qt6WebEngine in Arch Linux (#150, #199)
- Fix failing to build Qt5Network under macOS Brew (#151, #199)
- Fix importing wrong container classes in generated cpp files (#196)
- Fix wrong integer types used in some C binding methods (#196 by @arnetheduck)
- Tests: Build all examples automatically in CI (#192)
- Generator: Use the system GOCACHE/GOMODCACHE in the Makefile docker helper (#192)
- Generator: Fix not showing `pkg-config` error messages (#196)
- Docs: Update installation instructions for Debian, Fedora, FreeBSD, Manjaro, and Arch Linux (#182 by @rcalixte, #189 by @VelorumS, #199)

## 2025-03-01 v0.9.0

- Support Qt 6 on Android (#177)
- Add support for calling Qt protected methods (#166 with @arnetheduck)
- Add support for calling virtual functions deeper in the Qt class hierarchy (#140)
- Add Docker container for statically linked Qt 6 on Windows (#178)
- Add `-Qt6` flag to UIC and RCC (#167)
- Add `-RccBinary` flag to RCC to allow customizing Qt targets (#161)
- Fix a crash that can happen with zero-length slices (#148)
- Fix the Android Qt 5 container entrypoint, and automatically test in CI (#149)
- Fix `QStringConverterBase` compatibility for the latest Qt 6.8.2 minor update
- Fix relative path generation for embedded files when using RCC (#167)
- Tests: Add integration test for RCC compilation using `go generate` (#167)
- Generator: Optimize subclass handling (#138 with @arnetheduck), virtual method handling (#176)
- Generator: Improve const correctness (#153 by @arnetheduck) and name generation (#160, #132 by @arnetheduck)

## 2025-01-18 v0.8.0

- Support FreeBSD (#68, #73, #113)
- Support Windows x86_32 platform (#115)
- Add `mainthread` subpackage to help running code on the main Qt thread (#76, #111, #70 with @rcalixte, #130)
- Add support for conversion cast operators (#120)
- Docker: Add Windows Qt 5 x86_32 container (#115), Windows Qt 6 x86_64 container (#131)
- Examples: Add `goroutine6` examples (#70 with @rcalixte)
- Examples: Add `modelview_color6` example (#114 by @st0pli, #120)
- Remove unnecessary header imports in C ABI (#123 by @arnetheduck)
- Docs: Add help section for `unsafePointer` widget comparisons to FAQ Q5
- Generator: Improve reliability of `genbindings` (#119 by @arnetheduck)
- Generator: Improve logging behaviour (#135 by @arnetheduck)
- Generator: Add Makefile to regenerate bindings (#126 by @arnetheduck)

## 2024-12-16 v0.7.1

- Fix an issue with methods returning Qt types having incomplete subclass information (#97, #98, #101, #110)
- Fix an issue with segfaults when trying to call subclass methods on a Qt type that MIQT didn't construct (#101)
- Fix an issue with requiring `-D_Bool=bool` on some compilers (#102, #103)

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
- Fix lint warnings (#77 by @rcalixte)
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
