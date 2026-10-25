package qt6

/*

#include "gen_qmutex.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBasicMutex struct {
	h  *C.QBasicMutex
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QBasicMutex) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QBasicMutex) cPointer() *C.QBasicMutex {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBasicMutex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBasicMutex constructs the type using only CGO pointers.
func newQBasicMutex(h *C.QBasicMutex) *QBasicMutex {
	if h == nil {
		return nil
	}

	return &QBasicMutex{h: h}
}

// UnsafeNewQBasicMutex constructs the type using only unsafe pointers.
func UnsafeNewQBasicMutex(h unsafe.Pointer) *QBasicMutex {
	return newQBasicMutex((*C.QBasicMutex)(h))
}

// NewQBasicMutex constructs a new QBasicMutex object.
func NewQBasicMutex() *QBasicMutex {

	return newQBasicMutex(C.QBasicMutex_new())
}

func (this *QBasicMutex) Lock() {
	defer runtime.KeepAlive(this)
	C.QBasicMutex_lock(this.h)
}

func (this *QBasicMutex) Unlock() {
	defer runtime.KeepAlive(this)
	C.QBasicMutex_unlock(this.h)
}

func (this *QBasicMutex) TryLock() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBasicMutex_tryLock(this.h))
}

func (this *QBasicMutex) TryLock2() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBasicMutex_tryLock2(this.h))
}

// Delete this object from C++ memory.
func (this *QBasicMutex) Delete() {
	C.QBasicMutex_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QBasicMutex) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QBasicMutex_delete((*C.QBasicMutex)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMutex struct {
	h  *C.QMutex
	gc *[1]unsafe.Pointer
	*QBasicMutex
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMutex) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QBasicMutex.miqtSetGC(gc)
}

func (this *QMutex) cPointer() *C.QMutex {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMutex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMutex constructs the type using only CGO pointers.
func newQMutex(h *C.QMutex) *QMutex {
	if h == nil {
		return nil
	}
	var outptr_QBasicMutex *C.QBasicMutex = nil
	C.QMutex_virtbase(h, &outptr_QBasicMutex)

	return &QMutex{h: h,
		QBasicMutex: newQBasicMutex(outptr_QBasicMutex)}
}

// UnsafeNewQMutex constructs the type using only unsafe pointers.
func UnsafeNewQMutex(h unsafe.Pointer) *QMutex {
	return newQMutex((*C.QMutex)(h))
}

// NewQMutex constructs a new QMutex object.
func NewQMutex() *QMutex {

	return newQMutex(C.QMutex_new())
}

func (this *QMutex) TryLock() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMutex_tryLock(this.h))
}

func (this *QMutex) TryLockWithTimeout(timeout int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMutex_tryLockWithTimeout(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QMutex) Delete() {
	C.QMutex_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMutex) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMutex_delete((*C.QMutex)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QRecursiveMutex struct {
	h  *C.QRecursiveMutex
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QRecursiveMutex) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QRecursiveMutex) cPointer() *C.QRecursiveMutex {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRecursiveMutex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRecursiveMutex constructs the type using only CGO pointers.
func newQRecursiveMutex(h *C.QRecursiveMutex) *QRecursiveMutex {
	if h == nil {
		return nil
	}

	return &QRecursiveMutex{h: h}
}

// UnsafeNewQRecursiveMutex constructs the type using only unsafe pointers.
func UnsafeNewQRecursiveMutex(h unsafe.Pointer) *QRecursiveMutex {
	return newQRecursiveMutex((*C.QRecursiveMutex)(h))
}

// NewQRecursiveMutex constructs a new QRecursiveMutex object.
func NewQRecursiveMutex() *QRecursiveMutex {

	return newQRecursiveMutex(C.QRecursiveMutex_new())
}

func (this *QRecursiveMutex) Lock() {
	defer runtime.KeepAlive(this)
	C.QRecursiveMutex_lock(this.h)
}

func (this *QRecursiveMutex) TryLock() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRecursiveMutex_tryLock(this.h))
}

func (this *QRecursiveMutex) Unlock() {
	defer runtime.KeepAlive(this)
	C.QRecursiveMutex_unlock(this.h)
}

func (this *QRecursiveMutex) TryLock2() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRecursiveMutex_tryLock2(this.h))
}

func (this *QRecursiveMutex) TryLockWithTimeout(timeout int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRecursiveMutex_tryLockWithTimeout(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QRecursiveMutex) Delete() {
	C.QRecursiveMutex_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QRecursiveMutex) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QRecursiveMutex_delete((*C.QRecursiveMutex)(gc[0]))
	})
	this.miqtSetGC(gc)
}
