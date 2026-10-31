package pdf

/*

#include "gen_qpdfdestination.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPdfDestination struct {
	h  *C.QPdfDestination
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPdfDestination) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPdfDestination) cPointer() *C.QPdfDestination {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfDestination) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfDestination constructs the type using only CGO pointers.
func newQPdfDestination(h *C.QPdfDestination) *QPdfDestination {
	if h == nil {
		return nil
	}

	return &QPdfDestination{h: h}
}

// UnsafeNewQPdfDestination constructs the type using only unsafe pointers.
func UnsafeNewQPdfDestination(h unsafe.Pointer) *QPdfDestination {
	return newQPdfDestination((*C.QPdfDestination)(h))
}

// NewQPdfDestination constructs a new QPdfDestination object.
func NewQPdfDestination(other *QPdfDestination) *QPdfDestination {
	defer runtime.KeepAlive(other)

	return newQPdfDestination(C.QPdfDestination_new(other.cPointer()))
}

func (this *QPdfDestination) OperatorAssign(other *QPdfDestination) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPdfDestination_operatorAssign(this.h, other.cPointer())
}

func (this *QPdfDestination) Swap(other *QPdfDestination) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPdfDestination_swap(this.h, other.cPointer())
}

func (this *QPdfDestination) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPdfDestination_isValid(this.h))
}

func (this *QPdfDestination) Page() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPdfDestination_page(this.h))
}

func (this *QPdfDestination) Location() qt.QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QPointF](C.QPdfDestination_location(this.h))
}

func (this *QPdfDestination) Zoom() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPdfDestination_zoom(this.h))
}

// Delete this object from C++ memory.
func (this *QPdfDestination) Delete() {
	C.QPdfDestination_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPdfDestination) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPdfDestination_delete((*C.QPdfDestination)(gc[0]))
	})
	this.miqtSetGC(gc)
}
