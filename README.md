![](doc/logo.svg)

![](https://img.shields.io/badge/License-MIT-green)
[![Go Reference](https://pkg.go.dev/badge/github.com/mappu/miqt/qt.svg)](https://pkg.go.dev/github.com/mappu/miqt/qt)
[![GitHub Actions CI](https://github.com/mappu/miqt/actions/workflows/miqt.yml/badge.svg?branch=master)](https://github.com/mappu/miqt/actions)
[![Go Report Card](https://goreportcard.com/badge/github.com/mappu/miqt)](https://goreportcard.com/report/github.com/mappu/miqt)
![](doc/made_in_nz.svg "Made in New Zealand")

# MIQT

MIQT is MIT-licensed Qt bindings for Go.

This is a straightforward binding of the Qt API using CGO. You must have a working Qt C++ development toolchain to use this Go binding.

These bindings were newly started in August 2024. The bindings are functional for all of QtCore, QtGui, and QtWidgets. But, they may be immature in some ways. Please try out the bindings and raise issues if you have trouble.

## Supported platforms

|OS|Arch|Linkage|Status
|---|---|---|---
|Linux|x86_64|Static or Dynamic (.so)|✅ Works
|Windows|x86_64|Static or Dynamic (.dll)|✅ Works
|Android|ARM64|Dynamic (bundled in .apk package)|✅ Works
|macOS|x86_64|Static or Dynamic (.dylib)|Should work, [not tested](https://github.com/mappu/miqt/issues/2)
|macOS|ARM64|Static or Dynamic (.dylib)|[Blocked by #11](https://github.com/mappu/miqt/issues/11)

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

The first time MIQT is used, your `go build` would take about 10 minutes. But after that, any `go build` is very fast.

If you are compiling your app within a Dockerfile, you could cache the build step by running `go install github.com/mappu/miqt`.

If you are compiling your app with a one-shot `docker run` command, the compile speed can be improved if you also bind-mount the Docker container's `GOCACHE` directory: `-v $(pwd)/container-build-cache:/root/.cache/go-build`

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

Most functions are implemented 1:1. [The Qt documentation](https://doc.qt.io/qt-5/classes.html) should be used.

The `QString`, `QList<T>`, and `QVector<T>` types are projected as plain Go `string` and `[]T`. Therefore, you can't call any of QString/QList/QVector's helper methods, you must use some Go equivalent method instead.

Where Qt returns a C++ object by value (e.g. `QSize`), the binding may have moved it to the heap, and in Go this may be represented as a pointer type. In such cases, a Go finalizer is added to automatically delete the heap object. This means code using MIQT can look basically similar to the Qt C++ equivalent code.

The `connect(sourceObject, sourceSignal, targetObject, targetSlot)` is projected as `targetObject.onSourceSignal(func()...)`.

Qt class inherited types are projected as a Go embedded struct. For example, to pass a `var myLabel *qt.QLabel` to a function taking only the `*qt.QWidget` base class, write `myLabel.QWidget`.

- When a Qt subclass adds a method overload (e.g. `QMenu::addAction(QString)` vs `QWidget::addAction(QAction*)`), the base class version is shadowed and can only be called via `myQMenu.QWidget.AddAction(QAction*)`.

Some C++ idioms that were difficult to project were omitted from the binding. But, this can be improved in the future.

## Building

### Linux (native)

*Tested with Debian 12 / Qt 5.15 / GCC 12*

```bash
apt install qtbase5-dev build-essential
go build -ldflags '-s -w'
```

### Windows (native)

*Tested with Fsu0413 Qt 5.15 / Clang 18.1 native compilation*

1. Install Go from [the official website](https://go.dev/dl/).
2. Install some Qt toolchain and its matching GCC or Clang compiler (MSVC is not compatible with CGO).
	- You can use [official Qt binaries](https://www.qt.io/) or any LGPL rebuild.
	- Example: Download and extract the following into some shared `C:\dev\rootfs`:
	- [Qt and matching GCC or Clang toolchain](https://build-qt.fsu0413.me/5.15-series/5.15.11-for-windows/index.html#windows-mingw-llvm)
	- [pkg-config](https://sourceforge.net/projects/pkgconfiglite/files/0.28-1/)
3. Configure environment variables to allow it to be used:

```powershell
$env:CGO_ENABLED = 1
$env:CC = 'C:\dev\rootfs\bin\clang.exe'
$env:CXX = 'C:\dev\rootfs\bin\clang++.exe'
$env:PKG_CONFIG = 'C:\dev\rootfs\bin\pkg-config.exe'
$env:CGO_CXXFLAGS = '-Wno-ignored-attributes -D_Bool=bool' # Clang 18 recommendation
```

4. Run `go build -ldflags "-s -w -H windowsgui"`

### Windows (Docker)

*Tested with MXE Qt 5.15 / MXE GCC 5 under cross-compilation*

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
3. Copy necessary Qt LGPL libraries and plugin files.

See FAQ Q3 for advice about docker performance.

To add an icon and other properties to the .exe, you can use [the go-winres tool](https://github.com/tc-hib/go-winres). See the `examples/windowsmanifest` for details.

### Android (Docker)

*Tested with Raymii Qt 5.15 / Android SDK 31 / Android NDK 22*

Miqt supports compiling for Android. Some extra steps are required to bridge the Java, C++, Go worlds.

![](doc/android-architecture.png)

1. Modify your main function to [support `c-shared` build mode](https://pkg.go.dev/cmd/go#hdr-Build_modes).
	- Package `main` must have an empty `main` function.
	- Rename your `main` function to `AndroidMain` and add a comment `//export AndroidMain`.
	- Ensure to `import "C"`.
	- Check `examples/android` to see how to support both Android and desktop platforms.
2. Build the necessary docker container for cross-compilation:
	- `docker build -t miqt/android:latest -f android-armv8a-go1.23-qt5.15-dynamic.Dockerfile .`
3. Build your application as `.so` format:
	- `docker run --rm -v $(pwd):/src -w /src miqt/android:latest go build -buildmode c-shared -ldflags "-s -w -extldflags -Wl,-soname,my_go_app.so" -o android-build/libs/arm64-v8a/my_go_app.so`
4. Build the Qt linking stub:
	- `docker run --rm -v $(pwd):/src -w /src miqt/android:latest android-stub-gen.sh my_go_app.so AndroidMain android-build/libs/arm64-v8a/libRealAppName_arm64-v8a.so`
	- The linking stub is needed because Qt for Android will itself only call a function named `main`, but `c-shared` can't create one.
5. Build the [androiddeployqt](https://doc.qt.io/qt-6/android-deploy-qt-tool.html) configuration file:
	- `docker run --rm -v $(pwd):/src -w /src miqt/android:latest android-mktemplate.sh RealAppName deployment-settings.json`
6. Build the android package:
	- `docker run --rm -v $(pwd):/src -w /src miqt/android:latest androiddeployqt --input ./deployment-settings.json --output ./android-build/`
	- By default, the resulting `.apk` is generated at `android-build/build/outputs/apk/debug/android-build-debug.apk`. 
	- You can build in release mode by adding `--release`

See FAQ Q3 for advice about docker performance.

For repeated builds, only steps 3 and 6 are needed. If you customize the `AndroidManifest.xml` file or images, they will be used for the next `androiddeployqt` run.
