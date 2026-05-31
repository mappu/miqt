package qwt

/*

#include "gen_qwt_plot_seriesitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotSeriesItem struct {
	h *C.QwtPlotSeriesItem
	*QwtPlotItem
	*QwtAbstractSeriesStore
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
	C.QwtPlotSeriesItem_setOrientation(this.h, (C.int)(orientation))
}

func (this *QwtPlotSeriesItem) Orientation() qt.Orientation {
	return (qt.Orientation)(C.QwtPlotSeriesItem_orientation(this.h))
}

func (this *QwtPlotSeriesItem) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotSeriesItem_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSeriesItem) UpdateScaleDiv(param1 *QwtScaleDiv, param2 *QwtScaleDiv) {
	C.QwtPlotSeriesItem_updateScaleDiv(this.h, param1.cPointer(), param2.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtPlotSeriesItem) Delete() {
	C.QwtPlotSeriesItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotSeriesItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotSeriesItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
