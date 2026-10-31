package qwt

/*

#include "gen_qwt_plot_multi_barchart.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotMultiBarChart__ChartStyle int

const (
	QwtPlotMultiBarChart__Grouped QwtPlotMultiBarChart__ChartStyle = 0
	QwtPlotMultiBarChart__Stacked QwtPlotMultiBarChart__ChartStyle = 1
)

type QwtPlotMultiBarChart struct {
	h  *C.QwtPlotMultiBarChart
	gc *[1]unsafe.Pointer
	*QwtPlotAbstractBarChart
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotMultiBarChart) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotAbstractBarChart.miqtSetGC(gc)
}

func (this *QwtPlotMultiBarChart) cPointer() *C.QwtPlotMultiBarChart {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotMultiBarChart) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotMultiBarChart constructs the type using only CGO pointers.
func newQwtPlotMultiBarChart(h *C.QwtPlotMultiBarChart) *QwtPlotMultiBarChart {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotAbstractBarChart *C.QwtPlotAbstractBarChart = nil
	C.QwtPlotMultiBarChart_virtbase(h, &outptr_QwtPlotAbstractBarChart)

	return &QwtPlotMultiBarChart{h: h,
		QwtPlotAbstractBarChart: newQwtPlotAbstractBarChart(outptr_QwtPlotAbstractBarChart)}
}

// UnsafeNewQwtPlotMultiBarChart constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotMultiBarChart(h unsafe.Pointer) *QwtPlotMultiBarChart {
	return newQwtPlotMultiBarChart((*C.QwtPlotMultiBarChart)(h))
}

// NewQwtPlotMultiBarChart constructs a new QwtPlotMultiBarChart object.
func NewQwtPlotMultiBarChart() *QwtPlotMultiBarChart {

	return newQwtPlotMultiBarChart(C.QwtPlotMultiBarChart_new())
}

// NewQwtPlotMultiBarChart2 constructs a new QwtPlotMultiBarChart object.
func NewQwtPlotMultiBarChart2(title *QwtText) *QwtPlotMultiBarChart {
	defer runtime.KeepAlive(title)

	return newQwtPlotMultiBarChart(C.QwtPlotMultiBarChart_new2(title.cPointer()))
}

// NewQwtPlotMultiBarChart3 constructs a new QwtPlotMultiBarChart object.
func NewQwtPlotMultiBarChart3(title string) *QwtPlotMultiBarChart {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotMultiBarChart(C.QwtPlotMultiBarChart_new3(title_ms))
}

func (this *QwtPlotMultiBarChart) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotMultiBarChart_rtti(this.h))
}

func (this *QwtPlotMultiBarChart) SetBarTitles(barTitles []QwtText) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(barTitles)
	barTitles_CArray_ptr := (**C.QwtText)(C.malloc(C.size_t(8 * len(barTitles))))
	defer C.free(unsafe.Pointer(barTitles_CArray_ptr))
	barTitles_CArray := unsafe.Slice(barTitles_CArray_ptr, len(barTitles))
	for i := range barTitles {
		barTitles_CArray[i] = barTitles[i].cPointer()
	}
	barTitles_ma := C.struct_miqt_array{len: C.size_t(len(barTitles)), data: unsafe.Pointer(barTitles_CArray_ptr)}
	C.QwtPlotMultiBarChart_setBarTitles(this.h, barTitles_ma)
}

func (this *QwtPlotMultiBarChart) BarTitles() []QwtText {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtPlotMultiBarChart_barTitles(this.h)
	_ret := make([]QwtText, int(_ma.len))
	_outCast := unsafe.Slice((**C.QwtText)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQwtText(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QwtPlotMultiBarChart) SetSamples(samples []QwtSetSample) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(samples)
	samples_CArray_ptr := (**C.QwtSetSample)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray_ptr))
	samples_CArray := unsafe.Slice(samples_CArray_ptr, len(samples))
	for i := range samples {
		samples_CArray[i] = samples[i].cPointer()
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray_ptr)}
	C.QwtPlotMultiBarChart_setSamples(this.h, samples_ma)
}

func (this *QwtPlotMultiBarChart) SetSamplesWithSamples(samples [][]float64) {
	defer runtime.KeepAlive(this)
	samples_CArray_ptr := (*C.struct_miqt_array)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray_ptr))
	samples_CArray := unsafe.Slice(samples_CArray_ptr, len(samples))
	for i := range samples {
		samples_i_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(samples[i]))))
		defer C.free(unsafe.Pointer(samples_i_CArray_ptr))
		samples_i_CArray := unsafe.Slice(samples_i_CArray_ptr, len(samples[i]))
		for i := range samples[i] {
			samples_i_CArray[i] = (C.double)(samples[i][i])
		}
		samples_i_ma := C.struct_miqt_array{len: C.size_t(len(samples[i])), data: unsafe.Pointer(samples_i_CArray_ptr)}
		samples_CArray[i] = samples_i_ma
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray_ptr)}
	C.QwtPlotMultiBarChart_setSamplesWithSamples(this.h, samples_ma)
}

func (this *QwtPlotMultiBarChart) SetStyle(style QwtPlotMultiBarChart__ChartStyle) {
	defer runtime.KeepAlive(this)
	C.QwtPlotMultiBarChart_setStyle(this.h, (C.int)(style))
}

func (this *QwtPlotMultiBarChart) Style() QwtPlotMultiBarChart__ChartStyle {
	defer runtime.KeepAlive(this)
	return (QwtPlotMultiBarChart__ChartStyle)(C.QwtPlotMultiBarChart_style(this.h))
}

func (this *QwtPlotMultiBarChart) SetSymbol(valueIndex int, param2 *QwtColumnSymbol) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param2)
	C.QwtPlotMultiBarChart_setSymbol(this.h, (C.int)(valueIndex), param2.cPointer())
}

func (this *QwtPlotMultiBarChart) Symbol(valueIndex int) *QwtColumnSymbol {
	defer runtime.KeepAlive(this)
	return newQwtColumnSymbol(C.QwtPlotMultiBarChart_symbol(this.h, (C.int)(valueIndex)))
}

func (this *QwtPlotMultiBarChart) ResetSymbolMap() {
	defer runtime.KeepAlive(this)
	C.QwtPlotMultiBarChart_resetSymbolMap(this.h)
}

func (this *QwtPlotMultiBarChart) BoundingRect() qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPlotMultiBarChart_boundingRect(this.h))
}

func (this *QwtPlotMultiBarChart) LegendData() []QwtLegendData {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtPlotMultiBarChart_legendData(this.h)
	_ret := make([]QwtLegendData, int(_ma.len))
	_outCast := unsafe.Slice((**C.QwtLegendData)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQwtLegendData(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QwtPlotMultiBarChart) LegendIcon(index int, param2 qt.QSizeF) *QwtGraphic {
	defer runtime.KeepAlive(this)
	_goptr := newQwtGraphic(C.QwtPlotMultiBarChart_legendIcon(this.h, (C.int)(index), libmiqt.ValueCast[C.struct_miqt_qsizef](param2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QwtPlotMultiBarChart) Delete() {
	C.QwtPlotMultiBarChart_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotMultiBarChart) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotMultiBarChart_delete((*C.QwtPlotMultiBarChart)(gc[0]))
	})
	this.miqtSetGC(gc)
}
