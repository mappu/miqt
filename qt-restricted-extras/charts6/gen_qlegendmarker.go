package charts6

/*

#include "gen_qlegendmarker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLegendMarker__LegendMarkerType int

const (
	QLegendMarker__LegendMarkerTypeArea        QLegendMarker__LegendMarkerType = 0
	QLegendMarker__LegendMarkerTypeBar         QLegendMarker__LegendMarkerType = 1
	QLegendMarker__LegendMarkerTypePie         QLegendMarker__LegendMarkerType = 2
	QLegendMarker__LegendMarkerTypeXY          QLegendMarker__LegendMarkerType = 3
	QLegendMarker__LegendMarkerTypeBoxPlot     QLegendMarker__LegendMarkerType = 4
	QLegendMarker__LegendMarkerTypeCandlestick QLegendMarker__LegendMarkerType = 5
)

type QLegendMarker struct {
	h *C.QLegendMarker
	*qt6.QObject
}

func (this *QLegendMarker) cPointer() *C.QLegendMarker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLegendMarker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLegendMarker constructs the type using only CGO pointers.
func newQLegendMarker(h *C.QLegendMarker) *QLegendMarker {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QLegendMarker_virtbase(h, &outptr_QObject)

	return &QLegendMarker{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQLegendMarker constructs the type using only unsafe pointers.
func UnsafeNewQLegendMarker(h unsafe.Pointer) *QLegendMarker {
	return newQLegendMarker((*C.QLegendMarker)(h))
}

func (this *QLegendMarker) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QLegendMarker_metaObject(this.h)))
}

func (this *QLegendMarker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLegendMarker_metacast(this.h, param1_Cstring))
}

func QLegendMarker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLegendMarker_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLegendMarker) Type() QLegendMarker__LegendMarkerType {
	return (QLegendMarker__LegendMarkerType)(C.QLegendMarker_type(this.h))
}

func (this *QLegendMarker) Label() string {
	var _ms C.struct_miqt_string = C.QLegendMarker_label(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLegendMarker) SetLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QLegendMarker_setLabel(this.h, label_ms)
}

func (this *QLegendMarker) LabelBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QLegendMarker_labelBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegendMarker) SetLabelBrush(brush *qt6.QBrush) {
	C.QLegendMarker_setLabelBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QLegendMarker) Font() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QLegendMarker_font(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegendMarker) SetFont(font *qt6.QFont) {
	C.QLegendMarker_setFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QLegendMarker) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QLegendMarker_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegendMarker) SetPen(pen *qt6.QPen) {
	C.QLegendMarker_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QLegendMarker) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QLegendMarker_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegendMarker) SetBrush(brush *qt6.QBrush) {
	C.QLegendMarker_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QLegendMarker) IsVisible() bool {
	return (bool)(C.QLegendMarker_isVisible(this.h))
}

func (this *QLegendMarker) SetVisible(visible bool) {
	C.QLegendMarker_setVisible(this.h, (C.bool)(visible))
}

func (this *QLegendMarker) Shape() QLegend__MarkerShape {
	return (QLegend__MarkerShape)(C.QLegendMarker_shape(this.h))
}

func (this *QLegendMarker) SetShape(shape QLegend__MarkerShape) {
	C.QLegendMarker_setShape(this.h, (C.int)(shape))
}

func (this *QLegendMarker) Series() *QAbstractSeries {
	return newQAbstractSeries(C.QLegendMarker_series(this.h))
}

func (this *QLegendMarker) Clicked() {
	C.QLegendMarker_clicked(this.h)
}
func (this *QLegendMarker) OnClicked(slot func()) {
	C.QLegendMarker_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_clicked
func miqt_exec_callback_QLegendMarker_clicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLegendMarker) Hovered(status bool) {
	C.QLegendMarker_hovered(this.h, (C.bool)(status))
}
func (this *QLegendMarker) OnHovered(slot func(status bool)) {
	C.QLegendMarker_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_hovered
func miqt_exec_callback_QLegendMarker_hovered(cb C.intptr_t, status C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(status)

	gofunc(slotval1)
}

func (this *QLegendMarker) LabelChanged() {
	C.QLegendMarker_labelChanged(this.h)
}
func (this *QLegendMarker) OnLabelChanged(slot func()) {
	C.QLegendMarker_connect_labelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_labelChanged
func miqt_exec_callback_QLegendMarker_labelChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLegendMarker) LabelBrushChanged() {
	C.QLegendMarker_labelBrushChanged(this.h)
}
func (this *QLegendMarker) OnLabelBrushChanged(slot func()) {
	C.QLegendMarker_connect_labelBrushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_labelBrushChanged
func miqt_exec_callback_QLegendMarker_labelBrushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLegendMarker) FontChanged() {
	C.QLegendMarker_fontChanged(this.h)
}
func (this *QLegendMarker) OnFontChanged(slot func()) {
	C.QLegendMarker_connect_fontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_fontChanged
func miqt_exec_callback_QLegendMarker_fontChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLegendMarker) PenChanged() {
	C.QLegendMarker_penChanged(this.h)
}
func (this *QLegendMarker) OnPenChanged(slot func()) {
	C.QLegendMarker_connect_penChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_penChanged
func miqt_exec_callback_QLegendMarker_penChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLegendMarker) BrushChanged() {
	C.QLegendMarker_brushChanged(this.h)
}
func (this *QLegendMarker) OnBrushChanged(slot func()) {
	C.QLegendMarker_connect_brushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_brushChanged
func miqt_exec_callback_QLegendMarker_brushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLegendMarker) VisibleChanged() {
	C.QLegendMarker_visibleChanged(this.h)
}
func (this *QLegendMarker) OnVisibleChanged(slot func()) {
	C.QLegendMarker_connect_visibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_visibleChanged
func miqt_exec_callback_QLegendMarker_visibleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLegendMarker) ShapeChanged() {
	C.QLegendMarker_shapeChanged(this.h)
}
func (this *QLegendMarker) OnShapeChanged(slot func()) {
	C.QLegendMarker_connect_shapeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegendMarker_shapeChanged
func miqt_exec_callback_QLegendMarker_shapeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QLegendMarker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLegendMarker_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLegendMarker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLegendMarker_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QLegendMarker) Delete() {
	C.QLegendMarker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLegendMarker) GoGC() {
	runtime.SetFinalizer(this, func(this *QLegendMarker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
