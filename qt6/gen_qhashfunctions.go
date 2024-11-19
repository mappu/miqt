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
