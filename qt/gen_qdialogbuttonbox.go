package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qdialogbuttonbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QDialogButtonBox struct {
	h *C.QDialogButtonBox
	*QWidget
}

func (this *QDialogButtonBox) cPointer() *C.QDialogButtonBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDialogButtonBox(h *C.QDialogButtonBox) *QDialogButtonBox {
	return &QDialogButtonBox{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQDialogButtonBox_U(h unsafe.Pointer) *QDialogButtonBox {
	return newQDialogButtonBox((*C.QDialogButtonBox)(h))
}

// NewQDialogButtonBox constructs a new QDialogButtonBox object.
func NewQDialogButtonBox() *QDialogButtonBox {
	ret := C.QDialogButtonBox_new()
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox2 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox2(parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new2(parent.cPointer())
	return newQDialogButtonBox(ret)
}

func (this *QDialogButtonBox) MetaObject() *QMetaObject {
	ret := C.QDialogButtonBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDialogButtonBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialogButtonBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDialogButtonBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialogButtonBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDialogButtonBox) RemoveButton(button *QAbstractButton) {
	C.QDialogButtonBox_RemoveButton(this.h, button.cPointer())
}

func (this *QDialogButtonBox) Clear() {
	C.QDialogButtonBox_Clear(this.h)
}

func (this *QDialogButtonBox) Buttons() []*QAbstractButton {
	var _out **C.QAbstractButton = nil
	var _out_len C.size_t = 0
	C.QDialogButtonBox_Buttons(this.h, &_out, &_out_len)
	ret := make([]*QAbstractButton, int(_out_len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAbstractButton(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDialogButtonBox) SetCenterButtons(center bool) {
	C.QDialogButtonBox_SetCenterButtons(this.h, (C.bool)(center))
}

func (this *QDialogButtonBox) CenterButtons() bool {
	ret := C.QDialogButtonBox_CenterButtons(this.h)
	return (bool)(ret)
}

func (this *QDialogButtonBox) Clicked(button *QAbstractButton) {
	C.QDialogButtonBox_Clicked(this.h, button.cPointer())
}

func (this *QDialogButtonBox) OnClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDialogButtonBox_connect_Clicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDialogButtonBox) Accepted() {
	C.QDialogButtonBox_Accepted(this.h)
}

func (this *QDialogButtonBox) OnAccepted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDialogButtonBox_connect_Accepted(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDialogButtonBox) HelpRequested() {
	C.QDialogButtonBox_HelpRequested(this.h)
}

func (this *QDialogButtonBox) OnHelpRequested(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDialogButtonBox_connect_HelpRequested(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDialogButtonBox) Rejected() {
	C.QDialogButtonBox_Rejected(this.h)
}

func (this *QDialogButtonBox) OnRejected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDialogButtonBox_connect_Rejected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QDialogButtonBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialogButtonBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDialogButtonBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialogButtonBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDialogButtonBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialogButtonBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDialogButtonBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDialogButtonBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDialogButtonBox) Delete() {
	C.QDialogButtonBox_Delete(this.h)
}
