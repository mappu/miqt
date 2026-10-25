package qt6

/*

#include "gen_qcolortransform.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QColorTransform struct {
	h  *C.QColorTransform
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QColorTransform) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QColorTransform) cPointer() *C.QColorTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColorTransform) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColorTransform constructs the type using only CGO pointers.
func newQColorTransform(h *C.QColorTransform) *QColorTransform {
	if h == nil {
		return nil
	}

	return &QColorTransform{h: h}
}

// UnsafeNewQColorTransform constructs the type using only unsafe pointers.
func UnsafeNewQColorTransform(h unsafe.Pointer) *QColorTransform {
	return newQColorTransform((*C.QColorTransform)(h))
}

// NewQColorTransform constructs a new QColorTransform object.
func NewQColorTransform() *QColorTransform {

	return newQColorTransform(C.QColorTransform_new())
}

// NewQColorTransform2 constructs a new QColorTransform object.
func NewQColorTransform2(colorTransform *QColorTransform) *QColorTransform {
	defer runtime.KeepAlive(colorTransform)

	return newQColorTransform(C.QColorTransform_new2(colorTransform.cPointer()))
}

func (this *QColorTransform) OperatorAssign(other *QColorTransform) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QColorTransform_operatorAssign(this.h, other.cPointer())
}

func (this *QColorTransform) Swap(other *QColorTransform) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QColorTransform_swap(this.h, other.cPointer())
}

func (this *QColorTransform) IsIdentity() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QColorTransform_isIdentity(this.h))
}

func (this *QColorTransform) Map(argb uint) uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QColorTransform_map(this.h, (C.uint)(argb)))
}

func (this *QColorTransform) MapWithRgba64(rgba64 QRgba64) *QRgba64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rgba64)
	_goptr := newQRgba64(C.QColorTransform_mapWithRgba64(this.h, rgba64.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorTransform) MapWithColor(color *QColor) *QColor {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(color)
	_goptr := newQColor(C.QColorTransform_mapWithColor(this.h, color.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColorTransform) Delete() {
	C.QColorTransform_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QColorTransform) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QColorTransform_delete((*C.QColorTransform)(gc[0]))
	})
	this.miqtSetGC(gc)
}
