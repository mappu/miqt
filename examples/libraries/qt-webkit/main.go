package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/webkit"
)

func main() {

	qt.NewQApplication(os.Args)

	w := webkit.NewQWebView2()
	w.Load(qt.NewQUrl3("https://www.github.com/mappu/miqt"))
	w.Show()

	qt.QApplication_Exec()
}
