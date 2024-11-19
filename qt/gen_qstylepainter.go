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
	h          *C.QStylePainter
	isSubclass bool
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
func newQStylePainter(h *C.QStylePainter, h_QPainter *C.QPainter) *QStylePainter {
	if h == nil {
		return nil
	}
	return &QStylePainter{h: h,
		QPainter: newQPainter(h_QPainter)}
}

// UnsafeNewQStylePainter constructs the type using only unsafe pointers.
func UnsafeNewQStylePainter(h unsafe.Pointer, h_QPainter unsafe.Pointer) *QStylePainter {
	if h == nil {
		return nil
	}

	return &QStylePainter{h: (*C.QStylePainter)(h),
		QPainter: UnsafeNewQPainter(h_QPainter)}
}

// NewQStylePainter constructs a new QStylePainter object.
func NewQStylePainter(w *QWidget) *QStylePainter {
	var outptr_QStylePainter *C.QStylePainter = nil
	var outptr_QPainter *C.QPainter = nil

	C.QStylePainter_new(w.cPointer(), &outptr_QStylePainter, &outptr_QPainter)
	ret := newQStylePainter(outptr_QStylePainter, outptr_QPainter)
	ret.isSubclass = true
	return ret
}

// NewQStylePainter2 constructs a new QStylePainter object.
func NewQStylePainter2() *QStylePainter {
	var outptr_QStylePainter *C.QStylePainter = nil
	var outptr_QPainter *C.QPainter = nil

	C.QStylePainter_new2(&outptr_QStylePainter, &outptr_QPainter)
	ret := newQStylePainter(outptr_QStylePainter, outptr_QPainter)
	ret.isSubclass = true
	return ret
}

// NewQStylePainter3 constructs a new QStylePainter object.
func NewQStylePainter3(pd *QPaintDevice, w *QWidget) *QStylePainter {
	var outptr_QStylePainter *C.QStylePainter = nil
	var outptr_QPainter *C.QPainter = nil

	C.QStylePainter_new3(pd.cPointer(), w.cPointer(), &outptr_QStylePainter, &outptr_QPainter)
	ret := newQStylePainter(outptr_QStylePainter, outptr_QPainter)
	ret.isSubclass = true
	return ret
}

func (this *QStylePainter) Begin(w *QWidget) bool {
	return (bool)(C.QStylePainter_Begin(this.h, w.cPointer()))
}

func (this *QStylePainter) Begin2(pd *QPaintDevice, w *QWidget) bool {
	return (bool)(C.QStylePainter_Begin2(this.h, pd.cPointer(), w.cPointer()))
}

func (this *QStylePainter) DrawPrimitive(pe QStyle__PrimitiveElement, opt *QStyleOption) {
	C.QStylePainter_DrawPrimitive(this.h, (C.int)(pe), opt.cPointer())
}

func (this *QStylePainter) DrawControl(ce QStyle__ControlElement, opt *QStyleOption) {
	C.QStylePainter_DrawControl(this.h, (C.int)(ce), opt.cPointer())
}

func (this *QStylePainter) DrawComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex) {
	C.QStylePainter_DrawComplexControl(this.h, (C.int)(cc), opt.cPointer())
}

func (this *QStylePainter) DrawItemText(r *QRect, flags int, pal *QPalette, enabled bool, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStylePainter_DrawItemText(this.h, r.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms)
}

func (this *QStylePainter) DrawItemPixmap(r *QRect, flags int, pixmap *QPixmap) {
	C.QStylePainter_DrawItemPixmap(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
}

func (this *QStylePainter) Style() *QStyle {
	return UnsafeNewQStyle(unsafe.Pointer(C.QStylePainter_Style(this.h)), nil)
}

func (this *QStylePainter) DrawItemText6(r *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStylePainter_DrawItemText6(this.h, r.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms, (C.int)(textRole))
}

// Delete this object from C++ memory.
func (this *QStylePainter) Delete() {
	C.QStylePainter_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStylePainter) GoGC() {
	runtime.SetFinalizer(this, func(this *QStylePainter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
