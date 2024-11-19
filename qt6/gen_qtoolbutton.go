package qt6

/*

#include "gen_qtoolbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QToolButton__ToolButtonPopupMode int

const (
	QToolButton__DelayedPopup    QToolButton__ToolButtonPopupMode = 0
	QToolButton__MenuButtonPopup QToolButton__ToolButtonPopupMode = 1
	QToolButton__InstantPopup    QToolButton__ToolButtonPopupMode = 2
)

type QToolButton struct {
	h          *C.QToolButton
	isSubclass bool
	*QAbstractButton
}

func (this *QToolButton) cPointer() *C.QToolButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QToolButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQToolButton constructs the type using only CGO pointers.
func newQToolButton(h *C.QToolButton, h_QAbstractButton *C.QAbstractButton, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QToolButton {
	if h == nil {
		return nil
	}
	return &QToolButton{h: h,
		QAbstractButton: newQAbstractButton(h_QAbstractButton, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQToolButton constructs the type using only unsafe pointers.
func UnsafeNewQToolButton(h unsafe.Pointer, h_QAbstractButton unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QToolButton {
	if h == nil {
		return nil
	}

	return &QToolButton{h: (*C.QToolButton)(h),
		QAbstractButton: UnsafeNewQAbstractButton(h_QAbstractButton, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQToolButton constructs a new QToolButton object.
func NewQToolButton(parent *QWidget) *QToolButton {
	var outptr_QToolButton *C.QToolButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolButton_new(parent.cPointer(), &outptr_QToolButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolButton(outptr_QToolButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQToolButton2 constructs a new QToolButton object.
func NewQToolButton2() *QToolButton {
	var outptr_QToolButton *C.QToolButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolButton_new2(&outptr_QToolButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolButton(outptr_QToolButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QToolButton) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QToolButton_MetaObject(this.h)))
}

func (this *QToolButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QToolButton_Metacast(this.h, param1_Cstring))
}

func QToolButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolButton) SizeHint() *QSize {
	_ret := C.QToolButton_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolButton) MinimumSizeHint() *QSize {
	_ret := C.QToolButton_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolButton) ToolButtonStyle() ToolButtonStyle {
	return (ToolButtonStyle)(C.QToolButton_ToolButtonStyle(this.h))
}

func (this *QToolButton) ArrowType() ArrowType {
	return (ArrowType)(C.QToolButton_ArrowType(this.h))
}

func (this *QToolButton) SetArrowType(typeVal ArrowType) {
	C.QToolButton_SetArrowType(this.h, (C.int)(typeVal))
}

func (this *QToolButton) SetMenu(menu *QMenu) {
	C.QToolButton_SetMenu(this.h, menu.cPointer())
}

func (this *QToolButton) Menu() *QMenu {
	return UnsafeNewQMenu(unsafe.Pointer(C.QToolButton_Menu(this.h)), nil, nil, nil)
}

func (this *QToolButton) SetPopupMode(mode QToolButton__ToolButtonPopupMode) {
	C.QToolButton_SetPopupMode(this.h, (C.int)(mode))
}

func (this *QToolButton) PopupMode() QToolButton__ToolButtonPopupMode {
	return (QToolButton__ToolButtonPopupMode)(C.QToolButton_PopupMode(this.h))
}

func (this *QToolButton) DefaultAction() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QToolButton_DefaultAction(this.h)), nil)
}

func (this *QToolButton) SetAutoRaise(enable bool) {
	C.QToolButton_SetAutoRaise(this.h, (C.bool)(enable))
}

func (this *QToolButton) AutoRaise() bool {
	return (bool)(C.QToolButton_AutoRaise(this.h))
}

func (this *QToolButton) ShowMenu() {
	C.QToolButton_ShowMenu(this.h)
}

func (this *QToolButton) SetToolButtonStyle(style ToolButtonStyle) {
	C.QToolButton_SetToolButtonStyle(this.h, (C.int)(style))
}

func (this *QToolButton) SetDefaultAction(defaultAction *QAction) {
	C.QToolButton_SetDefaultAction(this.h, defaultAction.cPointer())
}

func (this *QToolButton) Triggered(param1 *QAction) {
	C.QToolButton_Triggered(this.h, param1.cPointer())
}
func (this *QToolButton) OnTriggered(slot func(param1 *QAction)) {
	C.QToolButton_connect_Triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_Triggered
func miqt_exec_callback_QToolButton_Triggered(cb C.intptr_t, param1 *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAction(unsafe.Pointer(param1), nil)

	gofunc(slotval1)
}

func QToolButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolButton) callVirtualBase_SizeHint() *QSize {

	_ret := C.QToolButton_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolButton) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QToolButton_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_SizeHint
func miqt_exec_callback_QToolButton_SizeHint(self *C.QToolButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolButton) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QToolButton_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolButton) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	C.QToolButton_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_MinimumSizeHint
func miqt_exec_callback_QToolButton_MinimumSizeHint(self *C.QToolButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QToolButton_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QToolButton) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	C.QToolButton_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_Event
func miqt_exec_callback_QToolButton_Event(self *C.QToolButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QToolButton_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QToolButton_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_MousePressEvent
func miqt_exec_callback_QToolButton_MousePressEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QToolButton_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QToolButton_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_MouseReleaseEvent
func miqt_exec_callback_QToolButton_MouseReleaseEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QToolButton_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	C.QToolButton_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_PaintEvent
func miqt_exec_callback_QToolButton_PaintEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(param1), nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_ActionEvent(param1 *QActionEvent) {

	C.QToolButton_virtualbase_ActionEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnActionEvent(slot func(super func(param1 *QActionEvent), param1 *QActionEvent)) {
	C.QToolButton_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_ActionEvent
func miqt_exec_callback_QToolButton_ActionEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QActionEvent), param1 *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(param1), nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_EnterEvent(param1 *QEnterEvent) {

	C.QToolButton_virtualbase_EnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnEnterEvent(slot func(super func(param1 *QEnterEvent), param1 *QEnterEvent)) {
	C.QToolButton_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_EnterEvent
func miqt_exec_callback_QToolButton_EnterEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEnterEvent), param1 *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEnterEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_LeaveEvent(param1 *QEvent) {

	C.QToolButton_virtualbase_LeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnLeaveEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	C.QToolButton_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_LeaveEvent
func miqt_exec_callback_QToolButton_LeaveEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QToolButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QToolButton_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	C.QToolButton_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_TimerEvent
func miqt_exec_callback_QToolButton_TimerEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(param1), nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QToolButton_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	C.QToolButton_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_ChangeEvent
func miqt_exec_callback_QToolButton_ChangeEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QToolButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QToolButton_virtualbase_HitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QToolButton) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	C.QToolButton_override_virtual_HitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_HitButton
func miqt_exec_callback_QToolButton_HitButton(self *C.QToolButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPoint) bool, pos *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_CheckStateSet() {

	C.QToolButton_virtualbase_CheckStateSet(unsafe.Pointer(this.h))

}
func (this *QToolButton) OnCheckStateSet(slot func(super func())) {
	C.QToolButton_override_virtual_CheckStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_CheckStateSet
func miqt_exec_callback_QToolButton_CheckStateSet(self *C.QToolButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QToolButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QToolButton) callVirtualBase_NextCheckState() {

	C.QToolButton_virtualbase_NextCheckState(unsafe.Pointer(this.h))

}
func (this *QToolButton) OnNextCheckState(slot func(super func())) {
	C.QToolButton_override_virtual_NextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_NextCheckState
func miqt_exec_callback_QToolButton_NextCheckState(self *C.QToolButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QToolButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QToolButton) callVirtualBase_InitStyleOption(option *QStyleOptionToolButton) {

	C.QToolButton_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QToolButton) OnInitStyleOption(slot func(super func(option *QStyleOptionToolButton), option *QStyleOptionToolButton)) {
	C.QToolButton_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_InitStyleOption
func miqt_exec_callback_QToolButton_InitStyleOption(self *C.QToolButton, cb C.intptr_t, option *C.QStyleOptionToolButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionToolButton), option *QStyleOptionToolButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQStyleOptionToolButton(unsafe.Pointer(option), nil, nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QToolButton) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QToolButton_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	C.QToolButton_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_KeyPressEvent
func miqt_exec_callback_QToolButton_KeyPressEvent(self *C.QToolButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QToolButton_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	C.QToolButton_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_KeyReleaseEvent
func miqt_exec_callback_QToolButton_KeyReleaseEvent(self *C.QToolButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QToolButton_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	C.QToolButton_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_MouseMoveEvent
func miqt_exec_callback_QToolButton_MouseMoveEvent(self *C.QToolButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QToolButton_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	C.QToolButton_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_FocusInEvent
func miqt_exec_callback_QToolButton_FocusInEvent(self *C.QToolButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(e), nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QToolButton_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	C.QToolButton_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_FocusOutEvent
func miqt_exec_callback_QToolButton_FocusOutEvent(self *C.QToolButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(e), nil)

	gofunc((&QToolButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QToolButton) Delete() {
	C.QToolButton_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
