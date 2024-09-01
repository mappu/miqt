package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qrasterwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QRasterWindow struct {
	h *C.QRasterWindow
	*QPaintDeviceWindow
}

func (this *QRasterWindow) cPointer() *C.QRasterWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRasterWindow(h *C.QRasterWindow) *QRasterWindow {
	if h == nil {
		return nil
	}
	return &QRasterWindow{h: h, QPaintDeviceWindow: newQPaintDeviceWindow_U(unsafe.Pointer(h))}
}

func newQRasterWindow_U(h unsafe.Pointer) *QRasterWindow {
	return newQRasterWindow((*C.QRasterWindow)(h))
}

// NewQRasterWindow constructs a new QRasterWindow object.
func NewQRasterWindow() *QRasterWindow {
	ret := C.QRasterWindow_new()
	return newQRasterWindow(ret)
}

// NewQRasterWindow2 constructs a new QRasterWindow object.
func NewQRasterWindow2(parent *QWindow) *QRasterWindow {
	ret := C.QRasterWindow_new2(parent.cPointer())
	return newQRasterWindow(ret)
}

func (this *QRasterWindow) MetaObject() *QMetaObject {
	ret := C.QRasterWindow_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QRasterWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRasterWindow_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRasterWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRasterWindow_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRasterWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRasterWindow_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRasterWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRasterWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRasterWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRasterWindow_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRasterWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRasterWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRasterWindow) Delete() {
	C.QRasterWindow_Delete(this.h)
}
