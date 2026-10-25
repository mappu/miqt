package qwt

/*

#include "gen_qwt_curve_fitter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtSplineCurveFitter__FitMode int

const (
	QwtSplineCurveFitter__Auto             QwtSplineCurveFitter__FitMode = 0
	QwtSplineCurveFitter__Spline           QwtSplineCurveFitter__FitMode = 1
	QwtSplineCurveFitter__ParametricSpline QwtSplineCurveFitter__FitMode = 2
)

type QwtCurveFitter struct {
	h  *C.QwtCurveFitter
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtCurveFitter) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtCurveFitter) cPointer() *C.QwtCurveFitter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtCurveFitter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtCurveFitter constructs the type using only CGO pointers.
func newQwtCurveFitter(h *C.QwtCurveFitter) *QwtCurveFitter {
	if h == nil {
		return nil
	}

	return &QwtCurveFitter{h: h}
}

// UnsafeNewQwtCurveFitter constructs the type using only unsafe pointers.
func UnsafeNewQwtCurveFitter(h unsafe.Pointer) *QwtCurveFitter {
	return newQwtCurveFitter((*C.QwtCurveFitter)(h))
}

// Delete this object from C++ memory.
func (this *QwtCurveFitter) Delete() {
	C.QwtCurveFitter_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtCurveFitter) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtCurveFitter_delete((*C.QwtCurveFitter)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QwtSplineCurveFitter struct {
	h  *C.QwtSplineCurveFitter
	gc *[1]unsafe.Pointer
	*QwtCurveFitter
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtSplineCurveFitter) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtCurveFitter.miqtSetGC(gc)
}

func (this *QwtSplineCurveFitter) cPointer() *C.QwtSplineCurveFitter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSplineCurveFitter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSplineCurveFitter constructs the type using only CGO pointers.
func newQwtSplineCurveFitter(h *C.QwtSplineCurveFitter) *QwtSplineCurveFitter {
	if h == nil {
		return nil
	}
	var outptr_QwtCurveFitter *C.QwtCurveFitter = nil
	C.QwtSplineCurveFitter_virtbase(h, &outptr_QwtCurveFitter)

	return &QwtSplineCurveFitter{h: h,
		QwtCurveFitter: newQwtCurveFitter(outptr_QwtCurveFitter)}
}

// UnsafeNewQwtSplineCurveFitter constructs the type using only unsafe pointers.
func UnsafeNewQwtSplineCurveFitter(h unsafe.Pointer) *QwtSplineCurveFitter {
	return newQwtSplineCurveFitter((*C.QwtSplineCurveFitter)(h))
}

// NewQwtSplineCurveFitter constructs a new QwtSplineCurveFitter object.
func NewQwtSplineCurveFitter() *QwtSplineCurveFitter {

	return newQwtSplineCurveFitter(C.QwtSplineCurveFitter_new())
}

func (this *QwtSplineCurveFitter) SetFitMode(fitMode QwtSplineCurveFitter__FitMode) {
	defer runtime.KeepAlive(this)
	C.QwtSplineCurveFitter_setFitMode(this.h, (C.int)(fitMode))
}

func (this *QwtSplineCurveFitter) FitMode() QwtSplineCurveFitter__FitMode {
	defer runtime.KeepAlive(this)
	return (QwtSplineCurveFitter__FitMode)(C.QwtSplineCurveFitter_fitMode(this.h))
}

func (this *QwtSplineCurveFitter) SetSpline(spline *QwtSpline) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(spline)
	C.QwtSplineCurveFitter_setSpline(this.h, spline.cPointer())
}

func (this *QwtSplineCurveFitter) Spline() *QwtSpline {
	defer runtime.KeepAlive(this)
	_ret := newQwtSpline(C.QwtSplineCurveFitter_spline(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QwtSplineCurveFitter) Spline2() *QwtSpline {
	defer runtime.KeepAlive(this)
	_ret := newQwtSpline(C.QwtSplineCurveFitter_spline2(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QwtSplineCurveFitter) SetSplineSize(splineSize int) {
	defer runtime.KeepAlive(this)
	C.QwtSplineCurveFitter_setSplineSize(this.h, (C.int)(splineSize))
}

func (this *QwtSplineCurveFitter) SplineSize() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtSplineCurveFitter_splineSize(this.h))
}

// Delete this object from C++ memory.
func (this *QwtSplineCurveFitter) Delete() {
	C.QwtSplineCurveFitter_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtSplineCurveFitter) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtSplineCurveFitter_delete((*C.QwtSplineCurveFitter)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QwtWeedingCurveFitter struct {
	h  *C.QwtWeedingCurveFitter
	gc *[1]unsafe.Pointer
	*QwtCurveFitter
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtWeedingCurveFitter) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtCurveFitter.miqtSetGC(gc)
}

func (this *QwtWeedingCurveFitter) cPointer() *C.QwtWeedingCurveFitter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtWeedingCurveFitter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtWeedingCurveFitter constructs the type using only CGO pointers.
func newQwtWeedingCurveFitter(h *C.QwtWeedingCurveFitter) *QwtWeedingCurveFitter {
	if h == nil {
		return nil
	}
	var outptr_QwtCurveFitter *C.QwtCurveFitter = nil
	C.QwtWeedingCurveFitter_virtbase(h, &outptr_QwtCurveFitter)

	return &QwtWeedingCurveFitter{h: h,
		QwtCurveFitter: newQwtCurveFitter(outptr_QwtCurveFitter)}
}

// UnsafeNewQwtWeedingCurveFitter constructs the type using only unsafe pointers.
func UnsafeNewQwtWeedingCurveFitter(h unsafe.Pointer) *QwtWeedingCurveFitter {
	return newQwtWeedingCurveFitter((*C.QwtWeedingCurveFitter)(h))
}

// NewQwtWeedingCurveFitter constructs a new QwtWeedingCurveFitter object.
func NewQwtWeedingCurveFitter() *QwtWeedingCurveFitter {

	return newQwtWeedingCurveFitter(C.QwtWeedingCurveFitter_new())
}

// NewQwtWeedingCurveFitter2 constructs a new QwtWeedingCurveFitter object.
func NewQwtWeedingCurveFitter2(tolerance float64) *QwtWeedingCurveFitter {

	return newQwtWeedingCurveFitter(C.QwtWeedingCurveFitter_new2((C.double)(tolerance)))
}

func (this *QwtWeedingCurveFitter) SetTolerance(tolerance float64) {
	defer runtime.KeepAlive(this)
	C.QwtWeedingCurveFitter_setTolerance(this.h, (C.double)(tolerance))
}

func (this *QwtWeedingCurveFitter) Tolerance() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtWeedingCurveFitter_tolerance(this.h))
}

func (this *QwtWeedingCurveFitter) SetChunkSize(chunkSize uint) {
	defer runtime.KeepAlive(this)
	C.QwtWeedingCurveFitter_setChunkSize(this.h, (C.uint)(chunkSize))
}

func (this *QwtWeedingCurveFitter) ChunkSize() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QwtWeedingCurveFitter_chunkSize(this.h))
}

// Delete this object from C++ memory.
func (this *QwtWeedingCurveFitter) Delete() {
	C.QwtWeedingCurveFitter_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtWeedingCurveFitter) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtWeedingCurveFitter_delete((*C.QwtWeedingCurveFitter)(gc[0]))
	})
	this.miqtSetGC(gc)
}
