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
	h  *C.QwtPlotSpectroCurve
	gc *[1]unsafe.Pointer
	*QwtPlotSeriesItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotSpectroCurve) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotSeriesItem.miqtSetGC(gc)
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
	defer runtime.KeepAlive(title)

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
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotSpectroCurve_rtti(this.h))
}

func (this *QwtPlotSpectroCurve) SetPaintAttribute(param1 QwtPlotSpectroCurve__PaintAttribute) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectroCurve_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotSpectroCurve) TestPaintAttribute(param1 QwtPlotSpectroCurve__PaintAttribute) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotSpectroCurve_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotSpectroCurve) SetSamples(samples []QwtPoint3D) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(samples)
	samples_CArray_ptr := (**C.QwtPoint3D)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray_ptr))
	samples_CArray := unsafe.Slice(samples_CArray_ptr, len(samples))
	for i := range samples {
		samples_CArray[i] = samples[i].cPointer()
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray_ptr)}
	C.QwtPlotSpectroCurve_setSamples(this.h, samples_ma)
}

func (this *QwtPlotSpectroCurve) SetColorMap(colorMap *QwtColorMap) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(colorMap)
	C.QwtPlotSpectroCurve_setColorMap(this.h, colorMap.cPointer())
}

func (this *QwtPlotSpectroCurve) ColorMap() *QwtColorMap {
	defer runtime.KeepAlive(this)
	return newQwtColorMap(C.QwtPlotSpectroCurve_colorMap(this.h))
}

func (this *QwtPlotSpectroCurve) SetColorRange(colorRange *QwtInterval) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(colorRange)
	C.QwtPlotSpectroCurve_setColorRange(this.h, colorRange.cPointer())
}

func (this *QwtPlotSpectroCurve) ColorRange() *QwtInterval {
	defer runtime.KeepAlive(this)
	_ret := newQwtInterval(C.QwtPlotSpectroCurve_colorRange(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QwtPlotSpectroCurve) SetPenWidth(penWidth float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectroCurve_setPenWidth(this.h, (C.double)(penWidth))
}

func (this *QwtPlotSpectroCurve) PenWidth() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPlotSpectroCurve_penWidth(this.h))
}

func (this *QwtPlotSpectroCurve) SetPaintAttribute2(param1 QwtPlotSpectroCurve__PaintAttribute, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectroCurve_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QwtPlotSpectroCurve) Delete() {
	C.QwtPlotSpectroCurve_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotSpectroCurve) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotSpectroCurve_delete((*C.QwtPlotSpectroCurve)(gc[0]))
	})
	this.miqtSetGC(gc)
}
