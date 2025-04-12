package main

import (
	"fmt"
	"os"
	"runtime"
	"time"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/mainthread"
)

func main() {
	threadcount := runtime.GOMAXPROCS(0)

	qt.NewQApplication(os.Args)

	window := qt.NewQMainWindow2()
	window.QWidget.SetFixedSize2(250, 50*(threadcount+1))
	window.QWidget.SetWindowTitle("goroutine Example")

	widget := qt.NewQWidget(window.QWidget)
	var layout = qt.NewQVBoxLayout2()
	widget.SetLayout(layout.QLayout)
	window.SetCentralWidget(widget)

	labels := make([]*qt.QLabel, threadcount)
	for i := range labels {
		label := qt.NewQLabel(window.QWidget)
		label.SetAlignment(qt.AlignCenter)
		widget.Layout().AddWidget(label.QWidget)
		labels[i] = label
	}

	button := qt.NewQPushButton5("start!", window.QWidget)
	button.OnClicked(func() {
		button.SetDisabled(true)
		for i, label := range labels {
			go func(index int, qlabel *qt.QLabel) {
				var tick int
				for range time.NewTicker(time.Duration((index+1)*25) * time.Millisecond).C {
					tick++
					// time.Sleep(50 * time.Millisecond)

					mainthread.Wait(func() {
						qlabel.SetText(fmt.Sprintf("%v %v", tick, time.Now().UTC().Format("15:04:05.0000")))
					})
				}
			}(i, label)
		}
	})
	widget.Layout().AddWidget(button.QWidget)

	window.Show()

	qt.QApplication_Exec()
}
