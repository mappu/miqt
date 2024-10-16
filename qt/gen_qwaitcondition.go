package qt

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
	h *C.QWaitCondition
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

func newQWaitCondition(h *C.QWaitCondition) *QWaitCondition {
	if h == nil {
		return nil
	}
	return &QWaitCondition{h: h}
}

func UnsafeNewQWaitCondition(h unsafe.Pointer) *QWaitCondition {
	return newQWaitCondition((*C.QWaitCondition)(h))
}

// NewQWaitCondition constructs a new QWaitCondition object.
func NewQWaitCondition() *QWaitCondition {
	ret := C.QWaitCondition_new()
	return newQWaitCondition(ret)
}

func (this *QWaitCondition) Wait(lockedMutex *QMutex) bool {
	return (bool)(C.QWaitCondition_Wait(this.h, lockedMutex.cPointer()))
}

func (this *QWaitCondition) Wait2(lockedMutex *QMutex, time uint64) bool {
	return (bool)(C.QWaitCondition_Wait2(this.h, lockedMutex.cPointer(), (C.ulong)(time)))
}

func (this *QWaitCondition) WaitWithLockedReadWriteLock(lockedReadWriteLock *QReadWriteLock) bool {
	return (bool)(C.QWaitCondition_WaitWithLockedReadWriteLock(this.h, lockedReadWriteLock.cPointer()))
}

func (this *QWaitCondition) Wait3(lockedReadWriteLock *QReadWriteLock, time uint64) bool {
	return (bool)(C.QWaitCondition_Wait3(this.h, lockedReadWriteLock.cPointer(), (C.ulong)(time)))
}

func (this *QWaitCondition) WakeOne() {
	C.QWaitCondition_WakeOne(this.h)
}

func (this *QWaitCondition) WakeAll() {
	C.QWaitCondition_WakeAll(this.h)
}

func (this *QWaitCondition) NotifyOne() {
	C.QWaitCondition_NotifyOne(this.h)
}

func (this *QWaitCondition) NotifyAll() {
	C.QWaitCondition_NotifyAll(this.h)
}

func (this *QWaitCondition) Wait22(lockedMutex *QMutex, deadline QDeadlineTimer) bool {
	return (bool)(C.QWaitCondition_Wait22(this.h, lockedMutex.cPointer(), deadline.cPointer()))
}

func (this *QWaitCondition) Wait23(lockedReadWriteLock *QReadWriteLock, deadline QDeadlineTimer) bool {
	return (bool)(C.QWaitCondition_Wait23(this.h, lockedReadWriteLock.cPointer(), deadline.cPointer()))
}

// Delete this object from C++ memory.
func (this *QWaitCondition) Delete() {
	C.QWaitCondition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWaitCondition) GoGC() {
	runtime.SetFinalizer(this, func(this *QWaitCondition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
