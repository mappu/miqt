package qwt

/*

#include "gen_qwt_plot_curve.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotCurve__CurveStyle int

const (
	QwtPlotCurve__NoCurve   QwtPlotCurve__CurveStyle = -1
	QwtPlotCurve__Lines     QwtPlotCurve__CurveStyle = 0
	QwtPlotCurve__Sticks    QwtPlotCurve__CurveStyle = 1
	QwtPlotCurve__Steps     QwtPlotCurve__CurveStyle = 2
	QwtPlotCurve__Dots      QwtPlotCurve__CurveStyle = 3
	QwtPlotCurve__UserCurve QwtPlotCurve__CurveStyle = 100
)

type QwtPlotCurve__CurveAttribute int

const (
	QwtPlotCurve__Inverted QwtPlotCurve__CurveAttribute = 1
	QwtPlotCurve__Fitted   QwtPlotCurve__CurveAttribute = 2
)

type QwtPlotCurve__LegendAttribute int

const (
	QwtPlotCurve__LegendNoAttribute QwtPlotCurve__LegendAttribute = 0
	QwtPlotCurve__LegendShowLine    QwtPlotCurve__LegendAttribute = 1
	QwtPlotCurve__LegendShowSymbol  QwtPlotCurve__LegendAttribute = 2
	QwtPlotCurve__LegendShowBrush   QwtPlotCurve__LegendAttribute = 4
)

type QwtPlotCurve__PaintAttribute int

const (
	QwtPlotCurve__ClipPolygons   QwtPlotCurve__PaintAttribute = 1
	QwtPlotCurve__FilterPoints   QwtPlotCurve__PaintAttribute = 2
	QwtPlotCurve__MinimizeMemory QwtPlotCurve__PaintAttribute = 4
	QwtPlotCurve__ImageBuffer    QwtPlotCurve__PaintAttribute = 8
)

type QwtPlotCurve struct {
	h *C.QwtPlotCurve
	*QwtPlotSeriesItem
}

func (this *QwtPlotCurve) cPointer() *C.QwtPlotCurve {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotCurve) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotCurve constructs the type using only CGO pointers.
func newQwtPlotCurve(h *C.QwtPlotCurve) *QwtPlotCurve {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotSeriesItem *C.QwtPlotSeriesItem = nil
	C.QwtPlotCurve_virtbase(h, &outptr_QwtPlotSeriesItem)

	return &QwtPlotCurve{h: h,
		QwtPlotSeriesItem: newQwtPlotSeriesItem(outptr_QwtPlotSeriesItem)}
}

// UnsafeNewQwtPlotCurve constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotCurve(h unsafe.Pointer) *QwtPlotCurve {
	return newQwtPlotCurve((*C.QwtPlotCurve)(h))
}

// NewQwtPlotCurve constructs a new QwtPlotCurve object.
func NewQwtPlotCurve() *QwtPlotCurve {

	return newQwtPlotCurve(C.QwtPlotCurve_new())
}

// NewQwtPlotCurve2 constructs a new QwtPlotCurve object.
func NewQwtPlotCurve2(title *QwtText) *QwtPlotCurve {

	return newQwtPlotCurve(C.QwtPlotCurve_new2(title.cPointer()))
}

// NewQwtPlotCurve3 constructs a new QwtPlotCurve object.
func NewQwtPlotCurve3(title string) *QwtPlotCurve {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotCurve(C.QwtPlotCurve_new3(title_ms))
}

func (this *QwtPlotCurve) Rtti() int {
	return (int)(C.QwtPlotCurve_rtti(this.h))
}

func (this *QwtPlotCurve) SetPaintAttribute(param1 QwtPlotCurve__PaintAttribute) {
	C.QwtPlotCurve_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotCurve) TestPaintAttribute(param1 QwtPlotCurve__PaintAttribute) bool {
	return (bool)(C.QwtPlotCurve_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotCurve) SetLegendAttribute(param1 QwtPlotCurve__LegendAttribute) {
	C.QwtPlotCurve_setLegendAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotCurve) TestLegendAttribute(param1 QwtPlotCurve__LegendAttribute) bool {
	return (bool)(C.QwtPlotCurve_testLegendAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotCurve) SetRawSamples(xData *float64, yData *float64, size int) {
	C.QwtPlotCurve_setRawSamples(this.h, (*C.double)(unsafe.Pointer(xData)), (*C.double)(unsafe.Pointer(yData)), (C.int)(size))
}

func (this *QwtPlotCurve) SetSamples(xData *float64, yData *float64, size int) {
	C.QwtPlotCurve_setSamples(this.h, (*C.double)(unsafe.Pointer(xData)), (*C.double)(unsafe.Pointer(yData)), (C.int)(size))
}

func (this *QwtPlotCurve) SetSamples2(xData []float64, yData []float64) {
	xData_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(xData))))
	defer C.free(unsafe.Pointer(xData_CArray))
	for i := range xData {
		xData_CArray[i] = (C.double)(xData[i])
	}
	xData_ma := C.struct_miqt_array{len: C.size_t(len(xData)), data: unsafe.Pointer(xData_CArray)}
	yData_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(yData))))
	defer C.free(unsafe.Pointer(yData_CArray))
	for i := range yData {
		yData_CArray[i] = (C.double)(yData[i])
	}
	yData_ma := C.struct_miqt_array{len: C.size_t(len(yData)), data: unsafe.Pointer(yData_CArray)}
	C.QwtPlotCurve_setSamples2(this.h, xData_ma, yData_ma)
}

func (this *QwtPlotCurve) SetSamplesWithSamples(samples []qt.QPointF) {
	samples_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(samples))))
	defer C.free(unsafe.Pointer(samples_CArray))
	for i := range samples {
		samples_CArray[i] = (*C.QPointF)(samples[i].UnsafePointer())
	}
	samples_ma := C.struct_miqt_array{len: C.size_t(len(samples)), data: unsafe.Pointer(samples_CArray)}
	C.QwtPlotCurve_setSamplesWithSamples(this.h, samples_ma)
}

func (this *QwtPlotCurve) ClosestPoint(pos *qt.QPoint) int {
	return (int)(C.QwtPlotCurve_closestPoint(this.h, (*C.QPoint)(pos.UnsafePointer())))
}

func (this *QwtPlotCurve) MinXValue() float64 {
	return (float64)(C.QwtPlotCurve_minXValue(this.h))
}

func (this *QwtPlotCurve) MaxXValue() float64 {
	return (float64)(C.QwtPlotCurve_maxXValue(this.h))
}

func (this *QwtPlotCurve) MinYValue() float64 {
	return (float64)(C.QwtPlotCurve_minYValue(this.h))
}

func (this *QwtPlotCurve) MaxYValue() float64 {
	return (float64)(C.QwtPlotCurve_maxYValue(this.h))
}

func (this *QwtPlotCurve) SetCurveAttribute(param1 QwtPlotCurve__CurveAttribute) {
	C.QwtPlotCurve_setCurveAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotCurve) TestCurveAttribute(param1 QwtPlotCurve__CurveAttribute) bool {
	return (bool)(C.QwtPlotCurve_testCurveAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotCurve) SetPen(param1 *qt.QColor) {
	C.QwtPlotCurve_setPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotCurve) SetPenWithPen(pen *qt.QPen) {
	C.QwtPlotCurve_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtPlotCurve) Pen() *qt.QPen {
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotCurve_pen(this.h)))
}

func (this *QwtPlotCurve) SetBrush(brush *qt.QBrush) {
	C.QwtPlotCurve_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtPlotCurve) Brush() *qt.QBrush {
	return qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotCurve_brush(this.h)))
}

func (this *QwtPlotCurve) SetBaseline(baseline float64) {
	C.QwtPlotCurve_setBaseline(this.h, (C.double)(baseline))
}

func (this *QwtPlotCurve) Baseline() float64 {
	return (float64)(C.QwtPlotCurve_baseline(this.h))
}

func (this *QwtPlotCurve) SetStyle(style QwtPlotCurve__CurveStyle) {
	C.QwtPlotCurve_setStyle(this.h, (C.int)(style))
}

func (this *QwtPlotCurve) Style() QwtPlotCurve__CurveStyle {
	return (QwtPlotCurve__CurveStyle)(C.QwtPlotCurve_style(this.h))
}

func (this *QwtPlotCurve) SetSymbol(symbol *QwtSymbol) {
	C.QwtPlotCurve_setSymbol(this.h, symbol.cPointer())
}

func (this *QwtPlotCurve) Symbol() *QwtSymbol {
	return newQwtSymbol(C.QwtPlotCurve_symbol(this.h))
}

func (this *QwtPlotCurve) SetCurveFitter(curveFitter *QwtCurveFitter) {
	C.QwtPlotCurve_setCurveFitter(this.h, curveFitter.cPointer())
}

func (this *QwtPlotCurve) CurveFitter() *QwtCurveFitter {
	return newQwtCurveFitter(C.QwtPlotCurve_curveFitter(this.h))
}

func (this *QwtPlotCurve) LegendIcon(index int, param2 *qt.QSizeF) *QwtGraphic {
	_goptr := newQwtGraphic(C.QwtPlotCurve_legendIcon(this.h, (C.int)(index), (*C.QSizeF)(param2.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotCurve) SetPaintAttribute2(param1 QwtPlotCurve__PaintAttribute, on bool) {
	C.QwtPlotCurve_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotCurve) SetLegendAttribute2(param1 QwtPlotCurve__LegendAttribute, on bool) {
	C.QwtPlotCurve_setLegendAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotCurve) ClosestPoint2(pos *qt.QPoint, dist *float64) int {
	return (int)(C.QwtPlotCurve_closestPoint2(this.h, (*C.QPoint)(pos.UnsafePointer()), (*C.double)(unsafe.Pointer(dist))))
}

func (this *QwtPlotCurve) SetCurveAttribute2(param1 QwtPlotCurve__CurveAttribute, on bool) {
	C.QwtPlotCurve_setCurveAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotCurve) SetPen2(param1 *qt.QColor, width float64) {
	C.QwtPlotCurve_setPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotCurve) SetPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtPlotCurve_setPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotCurve) Delete() {
	C.QwtPlotCurve_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotCurve) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotCurve) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
