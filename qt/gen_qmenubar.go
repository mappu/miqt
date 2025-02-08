package qt

/*

#include "gen_qmenubar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMenuBar struct {
	h *C.QMenuBar
	*QWidget
}

func (this *QMenuBar) cPointer() *C.QMenuBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMenuBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMenuBar constructs the type using only CGO pointers.
func newQMenuBar(h *C.QMenuBar) *QMenuBar {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QMenuBar_virtbase(h, &outptr_QWidget)

	return &QMenuBar{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQMenuBar constructs the type using only unsafe pointers.
func UnsafeNewQMenuBar(h unsafe.Pointer) *QMenuBar {
	return newQMenuBar((*C.QMenuBar)(h))
}

// NewQMenuBar constructs a new QMenuBar object.
func NewQMenuBar(parent *QWidget) *QMenuBar {

	return newQMenuBar(C.QMenuBar_new(parent.cPointer()))
}

// NewQMenuBar2 constructs a new QMenuBar object.
func NewQMenuBar2() *QMenuBar {

	return newQMenuBar(C.QMenuBar_new2())
}

func (this *QMenuBar) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMenuBar_metaObject(this.h))
}

func (this *QMenuBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMenuBar_metacast(this.h, param1_Cstring))
}

func QMenuBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenuBar) AddAction(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QMenuBar_addAction(this.h, text_ms))
}

func (this *QMenuBar) AddMenu(menu *QMenu) *QAction {
	return newQAction(C.QMenuBar_addMenu(this.h, menu.cPointer()))
}

func (this *QMenuBar) AddMenuWithTitle(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return newQMenu(C.QMenuBar_addMenuWithTitle(this.h, title_ms))
}

func (this *QMenuBar) AddMenu2(icon *QIcon, title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return newQMenu(C.QMenuBar_addMenu2(this.h, icon.cPointer(), title_ms))
}

func (this *QMenuBar) AddSeparator() *QAction {
	return newQAction(C.QMenuBar_addSeparator(this.h))
}

func (this *QMenuBar) InsertSeparator(before *QAction) *QAction {
	return newQAction(C.QMenuBar_insertSeparator(this.h, before.cPointer()))
}

func (this *QMenuBar) InsertMenu(before *QAction, menu *QMenu) *QAction {
	return newQAction(C.QMenuBar_insertMenu(this.h, before.cPointer(), menu.cPointer()))
}

func (this *QMenuBar) Clear() {
	C.QMenuBar_clear(this.h)
}

func (this *QMenuBar) ActiveAction() *QAction {
	return newQAction(C.QMenuBar_activeAction(this.h))
}

func (this *QMenuBar) SetActiveAction(action *QAction) {
	C.QMenuBar_setActiveAction(this.h, action.cPointer())
}

func (this *QMenuBar) SetDefaultUp(defaultUp bool) {
	C.QMenuBar_setDefaultUp(this.h, (C.bool)(defaultUp))
}

func (this *QMenuBar) IsDefaultUp() bool {
	return (bool)(C.QMenuBar_isDefaultUp(this.h))
}

func (this *QMenuBar) SizeHint() *QSize {
	_goptr := newQSize(C.QMenuBar_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QMenuBar_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) HeightForWidth(param1 int) int {
	return (int)(C.QMenuBar_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QMenuBar) ActionGeometry(param1 *QAction) *QRect {
	_goptr := newQRect(C.QMenuBar_actionGeometry(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) ActionAt(param1 *QPoint) *QAction {
	return newQAction(C.QMenuBar_actionAt(this.h, param1.cPointer()))
}

func (this *QMenuBar) SetCornerWidget(w *QWidget) {
	C.QMenuBar_setCornerWidget(this.h, w.cPointer())
}

func (this *QMenuBar) CornerWidget() *QWidget {
	return newQWidget(C.QMenuBar_cornerWidget(this.h))
}

func (this *QMenuBar) IsNativeMenuBar() bool {
	return (bool)(C.QMenuBar_isNativeMenuBar(this.h))
}

func (this *QMenuBar) SetNativeMenuBar(nativeMenuBar bool) {
	C.QMenuBar_setNativeMenuBar(this.h, (C.bool)(nativeMenuBar))
}

func (this *QMenuBar) SetVisible(visible bool) {
	C.QMenuBar_setVisible(this.h, (C.bool)(visible))
}

func (this *QMenuBar) Triggered(action *QAction) {
	C.QMenuBar_triggered(this.h, action.cPointer())
}
func (this *QMenuBar) OnTriggered(slot func(action *QAction)) {
	C.QMenuBar_connect_triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_triggered
func miqt_exec_callback_QMenuBar_triggered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(action)

	gofunc(slotval1)
}

func (this *QMenuBar) Hovered(action *QAction) {
	C.QMenuBar_hovered(this.h, action.cPointer())
}
func (this *QMenuBar) OnHovered(slot func(action *QAction)) {
	C.QMenuBar_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_hovered
func miqt_exec_callback_QMenuBar_hovered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(action)

	gofunc(slotval1)
}

func QMenuBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenuBar) SetCornerWidget2(w *QWidget, corner Corner) {
	C.QMenuBar_setCornerWidget2(this.h, w.cPointer(), (C.int)(corner))
}

func (this *QMenuBar) CornerWidget1(corner Corner) *QWidget {
	return newQWidget(C.QMenuBar_cornerWidget1(this.h, (C.int)(corner)))
}

// InitStyleOption can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) InitStyleOption(option *QStyleOptionMenuItem, action *QAction) {

	var _dynamic_cast_ok C.bool = false
	C.QMenuBar_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer(), action.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QMenuBar_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QMenuBar_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QMenuBar_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMenuBar_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMenuBar_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QMenuBar_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMenuBar_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMenuBar_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMenuBar that was directly constructed.
func (this *QMenuBar) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMenuBar_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMenuBar) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QMenuBar_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenuBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMenuBar_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_sizeHint
func miqt_exec_callback_QMenuBar_sizeHint(self *C.QMenuBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QMenuBar_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenuBar) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMenuBar_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_minimumSizeHint
func miqt_exec_callback_QMenuBar_minimumSizeHint(self *C.QMenuBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMenuBar_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMenuBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QMenuBar_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_heightForWidth
func miqt_exec_callback_QMenuBar_heightForWidth(self *C.QMenuBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_SetVisible(visible bool) {

	C.QMenuBar_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMenuBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QMenuBar_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_setVisible
func miqt_exec_callback_QMenuBar_setVisible(self *C.QMenuBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMenuBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMenuBar) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QMenuBar_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QMenuBar_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_changeEvent
func miqt_exec_callback_QMenuBar_changeEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QMenuBar_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QMenuBar_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_keyPressEvent
func miqt_exec_callback_QMenuBar_keyPressEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QMenuBar_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMenuBar_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_mouseReleaseEvent
func miqt_exec_callback_QMenuBar_mouseReleaseEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QMenuBar_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMenuBar_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_mousePressEvent
func miqt_exec_callback_QMenuBar_mousePressEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QMenuBar_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMenuBar_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_mouseMoveEvent
func miqt_exec_callback_QMenuBar_mouseMoveEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_LeaveEvent(param1 *QEvent) {

	C.QMenuBar_virtualbase_leaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnLeaveEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QMenuBar_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_leaveEvent
func miqt_exec_callback_QMenuBar_leaveEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QMenuBar_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QMenuBar_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_paintEvent
func miqt_exec_callback_QMenuBar_paintEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QMenuBar_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QMenuBar_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_resizeEvent
func miqt_exec_callback_QMenuBar_resizeEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ActionEvent(param1 *QActionEvent) {

	C.QMenuBar_virtualbase_actionEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnActionEvent(slot func(super func(param1 *QActionEvent), param1 *QActionEvent)) {
	ok := C.QMenuBar_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_actionEvent
func miqt_exec_callback_QMenuBar_actionEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QActionEvent), param1 *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QMenuBar_virtualbase_focusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QMenuBar_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_focusOutEvent
func miqt_exec_callback_QMenuBar_focusOutEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QMenuBar_virtualbase_focusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QMenuBar_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_focusInEvent
func miqt_exec_callback_QMenuBar_focusInEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QMenuBar_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QMenuBar_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_timerEvent
func miqt_exec_callback_QMenuBar_timerEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QMenuBar_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QMenuBar) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QMenuBar_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_eventFilter
func miqt_exec_callback_QMenuBar_eventFilter(self *C.QMenuBar, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QMenuBar_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QMenuBar) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QMenuBar_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_event
func miqt_exec_callback_QMenuBar_event(self *C.QMenuBar, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_DevType() int {

	return (int)(C.QMenuBar_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QMenuBar) OnDevType(slot func(super func() int) int) {
	ok := C.QMenuBar_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_devType
func miqt_exec_callback_QMenuBar_devType(self *C.QMenuBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QMenuBar_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMenuBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QMenuBar_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_hasHeightForWidth
func miqt_exec_callback_QMenuBar_hasHeightForWidth(self *C.QMenuBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QMenuBar_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QMenuBar) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QMenuBar_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_paintEngine
func miqt_exec_callback_QMenuBar_paintEngine(self *C.QMenuBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QMenuBar_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QMenuBar_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_mouseDoubleClickEvent
func miqt_exec_callback_QMenuBar_mouseDoubleClickEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QMenuBar_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QMenuBar_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_wheelEvent
func miqt_exec_callback_QMenuBar_wheelEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMenuBar_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QMenuBar_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_keyReleaseEvent
func miqt_exec_callback_QMenuBar_keyReleaseEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_EnterEvent(event *QEvent) {

	C.QMenuBar_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMenuBar_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_enterEvent
func miqt_exec_callback_QMenuBar_enterEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QMenuBar_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QMenuBar_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_moveEvent
func miqt_exec_callback_QMenuBar_moveEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QMenuBar_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QMenuBar_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_closeEvent
func miqt_exec_callback_QMenuBar_closeEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QMenuBar_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QMenuBar_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_contextMenuEvent
func miqt_exec_callback_QMenuBar_contextMenuEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMenuBar_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QMenuBar_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_tabletEvent
func miqt_exec_callback_QMenuBar_tabletEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QMenuBar_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QMenuBar_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_dragEnterEvent
func miqt_exec_callback_QMenuBar_dragEnterEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QMenuBar_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QMenuBar_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_dragMoveEvent
func miqt_exec_callback_QMenuBar_dragMoveEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QMenuBar_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QMenuBar_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_dragLeaveEvent
func miqt_exec_callback_QMenuBar_dragLeaveEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QMenuBar_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QMenuBar_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_dropEvent
func miqt_exec_callback_QMenuBar_dropEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QMenuBar_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QMenuBar_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_showEvent
func miqt_exec_callback_QMenuBar_showEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QMenuBar_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QMenuBar_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_hideEvent
func miqt_exec_callback_QMenuBar_hideEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMenuBar_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QMenuBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QMenuBar_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_nativeEvent
func miqt_exec_callback_QMenuBar_nativeEvent(self *C.QMenuBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QMenuBar_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMenuBar) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QMenuBar_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_metric
func miqt_exec_callback_QMenuBar_metric(self *C.QMenuBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_InitPainter(painter *QPainter) {

	C.QMenuBar_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMenuBar) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QMenuBar_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_initPainter
func miqt_exec_callback_QMenuBar_initPainter(self *C.QMenuBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QMenuBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMenuBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QMenuBar_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QMenuBar) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QMenuBar_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_redirected
func miqt_exec_callback_QMenuBar_redirected(self *C.QMenuBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QMenuBar_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QMenuBar) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QMenuBar_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_sharedPainter
func miqt_exec_callback_QMenuBar_sharedPainter(self *C.QMenuBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMenuBar_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMenuBar) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QMenuBar_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_inputMethodEvent
func miqt_exec_callback_QMenuBar_inputMethodEvent(self *C.QMenuBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QMenuBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QMenuBar_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMenuBar) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QMenuBar_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_inputMethodQuery
func miqt_exec_callback_QMenuBar_inputMethodQuery(self *C.QMenuBar, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMenuBar) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QMenuBar_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMenuBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QMenuBar_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_focusNextPrevChild
func miqt_exec_callback_QMenuBar_focusNextPrevChild(self *C.QMenuBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QMenuBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMenuBar) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QMenuBar_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QMenuBar_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_childEvent
func miqt_exec_callback_QMenuBar_childEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_CustomEvent(event *QEvent) {

	C.QMenuBar_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMenuBar) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMenuBar_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_customEvent
func miqt_exec_callback_QMenuBar_customEvent(self *C.QMenuBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMenuBar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMenuBar) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QMenuBar_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMenuBar) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMenuBar_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_connectNotify
func miqt_exec_callback_QMenuBar_connectNotify(self *C.QMenuBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMenuBar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMenuBar) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QMenuBar_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMenuBar) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMenuBar_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMenuBar_disconnectNotify
func miqt_exec_callback_QMenuBar_disconnectNotify(self *C.QMenuBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMenuBar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMenuBar) Delete() {
	C.QMenuBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMenuBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QMenuBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
