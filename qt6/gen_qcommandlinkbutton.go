package qt6

/*

#include "gen_qcommandlinkbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCommandLinkButton struct {
	h *C.QCommandLinkButton
	*QPushButton
}

func (this *QCommandLinkButton) cPointer() *C.QCommandLinkButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCommandLinkButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCommandLinkButton constructs the type using only CGO pointers.
func newQCommandLinkButton(h *C.QCommandLinkButton) *QCommandLinkButton {
	if h == nil {
		return nil
	}
	var outptr_QPushButton *C.QPushButton = nil
	C.QCommandLinkButton_virtbase(h, &outptr_QPushButton)

	return &QCommandLinkButton{h: h,
		QPushButton: newQPushButton(outptr_QPushButton)}
}

// UnsafeNewQCommandLinkButton constructs the type using only unsafe pointers.
func UnsafeNewQCommandLinkButton(h unsafe.Pointer) *QCommandLinkButton {
	return newQCommandLinkButton((*C.QCommandLinkButton)(h))
}

// NewQCommandLinkButton constructs a new QCommandLinkButton object.
func NewQCommandLinkButton(parent *QWidget) *QCommandLinkButton {

	return newQCommandLinkButton(C.QCommandLinkButton_new(parent.cPointer()))
}

// NewQCommandLinkButton2 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton2() *QCommandLinkButton {

	return newQCommandLinkButton(C.QCommandLinkButton_new2())
}

// NewQCommandLinkButton3 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton3(text string) *QCommandLinkButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQCommandLinkButton(C.QCommandLinkButton_new3(text_ms))
}

// NewQCommandLinkButton4 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton4(text string, description string) *QCommandLinkButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))

	return newQCommandLinkButton(C.QCommandLinkButton_new4(text_ms, description_ms))
}

// NewQCommandLinkButton5 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton5(text string, parent *QWidget) *QCommandLinkButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQCommandLinkButton(C.QCommandLinkButton_new5(text_ms, parent.cPointer()))
}

// NewQCommandLinkButton6 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton6(text string, description string, parent *QWidget) *QCommandLinkButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))

	return newQCommandLinkButton(C.QCommandLinkButton_new6(text_ms, description_ms, parent.cPointer()))
}

func (this *QCommandLinkButton) MetaObject() *QMetaObject {
	return newQMetaObject(C.QCommandLinkButton_MetaObject(this.h))
}

func (this *QCommandLinkButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCommandLinkButton_Metacast(this.h, param1_Cstring))
}

func QCommandLinkButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) Description() string {
	var _ms C.struct_miqt_string = C.QCommandLinkButton_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QCommandLinkButton_SetDescription(this.h, description_ms)
}

func (this *QCommandLinkButton) SizeHint() *QSize {
	_goptr := newQSize(C.QCommandLinkButton_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommandLinkButton) HeightForWidth(param1 int) int {
	return (int)(C.QCommandLinkButton_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QCommandLinkButton) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QCommandLinkButton_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommandLinkButton) InitStyleOption(option *QStyleOptionButton) {
	C.QCommandLinkButton_InitStyleOption(this.h, option.cPointer())
}

func QCommandLinkButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QCommandLinkButton_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommandLinkButton) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCommandLinkButton_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_SizeHint
func miqt_exec_callback_QCommandLinkButton_SizeHint(self *C.QCommandLinkButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QCommandLinkButton_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCommandLinkButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QCommandLinkButton_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_HeightForWidth
func miqt_exec_callback_QCommandLinkButton_HeightForWidth(self *C.QCommandLinkButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QCommandLinkButton_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommandLinkButton) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCommandLinkButton_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_MinimumSizeHint
func miqt_exec_callback_QCommandLinkButton_MinimumSizeHint(self *C.QCommandLinkButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_InitStyleOption(option *QStyleOptionButton) {

	C.QCommandLinkButton_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QCommandLinkButton) OnInitStyleOption(slot func(super func(option *QStyleOptionButton), option *QStyleOptionButton)) {
	ok := C.QCommandLinkButton_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_InitStyleOption
func miqt_exec_callback_QCommandLinkButton_InitStyleOption(self *C.QCommandLinkButton, cb C.intptr_t, option *C.QStyleOptionButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionButton), option *QStyleOptionButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionButton(option)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QCommandLinkButton_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QCommandLinkButton) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QCommandLinkButton_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_Event
func miqt_exec_callback_QCommandLinkButton_Event(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QCommandLinkButton_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QCommandLinkButton_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_PaintEvent
func miqt_exec_callback_QCommandLinkButton_PaintEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QCommandLinkButton_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QCommandLinkButton_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_KeyPressEvent
func miqt_exec_callback_QCommandLinkButton_KeyPressEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QCommandLinkButton_virtualbase_FocusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QCommandLinkButton_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_FocusInEvent
func miqt_exec_callback_QCommandLinkButton_FocusInEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QCommandLinkButton_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QCommandLinkButton_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_FocusOutEvent
func miqt_exec_callback_QCommandLinkButton_FocusOutEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QCommandLinkButton_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QCommandLinkButton_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_MouseMoveEvent
func miqt_exec_callback_QCommandLinkButton_MouseMoveEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QCommandLinkButton_virtualbase_HitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QCommandLinkButton) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	ok := C.QCommandLinkButton_override_virtual_HitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_HitButton
func miqt_exec_callback_QCommandLinkButton_HitButton(self *C.QCommandLinkButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPoint) bool, pos *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QCommandLinkButton) Delete() {
	C.QCommandLinkButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCommandLinkButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QCommandLinkButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
