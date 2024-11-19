package qt6

/*

#include "gen_qhashfunctions.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QHashSeed struct {
	h          *C.QHashSeed
	isSubclass bool
}

func (this *QHashSeed) cPointer() *C.QHashSeed {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHashSeed) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHashSeed constructs the type using only CGO pointers.
func newQHashSeed(h *C.QHashSeed) *QHashSeed {
	if h == nil {
		return nil
	}
	return &QHashSeed{h: h}
}

// UnsafeNewQHashSeed constructs the type using only unsafe pointers.
func UnsafeNewQHashSeed(h unsafe.Pointer) *QHashSeed {
	if h == nil {
		return nil
	}

	return &QHashSeed{h: (*C.QHashSeed)(h)}
}

// NewQHashSeed constructs a new QHashSeed object.
func NewQHashSeed() *QHashSeed {
	var outptr_QHashSeed *C.QHashSeed = nil

	C.QHashSeed_new(&outptr_QHashSeed)
	ret := newQHashSeed(outptr_QHashSeed)
	ret.isSubclass = true
	return ret
}

// NewQHashSeed2 constructs a new QHashSeed object.
func NewQHashSeed2(d uint64) *QHashSeed {
	var outptr_QHashSeed *C.QHashSeed = nil

	C.QHashSeed_new2((C.size_t)(d), &outptr_QHashSeed)
	ret := newQHashSeed(outptr_QHashSeed)
	ret.isSubclass = true
	return ret
}

func QHashSeed_GlobalSeed() *QHashSeed {
	_ret := C.QHashSeed_GlobalSeed()
	_goptr := newQHashSeed(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QHashSeed_SetDeterministicGlobalSeed() {
	C.QHashSeed_SetDeterministicGlobalSeed()
}

func QHashSeed_ResetRandomGlobalSeed() {
	C.QHashSeed_ResetRandomGlobalSeed()
}

// Delete this object from C++ memory.
func (this *QHashSeed) Delete() {
	C.QHashSeed_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHashSeed) GoGC() {
	runtime.SetFinalizer(this, func(this *QHashSeed) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__QHashCombine struct {
	h          *C.QtPrivate__QHashCombine
	isSubclass bool
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

// newQtPrivate__QHashCombine constructs the type using only CGO pointers.
func newQtPrivate__QHashCombine(h *C.QtPrivate__QHashCombine) *QtPrivate__QHashCombine {
	if h == nil {
		return nil
	}
	return &QtPrivate__QHashCombine{h: h}
}

// UnsafeNewQtPrivate__QHashCombine constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__QHashCombine(h unsafe.Pointer) *QtPrivate__QHashCombine {
	if h == nil {
		return nil
	}

	return &QtPrivate__QHashCombine{h: (*C.QtPrivate__QHashCombine)(h)}
}

// NewQtPrivate__QHashCombine constructs a new QtPrivate::QHashCombine object.
func NewQtPrivate__QHashCombine() *QtPrivate__QHashCombine {
	var outptr_QtPrivate__QHashCombine *C.QtPrivate__QHashCombine = nil

	C.QtPrivate__QHashCombine_new(&outptr_QtPrivate__QHashCombine)
	ret := newQtPrivate__QHashCombine(outptr_QtPrivate__QHashCombine)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QtPrivate__QHashCombine) Delete() {
	C.QtPrivate__QHashCombine_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QtPrivate__QHashCombineCommutative
	isSubclass bool
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

// newQtPrivate__QHashCombineCommutative constructs the type using only CGO pointers.
func newQtPrivate__QHashCombineCommutative(h *C.QtPrivate__QHashCombineCommutative) *QtPrivate__QHashCombineCommutative {
	if h == nil {
		return nil
	}
	return &QtPrivate__QHashCombineCommutative{h: h}
}

// UnsafeNewQtPrivate__QHashCombineCommutative constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__QHashCombineCommutative(h unsafe.Pointer) *QtPrivate__QHashCombineCommutative {
	if h == nil {
		return nil
	}

	return &QtPrivate__QHashCombineCommutative{h: (*C.QtPrivate__QHashCombineCommutative)(h)}
}

// NewQtPrivate__QHashCombineCommutative constructs a new QtPrivate::QHashCombineCommutative object.
func NewQtPrivate__QHashCombineCommutative() *QtPrivate__QHashCombineCommutative {
	var outptr_QtPrivate__QHashCombineCommutative *C.QtPrivate__QHashCombineCommutative = nil

	C.QtPrivate__QHashCombineCommutative_new(&outptr_QtPrivate__QHashCombineCommutative)
	ret := newQtPrivate__QHashCombineCommutative(outptr_QtPrivate__QHashCombineCommutative)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QtPrivate__QHashCombineCommutative) Delete() {
	C.QtPrivate__QHashCombineCommutative_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QHashCombineCommutative) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QHashCombineCommutative) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
