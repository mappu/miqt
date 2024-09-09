![](doc/logo.svg)

![](https://img.shields.io/badge/License-MIT-green)
[![Go Reference](https://pkg.go.dev/badge/github.com/mappu/miqt/qt.svg)](https://pkg.go.dev/github.com/mappu/miqt/qt)
[![GitHub Actions CI](https://github.com/mappu/miqt/actions/workflows/miqt.yml/badge.svg?branch=master)](https://github.com/mappu/miqt/actions)

# MIQT

MIQT is MIT-licensed Qt bindings for Go.

This is a straightforward binding of the Qt API using CGO. You must have a working Qt C++ development toolchain to use this Go binding.

## Project status

These bindings were newly started in August 2024. The bindings are functional for all of QtCore, QtGui, and QtWidgets. But, they may be immature in some ways. Please try out the bindings and raise issues if you have trouble.

## Supported platforms

|Platform|Linkage|Status
|---|---|---
|Linux|Static, Dynamic (.so)|✅ Works (Tested with Debian 12 / Qt 5.15 / Clang 14 / GCC 12)
|Windows|Static, Dynamic (.dll)|✅ Works (Tested with MXE Qt 5.15 / MXE GCC 5 under cross-compilation)
|macOS|Static, Dynamic (.dylib)|Should work, [not tested](https://github.com/mappu/miqt/issues/2)

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

See also [issue #8](https://github.com/mappu/miqt/issues/8).

### Q4. How does this compare to other Qt bindings?

MIQT is a clean-room binding that does not use any code from other Qt bindings.

- [therecipe/qt](https://github.com/therecipe/qt) is the most mature Qt binding for Go.
	- It works by making IPC calls to a separate C++ binary downloaded at runtime from a site under the maintainer's control. This may be less performant than calling Qt directly.
	- Because of the LGPL license, it's [extremely difficult to make a proprietary app](https://github.com/therecipe/qt/wiki/FAQ#can-i-make-a-proprietary-app-with-this-binding-). See also their [issue 259](https://github.com/therecipe/qt/issues/259).
- [kitech/qt.go](https://github.com/kitech/qt.go) is another mature Qt binding for Go.
	- Unfortunately, it's also using the LGPL license.
- [go-qamel/qamel](https://github.com/go-qamel/qamel) is an MIT-licensed Qt binding for Go.
	- Unfortunately, it only supports QML, not Qt Widgets.

### Q5. How does the MIQT Go API differ from the official Qt C++ API?

Most functions are implemented 1:1. The Qt documentation should be used.

The `QString`, `QList<T>`, and `QVector<T>` types are projected as plain Go `string` and `[]T`. Therefore, you can't call any of QString/QList/QVector's helper methods, you must use some Go equivalent method instead.

Where Qt returns a C++ object by value (e.g. `QSize`), the binding may have moved it to the heap, and in Go this may be represented as a pointer type. In such cases, a Go finalizer is added to automatically delete the heap object. This means code using MIQT can look basically similar to the Qt C++ equivalent code.

The `connect(sourceObject, sourceSignal, targetObject, targetSlot)` is projected as `targetObject.onSourceSignal(func()...)`.

Qt class inherited types are projected as a Go embedded struct. For example, to pass a `var myLabel *qt.QLabel` to a function taking only the `*qt.QWidget` base class, write `myLabel.QWidget`.

Some C++ idioms that were difficult to project were omitted from the binding. But, this can be improved in the future.

### Q7. How can I cross-compile for Windows from a Linux host OS?

For static builds (open source application):

1. Build the necessary docker container for cross-compilation:
	- `docker build -t miqt/win64-cross:latest -f win64-cross-go1.23-qt5.15-static.Dockerfile .`
2. Build your application:
	- `docker run --rm -v $(pwd):/src -w /src miqt/win64-cross:latest go build -buildvcs=false --tags=windowsqtstatic -ldflags '-s -w -H windowsgui'`

For dynamically-linked builds (closed-source or open source application):

1. Build the necessary docker container for cross-compilation:
	- `docker build -t miqt/win64-dynamic:latest -f win64-cross-go1.23-qt5.15-dynamic.Dockerfile .`
2. Build your application:
	- `docker run --rm -v $(pwd):/src -w /src miqt/win64-dynamic:latest go build -buildvcs=false -ldflags '-s -w -H windowsgui'`
3. Copy necessary Qt LGPL libraries.

For repeated builds, the compile speed can be improved if you also bind-mount the Docker container's `GOCACHE` directory: `-v $(pwd)/container-build-cache:/root/.cache/go-build`

To add an icon and other properties to the .exe, you can use [the go-winres tool](https://github.com/tc-hib/go-winres). See the `examples/windowsmanifest` for details.
