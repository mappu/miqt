package qwt

/*

#include "gen_qwt_plot_multi_barchart.h"
#include <stdlib.h>

*/
import "C"

import (
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
	h *C.QwtPlotMultiBarChart
	*QwtPlotAbstractBarChart
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
	return (int)(C.QwtPlotMultiBarChart_rtti(this.h))
}

func (this *QwtPlotMultiBarChart) SetBarTitles(barTitles []QwtText) {
	barTitles_CArray := (*[0xffff]*C.QwtText)(C.malloc(C.size_t(8 * len(barTitles))))
	defer C.free(unsafe.Pointer(barTitles_CArray))
	for i := range barTitles {
		barTitles_CArray[i] = barTitles[i].cPointer()
	}
	barTitles_ma := C.struct_miqt_array{len: C.size_t(len(barTitles)), data: unsafe.Pointer(barTitles_CArray)}
	C.QwtPlotMultiBarChart_setBarTitles(this.h, barTitles_ma)
}

func (this *QwtPlotMultiBarChart) BarTitles() []QwtText {
	var _ma C.struct_miqt_array = C.QwtPlotMultiBarChart_barTitles(this.h)
	_ret := make([]QwtText, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtText)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQwtText(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QwtPlotMultiBarChart) SetSamples(samples []QwtSetSample) {
	samples_CArray := (*[0xffff]*C.QwtSetSample)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray))
	for i := range samples {
		samples_CArray[i] = samples[i].cPointer()
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray)}
	C.QwtPlotMultiBarChart_setSamples(this.h, samples_ma)
}

func (this *QwtPlotMultiBarChart) SetSamplesWithSamples(samples [][]float64) {
	samples_CArray := (*[0xffff]C.struct_miqt_array)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray))
	for i := range samples {
		samples_i_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(samples[i]))))
		defer C.free(unsafe.Pointer(samples_i_CArray))
		for i := range samples[i] {
			samples_i_CArray[i] = (C.double)(samples[i][i])
		}
		samples_i_ma := C.struct_miqt_array{len: C.size_t(len(samples[i])), data: unsafe.Pointer(samples_i_CArray)}
		samples_CArray[i] = samples_i_ma
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray)}
	C.QwtPlotMultiBarChart_setSamplesWithSamples(this.h, samples_ma)
}

func (this *QwtPlotMultiBarChart) SetStyle(style QwtPlotMultiBarChart__ChartStyle) {
	C.QwtPlotMultiBarChart_setStyle(this.h, (C.int)(style))
}

func (this *QwtPlotMultiBarChart) Style() QwtPlotMultiBarChart__ChartStyle {
	return (QwtPlotMultiBarChart__ChartStyle)(C.QwtPlotMultiBarChart_style(this.h))
}

func (this *QwtPlotMultiBarChart) SetSymbol(valueIndex int, param2 *QwtColumnSymbol) {
	C.QwtPlotMultiBarChart_setSymbol(this.h, (C.int)(valueIndex), param2.cPointer())
}

func (this *QwtPlotMultiBarChart) Symbol(valueIndex int) *QwtColumnSymbol {
	return newQwtColumnSymbol(C.QwtPlotMultiBarChart_symbol(this.h, (C.int)(valueIndex)))
}

func (this *QwtPlotMultiBarChart) ResetSymbolMap() {
	C.QwtPlotMultiBarChart_resetSymbolMap(this.h)
}

func (this *QwtPlotMultiBarChart) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotMultiBarChart_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotMultiBarChart) LegendData() []QwtLegendData {
	var _ma C.struct_miqt_array = C.QwtPlotMultiBarChart_legendData(this.h)
	_ret := make([]QwtLegendData, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtLegendData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQwtLegendData(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QwtPlotMultiBarChart) LegendIcon(index int, param2 *qt.QSizeF) *QwtGraphic {
	_goptr := newQwtGraphic(C.QwtPlotMultiBarChart_legendIcon(this.h, (C.int)(index), (*C.QSizeF)(param2.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QwtPlotMultiBarChart) Delete() {
	C.QwtPlotMultiBarChart_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotMultiBarChart) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotMultiBarChart) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
