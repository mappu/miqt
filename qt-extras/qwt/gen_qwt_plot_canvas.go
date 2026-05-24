package qwt

/*

#include "gen_qwt_plot_canvas.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotCanvas__PaintAttribute int

const (
	QwtPlotCanvas__BackingStore         QwtPlotCanvas__PaintAttribute = 1
	QwtPlotCanvas__Opaque               QwtPlotCanvas__PaintAttribute = 2
	QwtPlotCanvas__HackStyledBackground QwtPlotCanvas__PaintAttribute = 4
	QwtPlotCanvas__ImmediatePaint       QwtPlotCanvas__PaintAttribute = 8
)

type QwtPlotCanvas__FocusIndicator int

const (
	QwtPlotCanvas__NoFocusIndicator     QwtPlotCanvas__FocusIndicator = 0
	QwtPlotCanvas__CanvasFocusIndicator QwtPlotCanvas__FocusIndicator = 1
	QwtPlotCanvas__ItemFocusIndicator   QwtPlotCanvas__FocusIndicator = 2
)

type QwtPlotCanvas struct {
	h *C.QwtPlotCanvas
	*qt.QFrame
}

func (this *QwtPlotCanvas) cPointer() *C.QwtPlotCanvas {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotCanvas) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotCanvas constructs the type using only CGO pointers.
func newQwtPlotCanvas(h *C.QwtPlotCanvas) *QwtPlotCanvas {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QwtPlotCanvas_virtbase(h, &outptr_QFrame)

	return &QwtPlotCanvas{h: h,
		QFrame: qt.UnsafeNewQFrame(unsafe.Pointer(outptr_QFrame))}
}

// UnsafeNewQwtPlotCanvas constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotCanvas(h unsafe.Pointer) *QwtPlotCanvas {
	return newQwtPlotCanvas((*C.QwtPlotCanvas)(h))
}

// NewQwtPlotCanvas constructs a new QwtPlotCanvas object.
func NewQwtPlotCanvas() *QwtPlotCanvas {

	return newQwtPlotCanvas(C.QwtPlotCanvas_new())
}

// NewQwtPlotCanvas2 constructs a new QwtPlotCanvas object.
func NewQwtPlotCanvas2(param1 *QwtPlot) *QwtPlotCanvas {

	return newQwtPlotCanvas(C.QwtPlotCanvas_new2(param1.cPointer()))
}

func (this *QwtPlotCanvas) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtPlotCanvas_metaObject(this.h)))
}

func (this *QwtPlotCanvas) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtPlotCanvas_metacast(this.h, param1_Cstring))
}

func QwtPlotCanvas_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotCanvas_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotCanvas_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotCanvas_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlotCanvas) Plot() *QwtPlot {
	return newQwtPlot(C.QwtPlotCanvas_plot(this.h))
}

func (this *QwtPlotCanvas) Plot2() *QwtPlot {
	return newQwtPlot(C.QwtPlotCanvas_plot2(this.h))
}

func (this *QwtPlotCanvas) SetFocusIndicator(focusIndicator QwtPlotCanvas__FocusIndicator) {
	C.QwtPlotCanvas_setFocusIndicator(this.h, (C.int)(focusIndicator))
}

func (this *QwtPlotCanvas) FocusIndicator() QwtPlotCanvas__FocusIndicator {
	return (QwtPlotCanvas__FocusIndicator)(C.QwtPlotCanvas_focusIndicator(this.h))
}

func (this *QwtPlotCanvas) SetBorderRadius(borderRadius float64) {
	C.QwtPlotCanvas_setBorderRadius(this.h, (C.double)(borderRadius))
}

func (this *QwtPlotCanvas) BorderRadius() float64 {
	return (float64)(C.QwtPlotCanvas_borderRadius(this.h))
}

func (this *QwtPlotCanvas) SetPaintAttribute(param1 QwtPlotCanvas__PaintAttribute) {
	C.QwtPlotCanvas_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotCanvas) TestPaintAttribute(param1 QwtPlotCanvas__PaintAttribute) bool {
	return (bool)(C.QwtPlotCanvas_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotCanvas) BackingStore() *qt.QPixmap {
	return qt.UnsafeNewQPixmap(unsafe.Pointer(C.QwtPlotCanvas_backingStore(this.h)))
}

func (this *QwtPlotCanvas) InvalidateBackingStore() {
	C.QwtPlotCanvas_invalidateBackingStore(this.h)
}

func (this *QwtPlotCanvas) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QwtPlotCanvas_event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QwtPlotCanvas) BorderPath(param1 *qt.QRect) *qt.QPainterPath {
	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPlotCanvas_borderPath(this.h, (*C.QRect)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotCanvas) Replot() {
	C.QwtPlotCanvas_replot(this.h)
}

func QwtPlotCanvas_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotCanvas_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotCanvas_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotCanvas_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotCanvas_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotCanvas_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotCanvas_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotCanvas_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlotCanvas) SetPaintAttribute2(param1 QwtPlotCanvas__PaintAttribute, on bool) {
	C.QwtPlotCanvas_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

// UpdateStyleSheetInfo can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) UpdateStyleSheetInfo() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotCanvas_protectedbase_updateStyleSheetInfo(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DrawFrame can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) DrawFrame(param1 *qt.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotCanvas_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) InitStyleOption(option *qt.QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotCanvas_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QStyleOptionFrame)(option.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotCanvas_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotCanvas_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotCanvas_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotCanvas_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotCanvas_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlotCanvas_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotCanvas_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotCanvas_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlotCanvas that was directly constructed.
func (this *QwtPlotCanvas) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotCanvas_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPlotCanvas) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QwtPlotCanvas_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QwtPlotCanvas) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QwtPlotCanvas_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_event
func miqt_exec_callback_QwtPlotCanvas_event(self *C.QwtPlotCanvas, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotCanvas) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtPlotCanvas_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_paintEvent
func miqt_exec_callback_QwtPlotCanvas_paintEvent(self *C.QwtPlotCanvas, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QwtPlotCanvas_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_resizeEvent
func miqt_exec_callback_QwtPlotCanvas_resizeEvent(self *C.QwtPlotCanvas, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_DrawFocusIndicator(param1 *qt.QPainter) {

	C.QwtPlotCanvas_virtualbase_drawFocusIndicator(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnDrawFocusIndicator(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotCanvas_override_virtual_drawFocusIndicator(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_drawFocusIndicator
func miqt_exec_callback_QwtPlotCanvas_drawFocusIndicator(self *C.QwtPlotCanvas, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_DrawFocusIndicator, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_DrawBorder(param1 *qt.QPainter) {

	C.QwtPlotCanvas_virtualbase_drawBorder(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnDrawBorder(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotCanvas_override_virtual_drawBorder(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_drawBorder
func miqt_exec_callback_QwtPlotCanvas_drawBorder(self *C.QwtPlotCanvas, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_DrawBorder, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlotCanvas_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotCanvas) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtPlotCanvas_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_sizeHint
func miqt_exec_callback_QwtPlotCanvas_sizeHint(self *C.QwtPlotCanvas, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotCanvas) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtPlotCanvas_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_changeEvent
func miqt_exec_callback_QwtPlotCanvas_changeEvent(self *C.QwtPlotCanvas, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_DevType() int {

	return (int)(C.QwtPlotCanvas_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtPlotCanvas) OnDevType(slot func(super func() int) int) {
	ok := C.QwtPlotCanvas_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_devType
func miqt_exec_callback_QwtPlotCanvas_devType(self *C.QwtPlotCanvas, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtPlotCanvas) callVirtualBase_SetVisible(visible bool) {

	C.QwtPlotCanvas_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtPlotCanvas) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtPlotCanvas_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_setVisible
func miqt_exec_callback_QwtPlotCanvas_setVisible(self *C.QwtPlotCanvas, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlotCanvas_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotCanvas) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtPlotCanvas_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_minimumSizeHint
func miqt_exec_callback_QwtPlotCanvas_minimumSizeHint(self *C.QwtPlotCanvas, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotCanvas) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtPlotCanvas_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtPlotCanvas) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtPlotCanvas_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_heightForWidth
func miqt_exec_callback_QwtPlotCanvas_heightForWidth(self *C.QwtPlotCanvas, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtPlotCanvas) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtPlotCanvas_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtPlotCanvas) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtPlotCanvas_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_hasHeightForWidth
func miqt_exec_callback_QwtPlotCanvas_hasHeightForWidth(self *C.QwtPlotCanvas, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotCanvas) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtPlotCanvas_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtPlotCanvas) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtPlotCanvas_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_paintEngine
func miqt_exec_callback_QwtPlotCanvas_paintEngine(self *C.QwtPlotCanvas, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotCanvas) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtPlotCanvas_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_mousePressEvent
func miqt_exec_callback_QwtPlotCanvas_mousePressEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtPlotCanvas_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_mouseReleaseEvent
func miqt_exec_callback_QwtPlotCanvas_mouseReleaseEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtPlotCanvas_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_mouseDoubleClickEvent
func miqt_exec_callback_QwtPlotCanvas_mouseDoubleClickEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtPlotCanvas_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_mouseMoveEvent
func miqt_exec_callback_QwtPlotCanvas_mouseMoveEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtPlotCanvas_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_wheelEvent
func miqt_exec_callback_QwtPlotCanvas_wheelEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtPlotCanvas_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_keyPressEvent
func miqt_exec_callback_QwtPlotCanvas_keyPressEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtPlotCanvas_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_keyReleaseEvent
func miqt_exec_callback_QwtPlotCanvas_keyReleaseEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtPlotCanvas_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_focusInEvent
func miqt_exec_callback_QwtPlotCanvas_focusInEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtPlotCanvas_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_focusOutEvent
func miqt_exec_callback_QwtPlotCanvas_focusOutEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtPlotCanvas_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_enterEvent
func miqt_exec_callback_QwtPlotCanvas_enterEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtPlotCanvas_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_leaveEvent
func miqt_exec_callback_QwtPlotCanvas_leaveEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtPlotCanvas_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_moveEvent
func miqt_exec_callback_QwtPlotCanvas_moveEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtPlotCanvas_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_closeEvent
func miqt_exec_callback_QwtPlotCanvas_closeEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtPlotCanvas_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_contextMenuEvent
func miqt_exec_callback_QwtPlotCanvas_contextMenuEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtPlotCanvas_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_tabletEvent
func miqt_exec_callback_QwtPlotCanvas_tabletEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtPlotCanvas_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_actionEvent
func miqt_exec_callback_QwtPlotCanvas_actionEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtPlotCanvas_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_dragEnterEvent
func miqt_exec_callback_QwtPlotCanvas_dragEnterEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtPlotCanvas_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_dragMoveEvent
func miqt_exec_callback_QwtPlotCanvas_dragMoveEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtPlotCanvas_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_dragLeaveEvent
func miqt_exec_callback_QwtPlotCanvas_dragLeaveEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtPlotCanvas_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_dropEvent
func miqt_exec_callback_QwtPlotCanvas_dropEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtPlotCanvas_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_showEvent
func miqt_exec_callback_QwtPlotCanvas_showEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtPlotCanvas_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_hideEvent
func miqt_exec_callback_QwtPlotCanvas_hideEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtPlotCanvas_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtPlotCanvas) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtPlotCanvas_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_nativeEvent
func miqt_exec_callback_QwtPlotCanvas_nativeEvent(self *C.QwtPlotCanvas, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotCanvas) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtPlotCanvas_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtPlotCanvas) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtPlotCanvas_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_metric
func miqt_exec_callback_QwtPlotCanvas_metric(self *C.QwtPlotCanvas, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtPlotCanvas) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtPlotCanvas_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtPlotCanvas_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_initPainter
func miqt_exec_callback_QwtPlotCanvas_initPainter(self *C.QwtPlotCanvas, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtPlotCanvas_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtPlotCanvas) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtPlotCanvas_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_redirected
func miqt_exec_callback_QwtPlotCanvas_redirected(self *C.QwtPlotCanvas, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotCanvas) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtPlotCanvas_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtPlotCanvas) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtPlotCanvas_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_sharedPainter
func miqt_exec_callback_QwtPlotCanvas_sharedPainter(self *C.QwtPlotCanvas, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotCanvas) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtPlotCanvas_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_inputMethodEvent
func miqt_exec_callback_QwtPlotCanvas_inputMethodEvent(self *C.QwtPlotCanvas, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtPlotCanvas_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotCanvas) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtPlotCanvas_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_inputMethodQuery
func miqt_exec_callback_QwtPlotCanvas_inputMethodQuery(self *C.QwtPlotCanvas, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotCanvas) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtPlotCanvas_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtPlotCanvas) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtPlotCanvas_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_focusNextPrevChild
func miqt_exec_callback_QwtPlotCanvas_focusNextPrevChild(self *C.QwtPlotCanvas, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotCanvas) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtPlotCanvas_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotCanvas) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtPlotCanvas_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_eventFilter
func miqt_exec_callback_QwtPlotCanvas_eventFilter(self *C.QwtPlotCanvas, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotCanvas) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtPlotCanvas_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_timerEvent
func miqt_exec_callback_QwtPlotCanvas_timerEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtPlotCanvas_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_childEvent
func miqt_exec_callback_QwtPlotCanvas_childEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtPlotCanvas_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotCanvas_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_customEvent
func miqt_exec_callback_QwtPlotCanvas_customEvent(self *C.QwtPlotCanvas, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotCanvas_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotCanvas_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_connectNotify
func miqt_exec_callback_QwtPlotCanvas_connectNotify(self *C.QwtPlotCanvas, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlotCanvas) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotCanvas_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotCanvas) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotCanvas_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotCanvas_disconnectNotify
func miqt_exec_callback_QwtPlotCanvas_disconnectNotify(self *C.QwtPlotCanvas, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotCanvas{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtPlotCanvas) Delete() {
	C.QwtPlotCanvas_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotCanvas) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotCanvas) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
