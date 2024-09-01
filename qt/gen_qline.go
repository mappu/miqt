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

type QLine struct {
	h *C.QLine
}

func (this *QLine) cPointer() *C.QLine {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLine(h *C.QLine) *QLine {
	if h == nil {
		return nil
	}
	return &QLine{h: h}
}

func newQLine_U(h unsafe.Pointer) *QLine {
	return newQLine((*C.QLine)(h))
}

// NewQLine constructs a new QLine object.
func NewQLine() *QLine {
	ret := C.QLine_new()
	return newQLine(ret)
}

// NewQLine2 constructs a new QLine object.
func NewQLine2(pt1 *QPoint, pt2 *QPoint) *QLine {
	ret := C.QLine_new2(pt1.cPointer(), pt2.cPointer())
	return newQLine(ret)
}

// NewQLine3 constructs a new QLine object.
func NewQLine3(x1 int, y1 int, x2 int, y2 int) *QLine {
	ret := C.QLine_new3((C.int)(x1), (C.int)(y1), (C.int)(x2), (C.int)(y2))
	return newQLine(ret)
}

// NewQLine4 constructs a new QLine object.
func NewQLine4(param1 *QLine) *QLine {
	ret := C.QLine_new4(param1.cPointer())
	return newQLine(ret)
}

func (this *QLine) IsNull() bool {
	ret := C.QLine_IsNull(this.h)
	return (bool)(ret)
}

func (this *QLine) P1() *QPoint {
	ret := C.QLine_P1(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLine) P2() *QPoint {
	ret := C.QLine_P2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLine) X1() int {
	ret := C.QLine_X1(this.h)
	return (int)(ret)
}

func (this *QLine) Y1() int {
	ret := C.QLine_Y1(this.h)
	return (int)(ret)
}

func (this *QLine) X2() int {
	ret := C.QLine_X2(this.h)
	return (int)(ret)
}

func (this *QLine) Y2() int {
	ret := C.QLine_Y2(this.h)
	return (int)(ret)
}

func (this *QLine) Dx() int {
	ret := C.QLine_Dx(this.h)
	return (int)(ret)
}

func (this *QLine) Dy() int {
	ret := C.QLine_Dy(this.h)
	return (int)(ret)
}

func (this *QLine) Translate(p *QPoint) {
	C.QLine_Translate(this.h, p.cPointer())
}

func (this *QLine) Translate2(dx int, dy int) {
	C.QLine_Translate2(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QLine) Translated(p *QPoint) *QLine {
	ret := C.QLine_Translated(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLine) Translated2(dx int, dy int) *QLine {
	ret := C.QLine_Translated2(this.h, (C.int)(dx), (C.int)(dy))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLine) Center() *QPoint {
	ret := C.QLine_Center(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QLine_OperatorEqual(this.h, d.cPointer())
	return (bool)(ret)
}

func (this *QLine) OperatorNotEqual(d *QLine) bool {
	ret := C.QLine_OperatorNotEqual(this.h, d.cPointer())
	return (bool)(ret)
}

func (this *QLine) Delete() {
	C.QLine_Delete(this.h)
}

type QLineF struct {
	h *C.QLineF
}

func (this *QLineF) cPointer() *C.QLineF {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLineF(h *C.QLineF) *QLineF {
	if h == nil {
		return nil
	}
	return &QLineF{h: h}
}

func newQLineF_U(h unsafe.Pointer) *QLineF {
	return newQLineF((*C.QLineF)(h))
}

// NewQLineF constructs a new QLineF object.
func NewQLineF() *QLineF {
	ret := C.QLineF_new()
	return newQLineF(ret)
}

// NewQLineF2 constructs a new QLineF object.
func NewQLineF2(pt1 *QPointF, pt2 *QPointF) *QLineF {
	ret := C.QLineF_new2(pt1.cPointer(), pt2.cPointer())
	return newQLineF(ret)
}

// NewQLineF3 constructs a new QLineF object.
func NewQLineF3(x1 float64, y1 float64, x2 float64, y2 float64) *QLineF {
	ret := C.QLineF_new3((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
	return newQLineF(ret)
}

// NewQLineF4 constructs a new QLineF object.
func NewQLineF4(line *QLine) *QLineF {
	ret := C.QLineF_new4(line.cPointer())
	return newQLineF(ret)
}

// NewQLineF5 constructs a new QLineF object.
func NewQLineF5(param1 *QLineF) *QLineF {
	ret := C.QLineF_new5(param1.cPointer())
	return newQLineF(ret)
}

func QLineF_FromPolar(length float64, angle float64) *QLineF {
	ret := C.QLineF_FromPolar((C.double)(length), (C.double)(angle))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) IsNull() bool {
	ret := C.QLineF_IsNull(this.h)
	return (bool)(ret)
}

func (this *QLineF) P1() *QPointF {
	ret := C.QLineF_P1(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) P2() *QPointF {
	ret := C.QLineF_P2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) X1() float64 {
	ret := C.QLineF_X1(this.h)
	return (float64)(ret)
}

func (this *QLineF) Y1() float64 {
	ret := C.QLineF_Y1(this.h)
	return (float64)(ret)
}

func (this *QLineF) X2() float64 {
	ret := C.QLineF_X2(this.h)
	return (float64)(ret)
}

func (this *QLineF) Y2() float64 {
	ret := C.QLineF_Y2(this.h)
	return (float64)(ret)
}

func (this *QLineF) Dx() float64 {
	ret := C.QLineF_Dx(this.h)
	return (float64)(ret)
}

func (this *QLineF) Dy() float64 {
	ret := C.QLineF_Dy(this.h)
	return (float64)(ret)
}

func (this *QLineF) Length() float64 {
	ret := C.QLineF_Length(this.h)
	return (float64)(ret)
}

func (this *QLineF) SetLength(lenVal float64) {
	C.QLineF_SetLength(this.h, (C.double)(lenVal))
}

func (this *QLineF) Angle() float64 {
	ret := C.QLineF_Angle(this.h)
	return (float64)(ret)
}

func (this *QLineF) SetAngle(angle float64) {
	C.QLineF_SetAngle(this.h, (C.double)(angle))
}

func (this *QLineF) AngleTo(l *QLineF) float64 {
	ret := C.QLineF_AngleTo(this.h, l.cPointer())
	return (float64)(ret)
}

func (this *QLineF) UnitVector() *QLineF {
	ret := C.QLineF_UnitVector(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) NormalVector() *QLineF {
	ret := C.QLineF_NormalVector(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) Intersects(l *QLineF, intersectionPoint *QPointF) uintptr {
	ret := C.QLineF_Intersects(this.h, l.cPointer(), intersectionPoint.cPointer())
	return (uintptr)(ret)
}

func (this *QLineF) Intersect(l *QLineF, intersectionPoint *QPointF) uintptr {
	ret := C.QLineF_Intersect(this.h, l.cPointer(), intersectionPoint.cPointer())
	return (uintptr)(ret)
}

func (this *QLineF) AngleWithQLineF(l *QLineF) float64 {
	ret := C.QLineF_AngleWithQLineF(this.h, l.cPointer())
	return (float64)(ret)
}

func (this *QLineF) PointAt(t float64) *QPointF {
	ret := C.QLineF_PointAt(this.h, (C.double)(t))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) Translate(p *QPointF) {
	C.QLineF_Translate(this.h, p.cPointer())
}

func (this *QLineF) Translate2(dx float64, dy float64) {
	C.QLineF_Translate2(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QLineF) Translated(p *QPointF) *QLineF {
	ret := C.QLineF_Translated(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) Translated2(dx float64, dy float64) *QLineF {
	ret := C.QLineF_Translated2(this.h, (C.double)(dx), (C.double)(dy))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) Center() *QPointF {
	ret := C.QLineF_Center(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QLineF_OperatorEqual(this.h, d.cPointer())
	return (bool)(ret)
}

func (this *QLineF) OperatorNotEqual(d *QLineF) bool {
	ret := C.QLineF_OperatorNotEqual(this.h, d.cPointer())
	return (bool)(ret)
}

func (this *QLineF) ToLine() *QLine {
	ret := C.QLineF_ToLine(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineF) Delete() {
	C.QLineF_Delete(this.h)
}
