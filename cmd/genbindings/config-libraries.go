package main

import (
	"path/filepath"
	"strings"
)

func ProcessLibraries(clangBin, outDir, extraLibsDir string) {

	AllowAllHeaders := func(string) bool { return true }

	flushKnownTypes()
	InsertTypedefs(false)

	generate(
		"qt",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtCore",
			"/usr/include/x86_64-linux-gnu/qt5/QtGui",
			"/usr/include/x86_64-linux-gnu/qt5/QtWidgets",
		},
		func(fullpath string) bool {
			// Block cbor and generate it separately
			fname := filepath.Base(fullpath)
			if strings.HasPrefix(fname, "qcbor") {
				return false
			}

			return Widgets_AllowHeader(fullpath)
		},
		clangBin,
		pkgConfigCflags("Qt5Widgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	generate(
		"qt/cbor",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtCore",
		},
		func(fullpath string) bool {
			// Only include the same json, xml, cbor files excluded above
			fname := filepath.Base(fullpath)
			if strings.HasPrefix(fname, "qcbor") {
				return true
			}

			return false
		},
		clangBin,
		pkgConfigCflags("Qt5Core"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	generate(
		"qt/printsupport",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtPrintSupport",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5PrintSupport"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	generate(
		"qt/network",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtNetwork",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5Network"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	generate(
		"qt/multimedia",
		[]string{
			// Theoretically, QtMultimediaWidgets and QtMultimedia are different
			// packages, but QtMultimedia qcamera.h has a dependency on qvideowidget.
			// Bind them together since our base /qt/ package is Widgets anyway.
			"/usr/include/x86_64-linux-gnu/qt5/QtMultimedia",
			"/usr/include/x86_64-linux-gnu/qt5/QtMultimediaWidgets",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5MultimediaWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Depends on QtCore/Gui/Widgets, QPrintSupport
	generate(
		"qt-restricted-extras/qscintilla",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/Qsci",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5PrintSupport"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Depends on QtCore/Gui/Widgets
	generate(
		"qt-extras/scintillaedit",
		[]string{
			filepath.Join(extraLibsDir, "scintilla/qt/ScintillaEdit/ScintillaEdit.h"),
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++1z "+pkgConfigCflags("ScintillaEdit"),
		outDir,
		(&clangMatchUnderPath{filepath.Join(extraLibsDir, "scintilla")}).Match,
	)

	// FLUSH all known typedefs / ...

	flushKnownTypes()
	InsertTypedefs(true)

	// Qt 6
	generate(
		"qt6",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtCore",
			"/usr/include/x86_64-linux-gnu/qt6/QtGui",
			"/usr/include/x86_64-linux-gnu/qt6/QtWidgets",
		},
		func(fullpath string) bool {
			// Block cbor and generate it separately
			fname := filepath.Base(fullpath)
			if strings.HasPrefix(fname, "qcbor") {
				return false
			}

			return Widgets_AllowHeader(fullpath)
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Widgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	generate(
		"qt6/cbor",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtCore",
		},
		func(fullpath string) bool {
			// Only include the same json, xml, cbor files excluded above
			fname := filepath.Base(fullpath)
			if strings.HasPrefix(fname, "qcbor") {
				return true
			}

			return false
		},
		clangBin,
		pkgConfigCflags("Qt6Core"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 QtPrintSupport
	generate(
		"qt6/printsupport",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtPrintSupport",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PrintSupport"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 QtNetwork
	generate(
		"qt6/network",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
		},
		func(fullpath string) bool {
			fname := filepath.Base(fullpath)
			if fname == "qtnetwork-config.h" {
				return false
			}
			return true
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Network"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 QtMultimedia
	generate(
		"qt6/multimedia",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtMultimedia",
			"/usr/include/x86_64-linux-gnu/qt6/QtMultimediaWidgets",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6MultimediaWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 Spatial Audio (on Debian this is a dependency of Qt6Multimedia)
	generate(
		"qt6/spatialaudio",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtSpatialAudio",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6SpatialAudio"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

}
