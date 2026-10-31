package qwt

/*

#include "gen_qwt_plot_spectrogram.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotSpectrogram__DisplayMode int

const (
	QwtPlotSpectrogram__ImageMode   QwtPlotSpectrogram__DisplayMode = 1
	QwtPlotSpectrogram__ContourMode QwtPlotSpectrogram__DisplayMode = 2
)

type QwtPlotSpectrogram struct {
	h  *C.QwtPlotSpectrogram
	gc *[1]unsafe.Pointer
	*QwtPlotRasterItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotSpectrogram) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotRasterItem.miqtSetGC(gc)
}

func (this *QwtPlotSpectrogram) cPointer() *C.QwtPlotSpectrogram {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotSpectrogram) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotSpectrogram constructs the type using only CGO pointers.
func newQwtPlotSpectrogram(h *C.QwtPlotSpectrogram) *QwtPlotSpectrogram {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotRasterItem *C.QwtPlotRasterItem = nil
	C.QwtPlotSpectrogram_virtbase(h, &outptr_QwtPlotRasterItem)

	return &QwtPlotSpectrogram{h: h,
		QwtPlotRasterItem: newQwtPlotRasterItem(outptr_QwtPlotRasterItem)}
}

// UnsafeNewQwtPlotSpectrogram constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotSpectrogram(h unsafe.Pointer) *QwtPlotSpectrogram {
	return newQwtPlotSpectrogram((*C.QwtPlotSpectrogram)(h))
}

// NewQwtPlotSpectrogram constructs a new QwtPlotSpectrogram object.
func NewQwtPlotSpectrogram() *QwtPlotSpectrogram {

	return newQwtPlotSpectrogram(C.QwtPlotSpectrogram_new())
}

// NewQwtPlotSpectrogram2 constructs a new QwtPlotSpectrogram object.
func NewQwtPlotSpectrogram2(title string) *QwtPlotSpectrogram {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotSpectrogram(C.QwtPlotSpectrogram_new2(title_ms))
}

func (this *QwtPlotSpectrogram) SetDisplayMode(param1 QwtPlotSpectrogram__DisplayMode) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectrogram_setDisplayMode(this.h, (C.int)(param1))
}

func (this *QwtPlotSpectrogram) TestDisplayMode(param1 QwtPlotSpectrogram__DisplayMode) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotSpectrogram_testDisplayMode(this.h, (C.int)(param1)))
}

func (this *QwtPlotSpectrogram) SetData(data *QwtRasterData) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	C.QwtPlotSpectrogram_setData(this.h, data.cPointer())
}

func (this *QwtPlotSpectrogram) Data() *QwtRasterData {
	defer runtime.KeepAlive(this)
	return newQwtRasterData(C.QwtPlotSpectrogram_data(this.h))
}

func (this *QwtPlotSpectrogram) Data2() *QwtRasterData {
	defer runtime.KeepAlive(this)
	return newQwtRasterData(C.QwtPlotSpectrogram_data2(this.h))
}

func (this *QwtPlotSpectrogram) SetColorMap(colorMap *QwtColorMap) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(colorMap)
	C.QwtPlotSpectrogram_setColorMap(this.h, colorMap.cPointer())
}

func (this *QwtPlotSpectrogram) ColorMap() *QwtColorMap {
	defer runtime.KeepAlive(this)
	return newQwtColorMap(C.QwtPlotSpectrogram_colorMap(this.h))
}

func (this *QwtPlotSpectrogram) Interval(param1 qt.Axis) *QwtInterval {
	defer runtime.KeepAlive(this)
	_goptr := newQwtInterval(C.QwtPlotSpectrogram_interval(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSpectrogram) PixelHint(param1 qt.QRectF) qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPlotSpectrogram_pixelHint(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](param1)))
}

func (this *QwtPlotSpectrogram) SetDefaultContourPen(param1 qt.QColor) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectrogram_setDefaultContourPen(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1))
}

func (this *QwtPlotSpectrogram) SetDefaultContourPenWithDefaultContourPen(defaultContourPen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(defaultContourPen)
	C.QwtPlotSpectrogram_setDefaultContourPenWithDefaultContourPen(this.h, (*C.QPen)(defaultContourPen.UnsafePointer()))
}

func (this *QwtPlotSpectrogram) DefaultContourPen() *qt.QPen {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotSpectrogram_defaultContourPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSpectrogram) ContourPen(level float64) *qt.QPen {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotSpectrogram_contourPen(this.h, (C.double)(level))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSpectrogram) SetConrecFlag(param1 QwtRasterData__ConrecFlag, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectrogram_setConrecFlag(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotSpectrogram) TestConrecFlag(param1 QwtRasterData__ConrecFlag) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotSpectrogram_testConrecFlag(this.h, (C.int)(param1)))
}

func (this *QwtPlotSpectrogram) SetContourLevels(contourLevels []float64) {
	defer runtime.KeepAlive(this)
	contourLevels_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(contourLevels))))
	defer C.free(unsafe.Pointer(contourLevels_CArray_ptr))
	contourLevels_CArray := unsafe.Slice(contourLevels_CArray_ptr, len(contourLevels))
	for i := range contourLevels {
		contourLevels_CArray[i] = (C.double)(contourLevels[i])
	}
	contourLevels_ma := C.struct_miqt_array{len: C.size_t(len(contourLevels)), data: unsafe.Pointer(contourLevels_CArray_ptr)}
	C.QwtPlotSpectrogram_setContourLevels(this.h, contourLevels_ma)
}

func (this *QwtPlotSpectrogram) ContourLevels() []float64 {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtPlotSpectrogram_contourLevels(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := unsafe.Slice((*C.double)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtPlotSpectrogram) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotSpectrogram_rtti(this.h))
}

func (this *QwtPlotSpectrogram) SetDisplayMode2(param1 QwtPlotSpectrogram__DisplayMode, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectrogram_setDisplayMode2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotSpectrogram) SetDefaultContourPen2(param1 qt.QColor, width float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectrogram_setDefaultContourPen2(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1), (C.double)(width))
}

func (this *QwtPlotSpectrogram) SetDefaultContourPen3(param1 qt.QColor, width float64, param3 qt.PenStyle) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSpectrogram_setDefaultContourPen3(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](param1), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotSpectrogram) Delete() {
	C.QwtPlotSpectrogram_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotSpectrogram) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotSpectrogram_delete((*C.QwtPlotSpectrogram)(gc[0]))
	})
	this.miqtSetGC(gc)
}
