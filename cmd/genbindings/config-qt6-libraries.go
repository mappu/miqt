package main

import (
	"path/filepath"
	"strings"
)

func Qt6_ProcessLibraries(clangBin, outDir, extraLibsDir string) {

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

	// Qt 6 SQL
	// Depends on QtCore
	generate(
		"qt6/sql",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtSql",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Sql"),
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
