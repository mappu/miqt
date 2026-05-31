package qwt

/*

#include "gen_qwt_plot_legenditem.h"
#include <stdlib.h>

*/
import "C"

import (
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
	h *C.QwtPlotLegendItem
	*QwtPlotItem
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
	return (int)(C.QwtPlotLegendItem_rtti(this.h))
}

func (this *QwtPlotLegendItem) SetAlignment(alignment qt.AlignmentFlag) {
	C.QwtPlotLegendItem_setAlignment(this.h, (C.int)(alignment))
}

func (this *QwtPlotLegendItem) Alignment() qt.AlignmentFlag {
	return (qt.AlignmentFlag)(C.QwtPlotLegendItem_alignment(this.h))
}

func (this *QwtPlotLegendItem) SetMaxColumns(maxColumns uint) {
	C.QwtPlotLegendItem_setMaxColumns(this.h, (C.uint)(maxColumns))
}

func (this *QwtPlotLegendItem) MaxColumns() uint {
	return (uint)(C.QwtPlotLegendItem_maxColumns(this.h))
}

func (this *QwtPlotLegendItem) SetMargin(margin int) {
	C.QwtPlotLegendItem_setMargin(this.h, (C.int)(margin))
}

func (this *QwtPlotLegendItem) Margin() int {
	return (int)(C.QwtPlotLegendItem_margin(this.h))
}

func (this *QwtPlotLegendItem) SetSpacing(spacing int) {
	C.QwtPlotLegendItem_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtPlotLegendItem) Spacing() int {
	return (int)(C.QwtPlotLegendItem_spacing(this.h))
}

func (this *QwtPlotLegendItem) SetItemMargin(itemMargin int) {
	C.QwtPlotLegendItem_setItemMargin(this.h, (C.int)(itemMargin))
}

func (this *QwtPlotLegendItem) ItemMargin() int {
	return (int)(C.QwtPlotLegendItem_itemMargin(this.h))
}

func (this *QwtPlotLegendItem) SetItemSpacing(itemSpacing int) {
	C.QwtPlotLegendItem_setItemSpacing(this.h, (C.int)(itemSpacing))
}

func (this *QwtPlotLegendItem) ItemSpacing() int {
	return (int)(C.QwtPlotLegendItem_itemSpacing(this.h))
}

func (this *QwtPlotLegendItem) SetFont(font *qt.QFont) {
	C.QwtPlotLegendItem_setFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QwtPlotLegendItem) Font() *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QwtPlotLegendItem_font(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) SetBorderDistance(borderDistance int) {
	C.QwtPlotLegendItem_setBorderDistance(this.h, (C.int)(borderDistance))
}

func (this *QwtPlotLegendItem) BorderDistance() int {
	return (int)(C.QwtPlotLegendItem_borderDistance(this.h))
}

func (this *QwtPlotLegendItem) SetBorderRadius(borderRadius float64) {
	C.QwtPlotLegendItem_setBorderRadius(this.h, (C.double)(borderRadius))
}

func (this *QwtPlotLegendItem) BorderRadius() float64 {
	return (float64)(C.QwtPlotLegendItem_borderRadius(this.h))
}

func (this *QwtPlotLegendItem) SetBorderPen(borderPen *qt.QPen) {
	C.QwtPlotLegendItem_setBorderPen(this.h, (*C.QPen)(borderPen.UnsafePointer()))
}

func (this *QwtPlotLegendItem) BorderPen() *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotLegendItem_borderPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) SetBackgroundBrush(backgroundBrush *qt.QBrush) {
	C.QwtPlotLegendItem_setBackgroundBrush(this.h, (*C.QBrush)(backgroundBrush.UnsafePointer()))
}

func (this *QwtPlotLegendItem) BackgroundBrush() *qt.QBrush {
	_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlotLegendItem_backgroundBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) SetBackgroundMode(backgroundMode QwtPlotLegendItem__BackgroundMode) {
	C.QwtPlotLegendItem_setBackgroundMode(this.h, (C.int)(backgroundMode))
}

func (this *QwtPlotLegendItem) BackgroundMode() QwtPlotLegendItem__BackgroundMode {
	return (QwtPlotLegendItem__BackgroundMode)(C.QwtPlotLegendItem_backgroundMode(this.h))
}

func (this *QwtPlotLegendItem) SetTextPen(textPen *qt.QPen) {
	C.QwtPlotLegendItem_setTextPen(this.h, (*C.QPen)(textPen.UnsafePointer()))
}

func (this *QwtPlotLegendItem) TextPen() *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPlotLegendItem_textPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) ClearLegend() {
	C.QwtPlotLegendItem_clearLegend(this.h)
}

func (this *QwtPlotLegendItem) UpdateLegend(param1 *QwtPlotItem, param2 []QwtLegendData) {
	param2_CArray := (*[0xffff]*C.QwtLegendData)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_CArray[i] = param2[i].cPointer()
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}
	C.QwtPlotLegendItem_updateLegend(this.h, param1.cPointer(), param2_ma)
}

func (this *QwtPlotLegendItem) Geometry(canvasRect *qt.QRectF) *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtPlotLegendItem_geometry(this.h, (*C.QRectF)(canvasRect.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) MinimumSize(param1 *QwtLegendData) *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlotLegendItem_minimumSize(this.h, param1.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLegendItem) HeightForWidth(param1 *QwtLegendData, width int) int {
	return (int)(C.QwtPlotLegendItem_heightForWidth(this.h, param1.cPointer(), (C.int)(width)))
}

func (this *QwtPlotLegendItem) PlotItems() []*QwtPlotItem {
	var _ma C.struct_miqt_array = C.QwtPlotLegendItem_plotItems(this.h)
	_ret := make([]*QwtPlotItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtPlotItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQwtPlotItem(_outCast[i])
	}
	return _ret
}

func (this *QwtPlotLegendItem) LegendGeometries(param1 *QwtPlotItem) []qt.QRect {
	var _ma C.struct_miqt_array = C.QwtPlotLegendItem_legendGeometries(this.h, param1.cPointer())
	_ret := make([]qt.QRect, int(_ma.len))
	_outCast := (*[0xffff]*C.QRect)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQRect(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QwtPlotLegendItem) Delete() {
	C.QwtPlotLegendItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotLegendItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotLegendItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
