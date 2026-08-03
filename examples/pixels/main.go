package main

import (
	"fmt"
	"os"

	"github.com/mappu/miqt/qt"
)

const (
	ZoomInScale  = 1.25
	ZoomOutScale = 0.8
	DX           = 32
	DY           = 64
	ReplacementR = 255
	ReplacementG = 255
	ReplacementB = 255
)

func main() {
	qt.NewQApplication(os.Args)

	window := qt.NewQMainWindow2()
	defer window.Delete()

	window.SetWindowTitle("Qt 5 Pixel Editor Example")
	window.Resize(540, 520)
	window.SetMinimumSize2(360, 450)

	statusBar := qt.NewQStatusBar(window.QWidget)
	window.SetStatusBar(statusBar)

	scene := qt.NewQGraphicsScene()
	defer scene.Delete()

	view := qt.NewQGraphicsView2()
	defer view.Delete()

	scene.OnKeyPressEvent(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent) {
		key := event.Key()
		switch key {
		case int(qt.Key_0):
			view.Scale(ZoomInScale, ZoomInScale)
		case int(qt.Key_9):
			view.Scale(ZoomOutScale, ZoomOutScale)
		}
	})

	scene.OnWheelEvent(func(super func(event *qt.QGraphicsSceneWheelEvent), event *qt.QGraphicsSceneWheelEvent) {
		if (qt.QGuiApplication_QueryKeyboardModifiers() & qt.ShiftModifier) != 0 {
			if event.Delta() > 0 {
				view.Scale(ZoomInScale, ZoomInScale)
			} else {
				view.Scale(ZoomOutScale, ZoomOutScale)
			}
		}
	})

	view.OnResizeEvent(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent) {
		rect := scene.ItemsBoundingRect()
		defer rect.Delete()

		view.FitInView3(rect, qt.KeepAspectRatio)
	})

	image := qt.NewQImage3(DX, DY, qt.QImage__Format_ARGB32)
	defer image.Delete()

	for x := 0; x < DX; x++ {
		for y := 0; y < DY; y++ {
			color := qt.NewQColor11(x, y*3, x*4, 255)
			defer color.Delete()

			image.SetPixelColor(x, y, color)
		}
	}

	pixmap := qt.QPixmap_FromImage(image)
	defer pixmap.Delete()

	item := qt.NewQGraphicsPixmapItem2(pixmap)
	defer item.Delete()

	item.SetAcceptHoverEvents(true)

	item.OnMouseMoveEvent(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent) {
		pos := event.Pos()
		defer pos.Delete()

		drawPixel(item, pos, statusBar)
	})

	item.OnMousePressEvent(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent) {
		pos := event.Pos()
		defer pos.Delete()

		drawPixel(item, pos, statusBar)
	})

	item.OnHoverMoveEvent(func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent) {
		pos := event.Pos()
		defer pos.Delete()

		x := int(pos.X())
		y := int(pos.Y())

		pm := item.Pixmap()
		defer pm.Delete()

		img := pm.ToImage()
		defer img.Delete()

		height := img.Height()
		width := img.Width()

		if x < 0 || y < 0 || x >= width || y >= height {
			return
		}

		colorValue := img.PixelColor(x, y)
		defer colorValue.Delete()

		r := colorValue.Red()
		g := colorValue.Green()
		b := colorValue.Blue()

		msg := fmt.Sprintf("x: %d, y: %d, r: %d, g: %d, b: %d", x, y, r, g, b)
		statusBar.ShowMessage(msg)
	})

	scene.AddItem(item.QGraphicsItem)
	view.SetScene(scene)
	view.Show()

	statusBar.ShowMessage("Click and drag to draw a pixel. Use Shift+scroll or keys 0 or 9 to zoom in or out.")

	window.SetCentralWidget(view.QWidget)
	window.Show()

	qt.QApplication_Exec()
}

func drawPixel(item *qt.QGraphicsPixmapItem, pos *qt.QPointF, statusBar *qt.QStatusBar) {
	x := int(pos.X())
	y := int(pos.Y())

	pm := item.Pixmap()
	defer pm.Delete()

	img := pm.ToImage()
	defer img.Delete()

	color := qt.NewQColor11(ReplacementR, ReplacementG, ReplacementB, 255)
	defer color.Delete()

	height := img.Height()
	width := img.Width()

	if x < 0 || y < 0 || x >= width || y >= height {
		return
	}

	msg := fmt.Sprintf("x: %d, y: %d, r: %d, g: %d, b: %d", x, y, ReplacementR, ReplacementG, ReplacementB)
	statusBar.ShowMessage(msg)

	img.SetPixelColor(x, y, color)

	pm2 := qt.QPixmap_FromImage(img)
	defer pm2.Delete()

	item.SetPixmap(pm2)
}
