package qt6

/*

#include "gen_qabstractbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractButton struct {
	h *C.QAbstractButton
	*QWidget
}

func (this *QAbstractButton) cPointer() *C.QAbstractButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractButton constructs the type using only CGO pointers.
func newQAbstractButton(h *C.QAbstractButton) *QAbstractButton {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QAbstractButton_virtbase(h, &outptr_QWidget)

	return &QAbstractButton{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQAbstractButton constructs the type using only unsafe pointers.
func UnsafeNewQAbstractButton(h unsafe.Pointer) *QAbstractButton {
	return newQAbstractButton((*C.QAbstractButton)(h))
}

// NewQAbstractButton constructs a new QAbstractButton object.
func NewQAbstractButton(parent *QWidget) *QAbstractButton {

	return newQAbstractButton(C.QAbstractButton_new(parent.cPointer()))
}

// NewQAbstractButton2 constructs a new QAbstractButton object.
func NewQAbstractButton2() *QAbstractButton {

	return newQAbstractButton(C.QAbstractButton_new2())
}

func (this *QAbstractButton) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractButton_metaObject(this.h))
}

func (this *QAbstractButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractButton_metacast(this.h, param1_Cstring))
}

func QAbstractButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractButton_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractButton) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QAbstractButton_setText(this.h, text_ms)
}

func (this *QAbstractButton) Text() string {
	var _ms C.struct_miqt_string = C.QAbstractButton_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractButton) SetIcon(icon *QIcon) {
	C.QAbstractButton_setIcon(this.h, icon.cPointer())
}

func (this *QAbstractButton) Icon() *QIcon {
	_goptr := newQIcon(C.QAbstractButton_icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractButton) IconSize() *QSize {
	_goptr := newQSize(C.QAbstractButton_iconSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractButton) SetShortcut(key *QKeySequence) {
	C.QAbstractButton_setShortcut(this.h, key.cPointer())
}

func (this *QAbstractButton) Shortcut() *QKeySequence {
	_goptr := newQKeySequence(C.QAbstractButton_shortcut(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractButton) SetCheckable(checkable bool) {
	C.QAbstractButton_setCheckable(this.h, (C.bool)(checkable))
}

func (this *QAbstractButton) IsCheckable() bool {
	return (bool)(C.QAbstractButton_isCheckable(this.h))
}

func (this *QAbstractButton) IsChecked() bool {
	return (bool)(C.QAbstractButton_isChecked(this.h))
}

func (this *QAbstractButton) SetDown(down bool) {
	C.QAbstractButton_setDown(this.h, (C.bool)(down))
}

func (this *QAbstractButton) IsDown() bool {
	return (bool)(C.QAbstractButton_isDown(this.h))
}

func (this *QAbstractButton) SetAutoRepeat(autoRepeat bool) {
	C.QAbstractButton_setAutoRepeat(this.h, (C.bool)(autoRepeat))
}

func (this *QAbstractButton) AutoRepeat() bool {
	return (bool)(C.QAbstractButton_autoRepeat(this.h))
}

func (this *QAbstractButton) SetAutoRepeatDelay(autoRepeatDelay int) {
	C.QAbstractButton_setAutoRepeatDelay(this.h, (C.int)(autoRepeatDelay))
}

func (this *QAbstractButton) AutoRepeatDelay() int {
	return (int)(C.QAbstractButton_autoRepeatDelay(this.h))
}

func (this *QAbstractButton) SetAutoRepeatInterval(autoRepeatInterval int) {
	C.QAbstractButton_setAutoRepeatInterval(this.h, (C.int)(autoRepeatInterval))
}

func (this *QAbstractButton) AutoRepeatInterval() int {
	return (int)(C.QAbstractButton_autoRepeatInterval(this.h))
}

func (this *QAbstractButton) SetAutoExclusive(autoExclusive bool) {
	C.QAbstractButton_setAutoExclusive(this.h, (C.bool)(autoExclusive))
}

func (this *QAbstractButton) AutoExclusive() bool {
	return (bool)(C.QAbstractButton_autoExclusive(this.h))
}

func (this *QAbstractButton) Group() *QButtonGroup {
	return newQButtonGroup(C.QAbstractButton_group(this.h))
}

func (this *QAbstractButton) SetIconSize(size *QSize) {
	C.QAbstractButton_setIconSize(this.h, size.cPointer())
}

func (this *QAbstractButton) AnimateClick() {
	C.QAbstractButton_animateClick(this.h)
}

func (this *QAbstractButton) Click() {
	C.QAbstractButton_click(this.h)
}

func (this *QAbstractButton) Toggle() {
	C.QAbstractButton_toggle(this.h)
}

func (this *QAbstractButton) SetChecked(checked bool) {
	C.QAbstractButton_setChecked(this.h, (C.bool)(checked))
}

func (this *QAbstractButton) Pressed() {
	C.QAbstractButton_pressed(this.h)
}
func (this *QAbstractButton) OnPressed(slot func()) {
	C.QAbstractButton_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractButton_pressed
func miqt_exec_callback_QAbstractButton_pressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractButton) Released() {
	C.QAbstractButton_released(this.h)
}
func (this *QAbstractButton) OnReleased(slot func()) {
	C.QAbstractButton_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractButton_released
func miqt_exec_callback_QAbstractButton_released(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractButton) Clicked() {
	C.QAbstractButton_clicked(this.h)
}
func (this *QAbstractButton) OnClicked(slot func()) {
	C.QAbstractButton_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractButton_clicked
func miqt_exec_callback_QAbstractButton_clicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractButton) Toggled(checked bool) {
	C.QAbstractButton_toggled(this.h, (C.bool)(checked))
}
func (this *QAbstractButton) OnToggled(slot func(checked bool)) {
	C.QAbstractButton_connect_toggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractButton_toggled
func miqt_exec_callback_QAbstractButton_toggled(cb C.intptr_t, checked C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

func QAbstractButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractButton_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractButton_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractButton) Clicked1(checked bool) {
	C.QAbstractButton_clicked1(this.h, (C.bool)(checked))
}
func (this *QAbstractButton) OnClicked1(slot func(checked bool)) {
	C.QAbstractButton_connect_clicked1(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractButton_clicked1
func miqt_exec_callback_QAbstractButton_clicked1(cb C.intptr_t, checked C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

// UpdateMicroFocus can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractButton_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractButton_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractButton_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractButton_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractButton_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QAbstractButton_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractButton_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractButton_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAbstractButton that was directly constructed.
func (this *QAbstractButton) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractButton_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QAbstractButton) OnPaintEvent(slot func(e *QPaintEvent)) {
	ok := C.QAbstractButton_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_paintEvent
func miqt_exec_callback_QAbstractButton_paintEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc(slotval1)

}

func (this *QAbstractButton) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QAbstractButton_virtualbase_hitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QAbstractButton) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	ok := C.QAbstractButton_override_virtual_hitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_hitButton
func miqt_exec_callback_QAbstractButton_hitButton(self *C.QAbstractButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPoint) bool, pos *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_CheckStateSet() {

	C.QAbstractButton_virtualbase_checkStateSet(unsafe.Pointer(this.h))

}
func (this *QAbstractButton) OnCheckStateSet(slot func(super func())) {
	ok := C.QAbstractButton_override_virtual_checkStateSet(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_checkStateSet
func miqt_exec_callback_QAbstractButton_checkStateSet(self *C.QAbstractButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractButton{h: self}).callVirtualBase_CheckStateSet)

}

func (this *QAbstractButton) callVirtualBase_NextCheckState() {

	C.QAbstractButton_virtualbase_nextCheckState(unsafe.Pointer(this.h))

}
func (this *QAbstractButton) OnNextCheckState(slot func(super func())) {
	ok := C.QAbstractButton_override_virtual_nextCheckState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_nextCheckState
func miqt_exec_callback_QAbstractButton_nextCheckState(self *C.QAbstractButton, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractButton{h: self}).callVirtualBase_NextCheckState)

}

func (this *QAbstractButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QAbstractButton_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QAbstractButton) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QAbstractButton_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_event
func miqt_exec_callback_QAbstractButton_event(self *C.QAbstractButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QAbstractButton_virtualbase_keyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QAbstractButton_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_keyPressEvent
func miqt_exec_callback_QAbstractButton_keyPressEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QAbstractButton_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QAbstractButton_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_keyReleaseEvent
func miqt_exec_callback_QAbstractButton_keyReleaseEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QAbstractButton_virtualbase_mousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QAbstractButton_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_mousePressEvent
func miqt_exec_callback_QAbstractButton_mousePressEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QAbstractButton_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QAbstractButton_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_mouseReleaseEvent
func miqt_exec_callback_QAbstractButton_mouseReleaseEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QAbstractButton_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QAbstractButton_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_mouseMoveEvent
func miqt_exec_callback_QAbstractButton_mouseMoveEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QAbstractButton_virtualbase_focusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QAbstractButton_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_focusInEvent
func miqt_exec_callback_QAbstractButton_focusInEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QAbstractButton_virtualbase_focusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QAbstractButton_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_focusOutEvent
func miqt_exec_callback_QAbstractButton_focusOutEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QAbstractButton_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QAbstractButton_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_changeEvent
func miqt_exec_callback_QAbstractButton_changeEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QAbstractButton_virtualbase_timerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractButton) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QAbstractButton_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_timerEvent
func miqt_exec_callback_QAbstractButton_timerEvent(self *C.QAbstractButton, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_DevType() int {

	return (int)(C.QAbstractButton_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QAbstractButton) OnDevType(slot func(super func() int) int) {
	ok := C.QAbstractButton_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_devType
func miqt_exec_callback_QAbstractButton_devType(self *C.QAbstractButton, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractButton_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractButton) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QAbstractButton_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_setVisible
func miqt_exec_callback_QAbstractButton_setVisible(self *C.QAbstractButton, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QAbstractButton_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractButton) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractButton_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_sizeHint
func miqt_exec_callback_QAbstractButton_sizeHint(self *C.QAbstractButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractButton) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QAbstractButton_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractButton) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractButton_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_minimumSizeHint
func miqt_exec_callback_QAbstractButton_minimumSizeHint(self *C.QAbstractButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractButton_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QAbstractButton_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_heightForWidth
func miqt_exec_callback_QAbstractButton_heightForWidth(self *C.QAbstractButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QAbstractButton_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractButton) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QAbstractButton_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_hasHeightForWidth
func miqt_exec_callback_QAbstractButton_hasHeightForWidth(self *C.QAbstractButton, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QAbstractButton_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QAbstractButton) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QAbstractButton_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_paintEngine
func miqt_exec_callback_QAbstractButton_paintEngine(self *C.QAbstractButton, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QAbstractButton) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QAbstractButton_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractButton_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_mouseDoubleClickEvent
func miqt_exec_callback_QAbstractButton_mouseDoubleClickEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QAbstractButton_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QAbstractButton_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_wheelEvent
func miqt_exec_callback_QAbstractButton_wheelEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QAbstractButton_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QAbstractButton_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_enterEvent
func miqt_exec_callback_QAbstractButton_enterEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QAbstractButton_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractButton_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_leaveEvent
func miqt_exec_callback_QAbstractButton_leaveEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QAbstractButton_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QAbstractButton_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_moveEvent
func miqt_exec_callback_QAbstractButton_moveEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QAbstractButton_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QAbstractButton_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_resizeEvent
func miqt_exec_callback_QAbstractButton_resizeEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QAbstractButton_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QAbstractButton_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_closeEvent
func miqt_exec_callback_QAbstractButton_closeEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QAbstractButton_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QAbstractButton_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_contextMenuEvent
func miqt_exec_callback_QAbstractButton_contextMenuEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QAbstractButton_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QAbstractButton_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_tabletEvent
func miqt_exec_callback_QAbstractButton_tabletEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QAbstractButton_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QAbstractButton_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_actionEvent
func miqt_exec_callback_QAbstractButton_actionEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QAbstractButton_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QAbstractButton_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_dragEnterEvent
func miqt_exec_callback_QAbstractButton_dragEnterEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QAbstractButton_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QAbstractButton_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_dragMoveEvent
func miqt_exec_callback_QAbstractButton_dragMoveEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QAbstractButton_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QAbstractButton_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_dragLeaveEvent
func miqt_exec_callback_QAbstractButton_dragLeaveEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QAbstractButton_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QAbstractButton_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_dropEvent
func miqt_exec_callback_QAbstractButton_dropEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QAbstractButton_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QAbstractButton_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_showEvent
func miqt_exec_callback_QAbstractButton_showEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QAbstractButton_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QAbstractButton_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_hideEvent
func miqt_exec_callback_QAbstractButton_hideEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractButton_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QAbstractButton) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QAbstractButton_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_nativeEvent
func miqt_exec_callback_QAbstractButton_nativeEvent(self *C.QAbstractButton, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QAbstractButton_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractButton) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QAbstractButton_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_metric
func miqt_exec_callback_QAbstractButton_metric(self *C.QAbstractButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_InitPainter(painter *QPainter) {

	C.QAbstractButton_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QAbstractButton) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QAbstractButton_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_initPainter
func miqt_exec_callback_QAbstractButton_initPainter(self *C.QAbstractButton, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractButton) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QAbstractButton_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QAbstractButton) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QAbstractButton_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_redirected
func miqt_exec_callback_QAbstractButton_redirected(self *C.QAbstractButton, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractButton) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QAbstractButton_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QAbstractButton) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QAbstractButton_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_sharedPainter
func miqt_exec_callback_QAbstractButton_sharedPainter(self *C.QAbstractButton, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QAbstractButton) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QAbstractButton_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractButton) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QAbstractButton_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_inputMethodEvent
func miqt_exec_callback_QAbstractButton_inputMethodEvent(self *C.QAbstractButton, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QAbstractButton_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractButton) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QAbstractButton_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_inputMethodQuery
func miqt_exec_callback_QAbstractButton_inputMethodQuery(self *C.QAbstractButton, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractButton) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractButton_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractButton) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QAbstractButton_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_focusNextPrevChild
func miqt_exec_callback_QAbstractButton_focusNextPrevChild(self *C.QAbstractButton, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractButton_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractButton) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAbstractButton_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_eventFilter
func miqt_exec_callback_QAbstractButton_eventFilter(self *C.QAbstractButton, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractButton{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractButton) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractButton_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractButton_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_childEvent
func miqt_exec_callback_QAbstractButton_childEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractButton_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractButton) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractButton_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_customEvent
func miqt_exec_callback_QAbstractButton_customEvent(self *C.QAbstractButton, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractButton) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractButton_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractButton) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractButton_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_connectNotify
func miqt_exec_callback_QAbstractButton_connectNotify(self *C.QAbstractButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractButton) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractButton_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractButton) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractButton_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractButton_disconnectNotify
func miqt_exec_callback_QAbstractButton_disconnectNotify(self *C.QAbstractButton, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractButton{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractButton) Delete() {
	C.QAbstractButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
