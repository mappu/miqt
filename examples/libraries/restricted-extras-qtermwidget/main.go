package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt-restricted-extras/qtermwidget"
)

func main() {

	qt.NewQApplication(os.Args)

	term := qtermwidget.NewQTermWidget3()
	term.SetFixedSize2(640, 480)
	term.Show()

	qt.QApplication_Exec()
}
