package main

import (
	"os"

	"github.com/mappu/miqt/qt"
)

func main() {
	qt.NewQApplication(os.Args)
	qt.QGuiApplication_SetApplicationDisplayName("Right-click to change color")

	w := qt.NewQGroupBox2() // qt.NewQw2()
	w.SetTitle("QGroupBox title")

	w.SetFixedWidth(320)
	w.SetFixedHeight(240)
	w.SetMinimumHeight(100)
	w.SetMinimumWidth(100)

	useColors := []qt.GlobalColor{
		qt.Black, qt.Red, qt.Green, qt.Blue,
	}
	currentColor := 0

	w.OnPaintEvent(func(super func(ev *qt.QPaintEvent), ev *qt.QPaintEvent) {
		// Call the base class's PaintEvent to get initial content
		// (Comment this out to see the QGroupBox disappear)
		super(ev)

		// Then, draw on top of it
		ptr := qt.NewQPainter2(w.QPaintDevice)
		defer ptr.Delete()

		br := qt.NewQBrush12(useColors[currentColor], qt.SolidPattern)
		defer br.Delete()

		ptr.SetBrush(br)

		ptr.DrawRect2(80, 60, 160, 120)
		ptr.End()
	})

	w.OnContextMenuEvent(func(super func(ev *qt.QContextMenuEvent), ev *qt.QContextMenuEvent) {
		super(ev)

		currentColor = (currentColor + 1) % len(useColors)
		w.Update() // repaints in next event loop tick
	})

	w.Show()

	qt.QApplication_Exec()
}
