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
	h  *C.QwtSpline
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtSpline) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQwtSpline(C.QwtSpline_new2(param1.cPointer()))
}

func (this *QwtSpline) OperatorAssign(param1 *QwtSpline) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtSpline_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtSpline) SetSplineType(splineType QwtSpline__SplineType) {
	defer runtime.KeepAlive(this)
	C.QwtSpline_setSplineType(this.h, (C.int)(splineType))
}

func (this *QwtSpline) SplineType() QwtSpline__SplineType {
	defer runtime.KeepAlive(this)
	return (QwtSpline__SplineType)(C.QwtSpline_splineType(this.h))
}

func (this *QwtSpline) Reset() {
	defer runtime.KeepAlive(this)
	C.QwtSpline_reset(this.h)
}

func (this *QwtSpline) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtSpline_isValid(this.h))
}

func (this *QwtSpline) Value(x float64) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtSpline_value(this.h, (C.double)(x)))
}

func (this *QwtSpline) CoefficientsA() []float64 {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtSpline_coefficientsA(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := unsafe.Slice((*C.double)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtSpline) CoefficientsB() []float64 {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtSpline_coefficientsB(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := unsafe.Slice((*C.double)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtSpline) CoefficientsC() []float64 {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtSpline_coefficientsC(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := unsafe.Slice((*C.double)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QwtSpline) Delete() {
	C.QwtSpline_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtSpline) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtSpline_delete((*C.QwtSpline)(gc[0]))
	})
	this.miqtSetGC(gc)
}
