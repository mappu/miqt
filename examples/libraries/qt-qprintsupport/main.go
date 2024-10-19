package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/qprintsupport"
)

func main() {

	qt.NewQApplication(os.Args)

	btn := qt.NewQPushButton2("QPrintSupport sample")
	btn.SetFixedWidth(320)

	btn.OnPressed(func() {

		dlg := qprintsupport.NewQPrintDialog2()
		dlg.OnFinished(func(int) {
			dlg.DeleteLater()
		})
		dlg.Show()
	})

	btn.Show()

	qt.QApplication_Exec()
}
