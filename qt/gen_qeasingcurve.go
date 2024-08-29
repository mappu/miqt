package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qeasingcurve.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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
func NewQEasingCurve3(typeVal uintptr) *QEasingCurve {
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
	ret := C.QEasingCurve_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QEasingCurve) OperatorNotEqual(other *QEasingCurve) bool {
	ret := C.QEasingCurve_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QEasingCurve) Amplitude() float64 {
	ret := C.QEasingCurve_Amplitude(this.h)
	return (float64)(ret)
}

func (this *QEasingCurve) SetAmplitude(amplitude float64) {
	C.QEasingCurve_SetAmplitude(this.h, (C.double)(amplitude))
}

func (this *QEasingCurve) Period() float64 {
	ret := C.QEasingCurve_Period(this.h)
	return (float64)(ret)
}

func (this *QEasingCurve) SetPeriod(period float64) {
	C.QEasingCurve_SetPeriod(this.h, (C.double)(period))
}

func (this *QEasingCurve) Overshoot() float64 {
	ret := C.QEasingCurve_Overshoot(this.h)
	return (float64)(ret)
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
	var _out **C.QPointF = nil
	var _out_len C.size_t = 0
	C.QEasingCurve_ToCubicSpline(this.h, &_out, &_out_len)
	ret := make([]QPointF, int(_out_len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQPointF(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QEasingCurve) Type() uintptr {
	ret := C.QEasingCurve_Type(this.h)
	return (uintptr)(ret)
}

func (this *QEasingCurve) SetType(typeVal uintptr) {
	C.QEasingCurve_SetType(this.h, (C.uintptr_t)(typeVal))
}

func (this *QEasingCurve) ValueForProgress(progress float64) float64 {
	ret := C.QEasingCurve_ValueForProgress(this.h, (C.double)(progress))
	return (float64)(ret)
}

func (this *QEasingCurve) Delete() {
	C.QEasingCurve_Delete(this.h)
}
