package main

import (
	"fmt"
	"os"
)

func main() {

	app := NewQApplication(os.Args)
	_ = app

	/*
		btn := NewQPushButton("Hello world!", QWidget{})
		fmt.Printf("%#v\n", btn)

		btn.Show()
	*/

	wid := NewQWidget()
	_ = wid

	btn := NewQPushButton("Hello world!", wid)
	_ = btn

	wid.Show()

	app.Exec()

	fmt.Println("OK!")
}
