# pkg-config

MIQT always uses [pkg-config](https://people.freedesktop.org/~dbn/pkg-config-guide.html) to find C++ libraries to bind to.

For Qt Widgets, the `.pc` definition is supplied along with Qt, but for other third-party libraries, definitions might not be present. To use such third-party libraries, one option is to set the `CGO_CFLAGS`, `CGO_CXXFLAGS`, `CGO_LDFLAGS` environment variables for `go build`. However, this has a global effect and may cause issues if you use multiple libraries. Therefore, another option is to create a pkg-config file.

To specify the CFLAGS/CXXFLAGS and LDFLAGS for a specific library, make a `MyLibrary.pc` file as follows:

```pkgconfig
Name: My Library
Requires: Qt6Widgets
Libs: -lfoo
Cflags: -I/path/
```

Then run `PKG_CONFIG_PATH=/path/to/dir/ go build` so CGO will find your library. Then, the necessary flags for your system will be used only as required for the specific package.

The `PKG_CONFIG_PATH` environment variable is understood both by CGO and by genbindings.

When running genbindings in the docker/genbindings container, custom pkg-config files are created inline in the Dockerfile.

## Further reading

- [Guide to pkg-config](https://people.freedesktop.org/~dbn/pkg-config-guide.html)

```bash
# Find where pkg-config looks for system libraries
$ pkg-config --variable pc_path pkg-config
/usr/local/lib/x86_64-linux-gnu/pkgconfig:/usr/local/lib/pkgconfig:/usr/local/share/pkgconfig:/usr/lib/x86_64-linux-gnu/pkgconfig:/usr/lib/pkgconfig:/usr/share/pkgconfig
```

List all available packages known to pkg-config:

```bash
pkg-config --list-all
```

A full example for QScintilla (Qt 5) from the [genbindings.Dockerfile](../docker/genbindings.Dockerfile):

```pkg-config
includedir=/usr/include/x86_64-linux-gnu/qt5/Qsci/

Name: QScintilla
Description: Qt5 port of the Scintilla source code editing widget
URL: http://www.riverbankcomputing.co.uk/software/qscintilla
Version: 2.13.3
Requires: Qt5Widgets, Qt5PrintSupport
Libs: -lqscintilla2_qt5
Cflags: -I${includedir}
```
