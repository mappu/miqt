package qwt

/*

#include "gen_qwt_plot_rasteritem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotRasterItem__CachePolicy int

const (
	QwtPlotRasterItem__NoCache    QwtPlotRasterItem__CachePolicy = 0
	QwtPlotRasterItem__PaintCache QwtPlotRasterItem__CachePolicy = 1
)

type QwtPlotRasterItem__PaintAttribute int

const (
	QwtPlotRasterItem__PaintInDeviceResolution QwtPlotRasterItem__PaintAttribute = 1
)

type QwtPlotRasterItem struct {
	h *C.QwtPlotRasterItem
	*QwtPlotItem
}

func (this *QwtPlotRasterItem) cPointer() *C.QwtPlotRasterItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotRasterItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotRasterItem constructs the type using only CGO pointers.
func newQwtPlotRasterItem(h *C.QwtPlotRasterItem) *QwtPlotRasterItem {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotRasterItem_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotRasterItem{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotRasterItem constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotRasterItem(h unsafe.Pointer) *QwtPlotRasterItem {
	return newQwtPlotRasterItem((*C.QwtPlotRasterItem)(h))
}

func (this *QwtPlotRasterItem) SetPaintAttribute(param1 QwtPlotRasterItem__PaintAttribute) {
	C.QwtPlotRasterItem_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotRasterItem) TestPaintAttribute(param1 QwtPlotRasterItem__PaintAttribute) bool {
	return (bool)(C.QwtPlotRasterItem_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotRasterItem) SetAlpha(alpha int) {
	C.QwtPlotRasterItem_setAlpha(this.h, (C.int)(alpha))
}

func (this *QwtPlotRasterItem) Alpha() int {
	return (int)(C.QwtPlotRasterItem_alpha(this.h))
}

func (this *QwtPlotRasterItem) SetCachePolicy(cachePolicy QwtPlotRasterItem__CachePolicy) {
	C.QwtPlotRasterItem_setCachePolicy(this.h, (C.int)(cachePolicy))
}

func (this *QwtPlotRasterItem) CachePolicy() QwtPlotRasterItem__CachePolicy {
	return (QwtPlotRasterItem__CachePolicy)(C.QwtPlotRasterItem_cachePolicy(this.h))
}

func (this *QwtPlotRasterItem) InvalidateCache() {
	C.QwtPlotRasterItem_invalidateCache(this.h)
}

func (this *QwtPlotRasterItem) PixelHint(param1 *qt.QRectF) *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotRasterItem_pixelHint(this.h, (*C.QRectF)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotRasterItem) Interval(param1 qt.Axis) *QwtInterval {
	_goptr := newQwtInterval(C.QwtPlotRasterItem_interval(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotRasterItem) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotRasterItem_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotRasterItem) SetPaintAttribute2(param1 QwtPlotRasterItem__PaintAttribute, on bool) {
	C.QwtPlotRasterItem_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QwtPlotRasterItem) Delete() {
	C.QwtPlotRasterItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotRasterItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotRasterItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
