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
	h          *C.QScrollArea
	isSubclass bool
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
func newQScrollArea(h *C.QScrollArea, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QScrollArea {
	if h == nil {
		return nil
	}
	return &QScrollArea{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQScrollArea constructs the type using only unsafe pointers.
func UnsafeNewQScrollArea(h unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QScrollArea {
	if h == nil {
		return nil
	}

	return &QScrollArea{h: (*C.QScrollArea)(h),
		QAbstractScrollArea: UnsafeNewQAbstractScrollArea(h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQScrollArea constructs a new QScrollArea object.
func NewQScrollArea(parent *QWidget) *QScrollArea {
	var outptr_QScrollArea *C.QScrollArea = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QScrollArea_new(parent.cPointer(), &outptr_QScrollArea, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQScrollArea(outptr_QScrollArea, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQScrollArea2 constructs a new QScrollArea object.
func NewQScrollArea2() *QScrollArea {
	var outptr_QScrollArea *C.QScrollArea = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QScrollArea_new2(&outptr_QScrollArea, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQScrollArea(outptr_QScrollArea, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QScrollArea) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QScrollArea_MetaObject(this.h)))
}

func (this *QScrollArea) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScrollArea_Metacast(this.h, param1_Cstring))
}

func QScrollArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollArea_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollArea) Widget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QScrollArea_Widget(this.h)), nil, nil)
}

func (this *QScrollArea) SetWidget(widget *QWidget) {
	C.QScrollArea_SetWidget(this.h, widget.cPointer())
}

func (this *QScrollArea) TakeWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QScrollArea_TakeWidget(this.h)), nil, nil)
}

func (this *QScrollArea) WidgetResizable() bool {
	return (bool)(C.QScrollArea_WidgetResizable(this.h))
}

func (this *QScrollArea) SetWidgetResizable(resizable bool) {
	C.QScrollArea_SetWidgetResizable(this.h, (C.bool)(resizable))
}

func (this *QScrollArea) SizeHint() *QSize {
	_ret := C.QScrollArea_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollArea) FocusNextPrevChild(next bool) bool {
	return (bool)(C.QScrollArea_FocusNextPrevChild(this.h, (C.bool)(next)))
}

func (this *QScrollArea) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QScrollArea_Alignment(this.h))
}

func (this *QScrollArea) SetAlignment(alignment AlignmentFlag) {
	C.QScrollArea_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QScrollArea) EnsureVisible(x int, y int) {
	C.QScrollArea_EnsureVisible(this.h, (C.int)(x), (C.int)(y))
}

func (this *QScrollArea) EnsureWidgetVisible(childWidget *QWidget) {
	C.QScrollArea_EnsureWidgetVisible(this.h, childWidget.cPointer())
}

func QScrollArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollArea_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollArea_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollArea_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollArea) EnsureVisible3(x int, y int, xmargin int) {
	C.QScrollArea_EnsureVisible3(this.h, (C.int)(x), (C.int)(y), (C.int)(xmargin))
}

func (this *QScrollArea) EnsureVisible4(x int, y int, xmargin int, ymargin int) {
	C.QScrollArea_EnsureVisible4(this.h, (C.int)(x), (C.int)(y), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QScrollArea) EnsureWidgetVisible2(childWidget *QWidget, xmargin int) {
	C.QScrollArea_EnsureWidgetVisible2(this.h, childWidget.cPointer(), (C.int)(xmargin))
}

func (this *QScrollArea) EnsureWidgetVisible3(childWidget *QWidget, xmargin int, ymargin int) {
	C.QScrollArea_EnsureWidgetVisible3(this.h, childWidget.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QScrollArea) callVirtualBase_SizeHint() *QSize {

	_ret := C.QScrollArea_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollArea) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_SizeHint
func miqt_exec_callback_QScrollArea_SizeHint(self *C.QScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QScrollArea_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QScrollArea) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_FocusNextPrevChild
func miqt_exec_callback_QScrollArea_FocusNextPrevChild(self *C.QScrollArea, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QScrollArea_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QScrollArea) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_Event
func miqt_exec_callback_QScrollArea_Event(self *C.QScrollArea, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QScrollArea_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QScrollArea) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_EventFilter
func miqt_exec_callback_QScrollArea_EventFilter(self *C.QScrollArea, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QScrollArea_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_ResizeEvent
func miqt_exec_callback_QScrollArea_ResizeEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(param1), nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QScrollArea_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QScrollArea) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_ScrollContentsBy
func miqt_exec_callback_QScrollArea_ScrollContentsBy(self *C.QScrollArea, cb C.intptr_t, dx C.int, dy C.int) {
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

	_ret := C.QScrollArea_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollArea) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_ViewportSizeHint
func miqt_exec_callback_QScrollArea_ViewportSizeHint(self *C.QScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QScrollArea_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollArea) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_MinimumSizeHint
func miqt_exec_callback_QScrollArea_MinimumSizeHint(self *C.QScrollArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollArea) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QScrollArea_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QScrollArea) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_SetupViewport
func miqt_exec_callback_QScrollArea_SetupViewport(self *C.QScrollArea, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(viewport), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QScrollArea) callVirtualBase_ViewportEvent(param1 *QEvent) bool {

	return (bool)(C.QScrollArea_virtualbase_ViewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QScrollArea) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_ViewportEvent
func miqt_exec_callback_QScrollArea_ViewportEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QScrollArea{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScrollArea) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QScrollArea_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_PaintEvent
func miqt_exec_callback_QScrollArea_PaintEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(param1), nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QScrollArea_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_MousePressEvent
func miqt_exec_callback_QScrollArea_MousePressEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QScrollArea_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_MouseReleaseEvent
func miqt_exec_callback_QScrollArea_MouseReleaseEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QScrollArea_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_MouseDoubleClickEvent
func miqt_exec_callback_QScrollArea_MouseDoubleClickEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QScrollArea_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_MouseMoveEvent
func miqt_exec_callback_QScrollArea_MouseMoveEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QScrollArea_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_WheelEvent
func miqt_exec_callback_QScrollArea_WheelEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QScrollArea_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_ContextMenuEvent
func miqt_exec_callback_QScrollArea_ContextMenuEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QScrollArea_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_DragEnterEvent
func miqt_exec_callback_QScrollArea_DragEnterEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(param1), nil, nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DragMoveEvent(param1 *QDragMoveEvent) {

	C.QScrollArea_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnDragMoveEvent(slot func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_DragMoveEvent
func miqt_exec_callback_QScrollArea_DragMoveEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DragLeaveEvent(param1 *QDragLeaveEvent) {

	C.QScrollArea_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnDragLeaveEvent(slot func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_DragLeaveEvent
func miqt_exec_callback_QScrollArea_DragLeaveEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(param1), nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QScrollArea_virtualbase_DropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_DropEvent
func miqt_exec_callback_QScrollArea_DropEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(param1), nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QScrollArea) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QScrollArea_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollArea) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollArea_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollArea_KeyPressEvent
func miqt_exec_callback_QScrollArea_KeyPressEvent(self *C.QScrollArea, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QScrollArea{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QScrollArea) Delete() {
	C.QScrollArea_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
