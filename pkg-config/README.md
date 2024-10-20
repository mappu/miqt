# pkg-config

MIQT always uses [pkg-config](https://people.freedesktop.org/~dbn/pkg-config-guide.html) to find C++ libraries to bind to.

For Qt Widgets, the `.pc` definition is supplied along with Qt, but for other third-party libraries, definitions might not be present. To use such third-party libraries, one option is to set the `CGO_CFLAGS`, `CGO_CXXFLAGS`, `CGO_LDFLAGS` environment variables for `go build`. However, this has a global effect and may cause issues if you use multiple libraries. Therefore, another option is to create a pkg-config file.

To specify the CFLAGS/CXXFLAGS and LDFLAGS for a specific library, make a `MyLibrary.pc` file as follows:

```pkgconfig
Name: My Library
Libs: -lfoo
Cflags: -I/path/
```

Then run `PKG_CONFIG_PATH=/path/to/dir/ go build` so CGO will find your library. Then, the necessary flags for your system will be used only as required for the specific package.

The `PKG_CONFIG_PATH` environment variable is understood both by CGO and by genbindings.

## Further reading

- [Guide to pkg-config](https://people.freedesktop.org/~dbn/pkg-config-guide.html)

```bash
# Find where pkg-config looks for system libraries
$ pkg-config --variable pc_path pkg-config
/usr/local/lib/x86_64-linux-gnu/pkgconfig:/usr/local/lib/pkgconfig:/usr/local/share/pkgconfig:/usr/lib/x86_64-linux-gnu/pkgconfig:/usr/lib/pkgconfig:/usr/share/pkgconfig
```
