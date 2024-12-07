package qt6

/*

#include "gen_qglyphrun.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGlyphRun__GlyphRunFlag int

const (
	QGlyphRun__Overline      QGlyphRun__GlyphRunFlag = 1
	QGlyphRun__Underline     QGlyphRun__GlyphRunFlag = 2
	QGlyphRun__StrikeOut     QGlyphRun__GlyphRunFlag = 4
	QGlyphRun__RightToLeft   QGlyphRun__GlyphRunFlag = 8
	QGlyphRun__SplitLigature QGlyphRun__GlyphRunFlag = 16
)

type QGlyphRun struct {
	h          *C.QGlyphRun
	isSubclass bool
}

func (this *QGlyphRun) cPointer() *C.QGlyphRun {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGlyphRun) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGlyphRun constructs the type using only CGO pointers.
func newQGlyphRun(h *C.QGlyphRun) *QGlyphRun {
	if h == nil {
		return nil
	}

	return &QGlyphRun{h: h}
}

// UnsafeNewQGlyphRun constructs the type using only unsafe pointers.
func UnsafeNewQGlyphRun(h unsafe.Pointer) *QGlyphRun {
	return newQGlyphRun((*C.QGlyphRun)(h))
}

// NewQGlyphRun constructs a new QGlyphRun object.
func NewQGlyphRun() *QGlyphRun {

	ret := newQGlyphRun(C.QGlyphRun_new())
	ret.isSubclass = true
	return ret
}

// NewQGlyphRun2 constructs a new QGlyphRun object.
func NewQGlyphRun2(other *QGlyphRun) *QGlyphRun {

	ret := newQGlyphRun(C.QGlyphRun_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QGlyphRun) OperatorAssign(other *QGlyphRun) {
	C.QGlyphRun_OperatorAssign(this.h, other.cPointer())
}

func (this *QGlyphRun) Swap(other *QGlyphRun) {
	C.QGlyphRun_Swap(this.h, other.cPointer())
}

func (this *QGlyphRun) RawFont() *QRawFont {
	_goptr := newQRawFont(C.QGlyphRun_RawFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGlyphRun) SetRawFont(rawFont *QRawFont) {
	C.QGlyphRun_SetRawFont(this.h, rawFont.cPointer())
}

func (this *QGlyphRun) SetRawData(glyphIndexArray *uint, glyphPositionArray *QPointF, size int) {
	C.QGlyphRun_SetRawData(this.h, (*C.uint)(unsafe.Pointer(glyphIndexArray)), glyphPositionArray.cPointer(), (C.int)(size))
}

func (this *QGlyphRun) GlyphIndexes() []uint {
	var _ma C.struct_miqt_array = C.QGlyphRun_GlyphIndexes(this.h)
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret
}

func (this *QGlyphRun) SetGlyphIndexes(glyphIndexes []uint) {
	glyphIndexes_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(glyphIndexes))))
	defer C.free(unsafe.Pointer(glyphIndexes_CArray))
	for i := range glyphIndexes {
		glyphIndexes_CArray[i] = (C.uint)(glyphIndexes[i])
	}
	glyphIndexes_ma := C.struct_miqt_array{len: C.size_t(len(glyphIndexes)), data: unsafe.Pointer(glyphIndexes_CArray)}
	C.QGlyphRun_SetGlyphIndexes(this.h, glyphIndexes_ma)
}

func (this *QGlyphRun) Positions() []QPointF {
	var _ma C.struct_miqt_array = C.QGlyphRun_Positions(this.h)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQPointF(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QGlyphRun) SetPositions(positions []QPointF) {
	positions_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = positions[i].cPointer()
	}
	positions_ma := C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray)}
	C.QGlyphRun_SetPositions(this.h, positions_ma)
}

func (this *QGlyphRun) Clear() {
	C.QGlyphRun_Clear(this.h)
}

func (this *QGlyphRun) OperatorEqual(other *QGlyphRun) bool {
	return (bool)(C.QGlyphRun_OperatorEqual(this.h, other.cPointer()))
}

func (this *QGlyphRun) OperatorNotEqual(other *QGlyphRun) bool {
	return (bool)(C.QGlyphRun_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QGlyphRun) SetOverline(overline bool) {
	C.QGlyphRun_SetOverline(this.h, (C.bool)(overline))
}

func (this *QGlyphRun) Overline() bool {
	return (bool)(C.QGlyphRun_Overline(this.h))
}

func (this *QGlyphRun) SetUnderline(underline bool) {
	C.QGlyphRun_SetUnderline(this.h, (C.bool)(underline))
}

func (this *QGlyphRun) Underline() bool {
	return (bool)(C.QGlyphRun_Underline(this.h))
}

func (this *QGlyphRun) SetStrikeOut(strikeOut bool) {
	C.QGlyphRun_SetStrikeOut(this.h, (C.bool)(strikeOut))
}

func (this *QGlyphRun) StrikeOut() bool {
	return (bool)(C.QGlyphRun_StrikeOut(this.h))
}

func (this *QGlyphRun) SetRightToLeft(on bool) {
	C.QGlyphRun_SetRightToLeft(this.h, (C.bool)(on))
}

func (this *QGlyphRun) IsRightToLeft() bool {
	return (bool)(C.QGlyphRun_IsRightToLeft(this.h))
}

func (this *QGlyphRun) SetFlag(flag QGlyphRun__GlyphRunFlag) {
	C.QGlyphRun_SetFlag(this.h, (C.int)(flag))
}

func (this *QGlyphRun) SetFlags(flags QGlyphRun__GlyphRunFlag) {
	C.QGlyphRun_SetFlags(this.h, (C.int)(flags))
}

func (this *QGlyphRun) Flags() QGlyphRun__GlyphRunFlag {
	return (QGlyphRun__GlyphRunFlag)(C.QGlyphRun_Flags(this.h))
}

func (this *QGlyphRun) SetBoundingRect(boundingRect *QRectF) {
	C.QGlyphRun_SetBoundingRect(this.h, boundingRect.cPointer())
}

func (this *QGlyphRun) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGlyphRun_BoundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGlyphRun) IsEmpty() bool {
	return (bool)(C.QGlyphRun_IsEmpty(this.h))
}

func (this *QGlyphRun) SetFlag2(flag QGlyphRun__GlyphRunFlag, enabled bool) {
	C.QGlyphRun_SetFlag2(this.h, (C.int)(flag), (C.bool)(enabled))
}

// Delete this object from C++ memory.
func (this *QGlyphRun) Delete() {
	C.QGlyphRun_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGlyphRun) GoGC() {
	runtime.SetFinalizer(this, func(this *QGlyphRun) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
