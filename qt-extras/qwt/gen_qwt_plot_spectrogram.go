package qwt

/*

#include "gen_qwt_plot_spectrogram.h"
#include <stdlib.h>

*/
import "C"

import (
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
	h *C.QwtPlotSpectrogram
	*QwtPlotRasterItem
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
	C.QwtPlotSpectrogram_setDisplayMode(this.h, (C.int)(param1))
}

func (this *QwtPlotSpectrogram) TestDisplayMode(param1 QwtPlotSpectrogram__DisplayMode) bool {
	return (bool)(C.QwtPlotSpectrogram_testDisplayMode(this.h, (C.int)(param1)))
}

func (this *QwtPlotSpectrogram) SetData(data *QwtRasterData) {
	C.QwtPlotSpectrogram_setData(this.h, data.cPointer())
}

func (this *QwtPlotSpectrogram) Data() *QwtRasterData {
	return newQwtRasterData(C.QwtPlotSpectrogram_data(this.h))
}

func (this *QwtPlotSpectrogram) Data2() *QwtRasterData {
	return newQwtRasterData(C.QwtPlotSpectrogram_data2(this.h))
}

func (this *QwtPlotSpectrogram) SetColorMap(colorMap *QwtColorMap) {
	C.QwtPlotSpectrogram_setColorMap(this.h, colorMap.cPointer())
}

func (this *QwtPlotSpectrogram) ColorMap() *QwtColorMap {
	return newQwtColorMap(C.QwtPlotSpectrogram_colorMap(this.h))
}

func (this *QwtPlotSpectrogram) Interval(param1 qt.Axis) *QwtInterval {
	_goptr := newQwtInterval(C.QwtPlotSpectrogram_interval(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSpectrogram) PixelHint(param1 *qt.QRectF) *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotSpectrogram_pixelHint(this.h, (*C.QRectF)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSpectrogram) SetDefaultContourPen(param1 *qt.QColor) {
	C.QwtPlotSpectrogram_setDefaultContourPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotSpectrogram) SetDefaultContourPenWithDefaultContourPen(defaultContourPen *qt.QPen) {
	C.QwtPlotSpectrogram_setDefaultContourPenWithDefaultContourPen(this.h, (*C.QPen)(defaultContourPen.UnsafePointer()))
}

func (this *QwtPlotSpectrogram) DefaultContourPen() *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotSpectrogram_defaultContourPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSpectrogram) ContourPen(level float64) *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotSpectrogram_contourPen(this.h, (C.double)(level))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSpectrogram) SetConrecFlag(param1 QwtRasterData__ConrecFlag, on bool) {
	C.QwtPlotSpectrogram_setConrecFlag(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotSpectrogram) TestConrecFlag(param1 QwtRasterData__ConrecFlag) bool {
	return (bool)(C.QwtPlotSpectrogram_testConrecFlag(this.h, (C.int)(param1)))
}

func (this *QwtPlotSpectrogram) SetContourLevels(contourLevels []float64) {
	contourLevels_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(contourLevels))))
	defer C.free(unsafe.Pointer(contourLevels_CArray))
	for i := range contourLevels {
		contourLevels_CArray[i] = (C.double)(contourLevels[i])
	}
	contourLevels_ma := C.struct_miqt_array{len: C.size_t(len(contourLevels)), data: unsafe.Pointer(contourLevels_CArray)}
	C.QwtPlotSpectrogram_setContourLevels(this.h, contourLevels_ma)
}

func (this *QwtPlotSpectrogram) ContourLevels() []float64 {
	var _ma C.struct_miqt_array = C.QwtPlotSpectrogram_contourLevels(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtPlotSpectrogram) Rtti() int {
	return (int)(C.QwtPlotSpectrogram_rtti(this.h))
}

func (this *QwtPlotSpectrogram) SetDisplayMode2(param1 QwtPlotSpectrogram__DisplayMode, on bool) {
	C.QwtPlotSpectrogram_setDisplayMode2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotSpectrogram) SetDefaultContourPen2(param1 *qt.QColor, width float64) {
	C.QwtPlotSpectrogram_setDefaultContourPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotSpectrogram) SetDefaultContourPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtPlotSpectrogram_setDefaultContourPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotSpectrogram) Delete() {
	C.QwtPlotSpectrogram_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotSpectrogram) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotSpectrogram) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
