package qt

/*

#include "gen_qscrollarea.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScrollArea struct {
	h *C.QScrollArea
	*QAbstractScrollArea
}

func (this *QScrollArea) cPointer() *C.QScrollArea {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScrollArea) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScrollArea constructs the type using only CGO pointers.
func newQScrollArea(h *C.QScrollArea) *QScrollArea {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QScrollArea_virtbase(h, &outptr_QAbstractScrollArea)

	return &QScrollArea{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(outptr_QAbstractScrollArea)}
}

// UnsafeNewQScrollArea constructs the type using only unsafe pointers.
func UnsafeNewQScrollArea(h unsafe.Pointer) *QScrollArea {
	return newQScrollArea((*C.QScrollArea)(h))
}

// NewQScrollArea constructs a new QScrollArea object.
func NewQScrollArea(parent *QWidget) *QScrollArea {

	return newQScrollArea(C.QScrollArea_new(parent.cPointer()))
}

// NewQScrollArea2 constructs a new QScrollArea object.
func NewQScrollArea2() *QScrollArea {

	return newQScrollArea(C.QScrollArea_new2())
}

func (this *QScrollArea) MetaObject() *QMetaObject {
	return newQMetaObject(C.QScrollArea_metaObject(this.h))
}

func (this *QScrollArea) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScrollArea_metacast(this.h, param1_Cstring))
}

func QScrollArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollArea_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollArea) Widget() *QWidget {
	return newQWidget(C.QScrollArea_widget(this.h))
}

func (this *QScrollArea) SetWidget(widget *QWidget) {
	C.QScrollArea_setWidget(this.h, widget.cPointer())
}

func (this *QScrollArea) TakeWidget() *QWidget {
	return newQWidget(C.QScrollArea_takeWidget(this.h))
}

func (this *QScrollArea) WidgetResizable() bool {
	return (bool)(C.QScrollArea_widgetResizable(this.h))
}

func (this *QScrollArea) SetWidgetResizable(resizable bool) {
	C.QScrollArea_setWidgetResizable(this.h, (C.bool)(resizable))
}

func (this *QScrollArea) SizeHint() *QSize {
	_goptr := newQSize(C.QScrollArea_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollArea) FocusNextPrevChild(next bool) bool {
	return (bool)(C.QScrollArea_focusNextPrevChild(this.h, (C.bool)(next)))
}

func (this *QScrollArea) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QScrollArea_alignment(this.h))
}

func (this *QScrollArea) SetAlignment(alignment AlignmentFlag) {
	C.QScrollArea_setAlignment(this.h, (C.int)(alignment))
}

func (this *QScrollArea) EnsureVisible(x int, y int) {
	C.QScrollArea_ensureVisible(this.h, (C.int)(x), (C.int)(y))
}

func (this *QScrollArea) EnsureWidgetVisible(childWidget *QWidget) {
	C.QScrollArea_ensureWidgetVisible(this.h, childWidget.cPointer())
}

func QScrollArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollArea_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollArea_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollArea) EnsureVisible3(x int, y int, xmargin int) {
	C.QScrollArea_ensureVisible3(this.h, (C.int)(x), (C.int)(y), (C.int)(xmargin))
}

func (this *QScrollArea) EnsureVisible4(x int, y int, xmargin int, ymargin int) {
	C.QScrollArea_ensureVisible4(this.h, (C.int)(x), (C.int)(y), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QScrollArea) EnsureWidgetVisible2(childWidget *QWidget, xmargin int) {
	C.QScrollArea_ensureWidgetVisible2(this.h, childWidget.cPointer(), (C.int)(xmargin))
}

func (this *QScrollArea) EnsureWidgetVisible3(childWidget *QWidget, xmargin int, ymargin int) {
	C.QScrollArea_ensureWidgetVisible3(this.h, childWidget.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QScrollArea) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QScrollArea_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollArea) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QScrollArea_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_sizeHint
func miqt_exec_callback_QScrollArea_sizeHint(self *C.QScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QScrollArea_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QScrollArea) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QScrollArea_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_focusNextPrevChild
func miqt_exec_callback_QScrollArea_focusNextPrevChild(self *C.QScrollArea, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QScrollArea_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QScrollArea) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QScrollArea_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_event
func miqt_exec_callback_QScrollArea_event(self *C.QScrollArea, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QScrollArea_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QScrollArea) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QScrollArea_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_eventFilter
func miqt_exec_callback_QScrollArea_eventFilter(self *C.QScrollArea, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QScrollArea_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QScrollArea_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_resizeEvent
func miqt_exec_callback_QScrollArea_resizeEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QScrollArea_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QScrollArea) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QScrollArea_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_scrollContentsBy
func miqt_exec_callback_QScrollArea_scrollContentsBy(self *C.QScrollArea, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QScrollArea) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QScrollArea_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollArea) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QScrollArea_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_viewportSizeHint
func miqt_exec_callback_QScrollArea_viewportSizeHint(self *C.QScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QScrollArea_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollArea) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QScrollArea_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_minimumSizeHint
func miqt_exec_callback_QScrollArea_minimumSizeHint(self *C.QScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QScrollArea_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QScrollArea) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QScrollArea_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_setupViewport
func miqt_exec_callback_QScrollArea_setupViewport(self *C.QScrollArea, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QScrollArea{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QScrollArea) callVirtualBase_ViewportEvent(param1 *QEvent) bool {

	return (bool)(C.QScrollArea_virtualbase_viewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QScrollArea) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QScrollArea_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_viewportEvent
func miqt_exec_callback_QScrollArea_viewportEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QScrollArea_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QScrollArea_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_paintEvent
func miqt_exec_callback_QScrollArea_paintEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QScrollArea_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QScrollArea_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_mousePressEvent
func miqt_exec_callback_QScrollArea_mousePressEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QScrollArea_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QScrollArea_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_mouseReleaseEvent
func miqt_exec_callback_QScrollArea_mouseReleaseEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QScrollArea_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QScrollArea_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_mouseDoubleClickEvent
func miqt_exec_callback_QScrollArea_mouseDoubleClickEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QScrollArea_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QScrollArea_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_mouseMoveEvent
func miqt_exec_callback_QScrollArea_mouseMoveEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QScrollArea_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QScrollArea_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_wheelEvent
func miqt_exec_callback_QScrollArea_wheelEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QScrollArea_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QScrollArea_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_contextMenuEvent
func miqt_exec_callback_QScrollArea_contextMenuEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QScrollArea_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	ok := C.QScrollArea_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_dragEnterEvent
func miqt_exec_callback_QScrollArea_dragEnterEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DragMoveEvent(param1 *QDragMoveEvent) {

	C.QScrollArea_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnDragMoveEvent(slot func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent)) {
	ok := C.QScrollArea_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_dragMoveEvent
func miqt_exec_callback_QScrollArea_dragMoveEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DragLeaveEvent(param1 *QDragLeaveEvent) {

	C.QScrollArea_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnDragLeaveEvent(slot func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent)) {
	ok := C.QScrollArea_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_dragLeaveEvent
func miqt_exec_callback_QScrollArea_dragLeaveEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QScrollArea_virtualbase_dropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	ok := C.QScrollArea_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_dropEvent
func miqt_exec_callback_QScrollArea_dropEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QScrollArea_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QScrollArea_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_keyPressEvent
func miqt_exec_callback_QScrollArea_keyPressEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QScrollArea_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QScrollArea_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_changeEvent
func miqt_exec_callback_QScrollArea_changeEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DevType() int {

	return (int)(C.QScrollArea_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QScrollArea) OnDevType(slot func(super func() int) int) {
	ok := C.QScrollArea_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_devType
func miqt_exec_callback_QScrollArea_devType(self *C.QScrollArea, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_SetVisible(visible bool) {

	C.QScrollArea_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QScrollArea) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QScrollArea_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_setVisible
func miqt_exec_callback_QScrollArea_setVisible(self *C.QScrollArea, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QScrollArea{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QScrollArea) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QScrollArea_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QScrollArea) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QScrollArea_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_heightForWidth
func miqt_exec_callback_QScrollArea_heightForWidth(self *C.QScrollArea, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QScrollArea_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QScrollArea) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QScrollArea_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_hasHeightForWidth
func miqt_exec_callback_QScrollArea_hasHeightForWidth(self *C.QScrollArea, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QScrollArea_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QScrollArea) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QScrollArea_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_paintEngine
func miqt_exec_callback_QScrollArea_paintEngine(self *C.QScrollArea, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QScrollArea_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QScrollArea_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_keyReleaseEvent
func miqt_exec_callback_QScrollArea_keyReleaseEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QScrollArea_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QScrollArea_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_focusInEvent
func miqt_exec_callback_QScrollArea_focusInEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QScrollArea_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QScrollArea_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_focusOutEvent
func miqt_exec_callback_QScrollArea_focusOutEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_EnterEvent(event *QEvent) {

	C.QScrollArea_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QScrollArea_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_enterEvent
func miqt_exec_callback_QScrollArea_enterEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QScrollArea_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QScrollArea_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_leaveEvent
func miqt_exec_callback_QScrollArea_leaveEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QScrollArea_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QScrollArea_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_moveEvent
func miqt_exec_callback_QScrollArea_moveEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QScrollArea_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QScrollArea_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_closeEvent
func miqt_exec_callback_QScrollArea_closeEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QScrollArea_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QScrollArea_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_tabletEvent
func miqt_exec_callback_QScrollArea_tabletEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QScrollArea_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QScrollArea_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_actionEvent
func miqt_exec_callback_QScrollArea_actionEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QScrollArea_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QScrollArea_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_showEvent
func miqt_exec_callback_QScrollArea_showEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QScrollArea_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QScrollArea_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_hideEvent
func miqt_exec_callback_QScrollArea_hideEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QScrollArea_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QScrollArea) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QScrollArea_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_nativeEvent
func miqt_exec_callback_QScrollArea_nativeEvent(self *C.QScrollArea, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QScrollArea_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QScrollArea) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QScrollArea_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_metric
func miqt_exec_callback_QScrollArea_metric(self *C.QScrollArea, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_InitPainter(painter *QPainter) {

	C.QScrollArea_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QScrollArea) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QScrollArea_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_initPainter
func miqt_exec_callback_QScrollArea_initPainter(self *C.QScrollArea, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QScrollArea{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QScrollArea) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QScrollArea_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QScrollArea) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QScrollArea_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_redirected
func miqt_exec_callback_QScrollArea_redirected(self *C.QScrollArea, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QScrollArea_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QScrollArea) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QScrollArea_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_sharedPainter
func miqt_exec_callback_QScrollArea_sharedPainter(self *C.QScrollArea, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QScrollArea_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QScrollArea_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_inputMethodEvent
func miqt_exec_callback_QScrollArea_inputMethodEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QScrollArea{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QScrollArea_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollArea) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QScrollArea_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_inputMethodQuery
func miqt_exec_callback_QScrollArea_inputMethodQuery(self *C.QScrollArea, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QScrollArea_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QScrollArea_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_timerEvent
func miqt_exec_callback_QScrollArea_timerEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QScrollArea_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QScrollArea_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_childEvent
func miqt_exec_callback_QScrollArea_childEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_CustomEvent(event *QEvent) {

	C.QScrollArea_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollArea) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QScrollArea_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_customEvent
func miqt_exec_callback_QScrollArea_customEvent(self *C.QScrollArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QScrollArea{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QScrollArea_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QScrollArea) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QScrollArea_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_connectNotify
func miqt_exec_callback_QScrollArea_connectNotify(self *C.QScrollArea, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScrollArea) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QScrollArea_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QScrollArea) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QScrollArea_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollArea_disconnectNotify
func miqt_exec_callback_QScrollArea_disconnectNotify(self *C.QScrollArea, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScrollArea) Delete() {
	C.QScrollArea_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
