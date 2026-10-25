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

type QGlyphRun__GlyphRunFlag int

const (
	QGlyphRun__Overline      QGlyphRun__GlyphRunFlag = 1
	QGlyphRun__Underline     QGlyphRun__GlyphRunFlag = 2
	QGlyphRun__StrikeOut     QGlyphRun__GlyphRunFlag = 4
	QGlyphRun__RightToLeft   QGlyphRun__GlyphRunFlag = 8
	QGlyphRun__SplitLigature QGlyphRun__GlyphRunFlag = 16
)

type QGlyphRun struct {
	h  *C.QGlyphRun
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGlyphRun) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQGlyphRun(C.QGlyphRun_new())
}

// NewQGlyphRun2 constructs a new QGlyphRun object.
func NewQGlyphRun2(other *QGlyphRun) *QGlyphRun {
	defer runtime.KeepAlive(other)

	return newQGlyphRun(C.QGlyphRun_new2(other.cPointer()))
}

func (this *QGlyphRun) OperatorAssign(other *QGlyphRun) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGlyphRun_operatorAssign(this.h, other.cPointer())
}

func (this *QGlyphRun) Swap(other *QGlyphRun) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGlyphRun_swap(this.h, other.cPointer())
}

func (this *QGlyphRun) RawFont() *QRawFont {
	defer runtime.KeepAlive(this)
	_goptr := newQRawFont(C.QGlyphRun_rawFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGlyphRun) SetRawFont(rawFont *QRawFont) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rawFont)
	C.QGlyphRun_setRawFont(this.h, rawFont.cPointer())
}

func (this *QGlyphRun) SetRawData(glyphIndexArray *uint, glyphPositionArray *QPointF, size int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(glyphPositionArray)
	C.QGlyphRun_setRawData(this.h, (*C.uint)(unsafe.Pointer(glyphIndexArray)), glyphPositionArray.cPointer(), (C.int)(size))
}

func (this *QGlyphRun) GlyphIndexes() []uint {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QGlyphRun_glyphIndexes(this.h)
	_ret := make([]uint, int(_ma.len))
	_outCast := unsafe.Slice((*C.uint)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret
}

func (this *QGlyphRun) SetGlyphIndexes(glyphIndexes []uint) {
	defer runtime.KeepAlive(this)
	glyphIndexes_CArray_ptr := (*C.uint)(C.malloc(C.size_t(8 * len(glyphIndexes))))
	defer C.free(unsafe.Pointer(glyphIndexes_CArray_ptr))
	glyphIndexes_CArray := unsafe.Slice(glyphIndexes_CArray_ptr, len(glyphIndexes))
	for i := range glyphIndexes {
		glyphIndexes_CArray[i] = (C.uint)(glyphIndexes[i])
	}
	glyphIndexes_ma := C.struct_miqt_array{len: C.size_t(len(glyphIndexes)), data: unsafe.Pointer(glyphIndexes_CArray_ptr)}
	C.QGlyphRun_setGlyphIndexes(this.h, glyphIndexes_ma)
}

func (this *QGlyphRun) Positions() []QPointF {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QGlyphRun_positions(this.h)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := unsafe.Slice((**C.QPointF)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQPointF(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QGlyphRun) SetPositions(positions []QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(positions)
	positions_CArray_ptr := (**C.QPointF)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray_ptr))
	positions_CArray := unsafe.Slice(positions_CArray_ptr, len(positions))
	for i := range positions {
		positions_CArray[i] = positions[i].cPointer()
	}
	positions_ma := C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray_ptr)}
	C.QGlyphRun_setPositions(this.h, positions_ma)
}

func (this *QGlyphRun) Clear() {
	defer runtime.KeepAlive(this)
	C.QGlyphRun_clear(this.h)
}

func (this *QGlyphRun) OperatorEqual(other *QGlyphRun) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGlyphRun_operatorEqual(this.h, other.cPointer()))
}

func (this *QGlyphRun) OperatorNotEqual(other *QGlyphRun) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGlyphRun_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGlyphRun) SetOverline(overline bool) {
	defer runtime.KeepAlive(this)
	C.QGlyphRun_setOverline(this.h, (C.bool)(overline))
}

func (this *QGlyphRun) Overline() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGlyphRun_overline(this.h))
}

func (this *QGlyphRun) SetUnderline(underline bool) {
	defer runtime.KeepAlive(this)
	C.QGlyphRun_setUnderline(this.h, (C.bool)(underline))
}

func (this *QGlyphRun) Underline() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGlyphRun_underline(this.h))
}

func (this *QGlyphRun) SetStrikeOut(strikeOut bool) {
	defer runtime.KeepAlive(this)
	C.QGlyphRun_setStrikeOut(this.h, (C.bool)(strikeOut))
}

func (this *QGlyphRun) StrikeOut() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGlyphRun_strikeOut(this.h))
}

func (this *QGlyphRun) SetRightToLeft(on bool) {
	defer runtime.KeepAlive(this)
	C.QGlyphRun_setRightToLeft(this.h, (C.bool)(on))
}

func (this *QGlyphRun) IsRightToLeft() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGlyphRun_isRightToLeft(this.h))
}

func (this *QGlyphRun) SetFlag(flag QGlyphRun__GlyphRunFlag) {
	defer runtime.KeepAlive(this)
	C.QGlyphRun_setFlag(this.h, (C.int)(flag))
}

func (this *QGlyphRun) SetFlags(flags QGlyphRun__GlyphRunFlag) {
	defer runtime.KeepAlive(this)
	C.QGlyphRun_setFlags(this.h, (C.int)(flags))
}

func (this *QGlyphRun) Flags() QGlyphRun__GlyphRunFlag {
	defer runtime.KeepAlive(this)
	return (QGlyphRun__GlyphRunFlag)(C.QGlyphRun_flags(this.h))
}

func (this *QGlyphRun) SetBoundingRect(boundingRect *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(boundingRect)
	C.QGlyphRun_setBoundingRect(this.h, boundingRect.cPointer())
}

func (this *QGlyphRun) BoundingRect() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QGlyphRun_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGlyphRun) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGlyphRun_isEmpty(this.h))
}

func (this *QGlyphRun) SetFlag2(flag QGlyphRun__GlyphRunFlag, enabled bool) {
	defer runtime.KeepAlive(this)
	C.QGlyphRun_setFlag2(this.h, (C.int)(flag), (C.bool)(enabled))
}

// Delete this object from C++ memory.
func (this *QGlyphRun) Delete() {
	C.QGlyphRun_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGlyphRun) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGlyphRun_delete((*C.QGlyphRun)(gc[0]))
	})
	this.miqtSetGC(gc)
}
