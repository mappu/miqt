package qt

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
	return newQMetaObject(C.QRadioButton_metaObject(this.h))
}

func (this *QRadioButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRadioButton_metacast(this.h, param1_Cstring))
}

func QRadioButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioButton) SizeHint() *QSize {
	_goptr := newQSize(C.QRadioButton_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRadioButton) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QRadioButton_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QRadioButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioButton_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QRadioButton_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRadioButton) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QRadioButton_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_sizeHint
func miqt_exec_callback_QRadioButton_sizeHint(self *C.QRadioButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QRadioButton_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRadioButton) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QRadioButton_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_minimumSizeHint
func miqt_exec_callback_QRadioButton_minimumSizeHint(self *C.QRadioButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QRadioButton_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QRadioButton) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QRadioButton_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_event
func miqt_exec_callback_QRadioButton_event(self *C.QRadioButton, cb C.intptr_t, e *C.QEvent) C.bool {
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

	return (bool)(C.QRadioButton_virtualbase_hitButton(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QRadioButton) OnhitButton(slot func(super func(param1 *QPoint) bool, param1 *QPoint) bool) {
	ok := C.QRadioButton_override_virtual_hitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_hitButton
func miqt_exec_callback_QRadioButton_hitButton(self *C.QRadioButton, cb C.intptr_t, param1 *C.QPoint) C.bool {
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

	C.QRadioButton_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRadioButton) OnpaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QRadioButton_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_paintEvent
func miqt_exec_callback_QRadioButton_paintEvent(self *C.QRadioButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QRadioButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QRadioButton_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRadioButton) OnmouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRadioButton_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_mouseMoveEvent
func miqt_exec_callback_QRadioButton_mouseMoveEvent(self *C.QRadioButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_CheckStateSet() {

	C.QRadioButton_virtualbase_checkStateSet(unsafe.Pointer(this.h))

}
func (this *QRadioButton) OncheckStateSet(slot func(super func())) {
	ok := C.QRadioButton_override_virtual_checkStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_checkStateSet
func miqt_exec_callback_QRadioButton_checkStateSet(self *C.QRadioButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QRadioButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QRadioButton) callVirtualBase_NextCheckState() {

	C.QRadioButton_virtualbase_nextCheckState(unsafe.Pointer(this.h))

}
func (this *QRadioButton) OnnextCheckState(slot func(super func())) {
	ok := C.QRadioButton_override_virtual_nextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_nextCheckState
func miqt_exec_callback_QRadioButton_nextCheckState(self *C.QRadioButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QRadioButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QRadioButton) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QRadioButton_virtualbase_keyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnkeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QRadioButton_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_keyPressEvent
func miqt_exec_callback_QRadioButton_keyPressEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QRadioButton_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnkeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QRadioButton_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_keyReleaseEvent
func miqt_exec_callback_QRadioButton_keyReleaseEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QRadioButton_virtualbase_mousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnmousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QRadioButton_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_mousePressEvent
func miqt_exec_callback_QRadioButton_mousePressEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QRadioButton_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnmouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QRadioButton_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_mouseReleaseEvent
func miqt_exec_callback_QRadioButton_mouseReleaseEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QRadioButton_virtualbase_focusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnfocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QRadioButton_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_focusInEvent
func miqt_exec_callback_QRadioButton_focusInEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QRadioButton_virtualbase_focusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnfocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QRadioButton_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_focusOutEvent
func miqt_exec_callback_QRadioButton_focusOutEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QRadioButton_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OnchangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QRadioButton_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_changeEvent
func miqt_exec_callback_QRadioButton_changeEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QRadioButton_virtualbase_timerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QRadioButton) OntimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QRadioButton_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_timerEvent
func miqt_exec_callback_QRadioButton_timerEvent(self *C.QRadioButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QRadioButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DevType() int {

	return (int)(C.QRadioButton_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QRadioButton) OndevType(slot func(super func() int) int) {
	ok := C.QRadioButton_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_devType
func miqt_exec_callback_QRadioButton_devType(self *C.QRadioButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_SetVisible(visible bool) {

	C.QRadioButton_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QRadioButton) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QRadioButton_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_setVisible
func miqt_exec_callback_QRadioButton_setVisible(self *C.QRadioButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QRadioButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QRadioButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QRadioButton_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QRadioButton) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QRadioButton_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_heightForWidth
func miqt_exec_callback_QRadioButton_heightForWidth(self *C.QRadioButton, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QRadioButton_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QRadioButton) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QRadioButton_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_hasHeightForWidth
func miqt_exec_callback_QRadioButton_hasHeightForWidth(self *C.QRadioButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QRadioButton_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QRadioButton) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QRadioButton_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_paintEngine
func miqt_exec_callback_QRadioButton_paintEngine(self *C.QRadioButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QRadioButton_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRadioButton_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_mouseDoubleClickEvent
func miqt_exec_callback_QRadioButton_mouseDoubleClickEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QRadioButton_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QRadioButton_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_wheelEvent
func miqt_exec_callback_QRadioButton_wheelEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_EnterEvent(event *QEvent) {

	C.QRadioButton_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRadioButton_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_enterEvent
func miqt_exec_callback_QRadioButton_enterEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QRadioButton_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRadioButton_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_leaveEvent
func miqt_exec_callback_QRadioButton_leaveEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QRadioButton_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QRadioButton_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_moveEvent
func miqt_exec_callback_QRadioButton_moveEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QRadioButton_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QRadioButton_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_resizeEvent
func miqt_exec_callback_QRadioButton_resizeEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QRadioButton_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QRadioButton_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_closeEvent
func miqt_exec_callback_QRadioButton_closeEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QRadioButton_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QRadioButton_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_contextMenuEvent
func miqt_exec_callback_QRadioButton_contextMenuEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QRadioButton_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QRadioButton_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_tabletEvent
func miqt_exec_callback_QRadioButton_tabletEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QRadioButton_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QRadioButton_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_actionEvent
func miqt_exec_callback_QRadioButton_actionEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QRadioButton_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QRadioButton_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_dragEnterEvent
func miqt_exec_callback_QRadioButton_dragEnterEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QRadioButton_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QRadioButton_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_dragMoveEvent
func miqt_exec_callback_QRadioButton_dragMoveEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QRadioButton_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QRadioButton_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_dragLeaveEvent
func miqt_exec_callback_QRadioButton_dragLeaveEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QRadioButton_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QRadioButton_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_dropEvent
func miqt_exec_callback_QRadioButton_dropEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QRadioButton_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QRadioButton_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_showEvent
func miqt_exec_callback_QRadioButton_showEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QRadioButton_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QRadioButton_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_hideEvent
func miqt_exec_callback_QRadioButton_hideEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QRadioButton_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QRadioButton) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QRadioButton_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_nativeEvent
func miqt_exec_callback_QRadioButton_nativeEvent(self *C.QRadioButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QRadioButton) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QRadioButton_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QRadioButton) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QRadioButton_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_metric
func miqt_exec_callback_QRadioButton_metric(self *C.QRadioButton, cb C.intptr_t, param1 C.int) C.int {
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

	C.QRadioButton_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QRadioButton) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QRadioButton_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_initPainter
func miqt_exec_callback_QRadioButton_initPainter(self *C.QRadioButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QRadioButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QRadioButton) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QRadioButton_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QRadioButton) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QRadioButton_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_redirected
func miqt_exec_callback_QRadioButton_redirected(self *C.QRadioButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QRadioButton_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QRadioButton) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QRadioButton_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_sharedPainter
func miqt_exec_callback_QRadioButton_sharedPainter(self *C.QRadioButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioButton{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QRadioButton) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QRadioButton_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRadioButton) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QRadioButton_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_inputMethodEvent
func miqt_exec_callback_QRadioButton_inputMethodEvent(self *C.QRadioButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QRadioButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QRadioButton_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRadioButton) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QRadioButton_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_inputMethodQuery
func miqt_exec_callback_QRadioButton_inputMethodQuery(self *C.QRadioButton, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QRadioButton_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QRadioButton) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QRadioButton_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_focusNextPrevChild
func miqt_exec_callback_QRadioButton_focusNextPrevChild(self *C.QRadioButton, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QRadioButton_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QRadioButton) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QRadioButton_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_eventFilter
func miqt_exec_callback_QRadioButton_eventFilter(self *C.QRadioButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QRadioButton_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QRadioButton_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_childEvent
func miqt_exec_callback_QRadioButton_childEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_CustomEvent(event *QEvent) {

	C.QRadioButton_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRadioButton) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRadioButton_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_customEvent
func miqt_exec_callback_QRadioButton_customEvent(self *C.QRadioButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRadioButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRadioButton) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QRadioButton_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRadioButton) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRadioButton_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_connectNotify
func miqt_exec_callback_QRadioButton_connectNotify(self *C.QRadioButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRadioButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRadioButton) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QRadioButton_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRadioButton) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRadioButton_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioButton_disconnectNotify
func miqt_exec_callback_QRadioButton_disconnectNotify(self *C.QRadioButton, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QRadioButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
