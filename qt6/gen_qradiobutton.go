package qt6

/*

#include "gen_qradiobutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRadioButton struct {
	h *C.QRadioButton
	*QAbstractButton
}

func (this *QRadioButton) cPointer() *C.QRadioButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRadioButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRadioButton constructs the type using only CGO pointers.
func newQRadioButton(h *C.QRadioButton) *QRadioButton {
	if h == nil {
		return nil
	}
	var outptr_QAbstractButton *C.QAbstractButton = nil
	C.QRadioButton_virtbase(h, &outptr_QAbstractButton)

	return &QRadioButton{h: h,
		QAbstractButton: newQAbstractButton(outptr_QAbstractButton)}
}

// UnsafeNewQRadioButton constructs the type using only unsafe pointers.
func UnsafeNewQRadioButton(h unsafe.Pointer) *QRadioButton {
	return newQRadioButton((*C.QRadioButton)(h))
}

// NewQRadioButton constructs a new QRadioButton object.
func NewQRadioButton(parent *QWidget) *QRadioButton {

	return newQRadioButton(C.QRadioButton_new(parent.cPointer()))
}

// NewQRadioButton2 constructs a new QRadioButton object.
func NewQRadioButton2() *QRadioButton {

	return newQRadioButton(C.QRadioButton_new2())
}

// NewQRadioButton3 constructs a new QRadioButton object.
func NewQRadioButton3(text string) *QRadioButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQRadioButton(C.QRadioButton_new3(text_ms))
}

// NewQRadioButton4 constructs a new QRadioButton object.
func NewQRadioButton4(text string, parent *QWidget) *QRadioButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQRadioButton(C.QRadioButton_new4(text_ms, parent.cPointer()))
}

func (this *QRadioButton) MetaObject() *QMetaObject {
	return newQMetaObject(C.QRadioButton_MetaObject(this.h))
}

func (this *QRadioButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRadioButton_Metacast(this.h, param1_Cstring))
}

func QRadioButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioButton) SizeHint() *QSize {
	_goptr := newQSize(C.QRadioButton_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRadioButton) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QRadioButton_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QRadioButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QRadioButton_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRadioButton) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QRadioButton_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_SizeHint
func miqt_exec_callback_QRadioButton_SizeHint(self *C.QRadioButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QRadioButton_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRadioButton) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QRadioButton_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_MinimumSizeHint
func miqt_exec_callback_QRadioButton_MinimumSizeHint(self *C.QRadioButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QRadioButton_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QRadioButton) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QRadioButton_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_Event
func miqt_exec_callback_QRadioButton_Event(self *C.QRadioButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_HitButton(param1 *QPoint) bool {

	return (bool)(C.QRadioButton_virtualbase_HitButton(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QRadioButton) OnHitButton(slot func(super func(param1 *QPoint) bool, param1 *QPoint) bool) {
	ok := C.QRadioButton_override_virtual_HitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_HitButton
func miqt_exec_callback_QRadioButton_HitButton(self *C.QRadioButton, cb C.intptr_t, param1 *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPoint) bool, param1 *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(param1)

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QRadioButton_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRadioButton) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QRadioButton_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_PaintEvent
func miqt_exec_callback_QRadioButton_PaintEvent(self *C.QRadioButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QRadioButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QRadioButton_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRadioButton) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRadioButton_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_MouseMoveEvent
func miqt_exec_callback_QRadioButton_MouseMoveEvent(self *C.QRadioButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_InitStyleOption(button *QStyleOptionButton) {

	C.QRadioButton_virtualbase_InitStyleOption(unsafe.Pointer(this.h), button.cPointer())

}
func (this *QRadioButton) OnInitStyleOption(slot func(super func(button *QStyleOptionButton), button *QStyleOptionButton)) {
	ok := C.QRadioButton_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_InitStyleOption
func miqt_exec_callback_QRadioButton_InitStyleOption(self *C.QRadioButton, cb C.intptr_t, button *C.QStyleOptionButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(button *QStyleOptionButton), button *QStyleOptionButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionButton(button)

	gofunc((&QRadioButton{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QRadioButton) callVirtualBase_CheckStateSet() {

	C.QRadioButton_virtualbase_CheckStateSet(unsafe.Pointer(this.h))

}
func (this *QRadioButton) OnCheckStateSet(slot func(super func())) {
	ok := C.QRadioButton_override_virtual_CheckStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_CheckStateSet
func miqt_exec_callback_QRadioButton_CheckStateSet(self *C.QRadioButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QRadioButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QRadioButton) callVirtualBase_NextCheckState() {

	C.QRadioButton_virtualbase_NextCheckState(unsafe.Pointer(this.h))

}
func (this *QRadioButton) OnNextCheckState(slot func(super func())) {
	ok := C.QRadioButton_override_virtual_NextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_NextCheckState
func miqt_exec_callback_QRadioButton_NextCheckState(self *C.QRadioButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QRadioButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QRadioButton) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QRadioButton_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QRadioButton_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_KeyPressEvent
func miqt_exec_callback_QRadioButton_KeyPressEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QRadioButton_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QRadioButton_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_KeyReleaseEvent
func miqt_exec_callback_QRadioButton_KeyReleaseEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QRadioButton_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QRadioButton_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_MousePressEvent
func miqt_exec_callback_QRadioButton_MousePressEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QRadioButton_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QRadioButton_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_MouseReleaseEvent
func miqt_exec_callback_QRadioButton_MouseReleaseEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QRadioButton_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QRadioButton_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_FocusInEvent
func miqt_exec_callback_QRadioButton_FocusInEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QRadioButton_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QRadioButton_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_FocusOutEvent
func miqt_exec_callback_QRadioButton_FocusOutEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QRadioButton_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QRadioButton_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_ChangeEvent
func miqt_exec_callback_QRadioButton_ChangeEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QRadioButton_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QRadioButton_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_TimerEvent
func miqt_exec_callback_QRadioButton_TimerEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DevType() int {

	return (int)(C.QRadioButton_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QRadioButton) OnDevType(slot func(super func() int) int) {
	ok := C.QRadioButton_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_DevType
func miqt_exec_callback_QRadioButton_DevType(self *C.QRadioButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_SetVisible(visible bool) {

	C.QRadioButton_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QRadioButton) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QRadioButton_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_SetVisible
func miqt_exec_callback_QRadioButton_SetVisible(self *C.QRadioButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QRadioButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QRadioButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QRadioButton_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QRadioButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QRadioButton_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_HeightForWidth
func miqt_exec_callback_QRadioButton_HeightForWidth(self *C.QRadioButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QRadioButton_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QRadioButton) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QRadioButton_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_HasHeightForWidth
func miqt_exec_callback_QRadioButton_HasHeightForWidth(self *C.QRadioButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QRadioButton_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QRadioButton) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QRadioButton_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_PaintEngine
func miqt_exec_callback_QRadioButton_PaintEngine(self *C.QRadioButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QRadioButton_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRadioButton_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_MouseDoubleClickEvent
func miqt_exec_callback_QRadioButton_MouseDoubleClickEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QRadioButton_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QRadioButton_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_WheelEvent
func miqt_exec_callback_QRadioButton_WheelEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QRadioButton_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QRadioButton_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_EnterEvent
func miqt_exec_callback_QRadioButton_EnterEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QRadioButton_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRadioButton_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_LeaveEvent
func miqt_exec_callback_QRadioButton_LeaveEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QRadioButton_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QRadioButton_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_MoveEvent
func miqt_exec_callback_QRadioButton_MoveEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QRadioButton_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QRadioButton_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_ResizeEvent
func miqt_exec_callback_QRadioButton_ResizeEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QRadioButton_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QRadioButton_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_CloseEvent
func miqt_exec_callback_QRadioButton_CloseEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QRadioButton_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QRadioButton_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_ContextMenuEvent
func miqt_exec_callback_QRadioButton_ContextMenuEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QRadioButton_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QRadioButton_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_TabletEvent
func miqt_exec_callback_QRadioButton_TabletEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QRadioButton_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QRadioButton_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_ActionEvent
func miqt_exec_callback_QRadioButton_ActionEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QRadioButton_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QRadioButton_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_DragEnterEvent
func miqt_exec_callback_QRadioButton_DragEnterEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QRadioButton_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QRadioButton_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_DragMoveEvent
func miqt_exec_callback_QRadioButton_DragMoveEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QRadioButton_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QRadioButton_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_DragLeaveEvent
func miqt_exec_callback_QRadioButton_DragLeaveEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QRadioButton_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QRadioButton_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_DropEvent
func miqt_exec_callback_QRadioButton_DropEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QRadioButton_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QRadioButton_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_ShowEvent
func miqt_exec_callback_QRadioButton_ShowEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QRadioButton_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QRadioButton_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_HideEvent
func miqt_exec_callback_QRadioButton_HideEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QRadioButton_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QRadioButton) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QRadioButton_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_NativeEvent
func miqt_exec_callback_QRadioButton_NativeEvent(self *C.QRadioButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QRadioButton_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QRadioButton) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QRadioButton_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_Metric
func miqt_exec_callback_QRadioButton_Metric(self *C.QRadioButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_InitPainter(painter *QPainter) {

	C.QRadioButton_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QRadioButton) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QRadioButton_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_InitPainter
func miqt_exec_callback_QRadioButton_InitPainter(self *C.QRadioButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QRadioButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QRadioButton) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QRadioButton_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QRadioButton) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QRadioButton_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_Redirected
func miqt_exec_callback_QRadioButton_Redirected(self *C.QRadioButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QRadioButton_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QRadioButton) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QRadioButton_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_SharedPainter
func miqt_exec_callback_QRadioButton_SharedPainter(self *C.QRadioButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QRadioButton_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRadioButton) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QRadioButton_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_InputMethodEvent
func miqt_exec_callback_QRadioButton_InputMethodEvent(self *C.QRadioButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QRadioButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QRadioButton_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRadioButton) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QRadioButton_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_InputMethodQuery
func miqt_exec_callback_QRadioButton_InputMethodQuery(self *C.QRadioButton, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QRadioButton_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QRadioButton) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QRadioButton_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_FocusNextPrevChild
func miqt_exec_callback_QRadioButton_FocusNextPrevChild(self *C.QRadioButton, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QRadioButton_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QRadioButton) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QRadioButton_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_EventFilter
func miqt_exec_callback_QRadioButton_EventFilter(self *C.QRadioButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QRadioButton_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QRadioButton_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_ChildEvent
func miqt_exec_callback_QRadioButton_ChildEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_CustomEvent(event *QEvent) {

	C.QRadioButton_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRadioButton_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_CustomEvent
func miqt_exec_callback_QRadioButton_CustomEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QRadioButton_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRadioButton) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRadioButton_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_ConnectNotify
func miqt_exec_callback_QRadioButton_ConnectNotify(self *C.QRadioButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRadioButton) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QRadioButton_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRadioButton) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRadioButton_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_DisconnectNotify
func miqt_exec_callback_QRadioButton_DisconnectNotify(self *C.QRadioButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QRadioButton) Delete() {
	C.QRadioButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
