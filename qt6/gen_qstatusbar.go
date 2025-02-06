package qt6

/*

#include "gen_qstatusbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStatusBar struct {
	h *C.QStatusBar
	*QWidget
}

func (this *QStatusBar) cPointer() *C.QStatusBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStatusBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStatusBar constructs the type using only CGO pointers.
func newQStatusBar(h *C.QStatusBar) *QStatusBar {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QStatusBar_virtbase(h, &outptr_QWidget)

	return &QStatusBar{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQStatusBar constructs the type using only unsafe pointers.
func UnsafeNewQStatusBar(h unsafe.Pointer) *QStatusBar {
	return newQStatusBar((*C.QStatusBar)(h))
}

// NewQStatusBar constructs a new QStatusBar object.
func NewQStatusBar(parent *QWidget) *QStatusBar {

	return newQStatusBar(C.QStatusBar_new(parent.cPointer()))
}

// NewQStatusBar2 constructs a new QStatusBar object.
func NewQStatusBar2() *QStatusBar {

	return newQStatusBar(C.QStatusBar_new2())
}

func (this *QStatusBar) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStatusBar_metaObject(this.h))
}

func (this *QStatusBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStatusBar_metacast(this.h, param1_Cstring))
}

func QStatusBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStatusBar_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStatusBar) AddWidget(widget *QWidget) {
	C.QStatusBar_addWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) InsertWidget(index int, widget *QWidget) int {
	return (int)(C.QStatusBar_insertWidget(this.h, (C.int)(index), widget.cPointer()))
}

func (this *QStatusBar) AddPermanentWidget(widget *QWidget) {
	C.QStatusBar_addPermanentWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) InsertPermanentWidget(index int, widget *QWidget) int {
	return (int)(C.QStatusBar_insertPermanentWidget(this.h, (C.int)(index), widget.cPointer()))
}

func (this *QStatusBar) RemoveWidget(widget *QWidget) {
	C.QStatusBar_removeWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) SetSizeGripEnabled(sizeGripEnabled bool) {
	C.QStatusBar_setSizeGripEnabled(this.h, (C.bool)(sizeGripEnabled))
}

func (this *QStatusBar) IsSizeGripEnabled() bool {
	return (bool)(C.QStatusBar_isSizeGripEnabled(this.h))
}

func (this *QStatusBar) CurrentMessage() string {
	var _ms C.struct_miqt_string = C.QStatusBar_currentMessage(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStatusBar) ShowMessage(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStatusBar_showMessage(this.h, text_ms)
}

func (this *QStatusBar) ClearMessage() {
	C.QStatusBar_clearMessage(this.h)
}

func (this *QStatusBar) MessageChanged(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStatusBar_messageChanged(this.h, text_ms)
}
func (this *QStatusBar) OnMessageChanged(slot func(text string)) {
	C.QStatusBar_connect_messageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStatusBar_messageChanged
func miqt_exec_callback_QStatusBar_messageChanged(cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc(slotval1)
}

func QStatusBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStatusBar_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStatusBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStatusBar_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStatusBar) AddWidget2(widget *QWidget, stretch int) {
	C.QStatusBar_addWidget2(this.h, widget.cPointer(), (C.int)(stretch))
}

func (this *QStatusBar) InsertWidget3(index int, widget *QWidget, stretch int) int {
	return (int)(C.QStatusBar_insertWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch)))
}

func (this *QStatusBar) AddPermanentWidget2(widget *QWidget, stretch int) {
	C.QStatusBar_addPermanentWidget2(this.h, widget.cPointer(), (C.int)(stretch))
}

func (this *QStatusBar) InsertPermanentWidget3(index int, widget *QWidget, stretch int) int {
	return (int)(C.QStatusBar_insertPermanentWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch)))
}

func (this *QStatusBar) ShowMessage2(text string, timeout int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStatusBar_showMessage2(this.h, text_ms, (C.int)(timeout))
}

// Reformat can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) Reformat() {

	var _dynamic_cast_ok C.bool = false
	C.QStatusBar_protectedbase_reformat(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// HideOrShow can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) HideOrShow() {

	var _dynamic_cast_ok C.bool = false
	C.QStatusBar_protectedbase_hideOrShow(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QStatusBar_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QStatusBar_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QStatusBar_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStatusBar_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStatusBar_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QStatusBar_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStatusBar_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStatusBar_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QStatusBar that was directly constructed.
func (this *QStatusBar) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStatusBar_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QStatusBar) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QStatusBar_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStatusBar) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QStatusBar_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_showEvent
func miqt_exec_callback_QStatusBar_showEvent(self *C.QStatusBar, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QStatusBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QStatusBar_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStatusBar) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QStatusBar_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_paintEvent
func miqt_exec_callback_QStatusBar_paintEvent(self *C.QStatusBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QStatusBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QStatusBar_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStatusBar) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QStatusBar_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_resizeEvent
func miqt_exec_callback_QStatusBar_resizeEvent(self *C.QStatusBar, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QStatusBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QStatusBar_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QStatusBar) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QStatusBar_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_event
func miqt_exec_callback_QStatusBar_event(self *C.QStatusBar, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStatusBar) callVirtualBase_DevType() int {

	return (int)(C.QStatusBar_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QStatusBar) OnDevType(slot func(super func() int) int) {
	ok := C.QStatusBar_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_devType
func miqt_exec_callback_QStatusBar_devType(self *C.QStatusBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QStatusBar) callVirtualBase_SetVisible(visible bool) {

	C.QStatusBar_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QStatusBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QStatusBar_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_setVisible
func miqt_exec_callback_QStatusBar_setVisible(self *C.QStatusBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QStatusBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QStatusBar) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QStatusBar_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStatusBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QStatusBar_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_sizeHint
func miqt_exec_callback_QStatusBar_sizeHint(self *C.QStatusBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QStatusBar) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QStatusBar_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStatusBar) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QStatusBar_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_minimumSizeHint
func miqt_exec_callback_QStatusBar_minimumSizeHint(self *C.QStatusBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QStatusBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QStatusBar_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QStatusBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QStatusBar_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_heightForWidth
func miqt_exec_callback_QStatusBar_heightForWidth(self *C.QStatusBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStatusBar) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QStatusBar_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QStatusBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QStatusBar_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_hasHeightForWidth
func miqt_exec_callback_QStatusBar_hasHeightForWidth(self *C.QStatusBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QStatusBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QStatusBar_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QStatusBar) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QStatusBar_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_paintEngine
func miqt_exec_callback_QStatusBar_paintEngine(self *C.QStatusBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QStatusBar) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QStatusBar_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QStatusBar_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_mousePressEvent
func miqt_exec_callback_QStatusBar_mousePressEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QStatusBar_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QStatusBar_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_mouseReleaseEvent
func miqt_exec_callback_QStatusBar_mouseReleaseEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QStatusBar_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QStatusBar_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_mouseDoubleClickEvent
func miqt_exec_callback_QStatusBar_mouseDoubleClickEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QStatusBar_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QStatusBar_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_mouseMoveEvent
func miqt_exec_callback_QStatusBar_mouseMoveEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QStatusBar_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QStatusBar_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_wheelEvent
func miqt_exec_callback_QStatusBar_wheelEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QStatusBar_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QStatusBar_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_keyPressEvent
func miqt_exec_callback_QStatusBar_keyPressEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QStatusBar_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QStatusBar_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_keyReleaseEvent
func miqt_exec_callback_QStatusBar_keyReleaseEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QStatusBar_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QStatusBar_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_focusInEvent
func miqt_exec_callback_QStatusBar_focusInEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QStatusBar_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QStatusBar_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_focusOutEvent
func miqt_exec_callback_QStatusBar_focusOutEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QStatusBar_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QStatusBar_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_enterEvent
func miqt_exec_callback_QStatusBar_enterEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QStatusBar_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStatusBar_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_leaveEvent
func miqt_exec_callback_QStatusBar_leaveEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QStatusBar_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QStatusBar_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_moveEvent
func miqt_exec_callback_QStatusBar_moveEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QStatusBar_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QStatusBar_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_closeEvent
func miqt_exec_callback_QStatusBar_closeEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QStatusBar_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QStatusBar_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_contextMenuEvent
func miqt_exec_callback_QStatusBar_contextMenuEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QStatusBar_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QStatusBar_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_tabletEvent
func miqt_exec_callback_QStatusBar_tabletEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QStatusBar_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QStatusBar_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_actionEvent
func miqt_exec_callback_QStatusBar_actionEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QStatusBar_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QStatusBar_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_dragEnterEvent
func miqt_exec_callback_QStatusBar_dragEnterEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QStatusBar_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QStatusBar_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_dragMoveEvent
func miqt_exec_callback_QStatusBar_dragMoveEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QStatusBar_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QStatusBar_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_dragLeaveEvent
func miqt_exec_callback_QStatusBar_dragLeaveEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QStatusBar_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QStatusBar_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_dropEvent
func miqt_exec_callback_QStatusBar_dropEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QStatusBar_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QStatusBar_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_hideEvent
func miqt_exec_callback_QStatusBar_hideEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QStatusBar_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QStatusBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QStatusBar_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_nativeEvent
func miqt_exec_callback_QStatusBar_nativeEvent(self *C.QStatusBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStatusBar) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QStatusBar_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStatusBar) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QStatusBar_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_changeEvent
func miqt_exec_callback_QStatusBar_changeEvent(self *C.QStatusBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QStatusBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QStatusBar_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QStatusBar) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QStatusBar_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_metric
func miqt_exec_callback_QStatusBar_metric(self *C.QStatusBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStatusBar) callVirtualBase_InitPainter(painter *QPainter) {

	C.QStatusBar_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QStatusBar) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QStatusBar_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_initPainter
func miqt_exec_callback_QStatusBar_initPainter(self *C.QStatusBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QStatusBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QStatusBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QStatusBar_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QStatusBar) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QStatusBar_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_redirected
func miqt_exec_callback_QStatusBar_redirected(self *C.QStatusBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStatusBar) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QStatusBar_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QStatusBar) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QStatusBar_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_sharedPainter
func miqt_exec_callback_QStatusBar_sharedPainter(self *C.QStatusBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QStatusBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QStatusBar_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStatusBar) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QStatusBar_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_inputMethodEvent
func miqt_exec_callback_QStatusBar_inputMethodEvent(self *C.QStatusBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QStatusBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QStatusBar_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStatusBar) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QStatusBar_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_inputMethodQuery
func miqt_exec_callback_QStatusBar_inputMethodQuery(self *C.QStatusBar, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStatusBar) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QStatusBar_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QStatusBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QStatusBar_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_focusNextPrevChild
func miqt_exec_callback_QStatusBar_focusNextPrevChild(self *C.QStatusBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStatusBar) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QStatusBar_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QStatusBar) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QStatusBar_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_eventFilter
func miqt_exec_callback_QStatusBar_eventFilter(self *C.QStatusBar, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QStatusBar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStatusBar) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QStatusBar_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QStatusBar_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_timerEvent
func miqt_exec_callback_QStatusBar_timerEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QStatusBar_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QStatusBar_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_childEvent
func miqt_exec_callback_QStatusBar_childEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_CustomEvent(event *QEvent) {

	C.QStatusBar_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStatusBar) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStatusBar_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_customEvent
func miqt_exec_callback_QStatusBar_customEvent(self *C.QStatusBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStatusBar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QStatusBar) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QStatusBar_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStatusBar) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStatusBar_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_connectNotify
func miqt_exec_callback_QStatusBar_connectNotify(self *C.QStatusBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStatusBar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QStatusBar) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QStatusBar_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStatusBar) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStatusBar_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStatusBar_disconnectNotify
func miqt_exec_callback_QStatusBar_disconnectNotify(self *C.QStatusBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStatusBar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QStatusBar) Delete() {
	C.QStatusBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStatusBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QStatusBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
