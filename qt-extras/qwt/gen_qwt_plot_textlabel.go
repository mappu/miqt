package qwt

/*

#include "gen_qwt_plot_textlabel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotTextLabel struct {
	h  *C.QwtPlotTextLabel
	gc *[1]unsafe.Pointer
	*QwtPlotItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotTextLabel) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotItem.miqtSetGC(gc)
}

func (this *QwtPlotTextLabel) cPointer() *C.QwtPlotTextLabel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotTextLabel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotTextLabel constructs the type using only CGO pointers.
func newQwtPlotTextLabel(h *C.QwtPlotTextLabel) *QwtPlotTextLabel {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotTextLabel_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotTextLabel{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotTextLabel constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotTextLabel(h unsafe.Pointer) *QwtPlotTextLabel {
	return newQwtPlotTextLabel((*C.QwtPlotTextLabel)(h))
}

// NewQwtPlotTextLabel constructs a new QwtPlotTextLabel object.
func NewQwtPlotTextLabel() *QwtPlotTextLabel {

	return newQwtPlotTextLabel(C.QwtPlotTextLabel_new())
}

func (this *QwtPlotTextLabel) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotTextLabel_rtti(this.h))
}

func (this *QwtPlotTextLabel) SetText(text *QwtText) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(text)
	C.QwtPlotTextLabel_setText(this.h, text.cPointer())
}

func (this *QwtPlotTextLabel) Text() *QwtText {
	defer runtime.KeepAlive(this)
	_goptr := newQwtText(C.QwtPlotTextLabel_text(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotTextLabel) SetMargin(margin int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotTextLabel_setMargin(this.h, (C.int)(margin))
}

func (this *QwtPlotTextLabel) Margin() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotTextLabel_margin(this.h))
}

func (this *QwtPlotTextLabel) TextRect(param1 qt.QRectF, param2 qt.QSizeF) qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPlotTextLabel_textRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](param1), libmiqt.ValueCast[C.struct_miqt_qsizef](param2)))
}

// Delete this object from C++ memory.
func (this *QwtPlotTextLabel) Delete() {
	C.QwtPlotTextLabel_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotTextLabel) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotTextLabel_delete((*C.QwtPlotTextLabel)(gc[0]))
	})
	this.miqtSetGC(gc)
}
