package qwt

/*

#include "gen_qwt_plot_zoomer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotZoomer struct {
	h *C.QwtPlotZoomer
	*QwtPlotPicker
}

func (this *QwtPlotZoomer) cPointer() *C.QwtPlotZoomer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotZoomer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotZoomer constructs the type using only CGO pointers.
func newQwtPlotZoomer(h *C.QwtPlotZoomer) *QwtPlotZoomer {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotPicker *C.QwtPlotPicker = nil
	C.QwtPlotZoomer_virtbase(h, &outptr_QwtPlotPicker)

	return &QwtPlotZoomer{h: h,
		QwtPlotPicker: newQwtPlotPicker(outptr_QwtPlotPicker)}
}

// UnsafeNewQwtPlotZoomer constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotZoomer(h unsafe.Pointer) *QwtPlotZoomer {
	return newQwtPlotZoomer((*C.QwtPlotZoomer)(h))
}

// NewQwtPlotZoomer constructs a new QwtPlotZoomer object.
func NewQwtPlotZoomer(param1 *qt.QWidget) *QwtPlotZoomer {

	return newQwtPlotZoomer(C.QwtPlotZoomer_new((*C.QWidget)(param1.UnsafePointer())))
}

// NewQwtPlotZoomer2 constructs a new QwtPlotZoomer object.
func NewQwtPlotZoomer2(xAxis int, yAxis int, param3 *qt.QWidget) *QwtPlotZoomer {

	return newQwtPlotZoomer(C.QwtPlotZoomer_new2((C.int)(xAxis), (C.int)(yAxis), (*C.QWidget)(param3.UnsafePointer())))
}

// NewQwtPlotZoomer3 constructs a new QwtPlotZoomer object.
func NewQwtPlotZoomer3(param1 *qt.QWidget, doReplot bool) *QwtPlotZoomer {

	return newQwtPlotZoomer(C.QwtPlotZoomer_new3((*C.QWidget)(param1.UnsafePointer()), (C.bool)(doReplot)))
}

// NewQwtPlotZoomer4 constructs a new QwtPlotZoomer object.
func NewQwtPlotZoomer4(xAxis int, yAxis int, param3 *qt.QWidget, doReplot bool) *QwtPlotZoomer {

	return newQwtPlotZoomer(C.QwtPlotZoomer_new4((C.int)(xAxis), (C.int)(yAxis), (*C.QWidget)(param3.UnsafePointer()), (C.bool)(doReplot)))
}

func (this *QwtPlotZoomer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtPlotZoomer_metaObject(this.h)))
}

func (this *QwtPlotZoomer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtPlotZoomer_metacast(this.h, param1_Cstring))
}

func QwtPlotZoomer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotZoomer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotZoomer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotZoomer_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlotZoomer) SetZoomBase(doReplot bool) {
	C.QwtPlotZoomer_setZoomBase(this.h, (C.bool)(doReplot))
}

func (this *QwtPlotZoomer) SetZoomBaseWithZoomBase(zoomBase *qt.QRectF) {
	C.QwtPlotZoomer_setZoomBaseWithZoomBase(this.h, (*C.QRectF)(zoomBase.UnsafePointer()))
}

func (this *QwtPlotZoomer) ZoomBase() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotZoomer_zoomBase(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotZoomer) ZoomRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotZoomer_zoomRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotZoomer) SetAxis(xAxis int, yAxis int) {
	C.QwtPlotZoomer_setAxis(this.h, (C.int)(xAxis), (C.int)(yAxis))
}

func (this *QwtPlotZoomer) SetMaxStackDepth(maxStackDepth int) {
	C.QwtPlotZoomer_setMaxStackDepth(this.h, (C.int)(maxStackDepth))
}

func (this *QwtPlotZoomer) MaxStackDepth() int {
	return (int)(C.QwtPlotZoomer_maxStackDepth(this.h))
}

func (this *QwtPlotZoomer) ZoomRectIndex() uint {
	return (uint)(C.QwtPlotZoomer_zoomRectIndex(this.h))
}

func (this *QwtPlotZoomer) MoveBy(dx float64, dy float64) {
	C.QwtPlotZoomer_moveBy(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QwtPlotZoomer) MoveTo(param1 *qt.QPointF) {
	C.QwtPlotZoomer_moveTo(this.h, (*C.QPointF)(param1.UnsafePointer()))
}

func (this *QwtPlotZoomer) Zoom(param1 *qt.QRectF) {
	C.QwtPlotZoomer_zoom(this.h, (*C.QRectF)(param1.UnsafePointer()))
}

func (this *QwtPlotZoomer) ZoomWithOffset(offset int) {
	C.QwtPlotZoomer_zoomWithOffset(this.h, (C.int)(offset))
}

func (this *QwtPlotZoomer) Zoomed(rect *qt.QRectF) {
	C.QwtPlotZoomer_zoomed(this.h, (*C.QRectF)(rect.UnsafePointer()))
}
func (this *QwtPlotZoomer) OnZoomed(slot func(rect *qt.QRectF)) {
	C.QwtPlotZoomer_connect_zoomed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPlotZoomer_zoomed
func miqt_exec_callback_QwtPlotZoomer_zoomed(cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc(slotval1)
}

func QwtPlotZoomer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotZoomer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotZoomer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotZoomer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotZoomer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotZoomer_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotZoomer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotZoomer_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ScaleRect can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) ScaleRect() qt.QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotZoomer_protectedbase_scaleRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// InvTransform can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) InvTransform(param1 *qt.QRect) qt.QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotZoomer_protectedbase_invTransform(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRect)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Transform can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) Transform(param1 *qt.QRectF) qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtPlotZoomer_protectedbase_transform(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// RubberBandOverlay can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) RubberBandOverlay() *QwtWidgetOverlay {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtWidgetOverlay(C.QwtPlotZoomer_protectedbase_rubberBandOverlay(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// TrackerOverlay can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) TrackerOverlay() *QwtWidgetOverlay {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtWidgetOverlay(C.QwtPlotZoomer_protectedbase_trackerOverlay(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlotZoomer_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotZoomer_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotZoomer_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlotZoomer that was directly constructed.
func (this *QwtPlotZoomer) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotZoomer_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPlotZoomer) callVirtualBase_SetZoomBase(doReplot bool) {

	C.QwtPlotZoomer_virtualbase_setZoomBase(unsafe.Pointer(this.h), (C.bool)(doReplot))

}
func (this *QwtPlotZoomer) OnSetZoomBase(slot func(super func(doReplot bool), doReplot bool)) {
	ok := C.QwtPlotZoomer_override_virtual_setZoomBase(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_setZoomBase
func miqt_exec_callback_QwtPlotZoomer_setZoomBase(self *C.QwtPlotZoomer, cb C.intptr_t, doReplot C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(doReplot bool), doReplot bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(doReplot)

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_SetZoomBase, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_SetZoomBaseWithZoomBase(zoomBase *qt.QRectF) {

	C.QwtPlotZoomer_virtualbase_setZoomBaseWithZoomBase(unsafe.Pointer(this.h), (*C.QRectF)(zoomBase.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnSetZoomBaseWithZoomBase(slot func(super func(zoomBase *qt.QRectF), zoomBase *qt.QRectF)) {
	ok := C.QwtPlotZoomer_override_virtual_setZoomBaseWithZoomBase(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_setZoomBaseWithZoomBase
func miqt_exec_callback_QwtPlotZoomer_setZoomBaseWithZoomBase(self *C.QwtPlotZoomer, cb C.intptr_t, zoomBase *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(zoomBase *qt.QRectF), zoomBase *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(zoomBase))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_SetZoomBaseWithZoomBase, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_SetAxis(xAxis int, yAxis int) {

	C.QwtPlotZoomer_virtualbase_setAxis(unsafe.Pointer(this.h), (C.int)(xAxis), (C.int)(yAxis))

}
func (this *QwtPlotZoomer) OnSetAxis(slot func(super func(xAxis int, yAxis int), xAxis int, yAxis int)) {
	ok := C.QwtPlotZoomer_override_virtual_setAxis(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_setAxis
func miqt_exec_callback_QwtPlotZoomer_setAxis(self *C.QwtPlotZoomer, cb C.intptr_t, xAxis C.int, yAxis C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(xAxis int, yAxis int), xAxis int, yAxis int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(xAxis)

	slotval2 := (int)(yAxis)

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_SetAxis, slotval1, slotval2)

}

func (this *QwtPlotZoomer) callVirtualBase_MoveTo(param1 *qt.QPointF) {

	C.QwtPlotZoomer_virtualbase_moveTo(unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnMoveTo(slot func(super func(param1 *qt.QPointF), param1 *qt.QPointF)) {
	ok := C.QwtPlotZoomer_override_virtual_moveTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_moveTo
func miqt_exec_callback_QwtPlotZoomer_moveTo(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPointF), param1 *qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_MoveTo, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_Zoom(param1 *qt.QRectF) {

	C.QwtPlotZoomer_virtualbase_zoom(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnZoom(slot func(super func(param1 *qt.QRectF), param1 *qt.QRectF)) {
	ok := C.QwtPlotZoomer_override_virtual_zoom(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_zoom
func miqt_exec_callback_QwtPlotZoomer_zoom(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF), param1 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Zoom, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_ZoomWithOffset(offset int) {

	C.QwtPlotZoomer_virtualbase_zoomWithOffset(unsafe.Pointer(this.h), (C.int)(offset))

}
func (this *QwtPlotZoomer) OnZoomWithOffset(slot func(super func(offset int), offset int)) {
	ok := C.QwtPlotZoomer_override_virtual_zoomWithOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_zoomWithOffset
func miqt_exec_callback_QwtPlotZoomer_zoomWithOffset(self *C.QwtPlotZoomer, cb C.intptr_t, offset C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset int), offset int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(offset)

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_ZoomWithOffset, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_Rescale() {

	C.QwtPlotZoomer_virtualbase_rescale(unsafe.Pointer(this.h))

}
func (this *QwtPlotZoomer) OnRescale(slot func(super func())) {
	ok := C.QwtPlotZoomer_override_virtual_rescale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_rescale
func miqt_exec_callback_QwtPlotZoomer_rescale(self *C.QwtPlotZoomer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Rescale)

}

func (this *QwtPlotZoomer) callVirtualBase_MinZoomSize() *qt.QSizeF {

	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtPlotZoomer_virtualbase_minZoomSize(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotZoomer) OnMinZoomSize(slot func(super func() *qt.QSizeF) *qt.QSizeF) {
	ok := C.QwtPlotZoomer_override_virtual_minZoomSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_minZoomSize
func miqt_exec_callback_QwtPlotZoomer_minZoomSize(self *C.QwtPlotZoomer, cb C.intptr_t) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSizeF) *qt.QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_MinZoomSize)

	return (*C.QSizeF)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetMouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtPlotZoomer_virtualbase_widgetMouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetMouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetMouseReleaseEvent
func miqt_exec_callback_QwtPlotZoomer_widgetMouseReleaseEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetMouseReleaseEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetKeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtPlotZoomer_virtualbase_widgetKeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetKeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetKeyPressEvent
func miqt_exec_callback_QwtPlotZoomer_widgetKeyPressEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetKeyPressEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_Begin() {

	C.QwtPlotZoomer_virtualbase_begin(unsafe.Pointer(this.h))

}
func (this *QwtPlotZoomer) OnBegin(slot func(super func())) {
	ok := C.QwtPlotZoomer_override_virtual_begin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_begin
func miqt_exec_callback_QwtPlotZoomer_begin(self *C.QwtPlotZoomer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Begin)

}

func (this *QwtPlotZoomer) callVirtualBase_End(ok bool) bool {

	return (bool)(C.QwtPlotZoomer_virtualbase_end(unsafe.Pointer(this.h), (C.bool)(ok)))

}
func (this *QwtPlotZoomer) OnEnd(slot func(super func(ok bool) bool, ok bool) bool) {
	ok := C.QwtPlotZoomer_override_virtual_end(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_end
func miqt_exec_callback_QwtPlotZoomer_end(self *C.QwtPlotZoomer, cb C.intptr_t, ok C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ok bool) bool, ok bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ok)

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_End, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotZoomer) callVirtualBase_TrackerText(param1 *qt.QPoint) *QwtText {

	_goptr := newQwtText(C.QwtPlotZoomer_virtualbase_trackerText(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotZoomer) OnTrackerText(slot func(super func(param1 *qt.QPoint) *QwtText, param1 *qt.QPoint) *QwtText) {
	ok := C.QwtPlotZoomer_override_virtual_trackerText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_trackerText
func miqt_exec_callback_QwtPlotZoomer_trackerText(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QPoint) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) *QwtText, param1 *qt.QPoint) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_TrackerText, slotval1)

	return virtualReturn.cPointer()

}

func (this *QwtPlotZoomer) callVirtualBase_TrackerTextF(param1 *qt.QPointF) *QwtText {

	_goptr := newQwtText(C.QwtPlotZoomer_virtualbase_trackerTextF(unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotZoomer) OnTrackerTextF(slot func(super func(param1 *qt.QPointF) *QwtText, param1 *qt.QPointF) *QwtText) {
	ok := C.QwtPlotZoomer_override_virtual_trackerTextF(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_trackerTextF
func miqt_exec_callback_QwtPlotZoomer_trackerTextF(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QPointF) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPointF) *QwtText, param1 *qt.QPointF) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_TrackerTextF, slotval1)

	return virtualReturn.cPointer()

}

func (this *QwtPlotZoomer) callVirtualBase_Move(param1 *qt.QPoint) {

	C.QwtPlotZoomer_virtualbase_move(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnMove(slot func(super func(param1 *qt.QPoint), param1 *qt.QPoint)) {
	ok := C.QwtPlotZoomer_override_virtual_move(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_move
func miqt_exec_callback_QwtPlotZoomer_move(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint), param1 *qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Move, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_Append(param1 *qt.QPoint) {

	C.QwtPlotZoomer_virtualbase_append(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnAppend(slot func(super func(param1 *qt.QPoint), param1 *qt.QPoint)) {
	ok := C.QwtPlotZoomer_override_virtual_append(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_append
func miqt_exec_callback_QwtPlotZoomer_append(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint), param1 *qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Append, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QwtPlotZoomer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotZoomer) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtPlotZoomer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_eventFilter
func miqt_exec_callback_QwtPlotZoomer_eventFilter(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotZoomer) callVirtualBase_PickArea() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPlotZoomer_virtualbase_pickArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotZoomer) OnPickArea(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QwtPlotZoomer_override_virtual_pickArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_pickArea
func miqt_exec_callback_QwtPlotZoomer_pickArea(self *C.QwtPlotZoomer, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_PickArea)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotZoomer) callVirtualBase_DrawRubberBand(param1 *qt.QPainter) {

	C.QwtPlotZoomer_virtualbase_drawRubberBand(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnDrawRubberBand(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotZoomer_override_virtual_drawRubberBand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_drawRubberBand
func miqt_exec_callback_QwtPlotZoomer_drawRubberBand(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_DrawRubberBand, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_DrawTracker(param1 *qt.QPainter) {

	C.QwtPlotZoomer_virtualbase_drawTracker(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnDrawTracker(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotZoomer_override_virtual_drawTracker(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_drawTracker
func miqt_exec_callback_QwtPlotZoomer_drawTracker(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_DrawTracker, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_RubberBandMask() *qt.QRegion {

	_goptr := qt.UnsafeNewQRegion(unsafe.Pointer(C.QwtPlotZoomer_virtualbase_rubberBandMask(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotZoomer) OnRubberBandMask(slot func(super func() *qt.QRegion) *qt.QRegion) {
	ok := C.QwtPlotZoomer_override_virtual_rubberBandMask(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_rubberBandMask
func miqt_exec_callback_QwtPlotZoomer_rubberBandMask(self *C.QwtPlotZoomer, cb C.intptr_t) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRegion) *qt.QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_RubberBandMask)

	return (*C.QRegion)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotZoomer) callVirtualBase_TrackerRect(param1 *qt.QFont) *qt.QRect {

	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtPlotZoomer_virtualbase_trackerRect(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotZoomer) OnTrackerRect(slot func(super func(param1 *qt.QFont) *qt.QRect, param1 *qt.QFont) *qt.QRect) {
	ok := C.QwtPlotZoomer_override_virtual_trackerRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_trackerRect
func miqt_exec_callback_QwtPlotZoomer_trackerRect(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QFont) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont) *qt.QRect, param1 *qt.QFont) *qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_TrackerRect, slotval1)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotZoomer) callVirtualBase_Transition(param1 *qt.QEvent) {

	C.QwtPlotZoomer_virtualbase_transition(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnTransition(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_transition
func miqt_exec_callback_QwtPlotZoomer_transition(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Transition, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_Remove() {

	C.QwtPlotZoomer_virtualbase_remove(unsafe.Pointer(this.h))

}
func (this *QwtPlotZoomer) OnRemove(slot func(super func())) {
	ok := C.QwtPlotZoomer_override_virtual_remove(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_remove
func miqt_exec_callback_QwtPlotZoomer_remove(self *C.QwtPlotZoomer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Remove)

}

func (this *QwtPlotZoomer) callVirtualBase_Reset() {

	C.QwtPlotZoomer_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QwtPlotZoomer) OnReset(slot func(super func())) {
	ok := C.QwtPlotZoomer_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_reset
func miqt_exec_callback_QwtPlotZoomer_reset(self *C.QwtPlotZoomer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Reset)

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetMousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtPlotZoomer_virtualbase_widgetMousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetMousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetMousePressEvent
func miqt_exec_callback_QwtPlotZoomer_widgetMousePressEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetMousePressEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetMouseDoubleClickEvent(param1 *qt.QMouseEvent) {

	C.QwtPlotZoomer_virtualbase_widgetMouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetMouseDoubleClickEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetMouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetMouseDoubleClickEvent
func miqt_exec_callback_QwtPlotZoomer_widgetMouseDoubleClickEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetMouseDoubleClickEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetMouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtPlotZoomer_virtualbase_widgetMouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetMouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetMouseMoveEvent
func miqt_exec_callback_QwtPlotZoomer_widgetMouseMoveEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetMouseMoveEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetWheelEvent(param1 *qt.QWheelEvent) {

	C.QwtPlotZoomer_virtualbase_widgetWheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetWheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetWheelEvent
func miqt_exec_callback_QwtPlotZoomer_widgetWheelEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetWheelEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetKeyReleaseEvent(param1 *qt.QKeyEvent) {

	C.QwtPlotZoomer_virtualbase_widgetKeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetKeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetKeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetKeyReleaseEvent
func miqt_exec_callback_QwtPlotZoomer_widgetKeyReleaseEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetKeyReleaseEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetEnterEvent(param1 *qt.QEvent) {

	C.QwtPlotZoomer_virtualbase_widgetEnterEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetEnterEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetEnterEvent
func miqt_exec_callback_QwtPlotZoomer_widgetEnterEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetEnterEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_WidgetLeaveEvent(param1 *qt.QEvent) {

	C.QwtPlotZoomer_virtualbase_widgetLeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnWidgetLeaveEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_widgetLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_widgetLeaveEvent
func miqt_exec_callback_QwtPlotZoomer_widgetLeaveEvent(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_WidgetLeaveEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_StretchSelection(oldSize *qt.QSize, newSize *qt.QSize) {

	C.QwtPlotZoomer_virtualbase_stretchSelection(unsafe.Pointer(this.h), (*C.QSize)(oldSize.UnsafePointer()), (*C.QSize)(newSize.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnStretchSelection(slot func(super func(oldSize *qt.QSize, newSize *qt.QSize), oldSize *qt.QSize, newSize *qt.QSize)) {
	ok := C.QwtPlotZoomer_override_virtual_stretchSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_stretchSelection
func miqt_exec_callback_QwtPlotZoomer_stretchSelection(self *C.QwtPlotZoomer, cb C.intptr_t, oldSize *C.QSize, newSize *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(oldSize *qt.QSize, newSize *qt.QSize), oldSize *qt.QSize, newSize *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSize(unsafe.Pointer(oldSize))

	slotval2 := qt.UnsafeNewQSize(unsafe.Pointer(newSize))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_StretchSelection, slotval1, slotval2)

}

func (this *QwtPlotZoomer) callVirtualBase_UpdateDisplay() {

	C.QwtPlotZoomer_virtualbase_updateDisplay(unsafe.Pointer(this.h))

}
func (this *QwtPlotZoomer) OnUpdateDisplay(slot func(super func())) {
	ok := C.QwtPlotZoomer_override_virtual_updateDisplay(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_updateDisplay
func miqt_exec_callback_QwtPlotZoomer_updateDisplay(self *C.QwtPlotZoomer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_UpdateDisplay)

}

func (this *QwtPlotZoomer) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtPlotZoomer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotZoomer) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtPlotZoomer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_event
func miqt_exec_callback_QwtPlotZoomer_event(self *C.QwtPlotZoomer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotZoomer) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtPlotZoomer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_timerEvent
func miqt_exec_callback_QwtPlotZoomer_timerEvent(self *C.QwtPlotZoomer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtPlotZoomer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_childEvent
func miqt_exec_callback_QwtPlotZoomer_childEvent(self *C.QwtPlotZoomer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtPlotZoomer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotZoomer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_customEvent
func miqt_exec_callback_QwtPlotZoomer_customEvent(self *C.QwtPlotZoomer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotZoomer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotZoomer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_connectNotify
func miqt_exec_callback_QwtPlotZoomer_connectNotify(self *C.QwtPlotZoomer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotZoomer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotZoomer) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotZoomer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_disconnectNotify
func miqt_exec_callback_QwtPlotZoomer_disconnectNotify(self *C.QwtPlotZoomer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QwtPlotZoomer) callVirtualBase_MouseMatch2(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool {

	return (bool)(C.QwtPlotZoomer_virtualbase_mouseMatch2(unsafe.Pointer(this.h), param1.cPointer(), (*C.QMouseEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotZoomer) OnMouseMatch2(slot func(super func(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool, param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool) {
	ok := C.QwtPlotZoomer_override_virtual_mouseMatch2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_mouseMatch2
func miqt_exec_callback_QwtPlotZoomer_mouseMatch2(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QwtEventPattern__MousePattern, param2 *C.QMouseEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool, param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern__MousePattern(param1)

	slotval2 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_MouseMatch2, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotZoomer) callVirtualBase_KeyMatch2(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool {

	return (bool)(C.QwtPlotZoomer_virtualbase_keyMatch2(unsafe.Pointer(this.h), param1.cPointer(), (*C.QKeyEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotZoomer) OnKeyMatch2(slot func(super func(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool, param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool) {
	ok := C.QwtPlotZoomer_override_virtual_keyMatch2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotZoomer_keyMatch2
func miqt_exec_callback_QwtPlotZoomer_keyMatch2(self *C.QwtPlotZoomer, cb C.intptr_t, param1 *C.QwtEventPattern__KeyPattern, param2 *C.QKeyEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool, param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern__KeyPattern(param1)

	slotval2 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotZoomer{h: self}).callVirtualBase_KeyMatch2, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QwtPlotZoomer) Delete() {
	C.QwtPlotZoomer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotZoomer) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotZoomer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
