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
	h  *C.QwtPlotRasterItem
	gc *[1]unsafe.Pointer
	*QwtPlotItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotRasterItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotItem.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	C.QwtPlotRasterItem_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotRasterItem) TestPaintAttribute(param1 QwtPlotRasterItem__PaintAttribute) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotRasterItem_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotRasterItem) SetAlpha(alpha int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRasterItem_setAlpha(this.h, (C.int)(alpha))
}

func (this *QwtPlotRasterItem) Alpha() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotRasterItem_alpha(this.h))
}

func (this *QwtPlotRasterItem) SetCachePolicy(cachePolicy QwtPlotRasterItem__CachePolicy) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRasterItem_setCachePolicy(this.h, (C.int)(cachePolicy))
}

func (this *QwtPlotRasterItem) CachePolicy() QwtPlotRasterItem__CachePolicy {
	defer runtime.KeepAlive(this)
	return (QwtPlotRasterItem__CachePolicy)(C.QwtPlotRasterItem_cachePolicy(this.h))
}

func (this *QwtPlotRasterItem) InvalidateCache() {
	defer runtime.KeepAlive(this)
	C.QwtPlotRasterItem_invalidateCache(this.h)
}

func (this *QwtPlotRasterItem) PixelHint(param1 *qt.QRectF) *qt.QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotRasterItem_pixelHint(this.h, (*C.QRectF)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotRasterItem) Interval(param1 qt.Axis) *QwtInterval {
	defer runtime.KeepAlive(this)
	_goptr := newQwtInterval(C.QwtPlotRasterItem_interval(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotRasterItem) BoundingRect() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotRasterItem_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotRasterItem) SetPaintAttribute2(param1 QwtPlotRasterItem__PaintAttribute, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRasterItem_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QwtPlotRasterItem) Delete() {
	C.QwtPlotRasterItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotRasterItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotRasterItem_delete((*C.QwtPlotRasterItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}
