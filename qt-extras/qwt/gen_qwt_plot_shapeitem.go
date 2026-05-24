package qwt

/*

#include "gen_qwt_plot_shapeitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotShapeItem__PaintAttribute int

const (
	QwtPlotShapeItem__ClipPolygons QwtPlotShapeItem__PaintAttribute = 1
)

type QwtPlotShapeItem__LegendMode int

const (
	QwtPlotShapeItem__LegendShape QwtPlotShapeItem__LegendMode = 0
	QwtPlotShapeItem__LegendColor QwtPlotShapeItem__LegendMode = 1
)

type QwtPlotShapeItem struct {
	h *C.QwtPlotShapeItem
	*QwtPlotItem
}

func (this *QwtPlotShapeItem) cPointer() *C.QwtPlotShapeItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotShapeItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotShapeItem constructs the type using only CGO pointers.
func newQwtPlotShapeItem(h *C.QwtPlotShapeItem) *QwtPlotShapeItem {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotShapeItem_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotShapeItem{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotShapeItem constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotShapeItem(h unsafe.Pointer) *QwtPlotShapeItem {
	return newQwtPlotShapeItem((*C.QwtPlotShapeItem)(h))
}

// NewQwtPlotShapeItem constructs a new QwtPlotShapeItem object.
func NewQwtPlotShapeItem() *QwtPlotShapeItem {

	return newQwtPlotShapeItem(C.QwtPlotShapeItem_new())
}

// NewQwtPlotShapeItem2 constructs a new QwtPlotShapeItem object.
func NewQwtPlotShapeItem2(title *QwtText) *QwtPlotShapeItem {

	return newQwtPlotShapeItem(C.QwtPlotShapeItem_new2(title.cPointer()))
}

// NewQwtPlotShapeItem3 constructs a new QwtPlotShapeItem object.
func NewQwtPlotShapeItem3(title string) *QwtPlotShapeItem {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotShapeItem(C.QwtPlotShapeItem_new3(title_ms))
}

func (this *QwtPlotShapeItem) SetPaintAttribute(param1 QwtPlotShapeItem__PaintAttribute) {
	C.QwtPlotShapeItem_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotShapeItem) TestPaintAttribute(param1 QwtPlotShapeItem__PaintAttribute) bool {
	return (bool)(C.QwtPlotShapeItem_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotShapeItem) SetLegendMode(legendMode QwtPlotShapeItem__LegendMode) {
	C.QwtPlotShapeItem_setLegendMode(this.h, (C.int)(legendMode))
}

func (this *QwtPlotShapeItem) LegendMode() QwtPlotShapeItem__LegendMode {
	return (QwtPlotShapeItem__LegendMode)(C.QwtPlotShapeItem_legendMode(this.h))
}

func (this *QwtPlotShapeItem) SetRect(rect *qt.QRectF) {
	C.QwtPlotShapeItem_setRect(this.h, (*C.QRectF)(rect.UnsafePointer()))
}

func (this *QwtPlotShapeItem) SetShape(shape *qt.QPainterPath) {
	C.QwtPlotShapeItem_setShape(this.h, (*C.QPainterPath)(shape.UnsafePointer()))
}

func (this *QwtPlotShapeItem) Shape() *qt.QPainterPath {
	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPlotShapeItem_shape(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotShapeItem) SetPen(param1 *qt.QColor) {
	C.QwtPlotShapeItem_setPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotShapeItem) SetPenWithPen(pen *qt.QPen) {
	C.QwtPlotShapeItem_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtPlotShapeItem) Pen() *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotShapeItem_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotShapeItem) SetBrush(brush *qt.QBrush) {
	C.QwtPlotShapeItem_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtPlotShapeItem) Brush() *qt.QBrush {
	_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotShapeItem_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotShapeItem) SetRenderTolerance(renderTolerance float64) {
	C.QwtPlotShapeItem_setRenderTolerance(this.h, (C.double)(renderTolerance))
}

func (this *QwtPlotShapeItem) RenderTolerance() float64 {
	return (float64)(C.QwtPlotShapeItem_renderTolerance(this.h))
}

func (this *QwtPlotShapeItem) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotShapeItem_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotShapeItem) LegendIcon(index int, param2 *qt.QSizeF) *QwtGraphic {
	_goptr := newQwtGraphic(C.QwtPlotShapeItem_legendIcon(this.h, (C.int)(index), (*C.QSizeF)(param2.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotShapeItem) Rtti() int {
	return (int)(C.QwtPlotShapeItem_rtti(this.h))
}

func (this *QwtPlotShapeItem) SetPaintAttribute2(param1 QwtPlotShapeItem__PaintAttribute, on bool) {
	C.QwtPlotShapeItem_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotShapeItem) SetPen2(param1 *qt.QColor, width float64) {
	C.QwtPlotShapeItem_setPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotShapeItem) SetPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtPlotShapeItem_setPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotShapeItem) Delete() {
	C.QwtPlotShapeItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotShapeItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotShapeItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
