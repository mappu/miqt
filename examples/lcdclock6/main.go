package main

import (
	"os"
	"strings"

	qt "github.com/mappu/miqt/qt6"
)

func main() {

	qt.NewQApplication(os.Args)

	widget := qt.NewQWidget2()
	defer widget.Delete()

	widget.SetWindowTitle("Qt 6 LCD Clock Example")
	widget.Resize(360, 240)

	hbox := qt.NewQHBoxLayout(widget)

	lcd := qt.NewQLCDNumber(widget)
	lcd.SetStyleSheet("background-color: #729fcf; color: white;")

	time := qt.QTime_CurrentTime()
	defer time.Delete()

	text := time.ToStringWithFormat("hh:mm")
	if (time.Second() % 2) == 0 {
		text = strings.Replace(text, ":", " ", -1)
	}
	lcd.Display(text)

	hbox.AddWidget(lcd.QFrame.QWidget)

	timer := qt.NewQTimer2(widget.QObject)
	timer.Start(1000)
	timer.OnTimeout(func() {
		time := qt.QTime_CurrentTime()
		defer time.Delete()

		text := time.ToStringWithFormat("hh:mm")
		if (time.Second() % 2) == 0 {
			text = strings.Replace(text, ":", " ", -1)
		}
		lcd.Display(text)
	})

	widget.Show()

	qt.QApplication_Exec()
}
