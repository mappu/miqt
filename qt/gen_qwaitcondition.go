package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qwaitcondition.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQWaitCondition(h *C.QWaitCondition) *QWaitCondition {
	if h == nil {
		return nil
	}
	return &QWaitCondition{h: h}
}

func newQWaitCondition_U(h unsafe.Pointer) *QWaitCondition {
	return newQWaitCondition((*C.QWaitCondition)(h))
}

// NewQWaitCondition constructs a new QWaitCondition object.
func NewQWaitCondition() *QWaitCondition {
	ret := C.QWaitCondition_new()
	return newQWaitCondition(ret)
}

func (this *QWaitCondition) Wait(lockedMutex *QMutex) bool {
	ret := C.QWaitCondition_Wait(this.h, lockedMutex.cPointer())
	return (bool)(ret)
}

func (this *QWaitCondition) Wait2(lockedMutex *QMutex, time uint64) bool {
	ret := C.QWaitCondition_Wait2(this.h, lockedMutex.cPointer(), (C.ulong)(time))
	return (bool)(ret)
}

func (this *QWaitCondition) WaitWithLockedReadWriteLock(lockedReadWriteLock *QReadWriteLock) bool {
	ret := C.QWaitCondition_WaitWithLockedReadWriteLock(this.h, lockedReadWriteLock.cPointer())
	return (bool)(ret)
}

func (this *QWaitCondition) Wait3(lockedReadWriteLock *QReadWriteLock, time uint64) bool {
	ret := C.QWaitCondition_Wait3(this.h, lockedReadWriteLock.cPointer(), (C.ulong)(time))
	return (bool)(ret)
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
	ret := C.QWaitCondition_Wait22(this.h, lockedMutex.cPointer(), deadline.cPointer())
	return (bool)(ret)
}

func (this *QWaitCondition) Wait23(lockedReadWriteLock *QReadWriteLock, deadline QDeadlineTimer) bool {
	ret := C.QWaitCondition_Wait23(this.h, lockedReadWriteLock.cPointer(), deadline.cPointer())
	return (bool)(ret)
}

func (this *QWaitCondition) Delete() {
	C.QWaitCondition_Delete(this.h)
}
