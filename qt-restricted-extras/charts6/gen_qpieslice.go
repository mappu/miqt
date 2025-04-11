package charts6

/*

#include "gen_qpieslice.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPieSlice__LabelPosition int

const (
	QPieSlice__LabelOutside          QPieSlice__LabelPosition = 0
	QPieSlice__LabelInsideHorizontal QPieSlice__LabelPosition = 1
	QPieSlice__LabelInsideTangential QPieSlice__LabelPosition = 2
	QPieSlice__LabelInsideNormal     QPieSlice__LabelPosition = 3
)

type QPieSlice struct {
	h *C.QPieSlice
	*qt6.QObject
}

func (this *QPieSlice) cPointer() *C.QPieSlice {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPieSlice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPieSlice constructs the type using only CGO pointers.
func newQPieSlice(h *C.QPieSlice) *QPieSlice {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QPieSlice_virtbase(h, &outptr_QObject)

	return &QPieSlice{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQPieSlice constructs the type using only unsafe pointers.
func UnsafeNewQPieSlice(h unsafe.Pointer) *QPieSlice {
	return newQPieSlice((*C.QPieSlice)(h))
}

// NewQPieSlice constructs a new QPieSlice object.
func NewQPieSlice() *QPieSlice {

	return newQPieSlice(C.QPieSlice_new())
}

// NewQPieSlice2 constructs a new QPieSlice object.
func NewQPieSlice2(label string, value float64) *QPieSlice {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))

	return newQPieSlice(C.QPieSlice_new2(label_ms, (C.double)(value)))
}

// NewQPieSlice3 constructs a new QPieSlice object.
func NewQPieSlice3(parent *qt6.QObject) *QPieSlice {

	return newQPieSlice(C.QPieSlice_new3((*C.QObject)(parent.UnsafePointer())))
}

// NewQPieSlice4 constructs a new QPieSlice object.
func NewQPieSlice4(label string, value float64, parent *qt6.QObject) *QPieSlice {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))

	return newQPieSlice(C.QPieSlice_new4(label_ms, (C.double)(value), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QPieSlice) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPieSlice_metaObject(this.h)))
}

func (this *QPieSlice) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPieSlice_metacast(this.h, param1_Cstring))
}

func QPieSlice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPieSlice_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPieSlice) SetLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QPieSlice_setLabel(this.h, label_ms)
}

func (this *QPieSlice) Label() string {
	var _ms C.struct_miqt_string = C.QPieSlice_label(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPieSlice) SetValue(value float64) {
	C.QPieSlice_setValue(this.h, (C.double)(value))
}

func (this *QPieSlice) Value() float64 {
	return (float64)(C.QPieSlice_value(this.h))
}

func (this *QPieSlice) SetLabelVisible() {
	C.QPieSlice_setLabelVisible(this.h)
}

func (this *QPieSlice) IsLabelVisible() bool {
	return (bool)(C.QPieSlice_isLabelVisible(this.h))
}

func (this *QPieSlice) LabelPosition() QPieSlice__LabelPosition {
	return (QPieSlice__LabelPosition)(C.QPieSlice_labelPosition(this.h))
}

func (this *QPieSlice) SetLabelPosition(position QPieSlice__LabelPosition) {
	C.QPieSlice_setLabelPosition(this.h, (C.int)(position))
}

func (this *QPieSlice) SetExploded() {
	C.QPieSlice_setExploded(this.h)
}

func (this *QPieSlice) IsExploded() bool {
	return (bool)(C.QPieSlice_isExploded(this.h))
}

func (this *QPieSlice) SetPen(pen *qt6.QPen) {
	C.QPieSlice_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QPieSlice) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QPieSlice_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPieSlice) BorderColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QPieSlice_borderColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPieSlice) SetBorderColor(color qt6.QColor) {
	C.QPieSlice_setBorderColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QPieSlice) BorderWidth() int {
	return (int)(C.QPieSlice_borderWidth(this.h))
}

func (this *QPieSlice) SetBorderWidth(width int) {
	C.QPieSlice_setBorderWidth(this.h, (C.int)(width))
}

func (this *QPieSlice) SetBrush(brush *qt6.QBrush) {
	C.QPieSlice_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QPieSlice) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QPieSlice_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPieSlice) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QPieSlice_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPieSlice) SetColor(color qt6.QColor) {
	C.QPieSlice_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QPieSlice) SetLabelBrush(brush *qt6.QBrush) {
	C.QPieSlice_setLabelBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QPieSlice) LabelBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QPieSlice_labelBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPieSlice) LabelColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QPieSlice_labelColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPieSlice) SetLabelColor(color qt6.QColor) {
	C.QPieSlice_setLabelColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QPieSlice) SetLabelFont(font *qt6.QFont) {
	C.QPieSlice_setLabelFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QPieSlice) LabelFont() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QPieSlice_labelFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPieSlice) SetLabelArmLengthFactor(factor float64) {
	C.QPieSlice_setLabelArmLengthFactor(this.h, (C.double)(factor))
}

func (this *QPieSlice) LabelArmLengthFactor() float64 {
	return (float64)(C.QPieSlice_labelArmLengthFactor(this.h))
}

func (this *QPieSlice) SetExplodeDistanceFactor(factor float64) {
	C.QPieSlice_setExplodeDistanceFactor(this.h, (C.double)(factor))
}

func (this *QPieSlice) ExplodeDistanceFactor() float64 {
	return (float64)(C.QPieSlice_explodeDistanceFactor(this.h))
}

func (this *QPieSlice) Percentage() float64 {
	return (float64)(C.QPieSlice_percentage(this.h))
}

func (this *QPieSlice) StartAngle() float64 {
	return (float64)(C.QPieSlice_startAngle(this.h))
}

func (this *QPieSlice) AngleSpan() float64 {
	return (float64)(C.QPieSlice_angleSpan(this.h))
}

func (this *QPieSlice) Series() *QPieSeries {
	return newQPieSeries(C.QPieSlice_series(this.h))
}

func (this *QPieSlice) Clicked() {
	C.QPieSlice_clicked(this.h)
}
func (this *QPieSlice) OnClicked(slot func()) {
	C.QPieSlice_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_clicked
func miqt_exec_callback_QPieSlice_clicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) Hovered(state bool) {
	C.QPieSlice_hovered(this.h, (C.bool)(state))
}
func (this *QPieSlice) OnHovered(slot func(state bool)) {
	C.QPieSlice_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_hovered
func miqt_exec_callback_QPieSlice_hovered(cb C.intptr_t, state C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(state)

	gofunc(slotval1)
}

func (this *QPieSlice) Pressed() {
	C.QPieSlice_pressed(this.h)
}
func (this *QPieSlice) OnPressed(slot func()) {
	C.QPieSlice_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_pressed
func miqt_exec_callback_QPieSlice_pressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) Released() {
	C.QPieSlice_released(this.h)
}
func (this *QPieSlice) OnReleased(slot func()) {
	C.QPieSlice_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_released
func miqt_exec_callback_QPieSlice_released(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) DoubleClicked() {
	C.QPieSlice_doubleClicked(this.h)
}
func (this *QPieSlice) OnDoubleClicked(slot func()) {
	C.QPieSlice_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_doubleClicked
func miqt_exec_callback_QPieSlice_doubleClicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) LabelChanged() {
	C.QPieSlice_labelChanged(this.h)
}
func (this *QPieSlice) OnLabelChanged(slot func()) {
	C.QPieSlice_connect_labelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_labelChanged
func miqt_exec_callback_QPieSlice_labelChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) ValueChanged() {
	C.QPieSlice_valueChanged(this.h)
}
func (this *QPieSlice) OnValueChanged(slot func()) {
	C.QPieSlice_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_valueChanged
func miqt_exec_callback_QPieSlice_valueChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) LabelVisibleChanged() {
	C.QPieSlice_labelVisibleChanged(this.h)
}
func (this *QPieSlice) OnLabelVisibleChanged(slot func()) {
	C.QPieSlice_connect_labelVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_labelVisibleChanged
func miqt_exec_callback_QPieSlice_labelVisibleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) PenChanged() {
	C.QPieSlice_penChanged(this.h)
}
func (this *QPieSlice) OnPenChanged(slot func()) {
	C.QPieSlice_connect_penChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_penChanged
func miqt_exec_callback_QPieSlice_penChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) BrushChanged() {
	C.QPieSlice_brushChanged(this.h)
}
func (this *QPieSlice) OnBrushChanged(slot func()) {
	C.QPieSlice_connect_brushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_brushChanged
func miqt_exec_callback_QPieSlice_brushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) LabelBrushChanged() {
	C.QPieSlice_labelBrushChanged(this.h)
}
func (this *QPieSlice) OnLabelBrushChanged(slot func()) {
	C.QPieSlice_connect_labelBrushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_labelBrushChanged
func miqt_exec_callback_QPieSlice_labelBrushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) LabelFontChanged() {
	C.QPieSlice_labelFontChanged(this.h)
}
func (this *QPieSlice) OnLabelFontChanged(slot func()) {
	C.QPieSlice_connect_labelFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_labelFontChanged
func miqt_exec_callback_QPieSlice_labelFontChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) PercentageChanged() {
	C.QPieSlice_percentageChanged(this.h)
}
func (this *QPieSlice) OnPercentageChanged(slot func()) {
	C.QPieSlice_connect_percentageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_percentageChanged
func miqt_exec_callback_QPieSlice_percentageChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) StartAngleChanged() {
	C.QPieSlice_startAngleChanged(this.h)
}
func (this *QPieSlice) OnStartAngleChanged(slot func()) {
	C.QPieSlice_connect_startAngleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_startAngleChanged
func miqt_exec_callback_QPieSlice_startAngleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) AngleSpanChanged() {
	C.QPieSlice_angleSpanChanged(this.h)
}
func (this *QPieSlice) OnAngleSpanChanged(slot func()) {
	C.QPieSlice_connect_angleSpanChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_angleSpanChanged
func miqt_exec_callback_QPieSlice_angleSpanChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) ColorChanged() {
	C.QPieSlice_colorChanged(this.h)
}
func (this *QPieSlice) OnColorChanged(slot func()) {
	C.QPieSlice_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_colorChanged
func miqt_exec_callback_QPieSlice_colorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) BorderColorChanged() {
	C.QPieSlice_borderColorChanged(this.h)
}
func (this *QPieSlice) OnBorderColorChanged(slot func()) {
	C.QPieSlice_connect_borderColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_borderColorChanged
func miqt_exec_callback_QPieSlice_borderColorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) BorderWidthChanged() {
	C.QPieSlice_borderWidthChanged(this.h)
}
func (this *QPieSlice) OnBorderWidthChanged(slot func()) {
	C.QPieSlice_connect_borderWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_borderWidthChanged
func miqt_exec_callback_QPieSlice_borderWidthChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSlice) LabelColorChanged() {
	C.QPieSlice_labelColorChanged(this.h)
}
func (this *QPieSlice) OnLabelColorChanged(slot func()) {
	C.QPieSlice_connect_labelColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSlice_labelColorChanged
func miqt_exec_callback_QPieSlice_labelColorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QPieSlice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPieSlice_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPieSlice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPieSlice_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPieSlice) SetLabelVisibleWithVisible(visible bool) {
	C.QPieSlice_setLabelVisibleWithVisible(this.h, (C.bool)(visible))
}

func (this *QPieSlice) SetExplodedWithExploded(exploded bool) {
	C.QPieSlice_setExplodedWithExploded(this.h, (C.bool)(exploded))
}

// Sender can only be called from a QPieSlice that was directly constructed.
func (this *QPieSlice) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPieSlice_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPieSlice that was directly constructed.
func (this *QPieSlice) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPieSlice_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPieSlice that was directly constructed.
func (this *QPieSlice) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPieSlice_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPieSlice that was directly constructed.
func (this *QPieSlice) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPieSlice_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPieSlice) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPieSlice_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPieSlice) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPieSlice_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSlice_event
func miqt_exec_callback_QPieSlice_event(self *C.QPieSlice, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPieSlice{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPieSlice) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QPieSlice_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPieSlice) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPieSlice_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSlice_eventFilter
func miqt_exec_callback_QPieSlice_eventFilter(self *C.QPieSlice, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPieSlice{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPieSlice) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPieSlice_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPieSlice) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPieSlice_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSlice_timerEvent
func miqt_exec_callback_QPieSlice_timerEvent(self *C.QPieSlice, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPieSlice{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPieSlice) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPieSlice_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPieSlice) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPieSlice_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSlice_childEvent
func miqt_exec_callback_QPieSlice_childEvent(self *C.QPieSlice, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPieSlice{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPieSlice) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPieSlice_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPieSlice) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPieSlice_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSlice_customEvent
func miqt_exec_callback_QPieSlice_customEvent(self *C.QPieSlice, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPieSlice{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPieSlice) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPieSlice_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPieSlice) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPieSlice_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSlice_connectNotify
func miqt_exec_callback_QPieSlice_connectNotify(self *C.QPieSlice, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPieSlice{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPieSlice) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPieSlice_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPieSlice) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPieSlice_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSlice_disconnectNotify
func miqt_exec_callback_QPieSlice_disconnectNotify(self *C.QPieSlice, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPieSlice{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPieSlice) Delete() {
	C.QPieSlice_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPieSlice) GoGC() {
	runtime.SetFinalizer(this, func(this *QPieSlice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
