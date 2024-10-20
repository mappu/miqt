package main

import (
	"path/filepath"
)

func ProcessLibraries(clangBin, outDir, extraLibsDir string) {

	flushKnownTypes()
	InsertTypedefs(false)

	generate(
		"qt",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtCore",
			"/usr/include/x86_64-linux-gnu/qt5/QtGui",
			"/usr/include/x86_64-linux-gnu/qt5/QtWidgets",
		},
		clangBin,
		pkgConfigCflags("Qt5Widgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	generate(
		"qt/qprintsupport",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/QtPrintSupport",
		},
		clangBin,
		pkgConfigCflags("Qt5PrintSupport"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Depends on QtCore/Gui/Widgets, QPrintSupport
	generate(
		"qt-restricted-extras/qscintilla",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt5/Qsci",
		},
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
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Widgets"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)

	// Qt 6 QtPrintSupport
	generate(
		"qt6/qprintsupport",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtPrintSupport",
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PrintSupport"),
		outDir,
		ClangMatchSameHeaderDefinitionOnly,
	)
}
