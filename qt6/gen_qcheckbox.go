package qt6

/*

#include "gen_qcheckbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCheckBox struct {
	h *C.QCheckBox
	*QAbstractButton
}

func (this *QCheckBox) cPointer() *C.QCheckBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCheckBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCheckBox constructs the type using only CGO pointers.
func newQCheckBox(h *C.QCheckBox) *QCheckBox {
	if h == nil {
		return nil
	}
	var outptr_QAbstractButton *C.QAbstractButton = nil
	C.QCheckBox_virtbase(h, &outptr_QAbstractButton)

	return &QCheckBox{h: h,
		QAbstractButton: newQAbstractButton(outptr_QAbstractButton)}
}

// UnsafeNewQCheckBox constructs the type using only unsafe pointers.
func UnsafeNewQCheckBox(h unsafe.Pointer) *QCheckBox {
	return newQCheckBox((*C.QCheckBox)(h))
}

// NewQCheckBox constructs a new QCheckBox object.
func NewQCheckBox(parent *QWidget) *QCheckBox {

	return newQCheckBox(C.QCheckBox_new(parent.cPointer()))
}

// NewQCheckBox2 constructs a new QCheckBox object.
func NewQCheckBox2() *QCheckBox {

	return newQCheckBox(C.QCheckBox_new2())
}

// NewQCheckBox3 constructs a new QCheckBox object.
func NewQCheckBox3(text string) *QCheckBox {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQCheckBox(C.QCheckBox_new3(text_ms))
}

// NewQCheckBox4 constructs a new QCheckBox object.
func NewQCheckBox4(text string, parent *QWidget) *QCheckBox {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQCheckBox(C.QCheckBox_new4(text_ms, parent.cPointer()))
}

func (this *QCheckBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QCheckBox_MetaObject(this.h))
}

func (this *QCheckBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCheckBox_Metacast(this.h, param1_Cstring))
}

func QCheckBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCheckBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCheckBox) SizeHint() *QSize {
	_goptr := newQSize(C.QCheckBox_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCheckBox) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QCheckBox_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCheckBox) SetTristate() {
	C.QCheckBox_SetTristate(this.h)
}

func (this *QCheckBox) IsTristate() bool {
	return (bool)(C.QCheckBox_IsTristate(this.h))
}

func (this *QCheckBox) CheckState() CheckState {
	return (CheckState)(C.QCheckBox_CheckState(this.h))
}

func (this *QCheckBox) SetCheckState(state CheckState) {
	C.QCheckBox_SetCheckState(this.h, (C.int)(state))
}

func (this *QCheckBox) StateChanged(param1 int) {
	C.QCheckBox_StateChanged(this.h, (C.int)(param1))
}
func (this *QCheckBox) OnStateChanged(slot func(param1 int)) {
	C.QCheckBox_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCheckBox_StateChanged
func miqt_exec_callback_QCheckBox_StateChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func QCheckBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCheckBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCheckBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCheckBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCheckBox) SetTristate1(y bool) {
	C.QCheckBox_SetTristate1(this.h, (C.bool)(y))
}

func (this *QCheckBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QCheckBox_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCheckBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCheckBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_SizeHint
func miqt_exec_callback_QCheckBox_SizeHint(self *C.QCheckBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QCheckBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCheckBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCheckBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_MinimumSizeHint
func miqt_exec_callback_QCheckBox_MinimumSizeHint(self *C.QCheckBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QCheckBox_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QCheckBox) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QCheckBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_Event
func miqt_exec_callback_QCheckBox_Event(self *C.QCheckBox, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QCheckBox_virtualbase_HitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QCheckBox) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	ok := C.QCheckBox_override_virtual_HitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_HitButton
func miqt_exec_callback_QCheckBox_HitButton(self *C.QCheckBox, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPoint) bool, pos *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_CheckStateSet() {

	C.QCheckBox_virtualbase_CheckStateSet(unsafe.Pointer(this.h))

}
func (this *QCheckBox) OnCheckStateSet(slot func(super func())) {
	ok := C.QCheckBox_override_virtual_CheckStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_CheckStateSet
func miqt_exec_callback_QCheckBox_CheckStateSet(self *C.QCheckBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QCheckBox{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QCheckBox) callVirtualBase_NextCheckState() {

	C.QCheckBox_virtualbase_NextCheckState(unsafe.Pointer(this.h))

}
func (this *QCheckBox) OnNextCheckState(slot func(super func())) {
	ok := C.QCheckBox_override_virtual_NextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_NextCheckState
func miqt_exec_callback_QCheckBox_NextCheckState(self *C.QCheckBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QCheckBox{h: self}).callVirtualBase_NextCheckState)

}

func (this *QCheckBox) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QCheckBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCheckBox) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QCheckBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_PaintEvent
func miqt_exec_callback_QCheckBox_PaintEvent(self *C.QCheckBox, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QCheckBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QCheckBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCheckBox) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QCheckBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_MouseMoveEvent
func miqt_exec_callback_QCheckBox_MouseMoveEvent(self *C.QCheckBox, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_InitStyleOption(option *QStyleOptionButton) {

	C.QCheckBox_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QCheckBox) OnInitStyleOption(slot func(super func(option *QStyleOptionButton), option *QStyleOptionButton)) {
	ok := C.QCheckBox_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_InitStyleOption
func miqt_exec_callback_QCheckBox_InitStyleOption(self *C.QCheckBox, cb C.intptr_t, option *C.QStyleOptionButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionButton), option *QStyleOptionButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionButton(option)

	gofunc((&QCheckBox{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QCheckBox) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QCheckBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QCheckBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_KeyPressEvent
func miqt_exec_callback_QCheckBox_KeyPressEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QCheckBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QCheckBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_KeyReleaseEvent
func miqt_exec_callback_QCheckBox_KeyReleaseEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QCheckBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QCheckBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_MousePressEvent
func miqt_exec_callback_QCheckBox_MousePressEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QCheckBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QCheckBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_MouseReleaseEvent
func miqt_exec_callback_QCheckBox_MouseReleaseEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QCheckBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QCheckBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_FocusInEvent
func miqt_exec_callback_QCheckBox_FocusInEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QCheckBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QCheckBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_FocusOutEvent
func miqt_exec_callback_QCheckBox_FocusOutEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QCheckBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QCheckBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_ChangeEvent
func miqt_exec_callback_QCheckBox_ChangeEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QCheckBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QCheckBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_TimerEvent
func miqt_exec_callback_QCheckBox_TimerEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DevType() int {

	return (int)(C.QCheckBox_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QCheckBox) OnDevType(slot func(super func() int) int) {
	ok := C.QCheckBox_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_DevType
func miqt_exec_callback_QCheckBox_DevType(self *C.QCheckBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_SetVisible(visible bool) {

	C.QCheckBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QCheckBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QCheckBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_SetVisible
func miqt_exec_callback_QCheckBox_SetVisible(self *C.QCheckBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QCheckBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QCheckBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QCheckBox_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCheckBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QCheckBox_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_HeightForWidth
func miqt_exec_callback_QCheckBox_HeightForWidth(self *C.QCheckBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QCheckBox_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QCheckBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QCheckBox_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_HasHeightForWidth
func miqt_exec_callback_QCheckBox_HasHeightForWidth(self *C.QCheckBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QCheckBox_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QCheckBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QCheckBox_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_PaintEngine
func miqt_exec_callback_QCheckBox_PaintEngine(self *C.QCheckBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QCheckBox_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QCheckBox_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_MouseDoubleClickEvent
func miqt_exec_callback_QCheckBox_MouseDoubleClickEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QCheckBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QCheckBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_WheelEvent
func miqt_exec_callback_QCheckBox_WheelEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QCheckBox_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QCheckBox_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_EnterEvent
func miqt_exec_callback_QCheckBox_EnterEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QCheckBox_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCheckBox_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_LeaveEvent
func miqt_exec_callback_QCheckBox_LeaveEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QCheckBox_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QCheckBox_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_MoveEvent
func miqt_exec_callback_QCheckBox_MoveEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QCheckBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QCheckBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_ResizeEvent
func miqt_exec_callback_QCheckBox_ResizeEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QCheckBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QCheckBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_CloseEvent
func miqt_exec_callback_QCheckBox_CloseEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QCheckBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QCheckBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_ContextMenuEvent
func miqt_exec_callback_QCheckBox_ContextMenuEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QCheckBox_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QCheckBox_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_TabletEvent
func miqt_exec_callback_QCheckBox_TabletEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QCheckBox_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QCheckBox_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_ActionEvent
func miqt_exec_callback_QCheckBox_ActionEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QCheckBox_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QCheckBox_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_DragEnterEvent
func miqt_exec_callback_QCheckBox_DragEnterEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QCheckBox_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QCheckBox_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_DragMoveEvent
func miqt_exec_callback_QCheckBox_DragMoveEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QCheckBox_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QCheckBox_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_DragLeaveEvent
func miqt_exec_callback_QCheckBox_DragLeaveEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QCheckBox_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QCheckBox_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_DropEvent
func miqt_exec_callback_QCheckBox_DropEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QCheckBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QCheckBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_ShowEvent
func miqt_exec_callback_QCheckBox_ShowEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QCheckBox_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QCheckBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_HideEvent
func miqt_exec_callback_QCheckBox_HideEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QCheckBox_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QCheckBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QCheckBox_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_NativeEvent
func miqt_exec_callback_QCheckBox_NativeEvent(self *C.QCheckBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QCheckBox_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCheckBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QCheckBox_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_Metric
func miqt_exec_callback_QCheckBox_Metric(self *C.QCheckBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QCheckBox_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QCheckBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QCheckBox_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_InitPainter
func miqt_exec_callback_QCheckBox_InitPainter(self *C.QCheckBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QCheckBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QCheckBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QCheckBox_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QCheckBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QCheckBox_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_Redirected
func miqt_exec_callback_QCheckBox_Redirected(self *C.QCheckBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QCheckBox_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QCheckBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QCheckBox_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_SharedPainter
func miqt_exec_callback_QCheckBox_SharedPainter(self *C.QCheckBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QCheckBox_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCheckBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QCheckBox_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_InputMethodEvent
func miqt_exec_callback_QCheckBox_InputMethodEvent(self *C.QCheckBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QCheckBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QCheckBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCheckBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QCheckBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_InputMethodQuery
func miqt_exec_callback_QCheckBox_InputMethodQuery(self *C.QCheckBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QCheckBox_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QCheckBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QCheckBox_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_FocusNextPrevChild
func miqt_exec_callback_QCheckBox_FocusNextPrevChild(self *C.QCheckBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QCheckBox_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QCheckBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QCheckBox_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_EventFilter
func miqt_exec_callback_QCheckBox_EventFilter(self *C.QCheckBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QCheckBox_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QCheckBox_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_ChildEvent
func miqt_exec_callback_QCheckBox_ChildEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QCheckBox_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCheckBox_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_CustomEvent
func miqt_exec_callback_QCheckBox_CustomEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QCheckBox_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCheckBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCheckBox_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_ConnectNotify
func miqt_exec_callback_QCheckBox_ConnectNotify(self *C.QCheckBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCheckBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QCheckBox_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCheckBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCheckBox_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_DisconnectNotify
func miqt_exec_callback_QCheckBox_DisconnectNotify(self *C.QCheckBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCheckBox) Delete() {
	C.QCheckBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCheckBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QCheckBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
