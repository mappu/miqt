package qwt

/*

#include "gen_qwt_scale_map.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtScaleMap struct {
	h *C.QwtScaleMap
}

func (this *QwtScaleMap) cPointer() *C.QwtScaleMap {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtScaleMap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtScaleMap constructs the type using only CGO pointers.
func newQwtScaleMap(h *C.QwtScaleMap) *QwtScaleMap {
	if h == nil {
		return nil
	}

	return &QwtScaleMap{h: h}
}

// UnsafeNewQwtScaleMap constructs the type using only unsafe pointers.
func UnsafeNewQwtScaleMap(h unsafe.Pointer) *QwtScaleMap {
	return newQwtScaleMap((*C.QwtScaleMap)(h))
}

// NewQwtScaleMap constructs a new QwtScaleMap object.
func NewQwtScaleMap() *QwtScaleMap {

	return newQwtScaleMap(C.QwtScaleMap_new())
}

func (this *QwtScaleMap) SetTransformation(transformation *QwtTransform) {
	C.QwtScaleMap_setTransformation(this.h, transformation.cPointer())
}

func (this *QwtScaleMap) Transformation() *QwtTransform {
	return newQwtTransform(C.QwtScaleMap_transformation(this.h))
}

func (this *QwtScaleMap) SetPaintInterval(p1 float64, p2 float64) {
	C.QwtScaleMap_setPaintInterval(this.h, (C.double)(p1), (C.double)(p2))
}

func (this *QwtScaleMap) SetScaleInterval(s1 float64, s2 float64) {
	C.QwtScaleMap_setScaleInterval(this.h, (C.double)(s1), (C.double)(s2))
}

func (this *QwtScaleMap) Transform(s float64) float64 {
	return (float64)(C.QwtScaleMap_transform(this.h, (C.double)(s)))
}

func (this *QwtScaleMap) InvTransform(p float64) float64 {
	return (float64)(C.QwtScaleMap_invTransform(this.h, (C.double)(p)))
}

func (this *QwtScaleMap) P1() float64 {
	return (float64)(C.QwtScaleMap_p1(this.h))
}

func (this *QwtScaleMap) P2() float64 {
	return (float64)(C.QwtScaleMap_p2(this.h))
}

func (this *QwtScaleMap) S1() float64 {
	return (float64)(C.QwtScaleMap_s1(this.h))
}

func (this *QwtScaleMap) S2() float64 {
	return (float64)(C.QwtScaleMap_s2(this.h))
}

func (this *QwtScaleMap) PDist() float64 {
	return (float64)(C.QwtScaleMap_pDist(this.h))
}

func (this *QwtScaleMap) SDist() float64 {
	return (float64)(C.QwtScaleMap_sDist(this.h))
}

func (this *QwtScaleMap) IsInverting() bool {
	return (bool)(C.QwtScaleMap_isInverting(this.h))
}

// Delete this object from C++ memory.
func (this *QwtScaleMap) Delete() {
	C.QwtScaleMap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtScaleMap) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtScaleMap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
