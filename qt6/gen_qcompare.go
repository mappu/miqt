package qt6

/*

#include "gen_qcompare.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__Ordering int8

const (
	QtPrivate__Equal      QtPrivate__Ordering = 0
	QtPrivate__Equivalent QtPrivate__Ordering = 0
	QtPrivate__Less       QtPrivate__Ordering = -1
	QtPrivate__Greater    QtPrivate__Ordering = 1
)

type QtPrivate__Uncomparable int8

const (
	QtPrivate__Unordered QtPrivate__Uncomparable = -127
)

type QPartialOrdering struct {
	h  *C.QPartialOrdering
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPartialOrdering) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPartialOrdering) cPointer() *C.QPartialOrdering {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPartialOrdering) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPartialOrdering constructs the type using only CGO pointers.
func newQPartialOrdering(h *C.QPartialOrdering) *QPartialOrdering {
	if h == nil {
		return nil
	}

	return &QPartialOrdering{h: h}
}

// UnsafeNewQPartialOrdering constructs the type using only unsafe pointers.
func UnsafeNewQPartialOrdering(h unsafe.Pointer) *QPartialOrdering {
	return newQPartialOrdering((*C.QPartialOrdering)(h))
}

// NewQPartialOrdering constructs a new QPartialOrdering object.
func NewQPartialOrdering(param1 *QPartialOrdering) *QPartialOrdering {
	defer runtime.KeepAlive(param1)

	return newQPartialOrdering(C.QPartialOrdering_new(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QPartialOrdering) Delete() {
	C.QPartialOrdering_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPartialOrdering) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPartialOrdering_delete((*C.QPartialOrdering)(gc[0]))
	})
	this.miqtSetGC(gc)
}
