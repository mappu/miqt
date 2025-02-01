package qt

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
	h *C.QToolButton
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
func newQToolButton(h *C.QToolButton) *QToolButton {
	if h == nil {
		return nil
	}
	var outptr_QAbstractButton *C.QAbstractButton = nil
	C.QToolButton_virtbase(h, &outptr_QAbstractButton)

	return &QToolButton{h: h,
		QAbstractButton: newQAbstractButton(outptr_QAbstractButton)}
}

// UnsafeNewQToolButton constructs the type using only unsafe pointers.
func UnsafeNewQToolButton(h unsafe.Pointer) *QToolButton {
	return newQToolButton((*C.QToolButton)(h))
}

// NewQToolButton constructs a new QToolButton object.
func NewQToolButton(parent *QWidget) *QToolButton {

	return newQToolButton(C.QToolButton_new(parent.cPointer()))
}

// NewQToolButton2 constructs a new QToolButton object.
func NewQToolButton2() *QToolButton {

	return newQToolButton(C.QToolButton_new2())
}

func (this *QToolButton) MetaObject() *QMetaObject {
	return newQMetaObject(C.QToolButton_metaObject(this.h))
}

func (this *QToolButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QToolButton_metacast(this.h, param1_Cstring))
}

func QToolButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolButton) SizeHint() *QSize {
	_goptr := newQSize(C.QToolButton_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolButton) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QToolButton_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolButton) ToolButtonStyle() ToolButtonStyle {
	return (ToolButtonStyle)(C.QToolButton_toolButtonStyle(this.h))
}

func (this *QToolButton) ArrowType() ArrowType {
	return (ArrowType)(C.QToolButton_arrowType(this.h))
}

func (this *QToolButton) SetArrowType(typeVal ArrowType) {
	C.QToolButton_setArrowType(this.h, (C.int)(typeVal))
}

func (this *QToolButton) SetMenu(menu *QMenu) {
	C.QToolButton_setMenu(this.h, menu.cPointer())
}

func (this *QToolButton) Menu() *QMenu {
	return newQMenu(C.QToolButton_menu(this.h))
}

func (this *QToolButton) SetPopupMode(mode QToolButton__ToolButtonPopupMode) {
	C.QToolButton_setPopupMode(this.h, (C.int)(mode))
}

func (this *QToolButton) PopupMode() QToolButton__ToolButtonPopupMode {
	return (QToolButton__ToolButtonPopupMode)(C.QToolButton_popupMode(this.h))
}

func (this *QToolButton) DefaultAction() *QAction {
	return newQAction(C.QToolButton_defaultAction(this.h))
}

func (this *QToolButton) SetAutoRaise(enable bool) {
	C.QToolButton_setAutoRaise(this.h, (C.bool)(enable))
}

func (this *QToolButton) AutoRaise() bool {
	return (bool)(C.QToolButton_autoRaise(this.h))
}

func (this *QToolButton) ShowMenu() {
	C.QToolButton_showMenu(this.h)
}

func (this *QToolButton) SetToolButtonStyle(style ToolButtonStyle) {
	C.QToolButton_setToolButtonStyle(this.h, (C.int)(style))
}

func (this *QToolButton) SetDefaultAction(defaultAction *QAction) {
	C.QToolButton_setDefaultAction(this.h, defaultAction.cPointer())
}

func (this *QToolButton) Triggered(param1 *QAction) {
	C.QToolButton_triggered(this.h, param1.cPointer())
}
func (this *QToolButton) OnTriggered(slot func(param1 *QAction)) {
	C.QToolButton_connect_triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolButton_triggered
func miqt_exec_callback_QToolButton_triggered(cb C.intptr_t, param1 *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(param1)

	gofunc(slotval1)
}

func QToolButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolButton_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QToolButton_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolButton) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QToolButton_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_sizeHint
func miqt_exec_callback_QToolButton_sizeHint(self *C.QToolButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolButton) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QToolButton_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolButton) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QToolButton_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_minimumSizeHint
func miqt_exec_callback_QToolButton_minimumSizeHint(self *C.QToolButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QToolButton_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QToolButton) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QToolButton_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_event
func miqt_exec_callback_QToolButton_event(self *C.QToolButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QToolButton_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QToolButton_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_mousePressEvent
func miqt_exec_callback_QToolButton_mousePressEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QToolButton_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QToolButton_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_mouseReleaseEvent
func miqt_exec_callback_QToolButton_mouseReleaseEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QToolButton_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QToolButton_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_paintEvent
func miqt_exec_callback_QToolButton_paintEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_ActionEvent(param1 *QActionEvent) {

	C.QToolButton_virtualbase_actionEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnActionEvent(slot func(super func(param1 *QActionEvent), param1 *QActionEvent)) {
	ok := C.QToolButton_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_actionEvent
func miqt_exec_callback_QToolButton_actionEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QActionEvent), param1 *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_EnterEvent(param1 *QEvent) {

	C.QToolButton_virtualbase_enterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnEnterEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QToolButton_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_enterEvent
func miqt_exec_callback_QToolButton_enterEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_LeaveEvent(param1 *QEvent) {

	C.QToolButton_virtualbase_leaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnLeaveEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QToolButton_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_leaveEvent
func miqt_exec_callback_QToolButton_leaveEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QToolButton_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QToolButton_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_timerEvent
func miqt_exec_callback_QToolButton_timerEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QToolButton_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QToolButton_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_changeEvent
func miqt_exec_callback_QToolButton_changeEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QToolButton_virtualbase_hitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QToolButton) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	ok := C.QToolButton_override_virtual_hitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_hitButton
func miqt_exec_callback_QToolButton_hitButton(self *C.QToolButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPoint) bool, pos *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_NextCheckState() {

	C.QToolButton_virtualbase_nextCheckState(unsafe.Pointer(this.h))

}
func (this *QToolButton) OnNextCheckState(slot func(super func())) {
	ok := C.QToolButton_override_virtual_nextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_nextCheckState
func miqt_exec_callback_QToolButton_nextCheckState(self *C.QToolButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QToolButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QToolButton) callVirtualBase_CheckStateSet() {

	C.QToolButton_virtualbase_checkStateSet(unsafe.Pointer(this.h))

}
func (this *QToolButton) OnCheckStateSet(slot func(super func())) {
	ok := C.QToolButton_override_virtual_checkStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_checkStateSet
func miqt_exec_callback_QToolButton_checkStateSet(self *C.QToolButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QToolButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QToolButton) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QToolButton_virtualbase_keyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QToolButton_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_keyPressEvent
func miqt_exec_callback_QToolButton_keyPressEvent(self *C.QToolButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QToolButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QToolButton_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QToolButton_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_keyReleaseEvent
func miqt_exec_callback_QToolButton_keyReleaseEvent(self *C.QToolButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QToolButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QToolButton_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QToolButton_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_mouseMoveEvent
func miqt_exec_callback_QToolButton_mouseMoveEvent(self *C.QToolButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QToolButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QToolButton_virtualbase_focusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QToolButton_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_focusInEvent
func miqt_exec_callback_QToolButton_focusInEvent(self *C.QToolButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QToolButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QToolButton_virtualbase_focusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolButton) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QToolButton_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_focusOutEvent
func miqt_exec_callback_QToolButton_focusOutEvent(self *C.QToolButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QToolButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_DevType() int {

	return (int)(C.QToolButton_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QToolButton) OnDevType(slot func(super func() int) int) {
	ok := C.QToolButton_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_devType
func miqt_exec_callback_QToolButton_devType(self *C.QToolButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_SetVisible(visible bool) {

	C.QToolButton_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QToolButton) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QToolButton_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_setVisible
func miqt_exec_callback_QToolButton_setVisible(self *C.QToolButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QToolButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QToolButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QToolButton_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QToolButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QToolButton_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_heightForWidth
func miqt_exec_callback_QToolButton_heightForWidth(self *C.QToolButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QToolButton_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QToolButton) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QToolButton_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_hasHeightForWidth
func miqt_exec_callback_QToolButton_hasHeightForWidth(self *C.QToolButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QToolButton_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QToolButton) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QToolButton_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_paintEngine
func miqt_exec_callback_QToolButton_paintEngine(self *C.QToolButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QToolButton) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QToolButton_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolButton_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_mouseDoubleClickEvent
func miqt_exec_callback_QToolButton_mouseDoubleClickEvent(self *C.QToolButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QToolButton_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QToolButton_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_wheelEvent
func miqt_exec_callback_QToolButton_wheelEvent(self *C.QToolButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QToolButton_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QToolButton_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_moveEvent
func miqt_exec_callback_QToolButton_moveEvent(self *C.QToolButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QToolButton_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QToolButton_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_resizeEvent
func miqt_exec_callback_QToolButton_resizeEvent(self *C.QToolButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QToolButton_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QToolButton_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_closeEvent
func miqt_exec_callback_QToolButton_closeEvent(self *C.QToolButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QToolButton_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QToolButton_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_contextMenuEvent
func miqt_exec_callback_QToolButton_contextMenuEvent(self *C.QToolButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QToolButton_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QToolButton_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_tabletEvent
func miqt_exec_callback_QToolButton_tabletEvent(self *C.QToolButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QToolButton_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QToolButton_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_dragEnterEvent
func miqt_exec_callback_QToolButton_dragEnterEvent(self *C.QToolButton, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QToolButton_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QToolButton_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_dragMoveEvent
func miqt_exec_callback_QToolButton_dragMoveEvent(self *C.QToolButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QToolButton_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QToolButton_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_dragLeaveEvent
func miqt_exec_callback_QToolButton_dragLeaveEvent(self *C.QToolButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QToolButton_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QToolButton_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_dropEvent
func miqt_exec_callback_QToolButton_dropEvent(self *C.QToolButton, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QToolButton_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QToolButton_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_showEvent
func miqt_exec_callback_QToolButton_showEvent(self *C.QToolButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QToolButton_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QToolButton_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_hideEvent
func miqt_exec_callback_QToolButton_hideEvent(self *C.QToolButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QToolButton_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QToolButton) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QToolButton_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_nativeEvent
func miqt_exec_callback_QToolButton_nativeEvent(self *C.QToolButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QToolButton_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QToolButton) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QToolButton_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_metric
func miqt_exec_callback_QToolButton_metric(self *C.QToolButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_InitPainter(painter *QPainter) {

	C.QToolButton_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QToolButton) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QToolButton_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_initPainter
func miqt_exec_callback_QToolButton_initPainter(self *C.QToolButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QToolButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QToolButton) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QToolButton_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QToolButton) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QToolButton_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_redirected
func miqt_exec_callback_QToolButton_redirected(self *C.QToolButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QToolButton) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QToolButton_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QToolButton) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QToolButton_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_sharedPainter
func miqt_exec_callback_QToolButton_sharedPainter(self *C.QToolButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QToolButton) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QToolButton_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolButton) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QToolButton_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_inputMethodEvent
func miqt_exec_callback_QToolButton_inputMethodEvent(self *C.QToolButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QToolButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QToolButton_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolButton) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QToolButton_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_inputMethodQuery
func miqt_exec_callback_QToolButton_inputMethodQuery(self *C.QToolButton, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QToolButton) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QToolButton_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QToolButton) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QToolButton_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_focusNextPrevChild
func miqt_exec_callback_QToolButton_focusNextPrevChild(self *C.QToolButton, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QToolButton_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QToolButton) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QToolButton_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_eventFilter
func miqt_exec_callback_QToolButton_eventFilter(self *C.QToolButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QToolButton{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QToolButton) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QToolButton_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QToolButton_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_childEvent
func miqt_exec_callback_QToolButton_childEvent(self *C.QToolButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_CustomEvent(event *QEvent) {

	C.QToolButton_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolButton) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QToolButton_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_customEvent
func miqt_exec_callback_QToolButton_customEvent(self *C.QToolButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QToolButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QToolButton) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QToolButton_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QToolButton) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QToolButton_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_connectNotify
func miqt_exec_callback_QToolButton_connectNotify(self *C.QToolButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QToolButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QToolButton) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QToolButton_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QToolButton) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QToolButton_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolButton_disconnectNotify
func miqt_exec_callback_QToolButton_disconnectNotify(self *C.QToolButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QToolButton{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QToolButton) Delete() {
	C.QToolButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
