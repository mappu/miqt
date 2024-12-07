package qt6

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
	h          *C.QAbstractScrollArea
	isSubclass bool
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
func newQAbstractScrollArea(h *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QAbstractScrollArea {
	if h == nil {
		return nil
	}
	return &QAbstractScrollArea{h: h,
		QFrame: newQFrame(h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQAbstractScrollArea constructs the type using only unsafe pointers.
func UnsafeNewQAbstractScrollArea(h unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QAbstractScrollArea {
	if h == nil {
		return nil
	}

	return &QAbstractScrollArea{h: (*C.QAbstractScrollArea)(h),
		QFrame: UnsafeNewQFrame(h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQAbstractScrollArea constructs a new QAbstractScrollArea object.
func NewQAbstractScrollArea(parent *QWidget) *QAbstractScrollArea {
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QAbstractScrollArea_new(parent.cPointer(), &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQAbstractScrollArea(outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQAbstractScrollArea2 constructs a new QAbstractScrollArea object.
func NewQAbstractScrollArea2() *QAbstractScrollArea {
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QAbstractScrollArea_new2(&outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQAbstractScrollArea(outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractScrollArea) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractScrollArea_MetaObject(this.h)))
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

func (this *QAbstractScrollArea) VerticalScrollBarPolicy() ScrollBarPolicy {
	return (ScrollBarPolicy)(C.QAbstractScrollArea_VerticalScrollBarPolicy(this.h))
}

func (this *QAbstractScrollArea) SetVerticalScrollBarPolicy(verticalScrollBarPolicy ScrollBarPolicy) {
	C.QAbstractScrollArea_SetVerticalScrollBarPolicy(this.h, (C.int)(verticalScrollBarPolicy))
}

func (this *QAbstractScrollArea) VerticalScrollBar() *QScrollBar {
	return UnsafeNewQScrollBar(unsafe.Pointer(C.QAbstractScrollArea_VerticalScrollBar(this.h)), nil, nil, nil, nil)
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
	return UnsafeNewQScrollBar(unsafe.Pointer(C.QAbstractScrollArea_HorizontalScrollBar(this.h)), nil, nil, nil, nil)
}

func (this *QAbstractScrollArea) SetHorizontalScrollBar(scrollbar *QScrollBar) {
	C.QAbstractScrollArea_SetHorizontalScrollBar(this.h, scrollbar.cPointer())
}

func (this *QAbstractScrollArea) CornerWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QAbstractScrollArea_CornerWidget(this.h)), nil, nil)
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
		_ret[i] = UnsafeNewQWidget(unsafe.Pointer(_outCast[i]), nil, nil)
	}
	return _ret
}

func (this *QAbstractScrollArea) Viewport() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QAbstractScrollArea_Viewport(this.h)), nil, nil)
}

func (this *QAbstractScrollArea) SetViewport(widget *QWidget) {
	C.QAbstractScrollArea_SetViewport(this.h, widget.cPointer())
}

func (this *QAbstractScrollArea) MaximumViewportSize() *QSize {
	_ret := C.QAbstractScrollArea_MaximumViewportSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractScrollArea) MinimumSizeHint() *QSize {
	_ret := C.QAbstractScrollArea_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractScrollArea) SizeHint() *QSize {
	_ret := C.QAbstractScrollArea_SizeHint(this.h)
	_goptr := newQSize(_ret)
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

func (this *QAbstractScrollArea) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QAbstractScrollArea_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractScrollArea) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	_ret := C.QAbstractScrollArea_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractScrollArea) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_SetupViewport
func miqt_exec_callback_QAbstractScrollArea_SetupViewport(self *C.QAbstractScrollArea, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(viewport), nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QAbstractScrollArea_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QAbstractScrollArea) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_EventFilter
func miqt_exec_callback_QAbstractScrollArea_EventFilter(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QAbstractScrollArea_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QAbstractScrollArea) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_Event
func miqt_exec_callback_QAbstractScrollArea_Event(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_ViewportEvent(param1 *QEvent) bool {

	return (bool)(C.QAbstractScrollArea_virtualbase_ViewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QAbstractScrollArea) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_ViewportEvent
func miqt_exec_callback_QAbstractScrollArea_ViewportEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractScrollArea) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QAbstractScrollArea_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_ResizeEvent
func miqt_exec_callback_QAbstractScrollArea_ResizeEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QAbstractScrollArea_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_PaintEvent
func miqt_exec_callback_QAbstractScrollArea_PaintEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QAbstractScrollArea_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_MousePressEvent
func miqt_exec_callback_QAbstractScrollArea_MousePressEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QAbstractScrollArea_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_MouseReleaseEvent
func miqt_exec_callback_QAbstractScrollArea_MouseReleaseEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QAbstractScrollArea_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_MouseDoubleClickEvent
func miqt_exec_callback_QAbstractScrollArea_MouseDoubleClickEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QAbstractScrollArea_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_MouseMoveEvent
func miqt_exec_callback_QAbstractScrollArea_MouseMoveEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QAbstractScrollArea_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_WheelEvent
func miqt_exec_callback_QAbstractScrollArea_WheelEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QAbstractScrollArea_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_ContextMenuEvent
func miqt_exec_callback_QAbstractScrollArea_ContextMenuEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QAbstractScrollArea_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_DragEnterEvent
func miqt_exec_callback_QAbstractScrollArea_DragEnterEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(param1), nil, nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DragMoveEvent(param1 *QDragMoveEvent) {

	C.QAbstractScrollArea_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnDragMoveEvent(slot func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_DragMoveEvent
func miqt_exec_callback_QAbstractScrollArea_DragMoveEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DragLeaveEvent(param1 *QDragLeaveEvent) {

	C.QAbstractScrollArea_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnDragLeaveEvent(slot func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_DragLeaveEvent
func miqt_exec_callback_QAbstractScrollArea_DragLeaveEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QAbstractScrollArea_virtualbase_DropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_DropEvent
func miqt_exec_callback_QAbstractScrollArea_DropEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QAbstractScrollArea_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractScrollArea) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_KeyPressEvent
func miqt_exec_callback_QAbstractScrollArea_KeyPressEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QAbstractScrollArea_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QAbstractScrollArea) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	_ret := C.QAbstractScrollArea_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractScrollArea) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_ChangeEvent
func miqt_exec_callback_QAbstractScrollArea_ChangeEvent(self *C.QAbstractScrollArea, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractScrollArea) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QAbstractScrollArea_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QAbstractScrollArea) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractScrollArea_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractScrollArea_InitStyleOption
func miqt_exec_callback_QAbstractScrollArea_InitStyleOption(self *C.QAbstractScrollArea, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQStyleOptionFrame(unsafe.Pointer(option), nil)

	gofunc((&QAbstractScrollArea{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractScrollArea) Delete() {
	C.QAbstractScrollArea_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractScrollArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractScrollArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
