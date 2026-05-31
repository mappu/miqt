package qwt

/*

#include "gen_qwt_plot_scaleitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotScaleItem struct {
	h *C.QwtPlotScaleItem
	*QwtPlotItem
}

func (this *QwtPlotScaleItem) cPointer() *C.QwtPlotScaleItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotScaleItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotScaleItem constructs the type using only CGO pointers.
func newQwtPlotScaleItem(h *C.QwtPlotScaleItem) *QwtPlotScaleItem {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotScaleItem_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotScaleItem{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotScaleItem constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotScaleItem(h unsafe.Pointer) *QwtPlotScaleItem {
	return newQwtPlotScaleItem((*C.QwtPlotScaleItem)(h))
}

// NewQwtPlotScaleItem constructs a new QwtPlotScaleItem object.
func NewQwtPlotScaleItem() *QwtPlotScaleItem {

	return newQwtPlotScaleItem(C.QwtPlotScaleItem_new())
}

// NewQwtPlotScaleItem2 constructs a new QwtPlotScaleItem object.
func NewQwtPlotScaleItem2(param1 QwtScaleDraw__Alignment) *QwtPlotScaleItem {

	return newQwtPlotScaleItem(C.QwtPlotScaleItem_new2((C.int)(param1)))
}

// NewQwtPlotScaleItem3 constructs a new QwtPlotScaleItem object.
func NewQwtPlotScaleItem3(param1 QwtScaleDraw__Alignment, pos float64) *QwtPlotScaleItem {

	return newQwtPlotScaleItem(C.QwtPlotScaleItem_new3((C.int)(param1), (C.double)(pos)))
}

func (this *QwtPlotScaleItem) Rtti() int {
	return (int)(C.QwtPlotScaleItem_rtti(this.h))
}

func (this *QwtPlotScaleItem) SetScaleDiv(scaleDiv *QwtScaleDiv) {
	C.QwtPlotScaleItem_setScaleDiv(this.h, scaleDiv.cPointer())
}

func (this *QwtPlotScaleItem) ScaleDiv() *QwtScaleDiv {
	return newQwtScaleDiv(C.QwtPlotScaleItem_scaleDiv(this.h))
}

func (this *QwtPlotScaleItem) SetScaleDivFromAxis(on bool) {
	C.QwtPlotScaleItem_setScaleDivFromAxis(this.h, (C.bool)(on))
}

func (this *QwtPlotScaleItem) IsScaleDivFromAxis() bool {
	return (bool)(C.QwtPlotScaleItem_isScaleDivFromAxis(this.h))
}

func (this *QwtPlotScaleItem) SetPalette(palette *qt.QPalette) {
	C.QwtPlotScaleItem_setPalette(this.h, (*C.QPalette)(palette.UnsafePointer()))
}

func (this *QwtPlotScaleItem) Palette() *qt.QPalette {
	_goptr := qt.UnsafeNewQPalette(unsafe.Pointer(C.QwtPlotScaleItem_palette(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotScaleItem) SetFont(font *qt.QFont) {
	C.QwtPlotScaleItem_setFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QwtPlotScaleItem) Font() *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QwtPlotScaleItem_font(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotScaleItem) SetScaleDraw(scaleDraw *QwtScaleDraw) {
	C.QwtPlotScaleItem_setScaleDraw(this.h, scaleDraw.cPointer())
}

func (this *QwtPlotScaleItem) ScaleDraw() *QwtScaleDraw {
	return newQwtScaleDraw(C.QwtPlotScaleItem_scaleDraw(this.h))
}

func (this *QwtPlotScaleItem) ScaleDraw2() *QwtScaleDraw {
	return newQwtScaleDraw(C.QwtPlotScaleItem_scaleDraw2(this.h))
}

func (this *QwtPlotScaleItem) SetPosition(pos float64) {
	C.QwtPlotScaleItem_setPosition(this.h, (C.double)(pos))
}

func (this *QwtPlotScaleItem) Position() float64 {
	return (float64)(C.QwtPlotScaleItem_position(this.h))
}

func (this *QwtPlotScaleItem) SetBorderDistance(borderDistance int) {
	C.QwtPlotScaleItem_setBorderDistance(this.h, (C.int)(borderDistance))
}

func (this *QwtPlotScaleItem) BorderDistance() int {
	return (int)(C.QwtPlotScaleItem_borderDistance(this.h))
}

func (this *QwtPlotScaleItem) SetAlignment(alignment QwtScaleDraw__Alignment) {
	C.QwtPlotScaleItem_setAlignment(this.h, (C.int)(alignment))
}

func (this *QwtPlotScaleItem) UpdateScaleDiv(param1 *QwtScaleDiv, param2 *QwtScaleDiv) {
	C.QwtPlotScaleItem_updateScaleDiv(this.h, param1.cPointer(), param2.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtPlotScaleItem) Delete() {
	C.QwtPlotScaleItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotScaleItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotScaleItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
