package main

import (
	"path/filepath"
	"strings"
)

var qtVersion string

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

	// Define our module configuration
	type moduleConfig struct {
		path         string
		dirs         []string
		allowHeader  func(string) bool
		cflags       string
		clangMatcher ClangMatcher
	}

	flushKnownTypes()
	InsertTypedefs(false)

	// Qt 5 modules
	modules5 := []moduleConfig{
		{
			path: "qt",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtCore",
				"/usr/include/x86_64-linux-gnu/qt5/QtGui",
				"/usr/include/x86_64-linux-gnu/qt5/QtWidgets",
			},
			allowHeader: func(fullpath string) bool {
				// Block cbor and generate it separately
				fname := filepath.Base(fullpath)
				if strings.HasPrefix(fname, "qcbor") {
					return false
				}
				return Widgets_AllowHeader(fullpath)
			},
			cflags:       pkgConfigCflags("Qt5Widgets"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},
		{
			path: "qt/cbor",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtCore",
			},
			allowHeader: func(fullpath string) bool {
				// Only include the same json, xml, cbor files excluded above
				fname := filepath.Base(fullpath)
				return strings.HasPrefix(fname, "qcbor")
			},
			cflags:       pkgConfigCflags("Qt5Core"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 PrintSupport
		{
			path: "qt/printsupport",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtPrintSupport",
			},
			allowHeader:  AllowAllHeaders,
			cflags:       pkgConfigCflags("Qt5PrintSupport"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 SVG
		{
			path: "qt/svg",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtSvg",
			},
			allowHeader:  AllowAllHeaders,
			cflags:       pkgConfigCflags("Qt5Svg"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 Network (1/3)
		{
			path: "qt/network",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtNetwork",
			},
			allowHeader:  ExceptHeaders("qdtls.h", "qsctpserver.h", "qsctpsocket.h"),
			cflags:       pkgConfigCflags("Qt5Network"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 Network (2/3)
		{
			path: "qt/network/sctp",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtNetwork",
			},
			allowHeader:  OnlyHeaders("qsctpserver.h", "qsctpsocket.h"),
			cflags:       pkgConfigCflags("Qt5Network"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 Network (3/3) - split out DTLS into subpackage because macOS Brew is
		// compiled with it disabled
		// There are still some extra functions to move out from qsslconfiguration.h
		// @ref https://github.com/mappu/miqt/issues/151

		{
			path: "qt/network/dtls",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtNetwork",
			},
			allowHeader:  OnlyHeaders("qdtls.h"),
			cflags:       pkgConfigCflags("Qt5Network"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 Multimedia
		{
			path: "qt/multimedia",
			dirs: []string{
				// Theoretically, QtMultimediaWidgets and QtMultimedia are different
				// packages, but QtMultimedia qcamera.h has a dependency on qvideowidget.
				// Bind them together since our base /qt/ package is Widgets anyway.
				"/usr/include/x86_64-linux-gnu/qt5/QtMultimedia",
				"/usr/include/x86_64-linux-gnu/qt5/QtMultimediaWidgets",
			},
			allowHeader:  AllowAllHeaders,
			cflags:       pkgConfigCflags("Qt5MultimediaWidgets"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 Script
		{
			path: "qt/script",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtScript",
			},
			allowHeader:  AllowAllHeaders,
			cflags:       pkgConfigCflags("Qt5Script"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 WebKit: depends on Qt5PrintSupport but only at runtime, not at
		// codegen time
		{
			path: "qt/webkit",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtWebKit",
				"/usr/include/x86_64-linux-gnu/qt5/QtWebKitWidgets",
			},
			allowHeader:  AllowAllHeaders,
			cflags:       pkgConfigCflags("Qt5WebKitWidgets"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 WebChannel
		{
			path: "qt/webchannel",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtWebChannel",
			},
			allowHeader:  AllowAllHeaders,
			cflags:       pkgConfigCflags("Qt5WebChannel"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 WebEngine
		{
			path: "qt/webengine",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtWebEngine",
				"/usr/include/x86_64-linux-gnu/qt5/QtWebEngineCore",
				"/usr/include/x86_64-linux-gnu/qt5/QtWebEngineWidgets",
			},
			allowHeader:  ExceptHeaders("qquickwebengineprofile.h", "qquickwebenginescript.h"),
			cflags:       pkgConfigCflags("Qt5WebEngineWidgets"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// Qt 5 PDF
		// Depends on QtCore/Gui/Widgets
		{
			path: "qt/pdf",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/QtPdf",
				"/usr/include/x86_64-linux-gnu/qt5/QtPdfWidgets",
			},
			allowHeader:  AllowAllHeaders,
			cflags:       pkgConfigCflags("Qt5PdfWidgets"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// QScintilla 5
		// Depends on QtCore/Gui/Widgets, QPrintSupport
		{
			path: "qt-restricted-extras/qscintilla",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt5/Qsci",
			},
			allowHeader:  AllowAllHeaders,
			cflags:       pkgConfigCflags("Qt5PrintSupport"),
			clangMatcher: ClangMatchSameHeaderDefinitionOnly,
		},

		// QScintillaEdit 5
		// Depends on QtCore/Gui/Widgets
		{
			path: "qt-extras/scintillaedit",
			dirs: []string{
				filepath.Join(extraLibsDir, "scintilla/qt/ScintillaEdit/ScintillaEdit.h"),
			},
			allowHeader:  AllowAllHeaders,
			cflags:       "--std=c++1z " + pkgConfigCflags("ScintillaEdit"),
			clangMatcher: (&clangMatchUnderPath{filepath.Join(extraLibsDir, "scintilla")}).Match,
		},
	}

	qtVersion = "qt5"
	// PASS 1: Gather all types across all modules
	for _, mod := range modules5 {
		gatherTypes(
			mod.path,
			mod.dirs,
			mod.allowHeader,
			clangBin,
			mod.cflags,
		)
	}

	// PASS 2: Generate bindings with complete type information
	for _, mod := range modules5 {
		generate(
			mod.path,
			mod.dirs,
			mod.allowHeader,
			outDir,
			mod.clangMatcher,
		)
	}

	// FLUSH all known typedefs / ...

	flushKnownTypes()
	InsertTypedefs(true)

	// Qt 6 modules
	modules6 := []moduleConfig{
		{
			path: "qt6",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtCore",
				"/usr/include/x86_64-linux-gnu/qt6/QtGui",
				"/usr/include/x86_64-linux-gnu/qt6/QtWidgets",
			},
			allowHeader: func(fullpath string) bool {
				// Block cbor and generate it separately
				fname := filepath.Base(fullpath)
				if strings.HasPrefix(fname, "qcbor") {
					return false
				}
				return Widgets_AllowHeader(fullpath)
			},
			cflags: "--std=c++17 " + pkgConfigCflags("Qt6Widgets"),
		},

		{
			path: "qt6/cbor",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtCore",
			},
			allowHeader: func(fullpath string) bool {
				// Only include the same json, xml, cbor files excluded above
				fname := filepath.Base(fullpath)
				return strings.HasPrefix(fname, "qcbor")
			},
			cflags: "--std=c++20 " + pkgConfigCflags("Qt6Core"),
		},

		// Qt 6 Qml
		{
			path: "qt6/qml",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtQml",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6Qml"),
		},

		// Qt 6 PrintSupport
		{
			path: "qt6/printsupport",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtPrintSupport",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6PrintSupport"),
		},

		// Qt 6 SVG
		{
			path: "qt6/svg",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtSvg",
				"/usr/include/x86_64-linux-gnu/qt6/QtSvgWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6SvgWidgets"),
		},

		// Qt 6 QtNetwork (1/3)
		{
			path: "qt6/network",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
			},
			allowHeader: ExceptHeaders("qtnetwork-config.h", "qsctpserver.h", "qsctpsocket.h", "qdtls.h"),
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6Network"),
		},

		// Qt 6 Network (2/3) - split out SCTP into subpackage because Arch Linux is
		// compiled with it disabled
		// @ref https://github.com/mappu/miqt/issues/150
		// @ref https://github.com/mappu/miqt/issues/194
		{
			path: "qt6/network/sctp",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
			},
			allowHeader: OnlyHeaders("qsctpserver.h", "qsctpsocket.h"),
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6Network"),
		},

		// Qt 6 Network (3/3) - split out DTLS into subpackage because macOS Brew is
		// compiled with it disabled
		// There are still some extra functions to move out from qsslconfiguration.h
		// @ref https://github.com/mappu/miqt/issues/151
		{
			path: "qt6/network/dtls",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
			},
			allowHeader: OnlyHeaders("qdtls.h"),
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6Network"),
		},

		// Qt 6 Multimedia
		{
			path: "qt6/multimedia",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtMultimedia",
				"/usr/include/x86_64-linux-gnu/qt6/QtMultimediaWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6MultimediaWidgets"),
		},

		// Qt 6 Spatial Audio (on Debian this is a dependency of Qt6Multimedia)
		{
			path: "qt6/spatialaudio",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtSpatialAudio",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6SpatialAudio"),
		},

		// Qt 6 WebChannel (1/2)
		// Exclude qqmlwebchannel because Arch Linux packages it differently
		// @ref https://github.com/mappu/miqt/issues/150
		// @ref https://github.com/mappu/miqt/issues/194
		{
			path: "qt6/webchannel",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtWebChannel",
			},
			allowHeader: ExceptHeaders("qqmlwebchannel.h"),
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6WebChannel"),
		},

		// Qt 6 WebChannel (2/2)
		// Just the Qt Quick part of qqmlwebchannel
		{
			path: "qt6/webchannel/qmlwebchannel",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtWebChannel",
			},
			allowHeader: OnlyHeaders("qqmlwebchannel.h"),
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6WebChannel"),
		},

		// Qt 6 WebEngine
		{
			path: "qt6/webengine",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtWebEngineCore",
				"/usr/include/x86_64-linux-gnu/qt6/QtWebEngineWidgets",
			},
			allowHeader: func(fullpath string) bool {
				baseName := filepath.Base(fullpath)
				return baseName != "qtwebenginewidgets-config.h"
			},
			cflags: "--std=c++17 " + pkgConfigCflags("Qt6WebEngineWidgets"),
		},

		// Qt 6 PDF
		{
			path: "qt6/pdf",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtPdf",
				"/usr/include/x86_64-linux-gnu/qt6/QtPdfWidgets",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6PdfWidgets"),
		},

		// Qt 6 Charts
		// Depends on QtCore/Gui/Widgets
		{
			path: "qt-restricted-extras/charts6",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/QtCharts",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6Charts"),
		},

		// QScintilla 6
		// Depends on QtCore/Gui/Widgets, QPrintSupport
		{
			path: "qt-restricted-extras/qscintilla6",
			dirs: []string{
				"/usr/include/x86_64-linux-gnu/qt6/Qsci",
			},
			allowHeader: AllowAllHeaders,
			cflags:      "--std=c++17 " + pkgConfigCflags("Qt6PrintSupport"),
		},
	}

	qtVersion = "qt6"
	// PASS 1: Gather all types across all modules
	for _, mod := range modules6 {
		gatherTypes(
			mod.path,
			mod.dirs,
			mod.allowHeader,
			clangBin,
			mod.cflags,
		)
	}

	// PASS 2: Generate bindings with complete type information
	for _, mod := range modules6 {
		generate(
			mod.path,
			mod.dirs,
			mod.allowHeader,
			outDir,
			ClangMatchSameHeaderDefinitionOnly,
		)
	}
}
