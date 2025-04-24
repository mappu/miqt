package pdf

/*

#include "gen_qpdfdestination.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPdfDestination struct {
	h *C.QPdfDestination
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

	return newQPdfDestination(C.QPdfDestination_new(other.cPointer()))
}

func (this *QPdfDestination) OperatorAssign(other *QPdfDestination) {
	C.QPdfDestination_operatorAssign(this.h, other.cPointer())
}

func (this *QPdfDestination) Swap(other *QPdfDestination) {
	C.QPdfDestination_swap(this.h, other.cPointer())
}

func (this *QPdfDestination) IsValid() bool {
	return (bool)(C.QPdfDestination_isValid(this.h))
}

func (this *QPdfDestination) Page() int {
	return (int)(C.QPdfDestination_page(this.h))
}

func (this *QPdfDestination) Location() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QPdfDestination_location(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDestination) Zoom() float64 {
	return (float64)(C.QPdfDestination_zoom(this.h))
}

// Delete this object from C++ memory.
func (this *QPdfDestination) Delete() {
	C.QPdfDestination_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfDestination) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfDestination) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
