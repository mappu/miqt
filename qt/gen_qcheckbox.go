package qt

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
	return newQMetaObject(C.QCheckBox_metaObject(this.h))
}

func (this *QCheckBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCheckBox_metacast(this.h, param1_Cstring))
}

func QCheckBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCheckBox_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCheckBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCheckBox_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCheckBox) SizeHint() *QSize {
	_goptr := newQSize(C.QCheckBox_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCheckBox) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QCheckBox_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCheckBox) SetTristate() {
	C.QCheckBox_setTristate(this.h)
}

func (this *QCheckBox) IsTristate() bool {
	return (bool)(C.QCheckBox_isTristate(this.h))
}

func (this *QCheckBox) CheckState() CheckState {
	return (CheckState)(C.QCheckBox_checkState(this.h))
}

func (this *QCheckBox) SetCheckState(state CheckState) {
	C.QCheckBox_setCheckState(this.h, (C.int)(state))
}

func (this *QCheckBox) StateChanged(param1 int) {
	C.QCheckBox_stateChanged(this.h, (C.int)(param1))
}
func (this *QCheckBox) OnStateChanged(slot func(param1 int)) {
	C.QCheckBox_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCheckBox_stateChanged
func miqt_exec_callback_QCheckBox_stateChanged(cb C.intptr_t, param1 C.int) {
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
	var _ms C.struct_miqt_string = C.QCheckBox_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCheckBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCheckBox_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCheckBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCheckBox_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCheckBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCheckBox_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCheckBox) SetTristate1(y bool) {
	C.QCheckBox_setTristate1(this.h, (C.bool)(y))
}

// InitStyleOption can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) InitStyleOption(option *QStyleOptionButton) {

	var _dynamic_cast_ok C.bool = false
	C.QCheckBox_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QCheckBox_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QCheckBox_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QCheckBox_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCheckBox_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCheckBox_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QCheckBox_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCheckBox_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCheckBox_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCheckBox that was directly constructed.
func (this *QCheckBox) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCheckBox_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QCheckBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QCheckBox_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCheckBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCheckBox_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_sizeHint
func miqt_exec_callback_QCheckBox_sizeHint(self *C.QCheckBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QCheckBox_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCheckBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QCheckBox_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_minimumSizeHint
func miqt_exec_callback_QCheckBox_minimumSizeHint(self *C.QCheckBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QCheckBox_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QCheckBox) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QCheckBox_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_event
func miqt_exec_callback_QCheckBox_event(self *C.QCheckBox, cb C.intptr_t, e *C.QEvent) C.bool {
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

	return (bool)(C.QCheckBox_virtualbase_hitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QCheckBox) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	ok := C.QCheckBox_override_virtual_hitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_hitButton
func miqt_exec_callback_QCheckBox_hitButton(self *C.QCheckBox, cb C.intptr_t, pos *C.QPoint) C.bool {
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

	C.QCheckBox_virtualbase_checkStateSet(unsafe.Pointer(this.h))

}
func (this *QCheckBox) OnCheckStateSet(slot func(super func())) {
	ok := C.QCheckBox_override_virtual_checkStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_checkStateSet
func miqt_exec_callback_QCheckBox_checkStateSet(self *C.QCheckBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QCheckBox{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QCheckBox) callVirtualBase_NextCheckState() {

	C.QCheckBox_virtualbase_nextCheckState(unsafe.Pointer(this.h))

}
func (this *QCheckBox) OnNextCheckState(slot func(super func())) {
	ok := C.QCheckBox_override_virtual_nextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_nextCheckState
func miqt_exec_callback_QCheckBox_nextCheckState(self *C.QCheckBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QCheckBox{h: self}).callVirtualBase_NextCheckState)

}

func (this *QCheckBox) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QCheckBox_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCheckBox) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QCheckBox_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_paintEvent
func miqt_exec_callback_QCheckBox_paintEvent(self *C.QCheckBox, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QCheckBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QCheckBox_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCheckBox) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QCheckBox_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_mouseMoveEvent
func miqt_exec_callback_QCheckBox_mouseMoveEvent(self *C.QCheckBox, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QCheckBox_virtualbase_keyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QCheckBox_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_keyPressEvent
func miqt_exec_callback_QCheckBox_keyPressEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QCheckBox_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QCheckBox_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_keyReleaseEvent
func miqt_exec_callback_QCheckBox_keyReleaseEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QCheckBox_virtualbase_mousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QCheckBox_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_mousePressEvent
func miqt_exec_callback_QCheckBox_mousePressEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QCheckBox_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QCheckBox_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_mouseReleaseEvent
func miqt_exec_callback_QCheckBox_mouseReleaseEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QCheckBox_virtualbase_focusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QCheckBox_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_focusInEvent
func miqt_exec_callback_QCheckBox_focusInEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QCheckBox_virtualbase_focusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QCheckBox_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_focusOutEvent
func miqt_exec_callback_QCheckBox_focusOutEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QCheckBox_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QCheckBox_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_changeEvent
func miqt_exec_callback_QCheckBox_changeEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QCheckBox_virtualbase_timerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QCheckBox) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QCheckBox_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_timerEvent
func miqt_exec_callback_QCheckBox_timerEvent(self *C.QCheckBox, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QCheckBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DevType() int {

	return (int)(C.QCheckBox_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QCheckBox) OnDevType(slot func(super func() int) int) {
	ok := C.QCheckBox_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_devType
func miqt_exec_callback_QCheckBox_devType(self *C.QCheckBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_SetVisible(visible bool) {

	C.QCheckBox_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QCheckBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QCheckBox_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_setVisible
func miqt_exec_callback_QCheckBox_setVisible(self *C.QCheckBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QCheckBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QCheckBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QCheckBox_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCheckBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QCheckBox_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_heightForWidth
func miqt_exec_callback_QCheckBox_heightForWidth(self *C.QCheckBox, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QCheckBox_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QCheckBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QCheckBox_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_hasHeightForWidth
func miqt_exec_callback_QCheckBox_hasHeightForWidth(self *C.QCheckBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QCheckBox_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QCheckBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QCheckBox_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_paintEngine
func miqt_exec_callback_QCheckBox_paintEngine(self *C.QCheckBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QCheckBox_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QCheckBox_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_mouseDoubleClickEvent
func miqt_exec_callback_QCheckBox_mouseDoubleClickEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QCheckBox_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QCheckBox_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_wheelEvent
func miqt_exec_callback_QCheckBox_wheelEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_EnterEvent(event *QEvent) {

	C.QCheckBox_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCheckBox_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_enterEvent
func miqt_exec_callback_QCheckBox_enterEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QCheckBox_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCheckBox_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_leaveEvent
func miqt_exec_callback_QCheckBox_leaveEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QCheckBox_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QCheckBox_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_moveEvent
func miqt_exec_callback_QCheckBox_moveEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QCheckBox_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QCheckBox_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_resizeEvent
func miqt_exec_callback_QCheckBox_resizeEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QCheckBox_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QCheckBox_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_closeEvent
func miqt_exec_callback_QCheckBox_closeEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QCheckBox_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QCheckBox_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_contextMenuEvent
func miqt_exec_callback_QCheckBox_contextMenuEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QCheckBox_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QCheckBox_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_tabletEvent
func miqt_exec_callback_QCheckBox_tabletEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QCheckBox_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QCheckBox_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_actionEvent
func miqt_exec_callback_QCheckBox_actionEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QCheckBox_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QCheckBox_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_dragEnterEvent
func miqt_exec_callback_QCheckBox_dragEnterEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QCheckBox_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QCheckBox_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_dragMoveEvent
func miqt_exec_callback_QCheckBox_dragMoveEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QCheckBox_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QCheckBox_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_dragLeaveEvent
func miqt_exec_callback_QCheckBox_dragLeaveEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QCheckBox_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QCheckBox_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_dropEvent
func miqt_exec_callback_QCheckBox_dropEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QCheckBox_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QCheckBox_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_showEvent
func miqt_exec_callback_QCheckBox_showEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QCheckBox_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QCheckBox_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_hideEvent
func miqt_exec_callback_QCheckBox_hideEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QCheckBox_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QCheckBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QCheckBox_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_nativeEvent
func miqt_exec_callback_QCheckBox_nativeEvent(self *C.QCheckBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QCheckBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QCheckBox_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCheckBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QCheckBox_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_metric
func miqt_exec_callback_QCheckBox_metric(self *C.QCheckBox, cb C.intptr_t, param1 C.int) C.int {
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

	C.QCheckBox_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QCheckBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QCheckBox_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_initPainter
func miqt_exec_callback_QCheckBox_initPainter(self *C.QCheckBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QCheckBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QCheckBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QCheckBox_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QCheckBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QCheckBox_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_redirected
func miqt_exec_callback_QCheckBox_redirected(self *C.QCheckBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QCheckBox_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QCheckBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QCheckBox_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_sharedPainter
func miqt_exec_callback_QCheckBox_sharedPainter(self *C.QCheckBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCheckBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QCheckBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QCheckBox_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCheckBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QCheckBox_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_inputMethodEvent
func miqt_exec_callback_QCheckBox_inputMethodEvent(self *C.QCheckBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QCheckBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QCheckBox_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCheckBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QCheckBox_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_inputMethodQuery
func miqt_exec_callback_QCheckBox_inputMethodQuery(self *C.QCheckBox, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QCheckBox_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QCheckBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QCheckBox_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_focusNextPrevChild
func miqt_exec_callback_QCheckBox_focusNextPrevChild(self *C.QCheckBox, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QCheckBox_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QCheckBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QCheckBox_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_eventFilter
func miqt_exec_callback_QCheckBox_eventFilter(self *C.QCheckBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QCheckBox_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QCheckBox_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_childEvent
func miqt_exec_callback_QCheckBox_childEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QCheckBox_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCheckBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCheckBox_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_customEvent
func miqt_exec_callback_QCheckBox_customEvent(self *C.QCheckBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCheckBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCheckBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QCheckBox_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCheckBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCheckBox_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_connectNotify
func miqt_exec_callback_QCheckBox_connectNotify(self *C.QCheckBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCheckBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCheckBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QCheckBox_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCheckBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCheckBox_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCheckBox_disconnectNotify
func miqt_exec_callback_QCheckBox_disconnectNotify(self *C.QCheckBox, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QCheckBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCheckBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QCheckBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
