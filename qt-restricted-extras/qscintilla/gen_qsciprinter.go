package qscintilla

/*

#include "gen_qsciprinter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/printsupport"
	"runtime"
	"unsafe"
)

type QsciPrinter struct {
	h *C.QsciPrinter
	*printsupport.QPrinter
}

func (this *QsciPrinter) cPointer() *C.QsciPrinter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciPrinter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciPrinter(h *C.QsciPrinter) *QsciPrinter {
	if h == nil {
		return nil
	}
	return &QsciPrinter{h: h, QPrinter: printsupport.UnsafeNewQPrinter(unsafe.Pointer(h))}
}

func UnsafeNewQsciPrinter(h unsafe.Pointer) *QsciPrinter {
	return newQsciPrinter((*C.QsciPrinter)(h))
}

// NewQsciPrinter constructs a new QsciPrinter object.
func NewQsciPrinter() *QsciPrinter {
	ret := C.QsciPrinter_new()
	return newQsciPrinter(ret)
}

// NewQsciPrinter2 constructs a new QsciPrinter object.
func NewQsciPrinter2(mode printsupport.QPrinter__PrinterMode) *QsciPrinter {
	ret := C.QsciPrinter_new2((C.int)(mode))
	return newQsciPrinter(ret)
}

func (this *QsciPrinter) FormatPage(painter *qt.QPainter, drawing bool, area *qt.QRect, pagenr int) {
	C.QsciPrinter_FormatPage(this.h, (*C.QPainter)(painter.UnsafePointer()), (C.bool)(drawing), (*C.QRect)(area.UnsafePointer()), (C.int)(pagenr))
}

func (this *QsciPrinter) Magnification() int {
	return (int)(C.QsciPrinter_Magnification(this.h))
}

func (this *QsciPrinter) SetMagnification(magnification int) {
	C.QsciPrinter_SetMagnification(this.h, (C.int)(magnification))
}

func (this *QsciPrinter) PrintRange(qsb *QsciScintillaBase, painter *qt.QPainter) int {
	return (int)(C.QsciPrinter_PrintRange(this.h, qsb.cPointer(), (*C.QPainter)(painter.UnsafePointer())))
}

func (this *QsciPrinter) PrintRangeWithQsb(qsb *QsciScintillaBase) int {
	return (int)(C.QsciPrinter_PrintRangeWithQsb(this.h, qsb.cPointer()))
}

func (this *QsciPrinter) WrapMode() QsciScintilla__WrapMode {
	return (QsciScintilla__WrapMode)(C.QsciPrinter_WrapMode(this.h))
}

func (this *QsciPrinter) SetWrapMode(wmode QsciScintilla__WrapMode) {
	C.QsciPrinter_SetWrapMode(this.h, (C.int)(wmode))
}

func (this *QsciPrinter) PrintRange3(qsb *QsciScintillaBase, painter *qt.QPainter, from int) int {
	return (int)(C.QsciPrinter_PrintRange3(this.h, qsb.cPointer(), (*C.QPainter)(painter.UnsafePointer()), (C.int)(from)))
}

func (this *QsciPrinter) PrintRange4(qsb *QsciScintillaBase, painter *qt.QPainter, from int, to int) int {
	return (int)(C.QsciPrinter_PrintRange4(this.h, qsb.cPointer(), (*C.QPainter)(painter.UnsafePointer()), (C.int)(from), (C.int)(to)))
}

func (this *QsciPrinter) PrintRange2(qsb *QsciScintillaBase, from int) int {
	return (int)(C.QsciPrinter_PrintRange2(this.h, qsb.cPointer(), (C.int)(from)))
}

func (this *QsciPrinter) PrintRange32(qsb *QsciScintillaBase, from int, to int) int {
	return (int)(C.QsciPrinter_PrintRange32(this.h, qsb.cPointer(), (C.int)(from), (C.int)(to)))
}

// Delete this object from C++ memory.
func (this *QsciPrinter) Delete() {
	C.QsciPrinter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciPrinter) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciPrinter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
