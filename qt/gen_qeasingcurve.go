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
	QEasingCurve__Type__Linear       QEasingCurve__Type = 0
	QEasingCurve__Type__InQuad       QEasingCurve__Type = 1
	QEasingCurve__Type__OutQuad      QEasingCurve__Type = 2
	QEasingCurve__Type__InOutQuad    QEasingCurve__Type = 3
	QEasingCurve__Type__OutInQuad    QEasingCurve__Type = 4
	QEasingCurve__Type__InCubic      QEasingCurve__Type = 5
	QEasingCurve__Type__OutCubic     QEasingCurve__Type = 6
	QEasingCurve__Type__InOutCubic   QEasingCurve__Type = 7
	QEasingCurve__Type__OutInCubic   QEasingCurve__Type = 8
	QEasingCurve__Type__InQuart      QEasingCurve__Type = 9
	QEasingCurve__Type__OutQuart     QEasingCurve__Type = 10
	QEasingCurve__Type__InOutQuart   QEasingCurve__Type = 11
	QEasingCurve__Type__OutInQuart   QEasingCurve__Type = 12
	QEasingCurve__Type__InQuint      QEasingCurve__Type = 13
	QEasingCurve__Type__OutQuint     QEasingCurve__Type = 14
	QEasingCurve__Type__InOutQuint   QEasingCurve__Type = 15
	QEasingCurve__Type__OutInQuint   QEasingCurve__Type = 16
	QEasingCurve__Type__InSine       QEasingCurve__Type = 17
	QEasingCurve__Type__OutSine      QEasingCurve__Type = 18
	QEasingCurve__Type__InOutSine    QEasingCurve__Type = 19
	QEasingCurve__Type__OutInSine    QEasingCurve__Type = 20
	QEasingCurve__Type__InExpo       QEasingCurve__Type = 21
	QEasingCurve__Type__OutExpo      QEasingCurve__Type = 22
	QEasingCurve__Type__InOutExpo    QEasingCurve__Type = 23
	QEasingCurve__Type__OutInExpo    QEasingCurve__Type = 24
	QEasingCurve__Type__InCirc       QEasingCurve__Type = 25
	QEasingCurve__Type__OutCirc      QEasingCurve__Type = 26
	QEasingCurve__Type__InOutCirc    QEasingCurve__Type = 27
	QEasingCurve__Type__OutInCirc    QEasingCurve__Type = 28
	QEasingCurve__Type__InElastic    QEasingCurve__Type = 29
	QEasingCurve__Type__OutElastic   QEasingCurve__Type = 30
	QEasingCurve__Type__InOutElastic QEasingCurve__Type = 31
	QEasingCurve__Type__OutInElastic QEasingCurve__Type = 32
	QEasingCurve__Type__InBack       QEasingCurve__Type = 33
	QEasingCurve__Type__OutBack      QEasingCurve__Type = 34
	QEasingCurve__Type__InOutBack    QEasingCurve__Type = 35
	QEasingCurve__Type__OutInBack    QEasingCurve__Type = 36
	QEasingCurve__Type__InBounce     QEasingCurve__Type = 37
	QEasingCurve__Type__OutBounce    QEasingCurve__Type = 38
	QEasingCurve__Type__InOutBounce  QEasingCurve__Type = 39
	QEasingCurve__Type__OutInBounce  QEasingCurve__Type = 40
	QEasingCurve__Type__InCurve      QEasingCurve__Type = 41
	QEasingCurve__Type__OutCurve     QEasingCurve__Type = 42
	QEasingCurve__Type__SineCurve    QEasingCurve__Type = 43
	QEasingCurve__Type__CosineCurve  QEasingCurve__Type = 44
	QEasingCurve__Type__BezierSpline QEasingCurve__Type = 45
	QEasingCurve__Type__TCBSpline    QEasingCurve__Type = 46
	QEasingCurve__Type__Custom       QEasingCurve__Type = 47
	QEasingCurve__Type__NCurveTypes  QEasingCurve__Type = 48
)

type QEasingCurve struct {
	h *C.QEasingCurve
}

func (this *QEasingCurve) cPointer() *C.QEasingCurve {
	if this == nil {
		return nil
	}
	return this.h
}

func newQEasingCurve(h *C.QEasingCurve) *QEasingCurve {
	if h == nil {
		return nil
	}
	return &QEasingCurve{h: h}
}

func newQEasingCurve_U(h unsafe.Pointer) *QEasingCurve {
	return newQEasingCurve((*C.QEasingCurve)(h))
}

// NewQEasingCurve constructs a new QEasingCurve object.
func NewQEasingCurve() *QEasingCurve {
	ret := C.QEasingCurve_new()
	return newQEasingCurve(ret)
}

// NewQEasingCurve2 constructs a new QEasingCurve object.
func NewQEasingCurve2(other *QEasingCurve) *QEasingCurve {
	ret := C.QEasingCurve_new2(other.cPointer())
	return newQEasingCurve(ret)
}

// NewQEasingCurve3 constructs a new QEasingCurve object.
func NewQEasingCurve3(typeVal QEasingCurve__Type) *QEasingCurve {
	ret := C.QEasingCurve_new3((C.uintptr_t)(typeVal))
	return newQEasingCurve(ret)
}

func (this *QEasingCurve) OperatorAssign(other *QEasingCurve) {
	C.QEasingCurve_OperatorAssign(this.h, other.cPointer())
}

func (this *QEasingCurve) Swap(other *QEasingCurve) {
	C.QEasingCurve_Swap(this.h, other.cPointer())
}

func (this *QEasingCurve) OperatorEqual(other *QEasingCurve) bool {
	_ret := C.QEasingCurve_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QEasingCurve) OperatorNotEqual(other *QEasingCurve) bool {
	_ret := C.QEasingCurve_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QEasingCurve) Amplitude() float64 {
	_ret := C.QEasingCurve_Amplitude(this.h)
	return (float64)(_ret)
}

func (this *QEasingCurve) SetAmplitude(amplitude float64) {
	C.QEasingCurve_SetAmplitude(this.h, (C.double)(amplitude))
}

func (this *QEasingCurve) Period() float64 {
	_ret := C.QEasingCurve_Period(this.h)
	return (float64)(_ret)
}

func (this *QEasingCurve) SetPeriod(period float64) {
	C.QEasingCurve_SetPeriod(this.h, (C.double)(period))
}

func (this *QEasingCurve) Overshoot() float64 {
	_ret := C.QEasingCurve_Overshoot(this.h)
	return (float64)(_ret)
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
	var _ma *C.struct_miqt_array = C.QEasingCurve_ToCubicSpline(this.h)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQPointF(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QEasingCurve) Type() QEasingCurve__Type {
	_ret := C.QEasingCurve_Type(this.h)
	return (QEasingCurve__Type)(_ret)
}

func (this *QEasingCurve) SetType(typeVal QEasingCurve__Type) {
	C.QEasingCurve_SetType(this.h, (C.uintptr_t)(typeVal))
}

func (this *QEasingCurve) ValueForProgress(progress float64) float64 {
	_ret := C.QEasingCurve_ValueForProgress(this.h, (C.double)(progress))
	return (float64)(_ret)
}

// Delete this object from C++ memory.
func (this *QEasingCurve) Delete() {
	C.QEasingCurve_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEasingCurve) GoGC() {
	runtime.SetFinalizer(this, func(this *QEasingCurve) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
