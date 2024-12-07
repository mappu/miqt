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
	h          *C.QRadioButton
	isSubclass bool
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
func newQRadioButton(h *C.QRadioButton, h_QAbstractButton *C.QAbstractButton, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QRadioButton {
	if h == nil {
		return nil
	}
	return &QRadioButton{h: h,
		QAbstractButton: newQAbstractButton(h_QAbstractButton, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQRadioButton constructs the type using only unsafe pointers.
func UnsafeNewQRadioButton(h unsafe.Pointer, h_QAbstractButton unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QRadioButton {
	if h == nil {
		return nil
	}

	return &QRadioButton{h: (*C.QRadioButton)(h),
		QAbstractButton: UnsafeNewQAbstractButton(h_QAbstractButton, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQRadioButton constructs a new QRadioButton object.
func NewQRadioButton(parent *QWidget) *QRadioButton {
	var outptr_QRadioButton *C.QRadioButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QRadioButton_new(parent.cPointer(), &outptr_QRadioButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQRadioButton(outptr_QRadioButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQRadioButton2 constructs a new QRadioButton object.
func NewQRadioButton2() *QRadioButton {
	var outptr_QRadioButton *C.QRadioButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QRadioButton_new2(&outptr_QRadioButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQRadioButton(outptr_QRadioButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQRadioButton3 constructs a new QRadioButton object.
func NewQRadioButton3(text string) *QRadioButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QRadioButton *C.QRadioButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QRadioButton_new3(text_ms, &outptr_QRadioButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQRadioButton(outptr_QRadioButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQRadioButton4 constructs a new QRadioButton object.
func NewQRadioButton4(text string, parent *QWidget) *QRadioButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QRadioButton *C.QRadioButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QRadioButton_new4(text_ms, parent.cPointer(), &outptr_QRadioButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQRadioButton(outptr_QRadioButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_HitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_PaintEvent
func miqt_exec_callback_QRadioButton_PaintEvent(self *C.QRadioButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QRadioButton_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRadioButton) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_MouseMoveEvent
func miqt_exec_callback_QRadioButton_MouseMoveEvent(self *C.QRadioButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1, nil, nil, nil, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_InitStyleOption(button *QStyleOptionButton) {

	C.QRadioButton_virtualbase_InitStyleOption(unsafe.Pointer(this.h), button.cPointer())

}
func (this *QRadioButton) OnInitStyleOption(slot func(super func(button *QStyleOptionButton), button *QStyleOptionButton)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_InitStyleOption
func miqt_exec_callback_QRadioButton_InitStyleOption(self *C.QRadioButton, cb C.intptr_t, button *C.QStyleOptionButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(button *QStyleOptionButton), button *QStyleOptionButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionButton(button, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QRadioButton) callVirtualBase_CheckStateSet() {

	C.QRadioButton_virtualbase_CheckStateSet(unsafe.Pointer(this.h))

}
func (this *QRadioButton) OnCheckStateSet(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_CheckStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_NextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_KeyPressEvent
func miqt_exec_callback_QRadioButton_KeyPressEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e, nil, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QRadioButton_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_KeyReleaseEvent
func miqt_exec_callback_QRadioButton_KeyReleaseEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e, nil, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QRadioButton_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_MousePressEvent
func miqt_exec_callback_QRadioButton_MousePressEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e, nil, nil, nil, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QRadioButton_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_MouseReleaseEvent
func miqt_exec_callback_QRadioButton_MouseReleaseEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e, nil, nil, nil, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QRadioButton_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_FocusInEvent
func miqt_exec_callback_QRadioButton_FocusInEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QRadioButton_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_FocusOutEvent
func miqt_exec_callback_QRadioButton_FocusOutEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QRadioButton_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QRadioButton_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioButton_TimerEvent
func miqt_exec_callback_QRadioButton_TimerEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e, nil)

	gofunc((&QRadioButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QRadioButton) Delete() {
	C.QRadioButton_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
