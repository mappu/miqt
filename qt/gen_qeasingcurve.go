package qt

/*

#include "gen_qeasingcurve.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QEasingCurve__Type int

const (
	QEasingCurve__Linear       QEasingCurve__Type = 0
	QEasingCurve__InQuad       QEasingCurve__Type = 1
	QEasingCurve__OutQuad      QEasingCurve__Type = 2
	QEasingCurve__InOutQuad    QEasingCurve__Type = 3
	QEasingCurve__OutInQuad    QEasingCurve__Type = 4
	QEasingCurve__InCubic      QEasingCurve__Type = 5
	QEasingCurve__OutCubic     QEasingCurve__Type = 6
	QEasingCurve__InOutCubic   QEasingCurve__Type = 7
	QEasingCurve__OutInCubic   QEasingCurve__Type = 8
	QEasingCurve__InQuart      QEasingCurve__Type = 9
	QEasingCurve__OutQuart     QEasingCurve__Type = 10
	QEasingCurve__InOutQuart   QEasingCurve__Type = 11
	QEasingCurve__OutInQuart   QEasingCurve__Type = 12
	QEasingCurve__InQuint      QEasingCurve__Type = 13
	QEasingCurve__OutQuint     QEasingCurve__Type = 14
	QEasingCurve__InOutQuint   QEasingCurve__Type = 15
	QEasingCurve__OutInQuint   QEasingCurve__Type = 16
	QEasingCurve__InSine       QEasingCurve__Type = 17
	QEasingCurve__OutSine      QEasingCurve__Type = 18
	QEasingCurve__InOutSine    QEasingCurve__Type = 19
	QEasingCurve__OutInSine    QEasingCurve__Type = 20
	QEasingCurve__InExpo       QEasingCurve__Type = 21
	QEasingCurve__OutExpo      QEasingCurve__Type = 22
	QEasingCurve__InOutExpo    QEasingCurve__Type = 23
	QEasingCurve__OutInExpo    QEasingCurve__Type = 24
	QEasingCurve__InCirc       QEasingCurve__Type = 25
	QEasingCurve__OutCirc      QEasingCurve__Type = 26
	QEasingCurve__InOutCirc    QEasingCurve__Type = 27
	QEasingCurve__OutInCirc    QEasingCurve__Type = 28
	QEasingCurve__InElastic    QEasingCurve__Type = 29
	QEasingCurve__OutElastic   QEasingCurve__Type = 30
	QEasingCurve__InOutElastic QEasingCurve__Type = 31
	QEasingCurve__OutInElastic QEasingCurve__Type = 32
	QEasingCurve__InBack       QEasingCurve__Type = 33
	QEasingCurve__OutBack      QEasingCurve__Type = 34
	QEasingCurve__InOutBack    QEasingCurve__Type = 35
	QEasingCurve__OutInBack    QEasingCurve__Type = 36
	QEasingCurve__InBounce     QEasingCurve__Type = 37
	QEasingCurve__OutBounce    QEasingCurve__Type = 38
	QEasingCurve__InOutBounce  QEasingCurve__Type = 39
	QEasingCurve__OutInBounce  QEasingCurve__Type = 40
	QEasingCurve__InCurve      QEasingCurve__Type = 41
	QEasingCurve__OutCurve     QEasingCurve__Type = 42
	QEasingCurve__SineCurve    QEasingCurve__Type = 43
	QEasingCurve__CosineCurve  QEasingCurve__Type = 44
	QEasingCurve__BezierSpline QEasingCurve__Type = 45
	QEasingCurve__TCBSpline    QEasingCurve__Type = 46
	QEasingCurve__Custom       QEasingCurve__Type = 47
	QEasingCurve__NCurveTypes  QEasingCurve__Type = 48
)

type QEasingCurve struct {
	h          *C.QEasingCurve
	isSubclass bool
}

func (this *QEasingCurve) cPointer() *C.QEasingCurve {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEasingCurve) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQEasingCurve constructs the type using only CGO pointers.
func newQEasingCurve(h *C.QEasingCurve) *QEasingCurve {
	if h == nil {
		return nil
	}
	return &QEasingCurve{h: h}
}

// UnsafeNewQEasingCurve constructs the type using only unsafe pointers.
func UnsafeNewQEasingCurve(h unsafe.Pointer) *QEasingCurve {
	if h == nil {
		return nil
	}

	return &QEasingCurve{h: (*C.QEasingCurve)(h)}
}

// NewQEasingCurve constructs a new QEasingCurve object.
func NewQEasingCurve() *QEasingCurve {
	var outptr_QEasingCurve *C.QEasingCurve = nil

	C.QEasingCurve_new(&outptr_QEasingCurve)
	ret := newQEasingCurve(outptr_QEasingCurve)
	ret.isSubclass = true
	return ret
}

// NewQEasingCurve2 constructs a new QEasingCurve object.
func NewQEasingCurve2(other *QEasingCurve) *QEasingCurve {
	var outptr_QEasingCurve *C.QEasingCurve = nil

	C.QEasingCurve_new2(other.cPointer(), &outptr_QEasingCurve)
	ret := newQEasingCurve(outptr_QEasingCurve)
	ret.isSubclass = true
	return ret
}

// NewQEasingCurve3 constructs a new QEasingCurve object.
func NewQEasingCurve3(typeVal QEasingCurve__Type) *QEasingCurve {
	var outptr_QEasingCurve *C.QEasingCurve = nil

	C.QEasingCurve_new3((C.int)(typeVal), &outptr_QEasingCurve)
	ret := newQEasingCurve(outptr_QEasingCurve)
	ret.isSubclass = true
	return ret
}

func (this *QEasingCurve) OperatorAssign(other *QEasingCurve) {
	C.QEasingCurve_OperatorAssign(this.h, other.cPointer())
}

func (this *QEasingCurve) Swap(other *QEasingCurve) {
	C.QEasingCurve_Swap(this.h, other.cPointer())
}

func (this *QEasingCurve) OperatorEqual(other *QEasingCurve) bool {
	return (bool)(C.QEasingCurve_OperatorEqual(this.h, other.cPointer()))
}

func (this *QEasingCurve) OperatorNotEqual(other *QEasingCurve) bool {
	return (bool)(C.QEasingCurve_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QEasingCurve) Amplitude() float64 {
	return (float64)(C.QEasingCurve_Amplitude(this.h))
}

func (this *QEasingCurve) SetAmplitude(amplitude float64) {
	C.QEasingCurve_SetAmplitude(this.h, (C.double)(amplitude))
}

func (this *QEasingCurve) Period() float64 {
	return (float64)(C.QEasingCurve_Period(this.h))
}

func (this *QEasingCurve) SetPeriod(period float64) {
	C.QEasingCurve_SetPeriod(this.h, (C.double)(period))
}

func (this *QEasingCurve) Overshoot() float64 {
	return (float64)(C.QEasingCurve_Overshoot(this.h))
}

func (this *QEasingCurve) SetOvershoot(overshoot float64) {
	C.QEasingCurve_SetOvershoot(this.h, (C.double)(overshoot))
}

func (this *QEasingCurve) AddCubicBezierSegment(c1 *QPointF, c2 *QPointF, endPoint *QPointF) {
	C.QEasingCurve_AddCubicBezierSegment(this.h, c1.cPointer(), c2.cPointer(), endPoint.cPointer())
}

func (this *QEasingCurve) AddTCBSegment(nextPoint *QPointF, t float64, c float64, b float64) {
	C.QEasingCurve_AddTCBSegment(this.h, nextPoint.cPointer(), (C.double)(t), (C.double)(c), (C.double)(b))
}

func (this *QEasingCurve) ToCubicSpline() []QPointF {
	var _ma C.struct_miqt_array = C.QEasingCurve_ToCubicSpline(this.h)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_ret := _outCast[i]
		_vv_goptr := newQPointF(_vv_ret)
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QEasingCurve) Type() QEasingCurve__Type {
	return (QEasingCurve__Type)(C.QEasingCurve_Type(this.h))
}

func (this *QEasingCurve) SetType(typeVal QEasingCurve__Type) {
	C.QEasingCurve_SetType(this.h, (C.int)(typeVal))
}

func (this *QEasingCurve) ValueForProgress(progress float64) float64 {
	return (float64)(C.QEasingCurve_ValueForProgress(this.h, (C.double)(progress)))
}

// Delete this object from C++ memory.
func (this *QEasingCurve) Delete() {
	C.QEasingCurve_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEasingCurve) GoGC() {
	runtime.SetFinalizer(this, func(this *QEasingCurve) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
