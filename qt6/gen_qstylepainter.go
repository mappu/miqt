package qt6

/*

#include "gen_qstylepainter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStylePainter struct {
	h *C.QStylePainter
	*QPainter
}

func (this *QStylePainter) cPointer() *C.QStylePainter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStylePainter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStylePainter constructs the type using only CGO pointers.
func newQStylePainter(h *C.QStylePainter) *QStylePainter {
	if h == nil {
		return nil
	}
	var outptr_QPainter *C.QPainter = nil
	C.QStylePainter_virtbase(h, &outptr_QPainter)

	return &QStylePainter{h: h,
		QPainter: newQPainter(outptr_QPainter)}
}

// UnsafeNewQStylePainter constructs the type using only unsafe pointers.
func UnsafeNewQStylePainter(h unsafe.Pointer) *QStylePainter {
	return newQStylePainter((*C.QStylePainter)(h))
}

// NewQStylePainter constructs a new QStylePainter object.
func NewQStylePainter(w *QWidget) *QStylePainter {

	return newQStylePainter(C.QStylePainter_new(w.cPointer()))
}

// NewQStylePainter2 constructs a new QStylePainter object.
func NewQStylePainter2() *QStylePainter {

	return newQStylePainter(C.QStylePainter_new2())
}

// NewQStylePainter3 constructs a new QStylePainter object.
func NewQStylePainter3(pd *QPaintDevice, w *QWidget) *QStylePainter {

	return newQStylePainter(C.QStylePainter_new3(pd.cPointer(), w.cPointer()))
}

func (this *QStylePainter) Begin(w *QWidget) bool {
	return (bool)(C.QStylePainter_begin(this.h, w.cPointer()))
}

func (this *QStylePainter) Begin2(pd *QPaintDevice, w *QWidget) bool {
	return (bool)(C.QStylePainter_begin2(this.h, pd.cPointer(), w.cPointer()))
}

func (this *QStylePainter) DrawPrimitive(pe QStyle__PrimitiveElement, opt *QStyleOption) {
	C.QStylePainter_drawPrimitive(this.h, (C.int)(pe), opt.cPointer())
}

func (this *QStylePainter) DrawControl(ce QStyle__ControlElement, opt *QStyleOption) {
	C.QStylePainter_drawControl(this.h, (C.int)(ce), opt.cPointer())
}

func (this *QStylePainter) DrawComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex) {
	C.QStylePainter_drawComplexControl(this.h, (C.int)(cc), opt.cPointer())
}

func (this *QStylePainter) DrawItemText(r *QRect, flags int, pal *QPalette, enabled bool, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStylePainter_drawItemText(this.h, r.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms)
}

func (this *QStylePainter) DrawItemPixmap(r *QRect, flags int, pixmap *QPixmap) {
	C.QStylePainter_drawItemPixmap(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
}

func (this *QStylePainter) Style() *QStyle {
	return newQStyle(C.QStylePainter_style(this.h))
}

func (this *QStylePainter) DrawItemText2(r *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStylePainter_drawItemText2(this.h, r.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms, (C.int)(textRole))
}

// Delete this object from C++ memory.
func (this *QStylePainter) Delete() {
	C.QStylePainter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStylePainter) GoGC() {
	runtime.SetFinalizer(this, func(this *QStylePainter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
