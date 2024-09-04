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

type QDialogButtonBox__ButtonRole int

const (
	QDialogButtonBox__ButtonRole__InvalidRole     QDialogButtonBox__ButtonRole = -1
	QDialogButtonBox__ButtonRole__AcceptRole      QDialogButtonBox__ButtonRole = 0
	QDialogButtonBox__ButtonRole__RejectRole      QDialogButtonBox__ButtonRole = 1
	QDialogButtonBox__ButtonRole__DestructiveRole QDialogButtonBox__ButtonRole = 2
	QDialogButtonBox__ButtonRole__ActionRole      QDialogButtonBox__ButtonRole = 3
	QDialogButtonBox__ButtonRole__HelpRole        QDialogButtonBox__ButtonRole = 4
	QDialogButtonBox__ButtonRole__YesRole         QDialogButtonBox__ButtonRole = 5
	QDialogButtonBox__ButtonRole__NoRole          QDialogButtonBox__ButtonRole = 6
	QDialogButtonBox__ButtonRole__ResetRole       QDialogButtonBox__ButtonRole = 7
	QDialogButtonBox__ButtonRole__ApplyRole       QDialogButtonBox__ButtonRole = 8
	QDialogButtonBox__ButtonRole__NRoles          QDialogButtonBox__ButtonRole = 9
)

type QDialogButtonBox__StandardButton int

const (
	QDialogButtonBox__StandardButton__NoButton        QDialogButtonBox__StandardButton = 0
	QDialogButtonBox__StandardButton__Ok              QDialogButtonBox__StandardButton = 1024
	QDialogButtonBox__StandardButton__Save            QDialogButtonBox__StandardButton = 2048
	QDialogButtonBox__StandardButton__SaveAll         QDialogButtonBox__StandardButton = 4096
	QDialogButtonBox__StandardButton__Open            QDialogButtonBox__StandardButton = 8192
	QDialogButtonBox__StandardButton__Yes             QDialogButtonBox__StandardButton = 16384
	QDialogButtonBox__StandardButton__YesToAll        QDialogButtonBox__StandardButton = 32768
	QDialogButtonBox__StandardButton__No              QDialogButtonBox__StandardButton = 65536
	QDialogButtonBox__StandardButton__NoToAll         QDialogButtonBox__StandardButton = 131072
	QDialogButtonBox__StandardButton__Abort           QDialogButtonBox__StandardButton = 262144
	QDialogButtonBox__StandardButton__Retry           QDialogButtonBox__StandardButton = 524288
	QDialogButtonBox__StandardButton__Ignore          QDialogButtonBox__StandardButton = 1048576
	QDialogButtonBox__StandardButton__Close           QDialogButtonBox__StandardButton = 2097152
	QDialogButtonBox__StandardButton__Cancel          QDialogButtonBox__StandardButton = 4194304
	QDialogButtonBox__StandardButton__Discard         QDialogButtonBox__StandardButton = 8388608
	QDialogButtonBox__StandardButton__Help            QDialogButtonBox__StandardButton = 16777216
	QDialogButtonBox__StandardButton__Apply           QDialogButtonBox__StandardButton = 33554432
	QDialogButtonBox__StandardButton__Reset           QDialogButtonBox__StandardButton = 67108864
	QDialogButtonBox__StandardButton__RestoreDefaults QDialogButtonBox__StandardButton = 134217728
	QDialogButtonBox__StandardButton__FirstButton     QDialogButtonBox__StandardButton = 1024
	QDialogButtonBox__StandardButton__LastButton      QDialogButtonBox__StandardButton = 134217728
)

type QDialogButtonBox__ButtonLayout int

const (
	QDialogButtonBox__ButtonLayout__WinLayout     QDialogButtonBox__ButtonLayout = 0
	QDialogButtonBox__ButtonLayout__MacLayout     QDialogButtonBox__ButtonLayout = 1
	QDialogButtonBox__ButtonLayout__KdeLayout     QDialogButtonBox__ButtonLayout = 2
	QDialogButtonBox__ButtonLayout__GnomeLayout   QDialogButtonBox__ButtonLayout = 3
	QDialogButtonBox__ButtonLayout__AndroidLayout QDialogButtonBox__ButtonLayout = 5
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
func NewQDialogButtonBox2(orientation Orientation) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new2((C.uintptr_t)(orientation))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox3 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox3(buttons int) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new3((C.int)(buttons))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox4 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox4(buttons int, orientation Orientation) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new4((C.int)(buttons), (C.uintptr_t)(orientation))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox5 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox5(parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new5(parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox6 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox6(orientation Orientation, parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new6((C.uintptr_t)(orientation), parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox7 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox7(buttons int, parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new7((C.int)(buttons), parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox8 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox8(buttons int, orientation Orientation, parent *QWidget) *QDialogButtonBox {
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

func (this *QDialogButtonBox) SetOrientation(orientation Orientation) {
	C.QDialogButtonBox_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QDialogButtonBox) Orientation() Orientation {
	ret := C.QDialogButtonBox_Orientation(this.h)
	return (Orientation)(ret)
}

func (this *QDialogButtonBox) AddButton(button *QAbstractButton, role QDialogButtonBox__ButtonRole) {
	C.QDialogButtonBox_AddButton(this.h, button.cPointer(), (C.uintptr_t)(role))
}

func (this *QDialogButtonBox) AddButton2(text string, role QDialogButtonBox__ButtonRole) *QPushButton {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QDialogButtonBox_AddButton2(this.h, text_Cstring, C.size_t(len(text)), (C.uintptr_t)(role))
	return newQPushButton_U(unsafe.Pointer(ret))
}

func (this *QDialogButtonBox) AddButtonWithButton(button QDialogButtonBox__StandardButton) *QPushButton {
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

func (this *QDialogButtonBox) ButtonRole(button *QAbstractButton) QDialogButtonBox__ButtonRole {
	ret := C.QDialogButtonBox_ButtonRole(this.h, button.cPointer())
	return (QDialogButtonBox__ButtonRole)(ret)
}

func (this *QDialogButtonBox) SetStandardButtons(buttons int) {
	C.QDialogButtonBox_SetStandardButtons(this.h, (C.int)(buttons))
}

func (this *QDialogButtonBox) StandardButtons() int {
	ret := C.QDialogButtonBox_StandardButtons(this.h)
	return (int)(ret)
}

func (this *QDialogButtonBox) StandardButton(button *QAbstractButton) QDialogButtonBox__StandardButton {
	ret := C.QDialogButtonBox_StandardButton(this.h, button.cPointer())
	return (QDialogButtonBox__StandardButton)(ret)
}

func (this *QDialogButtonBox) Button(which QDialogButtonBox__StandardButton) *QPushButton {
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
