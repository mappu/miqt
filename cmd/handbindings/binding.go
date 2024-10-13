package main

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "binding.h"

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

func CArray(data []string) (C.int, **C.char) {

	c_argv := (*[0xfff]*C.char)(C.malloc(C.size_t(8 /* sizeof pointer */ * len(data))))

	for i, arg := range data {
		c_argv[i] = C.CString(arg)
	}

	return C.int(len(data)), (**C.char)(unsafe.Pointer(c_argv))
}

type CallbackFunc func(argc C.int, args *C.void)

//export miqt_exec_callback
func miqt_exec_callback(cb C.intptr_t, argc C.int, args *C.void) {
	// Our CABI for all callbacks is void(int, void*).
	// Our Go ABI is CallbackFunc
	// Then the Go bindings can unmarshal the arguments and C.free() them as necessary
	cfunc, ok := (cgo.Handle(cb)).Value().(CallbackFunc)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	cfunc(argc, args)
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

func (this *QWidget) CPointer() C.PQWidget {
	if this == nil {
		return nil
	}
	return this.h
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

func NewQPushButton(label string, parent *QWidget) *QPushButton {
	h := C.QPushButton_new(C.CString(label), parent.CPointer())
	return &QPushButton{h: h}
}

func (this *QPushButton) Show() {
	C.QPushButton_show(this.h)
}

func (this *QPushButton) AsQWidget() *QWidget {
	return &QWidget{h: C.PQWidget(this.h)} // Type cast
}

func (this *QPushButton) OnPressed(cb func()) {
	var cbWrapper CallbackFunc = func(argc C.int, args *C.void) {
		// Unmarshal arguments
		// Pressed() doesn't take any, though
		cb()
	}

	C.QPushButton_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(cbWrapper)))
	// TODO allow disconnect'ing, or tie lifespan for handle.Delete(), ...
}
