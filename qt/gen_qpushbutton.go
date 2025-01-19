package qt

/*

#include "gen_qpushbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPushButton struct {
	h *C.QPushButton
	*QAbstractButton
}

func (this *QPushButton) cPointer() *C.QPushButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPushButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPushButton constructs the type using only CGO pointers.
func newQPushButton(h *C.QPushButton) *QPushButton {
	if h == nil {
		return nil
	}
	var outptr_QAbstractButton *C.QAbstractButton = nil
	C.QPushButton_virtbase(h, &outptr_QAbstractButton)

	return &QPushButton{h: h,
		QAbstractButton: newQAbstractButton(outptr_QAbstractButton)}
}

// UnsafeNewQPushButton constructs the type using only unsafe pointers.
func UnsafeNewQPushButton(h unsafe.Pointer) *QPushButton {
	return newQPushButton((*C.QPushButton)(h))
}

// NewQPushButton constructs a new QPushButton object.
func NewQPushButton(parent *QWidget) *QPushButton {

	return newQPushButton(C.QPushButton_new(parent.cPointer()))
}

// NewQPushButton2 constructs a new QPushButton object.
func NewQPushButton2() *QPushButton {

	return newQPushButton(C.QPushButton_new2())
}

// NewQPushButton3 constructs a new QPushButton object.
func NewQPushButton3(text string) *QPushButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQPushButton(C.QPushButton_new3(text_ms))
}

// NewQPushButton4 constructs a new QPushButton object.
func NewQPushButton4(icon *QIcon, text string) *QPushButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQPushButton(C.QPushButton_new4(icon.cPointer(), text_ms))
}

// NewQPushButton5 constructs a new QPushButton object.
func NewQPushButton5(text string, parent *QWidget) *QPushButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQPushButton(C.QPushButton_new5(text_ms, parent.cPointer()))
}

// NewQPushButton6 constructs a new QPushButton object.
func NewQPushButton6(icon *QIcon, text string, parent *QWidget) *QPushButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQPushButton(C.QPushButton_new6(icon.cPointer(), text_ms, parent.cPointer()))
}

func (this *QPushButton) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPushButton_MetaObject(this.h))
}

func (this *QPushButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPushButton_Metacast(this.h, param1_Cstring))
}

func QPushButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPushButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPushButton) SizeHint() *QSize {
	_goptr := newQSize(C.QPushButton_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPushButton) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QPushButton_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPushButton) AutoDefault() bool {
	return (bool)(C.QPushButton_AutoDefault(this.h))
}

func (this *QPushButton) SetAutoDefault(autoDefault bool) {
	C.QPushButton_SetAutoDefault(this.h, (C.bool)(autoDefault))
}

func (this *QPushButton) IsDefault() bool {
	return (bool)(C.QPushButton_IsDefault(this.h))
}

func (this *QPushButton) SetDefault(defaultVal bool) {
	C.QPushButton_SetDefault(this.h, (C.bool)(defaultVal))
}

func (this *QPushButton) SetMenu(menu *QMenu) {
	C.QPushButton_SetMenu(this.h, menu.cPointer())
}

func (this *QPushButton) Menu() *QMenu {
	return newQMenu(C.QPushButton_Menu(this.h))
}

func (this *QPushButton) SetFlat(flat bool) {
	C.QPushButton_SetFlat(this.h, (C.bool)(flat))
}

func (this *QPushButton) IsFlat() bool {
	return (bool)(C.QPushButton_IsFlat(this.h))
}

func (this *QPushButton) ShowMenu() {
	C.QPushButton_ShowMenu(this.h)
}

func QPushButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPushButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPushButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPushButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPushButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QPushButton_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPushButton) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QPushButton_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_SizeHint
func miqt_exec_callback_QPushButton_SizeHint(self *C.QPushButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QPushButton_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPushButton) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QPushButton_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_MinimumSizeHint
func miqt_exec_callback_QPushButton_MinimumSizeHint(self *C.QPushButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QPushButton_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QPushButton) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QPushButton_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_Event
func miqt_exec_callback_QPushButton_Event(self *C.QPushButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QPushButton_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QPushButton_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_PaintEvent
func miqt_exec_callback_QPushButton_PaintEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QPushButton_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QPushButton_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_KeyPressEvent
func miqt_exec_callback_QPushButton_KeyPressEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QPushButton_virtualbase_FocusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QPushButton_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_FocusInEvent
func miqt_exec_callback_QPushButton_FocusInEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QPushButton_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QPushButton_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_FocusOutEvent
func miqt_exec_callback_QPushButton_FocusOutEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QPushButton_virtualbase_HitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QPushButton) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	ok := C.QPushButton_override_virtual_HitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_HitButton
func miqt_exec_callback_QPushButton_HitButton(self *C.QPushButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPoint) bool, pos *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_CheckStateSet() {

	C.QPushButton_virtualbase_CheckStateSet(unsafe.Pointer(this.h))

}
func (this *QPushButton) OnCheckStateSet(slot func(super func())) {
	ok := C.QPushButton_override_virtual_CheckStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_CheckStateSet
func miqt_exec_callback_QPushButton_CheckStateSet(self *C.QPushButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPushButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QPushButton) callVirtualBase_NextCheckState() {

	C.QPushButton_virtualbase_NextCheckState(unsafe.Pointer(this.h))

}
func (this *QPushButton) OnNextCheckState(slot func(super func())) {
	ok := C.QPushButton_override_virtual_NextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_NextCheckState
func miqt_exec_callback_QPushButton_NextCheckState(self *C.QPushButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPushButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QPushButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QPushButton_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QPushButton_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_KeyReleaseEvent
func miqt_exec_callback_QPushButton_KeyReleaseEvent(self *C.QPushButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QPushButton_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_MousePressEvent
func miqt_exec_callback_QPushButton_MousePressEvent(self *C.QPushButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QPushButton_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_MouseReleaseEvent
func miqt_exec_callback_QPushButton_MouseReleaseEvent(self *C.QPushButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QPushButton_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_MouseMoveEvent
func miqt_exec_callback_QPushButton_MouseMoveEvent(self *C.QPushButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QPushButton_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QPushButton_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_ChangeEvent
func miqt_exec_callback_QPushButton_ChangeEvent(self *C.QPushButton, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QPushButton_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QPushButton_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_TimerEvent
func miqt_exec_callback_QPushButton_TimerEvent(self *C.QPushButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DevType() int {

	return (int)(C.QPushButton_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPushButton) OnDevType(slot func(super func() int) int) {
	ok := C.QPushButton_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_DevType
func miqt_exec_callback_QPushButton_DevType(self *C.QPushButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_SetVisible(visible bool) {

	C.QPushButton_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPushButton) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPushButton_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_SetVisible
func miqt_exec_callback_QPushButton_SetVisible(self *C.QPushButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPushButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPushButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPushButton_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPushButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPushButton_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_HeightForWidth
func miqt_exec_callback_QPushButton_HeightForWidth(self *C.QPushButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QPushButton_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPushButton) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPushButton_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_HasHeightForWidth
func miqt_exec_callback_QPushButton_HasHeightForWidth(self *C.QPushButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPushButton_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QPushButton) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QPushButton_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_PaintEngine
func miqt_exec_callback_QPushButton_PaintEngine(self *C.QPushButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QPushButton_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_MouseDoubleClickEvent
func miqt_exec_callback_QPushButton_MouseDoubleClickEvent(self *C.QPushButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QPushButton_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QPushButton_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_WheelEvent
func miqt_exec_callback_QPushButton_WheelEvent(self *C.QPushButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_EnterEvent(event *QEvent) {

	C.QPushButton_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPushButton_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_EnterEvent
func miqt_exec_callback_QPushButton_EnterEvent(self *C.QPushButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QPushButton_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPushButton_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_LeaveEvent
func miqt_exec_callback_QPushButton_LeaveEvent(self *C.QPushButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QPushButton_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QPushButton_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_MoveEvent
func miqt_exec_callback_QPushButton_MoveEvent(self *C.QPushButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QPushButton_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QPushButton_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_ResizeEvent
func miqt_exec_callback_QPushButton_ResizeEvent(self *C.QPushButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QPushButton_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QPushButton_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_CloseEvent
func miqt_exec_callback_QPushButton_CloseEvent(self *C.QPushButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QPushButton_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QPushButton_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_ContextMenuEvent
func miqt_exec_callback_QPushButton_ContextMenuEvent(self *C.QPushButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QPushButton_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QPushButton_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_TabletEvent
func miqt_exec_callback_QPushButton_TabletEvent(self *C.QPushButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QPushButton_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QPushButton_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_ActionEvent
func miqt_exec_callback_QPushButton_ActionEvent(self *C.QPushButton, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QPushButton_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QPushButton_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_DragEnterEvent
func miqt_exec_callback_QPushButton_DragEnterEvent(self *C.QPushButton, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QPushButton_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QPushButton_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_DragMoveEvent
func miqt_exec_callback_QPushButton_DragMoveEvent(self *C.QPushButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QPushButton_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QPushButton_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_DragLeaveEvent
func miqt_exec_callback_QPushButton_DragLeaveEvent(self *C.QPushButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QPushButton_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QPushButton_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_DropEvent
func miqt_exec_callback_QPushButton_DropEvent(self *C.QPushButton, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QPushButton_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QPushButton_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_ShowEvent
func miqt_exec_callback_QPushButton_ShowEvent(self *C.QPushButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QPushButton_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QPushButton_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_HideEvent
func miqt_exec_callback_QPushButton_HideEvent(self *C.QPushButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QPushButton_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QPushButton) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QPushButton_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_NativeEvent
func miqt_exec_callback_QPushButton_NativeEvent(self *C.QPushButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPushButton_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPushButton) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPushButton_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_Metric
func miqt_exec_callback_QPushButton_Metric(self *C.QPushButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_InitPainter(painter *QPainter) {

	C.QPushButton_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPushButton) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QPushButton_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_InitPainter
func miqt_exec_callback_QPushButton_InitPainter(self *C.QPushButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPushButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPushButton) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPushButton_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPushButton) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QPushButton_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_Redirected
func miqt_exec_callback_QPushButton_Redirected(self *C.QPushButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QPushButton_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPushButton) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QPushButton_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_SharedPainter
func miqt_exec_callback_QPushButton_SharedPainter(self *C.QPushButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QPushButton_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QPushButton_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_InputMethodEvent
func miqt_exec_callback_QPushButton_InputMethodEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QPushButton_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPushButton) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QPushButton_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_InputMethodQuery
func miqt_exec_callback_QPushButton_InputMethodQuery(self *C.QPushButton, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QPushButton_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPushButton) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPushButton_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_FocusNextPrevChild
func miqt_exec_callback_QPushButton_FocusNextPrevChild(self *C.QPushButton, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPushButton_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPushButton) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPushButton_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_EventFilter
func miqt_exec_callback_QPushButton_EventFilter(self *C.QPushButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPushButton_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPushButton_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_ChildEvent
func miqt_exec_callback_QPushButton_ChildEvent(self *C.QPushButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPushButton_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPushButton_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_CustomEvent
func miqt_exec_callback_QPushButton_CustomEvent(self *C.QPushButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPushButton_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPushButton) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPushButton_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_ConnectNotify
func miqt_exec_callback_QPushButton_ConnectNotify(self *C.QPushButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPushButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPushButton) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPushButton_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPushButton) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPushButton_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_DisconnectNotify
func miqt_exec_callback_QPushButton_DisconnectNotify(self *C.QPushButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPushButton{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPushButton) Delete() {
	C.QPushButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPushButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QPushButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
