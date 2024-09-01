package qt

/*

#include "gen_qstylepainter.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QStylePainter_Begin(this.h, w.cPointer())
	return (bool)(ret)
}

func (this *QStylePainter) Begin2(pd *QPaintDevice, w *QWidget) bool {
	ret := C.QStylePainter_Begin2(this.h, pd.cPointer(), w.cPointer())
	return (bool)(ret)
}

func (this *QStylePainter) DrawPrimitive(pe uintptr, opt *QStyleOption) {
	C.QStylePainter_DrawPrimitive(this.h, (C.uintptr_t)(pe), opt.cPointer())
}

func (this *QStylePainter) DrawControl(ce uintptr, opt *QStyleOption) {
	C.QStylePainter_DrawControl(this.h, (C.uintptr_t)(ce), opt.cPointer())
}

func (this *QStylePainter) DrawComplexControl(cc uintptr, opt *QStyleOptionComplex) {
	C.QStylePainter_DrawComplexControl(this.h, (C.uintptr_t)(cc), opt.cPointer())
}

func (this *QStylePainter) DrawItemText(r *QRect, flags int, pal *QPalette, enabled bool, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QStylePainter_DrawItemText(this.h, r.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_Cstring, C.size_t(len(text)))
}

func (this *QStylePainter) DrawItemPixmap(r *QRect, flags int, pixmap *QPixmap) {
	C.QStylePainter_DrawItemPixmap(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
}

func (this *QStylePainter) Style() *QStyle {
	ret := C.QStylePainter_Style(this.h)
	return newQStyle_U(unsafe.Pointer(ret))
}

func (this *QStylePainter) DrawItemText6(r *QRect, flags int, pal *QPalette, enabled bool, text string, textRole uintptr) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QStylePainter_DrawItemText6(this.h, r.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(textRole))
}

func (this *QStylePainter) Delete() {
	C.QStylePainter_Delete(this.h)
}
