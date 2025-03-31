package charts6

/*

#include "gen_qscatterseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScatterSeries__MarkerShape int

const (
	QScatterSeries__MarkerShapeCircle           QScatterSeries__MarkerShape = 0
	QScatterSeries__MarkerShapeRectangle        QScatterSeries__MarkerShape = 1
	QScatterSeries__MarkerShapeRotatedRectangle QScatterSeries__MarkerShape = 2
	QScatterSeries__MarkerShapeTriangle         QScatterSeries__MarkerShape = 3
	QScatterSeries__MarkerShapeStar             QScatterSeries__MarkerShape = 4
	QScatterSeries__MarkerShapePentagon         QScatterSeries__MarkerShape = 5
)

type QScatterSeries struct {
	h *C.QScatterSeries
	*QXYSeries
}

func (this *QScatterSeries) cPointer() *C.QScatterSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScatterSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScatterSeries constructs the type using only CGO pointers.
func newQScatterSeries(h *C.QScatterSeries) *QScatterSeries {
	if h == nil {
		return nil
	}
	var outptr_QXYSeries *C.QXYSeries = nil
	C.QScatterSeries_virtbase(h, &outptr_QXYSeries)

	return &QScatterSeries{h: h,
		QXYSeries: newQXYSeries(outptr_QXYSeries)}
}

// UnsafeNewQScatterSeries constructs the type using only unsafe pointers.
func UnsafeNewQScatterSeries(h unsafe.Pointer) *QScatterSeries {
	return newQScatterSeries((*C.QScatterSeries)(h))
}

// NewQScatterSeries constructs a new QScatterSeries object.
func NewQScatterSeries() *QScatterSeries {

	return newQScatterSeries(C.QScatterSeries_new())
}

// NewQScatterSeries2 constructs a new QScatterSeries object.
func NewQScatterSeries2(parent *qt6.QObject) *QScatterSeries {

	return newQScatterSeries(C.QScatterSeries_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QScatterSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScatterSeries_metaObject(this.h)))
}

func (this *QScatterSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScatterSeries_metacast(this.h, param1_Cstring))
}

func QScatterSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScatterSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScatterSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QScatterSeries_type(this.h))
}

func (this *QScatterSeries) SetPen(pen *qt6.QPen) {
	C.QScatterSeries_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QScatterSeries) SetBrush(brush *qt6.QBrush) {
	C.QScatterSeries_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QScatterSeries) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QScatterSeries_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScatterSeries) SetColor(color *qt6.QColor) {
	C.QScatterSeries_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QScatterSeries) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QScatterSeries_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScatterSeries) SetBorderColor(color *qt6.QColor) {
	C.QScatterSeries_setBorderColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QScatterSeries) BorderColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QScatterSeries_borderColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScatterSeries) MarkerShape() QScatterSeries__MarkerShape {
	return (QScatterSeries__MarkerShape)(C.QScatterSeries_markerShape(this.h))
}

func (this *QScatterSeries) SetMarkerShape(shape QScatterSeries__MarkerShape) {
	C.QScatterSeries_setMarkerShape(this.h, (C.int)(shape))
}

func (this *QScatterSeries) MarkerSize() float64 {
	return (float64)(C.QScatterSeries_markerSize(this.h))
}

func (this *QScatterSeries) SetMarkerSize(size float64) {
	C.QScatterSeries_setMarkerSize(this.h, (C.double)(size))
}

func (this *QScatterSeries) ColorChanged(color qt6.QColor) {
	C.QScatterSeries_colorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QScatterSeries) OnColorChanged(slot func(color qt6.QColor)) {
	C.QScatterSeries_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScatterSeries_colorChanged
func miqt_exec_callback_QScatterSeries_colorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	color_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(color))
	color_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *color_goptr

	gofunc(slotval1)
}

func (this *QScatterSeries) BorderColorChanged(color qt6.QColor) {
	C.QScatterSeries_borderColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QScatterSeries) OnBorderColorChanged(slot func(color qt6.QColor)) {
	C.QScatterSeries_connect_borderColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScatterSeries_borderColorChanged
func miqt_exec_callback_QScatterSeries_borderColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	color_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(color))
	color_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *color_goptr

	gofunc(slotval1)
}

func (this *QScatterSeries) MarkerShapeChanged(shape QScatterSeries__MarkerShape) {
	C.QScatterSeries_markerShapeChanged(this.h, (C.int)(shape))
}
func (this *QScatterSeries) OnMarkerShapeChanged(slot func(shape QScatterSeries__MarkerShape)) {
	C.QScatterSeries_connect_markerShapeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScatterSeries_markerShapeChanged
func miqt_exec_callback_QScatterSeries_markerShapeChanged(cb C.intptr_t, shape C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(shape QScatterSeries__MarkerShape))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QScatterSeries__MarkerShape)(shape)

	gofunc(slotval1)
}

func (this *QScatterSeries) MarkerSizeChanged(size float64) {
	C.QScatterSeries_markerSizeChanged(this.h, (C.double)(size))
}
func (this *QScatterSeries) OnMarkerSizeChanged(slot func(size float64)) {
	C.QScatterSeries_connect_markerSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScatterSeries_markerSizeChanged
func miqt_exec_callback_QScatterSeries_markerSizeChanged(cb C.intptr_t, size C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(size)

	gofunc(slotval1)
}

func QScatterSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScatterSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScatterSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScatterSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QScatterSeries that was directly constructed.
func (this *QScatterSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QScatterSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QScatterSeries that was directly constructed.
func (this *QScatterSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScatterSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QScatterSeries that was directly constructed.
func (this *QScatterSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScatterSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QScatterSeries that was directly constructed.
func (this *QScatterSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QScatterSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QScatterSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QScatterSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QScatterSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QScatterSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_type
func miqt_exec_callback_QScatterSeries_type(self *C.QScatterSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScatterSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QScatterSeries) callVirtualBase_SetPen(pen *qt6.QPen) {

	C.QScatterSeries_virtualbase_setPen(unsafe.Pointer(this.h), (*C.QPen)(pen.UnsafePointer()))

}
func (this *QScatterSeries) OnSetPen(slot func(super func(pen *qt6.QPen), pen *qt6.QPen)) {
	ok := C.QScatterSeries_override_virtual_setPen(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_setPen
func miqt_exec_callback_QScatterSeries_setPen(self *C.QScatterSeries, cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pen *qt6.QPen), pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc((&QScatterSeries{h: self}).callVirtualBase_SetPen, slotval1)

}

func (this *QScatterSeries) callVirtualBase_SetBrush(brush *qt6.QBrush) {

	C.QScatterSeries_virtualbase_setBrush(unsafe.Pointer(this.h), (*C.QBrush)(brush.UnsafePointer()))

}
func (this *QScatterSeries) OnSetBrush(slot func(super func(brush *qt6.QBrush), brush *qt6.QBrush)) {
	ok := C.QScatterSeries_override_virtual_setBrush(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_setBrush
func miqt_exec_callback_QScatterSeries_setBrush(self *C.QScatterSeries, cb C.intptr_t, brush *C.QBrush) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(brush *qt6.QBrush), brush *qt6.QBrush))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQBrush(unsafe.Pointer(brush))

	gofunc((&QScatterSeries{h: self}).callVirtualBase_SetBrush, slotval1)

}

func (this *QScatterSeries) callVirtualBase_SetColor(color *qt6.QColor) {

	C.QScatterSeries_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(color.UnsafePointer()))

}
func (this *QScatterSeries) OnSetColor(slot func(super func(color *qt6.QColor), color *qt6.QColor)) {
	ok := C.QScatterSeries_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_setColor
func miqt_exec_callback_QScatterSeries_setColor(self *C.QScatterSeries, cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(color *qt6.QColor), color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc((&QScatterSeries{h: self}).callVirtualBase_SetColor, slotval1)

}

func (this *QScatterSeries) callVirtualBase_Color() *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QScatterSeries_virtualbase_color(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScatterSeries) OnColor(slot func(super func() *qt6.QColor) *qt6.QColor) {
	ok := C.QScatterSeries_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_color
func miqt_exec_callback_QScatterSeries_color(self *C.QScatterSeries, cb C.intptr_t) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QColor) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScatterSeries{h: self}).callVirtualBase_Color)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QScatterSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QScatterSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScatterSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QScatterSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_event
func miqt_exec_callback_QScatterSeries_event(self *C.QScatterSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScatterSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScatterSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QScatterSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScatterSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QScatterSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_eventFilter
func miqt_exec_callback_QScatterSeries_eventFilter(self *C.QScatterSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScatterSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScatterSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QScatterSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScatterSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QScatterSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_timerEvent
func miqt_exec_callback_QScatterSeries_timerEvent(self *C.QScatterSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScatterSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScatterSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QScatterSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScatterSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QScatterSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_childEvent
func miqt_exec_callback_QScatterSeries_childEvent(self *C.QScatterSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScatterSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScatterSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QScatterSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScatterSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QScatterSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_customEvent
func miqt_exec_callback_QScatterSeries_customEvent(self *C.QScatterSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScatterSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScatterSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QScatterSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScatterSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScatterSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_connectNotify
func miqt_exec_callback_QScatterSeries_connectNotify(self *C.QScatterSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScatterSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScatterSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QScatterSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScatterSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScatterSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScatterSeries_disconnectNotify
func miqt_exec_callback_QScatterSeries_disconnectNotify(self *C.QScatterSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScatterSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScatterSeries) Delete() {
	C.QScatterSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScatterSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QScatterSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
