package qt6

/*

#include "gen_qprogressbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QProgressBar__Direction int

const (
	QProgressBar__TopToBottom QProgressBar__Direction = 0
	QProgressBar__BottomToTop QProgressBar__Direction = 1
)

type QProgressBar struct {
	h *C.QProgressBar
	*QWidget
}

func (this *QProgressBar) cPointer() *C.QProgressBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QProgressBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQProgressBar constructs the type using only CGO pointers.
func newQProgressBar(h *C.QProgressBar) *QProgressBar {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QProgressBar_virtbase(h, &outptr_QWidget)

	return &QProgressBar{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQProgressBar constructs the type using only unsafe pointers.
func UnsafeNewQProgressBar(h unsafe.Pointer) *QProgressBar {
	return newQProgressBar((*C.QProgressBar)(h))
}

// NewQProgressBar constructs a new QProgressBar object.
func NewQProgressBar(parent *QWidget) *QProgressBar {

	return newQProgressBar(C.QProgressBar_new(parent.cPointer()))
}

// NewQProgressBar2 constructs a new QProgressBar object.
func NewQProgressBar2() *QProgressBar {

	return newQProgressBar(C.QProgressBar_new2())
}

func (this *QProgressBar) MetaObject() *QMetaObject {
	return newQMetaObject(C.QProgressBar_metaObject(this.h))
}

func (this *QProgressBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QProgressBar_metacast(this.h, param1_Cstring))
}

func QProgressBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProgressBar_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressBar) Minimum() int {
	return (int)(C.QProgressBar_minimum(this.h))
}

func (this *QProgressBar) Maximum() int {
	return (int)(C.QProgressBar_maximum(this.h))
}

func (this *QProgressBar) Value() int {
	return (int)(C.QProgressBar_value(this.h))
}

func (this *QProgressBar) Text() string {
	var _ms C.struct_miqt_string = C.QProgressBar_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressBar) SetTextVisible(visible bool) {
	C.QProgressBar_setTextVisible(this.h, (C.bool)(visible))
}

func (this *QProgressBar) IsTextVisible() bool {
	return (bool)(C.QProgressBar_isTextVisible(this.h))
}

func (this *QProgressBar) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QProgressBar_alignment(this.h))
}

func (this *QProgressBar) SetAlignment(alignment AlignmentFlag) {
	C.QProgressBar_setAlignment(this.h, (C.int)(alignment))
}

func (this *QProgressBar) SizeHint() *QSize {
	_goptr := newQSize(C.QProgressBar_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProgressBar) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QProgressBar_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProgressBar) Orientation() Orientation {
	return (Orientation)(C.QProgressBar_orientation(this.h))
}

func (this *QProgressBar) SetInvertedAppearance(invert bool) {
	C.QProgressBar_setInvertedAppearance(this.h, (C.bool)(invert))
}

func (this *QProgressBar) InvertedAppearance() bool {
	return (bool)(C.QProgressBar_invertedAppearance(this.h))
}

func (this *QProgressBar) SetTextDirection(textDirection QProgressBar__Direction) {
	C.QProgressBar_setTextDirection(this.h, (C.int)(textDirection))
}

func (this *QProgressBar) TextDirection() QProgressBar__Direction {
	return (QProgressBar__Direction)(C.QProgressBar_textDirection(this.h))
}

func (this *QProgressBar) SetFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QProgressBar_setFormat(this.h, format_ms)
}

func (this *QProgressBar) ResetFormat() {
	C.QProgressBar_resetFormat(this.h)
}

func (this *QProgressBar) Format() string {
	var _ms C.struct_miqt_string = C.QProgressBar_format(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressBar) Reset() {
	C.QProgressBar_reset(this.h)
}

func (this *QProgressBar) SetRange(minimum int, maximum int) {
	C.QProgressBar_setRange(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QProgressBar) SetMinimum(minimum int) {
	C.QProgressBar_setMinimum(this.h, (C.int)(minimum))
}

func (this *QProgressBar) SetMaximum(maximum int) {
	C.QProgressBar_setMaximum(this.h, (C.int)(maximum))
}

func (this *QProgressBar) SetValue(value int) {
	C.QProgressBar_setValue(this.h, (C.int)(value))
}

func (this *QProgressBar) SetOrientation(orientation Orientation) {
	C.QProgressBar_setOrientation(this.h, (C.int)(orientation))
}

func (this *QProgressBar) ValueChanged(value int) {
	C.QProgressBar_valueChanged(this.h, (C.int)(value))
}
func (this *QProgressBar) OnValueChanged(slot func(value int)) {
	C.QProgressBar_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProgressBar_valueChanged
func miqt_exec_callback_QProgressBar_valueChanged(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func QProgressBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressBar_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProgressBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressBar_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressBar) callVirtualBase_Text() string {

	var _ms C.struct_miqt_string = C.QProgressBar_virtualbase_text(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QProgressBar) OnText(slot func(super func() string) string) {
	ok := C.QProgressBar_override_virtual_text(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_text
func miqt_exec_callback_QProgressBar_text(self *C.QProgressBar, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_Text)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QProgressBar) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QProgressBar_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QProgressBar_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_sizeHint
func miqt_exec_callback_QProgressBar_sizeHint(self *C.QProgressBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QProgressBar) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QProgressBar_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressBar) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QProgressBar_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_minimumSizeHint
func miqt_exec_callback_QProgressBar_minimumSizeHint(self *C.QProgressBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QProgressBar) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QProgressBar_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QProgressBar) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QProgressBar_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_event
func miqt_exec_callback_QProgressBar_event(self *C.QProgressBar, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProgressBar) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QProgressBar_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressBar) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QProgressBar_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_paintEvent
func miqt_exec_callback_QProgressBar_paintEvent(self *C.QProgressBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QProgressBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_InitStyleOption(option *QStyleOptionProgressBar) {

	C.QProgressBar_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QProgressBar) OnInitStyleOption(slot func(super func(option *QStyleOptionProgressBar), option *QStyleOptionProgressBar)) {
	ok := C.QProgressBar_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_initStyleOption
func miqt_exec_callback_QProgressBar_initStyleOption(self *C.QProgressBar, cb C.intptr_t, option *C.QStyleOptionProgressBar) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionProgressBar), option *QStyleOptionProgressBar))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionProgressBar(option)

	gofunc((&QProgressBar{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QProgressBar) callVirtualBase_DevType() int {

	return (int)(C.QProgressBar_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QProgressBar) OnDevType(slot func(super func() int) int) {
	ok := C.QProgressBar_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_devType
func miqt_exec_callback_QProgressBar_devType(self *C.QProgressBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QProgressBar) callVirtualBase_SetVisible(visible bool) {

	C.QProgressBar_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QProgressBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QProgressBar_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_setVisible
func miqt_exec_callback_QProgressBar_setVisible(self *C.QProgressBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QProgressBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QProgressBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QProgressBar_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QProgressBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QProgressBar_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_heightForWidth
func miqt_exec_callback_QProgressBar_heightForWidth(self *C.QProgressBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QProgressBar) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QProgressBar_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QProgressBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QProgressBar_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_hasHeightForWidth
func miqt_exec_callback_QProgressBar_hasHeightForWidth(self *C.QProgressBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QProgressBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QProgressBar_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QProgressBar) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QProgressBar_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_paintEngine
func miqt_exec_callback_QProgressBar_paintEngine(self *C.QProgressBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QProgressBar) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QProgressBar_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressBar_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_mousePressEvent
func miqt_exec_callback_QProgressBar_mousePressEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QProgressBar_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressBar_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_mouseReleaseEvent
func miqt_exec_callback_QProgressBar_mouseReleaseEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QProgressBar_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressBar_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_mouseDoubleClickEvent
func miqt_exec_callback_QProgressBar_mouseDoubleClickEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QProgressBar_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QProgressBar_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_mouseMoveEvent
func miqt_exec_callback_QProgressBar_mouseMoveEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QProgressBar_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QProgressBar_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_wheelEvent
func miqt_exec_callback_QProgressBar_wheelEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QProgressBar_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QProgressBar_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_keyPressEvent
func miqt_exec_callback_QProgressBar_keyPressEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QProgressBar_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QProgressBar_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_keyReleaseEvent
func miqt_exec_callback_QProgressBar_keyReleaseEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QProgressBar_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QProgressBar_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_focusInEvent
func miqt_exec_callback_QProgressBar_focusInEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QProgressBar_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QProgressBar_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_focusOutEvent
func miqt_exec_callback_QProgressBar_focusOutEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QProgressBar_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QProgressBar_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_enterEvent
func miqt_exec_callback_QProgressBar_enterEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QProgressBar_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressBar_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_leaveEvent
func miqt_exec_callback_QProgressBar_leaveEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QProgressBar_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QProgressBar_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_moveEvent
func miqt_exec_callback_QProgressBar_moveEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QProgressBar_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QProgressBar_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_resizeEvent
func miqt_exec_callback_QProgressBar_resizeEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QProgressBar_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QProgressBar_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_closeEvent
func miqt_exec_callback_QProgressBar_closeEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QProgressBar_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QProgressBar_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_contextMenuEvent
func miqt_exec_callback_QProgressBar_contextMenuEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QProgressBar_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QProgressBar_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_tabletEvent
func miqt_exec_callback_QProgressBar_tabletEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QProgressBar_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QProgressBar_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_actionEvent
func miqt_exec_callback_QProgressBar_actionEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QProgressBar_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QProgressBar_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_dragEnterEvent
func miqt_exec_callback_QProgressBar_dragEnterEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QProgressBar_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QProgressBar_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_dragMoveEvent
func miqt_exec_callback_QProgressBar_dragMoveEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QProgressBar_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QProgressBar_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_dragLeaveEvent
func miqt_exec_callback_QProgressBar_dragLeaveEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QProgressBar_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QProgressBar_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_dropEvent
func miqt_exec_callback_QProgressBar_dropEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QProgressBar_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QProgressBar_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_showEvent
func miqt_exec_callback_QProgressBar_showEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QProgressBar_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QProgressBar_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_hideEvent
func miqt_exec_callback_QProgressBar_hideEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QProgressBar_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QProgressBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QProgressBar_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_nativeEvent
func miqt_exec_callback_QProgressBar_nativeEvent(self *C.QProgressBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QProgressBar) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QProgressBar_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressBar) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QProgressBar_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_changeEvent
func miqt_exec_callback_QProgressBar_changeEvent(self *C.QProgressBar, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QProgressBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QProgressBar_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QProgressBar) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QProgressBar_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_metric
func miqt_exec_callback_QProgressBar_metric(self *C.QProgressBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QProgressBar) callVirtualBase_InitPainter(painter *QPainter) {

	C.QProgressBar_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QProgressBar) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QProgressBar_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_initPainter
func miqt_exec_callback_QProgressBar_initPainter(self *C.QProgressBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QProgressBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QProgressBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QProgressBar_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QProgressBar) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QProgressBar_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_redirected
func miqt_exec_callback_QProgressBar_redirected(self *C.QProgressBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QProgressBar) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QProgressBar_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QProgressBar) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QProgressBar_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_sharedPainter
func miqt_exec_callback_QProgressBar_sharedPainter(self *C.QProgressBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QProgressBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QProgressBar_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QProgressBar) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QProgressBar_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_inputMethodEvent
func miqt_exec_callback_QProgressBar_inputMethodEvent(self *C.QProgressBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QProgressBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QProgressBar_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QProgressBar) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QProgressBar_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_inputMethodQuery
func miqt_exec_callback_QProgressBar_inputMethodQuery(self *C.QProgressBar, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QProgressBar) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QProgressBar_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QProgressBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QProgressBar_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_focusNextPrevChild
func miqt_exec_callback_QProgressBar_focusNextPrevChild(self *C.QProgressBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProgressBar) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QProgressBar_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QProgressBar) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QProgressBar_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_eventFilter
func miqt_exec_callback_QProgressBar_eventFilter(self *C.QProgressBar, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QProgressBar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QProgressBar) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QProgressBar_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QProgressBar_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_timerEvent
func miqt_exec_callback_QProgressBar_timerEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QProgressBar_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QProgressBar_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_childEvent
func miqt_exec_callback_QProgressBar_childEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_CustomEvent(event *QEvent) {

	C.QProgressBar_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProgressBar) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProgressBar_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_customEvent
func miqt_exec_callback_QProgressBar_customEvent(self *C.QProgressBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProgressBar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QProgressBar) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QProgressBar_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QProgressBar) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QProgressBar_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_connectNotify
func miqt_exec_callback_QProgressBar_connectNotify(self *C.QProgressBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QProgressBar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QProgressBar) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QProgressBar_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QProgressBar) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QProgressBar_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProgressBar_disconnectNotify
func miqt_exec_callback_QProgressBar_disconnectNotify(self *C.QProgressBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QProgressBar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QProgressBar) Delete() {
	C.QProgressBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProgressBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QProgressBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
