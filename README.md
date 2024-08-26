![](doc/logo.svg)

![](https://img.shields.io/badge/License-MIT-green)
[![Go Reference](https://pkg.go.dev/badge/github.com/mappu/miqt/qt.svg)](https://pkg.go.dev/github.com/mappu/miqt/qt)

# MIQT

MIQT is MIT-licensed Qt bindings for Go.

This is a straightforward binding of the Qt API using CGO. You must have a working Qt C++ development toolchain to use this Go binding.

## Project status

These bindings were newly started in August 2024. The bindings are functional for all of QtCore, QtGui, and QtWidgets. But, they may be immature in some ways. Please try out the bindings and raise issues if you have trouble. A detailed status is in the [TODO file](TODO).

## Supported platforms

|Platform|Linkage|Status
|---|---|---
|Linux|Static, Dynamic (.so)|✅ Works (Tested with Debian 12 / Qt 5.15 / Clang 14 / GCC 12)
|Windows|Static, Dynamic (.dll)|Should work, not tested (#1)
|macOS|Static, Dynamic (.dylib)|Should work, not tested (#2)

## License

The MIQT Go bindings are licensed under the MIT license.

You must also meet your Qt license obligations.

## FAQ

### Q1. Why are the binaries so big?

Make sure to compile with `go build -ldflags "-s -w"`. This reduces the `helloworld` example from 43MB to 6MB.

Then, it's possible to reduce the size further with `upx --best` to 2MB or `upx --lzma` to 1.4MB.

### Q2. Can I release a proprietary, commercial app with this binding?

Yes. You must also meet your Qt license obligations: either use Qt dynamically-linked dll/so/dylib files under the LGPL, or, purchase a Qt commercial license for static linking.

### Q3. Why does it take so long to compile?

The first time the Qt bindings are compiled takes a long time. After this, it's fast. In a Dockerfile, you could cache the build step by running `go install github.com/mappu/miqt`.

See also issue #8.

### Q4. How does this compare to other Qt bindings?

MIQT is a clean-room binding that does not use any code from other Qt bindings.

- [therecipe/qt](https://github.com/therecipe/qt) is the most mature Qt binding for Go. But because of the LGPL license, it's [extremely difficult to make a proprietary app](https://github.com/therecipe/qt/wiki/FAQ#can-i-make-a-proprietary-app-with-this-binding-). See also their [issue 259](https://github.com/therecipe/qt/issues/259).
- [kitech/qt.go](https://github.com/kitech/qt.go) is another mature Qt binding for Go. Unfortunately, it's also using the LGPL license.

### Q5. How does the MIQT Go API differ from the official Qt C++ API?

Most functions are implemented 1:1. The Qt documentation should be used.

The `QString`, `QList<T>`, and `QVector<T>` types are projected as plain Go `string` and `[]T`. Therefore, you can't call any of QString/QList/QVector's helper methods, you must use some Go equivalent method instead.

Where Qt returns a C++ object by value (e.g. `QSize`), the binding may have moved it to the heap, and in Go this may be represented as a pointer type. In such cases, a Go finalizer is added to automatically delete the heap object. This means code using MIQT can look basically similar to the Qt C++ equivalent code.

The `connect(sourceObject, sourceSignal, targetObject, targetSlot)` is projected as `targetObject.onSourceSignal(func()...)`.

Some C++ idioms that were difficult to project were omitted from the binding. But, this can be improved in the future.
