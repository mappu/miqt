package qwt

/*

#include "gen_qwt_plot_histogram.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotHistogram__HistogramStyle int

const (
	QwtPlotHistogram__Outline   QwtPlotHistogram__HistogramStyle = 0
	QwtPlotHistogram__Columns   QwtPlotHistogram__HistogramStyle = 1
	QwtPlotHistogram__Lines     QwtPlotHistogram__HistogramStyle = 2
	QwtPlotHistogram__UserStyle QwtPlotHistogram__HistogramStyle = 100
)

type QwtPlotHistogram struct {
	h  *C.QwtPlotHistogram
	gc *[1]unsafe.Pointer
	*QwtPlotSeriesItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotHistogram) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotSeriesItem.miqtSetGC(gc)
}

func (this *QwtPlotHistogram) cPointer() *C.QwtPlotHistogram {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotHistogram) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotHistogram constructs the type using only CGO pointers.
func newQwtPlotHistogram(h *C.QwtPlotHistogram) *QwtPlotHistogram {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotSeriesItem *C.QwtPlotSeriesItem = nil
	C.QwtPlotHistogram_virtbase(h, &outptr_QwtPlotSeriesItem)

	return &QwtPlotHistogram{h: h,
		QwtPlotSeriesItem: newQwtPlotSeriesItem(outptr_QwtPlotSeriesItem)}
}

// UnsafeNewQwtPlotHistogram constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotHistogram(h unsafe.Pointer) *QwtPlotHistogram {
	return newQwtPlotHistogram((*C.QwtPlotHistogram)(h))
}

// NewQwtPlotHistogram constructs a new QwtPlotHistogram object.
func NewQwtPlotHistogram() *QwtPlotHistogram {

	return newQwtPlotHistogram(C.QwtPlotHistogram_new())
}

// NewQwtPlotHistogram2 constructs a new QwtPlotHistogram object.
func NewQwtPlotHistogram2(title *QwtText) *QwtPlotHistogram {
	defer runtime.KeepAlive(title)

	return newQwtPlotHistogram(C.QwtPlotHistogram_new2(title.cPointer()))
}

// NewQwtPlotHistogram3 constructs a new QwtPlotHistogram object.
func NewQwtPlotHistogram3(title string) *QwtPlotHistogram {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotHistogram(C.QwtPlotHistogram_new3(title_ms))
}

func (this *QwtPlotHistogram) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotHistogram_rtti(this.h))
}

func (this *QwtPlotHistogram) SetPen(param1 qt.QColor) {
	defer runtime.KeepAlive(this)
	C.QwtPlotHistogram_setPen(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1))
}

func (this *QwtPlotHistogram) SetPenWithPen(pen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pen)
	C.QwtPlotHistogram_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtPlotHistogram) Pen() *qt.QPen {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotHistogram_pen(this.h)))
}

func (this *QwtPlotHistogram) SetBrush(brush *qt.QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(brush)
	C.QwtPlotHistogram_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtPlotHistogram) Brush() *qt.QBrush {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotHistogram_brush(this.h)))
}

func (this *QwtPlotHistogram) SetSamples(samples []QwtIntervalSample) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(samples)
	samples_CArray_ptr := (**C.QwtIntervalSample)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray_ptr))
	samples_CArray := unsafe.Slice(samples_CArray_ptr, len(samples))
	for i := range samples {
		samples_CArray[i] = samples[i].cPointer()
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray_ptr)}
	C.QwtPlotHistogram_setSamples(this.h, samples_ma)
}

func (this *QwtPlotHistogram) SetBaseline(baseline float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotHistogram_setBaseline(this.h, (C.double)(baseline))
}

func (this *QwtPlotHistogram) Baseline() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPlotHistogram_baseline(this.h))
}

func (this *QwtPlotHistogram) SetStyle(style QwtPlotHistogram__HistogramStyle) {
	defer runtime.KeepAlive(this)
	C.QwtPlotHistogram_setStyle(this.h, (C.int)(style))
}

func (this *QwtPlotHistogram) Style() QwtPlotHistogram__HistogramStyle {
	defer runtime.KeepAlive(this)
	return (QwtPlotHistogram__HistogramStyle)(C.QwtPlotHistogram_style(this.h))
}

func (this *QwtPlotHistogram) SetSymbol(symbol *QwtColumnSymbol) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(symbol)
	C.QwtPlotHistogram_setSymbol(this.h, symbol.cPointer())
}

func (this *QwtPlotHistogram) Symbol() *QwtColumnSymbol {
	defer runtime.KeepAlive(this)
	return newQwtColumnSymbol(C.QwtPlotHistogram_symbol(this.h))
}

func (this *QwtPlotHistogram) BoundingRect() qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPlotHistogram_boundingRect(this.h))
}

func (this *QwtPlotHistogram) LegendIcon(index int, param2 qt.QSizeF) *QwtGraphic {
	defer runtime.KeepAlive(this)
	_goptr := newQwtGraphic(C.QwtPlotHistogram_legendIcon(this.h, (C.int)(index), libmiqt.ValueCast[C.struct_miqt_qsizef](param2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotHistogram) SetPen2(param1 qt.QColor, width float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotHistogram_setPen2(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1), (C.double)(width))
}

func (this *QwtPlotHistogram) SetPen3(param1 qt.QColor, width float64, param3 qt.PenStyle) {
	defer runtime.KeepAlive(this)
	C.QwtPlotHistogram_setPen3(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotHistogram) Delete() {
	C.QwtPlotHistogram_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotHistogram) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotHistogram_delete((*C.QwtPlotHistogram)(gc[0]))
	})
	this.miqtSetGC(gc)
}
