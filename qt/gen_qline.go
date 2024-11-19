package qt

/*

#include "gen_qline.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLineF__IntersectType int

const (
	QLineF__NoIntersection        QLineF__IntersectType = 0
	QLineF__BoundedIntersection   QLineF__IntersectType = 1
	QLineF__UnboundedIntersection QLineF__IntersectType = 2
)

type QLine struct {
	h          *C.QLine
	isSubclass bool
}

func (this *QLine) cPointer() *C.QLine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLine constructs the type using only CGO pointers.
func newQLine(h *C.QLine) *QLine {
	if h == nil {
		return nil
	}
	return &QLine{h: h}
}

// UnsafeNewQLine constructs the type using only unsafe pointers.
func UnsafeNewQLine(h unsafe.Pointer) *QLine {
	if h == nil {
		return nil
	}

	return &QLine{h: (*C.QLine)(h)}
}

// NewQLine constructs a new QLine object.
func NewQLine() *QLine {
	var outptr_QLine *C.QLine = nil

	C.QLine_new(&outptr_QLine)
	ret := newQLine(outptr_QLine)
	ret.isSubclass = true
	return ret
}

// NewQLine2 constructs a new QLine object.
func NewQLine2(pt1 *QPoint, pt2 *QPoint) *QLine {
	var outptr_QLine *C.QLine = nil

	C.QLine_new2(pt1.cPointer(), pt2.cPointer(), &outptr_QLine)
	ret := newQLine(outptr_QLine)
	ret.isSubclass = true
	return ret
}

// NewQLine3 constructs a new QLine object.
func NewQLine3(x1 int, y1 int, x2 int, y2 int) *QLine {
	var outptr_QLine *C.QLine = nil

	C.QLine_new3((C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2), &outptr_QLine)
	ret := newQLine(outptr_QLine)
	ret.isSubclass = true
	return ret
}

// NewQLine4 constructs a new QLine object.
func NewQLine4(param1 *QLine) *QLine {
	var outptr_QLine *C.QLine = nil

	C.QLine_new4(param1.cPointer(), &outptr_QLine)
	ret := newQLine(outptr_QLine)
	ret.isSubclass = true
	return ret
}

func (this *QLine) IsNull() bool {
	return (bool)(C.QLine_IsNull(this.h))
}

func (this *QLine) P1() *QPoint {
	_ret := C.QLine_P1(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLine) P2() *QPoint {
	_ret := C.QLine_P2(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLine) X1() int {
	return (int)(C.QLine_X1(this.h))
}

func (this *QLine) Y1() int {
	return (int)(C.QLine_Y1(this.h))
}

func (this *QLine) X2() int {
	return (int)(C.QLine_X2(this.h))
}

func (this *QLine) Y2() int {
	return (int)(C.QLine_Y2(this.h))
}

func (this *QLine) Dx() int {
	return (int)(C.QLine_Dx(this.h))
}

func (this *QLine) Dy() int {
	return (int)(C.QLine_Dy(this.h))
}

func (this *QLine) Translate(p *QPoint) {
	C.QLine_Translate(this.h, p.cPointer())
}

func (this *QLine) Translate2(dx int, dy int) {
	C.QLine_Translate2(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QLine) Translated(p *QPoint) *QLine {
	_ret := C.QLine_Translated(this.h, p.cPointer())
	_goptr := newQLine(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLine) Translated2(dx int, dy int) *QLine {
	_ret := C.QLine_Translated2(this.h, (C.int)(dx), (C.int)(dy))
	_goptr := newQLine(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLine) Center() *QPoint {
	_ret := C.QLine_Center(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLine) SetP1(p1 *QPoint) {
	C.QLine_SetP1(this.h, p1.cPointer())
}

func (this *QLine) SetP2(p2 *QPoint) {
	C.QLine_SetP2(this.h, p2.cPointer())
}

func (this *QLine) SetPoints(p1 *QPoint, p2 *QPoint) {
	C.QLine_SetPoints(this.h, p1.cPointer(), p2.cPointer())
}

func (this *QLine) SetLine(x1 int, y1 int, x2 int, y2 int) {
	C.QLine_SetLine(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this *QLine) OperatorEqual(d *QLine) bool {
	return (bool)(C.QLine_OperatorEqual(this.h, d.cPointer()))
}

func (this *QLine) OperatorNotEqual(d *QLine) bool {
	return (bool)(C.QLine_OperatorNotEqual(this.h, d.cPointer()))
}

// Delete this object from C++ memory.
func (this *QLine) Delete() {
	C.QLine_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLine) GoGC() {
	runtime.SetFinalizer(this, func(this *QLine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QLineF struct {
	h          *C.QLineF
	isSubclass bool
}

func (this *QLineF) cPointer() *C.QLineF {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLineF) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLineF constructs the type using only CGO pointers.
func newQLineF(h *C.QLineF) *QLineF {
	if h == nil {
		return nil
	}
	return &QLineF{h: h}
}

// UnsafeNewQLineF constructs the type using only unsafe pointers.
func UnsafeNewQLineF(h unsafe.Pointer) *QLineF {
	if h == nil {
		return nil
	}

	return &QLineF{h: (*C.QLineF)(h)}
}

// NewQLineF constructs a new QLineF object.
func NewQLineF() *QLineF {
	var outptr_QLineF *C.QLineF = nil

	C.QLineF_new(&outptr_QLineF)
	ret := newQLineF(outptr_QLineF)
	ret.isSubclass = true
	return ret
}

// NewQLineF2 constructs a new QLineF object.
func NewQLineF2(pt1 *QPointF, pt2 *QPointF) *QLineF {
	var outptr_QLineF *C.QLineF = nil

	C.QLineF_new2(pt1.cPointer(), pt2.cPointer(), &outptr_QLineF)
	ret := newQLineF(outptr_QLineF)
	ret.isSubclass = true
	return ret
}

// NewQLineF3 constructs a new QLineF object.
func NewQLineF3(x1 float64, y1 float64, x2 float64, y2 float64) *QLineF {
	var outptr_QLineF *C.QLineF = nil

	C.QLineF_new3((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), &outptr_QLineF)
	ret := newQLineF(outptr_QLineF)
	ret.isSubclass = true
	return ret
}

// NewQLineF4 constructs a new QLineF object.
func NewQLineF4(line *QLine) *QLineF {
	var outptr_QLineF *C.QLineF = nil

	C.QLineF_new4(line.cPointer(), &outptr_QLineF)
	ret := newQLineF(outptr_QLineF)
	ret.isSubclass = true
	return ret
}

// NewQLineF5 constructs a new QLineF object.
func NewQLineF5(param1 *QLineF) *QLineF {
	var outptr_QLineF *C.QLineF = nil

	C.QLineF_new5(param1.cPointer(), &outptr_QLineF)
	ret := newQLineF(outptr_QLineF)
	ret.isSubclass = true
	return ret
}

func QLineF_FromPolar(length float64, angle float64) *QLineF {
	_ret := C.QLineF_FromPolar((C.double)(length), (C.double)(angle))
	_goptr := newQLineF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) IsNull() bool {
	return (bool)(C.QLineF_IsNull(this.h))
}

func (this *QLineF) P1() *QPointF {
	_ret := C.QLineF_P1(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) P2() *QPointF {
	_ret := C.QLineF_P2(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) X1() float64 {
	return (float64)(C.QLineF_X1(this.h))
}

func (this *QLineF) Y1() float64 {
	return (float64)(C.QLineF_Y1(this.h))
}

func (this *QLineF) X2() float64 {
	return (float64)(C.QLineF_X2(this.h))
}

func (this *QLineF) Y2() float64 {
	return (float64)(C.QLineF_Y2(this.h))
}

func (this *QLineF) Dx() float64 {
	return (float64)(C.QLineF_Dx(this.h))
}

func (this *QLineF) Dy() float64 {
	return (float64)(C.QLineF_Dy(this.h))
}

func (this *QLineF) Length() float64 {
	return (float64)(C.QLineF_Length(this.h))
}

func (this *QLineF) SetLength(lenVal float64) {
	C.QLineF_SetLength(this.h, (C.double)(lenVal))
}

func (this *QLineF) Angle() float64 {
	return (float64)(C.QLineF_Angle(this.h))
}

func (this *QLineF) SetAngle(angle float64) {
	C.QLineF_SetAngle(this.h, (C.double)(angle))
}

func (this *QLineF) AngleTo(l *QLineF) float64 {
	return (float64)(C.QLineF_AngleTo(this.h, l.cPointer()))
}

func (this *QLineF) UnitVector() *QLineF {
	_ret := C.QLineF_UnitVector(this.h)
	_goptr := newQLineF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) NormalVector() *QLineF {
	_ret := C.QLineF_NormalVector(this.h)
	_goptr := newQLineF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) Intersects(l *QLineF, intersectionPoint *QPointF) QLineF__IntersectType {
	return (QLineF__IntersectType)(C.QLineF_Intersects(this.h, l.cPointer(), intersectionPoint.cPointer()))
}

func (this *QLineF) Intersect(l *QLineF, intersectionPoint *QPointF) QLineF__IntersectType {
	return (QLineF__IntersectType)(C.QLineF_Intersect(this.h, l.cPointer(), intersectionPoint.cPointer()))
}

func (this *QLineF) AngleWithQLineF(l *QLineF) float64 {
	return (float64)(C.QLineF_AngleWithQLineF(this.h, l.cPointer()))
}

func (this *QLineF) PointAt(t float64) *QPointF {
	_ret := C.QLineF_PointAt(this.h, (C.double)(t))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) Translate(p *QPointF) {
	C.QLineF_Translate(this.h, p.cPointer())
}

func (this *QLineF) Translate2(dx float64, dy float64) {
	C.QLineF_Translate2(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QLineF) Translated(p *QPointF) *QLineF {
	_ret := C.QLineF_Translated(this.h, p.cPointer())
	_goptr := newQLineF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) Translated2(dx float64, dy float64) *QLineF {
	_ret := C.QLineF_Translated2(this.h, (C.double)(dx), (C.double)(dy))
	_goptr := newQLineF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) Center() *QPointF {
	_ret := C.QLineF_Center(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) SetP1(p1 *QPointF) {
	C.QLineF_SetP1(this.h, p1.cPointer())
}

func (this *QLineF) SetP2(p2 *QPointF) {
	C.QLineF_SetP2(this.h, p2.cPointer())
}

func (this *QLineF) SetPoints(p1 *QPointF, p2 *QPointF) {
	C.QLineF_SetPoints(this.h, p1.cPointer(), p2.cPointer())
}

func (this *QLineF) SetLine(x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QLineF_SetLine(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QLineF) OperatorEqual(d *QLineF) bool {
	return (bool)(C.QLineF_OperatorEqual(this.h, d.cPointer()))
}

func (this *QLineF) OperatorNotEqual(d *QLineF) bool {
	return (bool)(C.QLineF_OperatorNotEqual(this.h, d.cPointer()))
}

func (this *QLineF) ToLine() *QLine {
	_ret := C.QLineF_ToLine(this.h)
	_goptr := newQLine(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QLineF) Delete() {
	C.QLineF_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLineF) GoGC() {
	runtime.SetFinalizer(this, func(this *QLineF) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
