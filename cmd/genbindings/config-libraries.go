package main

import (
	"path/filepath"
	"strings"
)

func ProcessLibraries(clangBin, outDir, extraLibsDir string) {

	AllowAllHeaders := func(string) bool { return true }
	OnlyHeaders := func(s ...string) func(fullpath string) bool {
		return func(fullpath string) bool {
			return slice_contains(s, filepath.Base(fullpath))
		}
	}
	ExceptHeaders := func(s ...string) func(fullpath string) bool {
		return func(fullpath string) bool {
			return !slice_contains(s, filepath.Base(fullpath))
		}
	}

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
			return strings.HasPrefix(fname, "qcbor")
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
		"qt/svg",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtSvg",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5Svg"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 5 Network (1/3)

	generate(
		"qt/network",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtNetwork",
		},
		ExceptHeaders("qdtls.h", "qsctpserver.h", "qsctpsocket.h"),
		clangBin,
		pkgConfigCflags("Qt5Network"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 5 Network (2/3)

	generate(
		"qt/network/sctp",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtNetwork",
		},
		OnlyHeaders("qsctpserver.h", "qsctpsocket.h"),
		clangBin,
		pkgConfigCflags("Qt5Network"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 5 Network (3/3) - split out DTLS into subpackage because macOS Brew is
	// compiled with it disabled
	// There are still some extra functions to move out from qsslconfiguration.h
	// @ref https://github.com/mappu/miqt/issues/151

	generate(
		"qt/network/dtls",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtNetwork",
		},
		OnlyHeaders("qdtls.h"),
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

	generate(
		"qt/script",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtScript",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5Script"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 5 QWebkit: depends on Qt5PrintSupport but only at runtime, not at
	// codegen time
	generate(
		"qt/webkit",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtWebKit",
			"/usr/include/x86_64-linux-gnu/qt5/QtWebKitWidgets",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5WebKitWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 5 QWebChannel
	generate(
		"qt/webchannel",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtWebChannel",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5WebChannel"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 5 QWebEngine
	generate(
		"qt/webengine",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtWebEngine",
			"/usr/include/x86_64-linux-gnu/qt5/QtWebEngineCore",
			"/usr/include/x86_64-linux-gnu/qt5/QtWebEngineWidgets",
		},
		ExceptHeaders("qquickwebengineprofile.h", "qquickwebenginescript.h"),
		clangBin,
		pkgConfigCflags("Qt5WebEngineWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 5 PDF
	// Depends on QtCore/Gui/Widgets
	generate(
		"qt/pdf",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtPdf",
			"/usr/include/x86_64-linux-gnu/qt5/QtPdfWidgets",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5PdfWidgets"),
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

	generate(
		"qt-restricted-extras/qtermwidget",
		[]string{
			"/usr/include/qtermwidget5",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("qtermwidget5"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
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
			"/usr/include/x86_64-linux-gnu/qt6/QtCore",
		},
		func(fullpath string) bool {
			// Only include the same json, xml, cbor files excluded above
			fname := filepath.Base(fullpath)
			return strings.HasPrefix(fname, "qcbor")
		},
		clangBin,
		"--std=c++20 "+pkgConfigCflags("Qt6Core"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 QtQml
	generate(
		"qt6/qml",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtQml",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Qml"),
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

	// Qt 6 SVG
	generate(
		"qt6/svg",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtSvg",
			"/usr/include/x86_64-linux-gnu/qt6/QtSvgWidgets",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6SvgWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 QtNetwork (1/3)
	generate(
		"qt6/network",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
		},
		ExceptHeaders("qtnetwork-config.h", "qsctpserver.h", "qsctpsocket.h", "qdtls.h"),
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Network"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 Network (2/3) - split out SCTP into subpackage because Arch Linux is
	// compiled with it disabled
	// @ref https://github.com/mappu/miqt/issues/150
	// @ref https://github.com/mappu/miqt/issues/194

	generate(
		"qt6/network/sctp",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
		},
		OnlyHeaders("qsctpserver.h", "qsctpsocket.h"),
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Network"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 Network (3/3) - split out DTLS into subpackage because macOS Brew is
	// compiled with it disabled
	// There are still some extra functions to move out from qsslconfiguration.h
	// @ref https://github.com/mappu/miqt/issues/151

	generate(
		"qt6/network/dtls",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
		},
		OnlyHeaders("qdtls.h"),
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

	// Qt 6 QWebChannel (1/2)
	// Exclude qqmlwebchannel because Arch Linux packages it differently
	// @ref https://github.com/mappu/miqt/issues/150
	// @ref https://github.com/mappu/miqt/issues/194
	generate(
		"qt6/webchannel",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtWebChannel",
		},
		ExceptHeaders("qqmlwebchannel.h"),
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6WebChannel"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 WebChannel (2/2)
	// Just the Qt Quick part of qqmlwebchannel
	generate(
		"qt6/webchannel/qmlwebchannel",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtWebChannel",
		},
		OnlyHeaders("qqmlwebchannel.h"),
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6WebChannel"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 QWebEngine
	generate(
		"qt6/webengine",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtWebEngineCore",
			"/usr/include/x86_64-linux-gnu/qt6/QtWebEngineWidgets",
		},
		func(fullpath string) bool {
			baseName := filepath.Base(fullpath)
			if baseName == "qtwebenginewidgets-config.h" {
				return false
			}
			return true
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6WebEngineWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)


	// Qt 6 PDF
	generate(
		"qt6/pdf",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtPdf",
			"/usr/include/x86_64-linux-gnu/qt6/QtPdfWidgets",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PdfWidgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)



	// Qt 6 Charts
	// Depends on QtCore/Gui/Widgets
	generate(
		"qt-restricted-extras/charts6",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtCharts",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Charts"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 QScintilla
	// Depends on QtCore/Gui/Widgets, QPrintSupport
	generate(
		"qt-restricted-extras/qscintilla6",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/Qsci",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PrintSupport"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)
}
