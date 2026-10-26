package qwt

/*

#include "gen_qwt_plot_barchart.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotBarChart__LegendMode int

const (
	QwtPlotBarChart__LegendChartTitle QwtPlotBarChart__LegendMode = 0
	QwtPlotBarChart__LegendBarTitles  QwtPlotBarChart__LegendMode = 1
)

type QwtPlotBarChart struct {
	h  *C.QwtPlotBarChart
	gc *[1]unsafe.Pointer
	*QwtPlotAbstractBarChart
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotBarChart) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotAbstractBarChart.miqtSetGC(gc)
}

func (this *QwtPlotBarChart) cPointer() *C.QwtPlotBarChart {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotBarChart) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotBarChart constructs the type using only CGO pointers.
func newQwtPlotBarChart(h *C.QwtPlotBarChart) *QwtPlotBarChart {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotAbstractBarChart *C.QwtPlotAbstractBarChart = nil
	C.QwtPlotBarChart_virtbase(h, &outptr_QwtPlotAbstractBarChart)

	return &QwtPlotBarChart{h: h,
		QwtPlotAbstractBarChart: newQwtPlotAbstractBarChart(outptr_QwtPlotAbstractBarChart)}
}

// UnsafeNewQwtPlotBarChart constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotBarChart(h unsafe.Pointer) *QwtPlotBarChart {
	return newQwtPlotBarChart((*C.QwtPlotBarChart)(h))
}

// NewQwtPlotBarChart constructs a new QwtPlotBarChart object.
func NewQwtPlotBarChart() *QwtPlotBarChart {

	return newQwtPlotBarChart(C.QwtPlotBarChart_new())
}

// NewQwtPlotBarChart2 constructs a new QwtPlotBarChart object.
func NewQwtPlotBarChart2(title *QwtText) *QwtPlotBarChart {
	defer runtime.KeepAlive(title)

	return newQwtPlotBarChart(C.QwtPlotBarChart_new2(title.cPointer()))
}

// NewQwtPlotBarChart3 constructs a new QwtPlotBarChart object.
func NewQwtPlotBarChart3(title string) *QwtPlotBarChart {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotBarChart(C.QwtPlotBarChart_new3(title_ms))
}

func (this *QwtPlotBarChart) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotBarChart_rtti(this.h))
}

func (this *QwtPlotBarChart) SetSamples(samples []qt.QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(samples)
	samples_CArray_ptr := (**C.QPointF)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray_ptr))
	samples_CArray := unsafe.Slice(samples_CArray_ptr, len(samples))
	for i := range samples {
		samples_CArray[i] = (*C.QPointF)(samples[i].UnsafePointer())
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray_ptr)}
	C.QwtPlotBarChart_setSamples(this.h, samples_ma)
}

func (this *QwtPlotBarChart) SetSamplesWithSamples(samples []float64) {
	defer runtime.KeepAlive(this)
	samples_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray_ptr))
	samples_CArray := unsafe.Slice(samples_CArray_ptr, len(samples))
	for i := range samples {
		samples_CArray[i] = (C.double)(samples[i])
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray_ptr)}
	C.QwtPlotBarChart_setSamplesWithSamples(this.h, samples_ma)
}

func (this *QwtPlotBarChart) SetSymbol(symbol *QwtColumnSymbol) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(symbol)
	C.QwtPlotBarChart_setSymbol(this.h, symbol.cPointer())
}

func (this *QwtPlotBarChart) Symbol() *QwtColumnSymbol {
	defer runtime.KeepAlive(this)
	return newQwtColumnSymbol(C.QwtPlotBarChart_symbol(this.h))
}

func (this *QwtPlotBarChart) SetLegendMode(legendMode QwtPlotBarChart__LegendMode) {
	defer runtime.KeepAlive(this)
	C.QwtPlotBarChart_setLegendMode(this.h, (C.int)(legendMode))
}

func (this *QwtPlotBarChart) LegendMode() QwtPlotBarChart__LegendMode {
	defer runtime.KeepAlive(this)
	return (QwtPlotBarChart__LegendMode)(C.QwtPlotBarChart_legendMode(this.h))
}

func (this *QwtPlotBarChart) BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotBarChart_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotBarChart) SpecialSymbol(sampleIndex int, param2 *qt.QPointF) *QwtColumnSymbol {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param2)
	return newQwtColumnSymbol(C.QwtPlotBarChart_specialSymbol(this.h, (C.int)(sampleIndex), (*C.QPointF)(param2.UnsafePointer())))
}

func (this *QwtPlotBarChart) BarTitle(sampleIndex int) *QwtText {
	defer runtime.KeepAlive(this)
	_goptr := newQwtText(C.QwtPlotBarChart_barTitle(this.h, (C.int)(sampleIndex)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QwtPlotBarChart) Delete() {
	C.QwtPlotBarChart_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotBarChart) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotBarChart_delete((*C.QwtPlotBarChart)(gc[0]))
	})
	this.miqtSetGC(gc)
}
