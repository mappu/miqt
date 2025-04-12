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

// newQSemaphore constructs the type using only CGO pointers.
func newQSemaphore(h *C.QSemaphore) *QSemaphore {
	if h == nil {
		return nil
	}

	return &QSemaphore{h: h}
}

// UnsafeNewQSemaphore constructs the type using only unsafe pointers.
func UnsafeNewQSemaphore(h unsafe.Pointer) *QSemaphore {
	return newQSemaphore((*C.QSemaphore)(h))
}

// NewQSemaphore constructs a new QSemaphore object.
func NewQSemaphore() *QSemaphore {

	return newQSemaphore(C.QSemaphore_new())
}

// NewQSemaphore2 constructs a new QSemaphore object.
func NewQSemaphore2(n int) *QSemaphore {

	return newQSemaphore(C.QSemaphore_new2((C.int)(n)))
}

func (this *QSemaphore) Acquire() {
	C.QSemaphore_acquire(this.h)
}

func (this *QSemaphore) TryAcquire() bool {
	return (bool)(C.QSemaphore_tryAcquire(this.h))
}

func (this *QSemaphore) TryAcquire2(n int, timeout int) bool {
	return (bool)(C.QSemaphore_tryAcquire2(this.h, (C.int)(n), (C.int)(timeout)))
}

func (this *QSemaphore) Release() {
	C.QSemaphore_release(this.h)
}

func (this *QSemaphore) Available() int {
	return (int)(C.QSemaphore_available(this.h))
}

func (this *QSemaphore) AcquireWithInt(n int) {
	C.QSemaphore_acquireWithInt(this.h, (C.int)(n))
}

func (this *QSemaphore) TryAcquireWithInt(n int) bool {
	return (bool)(C.QSemaphore_tryAcquireWithInt(this.h, (C.int)(n)))
}

func (this *QSemaphore) ReleaseWithInt(n int) {
	C.QSemaphore_releaseWithInt(this.h, (C.int)(n))
}

// Delete this object from C++ memory.
func (this *QSemaphore) Delete() {
	C.QSemaphore_delete(this.h)
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

// newQSemaphoreReleaser constructs the type using only CGO pointers.
func newQSemaphoreReleaser(h *C.QSemaphoreReleaser) *QSemaphoreReleaser {
	if h == nil {
		return nil
	}

	return &QSemaphoreReleaser{h: h}
}

// UnsafeNewQSemaphoreReleaser constructs the type using only unsafe pointers.
func UnsafeNewQSemaphoreReleaser(h unsafe.Pointer) *QSemaphoreReleaser {
	return newQSemaphoreReleaser((*C.QSemaphoreReleaser)(h))
}

// NewQSemaphoreReleaser constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser() *QSemaphoreReleaser {

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new())
}

// NewQSemaphoreReleaser2 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser2(sem *QSemaphore) *QSemaphoreReleaser {

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new2(sem.cPointer()))
}

// NewQSemaphoreReleaser3 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser3(sem *QSemaphore) *QSemaphoreReleaser {

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new3(sem.cPointer()))
}

// NewQSemaphoreReleaser4 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser4(sem *QSemaphore, n int) *QSemaphoreReleaser {

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new4(sem.cPointer(), (C.int)(n)))
}

// NewQSemaphoreReleaser5 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser5(sem *QSemaphore, n int) *QSemaphoreReleaser {

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new5(sem.cPointer(), (C.int)(n)))
}

func (this *QSemaphoreReleaser) Swap(other *QSemaphoreReleaser) {
	C.QSemaphoreReleaser_swap(this.h, other.cPointer())
}

func (this *QSemaphoreReleaser) Semaphore() *QSemaphore {
	return newQSemaphore(C.QSemaphoreReleaser_semaphore(this.h))
}

func (this *QSemaphoreReleaser) Cancel() *QSemaphore {
	return newQSemaphore(C.QSemaphoreReleaser_cancel(this.h))
}

// Delete this object from C++ memory.
func (this *QSemaphoreReleaser) Delete() {
	C.QSemaphoreReleaser_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSemaphoreReleaser) GoGC() {
	runtime.SetFinalizer(this, func(this *QSemaphoreReleaser) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
