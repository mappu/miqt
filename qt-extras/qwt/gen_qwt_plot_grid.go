package qwt

/*

#include "gen_qwt_plot_grid.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotGrid struct {
	h  *C.QwtPlotGrid
	gc *[1]unsafe.Pointer
	*QwtPlotItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotGrid) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotItem.miqtSetGC(gc)
}

func (this *QwtPlotGrid) cPointer() *C.QwtPlotGrid {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotGrid) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotGrid constructs the type using only CGO pointers.
func newQwtPlotGrid(h *C.QwtPlotGrid) *QwtPlotGrid {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotGrid_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotGrid{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotGrid constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotGrid(h unsafe.Pointer) *QwtPlotGrid {
	return newQwtPlotGrid((*C.QwtPlotGrid)(h))
}

// NewQwtPlotGrid constructs a new QwtPlotGrid object.
func NewQwtPlotGrid() *QwtPlotGrid {

	return newQwtPlotGrid(C.QwtPlotGrid_new())
}

func (this *QwtPlotGrid) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotGrid_rtti(this.h))
}

func (this *QwtPlotGrid) EnableX(param1 bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotGrid_enableX(this.h, (C.bool)(param1))
}

func (this *QwtPlotGrid) XEnabled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotGrid_xEnabled(this.h))
}

func (this *QwtPlotGrid) EnableY(param1 bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotGrid_enableY(this.h, (C.bool)(param1))
}

func (this *QwtPlotGrid) YEnabled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotGrid_yEnabled(this.h))
}

func (this *QwtPlotGrid) EnableXMin(param1 bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotGrid_enableXMin(this.h, (C.bool)(param1))
}

func (this *QwtPlotGrid) XMinEnabled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotGrid_xMinEnabled(this.h))
}

func (this *QwtPlotGrid) EnableYMin(param1 bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotGrid_enableYMin(this.h, (C.bool)(param1))
}

func (this *QwtPlotGrid) YMinEnabled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotGrid_yMinEnabled(this.h))
}

func (this *QwtPlotGrid) SetXDiv(xDiv *QwtScaleDiv) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(xDiv)
	C.QwtPlotGrid_setXDiv(this.h, xDiv.cPointer())
}

func (this *QwtPlotGrid) XScaleDiv() *QwtScaleDiv {
	defer runtime.KeepAlive(this)
	_ret := newQwtScaleDiv(C.QwtPlotGrid_xScaleDiv(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QwtPlotGrid) SetYDiv(yDiv *QwtScaleDiv) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(yDiv)
	C.QwtPlotGrid_setYDiv(this.h, yDiv.cPointer())
}

func (this *QwtPlotGrid) YScaleDiv() *QwtScaleDiv {
	defer runtime.KeepAlive(this)
	_ret := newQwtScaleDiv(C.QwtPlotGrid_yScaleDiv(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QwtPlotGrid) SetPen(param1 *qt.QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotGrid) SetPenWithPen(pen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pen)
	C.QwtPlotGrid_setPenWithPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtPlotGrid) SetMajorPen(param1 *qt.QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setMajorPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotGrid) SetMajorPenWithMajorPen(majorPen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(majorPen)
	C.QwtPlotGrid_setMajorPenWithMajorPen(this.h, (*C.QPen)(majorPen.UnsafePointer()))
}

func (this *QwtPlotGrid) MajorPen() *qt.QPen {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotGrid_majorPen(this.h)))
}

func (this *QwtPlotGrid) SetMinorPen(param1 *qt.QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setMinorPen(this.h, (*C.QColor)(param1.UnsafePointer()))
}

func (this *QwtPlotGrid) SetMinorPenWithMinorPen(minorPen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(minorPen)
	C.QwtPlotGrid_setMinorPenWithMinorPen(this.h, (*C.QPen)(minorPen.UnsafePointer()))
}

func (this *QwtPlotGrid) MinorPen() *qt.QPen {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotGrid_minorPen(this.h)))
}

func (this *QwtPlotGrid) UpdateScaleDiv(xScaleDiv *QwtScaleDiv, yScaleDiv *QwtScaleDiv) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(xScaleDiv)
	defer runtime.KeepAlive(yScaleDiv)
	C.QwtPlotGrid_updateScaleDiv(this.h, xScaleDiv.cPointer(), yScaleDiv.cPointer())
}

func (this *QwtPlotGrid) SetPen2(param1 *qt.QColor, width float64) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotGrid) SetPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

func (this *QwtPlotGrid) SetMajorPen2(param1 *qt.QColor, width float64) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setMajorPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotGrid) SetMajorPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setMajorPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

func (this *QwtPlotGrid) SetMinorPen2(param1 *qt.QColor, width float64) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setMinorPen2(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width))
}

func (this *QwtPlotGrid) SetMinorPen3(param1 *qt.QColor, width float64, param3 qt.PenStyle) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotGrid_setMinorPen3(this.h, (*C.QColor)(param1.UnsafePointer()), (C.double)(width), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtPlotGrid) Delete() {
	C.QwtPlotGrid_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotGrid) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotGrid_delete((*C.QwtPlotGrid)(gc[0]))
	})
	this.miqtSetGC(gc)
}
