package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcommandlinkbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QCommandLinkButton struct {
	h *C.QCommandLinkButton
	*QPushButton
}

func (this *QCommandLinkButton) cPointer() *C.QCommandLinkButton {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCommandLinkButton(h *C.QCommandLinkButton) *QCommandLinkButton {
	return &QCommandLinkButton{h: h, QPushButton: newQPushButton_U(unsafe.Pointer(h))}
}

func newQCommandLinkButton_U(h unsafe.Pointer) *QCommandLinkButton {
	return newQCommandLinkButton((*C.QCommandLinkButton)(h))
}

// NewQCommandLinkButton constructs a new QCommandLinkButton object.
func NewQCommandLinkButton() *QCommandLinkButton {
	ret := C.QCommandLinkButton_new()
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton2 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton2(text string) *QCommandLinkButton {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QCommandLinkButton_new2(text_Cstring, C.ulong(len(text)))
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton3 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton3(text string, description string) *QCommandLinkButton {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	ret := C.QCommandLinkButton_new3(text_Cstring, C.ulong(len(text)), description_Cstring, C.ulong(len(description)))
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton4 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton4(parent *QWidget) *QCommandLinkButton {
	ret := C.QCommandLinkButton_new4(parent.cPointer())
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton5 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton5(text string, parent *QWidget) *QCommandLinkButton {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QCommandLinkButton_new5(text_Cstring, C.ulong(len(text)), parent.cPointer())
	return newQCommandLinkButton(ret)
}

// NewQCommandLinkButton6 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton6(text string, description string, parent *QWidget) *QCommandLinkButton {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	ret := C.QCommandLinkButton_new6(text_Cstring, C.ulong(len(text)), description_Cstring, C.ulong(len(description)), parent.cPointer())
	return newQCommandLinkButton(ret)
}

func (this *QCommandLinkButton) MetaObject() *QMetaObject {
	ret := C.QCommandLinkButton_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QCommandLinkButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLinkButton_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLinkButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLinkButton_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLinkButton) Description() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLinkButton_Description(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLinkButton) SetDescription(description string) {
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	C.QCommandLinkButton_SetDescription(this.h, description_Cstring, C.ulong(len(description)))
}

func QCommandLinkButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLinkButton_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLinkButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLinkButton_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLinkButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLinkButton_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLinkButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLinkButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLinkButton) Delete() {
	C.QCommandLinkButton_Delete(this.h)
}
