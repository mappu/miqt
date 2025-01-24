package printsupport

/*

#include "gen_qprintpreviewwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPrintPreviewWidget__ViewMode int

const (
	QPrintPreviewWidget__SinglePageView  QPrintPreviewWidget__ViewMode = 0
	QPrintPreviewWidget__FacingPagesView QPrintPreviewWidget__ViewMode = 1
	QPrintPreviewWidget__AllPagesView    QPrintPreviewWidget__ViewMode = 2
)

type QPrintPreviewWidget__ZoomMode int

const (
	QPrintPreviewWidget__CustomZoom QPrintPreviewWidget__ZoomMode = 0
	QPrintPreviewWidget__FitToWidth QPrintPreviewWidget__ZoomMode = 1
	QPrintPreviewWidget__FitInView  QPrintPreviewWidget__ZoomMode = 2
)

type QPrintPreviewWidget struct {
	h *C.QPrintPreviewWidget
	*qt6.QWidget
}

func (this *QPrintPreviewWidget) cPointer() *C.QPrintPreviewWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPrintPreviewWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPrintPreviewWidget constructs the type using only CGO pointers.
func newQPrintPreviewWidget(h *C.QPrintPreviewWidget) *QPrintPreviewWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QPrintPreviewWidget_virtbase(h, &outptr_QWidget)

	return &QPrintPreviewWidget{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQPrintPreviewWidget constructs the type using only unsafe pointers.
func UnsafeNewQPrintPreviewWidget(h unsafe.Pointer) *QPrintPreviewWidget {
	return newQPrintPreviewWidget((*C.QPrintPreviewWidget)(h))
}

// NewQPrintPreviewWidget constructs a new QPrintPreviewWidget object.
func NewQPrintPreviewWidget(parent *qt6.QWidget) *QPrintPreviewWidget {

	return newQPrintPreviewWidget(C.QPrintPreviewWidget_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQPrintPreviewWidget2 constructs a new QPrintPreviewWidget object.
func NewQPrintPreviewWidget2(printer *QPrinter) *QPrintPreviewWidget {

	return newQPrintPreviewWidget(C.QPrintPreviewWidget_new2(printer.cPointer()))
}

// NewQPrintPreviewWidget3 constructs a new QPrintPreviewWidget object.
func NewQPrintPreviewWidget3() *QPrintPreviewWidget {

	return newQPrintPreviewWidget(C.QPrintPreviewWidget_new3())
}

// NewQPrintPreviewWidget4 constructs a new QPrintPreviewWidget object.
func NewQPrintPreviewWidget4(printer *QPrinter, parent *qt6.QWidget) *QPrintPreviewWidget {

	return newQPrintPreviewWidget(C.QPrintPreviewWidget_new4(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

// NewQPrintPreviewWidget5 constructs a new QPrintPreviewWidget object.
func NewQPrintPreviewWidget5(printer *QPrinter, parent *qt6.QWidget, flags qt6.WindowType) *QPrintPreviewWidget {

	return newQPrintPreviewWidget(C.QPrintPreviewWidget_new5(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()), (C.int)(flags)))
}

// NewQPrintPreviewWidget6 constructs a new QPrintPreviewWidget object.
func NewQPrintPreviewWidget6(parent *qt6.QWidget, flags qt6.WindowType) *QPrintPreviewWidget {

	return newQPrintPreviewWidget(C.QPrintPreviewWidget_new6((*C.QWidget)(parent.UnsafePointer()), (C.int)(flags)))
}

func (this *QPrintPreviewWidget) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPrintPreviewWidget_MetaObject(this.h)))
}

func (this *QPrintPreviewWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPrintPreviewWidget_Metacast(this.h, param1_Cstring))
}

func QPrintPreviewWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrintPreviewWidget) ZoomFactor() float64 {
	return (float64)(C.QPrintPreviewWidget_ZoomFactor(this.h))
}

func (this *QPrintPreviewWidget) Orientation() qt6.QPageLayout__Orientation {
	return (qt6.QPageLayout__Orientation)(C.QPrintPreviewWidget_Orientation(this.h))
}

func (this *QPrintPreviewWidget) ViewMode() QPrintPreviewWidget__ViewMode {
	return (QPrintPreviewWidget__ViewMode)(C.QPrintPreviewWidget_ViewMode(this.h))
}

func (this *QPrintPreviewWidget) ZoomMode() QPrintPreviewWidget__ZoomMode {
	return (QPrintPreviewWidget__ZoomMode)(C.QPrintPreviewWidget_ZoomMode(this.h))
}

func (this *QPrintPreviewWidget) CurrentPage() int {
	return (int)(C.QPrintPreviewWidget_CurrentPage(this.h))
}

func (this *QPrintPreviewWidget) PageCount() int {
	return (int)(C.QPrintPreviewWidget_PageCount(this.h))
}

func (this *QPrintPreviewWidget) SetVisible(visible bool) {
	C.QPrintPreviewWidget_SetVisible(this.h, (C.bool)(visible))
}

func (this *QPrintPreviewWidget) Print() {
	C.QPrintPreviewWidget_Print(this.h)
}

func (this *QPrintPreviewWidget) ZoomIn() {
	C.QPrintPreviewWidget_ZoomIn(this.h)
}

func (this *QPrintPreviewWidget) ZoomOut() {
	C.QPrintPreviewWidget_ZoomOut(this.h)
}

func (this *QPrintPreviewWidget) SetZoomFactor(zoomFactor float64) {
	C.QPrintPreviewWidget_SetZoomFactor(this.h, (C.double)(zoomFactor))
}

func (this *QPrintPreviewWidget) SetOrientation(orientation qt6.QPageLayout__Orientation) {
	C.QPrintPreviewWidget_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QPrintPreviewWidget) SetViewMode(viewMode QPrintPreviewWidget__ViewMode) {
	C.QPrintPreviewWidget_SetViewMode(this.h, (C.int)(viewMode))
}

func (this *QPrintPreviewWidget) SetZoomMode(zoomMode QPrintPreviewWidget__ZoomMode) {
	C.QPrintPreviewWidget_SetZoomMode(this.h, (C.int)(zoomMode))
}

func (this *QPrintPreviewWidget) SetCurrentPage(pageNumber int) {
	C.QPrintPreviewWidget_SetCurrentPage(this.h, (C.int)(pageNumber))
}

func (this *QPrintPreviewWidget) FitToWidth() {
	C.QPrintPreviewWidget_FitToWidth(this.h)
}

func (this *QPrintPreviewWidget) FitInView() {
	C.QPrintPreviewWidget_FitInView(this.h)
}

func (this *QPrintPreviewWidget) SetLandscapeOrientation() {
	C.QPrintPreviewWidget_SetLandscapeOrientation(this.h)
}

func (this *QPrintPreviewWidget) SetPortraitOrientation() {
	C.QPrintPreviewWidget_SetPortraitOrientation(this.h)
}

func (this *QPrintPreviewWidget) SetSinglePageViewMode() {
	C.QPrintPreviewWidget_SetSinglePageViewMode(this.h)
}

func (this *QPrintPreviewWidget) SetFacingPagesViewMode() {
	C.QPrintPreviewWidget_SetFacingPagesViewMode(this.h)
}

func (this *QPrintPreviewWidget) SetAllPagesViewMode() {
	C.QPrintPreviewWidget_SetAllPagesViewMode(this.h)
}

func (this *QPrintPreviewWidget) UpdatePreview() {
	C.QPrintPreviewWidget_UpdatePreview(this.h)
}

func (this *QPrintPreviewWidget) PaintRequested(printer *QPrinter) {
	C.QPrintPreviewWidget_PaintRequested(this.h, printer.cPointer())
}
func (this *QPrintPreviewWidget) OnPaintRequested(slot func(printer *QPrinter)) {
	C.QPrintPreviewWidget_connect_PaintRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintPreviewWidget_PaintRequested
func miqt_exec_callback_QPrintPreviewWidget_PaintRequested(cb C.intptr_t, printer *C.QPrinter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(printer *QPrinter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPrinter(printer)

	gofunc(slotval1)
}

func (this *QPrintPreviewWidget) PreviewChanged() {
	C.QPrintPreviewWidget_PreviewChanged(this.h)
}
func (this *QPrintPreviewWidget) OnPreviewChanged(slot func()) {
	C.QPrintPreviewWidget_connect_PreviewChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintPreviewWidget_PreviewChanged
func miqt_exec_callback_QPrintPreviewWidget_PreviewChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QPrintPreviewWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPrintPreviewWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrintPreviewWidget) ZoomIn1(zoom float64) {
	C.QPrintPreviewWidget_ZoomIn1(this.h, (C.double)(zoom))
}

func (this *QPrintPreviewWidget) ZoomOut1(zoom float64) {
	C.QPrintPreviewWidget_ZoomOut1(this.h, (C.double)(zoom))
}

func (this *QPrintPreviewWidget) callVirtualBase_SetVisible(visible bool) {

	C.QPrintPreviewWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPrintPreviewWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPrintPreviewWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_SetVisible
func miqt_exec_callback_QPrintPreviewWidget_SetVisible(self *C.QPrintPreviewWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DevType() int {

	return (int)(C.QPrintPreviewWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QPrintPreviewWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_DevType
func miqt_exec_callback_QPrintPreviewWidget_DevType(self *C.QPrintPreviewWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewWidget) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPrintPreviewWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_SizeHint
func miqt_exec_callback_QPrintPreviewWidget_SizeHint(self *C.QPrintPreviewWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewWidget) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPrintPreviewWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_MinimumSizeHint
func miqt_exec_callback_QPrintPreviewWidget_MinimumSizeHint(self *C.QPrintPreviewWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPrintPreviewWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrintPreviewWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPrintPreviewWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_HeightForWidth
func miqt_exec_callback_QPrintPreviewWidget_HeightForWidth(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QPrintPreviewWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_HasHeightForWidth
func miqt_exec_callback_QPrintPreviewWidget_HasHeightForWidth(self *C.QPrintPreviewWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QPrintPreviewWidget) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QPrintPreviewWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_PaintEngine
func miqt_exec_callback_QPrintPreviewWidget_PaintEngine(self *C.QPrintPreviewWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPrintPreviewWidget_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPrintPreviewWidget) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_Event
func miqt_exec_callback_QPrintPreviewWidget_Event(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_MousePressEvent
func miqt_exec_callback_QPrintPreviewWidget_MousePressEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_MouseReleaseEvent
func miqt_exec_callback_QPrintPreviewWidget_MouseReleaseEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_MouseDoubleClickEvent
func miqt_exec_callback_QPrintPreviewWidget_MouseDoubleClickEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_MouseMoveEvent
func miqt_exec_callback_QPrintPreviewWidget_MouseMoveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QPrintPreviewWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_WheelEvent
func miqt_exec_callback_QPrintPreviewWidget_WheelEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QPrintPreviewWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_KeyPressEvent
func miqt_exec_callback_QPrintPreviewWidget_KeyPressEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QPrintPreviewWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_KeyReleaseEvent
func miqt_exec_callback_QPrintPreviewWidget_KeyReleaseEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QPrintPreviewWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_FocusInEvent
func miqt_exec_callback_QPrintPreviewWidget_FocusInEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QPrintPreviewWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_FocusOutEvent
func miqt_exec_callback_QPrintPreviewWidget_FocusOutEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QPrintPreviewWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_EnterEvent
func miqt_exec_callback_QPrintPreviewWidget_EnterEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QPrintPreviewWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_LeaveEvent
func miqt_exec_callback_QPrintPreviewWidget_LeaveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QPrintPreviewWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_PaintEvent
func miqt_exec_callback_QPrintPreviewWidget_PaintEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QPrintPreviewWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_MoveEvent
func miqt_exec_callback_QPrintPreviewWidget_MoveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QPrintPreviewWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_ResizeEvent
func miqt_exec_callback_QPrintPreviewWidget_ResizeEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QPrintPreviewWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_CloseEvent
func miqt_exec_callback_QPrintPreviewWidget_CloseEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.QPrintPreviewWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_ContextMenuEvent
func miqt_exec_callback_QPrintPreviewWidget_ContextMenuEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QPrintPreviewWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_TabletEvent
func miqt_exec_callback_QPrintPreviewWidget_TabletEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QPrintPreviewWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_ActionEvent
func miqt_exec_callback_QPrintPreviewWidget_ActionEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QPrintPreviewWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_DragEnterEvent
func miqt_exec_callback_QPrintPreviewWidget_DragEnterEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QPrintPreviewWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_DragMoveEvent
func miqt_exec_callback_QPrintPreviewWidget_DragMoveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QPrintPreviewWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_DragLeaveEvent
func miqt_exec_callback_QPrintPreviewWidget_DragLeaveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QPrintPreviewWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_DropEvent
func miqt_exec_callback_QPrintPreviewWidget_DropEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QPrintPreviewWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_ShowEvent
func miqt_exec_callback_QPrintPreviewWidget_ShowEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QPrintPreviewWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_HideEvent
func miqt_exec_callback_QPrintPreviewWidget_HideEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QPrintPreviewWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QPrintPreviewWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_NativeEvent
func miqt_exec_callback_QPrintPreviewWidget_NativeEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QPrintPreviewWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_ChangeEvent
func miqt_exec_callback_QPrintPreviewWidget_ChangeEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPrintPreviewWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrintPreviewWidget) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPrintPreviewWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_Metric
func miqt_exec_callback_QPrintPreviewWidget_Metric(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QPrintPreviewWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QPrintPreviewWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_InitPainter
func miqt_exec_callback_QPrintPreviewWidget_InitPainter(self *C.QPrintPreviewWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPrintPreviewWidget) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QPrintPreviewWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_Redirected
func miqt_exec_callback_QPrintPreviewWidget_Redirected(self *C.QPrintPreviewWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPrintPreviewWidget) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QPrintPreviewWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_SharedPainter
func miqt_exec_callback_QPrintPreviewWidget_SharedPainter(self *C.QPrintPreviewWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QPrintPreviewWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_InputMethodEvent
func miqt_exec_callback_QPrintPreviewWidget_InputMethodEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewWidget) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QPrintPreviewWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_InputMethodQuery
func miqt_exec_callback_QPrintPreviewWidget_InputMethodQuery(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QPrintPreviewWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPrintPreviewWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_FocusNextPrevChild
func miqt_exec_callback_QPrintPreviewWidget_FocusNextPrevChild(self *C.QPrintPreviewWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QPrintPreviewWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPrintPreviewWidget) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_EventFilter
func miqt_exec_callback_QPrintPreviewWidget_EventFilter(self *C.QPrintPreviewWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPrintPreviewWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_TimerEvent
func miqt_exec_callback_QPrintPreviewWidget_TimerEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPrintPreviewWidget_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_ChildEvent
func miqt_exec_callback_QPrintPreviewWidget_ChildEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPrintPreviewWidget_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_CustomEvent
func miqt_exec_callback_QPrintPreviewWidget_CustomEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPrintPreviewWidget_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPrintPreviewWidget_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_ConnectNotify
func miqt_exec_callback_QPrintPreviewWidget_ConnectNotify(self *C.QPrintPreviewWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPrintPreviewWidget_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPrintPreviewWidget_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_DisconnectNotify
func miqt_exec_callback_QPrintPreviewWidget_DisconnectNotify(self *C.QPrintPreviewWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPrintPreviewWidget) Delete() {
	C.QPrintPreviewWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrintPreviewWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrintPreviewWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
