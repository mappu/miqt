package main

import (
	"os"

	qt "github.com/mappu/miqt/qt6"
)

const (
	WIGGLY_TEXT = "Hello Wiggly Text"
	MAX_LENGTH  = 32
)

var sineTable = []int{
	0, 38, 71, 92,
	100, 92, 71, 38,
	0, -38, -71, -92,
	-100, -92, -71, -38,
}

type WigglyWidget struct {
	timer  *qt.QBasicTimer
	text   string
	step   int
	widget *qt.QWidget
}

func NewWigglyWidget(text string) *WigglyWidget {
	var self WigglyWidget

	self.step = 0
	self.text = text

	self.widget = qt.NewQWidget2()
	self.widget.SetBackgroundRole(qt.QPalette__Midlight)
	self.widget.SetAutoFillBackground(true)

	self.timer = qt.NewQBasicTimer()
	self.timer.Start(60, self.widget.QObject)

	font := qt.NewQFont()
	defer font.Delete()

	font.SetPointSize(font.PointSize() + 25)
	self.widget.SetFont(font)

	self.widget.OnPaintEvent(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent) {
		font := qt.NewQFont()
		defer font.Delete()

		fontMetrics := qt.NewQFontMetrics(font)
		defer fontMetrics.Delete()

		x := (self.widget.Width() - fontMetrics.HorizontalAdvance(self.text)) / 4
		y := (self.widget.Height() + fontMetrics.Ascent() - fontMetrics.Descent()) / 2

		color := qt.NewQColor()
		defer color.Delete()

		painter := qt.NewQPainter2(self.widget.QPaintDevice)
		defer painter.Delete()

		for i := range self.text {
			index := (self.step + i) % len(sineTable)
			color.SetHsv((63-index)*(len(sineTable)/4), 255, 191)
			painter.SetPen(color)
			painter.DrawText3(x,
				y-(sineTable[index]*fontMetrics.Height()*2)/300,
				self.text[i:i+1])
			x += fontMetrics.HorizontalAdvance(self.text[i:i+1]) * 3
		}
	})

	self.widget.OnTimerEvent(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent) {
		if event.TimerId() == self.timer.TimerId() {
			self.step++
			self.widget.Update()
		} else {
			super(event)
		}
	})

	return &self
}

func main() {
	qt.NewQApplication(os.Args)

	dialog := qt.NewQDialog2()
	defer dialog.Delete()

	dialog.SetWindowTitle("Qt 6 Wiggly Text Example")
	dialog.Resize(500, 180)

	wiggly := NewWigglyWidget(WIGGLY_TEXT)

	lineEdit := qt.NewQLineEdit2()
	lineEdit.SetText(WIGGLY_TEXT)
	lineEdit.SetMaxLength(MAX_LENGTH - 1)
	lineEdit.OnTextChanged(func(text string) {
		wiggly.text = text
		wiggly.widget.Update()
	})

	layout := qt.NewQVBoxLayout(dialog.QWidget)
	layout.AddWidget(wiggly.widget)
	layout.AddWidget(lineEdit.QWidget)

	dialog.Show()

	qt.QApplication_Exec()
}
