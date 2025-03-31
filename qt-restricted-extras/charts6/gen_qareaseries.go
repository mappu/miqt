package charts6

/*

#include "gen_qareaseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAreaSeries struct {
	h *C.QAreaSeries
	*QAbstractSeries
}

func (this *QAreaSeries) cPointer() *C.QAreaSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAreaSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAreaSeries constructs the type using only CGO pointers.
func newQAreaSeries(h *C.QAreaSeries) *QAreaSeries {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSeries *C.QAbstractSeries = nil
	C.QAreaSeries_virtbase(h, &outptr_QAbstractSeries)

	return &QAreaSeries{h: h,
		QAbstractSeries: newQAbstractSeries(outptr_QAbstractSeries)}
}

// UnsafeNewQAreaSeries constructs the type using only unsafe pointers.
func UnsafeNewQAreaSeries(h unsafe.Pointer) *QAreaSeries {
	return newQAreaSeries((*C.QAreaSeries)(h))
}

// NewQAreaSeries constructs a new QAreaSeries object.
func NewQAreaSeries() *QAreaSeries {

	return newQAreaSeries(C.QAreaSeries_new())
}

// NewQAreaSeries2 constructs a new QAreaSeries object.
func NewQAreaSeries2(upperSeries *QLineSeries) *QAreaSeries {

	return newQAreaSeries(C.QAreaSeries_new2(upperSeries.cPointer()))
}

// NewQAreaSeries3 constructs a new QAreaSeries object.
func NewQAreaSeries3(parent *qt6.QObject) *QAreaSeries {

	return newQAreaSeries(C.QAreaSeries_new3((*C.QObject)(parent.UnsafePointer())))
}

// NewQAreaSeries4 constructs a new QAreaSeries object.
func NewQAreaSeries4(upperSeries *QLineSeries, lowerSeries *QLineSeries) *QAreaSeries {

	return newQAreaSeries(C.QAreaSeries_new4(upperSeries.cPointer(), lowerSeries.cPointer()))
}

func (this *QAreaSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAreaSeries_metaObject(this.h)))
}

func (this *QAreaSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAreaSeries_metacast(this.h, param1_Cstring))
}

func QAreaSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAreaSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAreaSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QAreaSeries_type(this.h))
}

func (this *QAreaSeries) SetUpperSeries(series *QLineSeries) {
	C.QAreaSeries_setUpperSeries(this.h, series.cPointer())
}

func (this *QAreaSeries) UpperSeries() *QLineSeries {
	return newQLineSeries(C.QAreaSeries_upperSeries(this.h))
}

func (this *QAreaSeries) SetLowerSeries(series *QLineSeries) {
	C.QAreaSeries_setLowerSeries(this.h, series.cPointer())
}

func (this *QAreaSeries) LowerSeries() *QLineSeries {
	return newQLineSeries(C.QAreaSeries_lowerSeries(this.h))
}

func (this *QAreaSeries) SetPen(pen *qt6.QPen) {
	C.QAreaSeries_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QAreaSeries) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QAreaSeries_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAreaSeries) SetBrush(brush *qt6.QBrush) {
	C.QAreaSeries_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QAreaSeries) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QAreaSeries_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAreaSeries) SetColor(color *qt6.QColor) {
	C.QAreaSeries_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAreaSeries) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAreaSeries_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAreaSeries) SetBorderColor(color *qt6.QColor) {
	C.QAreaSeries_setBorderColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAreaSeries) BorderColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAreaSeries_borderColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAreaSeries) SetPointsVisible() {
	C.QAreaSeries_setPointsVisible(this.h)
}

func (this *QAreaSeries) PointsVisible() bool {
	return (bool)(C.QAreaSeries_pointsVisible(this.h))
}

func (this *QAreaSeries) SetPointLabelsFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QAreaSeries_setPointLabelsFormat(this.h, format_ms)
}

func (this *QAreaSeries) PointLabelsFormat() string {
	var _ms C.struct_miqt_string = C.QAreaSeries_pointLabelsFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAreaSeries) SetPointLabelsVisible() {
	C.QAreaSeries_setPointLabelsVisible(this.h)
}

func (this *QAreaSeries) PointLabelsVisible() bool {
	return (bool)(C.QAreaSeries_pointLabelsVisible(this.h))
}

func (this *QAreaSeries) SetPointLabelsFont(font *qt6.QFont) {
	C.QAreaSeries_setPointLabelsFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QAreaSeries) PointLabelsFont() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QAreaSeries_pointLabelsFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAreaSeries) SetPointLabelsColor(color *qt6.QColor) {
	C.QAreaSeries_setPointLabelsColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAreaSeries) PointLabelsColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAreaSeries_pointLabelsColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAreaSeries) SetPointLabelsClipping() {
	C.QAreaSeries_setPointLabelsClipping(this.h)
}

func (this *QAreaSeries) PointLabelsClipping() bool {
	return (bool)(C.QAreaSeries_pointLabelsClipping(this.h))
}

func (this *QAreaSeries) Clicked(point *qt6.QPointF) {
	C.QAreaSeries_clicked(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QAreaSeries) OnClicked(slot func(point *qt6.QPointF)) {
	C.QAreaSeries_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_clicked
func miqt_exec_callback_QAreaSeries_clicked(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QAreaSeries) Hovered(point *qt6.QPointF, state bool) {
	C.QAreaSeries_hovered(this.h, (*C.QPointF)(point.UnsafePointer()), (C.bool)(state))
}
func (this *QAreaSeries) OnHovered(slot func(point *qt6.QPointF, state bool)) {
	C.QAreaSeries_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_hovered
func miqt_exec_callback_QAreaSeries_hovered(cb C.intptr_t, point *C.QPointF, state C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF, state bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	slotval2 := (bool)(state)

	gofunc(slotval1, slotval2)
}

func (this *QAreaSeries) Pressed(point *qt6.QPointF) {
	C.QAreaSeries_pressed(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QAreaSeries) OnPressed(slot func(point *qt6.QPointF)) {
	C.QAreaSeries_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_pressed
func miqt_exec_callback_QAreaSeries_pressed(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QAreaSeries) Released(point *qt6.QPointF) {
	C.QAreaSeries_released(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QAreaSeries) OnReleased(slot func(point *qt6.QPointF)) {
	C.QAreaSeries_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_released
func miqt_exec_callback_QAreaSeries_released(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QAreaSeries) DoubleClicked(point *qt6.QPointF) {
	C.QAreaSeries_doubleClicked(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QAreaSeries) OnDoubleClicked(slot func(point *qt6.QPointF)) {
	C.QAreaSeries_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_doubleClicked
func miqt_exec_callback_QAreaSeries_doubleClicked(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QAreaSeries) Selected() {
	C.QAreaSeries_selected(this.h)
}
func (this *QAreaSeries) OnSelected(slot func()) {
	C.QAreaSeries_connect_selected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_selected
func miqt_exec_callback_QAreaSeries_selected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAreaSeries) ColorChanged(color qt6.QColor) {
	C.QAreaSeries_colorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAreaSeries) OnColorChanged(slot func(color qt6.QColor)) {
	C.QAreaSeries_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_colorChanged
func miqt_exec_callback_QAreaSeries_colorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QAreaSeries) BorderColorChanged(color qt6.QColor) {
	C.QAreaSeries_borderColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAreaSeries) OnBorderColorChanged(slot func(color qt6.QColor)) {
	C.QAreaSeries_connect_borderColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_borderColorChanged
func miqt_exec_callback_QAreaSeries_borderColorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QAreaSeries) PointLabelsFormatChanged(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QAreaSeries_pointLabelsFormatChanged(this.h, format_ms)
}
func (this *QAreaSeries) OnPointLabelsFormatChanged(slot func(format string)) {
	C.QAreaSeries_connect_pointLabelsFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_pointLabelsFormatChanged
func miqt_exec_callback_QAreaSeries_pointLabelsFormatChanged(cb C.intptr_t, format C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var format_ms C.struct_miqt_string = format
	format_ret := C.GoStringN(format_ms.data, C.int(int64(format_ms.len)))
	C.free(unsafe.Pointer(format_ms.data))
	slotval1 := format_ret

	gofunc(slotval1)
}

func (this *QAreaSeries) PointLabelsVisibilityChanged(visible bool) {
	C.QAreaSeries_pointLabelsVisibilityChanged(this.h, (C.bool)(visible))
}
func (this *QAreaSeries) OnPointLabelsVisibilityChanged(slot func(visible bool)) {
	C.QAreaSeries_connect_pointLabelsVisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_pointLabelsVisibilityChanged
func miqt_exec_callback_QAreaSeries_pointLabelsVisibilityChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QAreaSeries) PointLabelsFontChanged(font *qt6.QFont) {
	C.QAreaSeries_pointLabelsFontChanged(this.h, (*C.QFont)(font.UnsafePointer()))
}
func (this *QAreaSeries) OnPointLabelsFontChanged(slot func(font *qt6.QFont)) {
	C.QAreaSeries_connect_pointLabelsFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_pointLabelsFontChanged
func miqt_exec_callback_QAreaSeries_pointLabelsFontChanged(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *qt6.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(font))

	gofunc(slotval1)
}

func (this *QAreaSeries) PointLabelsColorChanged(color *qt6.QColor) {
	C.QAreaSeries_pointLabelsColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAreaSeries) OnPointLabelsColorChanged(slot func(color *qt6.QColor)) {
	C.QAreaSeries_connect_pointLabelsColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_pointLabelsColorChanged
func miqt_exec_callback_QAreaSeries_pointLabelsColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QAreaSeries) PointLabelsClippingChanged(clipping bool) {
	C.QAreaSeries_pointLabelsClippingChanged(this.h, (C.bool)(clipping))
}
func (this *QAreaSeries) OnPointLabelsClippingChanged(slot func(clipping bool)) {
	C.QAreaSeries_connect_pointLabelsClippingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAreaSeries_pointLabelsClippingChanged
func miqt_exec_callback_QAreaSeries_pointLabelsClippingChanged(cb C.intptr_t, clipping C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clipping bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(clipping)

	gofunc(slotval1)
}

func QAreaSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAreaSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAreaSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAreaSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAreaSeries) SetPointsVisible1(visible bool) {
	C.QAreaSeries_setPointsVisible1(this.h, (C.bool)(visible))
}

func (this *QAreaSeries) SetPointLabelsVisible1(visible bool) {
	C.QAreaSeries_setPointLabelsVisible1(this.h, (C.bool)(visible))
}

func (this *QAreaSeries) SetPointLabelsClipping1(enabled bool) {
	C.QAreaSeries_setPointLabelsClipping1(this.h, (C.bool)(enabled))
}

// Sender can only be called from a QAreaSeries that was directly constructed.
func (this *QAreaSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QAreaSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAreaSeries that was directly constructed.
func (this *QAreaSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAreaSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAreaSeries that was directly constructed.
func (this *QAreaSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAreaSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAreaSeries that was directly constructed.
func (this *QAreaSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAreaSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAreaSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QAreaSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QAreaSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QAreaSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAreaSeries_type
func miqt_exec_callback_QAreaSeries_type(self *C.QAreaSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAreaSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QAreaSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAreaSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAreaSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAreaSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAreaSeries_event
func miqt_exec_callback_QAreaSeries_event(self *C.QAreaSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAreaSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAreaSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAreaSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAreaSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAreaSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAreaSeries_eventFilter
func miqt_exec_callback_QAreaSeries_eventFilter(self *C.QAreaSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAreaSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAreaSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAreaSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAreaSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAreaSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAreaSeries_timerEvent
func miqt_exec_callback_QAreaSeries_timerEvent(self *C.QAreaSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAreaSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAreaSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAreaSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAreaSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAreaSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAreaSeries_childEvent
func miqt_exec_callback_QAreaSeries_childEvent(self *C.QAreaSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAreaSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAreaSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAreaSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAreaSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAreaSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAreaSeries_customEvent
func miqt_exec_callback_QAreaSeries_customEvent(self *C.QAreaSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAreaSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAreaSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAreaSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAreaSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAreaSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAreaSeries_connectNotify
func miqt_exec_callback_QAreaSeries_connectNotify(self *C.QAreaSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAreaSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAreaSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAreaSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAreaSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAreaSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAreaSeries_disconnectNotify
func miqt_exec_callback_QAreaSeries_disconnectNotify(self *C.QAreaSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAreaSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAreaSeries) Delete() {
	C.QAreaSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAreaSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QAreaSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
