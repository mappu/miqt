![](doc/logo.svg)

![](https://img.shields.io/badge/License-MIT-green)

# MIQT

MIT-licensed Qt bindings for Go.

This is a straightforward binding of the Qt API using CGO. You must have a working Qt C++ development toolchain to use this Go binding.

## Project status

These bindings were newly started in August 2024. The bindings are functional. But, they may be immature in some ways. Please try out the bindings and raise issues if you have trouble. A detailed status is in the [TODO file](TODO).

## Supported platforms

|Platform|Linkage|Status
|---|---|---
|Linux|Static, Dynamic (.so)|✅ Works (Tested with Debian 12 / Qt 5.15 / Clang 14 / GCC 12)
|Windows|Static, Dynamic (.dll)|Should work, not tested
|macOS|Static, Dynamic (.dylib)|Should work, not tested

## License

- The Go bindings and tools in this repo are licensed under the MIT license
- You must also meet your Qt license obligations.

## FAQ

1. Why are the binaries so big?

Make sure to compile with `go build "-ldflags -s -w"`. This reduces the `helloworld` example from 42MB to 6MB.

Then, it's possible to reduce the size further with `upx --best` to 2MB or `upx --lzma` to 1.4MB.

2. Can I release a proprietary, commercial app with this binding?

Yes. You must also meet your Qt license obligations: either use Qt dynamically-linked dll/so/dylib files under the LGPL, or, purchase a Qt commercial license for static linking.

3. Why does it take so long to compile?

The first time the Qt bindings are compiled takes a long time. After this, it's fast. In a Dockerfile, you could cache the build step by running `go install github.com/mappu/miqt`.
