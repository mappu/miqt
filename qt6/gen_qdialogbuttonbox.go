package qt6

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
	QDialogButtonBox__AndroidLayout QDialogButtonBox__ButtonLayout = 4
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

// newQDialogButtonBox constructs the type using only CGO pointers.
func newQDialogButtonBox(h *C.QDialogButtonBox) *QDialogButtonBox {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDialogButtonBox_virtbase(h, &outptr_QWidget)

	return &QDialogButtonBox{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQDialogButtonBox constructs the type using only unsafe pointers.
func UnsafeNewQDialogButtonBox(h unsafe.Pointer) *QDialogButtonBox {
	return newQDialogButtonBox((*C.QDialogButtonBox)(h))
}

// NewQDialogButtonBox constructs a new QDialogButtonBox object.
func NewQDialogButtonBox(parent *QWidget) *QDialogButtonBox {

	return newQDialogButtonBox(C.QDialogButtonBox_new(parent.cPointer()))
}

// NewQDialogButtonBox2 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox2() *QDialogButtonBox {

	return newQDialogButtonBox(C.QDialogButtonBox_new2())
}

// NewQDialogButtonBox3 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox3(orientation Orientation) *QDialogButtonBox {

	return newQDialogButtonBox(C.QDialogButtonBox_new3((C.int)(orientation)))
}

// NewQDialogButtonBox4 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox4(buttons QDialogButtonBox__StandardButton) *QDialogButtonBox {

	return newQDialogButtonBox(C.QDialogButtonBox_new4((C.int)(buttons)))
}

// NewQDialogButtonBox5 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox5(buttons QDialogButtonBox__StandardButton, orientation Orientation) *QDialogButtonBox {

	return newQDialogButtonBox(C.QDialogButtonBox_new5((C.int)(buttons), (C.int)(orientation)))
}

// NewQDialogButtonBox6 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox6(orientation Orientation, parent *QWidget) *QDialogButtonBox {

	return newQDialogButtonBox(C.QDialogButtonBox_new6((C.int)(orientation), parent.cPointer()))
}

// NewQDialogButtonBox7 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox7(buttons QDialogButtonBox__StandardButton, parent *QWidget) *QDialogButtonBox {

	return newQDialogButtonBox(C.QDialogButtonBox_new7((C.int)(buttons), parent.cPointer()))
}

// NewQDialogButtonBox8 constructs a new QDialogButtonBox object.
func NewQDialogButtonBox8(buttons QDialogButtonBox__StandardButton, orientation Orientation, parent *QWidget) *QDialogButtonBox {

	return newQDialogButtonBox(C.QDialogButtonBox_new8((C.int)(buttons), (C.int)(orientation), parent.cPointer()))
}

func (this *QDialogButtonBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDialogButtonBox_MetaObject(this.h))
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
	return newQPushButton(C.QDialogButtonBox_AddButton2(this.h, text_ms, (C.int)(role)))
}

func (this *QDialogButtonBox) AddButtonWithButton(button QDialogButtonBox__StandardButton) *QPushButton {
	return newQPushButton(C.QDialogButtonBox_AddButtonWithButton(this.h, (C.int)(button)))
}

func (this *QDialogButtonBox) RemoveButton(button *QAbstractButton) {
	C.QDialogButtonBox_RemoveButton(this.h, button.cPointer())
}

func (this *QDialogButtonBox) Clear() {
	C.QDialogButtonBox_Clear(this.h)
}

func (this *QDialogButtonBox) Buttons() []*QAbstractButton {
	var _ma C.struct_miqt_array = C.QDialogButtonBox_Buttons(this.h)
	_ret := make([]*QAbstractButton, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractButton(_outCast[i])
	}
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
	return newQPushButton(C.QDialogButtonBox_Button(this.h, (C.int)(which)))
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
	slotval1 := newQAbstractButton(button)

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

func (this *QDialogButtonBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QDialogButtonBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDialogButtonBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_ChangeEvent
func miqt_exec_callback_QDialogButtonBox_ChangeEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDialogButtonBox_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDialogButtonBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDialogButtonBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_Event
func miqt_exec_callback_QDialogButtonBox_Event(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDialogButtonBox) callVirtualBase_DevType() int {

	return (int)(C.QDialogButtonBox_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QDialogButtonBox) OnDevType(slot func(super func() int) int) {
	ok := C.QDialogButtonBox_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_DevType
func miqt_exec_callback_QDialogButtonBox_DevType(self *C.QDialogButtonBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDialogButtonBox) callVirtualBase_SetVisible(visible bool) {

	C.QDialogButtonBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDialogButtonBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDialogButtonBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_SetVisible
func miqt_exec_callback_QDialogButtonBox_SetVisible(self *C.QDialogButtonBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDialogButtonBox_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialogButtonBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDialogButtonBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_SizeHint
func miqt_exec_callback_QDialogButtonBox_SizeHint(self *C.QDialogButtonBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDialogButtonBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDialogButtonBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialogButtonBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDialogButtonBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_MinimumSizeHint
func miqt_exec_callback_QDialogButtonBox_MinimumSizeHint(self *C.QDialogButtonBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDialogButtonBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDialogButtonBox_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDialogButtonBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDialogButtonBox_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_HeightForWidth
func miqt_exec_callback_QDialogButtonBox_HeightForWidth(self *C.QDialogButtonBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDialogButtonBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDialogButtonBox_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDialogButtonBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDialogButtonBox_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_HasHeightForWidth
func miqt_exec_callback_QDialogButtonBox_HasHeightForWidth(self *C.QDialogButtonBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDialogButtonBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDialogButtonBox_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QDialogButtonBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDialogButtonBox_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_PaintEngine
func miqt_exec_callback_QDialogButtonBox_PaintEngine(self *C.QDialogButtonBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDialogButtonBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDialogButtonBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialogButtonBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_MousePressEvent
func miqt_exec_callback_QDialogButtonBox_MousePressEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDialogButtonBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialogButtonBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_MouseReleaseEvent
func miqt_exec_callback_QDialogButtonBox_MouseReleaseEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDialogButtonBox_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialogButtonBox_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_MouseDoubleClickEvent
func miqt_exec_callback_QDialogButtonBox_MouseDoubleClickEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDialogButtonBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialogButtonBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_MouseMoveEvent
func miqt_exec_callback_QDialogButtonBox_MouseMoveEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDialogButtonBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDialogButtonBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_WheelEvent
func miqt_exec_callback_QDialogButtonBox_WheelEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDialogButtonBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDialogButtonBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_KeyPressEvent
func miqt_exec_callback_QDialogButtonBox_KeyPressEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDialogButtonBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDialogButtonBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_KeyReleaseEvent
func miqt_exec_callback_QDialogButtonBox_KeyReleaseEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDialogButtonBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDialogButtonBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_FocusInEvent
func miqt_exec_callback_QDialogButtonBox_FocusInEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDialogButtonBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDialogButtonBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_FocusOutEvent
func miqt_exec_callback_QDialogButtonBox_FocusOutEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDialogButtonBox_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QDialogButtonBox_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_EnterEvent
func miqt_exec_callback_QDialogButtonBox_EnterEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDialogButtonBox_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDialogButtonBox_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_LeaveEvent
func miqt_exec_callback_QDialogButtonBox_LeaveEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDialogButtonBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDialogButtonBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_PaintEvent
func miqt_exec_callback_QDialogButtonBox_PaintEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDialogButtonBox_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDialogButtonBox_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_MoveEvent
func miqt_exec_callback_QDialogButtonBox_MoveEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QDialogButtonBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QDialogButtonBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_ResizeEvent
func miqt_exec_callback_QDialogButtonBox_ResizeEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDialogButtonBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDialogButtonBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_CloseEvent
func miqt_exec_callback_QDialogButtonBox_CloseEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDialogButtonBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDialogButtonBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_ContextMenuEvent
func miqt_exec_callback_QDialogButtonBox_ContextMenuEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDialogButtonBox_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDialogButtonBox_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_TabletEvent
func miqt_exec_callback_QDialogButtonBox_TabletEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDialogButtonBox_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDialogButtonBox_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_ActionEvent
func miqt_exec_callback_QDialogButtonBox_ActionEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDialogButtonBox_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDialogButtonBox_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_DragEnterEvent
func miqt_exec_callback_QDialogButtonBox_DragEnterEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDialogButtonBox_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDialogButtonBox_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_DragMoveEvent
func miqt_exec_callback_QDialogButtonBox_DragMoveEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDialogButtonBox_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDialogButtonBox_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_DragLeaveEvent
func miqt_exec_callback_QDialogButtonBox_DragLeaveEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDialogButtonBox_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDialogButtonBox_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_DropEvent
func miqt_exec_callback_QDialogButtonBox_DropEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDialogButtonBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDialogButtonBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_ShowEvent
func miqt_exec_callback_QDialogButtonBox_ShowEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDialogButtonBox_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDialogButtonBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_HideEvent
func miqt_exec_callback_QDialogButtonBox_HideEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDialogButtonBox_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDialogButtonBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDialogButtonBox_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_NativeEvent
func miqt_exec_callback_QDialogButtonBox_NativeEvent(self *C.QDialogButtonBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDialogButtonBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDialogButtonBox_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDialogButtonBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDialogButtonBox_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_Metric
func miqt_exec_callback_QDialogButtonBox_Metric(self *C.QDialogButtonBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDialogButtonBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDialogButtonBox_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDialogButtonBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDialogButtonBox_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_InitPainter
func miqt_exec_callback_QDialogButtonBox_InitPainter(self *C.QDialogButtonBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDialogButtonBox_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDialogButtonBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDialogButtonBox_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_Redirected
func miqt_exec_callback_QDialogButtonBox_Redirected(self *C.QDialogButtonBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDialogButtonBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDialogButtonBox_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDialogButtonBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDialogButtonBox_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_SharedPainter
func miqt_exec_callback_QDialogButtonBox_SharedPainter(self *C.QDialogButtonBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDialogButtonBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDialogButtonBox_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialogButtonBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDialogButtonBox_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_InputMethodEvent
func miqt_exec_callback_QDialogButtonBox_InputMethodEvent(self *C.QDialogButtonBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDialogButtonBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialogButtonBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDialogButtonBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_InputMethodQuery
func miqt_exec_callback_QDialogButtonBox_InputMethodQuery(self *C.QDialogButtonBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDialogButtonBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDialogButtonBox_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDialogButtonBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDialogButtonBox_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_FocusNextPrevChild
func miqt_exec_callback_QDialogButtonBox_FocusNextPrevChild(self *C.QDialogButtonBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDialogButtonBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDialogButtonBox_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDialogButtonBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDialogButtonBox_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_EventFilter
func miqt_exec_callback_QDialogButtonBox_EventFilter(self *C.QDialogButtonBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDialogButtonBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDialogButtonBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDialogButtonBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDialogButtonBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_TimerEvent
func miqt_exec_callback_QDialogButtonBox_TimerEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDialogButtonBox_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDialogButtonBox_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_ChildEvent
func miqt_exec_callback_QDialogButtonBox_ChildEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDialogButtonBox_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialogButtonBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDialogButtonBox_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_CustomEvent
func miqt_exec_callback_QDialogButtonBox_CustomEvent(self *C.QDialogButtonBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDialogButtonBox_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDialogButtonBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDialogButtonBox_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_ConnectNotify
func miqt_exec_callback_QDialogButtonBox_ConnectNotify(self *C.QDialogButtonBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDialogButtonBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDialogButtonBox_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDialogButtonBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDialogButtonBox_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialogButtonBox_DisconnectNotify
func miqt_exec_callback_QDialogButtonBox_DisconnectNotify(self *C.QDialogButtonBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDialogButtonBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
