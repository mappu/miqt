package qt

/*

#include "gen_qhashfunctions.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__QHashCombine struct {
	h *C.QtPrivate__QHashCombine
}

func (this *QtPrivate__QHashCombine) cPointer() *C.QtPrivate__QHashCombine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__QHashCombine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__QHashCombine(h *C.QtPrivate__QHashCombine) *QtPrivate__QHashCombine {
	if h == nil {
		return nil
	}
	return &QtPrivate__QHashCombine{h: h}
}

func UnsafeNewQtPrivate__QHashCombine(h unsafe.Pointer) *QtPrivate__QHashCombine {
	return newQtPrivate__QHashCombine((*C.QtPrivate__QHashCombine)(h))
}

// NewQtPrivate__QHashCombine constructs a new QtPrivate::QHashCombine object.
func NewQtPrivate__QHashCombine() *QtPrivate__QHashCombine {
	ret := C.QtPrivate__QHashCombine_new()
	return newQtPrivate__QHashCombine(ret)
}

// Delete this object from C++ memory.
func (this *QtPrivate__QHashCombine) Delete() {
	C.QtPrivate__QHashCombine_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QHashCombine) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QHashCombine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__QHashCombineCommutative struct {
	h *C.QtPrivate__QHashCombineCommutative
}

func (this *QtPrivate__QHashCombineCommutative) cPointer() *C.QtPrivate__QHashCombineCommutative {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__QHashCombineCommutative) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__QHashCombineCommutative(h *C.QtPrivate__QHashCombineCommutative) *QtPrivate__QHashCombineCommutative {
	if h == nil {
		return nil
	}
	return &QtPrivate__QHashCombineCommutative{h: h}
}

func UnsafeNewQtPrivate__QHashCombineCommutative(h unsafe.Pointer) *QtPrivate__QHashCombineCommutative {
	return newQtPrivate__QHashCombineCommutative((*C.QtPrivate__QHashCombineCommutative)(h))
}

// NewQtPrivate__QHashCombineCommutative constructs a new QtPrivate::QHashCombineCommutative object.
func NewQtPrivate__QHashCombineCommutative() *QtPrivate__QHashCombineCommutative {
	ret := C.QtPrivate__QHashCombineCommutative_new()
	return newQtPrivate__QHashCombineCommutative(ret)
}

// Delete this object from C++ memory.
func (this *QtPrivate__QHashCombineCommutative) Delete() {
	C.QtPrivate__QHashCombineCommutative_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QHashCombineCommutative) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QHashCombineCommutative) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
