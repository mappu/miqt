package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfocusframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QFocusFrame struct {
	h *C.QFocusFrame
	*QWidget
}

func (this *QFocusFrame) cPointer() *C.QFocusFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFocusFrame(h *C.QFocusFrame) *QFocusFrame {
	if h == nil {
		return nil
	}
	return &QFocusFrame{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQFocusFrame_U(h unsafe.Pointer) *QFocusFrame {
	return newQFocusFrame((*C.QFocusFrame)(h))
}

// NewQFocusFrame constructs a new QFocusFrame object.
func NewQFocusFrame() *QFocusFrame {
	ret := C.QFocusFrame_new()
	return newQFocusFrame(ret)
}

// NewQFocusFrame2 constructs a new QFocusFrame object.
func NewQFocusFrame2(parent *QWidget) *QFocusFrame {
	ret := C.QFocusFrame_new2(parent.cPointer())
	return newQFocusFrame(ret)
}

func (this *QFocusFrame) MetaObject() *QMetaObject {
	ret := C.QFocusFrame_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFocusFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFocusFrame_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFocusFrame_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFocusFrame_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFocusFrame) SetWidget(widget *QWidget) {
	C.QFocusFrame_SetWidget(this.h, widget.cPointer())
}

func (this *QFocusFrame) Widget() *QWidget {
	ret := C.QFocusFrame_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func QFocusFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFocusFrame_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFocusFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFocusFrame_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFocusFrame_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFocusFrame_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFocusFrame_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFocusFrame_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFocusFrame) Delete() {
	C.QFocusFrame_Delete(this.h)
}
