package qt

/*

#include "gen_qglyphrun.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGlyphRun struct {
	h *C.QGlyphRun
}

func (this *QGlyphRun) cPointer() *C.QGlyphRun {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGlyphRun(h *C.QGlyphRun) *QGlyphRun {
	if h == nil {
		return nil
	}
	return &QGlyphRun{h: h}
}

func newQGlyphRun_U(h unsafe.Pointer) *QGlyphRun {
	return newQGlyphRun((*C.QGlyphRun)(h))
}

// NewQGlyphRun constructs a new QGlyphRun object.
func NewQGlyphRun() *QGlyphRun {
	ret := C.QGlyphRun_new()
	return newQGlyphRun(ret)
}

// NewQGlyphRun2 constructs a new QGlyphRun object.
func NewQGlyphRun2(other *QGlyphRun) *QGlyphRun {
	ret := C.QGlyphRun_new2(other.cPointer())
	return newQGlyphRun(ret)
}

func (this *QGlyphRun) OperatorAssign(other *QGlyphRun) {
	C.QGlyphRun_OperatorAssign(this.h, other.cPointer())
}

func (this *QGlyphRun) Swap(other *QGlyphRun) {
	C.QGlyphRun_Swap(this.h, other.cPointer())
}

func (this *QGlyphRun) RawFont() *QRawFont {
	ret := C.QGlyphRun_RawFont(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRawFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRawFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGlyphRun) SetRawFont(rawFont *QRawFont) {
	C.QGlyphRun_SetRawFont(this.h, rawFont.cPointer())
}

func (this *QGlyphRun) SetRawData(glyphIndexArray *uint, glyphPositionArray *QPointF, size int) {
	C.QGlyphRun_SetRawData(this.h, (*C.uint)(unsafe.Pointer(glyphIndexArray)), glyphPositionArray.cPointer(), (C.int)(size))
}

func (this *QGlyphRun) GlyphIndexes() []uint {
	var _out *C.uint = nil
	var _out_len C.size_t = 0
	C.QGlyphRun_GlyphIndexes(this.h, &_out, &_out_len)
	ret := make([]uint, int(_out_len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (uint)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGlyphRun) SetGlyphIndexes(glyphIndexes []uint) {
	// For the C ABI, malloc a C array of raw pointers
	glyphIndexes_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(glyphIndexes))))
	defer C.free(unsafe.Pointer(glyphIndexes_CArray))
	for i := range glyphIndexes {
		glyphIndexes_CArray[i] = (C.uint)(glyphIndexes[i])
	}
	C.QGlyphRun_SetGlyphIndexes(this.h, &glyphIndexes_CArray[0], C.size_t(len(glyphIndexes)))
}

func (this *QGlyphRun) Positions() []QPointF {
	var _out **C.QPointF = nil
	var _out_len C.size_t = 0
	C.QGlyphRun_Positions(this.h, &_out, &_out_len)
	ret := make([]QPointF, int(_out_len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQPointF(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGlyphRun) SetPositions(positions []QPointF) {
	// For the C ABI, malloc a C array of raw pointers
	positions_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = positions[i].cPointer()
	}
	C.QGlyphRun_SetPositions(this.h, &positions_CArray[0], C.size_t(len(positions)))
}

func (this *QGlyphRun) Clear() {
	C.QGlyphRun_Clear(this.h)
}

func (this *QGlyphRun) OperatorEqual(other *QGlyphRun) bool {
	ret := C.QGlyphRun_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QGlyphRun) OperatorNotEqual(other *QGlyphRun) bool {
	ret := C.QGlyphRun_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QGlyphRun) SetOverline(overline bool) {
	C.QGlyphRun_SetOverline(this.h, (C.bool)(overline))
}

func (this *QGlyphRun) Overline() bool {
	ret := C.QGlyphRun_Overline(this.h)
	return (bool)(ret)
}

func (this *QGlyphRun) SetUnderline(underline bool) {
	C.QGlyphRun_SetUnderline(this.h, (C.bool)(underline))
}

func (this *QGlyphRun) Underline() bool {
	ret := C.QGlyphRun_Underline(this.h)
	return (bool)(ret)
}

func (this *QGlyphRun) SetStrikeOut(strikeOut bool) {
	C.QGlyphRun_SetStrikeOut(this.h, (C.bool)(strikeOut))
}

func (this *QGlyphRun) StrikeOut() bool {
	ret := C.QGlyphRun_StrikeOut(this.h)
	return (bool)(ret)
}

func (this *QGlyphRun) SetRightToLeft(on bool) {
	C.QGlyphRun_SetRightToLeft(this.h, (C.bool)(on))
}

func (this *QGlyphRun) IsRightToLeft() bool {
	ret := C.QGlyphRun_IsRightToLeft(this.h)
	return (bool)(ret)
}

func (this *QGlyphRun) SetFlag(flag uintptr) {
	C.QGlyphRun_SetFlag(this.h, (C.uintptr_t)(flag))
}

func (this *QGlyphRun) SetFlags(flags int) {
	C.QGlyphRun_SetFlags(this.h, (C.int)(flags))
}

func (this *QGlyphRun) Flags() int {
	ret := C.QGlyphRun_Flags(this.h)
	return (int)(ret)
}

func (this *QGlyphRun) SetBoundingRect(boundingRect *QRectF) {
	C.QGlyphRun_SetBoundingRect(this.h, boundingRect.cPointer())
}

func (this *QGlyphRun) BoundingRect() *QRectF {
	ret := C.QGlyphRun_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGlyphRun) IsEmpty() bool {
	ret := C.QGlyphRun_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QGlyphRun) SetFlag2(flag uintptr, enabled bool) {
	C.QGlyphRun_SetFlag2(this.h, (C.uintptr_t)(flag), (C.bool)(enabled))
}

func (this *QGlyphRun) Delete() {
	C.QGlyphRun_Delete(this.h)
}
