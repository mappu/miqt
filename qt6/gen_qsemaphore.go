package qt6

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
	h  *C.QSemaphore
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSemaphore) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(this)
	C.QSemaphore_acquire(this.h)
}

func (this *QSemaphore) TryAcquire() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSemaphore_tryAcquire(this.h))
}

func (this *QSemaphore) TryAcquire2(n int, timeout int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSemaphore_tryAcquire2(this.h, (C.int)(n), (C.int)(timeout)))
}

func (this *QSemaphore) Release() {
	defer runtime.KeepAlive(this)
	C.QSemaphore_release(this.h)
}

func (this *QSemaphore) Available() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSemaphore_available(this.h))
}

func (this *QSemaphore) TryAcquire3() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSemaphore_tryAcquire3(this.h))
}

func (this *QSemaphore) AcquireWithInt(n int) {
	defer runtime.KeepAlive(this)
	C.QSemaphore_acquireWithInt(this.h, (C.int)(n))
}

func (this *QSemaphore) TryAcquireWithInt(n int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSemaphore_tryAcquireWithInt(this.h, (C.int)(n)))
}

func (this *QSemaphore) ReleaseWithInt(n int) {
	defer runtime.KeepAlive(this)
	C.QSemaphore_releaseWithInt(this.h, (C.int)(n))
}

// Delete this object from C++ memory.
func (this *QSemaphore) Delete() {
	C.QSemaphore_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSemaphore) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSemaphore_delete((*C.QSemaphore)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QSemaphoreReleaser struct {
	h  *C.QSemaphoreReleaser
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSemaphoreReleaser) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(sem)

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new2(sem.cPointer()))
}

// NewQSemaphoreReleaser3 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser3(sem *QSemaphore) *QSemaphoreReleaser {
	defer runtime.KeepAlive(sem)

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new3(sem.cPointer()))
}

// NewQSemaphoreReleaser4 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser4(sem *QSemaphore, n int) *QSemaphoreReleaser {
	defer runtime.KeepAlive(sem)

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new4(sem.cPointer(), (C.int)(n)))
}

// NewQSemaphoreReleaser5 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser5(sem *QSemaphore, n int) *QSemaphoreReleaser {
	defer runtime.KeepAlive(sem)

	return newQSemaphoreReleaser(C.QSemaphoreReleaser_new5(sem.cPointer(), (C.int)(n)))
}

func (this *QSemaphoreReleaser) Swap(other *QSemaphoreReleaser) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSemaphoreReleaser_swap(this.h, other.cPointer())
}

func (this *QSemaphoreReleaser) Semaphore() *QSemaphore {
	defer runtime.KeepAlive(this)
	return newQSemaphore(C.QSemaphoreReleaser_semaphore(this.h))
}

func (this *QSemaphoreReleaser) Cancel() *QSemaphore {
	defer runtime.KeepAlive(this)
	return newQSemaphore(C.QSemaphoreReleaser_cancel(this.h))
}

// Delete this object from C++ memory.
func (this *QSemaphoreReleaser) Delete() {
	C.QSemaphoreReleaser_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSemaphoreReleaser) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSemaphoreReleaser_delete((*C.QSemaphoreReleaser)(gc[0]))
	})
	this.miqtSetGC(gc)
}
