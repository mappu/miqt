package qwt

/*

#include "gen_qwt_plot_zoneitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotZoneItem struct {
	h *C.QwtPlotZoneItem
	*QwtPlotItem
}

func (this *QwtPlotZoneItem) cPointer() *C.QwtPlotZoneItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotZoneItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotZoneItem constructs the type using only CGO pointers.
func newQwtPlotZoneItem(h *C.QwtPlotZoneItem) *QwtPlotZoneItem {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotZoneItem_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotZoneItem{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotZoneItem constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotZoneItem(h unsafe.Pointer) *QwtPlotZoneItem {
	return newQwtPlotZoneItem((*C.QwtPlotZoneItem)(h))
}

// NewQwtPlotZoneItem constructs a new QwtPlotZoneItem object.
func NewQwtPlotZoneItem() *QwtPlotZoneItem {

	return newQwtPlotZoneItem(C.QwtPlotZoneItem_new())
}

func (this *QwtPlotZoneItem) Rtti() int {
	return (int)(C.QwtPlotZoneItem_rtti(this.h))
}

func (this *QwtPlotZoneItem) SetOrientation(orientation qt.Orientation) {
	C.QwtPlotZoneItem_setOrientation(this.h, (C.int)(orientation))
}

func (this *QwtPlotZoneItem) Orientation() qt.Orientation {
	return (qt.Orientation)(C.QwtPlotZoneItem_orientation(this.h))
}

func (this *QwtPlotZoneItem) SetInterval(min float64, max float64) {
	C.QwtPlotZoneItem_setInterval(this.h, (C.double)(min), (C.double)(max))
}

func (this *QwtPlotZoneItem) SetIntervalWithInterval(interval *QwtInterval) {
	C.QwtPlotZoneItem_setIntervalWithInterval(this.h, interval.cPointer())
}

func (this *QwtPlotZoneItem) Interval() *QwtInterval {
	_goptr := newQwtInterval(C.QwtPlotZoneItem_interval(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotZoneItem) SetPen(param1 *qt.QColor) {
	C.QwtPlotZoneItem_setPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotZoneItem) SetPenWithPen(pen *qt.QPen) {
	C.QwtPlotZoneItem_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtPlotZoneItem) Pen() *qt.QPen {
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotZoneItem_pen(this.h)))
}

func (this *QwtPlotZoneItem) SetBrush(brush *qt.QBrush) {
	C.QwtPlotZoneItem_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtPlotZoneItem) Brush() *qt.QBrush {
	return qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotZoneItem_brush(this.h)))
}

func (this *QwtPlotZoneItem) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotZoneItem_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotZoneItem) SetPen2(param1 *qt.QColor, width float64) {
	C.QwtPlotZoneItem_setPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotZoneItem) SetPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	C.QwtPlotZoneItem_setPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotZoneItem) Delete() {
	C.QwtPlotZoneItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotZoneItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotZoneItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
