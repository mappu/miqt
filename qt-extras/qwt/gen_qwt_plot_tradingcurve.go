package qwt

/*

#include "gen_qwt_plot_tradingcurve.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotTradingCurve__SymbolStyle int

const (
	QwtPlotTradingCurve__NoSymbol    QwtPlotTradingCurve__SymbolStyle = -1
	QwtPlotTradingCurve__Bar         QwtPlotTradingCurve__SymbolStyle = 0
	QwtPlotTradingCurve__CandleStick QwtPlotTradingCurve__SymbolStyle = 1
	QwtPlotTradingCurve__UserSymbol  QwtPlotTradingCurve__SymbolStyle = 100
)

type QwtPlotTradingCurve__Direction int

const (
	QwtPlotTradingCurve__Increasing QwtPlotTradingCurve__Direction = 0
	QwtPlotTradingCurve__Decreasing QwtPlotTradingCurve__Direction = 1
)

type QwtPlotTradingCurve__PaintAttribute int

const (
	QwtPlotTradingCurve__ClipSymbols QwtPlotTradingCurve__PaintAttribute = 1
)

type QwtPlotTradingCurve struct {
	h *C.QwtPlotTradingCurve
	*QwtPlotSeriesItem
}

func (this *QwtPlotTradingCurve) cPointer() *C.QwtPlotTradingCurve {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotTradingCurve) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotTradingCurve constructs the type using only CGO pointers.
func newQwtPlotTradingCurve(h *C.QwtPlotTradingCurve) *QwtPlotTradingCurve {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotSeriesItem *C.QwtPlotSeriesItem = nil
	C.QwtPlotTradingCurve_virtbase(h, &outptr_QwtPlotSeriesItem)

	return &QwtPlotTradingCurve{h: h,
		QwtPlotSeriesItem: newQwtPlotSeriesItem(outptr_QwtPlotSeriesItem)}
}

// UnsafeNewQwtPlotTradingCurve constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotTradingCurve(h unsafe.Pointer) *QwtPlotTradingCurve {
	return newQwtPlotTradingCurve((*C.QwtPlotTradingCurve)(h))
}

// NewQwtPlotTradingCurve constructs a new QwtPlotTradingCurve object.
func NewQwtPlotTradingCurve() *QwtPlotTradingCurve {

	return newQwtPlotTradingCurve(C.QwtPlotTradingCurve_new())
}

// NewQwtPlotTradingCurve2 constructs a new QwtPlotTradingCurve object.
func NewQwtPlotTradingCurve2(title *QwtText) *QwtPlotTradingCurve {

	return newQwtPlotTradingCurve(C.QwtPlotTradingCurve_new2(title.cPointer()))
}

// NewQwtPlotTradingCurve3 constructs a new QwtPlotTradingCurve object.
func NewQwtPlotTradingCurve3(title string) *QwtPlotTradingCurve {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotTradingCurve(C.QwtPlotTradingCurve_new3(title_ms))
}

func (this *QwtPlotTradingCurve) Rtti() int {
	return (int)(C.QwtPlotTradingCurve_rtti(this.h))
}

func (this *QwtPlotTradingCurve) SetPaintAttribute(param1 QwtPlotTradingCurve__PaintAttribute) {
	C.QwtPlotTradingCurve_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotTradingCurve) TestPaintAttribute(param1 QwtPlotTradingCurve__PaintAttribute) bool {
	return (bool)(C.QwtPlotTradingCurve_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotTradingCurve) SetSamples(samples []QwtOHLCSample) {
	samples_CArray := (*[0xffff]*C.QwtOHLCSample)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray))
	for i := range samples {
		samples_CArray[i] = samples[i].cPointer()
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray)}
	C.QwtPlotTradingCurve_setSamples(this.h, samples_ma)
}

func (this *QwtPlotTradingCurve) SetSymbolStyle(style QwtPlotTradingCurve__SymbolStyle) {
	C.QwtPlotTradingCurve_setSymbolStyle(this.h, (C.int)(style))
}

func (this *QwtPlotTradingCurve) SymbolStyle() QwtPlotTradingCurve__SymbolStyle {
	return (QwtPlotTradingCurve__SymbolStyle)(C.QwtPlotTradingCurve_symbolStyle(this.h))
}

func (this *QwtPlotTradingCurve) SetSymbolPen(param1 *qt.QColor) {
	C.QwtPlotTradingCurve_setSymbolPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotTradingCurve) SetSymbolPenWithSymbolPen(symbolPen *qt.QPen) {
	C.QwtPlotTradingCurve_setSymbolPenWithSymbolPen(this.h, (*C.QPen)(symbolPen.UnsafePointer()))
}

func (this *QwtPlotTradingCurve) SymbolPen() *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotTradingCurve_symbolPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotTradingCurve) SetSymbolBrush(param1 QwtPlotTradingCurve__Direction, param2 *qt.QBrush) {
	C.QwtPlotTradingCurve_setSymbolBrush(this.h, (C.int)(param1), (*C.QBrush)(param2.UnsafePointer()))
}

func (this *QwtPlotTradingCurve) SymbolBrush(param1 QwtPlotTradingCurve__Direction) *qt.QBrush {
	_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotTradingCurve_symbolBrush(this.h, (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotTradingCurve) SetSymbolExtent(symbolExtent float64) {
	C.QwtPlotTradingCurve_setSymbolExtent(this.h, (C.double)(symbolExtent))
}

func (this *QwtPlotTradingCurve) SymbolExtent() float64 {
	return (float64)(C.QwtPlotTradingCurve_symbolExtent(this.h))
}

func (this *QwtPlotTradingCurve) SetMinSymbolWidth(minSymbolWidth float64) {
	C.QwtPlotTradingCurve_setMinSymbolWidth(this.h, (C.double)(minSymbolWidth))
}

func (this *QwtPlotTradingCurve) MinSymbolWidth() float64 {
	return (float64)(C.QwtPlotTradingCurve_minSymbolWidth(this.h))
}

func (this *QwtPlotTradingCurve) SetMaxSymbolWidth(maxSymbolWidth float64) {
	C.QwtPlotTradingCurve_setMaxSymbolWidth(this.h, (C.double)(maxSymbolWidth))
}

func (this *QwtPlotTradingCurve) MaxSymbolWidth() float64 {
	return (float64)(C.QwtPlotTradingCurve_maxSymbolWidth(this.h))
}

func (this *QwtPlotTradingCurve) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotTradingCurve_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotTradingCurve) LegendIcon(index int, param2 *qt.QSizeF) *QwtGraphic {
	_goptr := newQwtGraphic(C.QwtPlotTradingCurve_legendIcon(this.h, (C.int)(index), (*C.QSizeF)(param2.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotTradingCurve) SetPaintAttribute2(param1 QwtPlotTradingCurve__PaintAttribute, on bool) {
	C.QwtPlotTradingCurve_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotTradingCurve) SetSymbolPen2(param1 *qt.QColor, width float64) {
	C.QwtPlotTradingCurve_setSymbolPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotTradingCurve) SetSymbolPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtPlotTradingCurve_setSymbolPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotTradingCurve) Delete() {
	C.QwtPlotTradingCurve_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotTradingCurve) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotTradingCurve) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
