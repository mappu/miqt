package qt

/*

#include "gen_qdialogbuttonbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDialogButtonBox__ButtonRole int

const (
	QDialogButtonBox__InvalidRole     QDialogButtonBox__ButtonRole = -1
	QDialogButtonBox__AcceptRole      QDialogButtonBox__ButtonRole = 0
	QDialogButtonBox__RejectRole      QDialogButtonBox__ButtonRole = 1
	QDialogButtonBox__DestructiveRole QDialogButtonBox__ButtonRole = 2
	QDialogButtonBox__ActionRole      QDialogButtonBox__ButtonRole = 3
	QDialogButtonBox__HelpRole        QDialogButtonBox__ButtonRole = 4
	QDialogButtonBox__YesRole         QDialogButtonBox__ButtonRole = 5
	QDialogButtonBox__NoRole          QDialogButtonBox__ButtonRole = 6
	QDialogButtonBox__ResetRole       QDialogButtonBox__ButtonRole = 7
	QDialogButtonBox__ApplyRole       QDialogButtonBox__ButtonRole = 8
	QDialogButtonBox__NRoles          QDialogButtonBox__ButtonRole = 9
)

type QDialogButtonBox__StandardButton int

const (
	QDialogButtonBox__NoButton        QDialogButtonBox__StandardButton = 0
	QDialogButtonBox__Ok              QDialogButtonBox__StandardButton = 1024
	QDialogButtonBox__Save            QDialogButtonBox__StandardButton = 2048
	QDialogButtonBox__SaveAll         QDialogButtonBox__StandardButton = 4096
	QDialogButtonBox__Open            QDialogButtonBox__StandardButton = 8192
	QDialogButtonBox__Yes             QDialogButtonBox__StandardButton = 16384
	QDialogButtonBox__YesToAll        QDialogButtonBox__StandardButton = 32768
	QDialogButtonBox__No              QDialogButtonBox__StandardButton = 65536
	QDialogButtonBox__NoToAll         QDialogButtonBox__StandardButton = 131072
	QDialogButtonBox__Abort           QDialogButtonBox__StandardButton = 262144
	QDialogButtonBox__Retry           QDialogButtonBox__StandardButton = 524288
	QDialogButtonBox__Ignore          QDialogButtonBox__StandardButton = 1048576
	QDialogButtonBox__Close           QDialogButtonBox__StandardButton = 2097152
	QDialogButtonBox__Cancel          QDialogButtonBox__StandardButton = 4194304
	QDialogButtonBox__Discard         QDialogButtonBox__StandardButton = 8388608
	QDialogButtonBox__Help            QDialogButtonBox__StandardButton = 16777216
	QDialogButtonBox__Apply           QDialogButtonBox__StandardButton = 33554432
	QDialogButtonBox__Reset           QDialogButtonBox__StandardButton = 67108864
	QDialogButtonBox__RestoreDefaults QDialogButtonBox__StandardButton = 134217728
	QDialogButtonBox__FirstButton     QDialogButtonBox__StandardButton = 1024
	QDialogButtonBox__LastButton      QDialogButtonBox__StandardButton = 134217728
)

type QDialogButtonBox__ButtonLayout int

const (
	QDialogButtonBox__WinLayout     QDialogButtonBox__ButtonLayout = 0
	QDialogButtonBox__MacLayout     QDialogButtonBox__ButtonLayout = 1
	QDialogButtonBox__KdeLayout     QDialogButtonBox__ButtonLayout = 2
	QDialogButtonBox__GnomeLayout   QDialogButtonBox__ButtonLayout = 3
	QDialogButtonBox__AndroidLayout QDialogButtonBox__ButtonLayout = 5
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

func (this *QDialogButtonBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDialogButtonBox(h *C.QDialogButtonBox) *QDialogButtonBox {
	if h == nil {
		return nil
	}
	return &QDialogButtonBox{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQDialogButtonBox(h unsafe.Pointer) *QDialogButtonBox {
	return newQDialogButtonBox((*C.QDialogButtonBox)(h))
}

// NewQDialogButtonBox constructs a new QDialogButtonBox object.
func NewQDialogButtonBox(parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new(parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox2 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox2() *QDialogButtonBox {
	ret := C.QDialogButtonBox_new2()
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox3 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox3(orientation Orientation) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new3((C.int)(orientation))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox4 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox4(buttons QDialogButtonBox__StandardButton) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new4((C.int)(buttons))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox5 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox5(buttons QDialogButtonBox__StandardButton, orientation Orientation) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new5((C.int)(buttons), (C.int)(orientation))
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox6 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox6(orientation Orientation, parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new6((C.int)(orientation), parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox7 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox7(buttons QDialogButtonBox__StandardButton, parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new7((C.int)(buttons), parent.cPointer())
	return newQDialogButtonBox(ret)
}

// NewQDialogButtonBox8 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox8(buttons QDialogButtonBox__StandardButton, orientation Orientation, parent *QWidget) *QDialogButtonBox {
	ret := C.QDialogButtonBox_new8((C.int)(buttons), (C.int)(orientation), parent.cPointer())
	return newQDialogButtonBox(ret)
}

func (this *QDialogButtonBox) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDialogButtonBox_MetaObject(this.h)))
}

func (this *QDialogButtonBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDialogButtonBox_Metacast(this.h, param1_Cstring))
}

func QDialogButtonBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDialogButtonBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialogButtonBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDialogButtonBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDialogButtonBox) SetOrientation(orientation Orientation) {
	C.QDialogButtonBox_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QDialogButtonBox) Orientation() Orientation {
	return (Orientation)(C.QDialogButtonBox_Orientation(this.h))
}

func (this *QDialogButtonBox) AddButton(button *QAbstractButton, role QDialogButtonBox__ButtonRole) {
	C.QDialogButtonBox_AddButton(this.h, button.cPointer(), (C.int)(role))
}

func (this *QDialogButtonBox) AddButton2(text string, role QDialogButtonBox__ButtonRole) *QPushButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQPushButton(unsafe.Pointer(C.QDialogButtonBox_AddButton2(this.h, text_ms, (C.int)(role))))
}

func (this *QDialogButtonBox) AddButtonWithButton(button QDialogButtonBox__StandardButton) *QPushButton {
	return UnsafeNewQPushButton(unsafe.Pointer(C.QDialogButtonBox_AddButtonWithButton(this.h, (C.int)(button))))
}

func (this *QDialogButtonBox) RemoveButton(button *QAbstractButton) {
	C.QDialogButtonBox_RemoveButton(this.h, button.cPointer())
}

func (this *QDialogButtonBox) Clear() {
	C.QDialogButtonBox_Clear(this.h)
}

func (this *QDialogButtonBox) Buttons() []*QAbstractButton {
	var _ma *C.struct_miqt_array = C.QDialogButtonBox_Buttons(this.h)
	_ret := make([]*QAbstractButton, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQAbstractButton(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDialogButtonBox) ButtonRole(button *QAbstractButton) QDialogButtonBox__ButtonRole {
	return (QDialogButtonBox__ButtonRole)(C.QDialogButtonBox_ButtonRole(this.h, button.cPointer()))
}

func (this *QDialogButtonBox) SetStandardButtons(buttons QDialogButtonBox__StandardButton) {
	C.QDialogButtonBox_SetStandardButtons(this.h, (C.int)(buttons))
}

func (this *QDialogButtonBox) StandardButtons() QDialogButtonBox__StandardButton {
	return (QDialogButtonBox__StandardButton)(C.QDialogButtonBox_StandardButtons(this.h))
}

func (this *QDialogButtonBox) StandardButton(button *QAbstractButton) QDialogButtonBox__StandardButton {
	return (QDialogButtonBox__StandardButton)(C.QDialogButtonBox_StandardButton(this.h, button.cPointer()))
}

func (this *QDialogButtonBox) Button(which QDialogButtonBox__StandardButton) *QPushButton {
	return UnsafeNewQPushButton(unsafe.Pointer(C.QDialogButtonBox_Button(this.h, (C.int)(which))))
}

func (this *QDialogButtonBox) SetCenterButtons(center bool) {
	C.QDialogButtonBox_SetCenterButtons(this.h, (C.bool)(center))
}

func (this *QDialogButtonBox) CenterButtons() bool {
	return (bool)(C.QDialogButtonBox_CenterButtons(this.h))
}

func (this *QDialogButtonBox) Clicked(button *QAbstractButton) {
	C.QDialogButtonBox_Clicked(this.h, button.cPointer())
}
func (this *QDialogButtonBox) OnClicked(slot func(button *QAbstractButton)) {
	C.QDialogButtonBox_connect_Clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialogButtonBox_Clicked
func miqt_exec_callback_QDialogButtonBox_Clicked(cb C.intptr_t, button *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(button *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractButton(unsafe.Pointer(button))

	gofunc(slotval1)
}

func (this *QDialogButtonBox) Accepted() {
	C.QDialogButtonBox_Accepted(this.h)
}
func (this *QDialogButtonBox) OnAccepted(slot func()) {
	C.QDialogButtonBox_connect_Accepted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialogButtonBox_Accepted
func miqt_exec_callback_QDialogButtonBox_Accepted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialogButtonBox) HelpRequested() {
	C.QDialogButtonBox_HelpRequested(this.h)
}
func (this *QDialogButtonBox) OnHelpRequested(slot func()) {
	C.QDialogButtonBox_connect_HelpRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialogButtonBox_HelpRequested
func miqt_exec_callback_QDialogButtonBox_HelpRequested(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialogButtonBox) Rejected() {
	C.QDialogButtonBox_Rejected(this.h)
}
func (this *QDialogButtonBox) OnRejected(slot func()) {
	C.QDialogButtonBox_connect_Rejected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialogButtonBox_Rejected
func miqt_exec_callback_QDialogButtonBox_Rejected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QDialogButtonBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialogButtonBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialogButtonBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialogButtonBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialogButtonBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialogButtonBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialogButtonBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialogButtonBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDialogButtonBox) Delete() {
	C.QDialogButtonBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDialogButtonBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QDialogButtonBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
