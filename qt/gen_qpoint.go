package qt

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
	h *C.QPoint
}

func (this *QPoint) cPointer() *C.QPoint {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPoint(h *C.QPoint) *QPoint {
	if h == nil {
		return nil
	}
	return &QPoint{h: h}
}

func newQPoint_U(h unsafe.Pointer) *QPoint {
	return newQPoint((*C.QPoint)(h))
}

// NewQPoint constructs a new QPoint object.
func NewQPoint() *QPoint {
	ret := C.QPoint_new()
	return newQPoint(ret)
}

// NewQPoint2 constructs a new QPoint object.
func NewQPoint2(xpos int, ypos int) *QPoint {
	ret := C.QPoint_new2((C.int)(xpos), (C.int)(ypos))
	return newQPoint(ret)
}

// NewQPoint3 constructs a new QPoint object.
func NewQPoint3(param1 *QPoint) *QPoint {
	ret := C.QPoint_new3(param1.cPointer())
	return newQPoint(ret)
}

func (this *QPoint) IsNull() bool {
	_ret := C.QPoint_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QPoint) X() int {
	_ret := C.QPoint_X(this.h)
	return (int)(_ret)
}

func (this *QPoint) Y() int {
	_ret := C.QPoint_Y(this.h)
	return (int)(_ret)
}

func (this *QPoint) SetX(x int) {
	C.QPoint_SetX(this.h, (C.int)(x))
}

func (this *QPoint) SetY(y int) {
	C.QPoint_SetY(this.h, (C.int)(y))
}

func (this *QPoint) ManhattanLength() int {
	_ret := C.QPoint_ManhattanLength(this.h)
	return (int)(_ret)
}

func (this *QPoint) Transposed() *QPoint {
	_ret := C.QPoint_Transposed(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPoint) OperatorPlusAssign(p *QPoint) *QPoint {
	_ret := C.QPoint_OperatorPlusAssign(this.h, p.cPointer())
	return newQPoint_U(unsafe.Pointer(_ret))
}

func (this *QPoint) OperatorMinusAssign(p *QPoint) *QPoint {
	_ret := C.QPoint_OperatorMinusAssign(this.h, p.cPointer())
	return newQPoint_U(unsafe.Pointer(_ret))
}

func (this *QPoint) OperatorMultiplyAssign(factor float32) *QPoint {
	_ret := C.QPoint_OperatorMultiplyAssign(this.h, (C.float)(factor))
	return newQPoint_U(unsafe.Pointer(_ret))
}

func (this *QPoint) OperatorMultiplyAssignWithFactor(factor float64) *QPoint {
	_ret := C.QPoint_OperatorMultiplyAssignWithFactor(this.h, (C.double)(factor))
	return newQPoint_U(unsafe.Pointer(_ret))
}

func (this *QPoint) OperatorMultiplyAssign2(factor int) *QPoint {
	_ret := C.QPoint_OperatorMultiplyAssign2(this.h, (C.int)(factor))
	return newQPoint_U(unsafe.Pointer(_ret))
}

func (this *QPoint) OperatorDivideAssign(divisor float64) *QPoint {
	_ret := C.QPoint_OperatorDivideAssign(this.h, (C.double)(divisor))
	return newQPoint_U(unsafe.Pointer(_ret))
}

func QPoint_DotProduct(p1 *QPoint, p2 *QPoint) int {
	_ret := C.QPoint_DotProduct(p1.cPointer(), p2.cPointer())
	return (int)(_ret)
}

// Delete this object from C++ memory.
func (this *QPoint) Delete() {
	C.QPoint_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPoint) GoGC() {
	runtime.SetFinalizer(this, func(this *QPoint) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPointF struct {
	h *C.QPointF
}

func (this *QPointF) cPointer() *C.QPointF {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPointF(h *C.QPointF) *QPointF {
	if h == nil {
		return nil
	}
	return &QPointF{h: h}
}

func newQPointF_U(h unsafe.Pointer) *QPointF {
	return newQPointF((*C.QPointF)(h))
}

// NewQPointF constructs a new QPointF object.
func NewQPointF() *QPointF {
	ret := C.QPointF_new()
	return newQPointF(ret)
}

// NewQPointF2 constructs a new QPointF object.
func NewQPointF2(p *QPoint) *QPointF {
	ret := C.QPointF_new2(p.cPointer())
	return newQPointF(ret)
}

// NewQPointF3 constructs a new QPointF object.
func NewQPointF3(xpos float64, ypos float64) *QPointF {
	ret := C.QPointF_new3((C.double)(xpos), (C.double)(ypos))
	return newQPointF(ret)
}

// NewQPointF4 constructs a new QPointF object.
func NewQPointF4(param1 *QPointF) *QPointF {
	ret := C.QPointF_new4(param1.cPointer())
	return newQPointF(ret)
}

func (this *QPointF) ManhattanLength() float64 {
	_ret := C.QPointF_ManhattanLength(this.h)
	return (float64)(_ret)
}

func (this *QPointF) IsNull() bool {
	_ret := C.QPointF_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QPointF) X() float64 {
	_ret := C.QPointF_X(this.h)
	return (float64)(_ret)
}

func (this *QPointF) Y() float64 {
	_ret := C.QPointF_Y(this.h)
	return (float64)(_ret)
}

func (this *QPointF) SetX(x float64) {
	C.QPointF_SetX(this.h, (C.double)(x))
}

func (this *QPointF) SetY(y float64) {
	C.QPointF_SetY(this.h, (C.double)(y))
}

func (this *QPointF) Transposed() *QPointF {
	_ret := C.QPointF_Transposed(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPointF) OperatorPlusAssign(p *QPointF) *QPointF {
	_ret := C.QPointF_OperatorPlusAssign(this.h, p.cPointer())
	return newQPointF_U(unsafe.Pointer(_ret))
}

func (this *QPointF) OperatorMinusAssign(p *QPointF) *QPointF {
	_ret := C.QPointF_OperatorMinusAssign(this.h, p.cPointer())
	return newQPointF_U(unsafe.Pointer(_ret))
}

func (this *QPointF) OperatorMultiplyAssign(c float64) *QPointF {
	_ret := C.QPointF_OperatorMultiplyAssign(this.h, (C.double)(c))
	return newQPointF_U(unsafe.Pointer(_ret))
}

func (this *QPointF) OperatorDivideAssign(c float64) *QPointF {
	_ret := C.QPointF_OperatorDivideAssign(this.h, (C.double)(c))
	return newQPointF_U(unsafe.Pointer(_ret))
}

func QPointF_DotProduct(p1 *QPointF, p2 *QPointF) float64 {
	_ret := C.QPointF_DotProduct(p1.cPointer(), p2.cPointer())
	return (float64)(_ret)
}

func (this *QPointF) ToPoint() *QPoint {
	_ret := C.QPointF_ToPoint(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPointF) Delete() {
	C.QPointF_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPointF) GoGC() {
	runtime.SetFinalizer(this, func(this *QPointF) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
