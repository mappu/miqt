package qwt

/*

#include "gen_qwt_plot_abstract_barchart.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtPlotAbstractBarChart__LayoutPolicy int

const (
	QwtPlotAbstractBarChart__AutoAdjustSamples   QwtPlotAbstractBarChart__LayoutPolicy = 0
	QwtPlotAbstractBarChart__ScaleSamplesToAxes  QwtPlotAbstractBarChart__LayoutPolicy = 1
	QwtPlotAbstractBarChart__ScaleSampleToCanvas QwtPlotAbstractBarChart__LayoutPolicy = 2
	QwtPlotAbstractBarChart__FixedSampleSize     QwtPlotAbstractBarChart__LayoutPolicy = 3
)

type QwtPlotAbstractBarChart struct {
	h *C.QwtPlotAbstractBarChart
	*QwtPlotSeriesItem
}

func (this *QwtPlotAbstractBarChart) cPointer() *C.QwtPlotAbstractBarChart {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotAbstractBarChart) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotAbstractBarChart constructs the type using only CGO pointers.
func newQwtPlotAbstractBarChart(h *C.QwtPlotAbstractBarChart) *QwtPlotAbstractBarChart {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotSeriesItem *C.QwtPlotSeriesItem = nil
	C.QwtPlotAbstractBarChart_virtbase(h, &outptr_QwtPlotSeriesItem)

	return &QwtPlotAbstractBarChart{h: h,
		QwtPlotSeriesItem: newQwtPlotSeriesItem(outptr_QwtPlotSeriesItem)}
}

// UnsafeNewQwtPlotAbstractBarChart constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotAbstractBarChart(h unsafe.Pointer) *QwtPlotAbstractBarChart {
	return newQwtPlotAbstractBarChart((*C.QwtPlotAbstractBarChart)(h))
}

func (this *QwtPlotAbstractBarChart) SetLayoutPolicy(layoutPolicy QwtPlotAbstractBarChart__LayoutPolicy) {
	C.QwtPlotAbstractBarChart_setLayoutPolicy(this.h, (C.int)(layoutPolicy))
}

func (this *QwtPlotAbstractBarChart) LayoutPolicy() QwtPlotAbstractBarChart__LayoutPolicy {
	return (QwtPlotAbstractBarChart__LayoutPolicy)(C.QwtPlotAbstractBarChart_layoutPolicy(this.h))
}

func (this *QwtPlotAbstractBarChart) SetLayoutHint(layoutHint float64) {
	C.QwtPlotAbstractBarChart_setLayoutHint(this.h, (C.double)(layoutHint))
}

func (this *QwtPlotAbstractBarChart) LayoutHint() float64 {
	return (float64)(C.QwtPlotAbstractBarChart_layoutHint(this.h))
}

func (this *QwtPlotAbstractBarChart) SetSpacing(spacing int) {
	C.QwtPlotAbstractBarChart_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtPlotAbstractBarChart) Spacing() int {
	return (int)(C.QwtPlotAbstractBarChart_spacing(this.h))
}

func (this *QwtPlotAbstractBarChart) SetMargin(margin int) {
	C.QwtPlotAbstractBarChart_setMargin(this.h, (C.int)(margin))
}

func (this *QwtPlotAbstractBarChart) Margin() int {
	return (int)(C.QwtPlotAbstractBarChart_margin(this.h))
}

func (this *QwtPlotAbstractBarChart) SetBaseline(baseline float64) {
	C.QwtPlotAbstractBarChart_setBaseline(this.h, (C.double)(baseline))
}

func (this *QwtPlotAbstractBarChart) Baseline() float64 {
	return (float64)(C.QwtPlotAbstractBarChart_baseline(this.h))
}

// Delete this object from C++ memory.
func (this *QwtPlotAbstractBarChart) Delete() {
	C.QwtPlotAbstractBarChart_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotAbstractBarChart) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotAbstractBarChart) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
