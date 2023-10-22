package main

import (
	"fmt"
	"os"
)

func main() {

	app := NewQApplication(os.Args)

	/*
		btn := NewQPushButton("Hello world!", QWidget{})
		fmt.Printf("%#v\n", btn)

		btn.Show()
	*/

	wid := NewQWidget()
	_ = wid
	wid.Show()

	app.Exec()

	fmt.Println("OK!")
}
