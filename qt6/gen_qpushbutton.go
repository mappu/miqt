package qt6

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

func (this *QPushButton) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QPushButton_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_MouseMoveEvent
func miqt_exec_callback_QPushButton_MouseMoveEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_InitStyleOption(option *QStyleOptionButton) {

	C.QPushButton_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QPushButton) OnInitStyleOption(slot func(super func(option *QStyleOptionButton), option *QStyleOptionButton)) {
	ok := C.QPushButton_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_InitStyleOption
func miqt_exec_callback_QPushButton_InitStyleOption(self *C.QPushButton, cb C.intptr_t, option *C.QStyleOptionButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionButton), option *QStyleOptionButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionButton(option)

	gofunc((&QPushButton{h: self}).callVirtualBase_InitStyleOption, slotval1)

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
