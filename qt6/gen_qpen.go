package qt6

/*

#include "gen_qpen.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPen struct {
	h  *C.QPen
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPen) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPen) cPointer() *C.QPen {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPen) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPen constructs the type using only CGO pointers.
func newQPen(h *C.QPen) *QPen {
	if h == nil {
		return nil
	}

	return &QPen{h: h}
}

// UnsafeNewQPen constructs the type using only unsafe pointers.
func UnsafeNewQPen(h unsafe.Pointer) *QPen {
	return newQPen((*C.QPen)(h))
}

// NewQPen constructs a new QPen object.
func NewQPen() *QPen {

	return newQPen(C.QPen_new())
}

// NewQPen2 constructs a new QPen object.
func NewQPen2(param1 PenStyle) *QPen {

	return newQPen(C.QPen_new2((C.int)(param1)))
}

// NewQPen3 constructs a new QPen object.
func NewQPen3(color *QColor) *QPen {
	defer runtime.KeepAlive(color)

	return newQPen(C.QPen_new3(color.cPointer()))
}

// NewQPen4 constructs a new QPen object.
func NewQPen4(brush *QBrush, width float64) *QPen {
	defer runtime.KeepAlive(brush)

	return newQPen(C.QPen_new4(brush.cPointer(), (C.double)(width)))
}

// NewQPen5 constructs a new QPen object.
func NewQPen5(pen *QPen) *QPen {
	defer runtime.KeepAlive(pen)

	return newQPen(C.QPen_new5(pen.cPointer()))
}

// NewQPen6 constructs a new QPen object.
func NewQPen6(brush *QBrush, width float64, s PenStyle) *QPen {
	defer runtime.KeepAlive(brush)

	return newQPen(C.QPen_new6(brush.cPointer(), (C.double)(width), (C.int)(s)))
}

// NewQPen7 constructs a new QPen object.
func NewQPen7(brush *QBrush, width float64, s PenStyle, c PenCapStyle) *QPen {
	defer runtime.KeepAlive(brush)

	return newQPen(C.QPen_new7(brush.cPointer(), (C.double)(width), (C.int)(s), (C.int)(c)))
}

// NewQPen8 constructs a new QPen object.
func NewQPen8(brush *QBrush, width float64, s PenStyle, c PenCapStyle, j PenJoinStyle) *QPen {
	defer runtime.KeepAlive(brush)

	return newQPen(C.QPen_new8(brush.cPointer(), (C.double)(width), (C.int)(s), (C.int)(c), (C.int)(j)))
}

func (this *QPen) OperatorAssign(pen *QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pen)
	C.QPen_operatorAssign(this.h, pen.cPointer())
}

func (this *QPen) Swap(other *QPen) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPen_swap(this.h, other.cPointer())
}

func (this *QPen) Style() PenStyle {
	defer runtime.KeepAlive(this)
	return (PenStyle)(C.QPen_style(this.h))
}

func (this *QPen) SetStyle(style PenStyle) {
	defer runtime.KeepAlive(this)
	C.QPen_setStyle(this.h, (C.int)(style))
}

func (this *QPen) DashPattern() []float64 {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QPen_dashPattern(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := unsafe.Slice((*C.double)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QPen) SetDashPattern(pattern []float64) {
	defer runtime.KeepAlive(this)
	pattern_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(pattern))))
	defer C.free(unsafe.Pointer(pattern_CArray_ptr))
	pattern_CArray := unsafe.Slice(pattern_CArray_ptr, len(pattern))
	for i := range pattern {
		pattern_CArray[i] = (C.double)(pattern[i])
	}
	pattern_ma := C.struct_miqt_array{len: C.size_t(len(pattern)), data: unsafe.Pointer(pattern_CArray_ptr)}
	C.QPen_setDashPattern(this.h, pattern_ma)
}

func (this *QPen) DashOffset() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPen_dashOffset(this.h))
}

func (this *QPen) SetDashOffset(doffset float64) {
	defer runtime.KeepAlive(this)
	C.QPen_setDashOffset(this.h, (C.double)(doffset))
}

func (this *QPen) MiterLimit() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPen_miterLimit(this.h))
}

func (this *QPen) SetMiterLimit(limit float64) {
	defer runtime.KeepAlive(this)
	C.QPen_setMiterLimit(this.h, (C.double)(limit))
}

func (this *QPen) WidthF() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPen_widthF(this.h))
}

func (this *QPen) SetWidthF(width float64) {
	defer runtime.KeepAlive(this)
	C.QPen_setWidthF(this.h, (C.double)(width))
}

func (this *QPen) Width() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPen_width(this.h))
}

func (this *QPen) SetWidth(width int) {
	defer runtime.KeepAlive(this)
	C.QPen_setWidth(this.h, (C.int)(width))
}

func (this *QPen) Color() *QColor {
	defer runtime.KeepAlive(this)
	_goptr := newQColor(C.QPen_color(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPen) SetColor(color *QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(color)
	C.QPen_setColor(this.h, color.cPointer())
}

func (this *QPen) Brush() *QBrush {
	defer runtime.KeepAlive(this)
	_goptr := newQBrush(C.QPen_brush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPen) SetBrush(brush *QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(brush)
	C.QPen_setBrush(this.h, brush.cPointer())
}

func (this *QPen) IsSolid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPen_isSolid(this.h))
}

func (this *QPen) CapStyle() PenCapStyle {
	defer runtime.KeepAlive(this)
	return (PenCapStyle)(C.QPen_capStyle(this.h))
}

func (this *QPen) SetCapStyle(pcs PenCapStyle) {
	defer runtime.KeepAlive(this)
	C.QPen_setCapStyle(this.h, (C.int)(pcs))
}

func (this *QPen) JoinStyle() PenJoinStyle {
	defer runtime.KeepAlive(this)
	return (PenJoinStyle)(C.QPen_joinStyle(this.h))
}

func (this *QPen) SetJoinStyle(pcs PenJoinStyle) {
	defer runtime.KeepAlive(this)
	C.QPen_setJoinStyle(this.h, (C.int)(pcs))
}

func (this *QPen) IsCosmetic() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPen_isCosmetic(this.h))
}

func (this *QPen) SetCosmetic(cosmetic bool) {
	defer runtime.KeepAlive(this)
	C.QPen_setCosmetic(this.h, (C.bool)(cosmetic))
}

func (this *QPen) OperatorEqual(p *QPen) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QPen_operatorEqual(this.h, p.cPointer()))
}

func (this *QPen) OperatorNotEqual(p *QPen) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QPen_operatorNotEqual(this.h, p.cPointer()))
}

func (this *QPen) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QPen_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPen) IsDetached() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPen_isDetached(this.h))
}

// Delete this object from C++ memory.
func (this *QPen) Delete() {
	C.QPen_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPen) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPen_delete((*C.QPen)(gc[0]))
	})
	this.miqtSetGC(gc)
}
