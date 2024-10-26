package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt-restricted-extras/qscintilla"
)

func main() {

	qt.NewQApplication(os.Args)

	area := qscintilla.NewQsciScintilla2()
	area.SetFixedSize2(640, 480)
	area.Show()

	qt.QApplication_Exec()
}
