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
	h *C.QwtCurveFitter
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

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtCurveFitter) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtCurveFitter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtSplineCurveFitter struct {
	h *C.QwtSplineCurveFitter
	*QwtCurveFitter
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
	C.QwtSplineCurveFitter_setFitMode(this.h, (C.int)(fitMode))
}

func (this *QwtSplineCurveFitter) FitMode() QwtSplineCurveFitter__FitMode {
	return (QwtSplineCurveFitter__FitMode)(C.QwtSplineCurveFitter_fitMode(this.h))
}

func (this *QwtSplineCurveFitter) SetSpline(spline *QwtSpline) {
	C.QwtSplineCurveFitter_setSpline(this.h, spline.cPointer())
}

func (this *QwtSplineCurveFitter) Spline() *QwtSpline {
	return newQwtSpline(C.QwtSplineCurveFitter_spline(this.h))
}

func (this *QwtSplineCurveFitter) Spline2() *QwtSpline {
	return newQwtSpline(C.QwtSplineCurveFitter_spline2(this.h))
}

func (this *QwtSplineCurveFitter) SetSplineSize(splineSize int) {
	C.QwtSplineCurveFitter_setSplineSize(this.h, (C.int)(splineSize))
}

func (this *QwtSplineCurveFitter) SplineSize() int {
	return (int)(C.QwtSplineCurveFitter_splineSize(this.h))
}

// Delete this object from C++ memory.
func (this *QwtSplineCurveFitter) Delete() {
	C.QwtSplineCurveFitter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtSplineCurveFitter) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtSplineCurveFitter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtWeedingCurveFitter struct {
	h *C.QwtWeedingCurveFitter
	*QwtCurveFitter
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
	C.QwtWeedingCurveFitter_setTolerance(this.h, (C.double)(tolerance))
}

func (this *QwtWeedingCurveFitter) Tolerance() float64 {
	return (float64)(C.QwtWeedingCurveFitter_tolerance(this.h))
}

func (this *QwtWeedingCurveFitter) SetChunkSize(chunkSize uint) {
	C.QwtWeedingCurveFitter_setChunkSize(this.h, (C.uint)(chunkSize))
}

func (this *QwtWeedingCurveFitter) ChunkSize() uint {
	return (uint)(C.QwtWeedingCurveFitter_chunkSize(this.h))
}

// Delete this object from C++ memory.
func (this *QwtWeedingCurveFitter) Delete() {
	C.QwtWeedingCurveFitter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtWeedingCurveFitter) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtWeedingCurveFitter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
