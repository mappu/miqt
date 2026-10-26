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
	h  *C.QwtPlotMarker
	gc *[1]unsafe.Pointer
	*QwtPlotItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotMarker) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotItem.miqtSetGC(gc)
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
	defer runtime.KeepAlive(title)

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
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotMarker_rtti(this.h))
}

func (this *QwtPlotMarker) XValue() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPlotMarker_xValue(this.h))
}

func (this *QwtPlotMarker) YValue() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPlotMarker_yValue(this.h))
}

func (this *QwtPlotMarker) Value() *qt.QPointF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtPlotMarker_value(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMarker) SetXValue(xValue float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotMarker_setXValue(this.h, (C.double)(xValue))
}

func (this *QwtPlotMarker) SetYValue(yValue float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotMarker_setYValue(this.h, (C.double)(yValue))
}

func (this *QwtPlotMarker) SetValue(param1 float64, param2 float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotMarker_setValue(this.h, (C.double)(param1), (C.double)(param2))
}

func (this *QwtPlotMarker) SetValueWithValue(value *qt.QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QwtPlotMarker_setValueWithValue(this.h, (*C.QPointF)(value.UnsafePointer()))
}

func (this *QwtPlotMarker) SetLineStyle(lineStyle QwtPlotMarker__LineStyle) {
	defer runtime.KeepAlive(this)
	C.QwtPlotMarker_setLineStyle(this.h, (C.int)(lineStyle))
}

func (this *QwtPlotMarker) LineStyle() QwtPlotMarker__LineStyle {
	defer runtime.KeepAlive(this)
	return (QwtPlotMarker__LineStyle)(C.QwtPlotMarker_lineStyle(this.h))
}

func (this *QwtPlotMarker) SetLinePen(param1 *qt.QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotMarker_setLinePen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotMarker) SetLinePenWithLinePen(linePen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(linePen)
	C.QwtPlotMarker_setLinePenWithLinePen(this.h, (*C.QPen)(linePen.UnsafePointer()))
}

func (this *QwtPlotMarker) LinePen() *qt.QPen {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotMarker_linePen(this.h)))
}

func (this *QwtPlotMarker) SetSymbol(symbol *QwtSymbol) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(symbol)
	C.QwtPlotMarker_setSymbol(this.h, symbol.cPointer())
}

func (this *QwtPlotMarker) Symbol() *QwtSymbol {
	defer runtime.KeepAlive(this)
	return newQwtSymbol(C.QwtPlotMarker_symbol(this.h))
}

func (this *QwtPlotMarker) SetLabel(label *QwtText) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(label)
	C.QwtPlotMarker_setLabel(this.h, label.cPointer())
}

func (this *QwtPlotMarker) Label() *QwtText {
	defer runtime.KeepAlive(this)
	_goptr := newQwtText(C.QwtPlotMarker_label(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMarker) SetLabelAlignment(labelAlignment qt.AlignmentFlag) {
	defer runtime.KeepAlive(this)
	C.QwtPlotMarker_setLabelAlignment(this.h, (C.int)(labelAlignment))
}

func (this *QwtPlotMarker) LabelAlignment() qt.AlignmentFlag {
	defer runtime.KeepAlive(this)
	return (qt.AlignmentFlag)(C.QwtPlotMarker_labelAlignment(this.h))
}

func (this *QwtPlotMarker) SetLabelOrientation(labelOrientation qt.Orientation) {
	defer runtime.KeepAlive(this)
	C.QwtPlotMarker_setLabelOrientation(this.h, (C.int)(labelOrientation))
}

func (this *QwtPlotMarker) LabelOrientation() qt.Orientation {
	defer runtime.KeepAlive(this)
	return (qt.Orientation)(C.QwtPlotMarker_labelOrientation(this.h))
}

func (this *QwtPlotMarker) SetSpacing(spacing int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotMarker_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtPlotMarker) Spacing() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotMarker_spacing(this.h))
}

func (this *QwtPlotMarker) BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotMarker_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMarker) LegendIcon(index int, param2 *qt.QSizeF) *QwtGraphic {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param2)
	_goptr := newQwtGraphic(C.QwtPlotMarker_legendIcon(this.h, (C.int)(index), (*C.QSizeF)(param2.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMarker) SetLinePen2(param1 *qt.QColor, width float64) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotMarker_setLinePen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotMarker) SetLinePen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotMarker_setLinePen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotMarker) Delete() {
	C.QwtPlotMarker_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotMarker) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotMarker_delete((*C.QwtPlotMarker)(gc[0]))
	})
	this.miqtSetGC(gc)
}
