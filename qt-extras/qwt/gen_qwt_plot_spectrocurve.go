package qwt

/*

#include "gen_qwt_plot_spectrocurve.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtPlotSpectroCurve__PaintAttribute int

const (
	QwtPlotSpectroCurve__ClipPoints QwtPlotSpectroCurve__PaintAttribute = 1
)

type QwtPlotSpectroCurve struct {
	h *C.QwtPlotSpectroCurve
	*QwtPlotSeriesItem
}

func (this *QwtPlotSpectroCurve) cPointer() *C.QwtPlotSpectroCurve {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotSpectroCurve) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotSpectroCurve constructs the type using only CGO pointers.
func newQwtPlotSpectroCurve(h *C.QwtPlotSpectroCurve) *QwtPlotSpectroCurve {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotSeriesItem *C.QwtPlotSeriesItem = nil
	C.QwtPlotSpectroCurve_virtbase(h, &outptr_QwtPlotSeriesItem)

	return &QwtPlotSpectroCurve{h: h,
		QwtPlotSeriesItem: newQwtPlotSeriesItem(outptr_QwtPlotSeriesItem)}
}

// UnsafeNewQwtPlotSpectroCurve constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotSpectroCurve(h unsafe.Pointer) *QwtPlotSpectroCurve {
	return newQwtPlotSpectroCurve((*C.QwtPlotSpectroCurve)(h))
}

// NewQwtPlotSpectroCurve constructs a new QwtPlotSpectroCurve object.
func NewQwtPlotSpectroCurve() *QwtPlotSpectroCurve {

	return newQwtPlotSpectroCurve(C.QwtPlotSpectroCurve_new())
}

// NewQwtPlotSpectroCurve2 constructs a new QwtPlotSpectroCurve object.
func NewQwtPlotSpectroCurve2(title *QwtText) *QwtPlotSpectroCurve {

	return newQwtPlotSpectroCurve(C.QwtPlotSpectroCurve_new2(title.cPointer()))
}

// NewQwtPlotSpectroCurve3 constructs a new QwtPlotSpectroCurve object.
func NewQwtPlotSpectroCurve3(title string) *QwtPlotSpectroCurve {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotSpectroCurve(C.QwtPlotSpectroCurve_new3(title_ms))
}

func (this *QwtPlotSpectroCurve) Rtti() int {
	return (int)(C.QwtPlotSpectroCurve_rtti(this.h))
}

func (this *QwtPlotSpectroCurve) SetPaintAttribute(param1 QwtPlotSpectroCurve__PaintAttribute) {
	C.QwtPlotSpectroCurve_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotSpectroCurve) TestPaintAttribute(param1 QwtPlotSpectroCurve__PaintAttribute) bool {
	return (bool)(C.QwtPlotSpectroCurve_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotSpectroCurve) SetSamples(samples []QwtPoint3D) {
	samples_CArray := (*[0xffff]*C.QwtPoint3D)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray))
	for i := range samples {
		samples_CArray[i] = samples[i].cPointer()
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray)}
	C.QwtPlotSpectroCurve_setSamples(this.h, samples_ma)
}

func (this *QwtPlotSpectroCurve) SetColorMap(colorMap *QwtColorMap) {
	C.QwtPlotSpectroCurve_setColorMap(this.h, colorMap.cPointer())
}

func (this *QwtPlotSpectroCurve) ColorMap() *QwtColorMap {
	return newQwtColorMap(C.QwtPlotSpectroCurve_colorMap(this.h))
}

func (this *QwtPlotSpectroCurve) SetColorRange(colorRange *QwtInterval) {
	C.QwtPlotSpectroCurve_setColorRange(this.h, colorRange.cPointer())
}

func (this *QwtPlotSpectroCurve) ColorRange() *QwtInterval {
	return newQwtInterval(C.QwtPlotSpectroCurve_colorRange(this.h))
}

func (this *QwtPlotSpectroCurve) SetPenWidth(penWidth float64) {
	C.QwtPlotSpectroCurve_setPenWidth(this.h, (C.double)(penWidth))
}

func (this *QwtPlotSpectroCurve) PenWidth() float64 {
	return (float64)(C.QwtPlotSpectroCurve_penWidth(this.h))
}

func (this *QwtPlotSpectroCurve) SetPaintAttribute2(param1 QwtPlotSpectroCurve__PaintAttribute, on bool) {
	C.QwtPlotSpectroCurve_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QwtPlotSpectroCurve) Delete() {
	C.QwtPlotSpectroCurve_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotSpectroCurve) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotSpectroCurve) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
