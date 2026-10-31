package qwt

/*

#include "gen_qwt_plot_legenditem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotLegendItem__BackgroundMode int

const (
	QwtPlotLegendItem__LegendBackground QwtPlotLegendItem__BackgroundMode = 0
	QwtPlotLegendItem__ItemBackground   QwtPlotLegendItem__BackgroundMode = 1
)

type QwtPlotLegendItem struct {
	h  *C.QwtPlotLegendItem
	gc *[1]unsafe.Pointer
	*QwtPlotItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotLegendItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotItem.miqtSetGC(gc)
}

func (this *QwtPlotLegendItem) cPointer() *C.QwtPlotLegendItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotLegendItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotLegendItem constructs the type using only CGO pointers.
func newQwtPlotLegendItem(h *C.QwtPlotLegendItem) *QwtPlotLegendItem {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotLegendItem_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotLegendItem{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotLegendItem constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotLegendItem(h unsafe.Pointer) *QwtPlotLegendItem {
	return newQwtPlotLegendItem((*C.QwtPlotLegendItem)(h))
}

// NewQwtPlotLegendItem constructs a new QwtPlotLegendItem object.
func NewQwtPlotLegendItem() *QwtPlotLegendItem {

	return newQwtPlotLegendItem(C.QwtPlotLegendItem_new())
}

func (this *QwtPlotLegendItem) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotLegendItem_rtti(this.h))
}

func (this *QwtPlotLegendItem) SetAlignment(alignment qt.AlignmentFlag) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setAlignment(this.h, (C.int)(alignment))
}

func (this *QwtPlotLegendItem) Alignment() qt.AlignmentFlag {
	defer runtime.KeepAlive(this)
	return (qt.AlignmentFlag)(C.QwtPlotLegendItem_alignment(this.h))
}

func (this *QwtPlotLegendItem) SetMaxColumns(maxColumns uint) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setMaxColumns(this.h, (C.uint)(maxColumns))
}

func (this *QwtPlotLegendItem) MaxColumns() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QwtPlotLegendItem_maxColumns(this.h))
}

func (this *QwtPlotLegendItem) SetMargin(margin int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setMargin(this.h, (C.int)(margin))
}

func (this *QwtPlotLegendItem) Margin() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotLegendItem_margin(this.h))
}

func (this *QwtPlotLegendItem) SetSpacing(spacing int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtPlotLegendItem) Spacing() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotLegendItem_spacing(this.h))
}

func (this *QwtPlotLegendItem) SetItemMargin(itemMargin int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setItemMargin(this.h, (C.int)(itemMargin))
}

func (this *QwtPlotLegendItem) ItemMargin() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotLegendItem_itemMargin(this.h))
}

func (this *QwtPlotLegendItem) SetItemSpacing(itemSpacing int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setItemSpacing(this.h, (C.int)(itemSpacing))
}

func (this *QwtPlotLegendItem) ItemSpacing() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotLegendItem_itemSpacing(this.h))
}

func (this *QwtPlotLegendItem) SetFont(font *qt.QFont) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(font)
	C.QwtPlotLegendItem_setFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QwtPlotLegendItem) Font() *qt.QFont {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QwtPlotLegendItem_font(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) SetBorderDistance(borderDistance int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setBorderDistance(this.h, (C.int)(borderDistance))
}

func (this *QwtPlotLegendItem) BorderDistance() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotLegendItem_borderDistance(this.h))
}

func (this *QwtPlotLegendItem) SetBorderRadius(borderRadius float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setBorderRadius(this.h, (C.double)(borderRadius))
}

func (this *QwtPlotLegendItem) BorderRadius() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPlotLegendItem_borderRadius(this.h))
}

func (this *QwtPlotLegendItem) SetBorderPen(borderPen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(borderPen)
	C.QwtPlotLegendItem_setBorderPen(this.h, (*C.QPen)(borderPen.UnsafePointer()))
}

func (this *QwtPlotLegendItem) BorderPen() *qt.QPen {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotLegendItem_borderPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) SetBackgroundBrush(backgroundBrush *qt.QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(backgroundBrush)
	C.QwtPlotLegendItem_setBackgroundBrush(this.h, (*C.QBrush)(backgroundBrush.UnsafePointer()))
}

func (this *QwtPlotLegendItem) BackgroundBrush() *qt.QBrush {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotLegendItem_backgroundBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) SetBackgroundMode(backgroundMode QwtPlotLegendItem__BackgroundMode) {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_setBackgroundMode(this.h, (C.int)(backgroundMode))
}

func (this *QwtPlotLegendItem) BackgroundMode() QwtPlotLegendItem__BackgroundMode {
	defer runtime.KeepAlive(this)
	return (QwtPlotLegendItem__BackgroundMode)(C.QwtPlotLegendItem_backgroundMode(this.h))
}

func (this *QwtPlotLegendItem) SetTextPen(textPen *qt.QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(textPen)
	C.QwtPlotLegendItem_setTextPen(this.h, (*C.QPen)(textPen.UnsafePointer()))
}

func (this *QwtPlotLegendItem) TextPen() *qt.QPen {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotLegendItem_textPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) ClearLegend() {
	defer runtime.KeepAlive(this)
	C.QwtPlotLegendItem_clearLegend(this.h)
}

func (this *QwtPlotLegendItem) UpdateLegend(param1 *QwtPlotItem, param2 []QwtLegendData) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)
	param2_CArray_ptr := (**C.QwtLegendData)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray_ptr))
	param2_CArray := unsafe.Slice(param2_CArray_ptr, len(param2))
	for i := range param2 {
		param2_CArray[i] = param2[i].cPointer()
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray_ptr)}
	C.QwtPlotLegendItem_updateLegend(this.h, param1.cPointer(), param2_ma)
}

func (this *QwtPlotLegendItem) Geometry(canvasRect qt.QRectF) qt.QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRect](C.QwtPlotLegendItem_geometry(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](canvasRect)))
}

func (this *QwtPlotLegendItem) MinimumSize(param1 *QwtLegendData) qt.QSize {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return libmiqt.ValueCast[qt.QSize](C.QwtPlotLegendItem_minimumSize(this.h, param1.cPointer()))
}

func (this *QwtPlotLegendItem) HeightForWidth(param1 *QwtLegendData, width int) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (int)(C.QwtPlotLegendItem_heightForWidth(this.h, param1.cPointer(), (C.int)(width)))
}

func (this *QwtPlotLegendItem) PlotItems() []*QwtPlotItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtPlotLegendItem_plotItems(this.h)
	_ret := make([]*QwtPlotItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QwtPlotItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQwtPlotItem(_outCast[i])
	}
	return _ret
}

func (this *QwtPlotLegendItem) LegendGeometries(param1 *QwtPlotItem) []qt.QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	var _ma C.struct_miqt_array = C.QwtPlotLegendItem_legendGeometries(this.h, param1.cPointer())
	_ret := make([]qt.QRect, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_qrect)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = libmiqt.ValueCast[qt.QRect](_outCast[i])
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QwtPlotLegendItem) Delete() {
	C.QwtPlotLegendItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotLegendItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotLegendItem_delete((*C.QwtPlotLegendItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}
