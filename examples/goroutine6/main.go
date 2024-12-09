package main

import (
	"fmt"
	"os"
	"time"

	qt "github.com/mappu/miqt/qt6"
)

func main() {
	qt.NewQApplication(os.Args)

	window := qt.NewQMainWindow2()
	window.QWidget.SetFixedSize2(250, 200)
	window.QWidget.SetWindowTitle("goroutine Example")

	widget := qt.NewQWidget(window.QWidget)
	var layout = qt.NewQVBoxLayout2()
	widget.SetLayout(layout.QBoxLayout.QLayout)
	window.SetCentralWidget(widget)

	labels := make([]*qt.QLabel, 3)
	for i := range labels {
		label := qt.NewQLabel(window.QWidget)
		label.SetAlignment(qt.AlignCenter)
		widget.Layout().AddWidget(label.QWidget)
		labels[i] = label
	}

	button := qt.NewQPushButton5("start!", window.QWidget)
	button.OnClicked1(func(bool) {
		button.SetDisabled(true)
		for i, label := range labels {
			go func(index int, qlabel *qt.QLabel) {
				var tick int
				for range time.NewTicker(time.Duration((index+1)*25) * time.Millisecond).C {
					tick++
					time.Sleep(50 * time.Millisecond)
					qlabel.SetText(fmt.Sprintf("%v %v", tick, time.Now().UTC().Format("15:04:05.0000")))
				}
			}(i, label)
		}
	})
	widget.Layout().AddWidget(button.QAbstractButton.QWidget)

	window.Show()

	qt.QApplication_Exec()
}
