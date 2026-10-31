package qwt

/*

#include "gen_qwt_plot_intervalcurve.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotIntervalCurve__CurveStyle int

const (
	QwtPlotIntervalCurve__NoCurve   QwtPlotIntervalCurve__CurveStyle = 0
	QwtPlotIntervalCurve__Tube      QwtPlotIntervalCurve__CurveStyle = 1
	QwtPlotIntervalCurve__UserCurve QwtPlotIntervalCurve__CurveStyle = 100
)

type QwtPlotIntervalCurve__PaintAttribute int

const (
	QwtPlotIntervalCurve__ClipPolygons QwtPlotIntervalCurve__PaintAttribute = 1
	QwtPlotIntervalCurve__ClipSymbol   QwtPlotIntervalCurve__PaintAttribute = 2
)

type QwtPlotIntervalCurve struct {
	h  *C.QwtPlotIntervalCurve
	gc *[1]unsafe.Pointer
	*QwtPlotSeriesItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotIntervalCurve) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotSeriesItem.miqtSetGC(gc)
}

func (this *QwtPlotIntervalCurve) cPointer() *C.QwtPlotIntervalCurve {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotIntervalCurve) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotIntervalCurve constructs the type using only CGO pointers.
func newQwtPlotIntervalCurve(h *C.QwtPlotIntervalCurve) *QwtPlotIntervalCurve {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotSeriesItem *C.QwtPlotSeriesItem = nil
	C.QwtPlotIntervalCurve_virtbase(h, &outptr_QwtPlotSeriesItem)

	return &QwtPlotIntervalCurve{h: h,
		QwtPlotSeriesItem: newQwtPlotSeriesItem(outptr_QwtPlotSeriesItem)}
}

// UnsafeNewQwtPlotIntervalCurve constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotIntervalCurve(h unsafe.Pointer) *QwtPlotIntervalCurve {
	return newQwtPlotIntervalCurve((*C.QwtPlotIntervalCurve)(h))
}

// NewQwtPlotIntervalCurve constructs a new QwtPlotIntervalCurve object.
func NewQwtPlotIntervalCurve() *QwtPlotIntervalCurve {

	return newQwtPlotIntervalCurve(C.QwtPlotIntervalCurve_new())
}

// NewQwtPlotIntervalCurve2 constructs a new QwtPlotIntervalCurve object.
func NewQwtPlotIntervalCurve2(title *QwtText) *QwtPlotIntervalCurve {
	defer runtime.KeepAlive(title)

	return newQwtPlotIntervalCurve(C.QwtPlotIntervalCurve_new2(title.cPointer()))
}

// NewQwtPlotIntervalCurve3 constructs a new QwtPlotIntervalCurve object.
func NewQwtPlotIntervalCurve3(title string) *QwtPlotIntervalCurve {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotIntervalCurve(C.QwtPlotIntervalCurve_new3(title_ms))
}

func (this *QwtPlotIntervalCurve) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotIntervalCurve_rtti(this.h))
}

func (this *QwtPlotIntervalCurve) SetPaintAttribute(param1 QwtPlotIntervalCurve__PaintAttribute) {
	defer runtime.KeepAlive(this)
	C.QwtPlotIntervalCurve_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotIntervalCurve) TestPaintAttribute(param1 QwtPlotIntervalCurve__PaintAttribute) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotIntervalCurve_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotIntervalCurve) SetSamples(samples []QwtIntervalSample) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(samples)
	samples_CArray_ptr := (**C.QwtIntervalSample)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray_ptr))
	samples_CArray := unsafe.Slice(samples_CArray_ptr, len(samples))
	for i := range samples {
		samples_CArray[i] = samples[i].cPointer()
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray_ptr)}
	C.QwtPlotIntervalCurve_setSamples(this.h, samples_ma)
}

func (this *QwtPlotIntervalCurve) SetPen(param1 qt.QColor) {
	defer runtime.KeepAlive(this)
	C.QwtPlotIntervalCurve_setPen(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1))
}

func (this *QwtPlotIntervalCurve) SetPenWithPen(pen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pen)
	C.QwtPlotIntervalCurve_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtPlotIntervalCurve) Pen() *qt.QPen {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotIntervalCurve_pen(this.h)))
}

func (this *QwtPlotIntervalCurve) SetBrush(brush *qt.QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(brush)
	C.QwtPlotIntervalCurve_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtPlotIntervalCurve) Brush() *qt.QBrush {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotIntervalCurve_brush(this.h)))
}

func (this *QwtPlotIntervalCurve) SetStyle(style QwtPlotIntervalCurve__CurveStyle) {
	defer runtime.KeepAlive(this)
	C.QwtPlotIntervalCurve_setStyle(this.h, (C.int)(style))
}

func (this *QwtPlotIntervalCurve) Style() QwtPlotIntervalCurve__CurveStyle {
	defer runtime.KeepAlive(this)
	return (QwtPlotIntervalCurve__CurveStyle)(C.QwtPlotIntervalCurve_style(this.h))
}

func (this *QwtPlotIntervalCurve) SetSymbol(symbol *QwtIntervalSymbol) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(symbol)
	C.QwtPlotIntervalCurve_setSymbol(this.h, symbol.cPointer())
}

func (this *QwtPlotIntervalCurve) Symbol() *QwtIntervalSymbol {
	defer runtime.KeepAlive(this)
	return newQwtIntervalSymbol(C.QwtPlotIntervalCurve_symbol(this.h))
}

func (this *QwtPlotIntervalCurve) BoundingRect() qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPlotIntervalCurve_boundingRect(this.h))
}

func (this *QwtPlotIntervalCurve) LegendIcon(index int, param2 qt.QSizeF) *QwtGraphic {
	defer runtime.KeepAlive(this)
	_goptr := newQwtGraphic(C.QwtPlotIntervalCurve_legendIcon(this.h, (C.int)(index), libmiqt.ValueCast[C.struct_miqt_qsizef](param2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotIntervalCurve) SetPaintAttribute2(param1 QwtPlotIntervalCurve__PaintAttribute, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotIntervalCurve_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotIntervalCurve) SetPen2(param1 qt.QColor, width float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotIntervalCurve_setPen2(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1), (C.double)(width))
}

func (this *QwtPlotIntervalCurve) SetPen3(param1 qt.QColor, width float64, param3 qt.PenStyle) {
	defer runtime.KeepAlive(this)
	C.QwtPlotIntervalCurve_setPen3(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotIntervalCurve) Delete() {
	C.QwtPlotIntervalCurve_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotIntervalCurve) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotIntervalCurve_delete((*C.QwtPlotIntervalCurve)(gc[0]))
	})
	this.miqtSetGC(gc)
}
