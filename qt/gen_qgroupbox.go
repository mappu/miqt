package qt

/*

#include "gen_qgroupbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGroupBox struct {
	h *C.QGroupBox
	*QWidget
}

func (this *QGroupBox) cPointer() *C.QGroupBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGroupBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGroupBox constructs the type using only CGO pointers.
func newQGroupBox(h *C.QGroupBox) *QGroupBox {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QGroupBox_virtbase(h, &outptr_QWidget)

	return &QGroupBox{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQGroupBox constructs the type using only unsafe pointers.
func UnsafeNewQGroupBox(h unsafe.Pointer) *QGroupBox {
	return newQGroupBox((*C.QGroupBox)(h))
}

// NewQGroupBox constructs a new QGroupBox object.
func NewQGroupBox(parent *QWidget) *QGroupBox {

	return newQGroupBox(C.QGroupBox_new(parent.cPointer()))
}

// NewQGroupBox2 constructs a new QGroupBox object.
func NewQGroupBox2() *QGroupBox {

	return newQGroupBox(C.QGroupBox_new2())
}

// NewQGroupBox3 constructs a new QGroupBox object.
func NewQGroupBox3(title string) *QGroupBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQGroupBox(C.QGroupBox_new3(title_ms))
}

// NewQGroupBox4 constructs a new QGroupBox object.
func NewQGroupBox4(title string, parent *QWidget) *QGroupBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQGroupBox(C.QGroupBox_new4(title_ms, parent.cPointer()))
}

func (this *QGroupBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGroupBox_metaObject(this.h))
}

func (this *QGroupBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGroupBox_metacast(this.h, param1_Cstring))
}

func QGroupBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) Title() string {
	var _ms C.struct_miqt_string = C.QGroupBox_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QGroupBox_setTitle(this.h, title_ms)
}

func (this *QGroupBox) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QGroupBox_alignment(this.h))
}

func (this *QGroupBox) SetAlignment(alignment int) {
	C.QGroupBox_setAlignment(this.h, (C.int)(alignment))
}

func (this *QGroupBox) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QGroupBox_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGroupBox) IsFlat() bool {
	return (bool)(C.QGroupBox_isFlat(this.h))
}

func (this *QGroupBox) SetFlat(flat bool) {
	C.QGroupBox_setFlat(this.h, (C.bool)(flat))
}

func (this *QGroupBox) IsCheckable() bool {
	return (bool)(C.QGroupBox_isCheckable(this.h))
}

func (this *QGroupBox) SetCheckable(checkable bool) {
	C.QGroupBox_setCheckable(this.h, (C.bool)(checkable))
}

func (this *QGroupBox) IsChecked() bool {
	return (bool)(C.QGroupBox_isChecked(this.h))
}

func (this *QGroupBox) SetChecked(checked bool) {
	C.QGroupBox_setChecked(this.h, (C.bool)(checked))
}

func (this *QGroupBox) Clicked() {
	C.QGroupBox_clicked(this.h)
}
func (this *QGroupBox) OnClicked(slot func()) {
	C.QGroupBox_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_clicked
func miqt_exec_callback_QGroupBox_clicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGroupBox) Toggled(param1 bool) {
	C.QGroupBox_toggled(this.h, (C.bool)(param1))
}
func (this *QGroupBox) OnToggled(slot func(param1 bool)) {
	C.QGroupBox_connect_toggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_toggled
func miqt_exec_callback_QGroupBox_toggled(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func QGroupBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) ClickedWithChecked(checked bool) {
	C.QGroupBox_clickedWithChecked(this.h, (C.bool)(checked))
}
func (this *QGroupBox) OnClickedWithChecked(slot func(checked bool)) {
	C.QGroupBox_connect_clickedWithChecked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_clickedWithChecked
func miqt_exec_callback_QGroupBox_clickedWithChecked(cb C.intptr_t, checked C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

// InitStyleOption can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) InitStyleOption(option *QStyleOptionGroupBox) {

	var _dynamic_cast_ok C.bool = false
	C.QGroupBox_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGroupBox_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QGroupBox_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QGroupBox_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGroupBox_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGroupBox_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGroupBox_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGroupBox_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGroupBox_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGroupBox that was directly constructed.
func (this *QGroupBox) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGroupBox_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGroupBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QGroupBox_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGroupBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGroupBox_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_minimumSizeHint
func miqt_exec_callback_QGroupBox_minimumSizeHint(self *C.QGroupBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGroupBox_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGroupBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGroupBox_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_event
func miqt_exec_callback_QGroupBox_event(self *C.QGroupBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGroupBox_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGroupBox_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_childEvent
func miqt_exec_callback_QGroupBox_childEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QGroupBox_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QGroupBox_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_resizeEvent
func miqt_exec_callback_QGroupBox_resizeEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QGroupBox_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QGroupBox_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_paintEvent
func miqt_exec_callback_QGroupBox_paintEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGroupBox_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGroupBox_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_focusInEvent
func miqt_exec_callback_QGroupBox_focusInEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QGroupBox_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGroupBox_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_changeEvent
func miqt_exec_callback_QGroupBox_changeEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QGroupBox_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGroupBox_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_mousePressEvent
func miqt_exec_callback_QGroupBox_mousePressEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QGroupBox_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGroupBox_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_mouseMoveEvent
func miqt_exec_callback_QGroupBox_mouseMoveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QGroupBox_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGroupBox_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_mouseReleaseEvent
func miqt_exec_callback_QGroupBox_mouseReleaseEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DevType() int {

	return (int)(C.QGroupBox_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QGroupBox) OnDevType(slot func(super func() int) int) {
	ok := C.QGroupBox_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_devType
func miqt_exec_callback_QGroupBox_devType(self *C.QGroupBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_SetVisible(visible bool) {

	C.QGroupBox_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QGroupBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QGroupBox_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_setVisible
func miqt_exec_callback_QGroupBox_setVisible(self *C.QGroupBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QGroupBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QGroupBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QGroupBox_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGroupBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGroupBox_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_sizeHint
func miqt_exec_callback_QGroupBox_sizeHint(self *C.QGroupBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QGroupBox_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGroupBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QGroupBox_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_heightForWidth
func miqt_exec_callback_QGroupBox_heightForWidth(self *C.QGroupBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QGroupBox_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QGroupBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QGroupBox_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_hasHeightForWidth
func miqt_exec_callback_QGroupBox_hasHeightForWidth(self *C.QGroupBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QGroupBox_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QGroupBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QGroupBox_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_paintEngine
func miqt_exec_callback_QGroupBox_paintEngine(self *C.QGroupBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QGroupBox_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGroupBox_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_mouseDoubleClickEvent
func miqt_exec_callback_QGroupBox_mouseDoubleClickEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QGroupBox_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QGroupBox_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_wheelEvent
func miqt_exec_callback_QGroupBox_wheelEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGroupBox_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGroupBox_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_keyPressEvent
func miqt_exec_callback_QGroupBox_keyPressEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGroupBox_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGroupBox_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_keyReleaseEvent
func miqt_exec_callback_QGroupBox_keyReleaseEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGroupBox_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGroupBox_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_focusOutEvent
func miqt_exec_callback_QGroupBox_focusOutEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_EnterEvent(event *QEvent) {

	C.QGroupBox_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGroupBox_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_enterEvent
func miqt_exec_callback_QGroupBox_enterEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QGroupBox_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGroupBox_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_leaveEvent
func miqt_exec_callback_QGroupBox_leaveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QGroupBox_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QGroupBox_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_moveEvent
func miqt_exec_callback_QGroupBox_moveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGroupBox_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QGroupBox_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_closeEvent
func miqt_exec_callback_QGroupBox_closeEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QGroupBox_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QGroupBox_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_contextMenuEvent
func miqt_exec_callback_QGroupBox_contextMenuEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QGroupBox_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QGroupBox_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_tabletEvent
func miqt_exec_callback_QGroupBox_tabletEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QGroupBox_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QGroupBox_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_actionEvent
func miqt_exec_callback_QGroupBox_actionEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QGroupBox_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QGroupBox_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_dragEnterEvent
func miqt_exec_callback_QGroupBox_dragEnterEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QGroupBox_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QGroupBox_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_dragMoveEvent
func miqt_exec_callback_QGroupBox_dragMoveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QGroupBox_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QGroupBox_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_dragLeaveEvent
func miqt_exec_callback_QGroupBox_dragLeaveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QGroupBox_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QGroupBox_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_dropEvent
func miqt_exec_callback_QGroupBox_dropEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGroupBox_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QGroupBox_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_showEvent
func miqt_exec_callback_QGroupBox_showEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGroupBox_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QGroupBox_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_hideEvent
func miqt_exec_callback_QGroupBox_hideEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QGroupBox_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QGroupBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QGroupBox_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_nativeEvent
func miqt_exec_callback_QGroupBox_nativeEvent(self *C.QGroupBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QGroupBox_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGroupBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QGroupBox_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_metric
func miqt_exec_callback_QGroupBox_metric(self *C.QGroupBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QGroupBox_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGroupBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGroupBox_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_initPainter
func miqt_exec_callback_QGroupBox_initPainter(self *C.QGroupBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGroupBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QGroupBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QGroupBox_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QGroupBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QGroupBox_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_redirected
func miqt_exec_callback_QGroupBox_redirected(self *C.QGroupBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QGroupBox_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QGroupBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QGroupBox_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_sharedPainter
func miqt_exec_callback_QGroupBox_sharedPainter(self *C.QGroupBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QGroupBox_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QGroupBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QGroupBox_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_inputMethodEvent
func miqt_exec_callback_QGroupBox_inputMethodEvent(self *C.QGroupBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QGroupBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGroupBox_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGroupBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QGroupBox_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_inputMethodQuery
func miqt_exec_callback_QGroupBox_inputMethodQuery(self *C.QGroupBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGroupBox_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGroupBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGroupBox_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_focusNextPrevChild
func miqt_exec_callback_QGroupBox_focusNextPrevChild(self *C.QGroupBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGroupBox_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGroupBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGroupBox_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_eventFilter
func miqt_exec_callback_QGroupBox_eventFilter(self *C.QGroupBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGroupBox_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGroupBox_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_timerEvent
func miqt_exec_callback_QGroupBox_timerEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGroupBox_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGroupBox_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_customEvent
func miqt_exec_callback_QGroupBox_customEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGroupBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGroupBox_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGroupBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGroupBox_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_connectNotify
func miqt_exec_callback_QGroupBox_connectNotify(self *C.QGroupBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGroupBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGroupBox_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGroupBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGroupBox_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGroupBox_disconnectNotify
func miqt_exec_callback_QGroupBox_disconnectNotify(self *C.QGroupBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGroupBox) Delete() {
	C.QGroupBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGroupBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QGroupBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
