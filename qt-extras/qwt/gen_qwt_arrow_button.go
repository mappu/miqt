package qwt

/*

#include "gen_qwt_arrow_button.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtArrowButton struct {
	h *C.QwtArrowButton
	*qt.QPushButton
}

func (this *QwtArrowButton) cPointer() *C.QwtArrowButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtArrowButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtArrowButton constructs the type using only CGO pointers.
func newQwtArrowButton(h *C.QwtArrowButton) *QwtArrowButton {
	if h == nil {
		return nil
	}
	var outptr_QPushButton *C.QPushButton = nil
	C.QwtArrowButton_virtbase(h, &outptr_QPushButton)

	return &QwtArrowButton{h: h,
		QPushButton: qt.UnsafeNewQPushButton(unsafe.Pointer(outptr_QPushButton))}
}

// UnsafeNewQwtArrowButton constructs the type using only unsafe pointers.
func UnsafeNewQwtArrowButton(h unsafe.Pointer) *QwtArrowButton {
	return newQwtArrowButton((*C.QwtArrowButton)(h))
}

// NewQwtArrowButton constructs a new QwtArrowButton object.
func NewQwtArrowButton(num int, param2 qt.ArrowType) *QwtArrowButton {

	return newQwtArrowButton(C.QwtArrowButton_new((C.int)(num), (C.int)(param2)))
}

// NewQwtArrowButton2 constructs a new QwtArrowButton object.
func NewQwtArrowButton2(num int, param2 qt.ArrowType, parent *qt.QWidget) *QwtArrowButton {

	return newQwtArrowButton(C.QwtArrowButton_new2((C.int)(num), (C.int)(param2), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QwtArrowButton) ArrowType() qt.ArrowType {
	return (qt.ArrowType)(C.QwtArrowButton_arrowType(this.h))
}

func (this *QwtArrowButton) Num() int {
	return (int)(C.QwtArrowButton_num(this.h))
}

func (this *QwtArrowButton) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtArrowButton_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtArrowButton) MinimumSizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtArrowButton_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// InitStyleOption can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) InitStyleOption(option *qt.QStyleOptionButton) {

	var _dynamic_cast_ok C.bool = false
	C.QwtArrowButton_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QStyleOptionButton)(option.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtArrowButton_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtArrowButton_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtArrowButton_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtArrowButton_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtArrowButton_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtArrowButton_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtArrowButton_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtArrowButton_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtArrowButton that was directly constructed.
func (this *QwtArrowButton) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtArrowButton_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtArrowButton) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtArrowButton_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtArrowButton) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtArrowButton_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_sizeHint
func miqt_exec_callback_QwtArrowButton_sizeHint(self *C.QwtArrowButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtArrowButton) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtArrowButton_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtArrowButton) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtArrowButton_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_minimumSizeHint
func miqt_exec_callback_QwtArrowButton_minimumSizeHint(self *C.QwtArrowButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtArrowButton) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QwtArrowButton_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QwtArrowButton_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_paintEvent
func miqt_exec_callback_QwtArrowButton_paintEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_DrawButtonLabel(param1 *qt.QPainter) {

	C.QwtArrowButton_virtualbase_drawButtonLabel(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtArrowButton) OnDrawButtonLabel(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtArrowButton_override_virtual_drawButtonLabel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_drawButtonLabel
func miqt_exec_callback_QwtArrowButton_drawButtonLabel(self *C.QwtArrowButton, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_DrawButtonLabel, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_DrawArrow(param1 *qt.QPainter, param2 *qt.QRect, param3 qt.ArrowType) {

	C.QwtArrowButton_virtualbase_drawArrow(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRect)(param2.UnsafePointer()), (C.int)(param3))

}
func (this *QwtArrowButton) OnDrawArrow(slot func(super func(param1 *qt.QPainter, param2 *qt.QRect, param3 qt.ArrowType), param1 *qt.QPainter, param2 *qt.QRect, param3 qt.ArrowType)) {
	ok := C.QwtArrowButton_override_virtual_drawArrow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_drawArrow
func miqt_exec_callback_QwtArrowButton_drawArrow(self *C.QwtArrowButton, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRect, param3 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRect, param3 qt.ArrowType), param1 *qt.QPainter, param2 *qt.QRect, param3 qt.ArrowType))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRect(unsafe.Pointer(param2))

	slotval3 := (qt.ArrowType)(param3)

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_DrawArrow, slotval1, slotval2, slotval3)

}

func (this *QwtArrowButton) callVirtualBase_LabelRect() *qt.QRect {

	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtArrowButton_virtualbase_labelRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtArrowButton) OnLabelRect(slot func(super func() *qt.QRect) *qt.QRect) {
	ok := C.QwtArrowButton_override_virtual_labelRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_labelRect
func miqt_exec_callback_QwtArrowButton_labelRect(self *C.QwtArrowButton, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRect) *qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_LabelRect)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}

func (this *QwtArrowButton) callVirtualBase_ArrowSize(param1 qt.ArrowType, boundingSize *qt.QSize) *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtArrowButton_virtualbase_arrowSize(unsafe.Pointer(this.h), (C.int)(param1), (*C.QSize)(boundingSize.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtArrowButton) OnArrowSize(slot func(super func(param1 qt.ArrowType, boundingSize *qt.QSize) *qt.QSize, param1 qt.ArrowType, boundingSize *qt.QSize) *qt.QSize) {
	ok := C.QwtArrowButton_override_virtual_arrowSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_arrowSize
func miqt_exec_callback_QwtArrowButton_arrowSize(self *C.QwtArrowButton, cb C.intptr_t, param1 C.int, boundingSize *C.QSize) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.ArrowType, boundingSize *qt.QSize) *qt.QSize, param1 qt.ArrowType, boundingSize *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.ArrowType)(param1)

	slotval2 := qt.UnsafeNewQSize(unsafe.Pointer(boundingSize))

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_ArrowSize, slotval1, slotval2)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtArrowButton) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtArrowButton_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtArrowButton) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtArrowButton_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_keyPressEvent
func miqt_exec_callback_QwtArrowButton_keyPressEvent(self *C.QwtArrowButton, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_Event(e *qt.QEvent) bool {

	return (bool)(C.QwtArrowButton_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QwtArrowButton) OnEvent(slot func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool) {
	ok := C.QwtArrowButton_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_event
func miqt_exec_callback_QwtArrowButton_event(self *C.QwtArrowButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_FocusInEvent(param1 *qt.QFocusEvent) {

	C.QwtArrowButton_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QwtArrowButton) OnFocusInEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	ok := C.QwtArrowButton_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_focusInEvent
func miqt_exec_callback_QwtArrowButton_focusInEvent(self *C.QwtArrowButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_FocusOutEvent(param1 *qt.QFocusEvent) {

	C.QwtArrowButton_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QwtArrowButton) OnFocusOutEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	ok := C.QwtArrowButton_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_focusOutEvent
func miqt_exec_callback_QwtArrowButton_focusOutEvent(self *C.QwtArrowButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_HitButton(pos *qt.QPoint) bool {

	return (bool)(C.QwtArrowButton_virtualbase_hitButton(unsafe.Pointer(this.h), (*C.QPoint)(pos.UnsafePointer())))

}
func (this *QwtArrowButton) OnHitButton(slot func(super func(pos *qt.QPoint) bool, pos *qt.QPoint) bool) {
	ok := C.QwtArrowButton_override_virtual_hitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_hitButton
func miqt_exec_callback_QwtArrowButton_hitButton(self *C.QwtArrowButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *qt.QPoint) bool, pos *qt.QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_CheckStateSet() {

	C.QwtArrowButton_virtualbase_checkStateSet(unsafe.Pointer(this.h))

}
func (this *QwtArrowButton) OnCheckStateSet(slot func(super func())) {
	ok := C.QwtArrowButton_override_virtual_checkStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_checkStateSet
func miqt_exec_callback_QwtArrowButton_checkStateSet(self *C.QwtArrowButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QwtArrowButton) callVirtualBase_NextCheckState() {

	C.QwtArrowButton_virtualbase_nextCheckState(unsafe.Pointer(this.h))

}
func (this *QwtArrowButton) OnNextCheckState(slot func(super func())) {
	ok := C.QwtArrowButton_override_virtual_nextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_nextCheckState
func miqt_exec_callback_QwtArrowButton_nextCheckState(self *C.QwtArrowButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QwtArrowButton) callVirtualBase_KeyReleaseEvent(e *qt.QKeyEvent) {

	C.QwtArrowButton_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(e.UnsafePointer()))

}
func (this *QwtArrowButton) OnKeyReleaseEvent(slot func(super func(e *qt.QKeyEvent), e *qt.QKeyEvent)) {
	ok := C.QwtArrowButton_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_keyReleaseEvent
func miqt_exec_callback_QwtArrowButton_keyReleaseEvent(self *C.QwtArrowButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QKeyEvent), e *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(e))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_MousePressEvent(e *qt.QMouseEvent) {

	C.QwtArrowButton_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QwtArrowButton) OnMousePressEvent(slot func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent)) {
	ok := C.QwtArrowButton_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_mousePressEvent
func miqt_exec_callback_QwtArrowButton_mousePressEvent(self *C.QwtArrowButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_MouseReleaseEvent(e *qt.QMouseEvent) {

	C.QwtArrowButton_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QwtArrowButton) OnMouseReleaseEvent(slot func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent)) {
	ok := C.QwtArrowButton_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_mouseReleaseEvent
func miqt_exec_callback_QwtArrowButton_mouseReleaseEvent(self *C.QwtArrowButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_MouseMoveEvent(e *qt.QMouseEvent) {

	C.QwtArrowButton_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QwtArrowButton) OnMouseMoveEvent(slot func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent)) {
	ok := C.QwtArrowButton_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_mouseMoveEvent
func miqt_exec_callback_QwtArrowButton_mouseMoveEvent(self *C.QwtArrowButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_ChangeEvent(e *qt.QEvent) {

	C.QwtArrowButton_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer()))

}
func (this *QwtArrowButton) OnChangeEvent(slot func(super func(e *qt.QEvent), e *qt.QEvent)) {
	ok := C.QwtArrowButton_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_changeEvent
func miqt_exec_callback_QwtArrowButton_changeEvent(self *C.QwtArrowButton, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QEvent), e *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_TimerEvent(e *qt.QTimerEvent) {

	C.QwtArrowButton_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(e.UnsafePointer()))

}
func (this *QwtArrowButton) OnTimerEvent(slot func(super func(e *qt.QTimerEvent), e *qt.QTimerEvent)) {
	ok := C.QwtArrowButton_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_timerEvent
func miqt_exec_callback_QwtArrowButton_timerEvent(self *C.QwtArrowButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QTimerEvent), e *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(e))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_DevType() int {

	return (int)(C.QwtArrowButton_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtArrowButton) OnDevType(slot func(super func() int) int) {
	ok := C.QwtArrowButton_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_devType
func miqt_exec_callback_QwtArrowButton_devType(self *C.QwtArrowButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_SetVisible(visible bool) {

	C.QwtArrowButton_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtArrowButton) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtArrowButton_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_setVisible
func miqt_exec_callback_QwtArrowButton_setVisible(self *C.QwtArrowButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtArrowButton_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtArrowButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtArrowButton_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_heightForWidth
func miqt_exec_callback_QwtArrowButton_heightForWidth(self *C.QwtArrowButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtArrowButton_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtArrowButton) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtArrowButton_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_hasHeightForWidth
func miqt_exec_callback_QwtArrowButton_hasHeightForWidth(self *C.QwtArrowButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtArrowButton_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtArrowButton) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtArrowButton_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_paintEngine
func miqt_exec_callback_QwtArrowButton_paintEngine(self *C.QwtArrowButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtArrowButton) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtArrowButton_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtArrowButton_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_mouseDoubleClickEvent
func miqt_exec_callback_QwtArrowButton_mouseDoubleClickEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtArrowButton_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtArrowButton_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_wheelEvent
func miqt_exec_callback_QwtArrowButton_wheelEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtArrowButton_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtArrowButton_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_enterEvent
func miqt_exec_callback_QwtArrowButton_enterEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtArrowButton_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtArrowButton_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_leaveEvent
func miqt_exec_callback_QwtArrowButton_leaveEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtArrowButton_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtArrowButton_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_moveEvent
func miqt_exec_callback_QwtArrowButton_moveEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtArrowButton_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtArrowButton_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_resizeEvent
func miqt_exec_callback_QwtArrowButton_resizeEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtArrowButton_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtArrowButton_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_closeEvent
func miqt_exec_callback_QwtArrowButton_closeEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtArrowButton_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtArrowButton_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_contextMenuEvent
func miqt_exec_callback_QwtArrowButton_contextMenuEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtArrowButton_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtArrowButton_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_tabletEvent
func miqt_exec_callback_QwtArrowButton_tabletEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtArrowButton_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtArrowButton_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_actionEvent
func miqt_exec_callback_QwtArrowButton_actionEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtArrowButton_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtArrowButton_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_dragEnterEvent
func miqt_exec_callback_QwtArrowButton_dragEnterEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtArrowButton_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtArrowButton_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_dragMoveEvent
func miqt_exec_callback_QwtArrowButton_dragMoveEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtArrowButton_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtArrowButton_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_dragLeaveEvent
func miqt_exec_callback_QwtArrowButton_dragLeaveEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtArrowButton_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtArrowButton_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_dropEvent
func miqt_exec_callback_QwtArrowButton_dropEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtArrowButton_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtArrowButton_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_showEvent
func miqt_exec_callback_QwtArrowButton_showEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtArrowButton_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtArrowButton_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_hideEvent
func miqt_exec_callback_QwtArrowButton_hideEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtArrowButton_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtArrowButton) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtArrowButton_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_nativeEvent
func miqt_exec_callback_QwtArrowButton_nativeEvent(self *C.QwtArrowButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtArrowButton_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtArrowButton) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtArrowButton_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_metric
func miqt_exec_callback_QwtArrowButton_metric(self *C.QwtArrowButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtArrowButton_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtArrowButton) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtArrowButton_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_initPainter
func miqt_exec_callback_QwtArrowButton_initPainter(self *C.QwtArrowButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtArrowButton_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtArrowButton) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtArrowButton_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_redirected
func miqt_exec_callback_QwtArrowButton_redirected(self *C.QwtArrowButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtArrowButton) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtArrowButton_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtArrowButton) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtArrowButton_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_sharedPainter
func miqt_exec_callback_QwtArrowButton_sharedPainter(self *C.QwtArrowButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtArrowButton) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtArrowButton_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtArrowButton) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtArrowButton_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_inputMethodEvent
func miqt_exec_callback_QwtArrowButton_inputMethodEvent(self *C.QwtArrowButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtArrowButton_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtArrowButton) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtArrowButton_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_inputMethodQuery
func miqt_exec_callback_QwtArrowButton_inputMethodQuery(self *C.QwtArrowButton, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtArrowButton) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtArrowButton_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtArrowButton) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtArrowButton_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_focusNextPrevChild
func miqt_exec_callback_QwtArrowButton_focusNextPrevChild(self *C.QwtArrowButton, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtArrowButton_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtArrowButton) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtArrowButton_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_eventFilter
func miqt_exec_callback_QwtArrowButton_eventFilter(self *C.QwtArrowButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtArrowButton{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtArrowButton) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtArrowButton_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtArrowButton_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_childEvent
func miqt_exec_callback_QwtArrowButton_childEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtArrowButton_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtArrowButton) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtArrowButton_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_customEvent
func miqt_exec_callback_QwtArrowButton_customEvent(self *C.QwtArrowButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtArrowButton_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtArrowButton) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtArrowButton_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_connectNotify
func miqt_exec_callback_QwtArrowButton_connectNotify(self *C.QwtArrowButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtArrowButton) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtArrowButton_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtArrowButton) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtArrowButton_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtArrowButton_disconnectNotify
func miqt_exec_callback_QwtArrowButton_disconnectNotify(self *C.QwtArrowButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtArrowButton{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtArrowButton) Delete() {
	C.QwtArrowButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtArrowButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtArrowButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
