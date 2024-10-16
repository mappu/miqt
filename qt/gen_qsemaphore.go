package qt

/*

#include "gen_qsemaphore.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSemaphore struct {
	h *C.QSemaphore
}

func (this *QSemaphore) cPointer() *C.QSemaphore {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSemaphore) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSemaphore(h *C.QSemaphore) *QSemaphore {
	if h == nil {
		return nil
	}
	return &QSemaphore{h: h}
}

func UnsafeNewQSemaphore(h unsafe.Pointer) *QSemaphore {
	return newQSemaphore((*C.QSemaphore)(h))
}

// NewQSemaphore constructs a new QSemaphore object.
func NewQSemaphore() *QSemaphore {
	ret := C.QSemaphore_new()
	return newQSemaphore(ret)
}

// NewQSemaphore2 constructs a new QSemaphore object.
func NewQSemaphore2(n int) *QSemaphore {
	ret := C.QSemaphore_new2((C.int)(n))
	return newQSemaphore(ret)
}

func (this *QSemaphore) Acquire() {
	C.QSemaphore_Acquire(this.h)
}

func (this *QSemaphore) TryAcquire() bool {
	return (bool)(C.QSemaphore_TryAcquire(this.h))
}

func (this *QSemaphore) TryAcquire2(n int, timeout int) bool {
	return (bool)(C.QSemaphore_TryAcquire2(this.h, (C.int)(n), (C.int)(timeout)))
}

func (this *QSemaphore) Release() {
	C.QSemaphore_Release(this.h)
}

func (this *QSemaphore) Available() int {
	return (int)(C.QSemaphore_Available(this.h))
}

func (this *QSemaphore) Acquire1(n int) {
	C.QSemaphore_Acquire1(this.h, (C.int)(n))
}

func (this *QSemaphore) TryAcquire1(n int) bool {
	return (bool)(C.QSemaphore_TryAcquire1(this.h, (C.int)(n)))
}

func (this *QSemaphore) Release1(n int) {
	C.QSemaphore_Release1(this.h, (C.int)(n))
}

// Delete this object from C++ memory.
func (this *QSemaphore) Delete() {
	C.QSemaphore_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSemaphore) GoGC() {
	runtime.SetFinalizer(this, func(this *QSemaphore) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSemaphoreReleaser struct {
	h *C.QSemaphoreReleaser
}

func (this *QSemaphoreReleaser) cPointer() *C.QSemaphoreReleaser {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSemaphoreReleaser) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSemaphoreReleaser(h *C.QSemaphoreReleaser) *QSemaphoreReleaser {
	if h == nil {
		return nil
	}
	return &QSemaphoreReleaser{h: h}
}

func UnsafeNewQSemaphoreReleaser(h unsafe.Pointer) *QSemaphoreReleaser {
	return newQSemaphoreReleaser((*C.QSemaphoreReleaser)(h))
}

// NewQSemaphoreReleaser constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser() *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new()
	return newQSemaphoreReleaser(ret)
}

// NewQSemaphoreReleaser2 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser2(sem *QSemaphore) *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new2(sem.cPointer())
	return newQSemaphoreReleaser(ret)
}

// NewQSemaphoreReleaser3 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser3(sem *QSemaphore) *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new3(sem.cPointer())
	return newQSemaphoreReleaser(ret)
}

// NewQSemaphoreReleaser4 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser4(sem *QSemaphore, n int) *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new4(sem.cPointer(), (C.int)(n))
	return newQSemaphoreReleaser(ret)
}

// NewQSemaphoreReleaser5 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser5(sem *QSemaphore, n int) *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new5(sem.cPointer(), (C.int)(n))
	return newQSemaphoreReleaser(ret)
}

func (this *QSemaphoreReleaser) Swap(other *QSemaphoreReleaser) {
	C.QSemaphoreReleaser_Swap(this.h, other.cPointer())
}

func (this *QSemaphoreReleaser) Semaphore() *QSemaphore {
	return UnsafeNewQSemaphore(unsafe.Pointer(C.QSemaphoreReleaser_Semaphore(this.h)))
}

func (this *QSemaphoreReleaser) Cancel() *QSemaphore {
	return UnsafeNewQSemaphore(unsafe.Pointer(C.QSemaphoreReleaser_Cancel(this.h)))
}

// Delete this object from C++ memory.
func (this *QSemaphoreReleaser) Delete() {
	C.QSemaphoreReleaser_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSemaphoreReleaser) GoGC() {
	runtime.SetFinalizer(this, func(this *QSemaphoreReleaser) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
