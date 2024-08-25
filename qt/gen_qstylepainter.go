package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func (this *QStylePainter) DrawItemPixmap(r *QRect, flags int, pixmap *QPixmap) {
	C.QStylePainter_DrawItemPixmap(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
}

func (this *QStylePainter) Style() *QStyle {
	ret := C.QStylePainter_Style(this.h)
	return newQStyle_U(unsafe.Pointer(ret))
}

func (this *QStylePainter) Delete() {
	C.QStylePainter_Delete(this.h)
}
