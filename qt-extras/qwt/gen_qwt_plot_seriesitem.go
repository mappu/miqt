package qwt

/*

#include "gen_qwt_plot_seriesitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotSeriesItem struct {
	h  *C.QwtPlotSeriesItem
	gc *[1]unsafe.Pointer
	*QwtPlotItem
	*QwtAbstractSeriesStore
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotSeriesItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotItem.miqtSetGC(gc)
	this.QwtAbstractSeriesStore.miqtSetGC(gc)
}

func (this *QwtPlotSeriesItem) cPointer() *C.QwtPlotSeriesItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotSeriesItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotSeriesItem constructs the type using only CGO pointers.
func newQwtPlotSeriesItem(h *C.QwtPlotSeriesItem) *QwtPlotSeriesItem {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	var outptr_QwtAbstractSeriesStore *C.QwtAbstractSeriesStore = nil
	C.QwtPlotSeriesItem_virtbase(h, &outptr_QwtPlotItem, &outptr_QwtAbstractSeriesStore)

	return &QwtPlotSeriesItem{h: h,
		QwtPlotItem:            newQwtPlotItem(outptr_QwtPlotItem),
		QwtAbstractSeriesStore: newQwtAbstractSeriesStore(outptr_QwtAbstractSeriesStore)}
}

// UnsafeNewQwtPlotSeriesItem constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotSeriesItem(h unsafe.Pointer) *QwtPlotSeriesItem {
	return newQwtPlotSeriesItem((*C.QwtPlotSeriesItem)(h))
}

func (this *QwtPlotSeriesItem) SetOrientation(orientation qt.Orientation) {
	defer runtime.KeepAlive(this)
	C.QwtPlotSeriesItem_setOrientation(this.h, (C.int)(orientation))
}

func (this *QwtPlotSeriesItem) Orientation() qt.Orientation {
	defer runtime.KeepAlive(this)
	return (qt.Orientation)(C.QwtPlotSeriesItem_orientation(this.h))
}

func (this *QwtPlotSeriesItem) BoundingRect() qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPlotSeriesItem_boundingRect(this.h))
}

func (this *QwtPlotSeriesItem) UpdateScaleDiv(param1 *QwtScaleDiv, param2 *QwtScaleDiv) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)
	C.QwtPlotSeriesItem_updateScaleDiv(this.h, param1.cPointer(), param2.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtPlotSeriesItem) Delete() {
	C.QwtPlotSeriesItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotSeriesItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotSeriesItem_delete((*C.QwtPlotSeriesItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}
