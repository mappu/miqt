package qt

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
	return newQMetaObject(C.QCommandLinkButton_metaObject(this.h))
}

func (this *QCommandLinkButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCommandLinkButton_metacast(this.h, param1_Cstring))
}

func QCommandLinkButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) Description() string {
	var _ms C.struct_miqt_string = C.QCommandLinkButton_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QCommandLinkButton_setDescription(this.h, description_ms)
}

func QCommandLinkButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QCommandLinkButton_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommandLinkButton) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCommandLinkButton_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_sizeHint
func miqt_exec_callback_QCommandLinkButton_sizeHint(self *C.QCommandLinkButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QCommandLinkButton_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCommandLinkButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QCommandLinkButton_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_heightForWidth
func miqt_exec_callback_QCommandLinkButton_heightForWidth(self *C.QCommandLinkButton, cb C.intptr_t, param1 C.int) C.int {
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

	_goptr := newQSize(C.QCommandLinkButton_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommandLinkButton) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCommandLinkButton_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_minimumSizeHint
func miqt_exec_callback_QCommandLinkButton_minimumSizeHint(self *C.QCommandLinkButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QCommandLinkButton_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QCommandLinkButton) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QCommandLinkButton_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_event
func miqt_exec_callback_QCommandLinkButton_event(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QEvent) C.bool {
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

	C.QCommandLinkButton_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QCommandLinkButton_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_paintEvent
func miqt_exec_callback_QCommandLinkButton_paintEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QCommandLinkButton_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QCommandLinkButton_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_keyPressEvent
func miqt_exec_callback_QCommandLinkButton_keyPressEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QCommandLinkButton_virtualbase_focusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QCommandLinkButton_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_focusInEvent
func miqt_exec_callback_QCommandLinkButton_focusInEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QCommandLinkButton_virtualbase_focusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QCommandLinkButton_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_focusOutEvent
func miqt_exec_callback_QCommandLinkButton_focusOutEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QCommandLinkButton_virtualbase_hitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QCommandLinkButton) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	ok := C.QCommandLinkButton_override_virtual_hitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_hitButton
func miqt_exec_callback_QCommandLinkButton_hitButton(self *C.QCommandLinkButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPoint) bool, pos *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_CheckStateSet() {

	C.QCommandLinkButton_virtualbase_checkStateSet(unsafe.Pointer(this.h))

}
func (this *QCommandLinkButton) OnCheckStateSet(slot func(super func())) {
	ok := C.QCommandLinkButton_override_virtual_checkStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_checkStateSet
func miqt_exec_callback_QCommandLinkButton_checkStateSet(self *C.QCommandLinkButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QCommandLinkButton) callVirtualBase_NextCheckState() {

	C.QCommandLinkButton_virtualbase_nextCheckState(unsafe.Pointer(this.h))

}
func (this *QCommandLinkButton) OnNextCheckState(slot func(super func())) {
	ok := C.QCommandLinkButton_override_virtual_nextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_nextCheckState
func miqt_exec_callback_QCommandLinkButton_nextCheckState(self *C.QCommandLinkButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QCommandLinkButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QCommandLinkButton_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCommandLinkButton) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QCommandLinkButton_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_keyReleaseEvent
func miqt_exec_callback_QCommandLinkButton_keyReleaseEvent(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QCommandLinkButton_virtualbase_mousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCommandLinkButton) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QCommandLinkButton_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_mousePressEvent
func miqt_exec_callback_QCommandLinkButton_mousePressEvent(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QCommandLinkButton_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCommandLinkButton) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QCommandLinkButton_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_mouseReleaseEvent
func miqt_exec_callback_QCommandLinkButton_mouseReleaseEvent(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QCommandLinkButton_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCommandLinkButton) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QCommandLinkButton_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_mouseMoveEvent
func miqt_exec_callback_QCommandLinkButton_mouseMoveEvent(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QCommandLinkButton_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCommandLinkButton) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QCommandLinkButton_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_changeEvent
func miqt_exec_callback_QCommandLinkButton_changeEvent(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QCommandLinkButton_virtualbase_timerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCommandLinkButton) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QCommandLinkButton_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_timerEvent
func miqt_exec_callback_QCommandLinkButton_timerEvent(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_DevType() int {

	return (int)(C.QCommandLinkButton_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QCommandLinkButton) OnDevType(slot func(super func() int) int) {
	ok := C.QCommandLinkButton_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_devType
func miqt_exec_callback_QCommandLinkButton_devType(self *C.QCommandLinkButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_SetVisible(visible bool) {

	C.QCommandLinkButton_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QCommandLinkButton) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QCommandLinkButton_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_setVisible
func miqt_exec_callback_QCommandLinkButton_setVisible(self *C.QCommandLinkButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QCommandLinkButton_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QCommandLinkButton) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QCommandLinkButton_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_hasHeightForWidth
func miqt_exec_callback_QCommandLinkButton_hasHeightForWidth(self *C.QCommandLinkButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QCommandLinkButton_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QCommandLinkButton) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QCommandLinkButton_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_paintEngine
func miqt_exec_callback_QCommandLinkButton_paintEngine(self *C.QCommandLinkButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QCommandLinkButton_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QCommandLinkButton_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_mouseDoubleClickEvent
func miqt_exec_callback_QCommandLinkButton_mouseDoubleClickEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QCommandLinkButton_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QCommandLinkButton_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_wheelEvent
func miqt_exec_callback_QCommandLinkButton_wheelEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_EnterEvent(event *QEvent) {

	C.QCommandLinkButton_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCommandLinkButton_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_enterEvent
func miqt_exec_callback_QCommandLinkButton_enterEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QCommandLinkButton_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCommandLinkButton_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_leaveEvent
func miqt_exec_callback_QCommandLinkButton_leaveEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QCommandLinkButton_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QCommandLinkButton_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_moveEvent
func miqt_exec_callback_QCommandLinkButton_moveEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QCommandLinkButton_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QCommandLinkButton_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_resizeEvent
func miqt_exec_callback_QCommandLinkButton_resizeEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QCommandLinkButton_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QCommandLinkButton_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_closeEvent
func miqt_exec_callback_QCommandLinkButton_closeEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QCommandLinkButton_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QCommandLinkButton_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_contextMenuEvent
func miqt_exec_callback_QCommandLinkButton_contextMenuEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QCommandLinkButton_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QCommandLinkButton_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_tabletEvent
func miqt_exec_callback_QCommandLinkButton_tabletEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QCommandLinkButton_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QCommandLinkButton_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_actionEvent
func miqt_exec_callback_QCommandLinkButton_actionEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QCommandLinkButton_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QCommandLinkButton_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_dragEnterEvent
func miqt_exec_callback_QCommandLinkButton_dragEnterEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QCommandLinkButton_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QCommandLinkButton_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_dragMoveEvent
func miqt_exec_callback_QCommandLinkButton_dragMoveEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QCommandLinkButton_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QCommandLinkButton_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_dragLeaveEvent
func miqt_exec_callback_QCommandLinkButton_dragLeaveEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QCommandLinkButton_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QCommandLinkButton_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_dropEvent
func miqt_exec_callback_QCommandLinkButton_dropEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QCommandLinkButton_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QCommandLinkButton_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_showEvent
func miqt_exec_callback_QCommandLinkButton_showEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QCommandLinkButton_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QCommandLinkButton_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_hideEvent
func miqt_exec_callback_QCommandLinkButton_hideEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QCommandLinkButton_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QCommandLinkButton) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QCommandLinkButton_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_nativeEvent
func miqt_exec_callback_QCommandLinkButton_nativeEvent(self *C.QCommandLinkButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QCommandLinkButton_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCommandLinkButton) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QCommandLinkButton_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_metric
func miqt_exec_callback_QCommandLinkButton_metric(self *C.QCommandLinkButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_InitPainter(painter *QPainter) {

	C.QCommandLinkButton_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QCommandLinkButton) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QCommandLinkButton_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_initPainter
func miqt_exec_callback_QCommandLinkButton_initPainter(self *C.QCommandLinkButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QCommandLinkButton_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QCommandLinkButton) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QCommandLinkButton_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_redirected
func miqt_exec_callback_QCommandLinkButton_redirected(self *C.QCommandLinkButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QCommandLinkButton_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QCommandLinkButton) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QCommandLinkButton_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_sharedPainter
func miqt_exec_callback_QCommandLinkButton_sharedPainter(self *C.QCommandLinkButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QCommandLinkButton_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QCommandLinkButton_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_inputMethodEvent
func miqt_exec_callback_QCommandLinkButton_inputMethodEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QCommandLinkButton_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommandLinkButton) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QCommandLinkButton_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_inputMethodQuery
func miqt_exec_callback_QCommandLinkButton_inputMethodQuery(self *C.QCommandLinkButton, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QCommandLinkButton_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QCommandLinkButton) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QCommandLinkButton_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_focusNextPrevChild
func miqt_exec_callback_QCommandLinkButton_focusNextPrevChild(self *C.QCommandLinkButton, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QCommandLinkButton_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QCommandLinkButton) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QCommandLinkButton_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_eventFilter
func miqt_exec_callback_QCommandLinkButton_eventFilter(self *C.QCommandLinkButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QCommandLinkButton_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QCommandLinkButton_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_childEvent
func miqt_exec_callback_QCommandLinkButton_childEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_CustomEvent(event *QEvent) {

	C.QCommandLinkButton_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommandLinkButton) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCommandLinkButton_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_customEvent
func miqt_exec_callback_QCommandLinkButton_customEvent(self *C.QCommandLinkButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QCommandLinkButton_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCommandLinkButton) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCommandLinkButton_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_connectNotify
func miqt_exec_callback_QCommandLinkButton_connectNotify(self *C.QCommandLinkButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QCommandLinkButton_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCommandLinkButton) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCommandLinkButton_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommandLinkButton_disconnectNotify
func miqt_exec_callback_QCommandLinkButton_disconnectNotify(self *C.QCommandLinkButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCommandLinkButton) Delete() {
	C.QCommandLinkButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCommandLinkButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QCommandLinkButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
