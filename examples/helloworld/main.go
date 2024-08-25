package main

import (
	"fmt"
	"os"

	"miqt/qt"
)

func main() {

	app := qt.NewQApplication(os.Args)
	_ = app

	btn := qt.NewQPushButton2("Hello world!")
	btn.SetFixedWidth(320)

	var counter int = 0

	btn.OnPressed(func() {
		counter++
		btn.SetText(fmt.Sprintf("You have clicked the button %d time(s)", counter))
	})

	btn.Show()

	qt.QApplication_Exec()

	fmt.Println("OK!")
}
