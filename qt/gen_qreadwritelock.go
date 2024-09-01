package qt

/*

#include "gen_qreadwritelock.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QReadWriteLock struct {
	h *C.QReadWriteLock
}

func (this *QReadWriteLock) cPointer() *C.QReadWriteLock {
	if this == nil {
		return nil
	}
	return this.h
}

func newQReadWriteLock(h *C.QReadWriteLock) *QReadWriteLock {
	if h == nil {
		return nil
	}
	return &QReadWriteLock{h: h}
}

func newQReadWriteLock_U(h unsafe.Pointer) *QReadWriteLock {
	return newQReadWriteLock((*C.QReadWriteLock)(h))
}

// NewQReadWriteLock constructs a new QReadWriteLock object.
func NewQReadWriteLock() *QReadWriteLock {
	ret := C.QReadWriteLock_new()
	return newQReadWriteLock(ret)
}

// NewQReadWriteLock2 constructs a new QReadWriteLock object.
func NewQReadWriteLock2(recursionMode uintptr) *QReadWriteLock {
	ret := C.QReadWriteLock_new2((C.uintptr_t)(recursionMode))
	return newQReadWriteLock(ret)
}

func (this *QReadWriteLock) LockForRead() {
	C.QReadWriteLock_LockForRead(this.h)
}

func (this *QReadWriteLock) TryLockForRead() bool {
	ret := C.QReadWriteLock_TryLockForRead(this.h)
	return (bool)(ret)
}

func (this *QReadWriteLock) TryLockForReadWithTimeout(timeout int) bool {
	ret := C.QReadWriteLock_TryLockForReadWithTimeout(this.h, (C.int)(timeout))
	return (bool)(ret)
}

func (this *QReadWriteLock) LockForWrite() {
	C.QReadWriteLock_LockForWrite(this.h)
}

func (this *QReadWriteLock) TryLockForWrite() bool {
	ret := C.QReadWriteLock_TryLockForWrite(this.h)
	return (bool)(ret)
}

func (this *QReadWriteLock) TryLockForWriteWithTimeout(timeout int) bool {
	ret := C.QReadWriteLock_TryLockForWriteWithTimeout(this.h, (C.int)(timeout))
	return (bool)(ret)
}

func (this *QReadWriteLock) Unlock() {
	C.QReadWriteLock_Unlock(this.h)
}

func (this *QReadWriteLock) Delete() {
	C.QReadWriteLock_Delete(this.h)
}

type QReadLocker struct {
	h *C.QReadLocker
}

func (this *QReadLocker) cPointer() *C.QReadLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func newQReadLocker(h *C.QReadLocker) *QReadLocker {
	if h == nil {
		return nil
	}
	return &QReadLocker{h: h}
}

func newQReadLocker_U(h unsafe.Pointer) *QReadLocker {
	return newQReadLocker((*C.QReadLocker)(h))
}

// NewQReadLocker constructs a new QReadLocker object.
func NewQReadLocker(readWriteLock *QReadWriteLock) *QReadLocker {
	ret := C.QReadLocker_new(readWriteLock.cPointer())
	return newQReadLocker(ret)
}

func (this *QReadLocker) Unlock() {
	C.QReadLocker_Unlock(this.h)
}

func (this *QReadLocker) Relock() {
	C.QReadLocker_Relock(this.h)
}

func (this *QReadLocker) ReadWriteLock() *QReadWriteLock {
	ret := C.QReadLocker_ReadWriteLock(this.h)
	return newQReadWriteLock_U(unsafe.Pointer(ret))
}

func (this *QReadLocker) Delete() {
	C.QReadLocker_Delete(this.h)
}

type QWriteLocker struct {
	h *C.QWriteLocker
}

func (this *QWriteLocker) cPointer() *C.QWriteLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWriteLocker(h *C.QWriteLocker) *QWriteLocker {
	if h == nil {
		return nil
	}
	return &QWriteLocker{h: h}
}

func newQWriteLocker_U(h unsafe.Pointer) *QWriteLocker {
	return newQWriteLocker((*C.QWriteLocker)(h))
}

// NewQWriteLocker constructs a new QWriteLocker object.
func NewQWriteLocker(readWriteLock *QReadWriteLock) *QWriteLocker {
	ret := C.QWriteLocker_new(readWriteLock.cPointer())
	return newQWriteLocker(ret)
}

func (this *QWriteLocker) Unlock() {
	C.QWriteLocker_Unlock(this.h)
}

func (this *QWriteLocker) Relock() {
	C.QWriteLocker_Relock(this.h)
}

func (this *QWriteLocker) ReadWriteLock() *QReadWriteLock {
	ret := C.QWriteLocker_ReadWriteLock(this.h)
	return newQReadWriteLock_U(unsafe.Pointer(ret))
}

func (this *QWriteLocker) Delete() {
	C.QWriteLocker_Delete(this.h)
}
