package pdf

/*

#include "gen_qpdfview.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPdfView__PageMode int

const (
	QPdfView__SinglePage QPdfView__PageMode = 0
	QPdfView__MultiPage  QPdfView__PageMode = 1
)

type QPdfView__ZoomMode int

const (
	QPdfView__Custom     QPdfView__ZoomMode = 0
	QPdfView__FitToWidth QPdfView__ZoomMode = 1
	QPdfView__FitInView  QPdfView__ZoomMode = 2
)

type QPdfView struct {
	h *C.QPdfView
	*qt6.QAbstractScrollArea
}

func (this *QPdfView) cPointer() *C.QPdfView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfView constructs the type using only CGO pointers.
func newQPdfView(h *C.QPdfView) *QPdfView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QPdfView_virtbase(h, &outptr_QAbstractScrollArea)

	return &QPdfView{h: h,
		QAbstractScrollArea: qt6.UnsafeNewQAbstractScrollArea(unsafe.Pointer(outptr_QAbstractScrollArea))}
}

// UnsafeNewQPdfView constructs the type using only unsafe pointers.
func UnsafeNewQPdfView(h unsafe.Pointer) *QPdfView {
	return newQPdfView((*C.QPdfView)(h))
}

// NewQPdfView constructs a new QPdfView object.
func NewQPdfView(parent *qt6.QWidget) *QPdfView {

	return newQPdfView(C.QPdfView_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQPdfView2 constructs a new QPdfView object.
func NewQPdfView2() *QPdfView {

	return newQPdfView(C.QPdfView_new2())
}

func (this *QPdfView) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPdfView_metaObject(this.h)))
}

func (this *QPdfView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfView_metacast(this.h, param1_Cstring))
}

func QPdfView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfView) SetDocument(document *QPdfDocument) {
	C.QPdfView_setDocument(this.h, document.cPointer())
}

func (this *QPdfView) Document() *QPdfDocument {
	return newQPdfDocument(C.QPdfView_document(this.h))
}

func (this *QPdfView) PageNavigator() *QPdfPageNavigator {
	return newQPdfPageNavigator(C.QPdfView_pageNavigator(this.h))
}

func (this *QPdfView) PageMode() QPdfView__PageMode {
	return (QPdfView__PageMode)(C.QPdfView_pageMode(this.h))
}

func (this *QPdfView) ZoomMode() QPdfView__ZoomMode {
	return (QPdfView__ZoomMode)(C.QPdfView_zoomMode(this.h))
}

func (this *QPdfView) ZoomFactor() float64 {
	return (float64)(C.QPdfView_zoomFactor(this.h))
}

func (this *QPdfView) PageSpacing() int {
	return (int)(C.QPdfView_pageSpacing(this.h))
}

func (this *QPdfView) SetPageSpacing(spacing int) {
	C.QPdfView_setPageSpacing(this.h, (C.int)(spacing))
}

func (this *QPdfView) DocumentMargins() *qt6.QMargins {
	_goptr := qt6.UnsafeNewQMargins(unsafe.Pointer(C.QPdfView_documentMargins(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfView) SetDocumentMargins(margins qt6.QMargins) {
	C.QPdfView_setDocumentMargins(this.h, (*C.QMargins)(margins.UnsafePointer()))
}

func (this *QPdfView) SetPageMode(mode QPdfView__PageMode) {
	C.QPdfView_setPageMode(this.h, (C.int)(mode))
}

func (this *QPdfView) SetZoomMode(mode QPdfView__ZoomMode) {
	C.QPdfView_setZoomMode(this.h, (C.int)(mode))
}

func (this *QPdfView) SetZoomFactor(factor float64) {
	C.QPdfView_setZoomFactor(this.h, (C.double)(factor))
}

func (this *QPdfView) DocumentChanged(document *QPdfDocument) {
	C.QPdfView_documentChanged(this.h, document.cPointer())
}
func (this *QPdfView) OnDocumentChanged(slot func(document *QPdfDocument)) {
	C.QPdfView_connect_documentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfView_documentChanged
func miqt_exec_callback_QPdfView_documentChanged(cb C.intptr_t, document *C.QPdfDocument) {
	gofunc, ok := cgo.Handle(cb).Value().(func(document *QPdfDocument))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPdfDocument(document)

	gofunc(slotval1)
}

func (this *QPdfView) PageModeChanged(pageMode QPdfView__PageMode) {
	C.QPdfView_pageModeChanged(this.h, (C.int)(pageMode))
}
func (this *QPdfView) OnPageModeChanged(slot func(pageMode QPdfView__PageMode)) {
	C.QPdfView_connect_pageModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfView_pageModeChanged
func miqt_exec_callback_QPdfView_pageModeChanged(cb C.intptr_t, pageMode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pageMode QPdfView__PageMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPdfView__PageMode)(pageMode)

	gofunc(slotval1)
}

func (this *QPdfView) ZoomModeChanged(zoomMode QPdfView__ZoomMode) {
	C.QPdfView_zoomModeChanged(this.h, (C.int)(zoomMode))
}
func (this *QPdfView) OnZoomModeChanged(slot func(zoomMode QPdfView__ZoomMode)) {
	C.QPdfView_connect_zoomModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfView_zoomModeChanged
func miqt_exec_callback_QPdfView_zoomModeChanged(cb C.intptr_t, zoomMode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(zoomMode QPdfView__ZoomMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPdfView__ZoomMode)(zoomMode)

	gofunc(slotval1)
}

func (this *QPdfView) ZoomFactorChanged(zoomFactor float64) {
	C.QPdfView_zoomFactorChanged(this.h, (C.double)(zoomFactor))
}
func (this *QPdfView) OnZoomFactorChanged(slot func(zoomFactor float64)) {
	C.QPdfView_connect_zoomFactorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfView_zoomFactorChanged
func miqt_exec_callback_QPdfView_zoomFactorChanged(cb C.intptr_t, zoomFactor C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(zoomFactor float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(zoomFactor)

	gofunc(slotval1)
}

func (this *QPdfView) PageSpacingChanged(pageSpacing int) {
	C.QPdfView_pageSpacingChanged(this.h, (C.int)(pageSpacing))
}
func (this *QPdfView) OnPageSpacingChanged(slot func(pageSpacing int)) {
	C.QPdfView_connect_pageSpacingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfView_pageSpacingChanged
func miqt_exec_callback_QPdfView_pageSpacingChanged(cb C.intptr_t, pageSpacing C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pageSpacing int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pageSpacing)

	gofunc(slotval1)
}

func (this *QPdfView) DocumentMarginsChanged(documentMargins qt6.QMargins) {
	C.QPdfView_documentMarginsChanged(this.h, (*C.QMargins)(documentMargins.UnsafePointer()))
}
func (this *QPdfView) OnDocumentMarginsChanged(slot func(documentMargins qt6.QMargins)) {
	C.QPdfView_connect_documentMarginsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfView_documentMarginsChanged
func miqt_exec_callback_QPdfView_documentMarginsChanged(cb C.intptr_t, documentMargins *C.QMargins) {
	gofunc, ok := cgo.Handle(cb).Value().(func(documentMargins qt6.QMargins))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	documentMargins_goptr := qt6.UnsafeNewQMargins(unsafe.Pointer(documentMargins))
	documentMargins_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *documentMargins_goptr

	gofunc(slotval1)
}

func QPdfView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetViewportMargins can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QPdfView_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) ViewportMargins() qt6.QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt6.UnsafeNewQMargins(unsafe.Pointer(C.QPdfView_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) DrawFrame(param1 *qt6.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QPdfView_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfView_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfView_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfView_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfView_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfView_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPdfView_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfView_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfView_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPdfView that was directly constructed.
func (this *QPdfView) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfView_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPdfView) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QPdfView_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QPdfView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_paintEvent
func miqt_exec_callback_QPdfView_paintEvent(self *C.QPdfView, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QPdfView_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QPdfView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_resizeEvent
func miqt_exec_callback_QPdfView_resizeEvent(self *C.QPdfView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QPdfView_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QPdfView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QPdfView_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_scrollContentsBy
func miqt_exec_callback_QPdfView_scrollContentsBy(self *C.QPdfView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QPdfView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QPdfView) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPdfView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfView) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPdfView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_minimumSizeHint
func miqt_exec_callback_QPdfView_minimumSizeHint(self *C.QPdfView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPdfView) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPdfView_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfView) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPdfView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_sizeHint
func miqt_exec_callback_QPdfView_sizeHint(self *C.QPdfView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPdfView) callVirtualBase_SetupViewport(viewport *qt6.QWidget) {

	C.QPdfView_virtualbase_setupViewport(unsafe.Pointer(this.h), (*C.QWidget)(viewport.UnsafePointer()))

}
func (this *QPdfView) OnSetupViewport(slot func(super func(viewport *qt6.QWidget), viewport *qt6.QWidget)) {
	ok := C.QPdfView_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_setupViewport
func miqt_exec_callback_QPdfView_setupViewport(self *C.QPdfView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *qt6.QWidget), viewport *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(viewport))

	gofunc((&QPdfView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QPdfView) callVirtualBase_EventFilter(param1 *qt6.QObject, param2 *qt6.QEvent) bool {

	return (bool)(C.QPdfView_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QPdfView) OnEventFilter(slot func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool) {
	ok := C.QPdfView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_eventFilter
func miqt_exec_callback_QPdfView_eventFilter(self *C.QPdfView, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_Event(param1 *qt6.QEvent) bool {

	return (bool)(C.QPdfView_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QPdfView) OnEvent(slot func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool) {
	ok := C.QPdfView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_event
func miqt_exec_callback_QPdfView_event(self *C.QPdfView, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_ViewportEvent(param1 *qt6.QEvent) bool {

	return (bool)(C.QPdfView_virtualbase_viewportEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QPdfView) OnViewportEvent(slot func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool) {
	ok := C.QPdfView_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_viewportEvent
func miqt_exec_callback_QPdfView_viewportEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_MousePressEvent(param1 *qt6.QMouseEvent) {

	C.QPdfView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnMousePressEvent(slot func(super func(param1 *qt6.QMouseEvent), param1 *qt6.QMouseEvent)) {
	ok := C.QPdfView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_mousePressEvent
func miqt_exec_callback_QPdfView_mousePressEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QMouseEvent), param1 *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_MouseReleaseEvent(param1 *qt6.QMouseEvent) {

	C.QPdfView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnMouseReleaseEvent(slot func(super func(param1 *qt6.QMouseEvent), param1 *qt6.QMouseEvent)) {
	ok := C.QPdfView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_mouseReleaseEvent
func miqt_exec_callback_QPdfView_mouseReleaseEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QMouseEvent), param1 *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_MouseDoubleClickEvent(param1 *qt6.QMouseEvent) {

	C.QPdfView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnMouseDoubleClickEvent(slot func(super func(param1 *qt6.QMouseEvent), param1 *qt6.QMouseEvent)) {
	ok := C.QPdfView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_mouseDoubleClickEvent
func miqt_exec_callback_QPdfView_mouseDoubleClickEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QMouseEvent), param1 *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_MouseMoveEvent(param1 *qt6.QMouseEvent) {

	C.QPdfView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnMouseMoveEvent(slot func(super func(param1 *qt6.QMouseEvent), param1 *qt6.QMouseEvent)) {
	ok := C.QPdfView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_mouseMoveEvent
func miqt_exec_callback_QPdfView_mouseMoveEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QMouseEvent), param1 *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_WheelEvent(param1 *qt6.QWheelEvent) {

	C.QPdfView_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnWheelEvent(slot func(super func(param1 *qt6.QWheelEvent), param1 *qt6.QWheelEvent)) {
	ok := C.QPdfView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_wheelEvent
func miqt_exec_callback_QPdfView_wheelEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QWheelEvent), param1 *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_ContextMenuEvent(param1 *qt6.QContextMenuEvent) {

	C.QPdfView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnContextMenuEvent(slot func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent)) {
	ok := C.QPdfView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_contextMenuEvent
func miqt_exec_callback_QPdfView_contextMenuEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_DragEnterEvent(param1 *qt6.QDragEnterEvent) {

	C.QPdfView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnDragEnterEvent(slot func(super func(param1 *qt6.QDragEnterEvent), param1 *qt6.QDragEnterEvent)) {
	ok := C.QPdfView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_dragEnterEvent
func miqt_exec_callback_QPdfView_dragEnterEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QDragEnterEvent), param1 *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_DragMoveEvent(param1 *qt6.QDragMoveEvent) {

	C.QPdfView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnDragMoveEvent(slot func(super func(param1 *qt6.QDragMoveEvent), param1 *qt6.QDragMoveEvent)) {
	ok := C.QPdfView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_dragMoveEvent
func miqt_exec_callback_QPdfView_dragMoveEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QDragMoveEvent), param1 *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_DragLeaveEvent(param1 *qt6.QDragLeaveEvent) {

	C.QPdfView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnDragLeaveEvent(slot func(super func(param1 *qt6.QDragLeaveEvent), param1 *qt6.QDragLeaveEvent)) {
	ok := C.QPdfView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_dragLeaveEvent
func miqt_exec_callback_QPdfView_dragLeaveEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QDragLeaveEvent), param1 *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_DropEvent(param1 *qt6.QDropEvent) {

	C.QPdfView_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnDropEvent(slot func(super func(param1 *qt6.QDropEvent), param1 *qt6.QDropEvent)) {
	ok := C.QPdfView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_dropEvent
func miqt_exec_callback_QPdfView_dropEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QDropEvent), param1 *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_KeyPressEvent(param1 *qt6.QKeyEvent) {

	C.QPdfView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnKeyPressEvent(slot func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent)) {
	ok := C.QPdfView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_keyPressEvent
func miqt_exec_callback_QPdfView_keyPressEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_ViewportSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPdfView_virtualbase_viewportSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfView) OnViewportSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QPdfView_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_viewportSizeHint
func miqt_exec_callback_QPdfView_viewportSizeHint(self *C.QPdfView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_ViewportSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPdfView) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QPdfView_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QPdfView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_changeEvent
func miqt_exec_callback_QPdfView_changeEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_InitStyleOption(option *qt6.QStyleOptionFrame) {

	C.QPdfView_virtualbase_initStyleOption(unsafe.Pointer(this.h), (*C.QStyleOptionFrame)(option.UnsafePointer()))

}
func (this *QPdfView) OnInitStyleOption(slot func(super func(option *qt6.QStyleOptionFrame), option *qt6.QStyleOptionFrame)) {
	ok := C.QPdfView_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_initStyleOption
func miqt_exec_callback_QPdfView_initStyleOption(self *C.QPdfView, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *qt6.QStyleOptionFrame), option *qt6.QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQStyleOptionFrame(unsafe.Pointer(option))

	gofunc((&QPdfView{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QPdfView) callVirtualBase_DevType() int {

	return (int)(C.QPdfView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPdfView) OnDevType(slot func(super func() int) int) {
	ok := C.QPdfView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_devType
func miqt_exec_callback_QPdfView_devType(self *C.QPdfView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_SetVisible(visible bool) {

	C.QPdfView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPdfView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPdfView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_setVisible
func miqt_exec_callback_QPdfView_setVisible(self *C.QPdfView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPdfView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPdfView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPdfView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPdfView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPdfView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_heightForWidth
func miqt_exec_callback_QPdfView_heightForWidth(self *C.QPdfView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QPdfView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPdfView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPdfView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_hasHeightForWidth
func miqt_exec_callback_QPdfView_hasHeightForWidth(self *C.QPdfView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPdfView_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QPdfView) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QPdfView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_paintEngine
func miqt_exec_callback_QPdfView_paintEngine(self *C.QPdfView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPdfView) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QPdfView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPdfView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_keyReleaseEvent
func miqt_exec_callback_QPdfView_keyReleaseEvent(self *C.QPdfView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QPdfView_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPdfView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_focusInEvent
func miqt_exec_callback_QPdfView_focusInEvent(self *C.QPdfView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QPdfView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPdfView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_focusOutEvent
func miqt_exec_callback_QPdfView_focusOutEvent(self *C.QPdfView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QPdfView_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QPdfView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_enterEvent
func miqt_exec_callback_QPdfView_enterEvent(self *C.QPdfView, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QPdfView_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPdfView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_leaveEvent
func miqt_exec_callback_QPdfView_leaveEvent(self *C.QPdfView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QPdfView_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QPdfView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_moveEvent
func miqt_exec_callback_QPdfView_moveEvent(self *C.QPdfView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QPdfView_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QPdfView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_closeEvent
func miqt_exec_callback_QPdfView_closeEvent(self *C.QPdfView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QPdfView_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QPdfView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_tabletEvent
func miqt_exec_callback_QPdfView_tabletEvent(self *C.QPdfView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QPdfView_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QPdfView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_actionEvent
func miqt_exec_callback_QPdfView_actionEvent(self *C.QPdfView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QPdfView_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QPdfView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_showEvent
func miqt_exec_callback_QPdfView_showEvent(self *C.QPdfView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QPdfView_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QPdfView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_hideEvent
func miqt_exec_callback_QPdfView_hideEvent(self *C.QPdfView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QPdfView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QPdfView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QPdfView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_nativeEvent
func miqt_exec_callback_QPdfView_nativeEvent(self *C.QPdfView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPdfView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPdfView) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPdfView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_metric
func miqt_exec_callback_QPdfView_metric(self *C.QPdfView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QPdfView_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPdfView) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QPdfView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_initPainter
func miqt_exec_callback_QPdfView_initPainter(self *C.QPdfView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QPdfView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPdfView) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPdfView_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPdfView) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QPdfView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_redirected
func miqt_exec_callback_QPdfView_redirected(self *C.QPdfView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QPdfView) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPdfView_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPdfView) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QPdfView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_sharedPainter
func miqt_exec_callback_QPdfView_sharedPainter(self *C.QPdfView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QPdfView) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QPdfView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QPdfView) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QPdfView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_inputMethodEvent
func miqt_exec_callback_QPdfView_inputMethodEvent(self *C.QPdfView, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QPdfView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPdfView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfView) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QPdfView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_inputMethodQuery
func miqt_exec_callback_QPdfView_inputMethodQuery(self *C.QPdfView, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPdfView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QPdfView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPdfView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPdfView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_focusNextPrevChild
func miqt_exec_callback_QPdfView_focusNextPrevChild(self *C.QPdfView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QPdfView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfView) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPdfView_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPdfView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_timerEvent
func miqt_exec_callback_QPdfView_timerEvent(self *C.QPdfView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPdfView_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPdfView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_childEvent
func miqt_exec_callback_QPdfView_childEvent(self *C.QPdfView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPdfView_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPdfView) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPdfView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_customEvent
func miqt_exec_callback_QPdfView_customEvent(self *C.QPdfView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPdfView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPdfView) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPdfView_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfView) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPdfView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_connectNotify
func miqt_exec_callback_QPdfView_connectNotify(self *C.QPdfView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPdfView) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPdfView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfView) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPdfView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfView_disconnectNotify
func miqt_exec_callback_QPdfView_disconnectNotify(self *C.QPdfView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPdfView) Delete() {
	C.QPdfView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfView) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
