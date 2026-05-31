package qwt

/*

#include "gen_qwt_plot_intervalcurve.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotIntervalCurve__CurveStyle int

const (
	QwtPlotIntervalCurve__NoCurve   QwtPlotIntervalCurve__CurveStyle = 0
	QwtPlotIntervalCurve__Tube      QwtPlotIntervalCurve__CurveStyle = 1
	QwtPlotIntervalCurve__UserCurve QwtPlotIntervalCurve__CurveStyle = 100
)

type QwtPlotIntervalCurve__PaintAttribute int

const (
	QwtPlotIntervalCurve__ClipPolygons QwtPlotIntervalCurve__PaintAttribute = 1
	QwtPlotIntervalCurve__ClipSymbol   QwtPlotIntervalCurve__PaintAttribute = 2
)

type QwtPlotIntervalCurve struct {
	h *C.QwtPlotIntervalCurve
	*QwtPlotSeriesItem
}

func (this *QwtPlotIntervalCurve) cPointer() *C.QwtPlotIntervalCurve {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotIntervalCurve) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotIntervalCurve constructs the type using only CGO pointers.
func newQwtPlotIntervalCurve(h *C.QwtPlotIntervalCurve) *QwtPlotIntervalCurve {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotSeriesItem *C.QwtPlotSeriesItem = nil
	C.QwtPlotIntervalCurve_virtbase(h, &outptr_QwtPlotSeriesItem)

	return &QwtPlotIntervalCurve{h: h,
		QwtPlotSeriesItem: newQwtPlotSeriesItem(outptr_QwtPlotSeriesItem)}
}

// UnsafeNewQwtPlotIntervalCurve constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotIntervalCurve(h unsafe.Pointer) *QwtPlotIntervalCurve {
	return newQwtPlotIntervalCurve((*C.QwtPlotIntervalCurve)(h))
}

// NewQwtPlotIntervalCurve constructs a new QwtPlotIntervalCurve object.
func NewQwtPlotIntervalCurve() *QwtPlotIntervalCurve {

	return newQwtPlotIntervalCurve(C.QwtPlotIntervalCurve_new())
}

// NewQwtPlotIntervalCurve2 constructs a new QwtPlotIntervalCurve object.
func NewQwtPlotIntervalCurve2(title *QwtText) *QwtPlotIntervalCurve {

	return newQwtPlotIntervalCurve(C.QwtPlotIntervalCurve_new2(title.cPointer()))
}

// NewQwtPlotIntervalCurve3 constructs a new QwtPlotIntervalCurve object.
func NewQwtPlotIntervalCurve3(title string) *QwtPlotIntervalCurve {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotIntervalCurve(C.QwtPlotIntervalCurve_new3(title_ms))
}

func (this *QwtPlotIntervalCurve) Rtti() int {
	return (int)(C.QwtPlotIntervalCurve_rtti(this.h))
}

func (this *QwtPlotIntervalCurve) SetPaintAttribute(param1 QwtPlotIntervalCurve__PaintAttribute) {
	C.QwtPlotIntervalCurve_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotIntervalCurve) TestPaintAttribute(param1 QwtPlotIntervalCurve__PaintAttribute) bool {
	return (bool)(C.QwtPlotIntervalCurve_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotIntervalCurve) SetSamples(samples []QwtIntervalSample) {
	samples_CArray := (*[0xffff]*C.QwtIntervalSample)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray))
	for i := range samples {
		samples_CArray[i] = samples[i].cPointer()
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray)}
	C.QwtPlotIntervalCurve_setSamples(this.h, samples_ma)
}

func (this *QwtPlotIntervalCurve) SetPen(param1 *qt.QColor) {
	C.QwtPlotIntervalCurve_setPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotIntervalCurve) SetPenWithPen(pen *qt.QPen) {
	C.QwtPlotIntervalCurve_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtPlotIntervalCurve) Pen() *qt.QPen {
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotIntervalCurve_pen(this.h)))
}

func (this *QwtPlotIntervalCurve) SetBrush(brush *qt.QBrush) {
	C.QwtPlotIntervalCurve_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtPlotIntervalCurve) Brush() *qt.QBrush {
	return qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotIntervalCurve_brush(this.h)))
}

func (this *QwtPlotIntervalCurve) SetStyle(style QwtPlotIntervalCurve__CurveStyle) {
	C.QwtPlotIntervalCurve_setStyle(this.h, (C.int)(style))
}

func (this *QwtPlotIntervalCurve) Style() QwtPlotIntervalCurve__CurveStyle {
	return (QwtPlotIntervalCurve__CurveStyle)(C.QwtPlotIntervalCurve_style(this.h))
}

func (this *QwtPlotIntervalCurve) SetSymbol(symbol *QwtIntervalSymbol) {
	C.QwtPlotIntervalCurve_setSymbol(this.h, symbol.cPointer())
}

func (this *QwtPlotIntervalCurve) Symbol() *QwtIntervalSymbol {
	return newQwtIntervalSymbol(C.QwtPlotIntervalCurve_symbol(this.h))
}

func (this *QwtPlotIntervalCurve) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotIntervalCurve_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotIntervalCurve) LegendIcon(index int, param2 *qt.QSizeF) *QwtGraphic {
	_goptr := newQwtGraphic(C.QwtPlotIntervalCurve_legendIcon(this.h, (C.int)(index), (*C.QSizeF)(param2.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotIntervalCurve) SetPaintAttribute2(param1 QwtPlotIntervalCurve__PaintAttribute, on bool) {
	C.QwtPlotIntervalCurve_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotIntervalCurve) SetPen2(param1 *qt.QColor, width float64) {
	C.QwtPlotIntervalCurve_setPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotIntervalCurve) SetPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtPlotIntervalCurve_setPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotIntervalCurve) Delete() {
	C.QwtPlotIntervalCurve_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotIntervalCurve) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotIntervalCurve) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
