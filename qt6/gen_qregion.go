package qt6

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
	h  *C.QRegion
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QRegion) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(r)

	return newQRegion(C.QRegion_new3(r.cPointer()))
}

// NewQRegion4 constructs a new QRegion object.
func NewQRegion4(region *QRegion) *QRegion {
	defer runtime.KeepAlive(region)

	return newQRegion(C.QRegion_new4(region.cPointer()))
}

// NewQRegion5 constructs a new QRegion object.
func NewQRegion5(bitmap *QBitmap) *QRegion {
	defer runtime.KeepAlive(bitmap)

	return newQRegion(C.QRegion_new5(bitmap.cPointer()))
}

// NewQRegion6 constructs a new QRegion object.
func NewQRegion6(x int, y int, w int, h int, t QRegion__RegionType) *QRegion {

	return newQRegion(C.QRegion_new6((C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(t)))
}

// NewQRegion7 constructs a new QRegion object.
func NewQRegion7(r *QRect, t QRegion__RegionType) *QRegion {
	defer runtime.KeepAlive(r)

	return newQRegion(C.QRegion_new7(r.cPointer(), (C.int)(t)))
}

func (this *QRegion) OperatorAssign(param1 *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QRegion_operatorAssign(this.h, param1.cPointer())
}

func (this *QRegion) Swap(other *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QRegion_swap(this.h, other.cPointer())
}

func (this *QRegion) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRegion_isEmpty(this.h))
}

func (this *QRegion) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRegion_isNull(this.h))
}

func (this *QRegion) Begin() *QRect {
	defer runtime.KeepAlive(this)
	return newQRect(C.QRegion_begin(this.h))
}

func (this *QRegion) Cbegin() *QRect {
	defer runtime.KeepAlive(this)
	return newQRect(C.QRegion_cbegin(this.h))
}

func (this *QRegion) End() *QRect {
	defer runtime.KeepAlive(this)
	return newQRect(C.QRegion_end(this.h))
}

func (this *QRegion) Cend() *QRect {
	defer runtime.KeepAlive(this)
	return newQRect(C.QRegion_cend(this.h))
}

func (this *QRegion) Contains(p *QPoint) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QRegion_contains(this.h, p.cPointer()))
}

func (this *QRegion) ContainsWithQRect(r *QRect) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRegion_containsWithQRect(this.h, r.cPointer()))
}

func (this *QRegion) Translate(dx int, dy int) {
	defer runtime.KeepAlive(this)
	C.QRegion_translate(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QRegion) TranslateWithQPoint(p *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	C.QRegion_translateWithQPoint(this.h, p.cPointer())
}

func (this *QRegion) Translated(dx int, dy int) *QRegion {
	defer runtime.KeepAlive(this)
	_goptr := newQRegion(C.QRegion_translated(this.h, (C.int)(dx), (C.int)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) TranslatedWithQPoint(p *QPoint) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_goptr := newQRegion(C.QRegion_translatedWithQPoint(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) United(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_united(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) UnitedWithQRect(r *QRect) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_unitedWithQRect(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Intersected(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_intersected(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) IntersectedWithQRect(r *QRect) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_intersectedWithQRect(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Subtracted(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_subtracted(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Xored(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_xored(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Intersects(r *QRegion) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRegion_intersects(this.h, r.cPointer()))
}

func (this *QRegion) IntersectsWithQRect(r *QRect) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRegion_intersectsWithQRect(this.h, r.cPointer()))
}

func (this *QRegion) BoundingRect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QRegion_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) SetRects(rect *QRect, num int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rect)
	C.QRegion_setRects(this.h, rect.cPointer(), (C.int)(num))
}

func (this *QRegion) RectCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRegion_rectCount(this.h))
}

func (this *QRegion) OperatorBitwiseOr(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_operatorBitwiseOr(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorPlus(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_operatorPlus(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorPlusWithQRect(r *QRect) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_operatorPlusWithQRect(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseAnd(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_operatorBitwiseAnd(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseAndWithQRect(r *QRect) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_operatorBitwiseAndWithQRect(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorMinus(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_operatorMinus(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseNot(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QRegion_operatorBitwiseNot(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseOrAssign(r *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QRegion_operatorBitwiseOrAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorPlusAssign(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_ret := newQRegion(C.QRegion_operatorPlusAssign(this.h, r.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QRegion) OperatorPlusAssignWithQRect(r *QRect) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_ret := newQRegion(C.QRegion_operatorPlusAssignWithQRect(this.h, r.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QRegion) OperatorBitwiseAndAssign(r *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QRegion_operatorBitwiseAndAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorBitwiseAndAssignWithQRect(r *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QRegion_operatorBitwiseAndAssignWithQRect(this.h, r.cPointer())
}

func (this *QRegion) OperatorMinusAssign(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_ret := newQRegion(C.QRegion_operatorMinusAssign(this.h, r.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QRegion) OperatorBitwiseNotAssign(r *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QRegion_operatorBitwiseNotAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorEqual(r *QRegion) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRegion_operatorEqual(this.h, r.cPointer()))
}

func (this *QRegion) OperatorNotEqual(r *QRegion) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	return (bool)(C.QRegion_operatorNotEqual(this.h, r.cPointer()))
}

func (this *QRegion) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QRegion_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QRegion) Delete() {
	C.QRegion_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QRegion) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QRegion_delete((*C.QRegion)(gc[0]))
	})
	this.miqtSetGC(gc)
}
