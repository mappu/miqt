package qt6

/*

#include "gen_qpoint.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPoint struct {
	h  *C.QPoint
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPoint) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPoint) cPointer() *C.QPoint {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPoint) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPoint constructs the type using only CGO pointers.
func newQPoint(h *C.QPoint) *QPoint {
	if h == nil {
		return nil
	}

	return &QPoint{h: h}
}

// UnsafeNewQPoint constructs the type using only unsafe pointers.
func UnsafeNewQPoint(h unsafe.Pointer) *QPoint {
	return newQPoint((*C.QPoint)(h))
}

// NewQPoint constructs a new QPoint object.
func NewQPoint() *QPoint {

	return newQPoint(C.QPoint_new())
}

// NewQPoint2 constructs a new QPoint object.
func NewQPoint2(xpos int, ypos int) *QPoint {

	return newQPoint(C.QPoint_new2((C.int)(xpos), (C.int)(ypos)))
}

// NewQPoint3 constructs a new QPoint object.
func NewQPoint3(param1 *QPoint) *QPoint {
	defer runtime.KeepAlive(param1)

	return newQPoint(C.QPoint_new3(param1.cPointer()))
}

func (this *QPoint) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPoint_isNull(this.h))
}

func (this *QPoint) X() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPoint_x(this.h))
}

func (this *QPoint) Y() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPoint_y(this.h))
}

func (this *QPoint) SetX(x int) {
	defer runtime.KeepAlive(this)
	C.QPoint_setX(this.h, (C.int)(x))
}

func (this *QPoint) SetY(y int) {
	defer runtime.KeepAlive(this)
	C.QPoint_setY(this.h, (C.int)(y))
}

func (this *QPoint) ManhattanLength() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPoint_manhattanLength(this.h))
}

func (this *QPoint) Transposed() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QPoint_transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPoint) OperatorPlusAssign(p *QPoint) *QPoint {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_ret := newQPoint(C.QPoint_operatorPlusAssign(this.h, p.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPoint) OperatorMinusAssign(p *QPoint) *QPoint {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_ret := newQPoint(C.QPoint_operatorMinusAssign(this.h, p.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPoint) OperatorMultiplyAssign(factor float32) *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QPoint_operatorMultiplyAssign(this.h, (C.float)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPoint) OperatorMultiplyAssignWithFactor(factor float64) *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QPoint_operatorMultiplyAssignWithFactor(this.h, (C.double)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPoint) OperatorMultiplyAssign2(factor int) *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QPoint_operatorMultiplyAssign2(this.h, (C.int)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPoint) OperatorDivideAssign(divisor float64) *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QPoint_operatorDivideAssign(this.h, (C.double)(divisor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func QPoint_DotProduct(p1 *QPoint, p2 *QPoint) int {
	defer runtime.KeepAlive(p1)
	defer runtime.KeepAlive(p2)
	return (int)(C.QPoint_dotProduct(p1.cPointer(), p2.cPointer()))
}

func (this *QPoint) ToPointF() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QPoint_toPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPoint) Delete() {
	C.QPoint_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPoint) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPoint_delete((*C.QPoint)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPointF struct {
	h  *C.QPointF
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPointF) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPointF) cPointer() *C.QPointF {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPointF) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPointF constructs the type using only CGO pointers.
func newQPointF(h *C.QPointF) *QPointF {
	if h == nil {
		return nil
	}

	return &QPointF{h: h}
}

// UnsafeNewQPointF constructs the type using only unsafe pointers.
func UnsafeNewQPointF(h unsafe.Pointer) *QPointF {
	return newQPointF((*C.QPointF)(h))
}

// NewQPointF constructs a new QPointF object.
func NewQPointF() *QPointF {

	return newQPointF(C.QPointF_new())
}

// NewQPointF2 constructs a new QPointF object.
func NewQPointF2(p *QPoint) *QPointF {
	defer runtime.KeepAlive(p)

	return newQPointF(C.QPointF_new2(p.cPointer()))
}

// NewQPointF3 constructs a new QPointF object.
func NewQPointF3(xpos float64, ypos float64) *QPointF {

	return newQPointF(C.QPointF_new3((C.double)(xpos), (C.double)(ypos)))
}

// NewQPointF4 constructs a new QPointF object.
func NewQPointF4(param1 *QPointF) *QPointF {
	defer runtime.KeepAlive(param1)

	return newQPointF(C.QPointF_new4(param1.cPointer()))
}

func (this *QPointF) ManhattanLength() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPointF_manhattanLength(this.h))
}

func (this *QPointF) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPointF_isNull(this.h))
}

func (this *QPointF) X() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPointF_x(this.h))
}

func (this *QPointF) Y() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPointF_y(this.h))
}

func (this *QPointF) SetX(x float64) {
	defer runtime.KeepAlive(this)
	C.QPointF_setX(this.h, (C.double)(x))
}

func (this *QPointF) SetY(y float64) {
	defer runtime.KeepAlive(this)
	C.QPointF_setY(this.h, (C.double)(y))
}

func (this *QPointF) Transposed() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QPointF_transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPointF) OperatorPlusAssign(p *QPointF) *QPointF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_ret := newQPointF(C.QPointF_operatorPlusAssign(this.h, p.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPointF) OperatorMinusAssign(p *QPointF) *QPointF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_ret := newQPointF(C.QPointF_operatorMinusAssign(this.h, p.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPointF) OperatorMultiplyAssign(c float64) *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QPointF_operatorMultiplyAssign(this.h, (C.double)(c)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPointF) OperatorDivideAssign(c float64) *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QPointF_operatorDivideAssign(this.h, (C.double)(c)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func QPointF_DotProduct(p1 *QPointF, p2 *QPointF) float64 {
	defer runtime.KeepAlive(p1)
	defer runtime.KeepAlive(p2)
	return (float64)(C.QPointF_dotProduct(p1.cPointer(), p2.cPointer()))
}

func (this *QPointF) ToPoint() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QPointF_toPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPointF) Delete() {
	C.QPointF_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPointF) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPointF_delete((*C.QPointF)(gc[0]))
	})
	this.miqtSetGC(gc)
}
