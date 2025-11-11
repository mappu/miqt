package main

import (
	"path/filepath"
	"strings"
)

func Qt5_ProcessLibraries(clangBin, outDir, extraLibsDir string) {

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

	// Qt 5 SQL
	// Depends on QtCore
	generate(
		"qt/sql",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtSql",
		},
		AllowAllHeaders,
		clangBin,
		pkgConfigCflags("Qt5Sql"),
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
}
