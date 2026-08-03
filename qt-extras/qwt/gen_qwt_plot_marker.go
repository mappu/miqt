package qwt

/*

#include "gen_qwt_plot_marker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotMarker__LineStyle int

const (
	QwtPlotMarker__NoLine QwtPlotMarker__LineStyle = 0
	QwtPlotMarker__HLine  QwtPlotMarker__LineStyle = 1
	QwtPlotMarker__VLine  QwtPlotMarker__LineStyle = 2
	QwtPlotMarker__Cross  QwtPlotMarker__LineStyle = 3
)

type QwtPlotMarker struct {
	h *C.QwtPlotMarker
	*QwtPlotItem
}

func (this *QwtPlotMarker) cPointer() *C.QwtPlotMarker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotMarker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotMarker constructs the type using only CGO pointers.
func newQwtPlotMarker(h *C.QwtPlotMarker) *QwtPlotMarker {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotMarker_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotMarker{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotMarker constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotMarker(h unsafe.Pointer) *QwtPlotMarker {
	return newQwtPlotMarker((*C.QwtPlotMarker)(h))
}

// NewQwtPlotMarker constructs a new QwtPlotMarker object.
func NewQwtPlotMarker() *QwtPlotMarker {

	return newQwtPlotMarker(C.QwtPlotMarker_new())
}

// NewQwtPlotMarker2 constructs a new QwtPlotMarker object.
func NewQwtPlotMarker2(title *QwtText) *QwtPlotMarker {

	return newQwtPlotMarker(C.QwtPlotMarker_new2(title.cPointer()))
}

// NewQwtPlotMarker3 constructs a new QwtPlotMarker object.
func NewQwtPlotMarker3(title string) *QwtPlotMarker {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotMarker(C.QwtPlotMarker_new3(title_ms))
}

func (this *QwtPlotMarker) Rtti() int {
	return (int)(C.QwtPlotMarker_rtti(this.h))
}

func (this *QwtPlotMarker) XValue() float64 {
	return (float64)(C.QwtPlotMarker_xValue(this.h))
}

func (this *QwtPlotMarker) YValue() float64 {
	return (float64)(C.QwtPlotMarker_yValue(this.h))
}

func (this *QwtPlotMarker) Value() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtPlotMarker_value(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMarker) SetXValue(xValue float64) {
	C.QwtPlotMarker_setXValue(this.h, (C.double)(xValue))
}

func (this *QwtPlotMarker) SetYValue(yValue float64) {
	C.QwtPlotMarker_setYValue(this.h, (C.double)(yValue))
}

func (this *QwtPlotMarker) SetValue(param1 float64, param2 float64) {
	C.QwtPlotMarker_setValue(this.h, (C.double)(param1), (C.double)(param2))
}

func (this *QwtPlotMarker) SetValueWithValue(value *qt.QPointF) {
	C.QwtPlotMarker_setValueWithValue(this.h, (*C.QPointF)(value.UnsafePointer()))
}

func (this *QwtPlotMarker) SetLineStyle(lineStyle QwtPlotMarker__LineStyle) {
	C.QwtPlotMarker_setLineStyle(this.h, (C.int)(lineStyle))
}

func (this *QwtPlotMarker) LineStyle() QwtPlotMarker__LineStyle {
	return (QwtPlotMarker__LineStyle)(C.QwtPlotMarker_lineStyle(this.h))
}

func (this *QwtPlotMarker) SetLinePen(param1 *qt.QColor) {
	C.QwtPlotMarker_setLinePen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotMarker) SetLinePenWithLinePen(linePen *qt.QPen) {
	C.QwtPlotMarker_setLinePenWithLinePen(this.h, (*C.QPen)(linePen.UnsafePointer()))
}

func (this *QwtPlotMarker) LinePen() *qt.QPen {
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotMarker_linePen(this.h)))
}

func (this *QwtPlotMarker) SetSymbol(symbol *QwtSymbol) {
	C.QwtPlotMarker_setSymbol(this.h, symbol.cPointer())
}

func (this *QwtPlotMarker) Symbol() *QwtSymbol {
	return newQwtSymbol(C.QwtPlotMarker_symbol(this.h))
}

func (this *QwtPlotMarker) SetLabel(label *QwtText) {
	C.QwtPlotMarker_setLabel(this.h, label.cPointer())
}

func (this *QwtPlotMarker) Label() *QwtText {
	_goptr := newQwtText(C.QwtPlotMarker_label(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMarker) SetLabelAlignment(labelAlignment qt.AlignmentFlag) {
	C.QwtPlotMarker_setLabelAlignment(this.h, (C.int)(labelAlignment))
}

func (this *QwtPlotMarker) LabelAlignment() qt.AlignmentFlag {
	return (qt.AlignmentFlag)(C.QwtPlotMarker_labelAlignment(this.h))
}

func (this *QwtPlotMarker) SetLabelOrientation(labelOrientation qt.Orientation) {
	C.QwtPlotMarker_setLabelOrientation(this.h, (C.int)(labelOrientation))
}

func (this *QwtPlotMarker) LabelOrientation() qt.Orientation {
	return (qt.Orientation)(C.QwtPlotMarker_labelOrientation(this.h))
}

func (this *QwtPlotMarker) SetSpacing(spacing int) {
	C.QwtPlotMarker_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtPlotMarker) Spacing() int {
	return (int)(C.QwtPlotMarker_spacing(this.h))
}

func (this *QwtPlotMarker) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotMarker_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMarker) LegendIcon(index int, param2 *qt.QSizeF) *QwtGraphic {
	_goptr := newQwtGraphic(C.QwtPlotMarker_legendIcon(this.h, (C.int)(index), (*C.QSizeF)(param2.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMarker) SetLinePen2(param1 *qt.QColor, width float64) {
	C.QwtPlotMarker_setLinePen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotMarker) SetLinePen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtPlotMarker_setLinePen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotMarker) Delete() {
	C.QwtPlotMarker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotMarker) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotMarker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
