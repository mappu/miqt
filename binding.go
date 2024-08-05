package main

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "binding.h"

*/
import "C"

import (
	"unsafe"
)

func CArray(data []string) (C.int, **C.char) {

	c_argv := (*[0xfff]*C.char)(C.malloc(C.ulong(8 /* sizeof pointer */ * len(data))))

	for i, arg := range data {
		c_argv[i] = C.CString(arg)
	}

	return C.int(len(data)), (**C.char)(unsafe.Pointer(c_argv))
}

//

type QApplication struct {
	h C.PQApplication
}

func NewQApplication(args []string) *QApplication {
	argc, argv := CArray(args)
	h := C.QApplication_new(&argc, argv)
	return &QApplication{h: h}
}

func (this *QApplication) Exec() int {
	ret := C.QApplication_exec(this.h)
	return int(ret)
}

//

type QWidget struct {
	h C.PQWidget
}

func NewQWidget() *QWidget {
	ret := C.QWidget_new()
	return &QWidget{h: ret}
}

func (this *QWidget) Show() {
	C.QWidget_show(this.h)
}

//

type QPushButton struct {
	h C.PQPushButton
}

func NewQPushButton(label string, parent QWidget) *QPushButton {
	h := C.QPushButton_new(C.CString(label), parent.h)
	return &QPushButton{h: h}
}

func (this *QPushButton) Show() {
	C.QPushButton_show(this.h)
}

func (this *QPushButton) AsQWidget() *QWidget {
	return &QWidget{h: C.PQWidget(this.h)} // Type cast
}
