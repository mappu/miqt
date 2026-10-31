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
	h  *C.QHashSeed
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QHashSeed) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQHashSeed((*C.QHashSeed)(h))
}

// NewQHashSeed constructs a new QHashSeed object.
func NewQHashSeed() *QHashSeed {

	return newQHashSeed(C.QHashSeed_new())
}

// NewQHashSeed2 constructs a new QHashSeed object.
func NewQHashSeed2(d uint64) *QHashSeed {

	return newQHashSeed(C.QHashSeed_new2((C.size_t)(d)))
}

func QHashSeed_GlobalSeed() *QHashSeed {
	_goptr := newQHashSeed(C.QHashSeed_globalSeed())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QHashSeed_SetDeterministicGlobalSeed() {
	C.QHashSeed_setDeterministicGlobalSeed()
}

func QHashSeed_ResetRandomGlobalSeed() {
	C.QHashSeed_resetRandomGlobalSeed()
}

// Delete this object from C++ memory.
func (this *QHashSeed) Delete() {
	C.QHashSeed_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QHashSeed) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QHashSeed_delete((*C.QHashSeed)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QGlobalQHashSeed2() int {
	return (int)(C.miqt_QGlobalQHashSeed2())
}

func QSetGlobalQHashSeedWithNewSeed(newSeed int) {
	C.miqt_QSetGlobalQHashSeedWithNewSeed((C.int)(newSeed))
}

func QHashBits2(p unsafe.Pointer, size uint64, seed uint64) uint64 {
	return (uint64)(C.miqt_QHashBits2(p, (C.size_t)(size), (C.size_t)(seed)))
}
