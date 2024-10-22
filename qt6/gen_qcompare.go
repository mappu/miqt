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
	h *C.QPartialOrdering
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

func newQPartialOrdering(h *C.QPartialOrdering) *QPartialOrdering {
	if h == nil {
		return nil
	}
	return &QPartialOrdering{h: h}
}

func UnsafeNewQPartialOrdering(h unsafe.Pointer) *QPartialOrdering {
	return newQPartialOrdering((*C.QPartialOrdering)(h))
}

// NewQPartialOrdering constructs a new QPartialOrdering object.
func NewQPartialOrdering(param1 *QPartialOrdering) *QPartialOrdering {
	ret := C.QPartialOrdering_new(param1.cPointer())
	return newQPartialOrdering(ret)
}

// Delete this object from C++ memory.
func (this *QPartialOrdering) Delete() {
	C.QPartialOrdering_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPartialOrdering) GoGC() {
	runtime.SetFinalizer(this, func(this *QPartialOrdering) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
