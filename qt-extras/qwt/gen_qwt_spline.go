package qwt

/*

#include "gen_qwt_spline.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtSpline__SplineType int

const (
	QwtSpline__Natural  QwtSpline__SplineType = 0
	QwtSpline__Periodic QwtSpline__SplineType = 1
)

type QwtSpline struct {
	h *C.QwtSpline
}

func (this *QwtSpline) cPointer() *C.QwtSpline {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSpline) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSpline constructs the type using only CGO pointers.
func newQwtSpline(h *C.QwtSpline) *QwtSpline {
	if h == nil {
		return nil
	}

	return &QwtSpline{h: h}
}

// UnsafeNewQwtSpline constructs the type using only unsafe pointers.
func UnsafeNewQwtSpline(h unsafe.Pointer) *QwtSpline {
	return newQwtSpline((*C.QwtSpline)(h))
}

// NewQwtSpline constructs a new QwtSpline object.
func NewQwtSpline() *QwtSpline {

	return newQwtSpline(C.QwtSpline_new())
}

// NewQwtSpline2 constructs a new QwtSpline object.
func NewQwtSpline2(param1 *QwtSpline) *QwtSpline {

	return newQwtSpline(C.QwtSpline_new2(param1.cPointer()))
}

func (this *QwtSpline) OperatorAssign(param1 *QwtSpline) {
	C.QwtSpline_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtSpline) SetSplineType(splineType QwtSpline__SplineType) {
	C.QwtSpline_setSplineType(this.h, (C.int)(splineType))
}

func (this *QwtSpline) SplineType() QwtSpline__SplineType {
	return (QwtSpline__SplineType)(C.QwtSpline_splineType(this.h))
}

func (this *QwtSpline) Reset() {
	C.QwtSpline_reset(this.h)
}

func (this *QwtSpline) IsValid() bool {
	return (bool)(C.QwtSpline_isValid(this.h))
}

func (this *QwtSpline) Value(x float64) float64 {
	return (float64)(C.QwtSpline_value(this.h, (C.double)(x)))
}

func (this *QwtSpline) CoefficientsA() []float64 {
	var _ma C.struct_miqt_array = C.QwtSpline_coefficientsA(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtSpline) CoefficientsB() []float64 {
	var _ma C.struct_miqt_array = C.QwtSpline_coefficientsB(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtSpline) CoefficientsC() []float64 {
	var _ma C.struct_miqt_array = C.QwtSpline_coefficientsC(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QwtSpline) Delete() {
	C.QwtSpline_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtSpline) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtSpline) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
