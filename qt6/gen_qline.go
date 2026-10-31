package qt6

/*

#include "gen_qline.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QLineF__IntersectionType int

const (
	QLineF__NoIntersection        QLineF__IntersectionType = 0
	QLineF__BoundedIntersection   QLineF__IntersectionType = 1
	QLineF__UnboundedIntersection QLineF__IntersectionType = 2
)

type QLine struct {
	h  *C.QLine
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QLine) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQLine((*C.QLine)(h))
}

// NewQLine constructs a new QLine object.
func NewQLine() *QLine {

	return newQLine(C.QLine_new())
}

// NewQLine2 constructs a new QLine object.
func NewQLine2(pt1 QPoint, pt2 QPoint) *QLine {

	return newQLine(C.QLine_new2(libmiqt.ValueCast[C.struct_miqt_qpoint](pt1), libmiqt.ValueCast[C.struct_miqt_qpoint](pt2)))
}

// NewQLine3 constructs a new QLine object.
func NewQLine3(x1 int, y1 int, x2 int, y2 int) *QLine {

	return newQLine(C.QLine_new3((C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2)))
}

// NewQLine4 constructs a new QLine object.
func NewQLine4(param1 *QLine) *QLine {
	defer runtime.KeepAlive(param1)

	return newQLine(C.QLine_new4(param1.cPointer()))
}

func (this *QLine) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QLine_isNull(this.h))
}

func (this *QLine) P1() QPoint {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPoint](C.QLine_p1(this.h))
}

func (this *QLine) P2() QPoint {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPoint](C.QLine_p2(this.h))
}

func (this *QLine) X1() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QLine_x1(this.h))
}

func (this *QLine) Y1() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QLine_y1(this.h))
}

func (this *QLine) X2() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QLine_x2(this.h))
}

func (this *QLine) Y2() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QLine_y2(this.h))
}

func (this *QLine) Dx() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QLine_dx(this.h))
}

func (this *QLine) Dy() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QLine_dy(this.h))
}

func (this *QLine) Translate(p QPoint) {
	defer runtime.KeepAlive(this)
	C.QLine_translate(this.h, libmiqt.ValueCast[C.struct_miqt_qpoint](p))
}

func (this *QLine) Translate2(dx int, dy int) {
	defer runtime.KeepAlive(this)
	C.QLine_translate2(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QLine) Translated(p QPoint) *QLine {
	defer runtime.KeepAlive(this)
	_goptr := newQLine(C.QLine_translated(this.h, libmiqt.ValueCast[C.struct_miqt_qpoint](p)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLine) Translated2(dx int, dy int) *QLine {
	defer runtime.KeepAlive(this)
	_goptr := newQLine(C.QLine_translated2(this.h, (C.int)(dx), (C.int)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLine) Center() QPoint {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPoint](C.QLine_center(this.h))
}

func (this *QLine) SetP1(p1 QPoint) {
	defer runtime.KeepAlive(this)
	C.QLine_setP1(this.h, libmiqt.ValueCast[C.struct_miqt_qpoint](p1))
}

func (this *QLine) SetP2(p2 QPoint) {
	defer runtime.KeepAlive(this)
	C.QLine_setP2(this.h, libmiqt.ValueCast[C.struct_miqt_qpoint](p2))
}

func (this *QLine) SetPoints(p1 QPoint, p2 QPoint) {
	defer runtime.KeepAlive(this)
	C.QLine_setPoints(this.h, libmiqt.ValueCast[C.struct_miqt_qpoint](p1), libmiqt.ValueCast[C.struct_miqt_qpoint](p2))
}

func (this *QLine) SetLine(x1 int, y1 int, x2 int, y2 int) {
	defer runtime.KeepAlive(this)
	C.QLine_setLine(this.h, (C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
}

func (this *QLine) OperatorEqual(d *QLine) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(d)
	return (bool)(C.QLine_operatorEqual(this.h, d.cPointer()))
}

func (this *QLine) OperatorNotEqual(d *QLine) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(d)
	return (bool)(C.QLine_operatorNotEqual(this.h, d.cPointer()))
}

func (this *QLine) ToLineF() *QLineF {
	defer runtime.KeepAlive(this)
	_goptr := newQLineF(C.QLine_toLineF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QLine) Delete() {
	C.QLine_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QLine) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QLine_delete((*C.QLine)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QLineF struct {
	h  *C.QLineF
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QLineF) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQLineF((*C.QLineF)(h))
}

// NewQLineF constructs a new QLineF object.
func NewQLineF() *QLineF {

	return newQLineF(C.QLineF_new())
}

// NewQLineF2 constructs a new QLineF object.
func NewQLineF2(pt1 QPointF, pt2 QPointF) *QLineF {

	return newQLineF(C.QLineF_new2(libmiqt.ValueCast[C.struct_miqt_qpointf](pt1), libmiqt.ValueCast[C.struct_miqt_qpointf](pt2)))
}

// NewQLineF3 constructs a new QLineF object.
func NewQLineF3(x1 float64, y1 float64, x2 float64, y2 float64) *QLineF {

	return newQLineF(C.QLineF_new3((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2)))
}

// NewQLineF4 constructs a new QLineF object.
func NewQLineF4(line *QLine) *QLineF {
	defer runtime.KeepAlive(line)

	return newQLineF(C.QLineF_new4(line.cPointer()))
}

// NewQLineF5 constructs a new QLineF object.
func NewQLineF5(param1 *QLineF) *QLineF {
	defer runtime.KeepAlive(param1)

	return newQLineF(C.QLineF_new5(param1.cPointer()))
}

func QLineF_FromPolar(length float64, angle float64) *QLineF {
	_goptr := newQLineF(C.QLineF_fromPolar((C.double)(length), (C.double)(angle)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QLineF_isNull(this.h))
}

func (this *QLineF) P1() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QLineF_p1(this.h))
}

func (this *QLineF) P2() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QLineF_p2(this.h))
}

func (this *QLineF) X1() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QLineF_x1(this.h))
}

func (this *QLineF) Y1() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QLineF_y1(this.h))
}

func (this *QLineF) X2() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QLineF_x2(this.h))
}

func (this *QLineF) Y2() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QLineF_y2(this.h))
}

func (this *QLineF) Dx() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QLineF_dx(this.h))
}

func (this *QLineF) Dy() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QLineF_dy(this.h))
}

func (this *QLineF) Length() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QLineF_length(this.h))
}

func (this *QLineF) SetLength(lenVal float64) {
	defer runtime.KeepAlive(this)
	C.QLineF_setLength(this.h, (C.double)(lenVal))
}

func (this *QLineF) Angle() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QLineF_angle(this.h))
}

func (this *QLineF) SetAngle(angle float64) {
	defer runtime.KeepAlive(this)
	C.QLineF_setAngle(this.h, (C.double)(angle))
}

func (this *QLineF) AngleTo(l *QLineF) float64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(l)
	return (float64)(C.QLineF_angleTo(this.h, l.cPointer()))
}

func (this *QLineF) UnitVector() *QLineF {
	defer runtime.KeepAlive(this)
	_goptr := newQLineF(C.QLineF_unitVector(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) NormalVector() *QLineF {
	defer runtime.KeepAlive(this)
	_goptr := newQLineF(C.QLineF_normalVector(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) Intersects(l *QLineF) QLineF__IntersectionType {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(l)
	return (QLineF__IntersectionType)(C.QLineF_intersects(this.h, l.cPointer()))
}

func (this *QLineF) PointAt(t float64) QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QLineF_pointAt(this.h, (C.double)(t)))
}

func (this *QLineF) Translate(p QPointF) {
	defer runtime.KeepAlive(this)
	C.QLineF_translate(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](p))
}

func (this *QLineF) Translate2(dx float64, dy float64) {
	defer runtime.KeepAlive(this)
	C.QLineF_translate2(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QLineF) Translated(p QPointF) *QLineF {
	defer runtime.KeepAlive(this)
	_goptr := newQLineF(C.QLineF_translated(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](p)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) Translated2(dx float64, dy float64) *QLineF {
	defer runtime.KeepAlive(this)
	_goptr := newQLineF(C.QLineF_translated2(this.h, (C.double)(dx), (C.double)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) Center() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QLineF_center(this.h))
}

func (this *QLineF) SetP1(p1 QPointF) {
	defer runtime.KeepAlive(this)
	C.QLineF_setP1(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](p1))
}

func (this *QLineF) SetP2(p2 QPointF) {
	defer runtime.KeepAlive(this)
	C.QLineF_setP2(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](p2))
}

func (this *QLineF) SetPoints(p1 QPointF, p2 QPointF) {
	defer runtime.KeepAlive(this)
	C.QLineF_setPoints(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](p1), libmiqt.ValueCast[C.struct_miqt_qpointf](p2))
}

func (this *QLineF) SetLine(x1 float64, y1 float64, x2 float64, y2 float64) {
	defer runtime.KeepAlive(this)
	C.QLineF_setLine(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QLineF) OperatorEqual(d *QLineF) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(d)
	return (bool)(C.QLineF_operatorEqual(this.h, d.cPointer()))
}

func (this *QLineF) OperatorNotEqual(d *QLineF) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(d)
	return (bool)(C.QLineF_operatorNotEqual(this.h, d.cPointer()))
}

func (this *QLineF) ToLine() *QLine {
	defer runtime.KeepAlive(this)
	_goptr := newQLine(C.QLineF_toLine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineF) Intersects2(l *QLineF, intersectionPoint *QPointF) QLineF__IntersectionType {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(l)
	return (QLineF__IntersectionType)(C.QLineF_intersects2(this.h, l.cPointer(), intersectionPoint.cPointer()))
}

// Delete this object from C++ memory.
func (this *QLineF) Delete() {
	C.QLineF_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QLineF) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QLineF_delete((*C.QLineF)(gc[0]))
	})
	this.miqtSetGC(gc)
}
