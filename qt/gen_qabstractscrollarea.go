package qt

/*

#include "gen_qabstractscrollarea.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractScrollArea__SizeAdjustPolicy int

const (
	QAbstractScrollArea__AdjustIgnored               QAbstractScrollArea__SizeAdjustPolicy = 0
	QAbstractScrollArea__AdjustToContentsOnFirstShow QAbstractScrollArea__SizeAdjustPolicy = 1
	QAbstractScrollArea__AdjustToContents            QAbstractScrollArea__SizeAdjustPolicy = 2
)

type QAbstractScrollArea struct {
	h *C.QAbstractScrollArea
	*QFrame
}

func (this *QAbstractScrollArea) cPointer() *C.QAbstractScrollArea {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractScrollArea) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractScrollArea constructs the type using only CGO pointers.
func newQAbstractScrollArea(h *C.QAbstractScrollArea) *QAbstractScrollArea {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QAbstractScrollArea_virtbase(h, &outptr_QFrame)

	return &QAbstractScrollArea{h: h,
		QFrame: newQFrame(outptr_QFrame)}
}

// UnsafeNewQAbstractScrollArea constructs the type using only unsafe pointers.
func UnsafeNewQAbstractScrollArea(h unsafe.Pointer) *QAbstractScrollArea {
	return newQAbstractScrollArea((*C.QAbstractScrollArea)(h))
}

// NewQAbstractScrollArea constructs a new QAbstractScrollArea object.
func NewQAbstractScrollArea(parent *QWidget) *QAbstractScrollArea {

	return newQAbstractScrollArea(C.QAbstractScrollArea_new(parent.cPointer()))
}

// NewQAbstractScrollArea2 constructs a new QAbstractScrollArea object.
func NewQAbstractScrollArea2() *QAbstractScrollArea {

	return newQAbstractScrollArea(C.QAbstractScrollArea_new2())
}

func (this *QAbstractScrollArea) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractScrollArea_MetaObject(this.h))
}

func (this *QAbstractScrollArea) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractScrollArea_Metacast(this.h, param1_Cstring))
}

func QAbstractScrollArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractScrollArea_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractScrollArea) VerticalScrollBarPolicy() ScrollBarPolicy {
	return (ScrollBarPolicy)(C.QAbstractScrollArea_VerticalScrollBarPolicy(this.h))
}

func (this *QAbstractScrollArea) SetVerticalScrollBarPolicy(verticalScrollBarPolicy ScrollBarPolicy) {
	C.QAbstractScrollArea_SetVerticalScrollBarPolicy(this.h, (C.int)(verticalScrollBarPolicy))
}

func (this *QAbstractScrollArea) VerticalScrollBar() *QScrollBar {
	return newQScrollBar(C.QAbstractScrollArea_VerticalScrollBar(this.h))
}

func (this *QAbstractScrollArea) SetVerticalScrollBar(scrollbar *QScrollBar) {
	C.QAbstractScrollArea_SetVerticalScrollBar(this.h, scrollbar.cPointer())
}

func (this *QAbstractScrollArea) HorizontalScrollBarPolicy() ScrollBarPolicy {
	return (ScrollBarPolicy)(C.QAbstractScrollArea_HorizontalScrollBarPolicy(this.h))
}

func (this *QAbstractScrollArea) SetHorizontalScrollBarPolicy(horizontalScrollBarPolicy ScrollBarPolicy) {
	C.QAbstractScrollArea_SetHorizontalScrollBarPolicy(this.h, (C.int)(horizontalScrollBarPolicy))
}

func (this *QAbstractScrollArea) HorizontalScrollBar() *QScrollBar {
	return newQScrollBar(C.QAbstractScrollArea_HorizontalScrollBar(this.h))
}

func (this *QAbstractScrollArea) SetHorizontalScrollBar(scrollbar *QScrollBar) {
	C.QAbstractScrollArea_SetHorizontalScrollBar(this.h, scrollbar.cPointer())
}

func (this *QAbstractScrollArea) CornerWidget() *QWidget {
	return newQWidget(C.QAbstractScrollArea_CornerWidget(this.h))
}

func (this *QAbstractScrollArea) SetCornerWidget(widget *QWidget) {
	C.QAbstractScrollArea_SetCornerWidget(this.h, widget.cPointer())
}

func (this *QAbstractScrollArea) AddScrollBarWidget(widget *QWidget, alignment AlignmentFlag) {
	C.QAbstractScrollArea_AddScrollBarWidget(this.h, widget.cPointer(), (C.int)(alignment))
}

func (this *QAbstractScrollArea) ScrollBarWidgets(alignment AlignmentFlag) []*QWidget {
	var _ma C.struct_miqt_array = C.QAbstractScrollArea_ScrollBarWidgets(this.h, (C.int)(alignment))
	_ret := make([]*QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWidget(_outCast[i])
	}
	return _ret
}

func (this *QAbstractScrollArea) Viewport() *QWidget {
	return newQWidget(C.QAbstractScrollArea_Viewport(this.h))
}

func (this *QAbstractScrollArea) SetViewport(widget *QWidget) {
	C.QAbstractScrollArea_SetViewport(this.h, widget.cPointer())
}

func (this *QAbstractScrollArea) MaximumViewportSize() *QSize {
	_goptr := newQSize(C.QAbstractScrollArea_MaximumViewportSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractScrollArea) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QAbstractScrollArea_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractScrollArea) SizeHint() *QSize {
	_goptr := newQSize(C.QAbstractScrollArea_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractScrollArea) SetupViewport(viewport *QWidget) {
	C.QAbstractScrollArea_SetupViewport(this.h, viewport.cPointer())
}

func (this *QAbstractScrollArea) SizeAdjustPolicy() QAbstractScrollArea__SizeAdjustPolicy {
	return (QAbstractScrollArea__SizeAdjustPolicy)(C.QAbstractScrollArea_SizeAdjustPolicy(this.h))
}

func (this *QAbstractScrollArea) SetSizeAdjustPolicy(policy QAbstractScrollArea__SizeAdjustPolicy) {
	C.QAbstractScrollArea_SetSizeAdjustPolicy(this.h, (C.int)(policy))
}

func QAbstractScrollArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractScrollArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractScrollArea_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractScrollArea_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractScrollArea) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QAbstractScrollArea_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractScrollArea) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractScrollArea_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_MinimumSizeHint
func miqt_exec_callback_QAbstractScrollArea_MinimumSizeHint(self *C.QAbstractScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractScrollArea) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QAbstractScrollArea_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractScrollArea) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractScrollArea_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_SizeHint
func miqt_exec_callback_QAbstractScrollArea_SizeHint(self *C.QAbstractScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractScrollArea) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QAbstractScrollArea_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QAbstractScrollArea) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QAbstractScrollArea_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_SetupViewport
func miqt_exec_callback_QAbstractScrollArea_SetupViewport(self *C.QAbstractScrollArea, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QAbstractScrollArea_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QAbstractScrollArea) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QAbstractScrollArea_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_EventFilter
func miqt_exec_callback_QAbstractScrollArea_EventFilter(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QAbstractScrollArea_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QAbstractScrollArea) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QAbstractScrollArea_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_Event
func miqt_exec_callback_QAbstractScrollArea_Event(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_ViewportEvent(param1 *QEvent) bool {

	return (bool)(C.QAbstractScrollArea_virtualbase_ViewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QAbstractScrollArea) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QAbstractScrollArea_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ViewportEvent
func miqt_exec_callback_QAbstractScrollArea_ViewportEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QAbstractScrollArea_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ResizeEvent
func miqt_exec_callback_QAbstractScrollArea_ResizeEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QAbstractScrollArea_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_PaintEvent
func miqt_exec_callback_QAbstractScrollArea_PaintEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QAbstractScrollArea_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_MousePressEvent
func miqt_exec_callback_QAbstractScrollArea_MousePressEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QAbstractScrollArea_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_MouseReleaseEvent
func miqt_exec_callback_QAbstractScrollArea_MouseReleaseEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QAbstractScrollArea_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_MouseDoubleClickEvent
func miqt_exec_callback_QAbstractScrollArea_MouseDoubleClickEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QAbstractScrollArea_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_MouseMoveEvent
func miqt_exec_callback_QAbstractScrollArea_MouseMoveEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QAbstractScrollArea_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_WheelEvent
func miqt_exec_callback_QAbstractScrollArea_WheelEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QAbstractScrollArea_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ContextMenuEvent
func miqt_exec_callback_QAbstractScrollArea_ContextMenuEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QAbstractScrollArea_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_DragEnterEvent
func miqt_exec_callback_QAbstractScrollArea_DragEnterEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DragMoveEvent(param1 *QDragMoveEvent) {

	C.QAbstractScrollArea_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnDragMoveEvent(slot func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_DragMoveEvent
func miqt_exec_callback_QAbstractScrollArea_DragMoveEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DragLeaveEvent(param1 *QDragLeaveEvent) {

	C.QAbstractScrollArea_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnDragLeaveEvent(slot func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_DragLeaveEvent
func miqt_exec_callback_QAbstractScrollArea_DragLeaveEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QAbstractScrollArea_virtualbase_DropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_DropEvent
func miqt_exec_callback_QAbstractScrollArea_DropEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QAbstractScrollArea_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_KeyPressEvent
func miqt_exec_callback_QAbstractScrollArea_KeyPressEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QAbstractScrollArea_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QAbstractScrollArea) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QAbstractScrollArea_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ScrollContentsBy
func miqt_exec_callback_QAbstractScrollArea_ScrollContentsBy(self *C.QAbstractScrollArea, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QAbstractScrollArea) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QAbstractScrollArea_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractScrollArea) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractScrollArea_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ViewportSizeHint
func miqt_exec_callback_QAbstractScrollArea_ViewportSizeHint(self *C.QAbstractScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractScrollArea) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QAbstractScrollArea_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ChangeEvent
func miqt_exec_callback_QAbstractScrollArea_ChangeEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DevType() int {

	return (int)(C.QAbstractScrollArea_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QAbstractScrollArea) OnDevType(slot func(super func() int) int) {
	ok := C.QAbstractScrollArea_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_DevType
func miqt_exec_callback_QAbstractScrollArea_DevType(self *C.QAbstractScrollArea, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractScrollArea_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractScrollArea) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QAbstractScrollArea_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_SetVisible
func miqt_exec_callback_QAbstractScrollArea_SetVisible(self *C.QAbstractScrollArea, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractScrollArea_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractScrollArea) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QAbstractScrollArea_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_HeightForWidth
func miqt_exec_callback_QAbstractScrollArea_HeightForWidth(self *C.QAbstractScrollArea, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QAbstractScrollArea_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractScrollArea) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QAbstractScrollArea_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_HasHeightForWidth
func miqt_exec_callback_QAbstractScrollArea_HasHeightForWidth(self *C.QAbstractScrollArea, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QAbstractScrollArea_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QAbstractScrollArea) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QAbstractScrollArea_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_PaintEngine
func miqt_exec_callback_QAbstractScrollArea_PaintEngine(self *C.QAbstractScrollArea, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QAbstractScrollArea) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QAbstractScrollArea_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_KeyReleaseEvent
func miqt_exec_callback_QAbstractScrollArea_KeyReleaseEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QAbstractScrollArea_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_FocusInEvent
func miqt_exec_callback_QAbstractScrollArea_FocusInEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QAbstractScrollArea_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_FocusOutEvent
func miqt_exec_callback_QAbstractScrollArea_FocusOutEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_EnterEvent(event *QEvent) {

	C.QAbstractScrollArea_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_EnterEvent
func miqt_exec_callback_QAbstractScrollArea_EnterEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QAbstractScrollArea_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_LeaveEvent
func miqt_exec_callback_QAbstractScrollArea_LeaveEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QAbstractScrollArea_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_MoveEvent
func miqt_exec_callback_QAbstractScrollArea_MoveEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QAbstractScrollArea_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_CloseEvent
func miqt_exec_callback_QAbstractScrollArea_CloseEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QAbstractScrollArea_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_TabletEvent
func miqt_exec_callback_QAbstractScrollArea_TabletEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QAbstractScrollArea_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ActionEvent
func miqt_exec_callback_QAbstractScrollArea_ActionEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QAbstractScrollArea_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ShowEvent
func miqt_exec_callback_QAbstractScrollArea_ShowEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QAbstractScrollArea_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_HideEvent
func miqt_exec_callback_QAbstractScrollArea_HideEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractScrollArea_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QAbstractScrollArea) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QAbstractScrollArea_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_NativeEvent
func miqt_exec_callback_QAbstractScrollArea_NativeEvent(self *C.QAbstractScrollArea, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QAbstractScrollArea_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractScrollArea) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QAbstractScrollArea_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_Metric
func miqt_exec_callback_QAbstractScrollArea_Metric(self *C.QAbstractScrollArea, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_InitPainter(painter *QPainter) {

	C.QAbstractScrollArea_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QAbstractScrollArea) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QAbstractScrollArea_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_InitPainter
func miqt_exec_callback_QAbstractScrollArea_InitPainter(self *C.QAbstractScrollArea, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QAbstractScrollArea_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QAbstractScrollArea) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QAbstractScrollArea_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_Redirected
func miqt_exec_callback_QAbstractScrollArea_Redirected(self *C.QAbstractScrollArea, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractScrollArea) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QAbstractScrollArea_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QAbstractScrollArea) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QAbstractScrollArea_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_SharedPainter
func miqt_exec_callback_QAbstractScrollArea_SharedPainter(self *C.QAbstractScrollArea, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QAbstractScrollArea) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QAbstractScrollArea_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_InputMethodEvent
func miqt_exec_callback_QAbstractScrollArea_InputMethodEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QAbstractScrollArea_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractScrollArea) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QAbstractScrollArea_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_InputMethodQuery
func miqt_exec_callback_QAbstractScrollArea_InputMethodQuery(self *C.QAbstractScrollArea, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractScrollArea) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractScrollArea_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractScrollArea) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QAbstractScrollArea_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_FocusNextPrevChild
func miqt_exec_callback_QAbstractScrollArea_FocusNextPrevChild(self *C.QAbstractScrollArea, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractScrollArea_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_TimerEvent
func miqt_exec_callback_QAbstractScrollArea_TimerEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractScrollArea_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ChildEvent
func miqt_exec_callback_QAbstractScrollArea_ChildEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractScrollArea_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractScrollArea) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractScrollArea_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_CustomEvent
func miqt_exec_callback_QAbstractScrollArea_CustomEvent(self *C.QAbstractScrollArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractScrollArea_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractScrollArea) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractScrollArea_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_ConnectNotify
func miqt_exec_callback_QAbstractScrollArea_ConnectNotify(self *C.QAbstractScrollArea, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractScrollArea_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractScrollArea) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractScrollArea_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractScrollArea_DisconnectNotify
func miqt_exec_callback_QAbstractScrollArea_DisconnectNotify(self *C.QAbstractScrollArea, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractScrollArea) Delete() {
	C.QAbstractScrollArea_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractScrollArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractScrollArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
