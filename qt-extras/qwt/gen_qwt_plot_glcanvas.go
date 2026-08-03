package qwt

/*

#include "gen_qwt_plot_glcanvas.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/opengl"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotGLCanvas__Shadow int

const (
	QwtPlotGLCanvas__Plain  QwtPlotGLCanvas__Shadow = 16
	QwtPlotGLCanvas__Raised QwtPlotGLCanvas__Shadow = 32
	QwtPlotGLCanvas__Sunken QwtPlotGLCanvas__Shadow = 48
)

type QwtPlotGLCanvas__Shape int

const (
	QwtPlotGLCanvas__NoFrame QwtPlotGLCanvas__Shape = 0
	QwtPlotGLCanvas__Box     QwtPlotGLCanvas__Shape = 1
	QwtPlotGLCanvas__Panel   QwtPlotGLCanvas__Shape = 2
)

type QwtPlotGLCanvas struct {
	h *C.QwtPlotGLCanvas
	*opengl.QGLWidget
}

func (this *QwtPlotGLCanvas) cPointer() *C.QwtPlotGLCanvas {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotGLCanvas) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotGLCanvas constructs the type using only CGO pointers.
func newQwtPlotGLCanvas(h *C.QwtPlotGLCanvas) *QwtPlotGLCanvas {
	if h == nil {
		return nil
	}
	var outptr_QGLWidget *C.QGLWidget = nil
	C.QwtPlotGLCanvas_virtbase(h, &outptr_QGLWidget)

	return &QwtPlotGLCanvas{h: h,
		QGLWidget: opengl.UnsafeNewQGLWidget(unsafe.Pointer(outptr_QGLWidget))}
}

// UnsafeNewQwtPlotGLCanvas constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotGLCanvas(h unsafe.Pointer) *QwtPlotGLCanvas {
	return newQwtPlotGLCanvas((*C.QwtPlotGLCanvas)(h))
}

// NewQwtPlotGLCanvas constructs a new QwtPlotGLCanvas object.
func NewQwtPlotGLCanvas() *QwtPlotGLCanvas {

	return newQwtPlotGLCanvas(C.QwtPlotGLCanvas_new())
}

// NewQwtPlotGLCanvas2 constructs a new QwtPlotGLCanvas object.
func NewQwtPlotGLCanvas2(param1 *QwtPlot) *QwtPlotGLCanvas {

	return newQwtPlotGLCanvas(C.QwtPlotGLCanvas_new2(param1.cPointer()))
}

func (this *QwtPlotGLCanvas) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtPlotGLCanvas_metaObject(this.h)))
}

func (this *QwtPlotGLCanvas) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtPlotGLCanvas_metacast(this.h, param1_Cstring))
}

func QwtPlotGLCanvas_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotGLCanvas_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotGLCanvas_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotGLCanvas_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlotGLCanvas) SetFrameStyle(style int) {
	C.QwtPlotGLCanvas_setFrameStyle(this.h, (C.int)(style))
}

func (this *QwtPlotGLCanvas) FrameStyle() int {
	return (int)(C.QwtPlotGLCanvas_frameStyle(this.h))
}

func (this *QwtPlotGLCanvas) SetFrameShadow(frameShadow QwtPlotGLCanvas__Shadow) {
	C.QwtPlotGLCanvas_setFrameShadow(this.h, (C.int)(frameShadow))
}

func (this *QwtPlotGLCanvas) FrameShadow() QwtPlotGLCanvas__Shadow {
	return (QwtPlotGLCanvas__Shadow)(C.QwtPlotGLCanvas_frameShadow(this.h))
}

func (this *QwtPlotGLCanvas) SetFrameShape(frameShape QwtPlotGLCanvas__Shape) {
	C.QwtPlotGLCanvas_setFrameShape(this.h, (C.int)(frameShape))
}

func (this *QwtPlotGLCanvas) FrameShape() QwtPlotGLCanvas__Shape {
	return (QwtPlotGLCanvas__Shape)(C.QwtPlotGLCanvas_frameShape(this.h))
}

func (this *QwtPlotGLCanvas) SetLineWidth(lineWidth int) {
	C.QwtPlotGLCanvas_setLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QwtPlotGLCanvas) LineWidth() int {
	return (int)(C.QwtPlotGLCanvas_lineWidth(this.h))
}

func (this *QwtPlotGLCanvas) SetMidLineWidth(midLineWidth int) {
	C.QwtPlotGLCanvas_setMidLineWidth(this.h, (C.int)(midLineWidth))
}

func (this *QwtPlotGLCanvas) MidLineWidth() int {
	return (int)(C.QwtPlotGLCanvas_midLineWidth(this.h))
}

func (this *QwtPlotGLCanvas) FrameWidth() int {
	return (int)(C.QwtPlotGLCanvas_frameWidth(this.h))
}

func (this *QwtPlotGLCanvas) FrameRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtPlotGLCanvas_frameRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotGLCanvas) BorderPath(param1 *qt.QRect) *qt.QPainterPath {
	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPlotGLCanvas_borderPath(this.h, (*C.QRect)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotGLCanvas) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QwtPlotGLCanvas_event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QwtPlotGLCanvas) Replot() {
	C.QwtPlotGLCanvas_replot(this.h)
}

func QwtPlotGLCanvas_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotGLCanvas_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotGLCanvas_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotGLCanvas_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotGLCanvas_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotGLCanvas_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotGLCanvas_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotGLCanvas_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetAutoBufferSwap can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) SetAutoBufferSwap(on bool) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotGLCanvas_protectedbase_setAutoBufferSwap(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(on))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AutoBufferSwap can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) AutoBufferSwap() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotGLCanvas_protectedbase_autoBufferSwap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotGLCanvas_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotGLCanvas_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotGLCanvas_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotGLCanvas_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotGLCanvas_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlotGLCanvas_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotGLCanvas_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotGLCanvas_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlotGLCanvas that was directly constructed.
func (this *QwtPlotGLCanvas) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotGLCanvas_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPlotGLCanvas) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QwtPlotGLCanvas_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QwtPlotGLCanvas) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QwtPlotGLCanvas_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_event
func miqt_exec_callback_QwtPlotGLCanvas_event(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotGLCanvas) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtPlotGLCanvas_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_paintEvent
func miqt_exec_callback_QwtPlotGLCanvas_paintEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DrawBackground(param1 *qt.QPainter) {

	C.QwtPlotGLCanvas_virtualbase_drawBackground(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnDrawBackground(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotGLCanvas_override_virtual_drawBackground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_drawBackground
func miqt_exec_callback_QwtPlotGLCanvas_drawBackground(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DrawBackground, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DrawBorder(param1 *qt.QPainter) {

	C.QwtPlotGLCanvas_virtualbase_drawBorder(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnDrawBorder(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotGLCanvas_override_virtual_drawBorder(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_drawBorder
func miqt_exec_callback_QwtPlotGLCanvas_drawBorder(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DrawBorder, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DrawItems(param1 *qt.QPainter) {

	C.QwtPlotGLCanvas_virtualbase_drawItems(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnDrawItems(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotGLCanvas_override_virtual_drawItems(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_drawItems
func miqt_exec_callback_QwtPlotGLCanvas_drawItems(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DrawItems, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtPlotGLCanvas_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtPlotGLCanvas) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtPlotGLCanvas_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_paintEngine
func miqt_exec_callback_QwtPlotGLCanvas_paintEngine(self *C.QwtPlotGLCanvas, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotGLCanvas) callVirtualBase_UpdateGL() {

	C.QwtPlotGLCanvas_virtualbase_updateGL(unsafe.Pointer(this.h))

}
func (this *QwtPlotGLCanvas) OnUpdateGL(slot func(super func())) {
	ok := C.QwtPlotGLCanvas_override_virtual_updateGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_updateGL
func miqt_exec_callback_QwtPlotGLCanvas_updateGL(self *C.QwtPlotGLCanvas, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_UpdateGL)

}

func (this *QwtPlotGLCanvas) callVirtualBase_UpdateOverlayGL() {

	C.QwtPlotGLCanvas_virtualbase_updateOverlayGL(unsafe.Pointer(this.h))

}
func (this *QwtPlotGLCanvas) OnUpdateOverlayGL(slot func(super func())) {
	ok := C.QwtPlotGLCanvas_override_virtual_updateOverlayGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_updateOverlayGL
func miqt_exec_callback_QwtPlotGLCanvas_updateOverlayGL(self *C.QwtPlotGLCanvas, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_UpdateOverlayGL)

}

func (this *QwtPlotGLCanvas) callVirtualBase_InitializeGL() {

	C.QwtPlotGLCanvas_virtualbase_initializeGL(unsafe.Pointer(this.h))

}
func (this *QwtPlotGLCanvas) OnInitializeGL(slot func(super func())) {
	ok := C.QwtPlotGLCanvas_override_virtual_initializeGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_initializeGL
func miqt_exec_callback_QwtPlotGLCanvas_initializeGL(self *C.QwtPlotGLCanvas, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_InitializeGL)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ResizeGL(w int, h int) {

	C.QwtPlotGLCanvas_virtualbase_resizeGL(unsafe.Pointer(this.h), (C.int)(w), (C.int)(h))

}
func (this *QwtPlotGLCanvas) OnResizeGL(slot func(super func(w int, h int), w int, h int)) {
	ok := C.QwtPlotGLCanvas_override_virtual_resizeGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_resizeGL
func miqt_exec_callback_QwtPlotGLCanvas_resizeGL(self *C.QwtPlotGLCanvas, cb C.intptr_t, w C.int, h C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(w int, h int), w int, h int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(w)

	slotval2 := (int)(h)

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ResizeGL, slotval1, slotval2)

}

func (this *QwtPlotGLCanvas) callVirtualBase_PaintGL() {

	C.QwtPlotGLCanvas_virtualbase_paintGL(unsafe.Pointer(this.h))

}
func (this *QwtPlotGLCanvas) OnPaintGL(slot func(super func())) {
	ok := C.QwtPlotGLCanvas_override_virtual_paintGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_paintGL
func miqt_exec_callback_QwtPlotGLCanvas_paintGL(self *C.QwtPlotGLCanvas, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_PaintGL)

}

func (this *QwtPlotGLCanvas) callVirtualBase_InitializeOverlayGL() {

	C.QwtPlotGLCanvas_virtualbase_initializeOverlayGL(unsafe.Pointer(this.h))

}
func (this *QwtPlotGLCanvas) OnInitializeOverlayGL(slot func(super func())) {
	ok := C.QwtPlotGLCanvas_override_virtual_initializeOverlayGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_initializeOverlayGL
func miqt_exec_callback_QwtPlotGLCanvas_initializeOverlayGL(self *C.QwtPlotGLCanvas, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_InitializeOverlayGL)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ResizeOverlayGL(w int, h int) {

	C.QwtPlotGLCanvas_virtualbase_resizeOverlayGL(unsafe.Pointer(this.h), (C.int)(w), (C.int)(h))

}
func (this *QwtPlotGLCanvas) OnResizeOverlayGL(slot func(super func(w int, h int), w int, h int)) {
	ok := C.QwtPlotGLCanvas_override_virtual_resizeOverlayGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_resizeOverlayGL
func miqt_exec_callback_QwtPlotGLCanvas_resizeOverlayGL(self *C.QwtPlotGLCanvas, cb C.intptr_t, w C.int, h C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(w int, h int), w int, h int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(w)

	slotval2 := (int)(h)

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ResizeOverlayGL, slotval1, slotval2)

}

func (this *QwtPlotGLCanvas) callVirtualBase_PaintOverlayGL() {

	C.QwtPlotGLCanvas_virtualbase_paintOverlayGL(unsafe.Pointer(this.h))

}
func (this *QwtPlotGLCanvas) OnPaintOverlayGL(slot func(super func())) {
	ok := C.QwtPlotGLCanvas_override_virtual_paintOverlayGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_paintOverlayGL
func miqt_exec_callback_QwtPlotGLCanvas_paintOverlayGL(self *C.QwtPlotGLCanvas, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_PaintOverlayGL)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QwtPlotGLCanvas_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_resizeEvent
func miqt_exec_callback_QwtPlotGLCanvas_resizeEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_GlInit() {

	C.QwtPlotGLCanvas_virtualbase_glInit(unsafe.Pointer(this.h))

}
func (this *QwtPlotGLCanvas) OnGlInit(slot func(super func())) {
	ok := C.QwtPlotGLCanvas_override_virtual_glInit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_glInit
func miqt_exec_callback_QwtPlotGLCanvas_glInit(self *C.QwtPlotGLCanvas, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_GlInit)

}

func (this *QwtPlotGLCanvas) callVirtualBase_GlDraw() {

	C.QwtPlotGLCanvas_virtualbase_glDraw(unsafe.Pointer(this.h))

}
func (this *QwtPlotGLCanvas) OnGlDraw(slot func(super func())) {
	ok := C.QwtPlotGLCanvas_override_virtual_glDraw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_glDraw
func miqt_exec_callback_QwtPlotGLCanvas_glDraw(self *C.QwtPlotGLCanvas, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_GlDraw)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DevType() int {

	return (int)(C.QwtPlotGLCanvas_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtPlotGLCanvas) OnDevType(slot func(super func() int) int) {
	ok := C.QwtPlotGLCanvas_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_devType
func miqt_exec_callback_QwtPlotGLCanvas_devType(self *C.QwtPlotGLCanvas, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtPlotGLCanvas) callVirtualBase_SetVisible(visible bool) {

	C.QwtPlotGLCanvas_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtPlotGLCanvas) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtPlotGLCanvas_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_setVisible
func miqt_exec_callback_QwtPlotGLCanvas_setVisible(self *C.QwtPlotGLCanvas, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlotGLCanvas_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotGLCanvas) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtPlotGLCanvas_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_sizeHint
func miqt_exec_callback_QwtPlotGLCanvas_sizeHint(self *C.QwtPlotGLCanvas, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotGLCanvas) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlotGLCanvas_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotGLCanvas) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtPlotGLCanvas_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_minimumSizeHint
func miqt_exec_callback_QwtPlotGLCanvas_minimumSizeHint(self *C.QwtPlotGLCanvas, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotGLCanvas) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtPlotGLCanvas_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtPlotGLCanvas) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtPlotGLCanvas_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_heightForWidth
func miqt_exec_callback_QwtPlotGLCanvas_heightForWidth(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtPlotGLCanvas) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtPlotGLCanvas_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtPlotGLCanvas) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtPlotGLCanvas_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_hasHeightForWidth
func miqt_exec_callback_QwtPlotGLCanvas_hasHeightForWidth(self *C.QwtPlotGLCanvas, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotGLCanvas) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtPlotGLCanvas_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_mousePressEvent
func miqt_exec_callback_QwtPlotGLCanvas_mousePressEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtPlotGLCanvas_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_mouseReleaseEvent
func miqt_exec_callback_QwtPlotGLCanvas_mouseReleaseEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtPlotGLCanvas_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_mouseDoubleClickEvent
func miqt_exec_callback_QwtPlotGLCanvas_mouseDoubleClickEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtPlotGLCanvas_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_mouseMoveEvent
func miqt_exec_callback_QwtPlotGLCanvas_mouseMoveEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtPlotGLCanvas_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_wheelEvent
func miqt_exec_callback_QwtPlotGLCanvas_wheelEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtPlotGLCanvas_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_keyPressEvent
func miqt_exec_callback_QwtPlotGLCanvas_keyPressEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtPlotGLCanvas_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_keyReleaseEvent
func miqt_exec_callback_QwtPlotGLCanvas_keyReleaseEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtPlotGLCanvas_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_focusInEvent
func miqt_exec_callback_QwtPlotGLCanvas_focusInEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtPlotGLCanvas_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_focusOutEvent
func miqt_exec_callback_QwtPlotGLCanvas_focusOutEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtPlotGLCanvas_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_enterEvent
func miqt_exec_callback_QwtPlotGLCanvas_enterEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtPlotGLCanvas_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_leaveEvent
func miqt_exec_callback_QwtPlotGLCanvas_leaveEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtPlotGLCanvas_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_moveEvent
func miqt_exec_callback_QwtPlotGLCanvas_moveEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtPlotGLCanvas_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_closeEvent
func miqt_exec_callback_QwtPlotGLCanvas_closeEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtPlotGLCanvas_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_contextMenuEvent
func miqt_exec_callback_QwtPlotGLCanvas_contextMenuEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtPlotGLCanvas_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_tabletEvent
func miqt_exec_callback_QwtPlotGLCanvas_tabletEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtPlotGLCanvas_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_actionEvent
func miqt_exec_callback_QwtPlotGLCanvas_actionEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtPlotGLCanvas_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_dragEnterEvent
func miqt_exec_callback_QwtPlotGLCanvas_dragEnterEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtPlotGLCanvas_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_dragMoveEvent
func miqt_exec_callback_QwtPlotGLCanvas_dragMoveEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtPlotGLCanvas_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_dragLeaveEvent
func miqt_exec_callback_QwtPlotGLCanvas_dragLeaveEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtPlotGLCanvas_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_dropEvent
func miqt_exec_callback_QwtPlotGLCanvas_dropEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtPlotGLCanvas_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_showEvent
func miqt_exec_callback_QwtPlotGLCanvas_showEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtPlotGLCanvas_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_hideEvent
func miqt_exec_callback_QwtPlotGLCanvas_hideEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtPlotGLCanvas_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtPlotGLCanvas) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtPlotGLCanvas_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_nativeEvent
func miqt_exec_callback_QwtPlotGLCanvas_nativeEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtPlotGLCanvas_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_changeEvent
func miqt_exec_callback_QwtPlotGLCanvas_changeEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtPlotGLCanvas_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtPlotGLCanvas) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtPlotGLCanvas_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_metric
func miqt_exec_callback_QwtPlotGLCanvas_metric(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtPlotGLCanvas) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtPlotGLCanvas_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtPlotGLCanvas_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_initPainter
func miqt_exec_callback_QwtPlotGLCanvas_initPainter(self *C.QwtPlotGLCanvas, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtPlotGLCanvas_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtPlotGLCanvas) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtPlotGLCanvas_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_redirected
func miqt_exec_callback_QwtPlotGLCanvas_redirected(self *C.QwtPlotGLCanvas, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotGLCanvas) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtPlotGLCanvas_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtPlotGLCanvas) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtPlotGLCanvas_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_sharedPainter
func miqt_exec_callback_QwtPlotGLCanvas_sharedPainter(self *C.QwtPlotGLCanvas, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotGLCanvas) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtPlotGLCanvas_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_inputMethodEvent
func miqt_exec_callback_QwtPlotGLCanvas_inputMethodEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtPlotGLCanvas_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotGLCanvas) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtPlotGLCanvas_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_inputMethodQuery
func miqt_exec_callback_QwtPlotGLCanvas_inputMethodQuery(self *C.QwtPlotGLCanvas, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotGLCanvas) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtPlotGLCanvas_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtPlotGLCanvas) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtPlotGLCanvas_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_focusNextPrevChild
func miqt_exec_callback_QwtPlotGLCanvas_focusNextPrevChild(self *C.QwtPlotGLCanvas, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotGLCanvas) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtPlotGLCanvas_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotGLCanvas) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtPlotGLCanvas_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_eventFilter
func miqt_exec_callback_QwtPlotGLCanvas_eventFilter(self *C.QwtPlotGLCanvas, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotGLCanvas) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtPlotGLCanvas_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_timerEvent
func miqt_exec_callback_QwtPlotGLCanvas_timerEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtPlotGLCanvas_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_childEvent
func miqt_exec_callback_QwtPlotGLCanvas_childEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtPlotGLCanvas_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotGLCanvas_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_customEvent
func miqt_exec_callback_QwtPlotGLCanvas_customEvent(self *C.QwtPlotGLCanvas, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotGLCanvas_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotGLCanvas_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_connectNotify
func miqt_exec_callback_QwtPlotGLCanvas_connectNotify(self *C.QwtPlotGLCanvas, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlotGLCanvas) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotGLCanvas_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotGLCanvas) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotGLCanvas_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotGLCanvas_disconnectNotify
func miqt_exec_callback_QwtPlotGLCanvas_disconnectNotify(self *C.QwtPlotGLCanvas, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotGLCanvas{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtPlotGLCanvas) Delete() {
	C.QwtPlotGLCanvas_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotGLCanvas) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotGLCanvas) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
