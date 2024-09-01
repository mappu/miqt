package qt

/*

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
	if h == nil {
		return nil
	}
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
func NewQDialogButtonBox2(orientation uintptr) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new2((C.uintptr_t)(orientation))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox3 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox3(buttons int) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new3((C.int)(buttons))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox4 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox4(buttons int, orientation uintptr) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new4((C.int)(buttons), (C.uintptr_t)(orientation))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox5 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox5(parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new5(parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox6 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox6(orientation uintptr, parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new6((C.uintptr_t)(orientation), parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox7 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox7(buttons int, parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new7((C.int)(buttons), parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox8 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox8(buttons int, orientation uintptr, parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new8((C.int)(buttons), (C.uintptr_t)(orientation), parent.cPointer())
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

func (this *QDialogButtonBox) SetOrientation(orientation uintptr) {
	C.QDialogButtonBox_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QDialogButtonBox) Orientation() uintptr {
	ret := C.QDialogButtonBox_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QDialogButtonBox) AddButton(button *QAbstractButton, role uintptr) {
	C.QDialogButtonBox_AddButton(this.h, button.cPointer(), (C.uintptr_t)(role))
}

func (this *QDialogButtonBox) AddButton2(text string, role uintptr) *QPushButton {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QDialogButtonBox_AddButton2(this.h, text_Cstring, C.ulong(len(text)), (C.uintptr_t)(role))
	return newQPushButton_U(unsafe.Pointer(ret))
}

func (this *QDialogButtonBox) AddButtonWithButton(button uintptr) *QPushButton {
	ret := C.QDialogButtonBox_AddButtonWithButton(this.h, (C.uintptr_t)(button))
	return newQPushButton_U(unsafe.Pointer(ret))
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

func (this *QDialogButtonBox) ButtonRole(button *QAbstractButton) uintptr {
	ret := C.QDialogButtonBox_ButtonRole(this.h, button.cPointer())
	return (uintptr)(ret)
}

func (this *QDialogButtonBox) SetStandardButtons(buttons int) {
	C.QDialogButtonBox_SetStandardButtons(this.h, (C.int)(buttons))
}

func (this *QDialogButtonBox) StandardButtons() int {
	ret := C.QDialogButtonBox_StandardButtons(this.h)
	return (int)(ret)
}

func (this *QDialogButtonBox) StandardButton(button *QAbstractButton) uintptr {
	ret := C.QDialogButtonBox_StandardButton(this.h, button.cPointer())
	return (uintptr)(ret)
}

func (this *QDialogButtonBox) Button(which uintptr) *QPushButton {
	ret := C.QDialogButtonBox_Button(this.h, (C.uintptr_t)(which))
	return newQPushButton_U(unsafe.Pointer(ret))
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
