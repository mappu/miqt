package main

import (
	"os"

	"github.com/mappu/miqt/qt"
)

func main() {

	qt.NewQApplication(os.Args)

	widget := qt.NewQWidget2()
	widget.SetFixedWidth(320)
	widget.SetFixedHeight(240)

	widget.OnPaintEvent(func(ev *qt.QPaintEvent) {
		panic("xyz")

		ptr := qt.NewQPainter2(widget.QPaintDevice)
		defer ptr.Delete()

		br := qt.NewQBrush12(qt.Black, qt.SolidPattern)
		defer br.Delete()

		ptr.SetBrush(br)

		ptr.DrawRect2(80, 60, 160, 120)
		ptr.End()
	})

	widget.Show()
	widget.Repaint()
	widget.Update()

	qt.QApplication_Exec()
}
