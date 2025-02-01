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
	return newQMetaObject(C.QPushButton_metaObject(this.h))
}

func (this *QPushButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPushButton_metacast(this.h, param1_Cstring))
}

func QPushButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPushButton) SizeHint() *QSize {
	_goptr := newQSize(C.QPushButton_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPushButton) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QPushButton_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPushButton) AutoDefault() bool {
	return (bool)(C.QPushButton_autoDefault(this.h))
}

func (this *QPushButton) SetAutoDefault(autoDefault bool) {
	C.QPushButton_setAutoDefault(this.h, (C.bool)(autoDefault))
}

func (this *QPushButton) IsDefault() bool {
	return (bool)(C.QPushButton_isDefault(this.h))
}

func (this *QPushButton) SetDefault(defaultVal bool) {
	C.QPushButton_setDefault(this.h, (C.bool)(defaultVal))
}

func (this *QPushButton) SetMenu(menu *QMenu) {
	C.QPushButton_setMenu(this.h, menu.cPointer())
}

func (this *QPushButton) Menu() *QMenu {
	return newQMenu(C.QPushButton_menu(this.h))
}

func (this *QPushButton) SetFlat(flat bool) {
	C.QPushButton_setFlat(this.h, (C.bool)(flat))
}

func (this *QPushButton) IsFlat() bool {
	return (bool)(C.QPushButton_isFlat(this.h))
}

func (this *QPushButton) ShowMenu() {
	C.QPushButton_showMenu(this.h)
}

func QPushButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPushButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPushButton_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPushButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QPushButton_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPushButton) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QPushButton_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_sizeHint
func miqt_exec_callback_QPushButton_sizeHint(self *C.QPushButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QPushButton_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPushButton) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QPushButton_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_minimumSizeHint
func miqt_exec_callback_QPushButton_minimumSizeHint(self *C.QPushButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QPushButton_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QPushButton) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QPushButton_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_event
func miqt_exec_callback_QPushButton_event(self *C.QPushButton, cb C.intptr_t, e *C.QEvent) C.bool {
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

	C.QPushButton_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnpaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QPushButton_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_paintEvent
func miqt_exec_callback_QPushButton_paintEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QPushButton_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QPushButton_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_keyPressEvent
func miqt_exec_callback_QPushButton_keyPressEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QPushButton_virtualbase_focusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnfocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QPushButton_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_focusInEvent
func miqt_exec_callback_QPushButton_focusInEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QPushButton_virtualbase_focusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnfocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QPushButton_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_focusOutEvent
func miqt_exec_callback_QPushButton_focusOutEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QPushButton_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OnmouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_mouseMoveEvent
func miqt_exec_callback_QPushButton_mouseMoveEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_InitStyleOption(option *QStyleOptionButton) {

	C.QPushButton_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QPushButton) OninitStyleOption(slot func(super func(option *QStyleOptionButton), option *QStyleOptionButton)) {
	ok := C.QPushButton_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_initStyleOption
func miqt_exec_callback_QPushButton_initStyleOption(self *C.QPushButton, cb C.intptr_t, option *C.QStyleOptionButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionButton), option *QStyleOptionButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionButton(option)

	gofunc((&QPushButton{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QPushButton) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QPushButton_virtualbase_hitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QPushButton) OnhitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	ok := C.QPushButton_override_virtual_hitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_hitButton
func miqt_exec_callback_QPushButton_hitButton(self *C.QPushButton, cb C.intptr_t, pos *C.QPoint) C.bool {
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

	C.QPushButton_virtualbase_checkStateSet(unsafe.Pointer(this.h))

}
func (this *QPushButton) OncheckStateSet(slot func(super func())) {
	ok := C.QPushButton_override_virtual_checkStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_checkStateSet
func miqt_exec_callback_QPushButton_checkStateSet(self *C.QPushButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPushButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QPushButton) callVirtualBase_NextCheckState() {

	C.QPushButton_virtualbase_nextCheckState(unsafe.Pointer(this.h))

}
func (this *QPushButton) OnnextCheckState(slot func(super func())) {
	ok := C.QPushButton_override_virtual_nextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_nextCheckState
func miqt_exec_callback_QPushButton_nextCheckState(self *C.QPushButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPushButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QPushButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QPushButton_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnkeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QPushButton_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_keyReleaseEvent
func miqt_exec_callback_QPushButton_keyReleaseEvent(self *C.QPushButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QPushButton_virtualbase_mousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnmousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_mousePressEvent
func miqt_exec_callback_QPushButton_mousePressEvent(self *C.QPushButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QPushButton_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnmouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_mouseReleaseEvent
func miqt_exec_callback_QPushButton_mouseReleaseEvent(self *C.QPushButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QPushButton_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OnchangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QPushButton_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_changeEvent
func miqt_exec_callback_QPushButton_changeEvent(self *C.QPushButton, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QPushButton_virtualbase_timerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPushButton) OntimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QPushButton_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_timerEvent
func miqt_exec_callback_QPushButton_timerEvent(self *C.QPushButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QPushButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DevType() int {

	return (int)(C.QPushButton_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPushButton) OndevType(slot func(super func() int) int) {
	ok := C.QPushButton_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_devType
func miqt_exec_callback_QPushButton_devType(self *C.QPushButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_SetVisible(visible bool) {

	C.QPushButton_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPushButton) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPushButton_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_setVisible
func miqt_exec_callback_QPushButton_setVisible(self *C.QPushButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPushButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPushButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPushButton_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPushButton) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPushButton_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_heightForWidth
func miqt_exec_callback_QPushButton_heightForWidth(self *C.QPushButton, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QPushButton_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPushButton) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPushButton_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_hasHeightForWidth
func miqt_exec_callback_QPushButton_hasHeightForWidth(self *C.QPushButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPushButton_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QPushButton) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QPushButton_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_paintEngine
func miqt_exec_callback_QPushButton_paintEngine(self *C.QPushButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QPushButton_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QPushButton_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_mouseDoubleClickEvent
func miqt_exec_callback_QPushButton_mouseDoubleClickEvent(self *C.QPushButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QPushButton_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QPushButton_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_wheelEvent
func miqt_exec_callback_QPushButton_wheelEvent(self *C.QPushButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QPushButton_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QPushButton_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_enterEvent
func miqt_exec_callback_QPushButton_enterEvent(self *C.QPushButton, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QPushButton_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPushButton_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_leaveEvent
func miqt_exec_callback_QPushButton_leaveEvent(self *C.QPushButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QPushButton_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QPushButton_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_moveEvent
func miqt_exec_callback_QPushButton_moveEvent(self *C.QPushButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QPushButton_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QPushButton_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_resizeEvent
func miqt_exec_callback_QPushButton_resizeEvent(self *C.QPushButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QPushButton_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QPushButton_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_closeEvent
func miqt_exec_callback_QPushButton_closeEvent(self *C.QPushButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QPushButton_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QPushButton_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_contextMenuEvent
func miqt_exec_callback_QPushButton_contextMenuEvent(self *C.QPushButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QPushButton_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QPushButton_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_tabletEvent
func miqt_exec_callback_QPushButton_tabletEvent(self *C.QPushButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QPushButton_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QPushButton_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_actionEvent
func miqt_exec_callback_QPushButton_actionEvent(self *C.QPushButton, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QPushButton_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QPushButton_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_dragEnterEvent
func miqt_exec_callback_QPushButton_dragEnterEvent(self *C.QPushButton, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QPushButton_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QPushButton_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_dragMoveEvent
func miqt_exec_callback_QPushButton_dragMoveEvent(self *C.QPushButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QPushButton_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QPushButton_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_dragLeaveEvent
func miqt_exec_callback_QPushButton_dragLeaveEvent(self *C.QPushButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QPushButton_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QPushButton_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_dropEvent
func miqt_exec_callback_QPushButton_dropEvent(self *C.QPushButton, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QPushButton_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QPushButton_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_showEvent
func miqt_exec_callback_QPushButton_showEvent(self *C.QPushButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QPushButton_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QPushButton_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_hideEvent
func miqt_exec_callback_QPushButton_hideEvent(self *C.QPushButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QPushButton_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QPushButton) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QPushButton_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_nativeEvent
func miqt_exec_callback_QPushButton_nativeEvent(self *C.QPushButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPushButton) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPushButton_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPushButton) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPushButton_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_metric
func miqt_exec_callback_QPushButton_metric(self *C.QPushButton, cb C.intptr_t, param1 C.int) C.int {
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

	C.QPushButton_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPushButton) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QPushButton_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_initPainter
func miqt_exec_callback_QPushButton_initPainter(self *C.QPushButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPushButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPushButton) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPushButton_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPushButton) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QPushButton_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_redirected
func miqt_exec_callback_QPushButton_redirected(self *C.QPushButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QPushButton_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPushButton) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QPushButton_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_sharedPainter
func miqt_exec_callback_QPushButton_sharedPainter(self *C.QPushButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPushButton{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QPushButton) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QPushButton_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPushButton) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QPushButton_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_inputMethodEvent
func miqt_exec_callback_QPushButton_inputMethodEvent(self *C.QPushButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QPushButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QPushButton_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPushButton) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QPushButton_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_inputMethodQuery
func miqt_exec_callback_QPushButton_inputMethodQuery(self *C.QPushButton, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QPushButton_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPushButton) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPushButton_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_focusNextPrevChild
func miqt_exec_callback_QPushButton_focusNextPrevChild(self *C.QPushButton, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QPushButton_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPushButton) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPushButton_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_eventFilter
func miqt_exec_callback_QPushButton_eventFilter(self *C.QPushButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QPushButton_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPushButton_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_childEvent
func miqt_exec_callback_QPushButton_childEvent(self *C.QPushButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPushButton_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPushButton) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPushButton_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_customEvent
func miqt_exec_callback_QPushButton_customEvent(self *C.QPushButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPushButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPushButton) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPushButton_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPushButton) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPushButton_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_connectNotify
func miqt_exec_callback_QPushButton_connectNotify(self *C.QPushButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPushButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPushButton) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPushButton_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPushButton) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPushButton_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPushButton_disconnectNotify
func miqt_exec_callback_QPushButton_disconnectNotify(self *C.QPushButton, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QPushButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPushButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QPushButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
