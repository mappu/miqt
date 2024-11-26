package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/svg"
)

func main() {

	qt.NewQApplication(os.Args)

	w := svg.NewQSvgWidget3("../../../doc/logo.svg")
	w.Show()

	qt.QApplication_Exec()
}
