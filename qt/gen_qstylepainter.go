package qt

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

func newQStylePainter(h *C.QStylePainter) *QStylePainter {
	if h == nil {
		return nil
	}
	return &QStylePainter{h: h, QPainter: newQPainter_U(unsafe.Pointer(h))}
}

func newQStylePainter_U(h unsafe.Pointer) *QStylePainter {
	return newQStylePainter((*C.QStylePainter)(h))
}

// NewQStylePainter constructs a new QStylePainter object.
func NewQStylePainter() *QStylePainter {
	ret := C.QStylePainter_new()
	return newQStylePainter(ret)
}

// NewQStylePainter2 constructs a new QStylePainter object.
func NewQStylePainter2(w *QWidget) *QStylePainter {
	ret := C.QStylePainter_new2(w.cPointer())
	return newQStylePainter(ret)
}

// NewQStylePainter3 constructs a new QStylePainter object.
func NewQStylePainter3(pd *QPaintDevice, w *QWidget) *QStylePainter {
	ret := C.QStylePainter_new3(pd.cPointer(), w.cPointer())
	return newQStylePainter(ret)
}

func (this *QStylePainter) Begin(w *QWidget) bool {
	return (bool)(C.QStylePainter_Begin(this.h, w.cPointer()))
}

func (this *QStylePainter) Begin2(pd *QPaintDevice, w *QWidget) bool {
	return (bool)(C.QStylePainter_Begin2(this.h, pd.cPointer(), w.cPointer()))
}

func (this *QStylePainter) DrawPrimitive(pe QStyle__PrimitiveElement, opt *QStyleOption) {
	C.QStylePainter_DrawPrimitive(this.h, (C.uintptr_t)(pe), opt.cPointer())
}

func (this *QStylePainter) DrawControl(ce QStyle__ControlElement, opt *QStyleOption) {
	C.QStylePainter_DrawControl(this.h, (C.uintptr_t)(ce), opt.cPointer())
}

func (this *QStylePainter) DrawComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex) {
	C.QStylePainter_DrawComplexControl(this.h, (C.uintptr_t)(cc), opt.cPointer())
}

func (this *QStylePainter) DrawItemText(r *QRect, flags int, pal *QPalette, enabled bool, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QStylePainter_DrawItemText(this.h, r.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), (*C.struct_miqt_string)(text_ms))
}

func (this *QStylePainter) DrawItemPixmap(r *QRect, flags int, pixmap *QPixmap) {
	C.QStylePainter_DrawItemPixmap(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
}

func (this *QStylePainter) Style() *QStyle {
	return newQStyle_U(unsafe.Pointer(C.QStylePainter_Style(this.h)))
}

func (this *QStylePainter) DrawItemText6(r *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QStylePainter_DrawItemText6(this.h, r.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), (*C.struct_miqt_string)(text_ms), (C.uintptr_t)(textRole))
}

// Delete this object from C++ memory.
func (this *QStylePainter) Delete() {
	C.QStylePainter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStylePainter) GoGC() {
	runtime.SetFinalizer(this, func(this *QStylePainter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
