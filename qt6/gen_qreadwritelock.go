package qt6

/*

#include "gen_qreadwritelock.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QReadWriteLock__RecursionMode int

const (
	QReadWriteLock__NonRecursive QReadWriteLock__RecursionMode = 0
	QReadWriteLock__Recursive    QReadWriteLock__RecursionMode = 1
)

type QReadWriteLock struct {
	h  *C.QReadWriteLock
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QReadWriteLock) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QReadWriteLock) cPointer() *C.QReadWriteLock {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QReadWriteLock) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQReadWriteLock constructs the type using only CGO pointers.
func newQReadWriteLock(h *C.QReadWriteLock) *QReadWriteLock {
	if h == nil {
		return nil
	}

	return &QReadWriteLock{h: h}
}

// UnsafeNewQReadWriteLock constructs the type using only unsafe pointers.
func UnsafeNewQReadWriteLock(h unsafe.Pointer) *QReadWriteLock {
	return newQReadWriteLock((*C.QReadWriteLock)(h))
}

// NewQReadWriteLock constructs a new QReadWriteLock object.
func NewQReadWriteLock() *QReadWriteLock {

	return newQReadWriteLock(C.QReadWriteLock_new())
}

// NewQReadWriteLock2 constructs a new QReadWriteLock object.
func NewQReadWriteLock2(recursionMode QReadWriteLock__RecursionMode) *QReadWriteLock {

	return newQReadWriteLock(C.QReadWriteLock_new2((C.int)(recursionMode)))
}

func (this *QReadWriteLock) LockForRead() {
	defer runtime.KeepAlive(this)
	C.QReadWriteLock_lockForRead(this.h)
}

func (this *QReadWriteLock) TryLockForRead() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QReadWriteLock_tryLockForRead(this.h))
}

func (this *QReadWriteLock) TryLockForReadWithTimeout(timeout int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QReadWriteLock_tryLockForReadWithTimeout(this.h, (C.int)(timeout)))
}

func (this *QReadWriteLock) LockForWrite() {
	defer runtime.KeepAlive(this)
	C.QReadWriteLock_lockForWrite(this.h)
}

func (this *QReadWriteLock) TryLockForWrite() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QReadWriteLock_tryLockForWrite(this.h))
}

func (this *QReadWriteLock) TryLockForWriteWithTimeout(timeout int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QReadWriteLock_tryLockForWriteWithTimeout(this.h, (C.int)(timeout)))
}

func (this *QReadWriteLock) Unlock() {
	defer runtime.KeepAlive(this)
	C.QReadWriteLock_unlock(this.h)
}

// Delete this object from C++ memory.
func (this *QReadWriteLock) Delete() {
	C.QReadWriteLock_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QReadWriteLock) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QReadWriteLock_delete((*C.QReadWriteLock)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QReadLocker struct {
	h  *C.QReadLocker
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QReadLocker) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QReadLocker) cPointer() *C.QReadLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QReadLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQReadLocker constructs the type using only CGO pointers.
func newQReadLocker(h *C.QReadLocker) *QReadLocker {
	if h == nil {
		return nil
	}

	return &QReadLocker{h: h}
}

// UnsafeNewQReadLocker constructs the type using only unsafe pointers.
func UnsafeNewQReadLocker(h unsafe.Pointer) *QReadLocker {
	return newQReadLocker((*C.QReadLocker)(h))
}

// NewQReadLocker constructs a new QReadLocker object.
func NewQReadLocker(readWriteLock *QReadWriteLock) *QReadLocker {
	defer runtime.KeepAlive(readWriteLock)

	return newQReadLocker(C.QReadLocker_new(readWriteLock.cPointer()))
}

func (this *QReadLocker) Unlock() {
	defer runtime.KeepAlive(this)
	C.QReadLocker_unlock(this.h)
}

func (this *QReadLocker) Relock() {
	defer runtime.KeepAlive(this)
	C.QReadLocker_relock(this.h)
}

func (this *QReadLocker) ReadWriteLock() *QReadWriteLock {
	defer runtime.KeepAlive(this)
	return newQReadWriteLock(C.QReadLocker_readWriteLock(this.h))
}

// Delete this object from C++ memory.
func (this *QReadLocker) Delete() {
	C.QReadLocker_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QReadLocker) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QReadLocker_delete((*C.QReadLocker)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QWriteLocker struct {
	h  *C.QWriteLocker
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWriteLocker) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWriteLocker) cPointer() *C.QWriteLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWriteLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWriteLocker constructs the type using only CGO pointers.
func newQWriteLocker(h *C.QWriteLocker) *QWriteLocker {
	if h == nil {
		return nil
	}

	return &QWriteLocker{h: h}
}

// UnsafeNewQWriteLocker constructs the type using only unsafe pointers.
func UnsafeNewQWriteLocker(h unsafe.Pointer) *QWriteLocker {
	return newQWriteLocker((*C.QWriteLocker)(h))
}

// NewQWriteLocker constructs a new QWriteLocker object.
func NewQWriteLocker(readWriteLock *QReadWriteLock) *QWriteLocker {
	defer runtime.KeepAlive(readWriteLock)

	return newQWriteLocker(C.QWriteLocker_new(readWriteLock.cPointer()))
}

func (this *QWriteLocker) Unlock() {
	defer runtime.KeepAlive(this)
	C.QWriteLocker_unlock(this.h)
}

func (this *QWriteLocker) Relock() {
	defer runtime.KeepAlive(this)
	C.QWriteLocker_relock(this.h)
}

func (this *QWriteLocker) ReadWriteLock() *QReadWriteLock {
	defer runtime.KeepAlive(this)
	return newQReadWriteLock(C.QWriteLocker_readWriteLock(this.h))
}

// Delete this object from C++ memory.
func (this *QWriteLocker) Delete() {
	C.QWriteLocker_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWriteLocker) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWriteLocker_delete((*C.QWriteLocker)(gc[0]))
	})
	this.miqtSetGC(gc)
}
