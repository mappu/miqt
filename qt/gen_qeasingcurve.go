package qt

/*

#include "gen_qeasingcurve.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	h  *C.QEasingCurve
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QEasingCurve) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQEasingCurve((*C.QEasingCurve)(h))
}

// NewQEasingCurve constructs a new QEasingCurve object.
func NewQEasingCurve() *QEasingCurve {

	return newQEasingCurve(C.QEasingCurve_new())
}

// NewQEasingCurve2 constructs a new QEasingCurve object.
func NewQEasingCurve2(other *QEasingCurve) *QEasingCurve {
	defer runtime.KeepAlive(other)

	return newQEasingCurve(C.QEasingCurve_new2(other.cPointer()))
}

// NewQEasingCurve3 constructs a new QEasingCurve object.
func NewQEasingCurve3(typeVal QEasingCurve__Type) *QEasingCurve {

	return newQEasingCurve(C.QEasingCurve_new3((C.int)(typeVal)))
}

func (this *QEasingCurve) OperatorAssign(other *QEasingCurve) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QEasingCurve_operatorAssign(this.h, other.cPointer())
}

func (this *QEasingCurve) Swap(other *QEasingCurve) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QEasingCurve_swap(this.h, other.cPointer())
}

func (this *QEasingCurve) OperatorEqual(other *QEasingCurve) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QEasingCurve_operatorEqual(this.h, other.cPointer()))
}

func (this *QEasingCurve) OperatorNotEqual(other *QEasingCurve) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QEasingCurve_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QEasingCurve) Amplitude() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QEasingCurve_amplitude(this.h))
}

func (this *QEasingCurve) SetAmplitude(amplitude float64) {
	defer runtime.KeepAlive(this)
	C.QEasingCurve_setAmplitude(this.h, (C.double)(amplitude))
}

func (this *QEasingCurve) Period() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QEasingCurve_period(this.h))
}

func (this *QEasingCurve) SetPeriod(period float64) {
	defer runtime.KeepAlive(this)
	C.QEasingCurve_setPeriod(this.h, (C.double)(period))
}

func (this *QEasingCurve) Overshoot() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QEasingCurve_overshoot(this.h))
}

func (this *QEasingCurve) SetOvershoot(overshoot float64) {
	defer runtime.KeepAlive(this)
	C.QEasingCurve_setOvershoot(this.h, (C.double)(overshoot))
}

func (this *QEasingCurve) AddCubicBezierSegment(c1 QPointF, c2 QPointF, endPoint QPointF) {
	defer runtime.KeepAlive(this)
	C.QEasingCurve_addCubicBezierSegment(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](c1), libmiqt.ValueCast[C.struct_miqt_qpointf](c2), libmiqt.ValueCast[C.struct_miqt_qpointf](endPoint))
}

func (this *QEasingCurve) AddTCBSegment(nextPoint QPointF, t float64, c float64, b float64) {
	defer runtime.KeepAlive(this)
	C.QEasingCurve_addTCBSegment(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](nextPoint), (C.double)(t), (C.double)(c), (C.double)(b))
}

func (this *QEasingCurve) ToCubicSpline() []QPointF {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QEasingCurve_toCubicSpline(this.h)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_qpointf)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = libmiqt.ValueCast[QPointF](_outCast[i])
	}
	return _ret
}

func (this *QEasingCurve) Type() QEasingCurve__Type {
	defer runtime.KeepAlive(this)
	return (QEasingCurve__Type)(C.QEasingCurve_type(this.h))
}

func (this *QEasingCurve) SetType(typeVal QEasingCurve__Type) {
	defer runtime.KeepAlive(this)
	C.QEasingCurve_setType(this.h, (C.int)(typeVal))
}

func (this *QEasingCurve) ValueForProgress(progress float64) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QEasingCurve_valueForProgress(this.h, (C.double)(progress)))
}

// Delete this object from C++ memory.
func (this *QEasingCurve) Delete() {
	C.QEasingCurve_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QEasingCurve) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QEasingCurve_delete((*C.QEasingCurve)(gc[0]))
	})
	this.miqtSetGC(gc)
}
