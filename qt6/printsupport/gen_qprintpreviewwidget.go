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
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPrintPreviewWidget_metaObject(this.h)))
}

func (this *QPrintPreviewWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPrintPreviewWidget_metacast(this.h, param1_Cstring))
}

func QPrintPreviewWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrintPreviewWidget) ZoomFactor() float64 {
	return (float64)(C.QPrintPreviewWidget_zoomFactor(this.h))
}

func (this *QPrintPreviewWidget) Orientation() qt6.QPageLayout__Orientation {
	return (qt6.QPageLayout__Orientation)(C.QPrintPreviewWidget_orientation(this.h))
}

func (this *QPrintPreviewWidget) ViewMode() QPrintPreviewWidget__ViewMode {
	return (QPrintPreviewWidget__ViewMode)(C.QPrintPreviewWidget_viewMode(this.h))
}

func (this *QPrintPreviewWidget) ZoomMode() QPrintPreviewWidget__ZoomMode {
	return (QPrintPreviewWidget__ZoomMode)(C.QPrintPreviewWidget_zoomMode(this.h))
}

func (this *QPrintPreviewWidget) CurrentPage() int {
	return (int)(C.QPrintPreviewWidget_currentPage(this.h))
}

func (this *QPrintPreviewWidget) PageCount() int {
	return (int)(C.QPrintPreviewWidget_pageCount(this.h))
}

func (this *QPrintPreviewWidget) SetVisible(visible bool) {
	C.QPrintPreviewWidget_setVisible(this.h, (C.bool)(visible))
}

func (this *QPrintPreviewWidget) Print() {
	C.QPrintPreviewWidget_print(this.h)
}

func (this *QPrintPreviewWidget) ZoomIn() {
	C.QPrintPreviewWidget_zoomIn(this.h)
}

func (this *QPrintPreviewWidget) ZoomOut() {
	C.QPrintPreviewWidget_zoomOut(this.h)
}

func (this *QPrintPreviewWidget) SetZoomFactor(zoomFactor float64) {
	C.QPrintPreviewWidget_setZoomFactor(this.h, (C.double)(zoomFactor))
}

func (this *QPrintPreviewWidget) SetOrientation(orientation qt6.QPageLayout__Orientation) {
	C.QPrintPreviewWidget_setOrientation(this.h, (C.int)(orientation))
}

func (this *QPrintPreviewWidget) SetViewMode(viewMode QPrintPreviewWidget__ViewMode) {
	C.QPrintPreviewWidget_setViewMode(this.h, (C.int)(viewMode))
}

func (this *QPrintPreviewWidget) SetZoomMode(zoomMode QPrintPreviewWidget__ZoomMode) {
	C.QPrintPreviewWidget_setZoomMode(this.h, (C.int)(zoomMode))
}

func (this *QPrintPreviewWidget) SetCurrentPage(pageNumber int) {
	C.QPrintPreviewWidget_setCurrentPage(this.h, (C.int)(pageNumber))
}

func (this *QPrintPreviewWidget) FitToWidth() {
	C.QPrintPreviewWidget_fitToWidth(this.h)
}

func (this *QPrintPreviewWidget) FitInView() {
	C.QPrintPreviewWidget_fitInView(this.h)
}

func (this *QPrintPreviewWidget) SetLandscapeOrientation() {
	C.QPrintPreviewWidget_setLandscapeOrientation(this.h)
}

func (this *QPrintPreviewWidget) SetPortraitOrientation() {
	C.QPrintPreviewWidget_setPortraitOrientation(this.h)
}

func (this *QPrintPreviewWidget) SetSinglePageViewMode() {
	C.QPrintPreviewWidget_setSinglePageViewMode(this.h)
}

func (this *QPrintPreviewWidget) SetFacingPagesViewMode() {
	C.QPrintPreviewWidget_setFacingPagesViewMode(this.h)
}

func (this *QPrintPreviewWidget) SetAllPagesViewMode() {
	C.QPrintPreviewWidget_setAllPagesViewMode(this.h)
}

func (this *QPrintPreviewWidget) UpdatePreview() {
	C.QPrintPreviewWidget_updatePreview(this.h)
}

func (this *QPrintPreviewWidget) PaintRequested(printer *QPrinter) {
	C.QPrintPreviewWidget_paintRequested(this.h, printer.cPointer())
}
func (this *QPrintPreviewWidget) OnPaintRequested(slot func(printer *QPrinter)) {
	C.QPrintPreviewWidget_connect_paintRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintPreviewWidget_paintRequested
func miqt_exec_callback_QPrintPreviewWidget_paintRequested(cb C.intptr_t, printer *C.QPrinter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(printer *QPrinter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPrinter(printer)

	gofunc(slotval1)
}

func (this *QPrintPreviewWidget) PreviewChanged() {
	C.QPrintPreviewWidget_previewChanged(this.h)
}
func (this *QPrintPreviewWidget) OnPreviewChanged(slot func()) {
	C.QPrintPreviewWidget_connect_previewChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPrintPreviewWidget_previewChanged
func miqt_exec_callback_QPrintPreviewWidget_previewChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QPrintPreviewWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPrintPreviewWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPrintPreviewWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrintPreviewWidget) ZoomInWithZoom(zoom float64) {
	C.QPrintPreviewWidget_zoomInWithZoom(this.h, (C.double)(zoom))
}

func (this *QPrintPreviewWidget) ZoomOutWithZoom(zoom float64) {
	C.QPrintPreviewWidget_zoomOutWithZoom(this.h, (C.double)(zoom))
}

// UpdateMicroFocus can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QPrintPreviewWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QPrintPreviewWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QPrintPreviewWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPrintPreviewWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPrintPreviewWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPrintPreviewWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPrintPreviewWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPrintPreviewWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPrintPreviewWidget that was directly constructed.
func (this *QPrintPreviewWidget) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPrintPreviewWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPrintPreviewWidget) callVirtualBase_SetVisible(visible bool) {

	C.QPrintPreviewWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPrintPreviewWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPrintPreviewWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_setVisible
func miqt_exec_callback_QPrintPreviewWidget_setVisible(self *C.QPrintPreviewWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DevType() int {

	return (int)(C.QPrintPreviewWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QPrintPreviewWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_devType
func miqt_exec_callback_QPrintPreviewWidget_devType(self *C.QPrintPreviewWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewWidget) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPrintPreviewWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_sizeHint
func miqt_exec_callback_QPrintPreviewWidget_sizeHint(self *C.QPrintPreviewWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewWidget) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPrintPreviewWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_minimumSizeHint
func miqt_exec_callback_QPrintPreviewWidget_minimumSizeHint(self *C.QPrintPreviewWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPrintPreviewWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrintPreviewWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPrintPreviewWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_heightForWidth
func miqt_exec_callback_QPrintPreviewWidget_heightForWidth(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QPrintPreviewWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPrintPreviewWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_hasHeightForWidth
func miqt_exec_callback_QPrintPreviewWidget_hasHeightForWidth(self *C.QPrintPreviewWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPrintPreviewWidget) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QPrintPreviewWidget) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QPrintPreviewWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_paintEngine
func miqt_exec_callback_QPrintPreviewWidget_paintEngine(self *C.QPrintPreviewWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPrintPreviewWidget_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPrintPreviewWidget) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_event
func miqt_exec_callback_QPrintPreviewWidget_event(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QPrintPreviewWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_mousePressEvent
func miqt_exec_callback_QPrintPreviewWidget_mousePressEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_mouseReleaseEvent
func miqt_exec_callback_QPrintPreviewWidget_mouseReleaseEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_mouseDoubleClickEvent
func miqt_exec_callback_QPrintPreviewWidget_mouseDoubleClickEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QPrintPreviewWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_mouseMoveEvent
func miqt_exec_callback_QPrintPreviewWidget_mouseMoveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QPrintPreviewWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_wheelEvent
func miqt_exec_callback_QPrintPreviewWidget_wheelEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QPrintPreviewWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_keyPressEvent
func miqt_exec_callback_QPrintPreviewWidget_keyPressEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QPrintPreviewWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_keyReleaseEvent
func miqt_exec_callback_QPrintPreviewWidget_keyReleaseEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QPrintPreviewWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_focusInEvent
func miqt_exec_callback_QPrintPreviewWidget_focusInEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QPrintPreviewWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_focusOutEvent
func miqt_exec_callback_QPrintPreviewWidget_focusOutEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QPrintPreviewWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_enterEvent
func miqt_exec_callback_QPrintPreviewWidget_enterEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QPrintPreviewWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_leaveEvent
func miqt_exec_callback_QPrintPreviewWidget_leaveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QPrintPreviewWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_paintEvent
func miqt_exec_callback_QPrintPreviewWidget_paintEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QPrintPreviewWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_moveEvent
func miqt_exec_callback_QPrintPreviewWidget_moveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QPrintPreviewWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_resizeEvent
func miqt_exec_callback_QPrintPreviewWidget_resizeEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QPrintPreviewWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_closeEvent
func miqt_exec_callback_QPrintPreviewWidget_closeEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.QPrintPreviewWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_contextMenuEvent
func miqt_exec_callback_QPrintPreviewWidget_contextMenuEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QPrintPreviewWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_tabletEvent
func miqt_exec_callback_QPrintPreviewWidget_tabletEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QPrintPreviewWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_actionEvent
func miqt_exec_callback_QPrintPreviewWidget_actionEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QPrintPreviewWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_dragEnterEvent
func miqt_exec_callback_QPrintPreviewWidget_dragEnterEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QPrintPreviewWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_dragMoveEvent
func miqt_exec_callback_QPrintPreviewWidget_dragMoveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QPrintPreviewWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_dragLeaveEvent
func miqt_exec_callback_QPrintPreviewWidget_dragLeaveEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QPrintPreviewWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_dropEvent
func miqt_exec_callback_QPrintPreviewWidget_dropEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QPrintPreviewWidget_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_showEvent
func miqt_exec_callback_QPrintPreviewWidget_showEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QPrintPreviewWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_hideEvent
func miqt_exec_callback_QPrintPreviewWidget_hideEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QHideEvent) {
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

	return (bool)(C.QPrintPreviewWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QPrintPreviewWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_nativeEvent
func miqt_exec_callback_QPrintPreviewWidget_nativeEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	C.QPrintPreviewWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_changeEvent
func miqt_exec_callback_QPrintPreviewWidget_changeEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPrintPreviewWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrintPreviewWidget) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPrintPreviewWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_metric
func miqt_exec_callback_QPrintPreviewWidget_metric(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 C.int) C.int {
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

	C.QPrintPreviewWidget_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QPrintPreviewWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_initPainter
func miqt_exec_callback_QPrintPreviewWidget_initPainter(self *C.QPrintPreviewWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPrintPreviewWidget) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QPrintPreviewWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_redirected
func miqt_exec_callback_QPrintPreviewWidget_redirected(self *C.QPrintPreviewWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPrintPreviewWidget) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QPrintPreviewWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_sharedPainter
func miqt_exec_callback_QPrintPreviewWidget_sharedPainter(self *C.QPrintPreviewWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QPrintPreviewWidget) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QPrintPreviewWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_inputMethodEvent
func miqt_exec_callback_QPrintPreviewWidget_inputMethodEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPrintPreviewWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPrintPreviewWidget) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QPrintPreviewWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_inputMethodQuery
func miqt_exec_callback_QPrintPreviewWidget_inputMethodQuery(self *C.QPrintPreviewWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QPrintPreviewWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPrintPreviewWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_focusNextPrevChild
func miqt_exec_callback_QPrintPreviewWidget_focusNextPrevChild(self *C.QPrintPreviewWidget, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QPrintPreviewWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPrintPreviewWidget) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPrintPreviewWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_eventFilter
func miqt_exec_callback_QPrintPreviewWidget_eventFilter(self *C.QPrintPreviewWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QPrintPreviewWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_timerEvent
func miqt_exec_callback_QPrintPreviewWidget_timerEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPrintPreviewWidget_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_childEvent
func miqt_exec_callback_QPrintPreviewWidget_childEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPrintPreviewWidget_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPrintPreviewWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_customEvent
func miqt_exec_callback_QPrintPreviewWidget_customEvent(self *C.QPrintPreviewWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPrintPreviewWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPrintPreviewWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_connectNotify
func miqt_exec_callback_QPrintPreviewWidget_connectNotify(self *C.QPrintPreviewWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPrintPreviewWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPrintPreviewWidget) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPrintPreviewWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPrintPreviewWidget) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPrintPreviewWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrintPreviewWidget_disconnectNotify
func miqt_exec_callback_QPrintPreviewWidget_disconnectNotify(self *C.QPrintPreviewWidget, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QPrintPreviewWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrintPreviewWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrintPreviewWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
