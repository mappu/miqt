package qt

/*

#include "gen_qrubberband.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QRubberBand__Shape int

const (
	QRubberBand__Shape__Line      QRubberBand__Shape = 0
	QRubberBand__Shape__Rectangle QRubberBand__Shape = 1
)

type QRubberBand struct {
	h *C.QRubberBand
	*QWidget
}

func (this *QRubberBand) cPointer() *C.QRubberBand {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRubberBand(h *C.QRubberBand) *QRubberBand {
	if h == nil {
		return nil
	}
	return &QRubberBand{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQRubberBand_U(h unsafe.Pointer) *QRubberBand {
	return newQRubberBand((*C.QRubberBand)(h))
}

// NewQRubberBand constructs a new QRubberBand object.
func NewQRubberBand(param1 QRubberBand__Shape) *QRubberBand {
	ret := C.QRubberBand_new((C.uintptr_t)(param1))
	return newQRubberBand(ret)
}

// NewQRubberBand2 constructs a new QRubberBand object.
func NewQRubberBand2(param1 QRubberBand__Shape, param2 *QWidget) *QRubberBand {
	ret := C.QRubberBand_new2((C.uintptr_t)(param1), param2.cPointer())
	return newQRubberBand(ret)
}

func (this *QRubberBand) MetaObject() *QMetaObject {
	ret := C.QRubberBand_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QRubberBand_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRubberBand_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRubberBand_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRubberBand_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRubberBand) Shape() QRubberBand__Shape {
	ret := C.QRubberBand_Shape(this.h)
	return (QRubberBand__Shape)(ret)
}

func (this *QRubberBand) SetGeometry(r *QRect) {
	C.QRubberBand_SetGeometry(this.h, r.cPointer())
}

func (this *QRubberBand) SetGeometry2(x int, y int, w int, h int) {
	C.QRubberBand_SetGeometry2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QRubberBand) Move(x int, y int) {
	C.QRubberBand_Move(this.h, (C.int)(x), (C.int)(y))
}

func (this *QRubberBand) MoveWithQPoint(p *QPoint) {
	C.QRubberBand_MoveWithQPoint(this.h, p.cPointer())
}

func (this *QRubberBand) Resize(w int, h int) {
	C.QRubberBand_Resize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QRubberBand) ResizeWithQSize(s *QSize) {
	C.QRubberBand_ResizeWithQSize(this.h, s.cPointer())
}

func QRubberBand_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRubberBand_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRubberBand_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRubberBand_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRubberBand_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRubberBand_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRubberBand_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRubberBand_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRubberBand) Delete() {
	C.QRubberBand_Delete(this.h)
}
