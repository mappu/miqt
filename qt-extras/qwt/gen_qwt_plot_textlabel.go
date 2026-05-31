package qwt

/*

#include "gen_qwt_plot_textlabel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotTextLabel struct {
	h *C.QwtPlotTextLabel
	*QwtPlotItem
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
	return (int)(C.QwtPlotTextLabel_rtti(this.h))
}

func (this *QwtPlotTextLabel) SetText(text *QwtText) {
	C.QwtPlotTextLabel_setText(this.h, text.cPointer())
}

func (this *QwtPlotTextLabel) Text() *QwtText {
	_goptr := newQwtText(C.QwtPlotTextLabel_text(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotTextLabel) SetMargin(margin int) {
	C.QwtPlotTextLabel_setMargin(this.h, (C.int)(margin))
}

func (this *QwtPlotTextLabel) Margin() int {
	return (int)(C.QwtPlotTextLabel_margin(this.h))
}

func (this *QwtPlotTextLabel) TextRect(param1 *qt.QRectF, param2 *qt.QSizeF) *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotTextLabel_textRect(this.h, (*C.QRectF)(param1.UnsafePointer()), (*C.QSizeF)(param2.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QwtPlotTextLabel) Delete() {
	C.QwtPlotTextLabel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotTextLabel) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotTextLabel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
