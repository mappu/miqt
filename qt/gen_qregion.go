package qt

/*

#include "gen_qregion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRegion__RegionType int

const (
	QRegion__Rectangle QRegion__RegionType = 0
	QRegion__Ellipse   QRegion__RegionType = 1
)

type QRegion struct {
	h *C.QRegion
}

func (this *QRegion) cPointer() *C.QRegion {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRegion) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRegion constructs the type using only CGO pointers.
func newQRegion(h *C.QRegion) *QRegion {
	if h == nil {
		return nil
	}

	return &QRegion{h: h}
}

// UnsafeNewQRegion constructs the type using only unsafe pointers.
func UnsafeNewQRegion(h unsafe.Pointer) *QRegion {
	return newQRegion((*C.QRegion)(h))
}

// NewQRegion constructs a new QRegion object.
func NewQRegion() *QRegion {

	return newQRegion(C.QRegion_new())
}

// NewQRegion2 constructs a new QRegion object.
func NewQRegion2(x int, y int, w int, h int) *QRegion {

	return newQRegion(C.QRegion_new2((C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h)))
}

// NewQRegion3 constructs a new QRegion object.
func NewQRegion3(r *QRect) *QRegion {

	return newQRegion(C.QRegion_new3(r.cPointer()))
}

// NewQRegion4 constructs a new QRegion object.
func NewQRegion4(region *QRegion) *QRegion {

	return newQRegion(C.QRegion_new4(region.cPointer()))
}

// NewQRegion5 constructs a new QRegion object.
func NewQRegion5(bitmap *QBitmap) *QRegion {

	return newQRegion(C.QRegion_new5(bitmap.cPointer()))
}

// NewQRegion6 constructs a new QRegion object.
func NewQRegion6(x int, y int, w int, h int, t QRegion__RegionType) *QRegion {

	return newQRegion(C.QRegion_new6((C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(t)))
}

// NewQRegion7 constructs a new QRegion object.
func NewQRegion7(r *QRect, t QRegion__RegionType) *QRegion {

	return newQRegion(C.QRegion_new7(r.cPointer(), (C.int)(t)))
}

func (this *QRegion) OperatorAssign(param1 *QRegion) {
	C.QRegion_operatorAssign(this.h, param1.cPointer())
}

func (this *QRegion) Swap(other *QRegion) {
	C.QRegion_swap(this.h, other.cPointer())
}

func (this *QRegion) IsEmpty() bool {
	return (bool)(C.QRegion_isEmpty(this.h))
}

func (this *QRegion) IsNull() bool {
	return (bool)(C.QRegion_isNull(this.h))
}

func (this *QRegion) Begin() *QRect {
	return newQRect(C.QRegion_begin(this.h))
}

func (this *QRegion) Cbegin() *QRect {
	return newQRect(C.QRegion_cbegin(this.h))
}

func (this *QRegion) End() *QRect {
	return newQRect(C.QRegion_end(this.h))
}

func (this *QRegion) Cend() *QRect {
	return newQRect(C.QRegion_cend(this.h))
}

func (this *QRegion) Contains(p *QPoint) bool {
	return (bool)(C.QRegion_contains(this.h, p.cPointer()))
}

func (this *QRegion) ContainsWithQRect(r *QRect) bool {
	return (bool)(C.QRegion_containsWithQRect(this.h, r.cPointer()))
}

func (this *QRegion) Translate(dx int, dy int) {
	C.QRegion_translate(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QRegion) TranslateWithQPoint(p *QPoint) {
	C.QRegion_translateWithQPoint(this.h, p.cPointer())
}

func (this *QRegion) Translated(dx int, dy int) *QRegion {
	_goptr := newQRegion(C.QRegion_translated(this.h, (C.int)(dx), (C.int)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) TranslatedWithQPoint(p *QPoint) *QRegion {
	_goptr := newQRegion(C.QRegion_translatedWithQPoint(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) United(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_united(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) UnitedWithQRect(r *QRect) *QRegion {
	_goptr := newQRegion(C.QRegion_unitedWithQRect(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Intersected(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_intersected(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) IntersectedWithQRect(r *QRect) *QRegion {
	_goptr := newQRegion(C.QRegion_intersectedWithQRect(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Subtracted(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_subtracted(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Xored(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_xored(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Intersects(r *QRegion) bool {
	return (bool)(C.QRegion_intersects(this.h, r.cPointer()))
}

func (this *QRegion) IntersectsWithQRect(r *QRect) bool {
	return (bool)(C.QRegion_intersectsWithQRect(this.h, r.cPointer()))
}

func (this *QRegion) BoundingRect() *QRect {
	_goptr := newQRect(C.QRegion_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Rects() []QRect {
	var _ma C.struct_miqt_array = C.QRegion_rects(this.h)
	_ret := make([]QRect, int(_ma.len))
	_outCast := (*[0xffff]*C.QRect)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQRect(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QRegion) SetRects(rect *QRect, num int) {
	C.QRegion_setRects(this.h, rect.cPointer(), (C.int)(num))
}

func (this *QRegion) RectCount() int {
	return (int)(C.QRegion_rectCount(this.h))
}

func (this *QRegion) OperatorBitwiseOr(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_operatorBitwiseOr(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorPlus(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_operatorPlus(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorPlusWithQRect(r *QRect) *QRegion {
	_goptr := newQRegion(C.QRegion_operatorPlusWithQRect(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseAnd(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_operatorBitwiseAnd(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseAndWithQRect(r *QRect) *QRegion {
	_goptr := newQRegion(C.QRegion_operatorBitwiseAndWithQRect(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorMinus(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_operatorMinus(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseNot(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QRegion_operatorBitwiseNot(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseOrAssign(r *QRegion) {
	C.QRegion_operatorBitwiseOrAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorPlusAssign(r *QRegion) *QRegion {
	return newQRegion(C.QRegion_operatorPlusAssign(this.h, r.cPointer()))
}

func (this *QRegion) OperatorPlusAssignWithQRect(r *QRect) *QRegion {
	return newQRegion(C.QRegion_operatorPlusAssignWithQRect(this.h, r.cPointer()))
}

func (this *QRegion) OperatorBitwiseAndAssign(r *QRegion) {
	C.QRegion_operatorBitwiseAndAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorBitwiseAndAssignWithQRect(r *QRect) {
	C.QRegion_operatorBitwiseAndAssignWithQRect(this.h, r.cPointer())
}

func (this *QRegion) OperatorMinusAssign(r *QRegion) *QRegion {
	return newQRegion(C.QRegion_operatorMinusAssign(this.h, r.cPointer()))
}

func (this *QRegion) OperatorBitwiseNotAssign(r *QRegion) {
	C.QRegion_operatorBitwiseNotAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorEqual(r *QRegion) bool {
	return (bool)(C.QRegion_operatorEqual(this.h, r.cPointer()))
}

func (this *QRegion) OperatorNotEqual(r *QRegion) bool {
	return (bool)(C.QRegion_operatorNotEqual(this.h, r.cPointer()))
}

func (this *QRegion) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QRegion_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QRegion) Delete() {
	C.QRegion_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegion) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegion) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
