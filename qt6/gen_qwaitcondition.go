package qt6

/*

#include "gen_qwaitcondition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWaitCondition struct {
	h  *C.QWaitCondition
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWaitCondition) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWaitCondition) cPointer() *C.QWaitCondition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWaitCondition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWaitCondition constructs the type using only CGO pointers.
func newQWaitCondition(h *C.QWaitCondition) *QWaitCondition {
	if h == nil {
		return nil
	}

	return &QWaitCondition{h: h}
}

// UnsafeNewQWaitCondition constructs the type using only unsafe pointers.
func UnsafeNewQWaitCondition(h unsafe.Pointer) *QWaitCondition {
	return newQWaitCondition((*C.QWaitCondition)(h))
}

// NewQWaitCondition constructs a new QWaitCondition object.
func NewQWaitCondition() *QWaitCondition {

	return newQWaitCondition(C.QWaitCondition_new())
}

func (this *QWaitCondition) Wait(lockedMutex *QMutex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lockedMutex)
	return (bool)(C.QWaitCondition_wait(this.h, lockedMutex.cPointer()))
}

func (this *QWaitCondition) Wait2(lockedMutex *QMutex, time uint64) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lockedMutex)
	return (bool)(C.QWaitCondition_wait2(this.h, lockedMutex.cPointer(), (C.ulong)(time)))
}

func (this *QWaitCondition) WaitWithLockedReadWriteLock(lockedReadWriteLock *QReadWriteLock) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lockedReadWriteLock)
	return (bool)(C.QWaitCondition_waitWithLockedReadWriteLock(this.h, lockedReadWriteLock.cPointer()))
}

func (this *QWaitCondition) Wait3(lockedReadWriteLock *QReadWriteLock, time uint64) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lockedReadWriteLock)
	return (bool)(C.QWaitCondition_wait3(this.h, lockedReadWriteLock.cPointer(), (C.ulong)(time)))
}

func (this *QWaitCondition) WakeOne() {
	defer runtime.KeepAlive(this)
	C.QWaitCondition_wakeOne(this.h)
}

func (this *QWaitCondition) WakeAll() {
	defer runtime.KeepAlive(this)
	C.QWaitCondition_wakeAll(this.h)
}

func (this *QWaitCondition) NotifyOne() {
	defer runtime.KeepAlive(this)
	C.QWaitCondition_notifyOne(this.h)
}

func (this *QWaitCondition) NotifyAll() {
	defer runtime.KeepAlive(this)
	C.QWaitCondition_notifyAll(this.h)
}

func (this *QWaitCondition) Wait4(lockedMutex *QMutex, deadline QDeadlineTimer) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lockedMutex)
	defer runtime.KeepAlive(deadline)
	return (bool)(C.QWaitCondition_wait4(this.h, lockedMutex.cPointer(), deadline.cPointer()))
}

func (this *QWaitCondition) Wait5(lockedReadWriteLock *QReadWriteLock, deadline QDeadlineTimer) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lockedReadWriteLock)
	defer runtime.KeepAlive(deadline)
	return (bool)(C.QWaitCondition_wait5(this.h, lockedReadWriteLock.cPointer(), deadline.cPointer()))
}

// Delete this object from C++ memory.
func (this *QWaitCondition) Delete() {
	C.QWaitCondition_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWaitCondition) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWaitCondition_delete((*C.QWaitCondition)(gc[0]))
	})
	this.miqtSetGC(gc)
}
