package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/webengine"
)

func main() {

	qt.NewQApplication(os.Args)

	w := webengine.NewQWebEngineView2()
	w.Load(qt.NewQUrl3("https://www.github.com/mappu/miqt"))
	w.Show()

	qt.QApplication_Exec()
}
