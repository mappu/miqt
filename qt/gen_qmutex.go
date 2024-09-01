package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmutex.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QBasicMutex struct {
	h *C.QBasicMutex
}

func (this *QBasicMutex) cPointer() *C.QBasicMutex {
	if this == nil {
		return nil
	}
	return this.h
}

func newQBasicMutex(h *C.QBasicMutex) *QBasicMutex {
	if h == nil {
		return nil
	}
	return &QBasicMutex{h: h}
}

func newQBasicMutex_U(h unsafe.Pointer) *QBasicMutex {
	return newQBasicMutex((*C.QBasicMutex)(h))
}

// NewQBasicMutex constructs a new QBasicMutex object.
func NewQBasicMutex() *QBasicMutex {
	ret := C.QBasicMutex_new()
	return newQBasicMutex(ret)
}

func (this *QBasicMutex) Lock() {
	C.QBasicMutex_Lock(this.h)
}

func (this *QBasicMutex) Unlock() {
	C.QBasicMutex_Unlock(this.h)
}

func (this *QBasicMutex) TryLock() bool {
	ret := C.QBasicMutex_TryLock(this.h)
	return (bool)(ret)
}

func (this *QBasicMutex) TryLock2() bool {
	ret := C.QBasicMutex_TryLock2(this.h)
	return (bool)(ret)
}

func (this *QBasicMutex) IsRecursive() bool {
	ret := C.QBasicMutex_IsRecursive(this.h)
	return (bool)(ret)
}

func (this *QBasicMutex) IsRecursive2() bool {
	ret := C.QBasicMutex_IsRecursive2(this.h)
	return (bool)(ret)
}

func (this *QBasicMutex) Delete() {
	C.QBasicMutex_Delete(this.h)
}

type QMutex struct {
	h *C.QMutex
	*QBasicMutex
}

func (this *QMutex) cPointer() *C.QMutex {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMutex(h *C.QMutex) *QMutex {
	if h == nil {
		return nil
	}
	return &QMutex{h: h, QBasicMutex: newQBasicMutex_U(unsafe.Pointer(h))}
}

func newQMutex_U(h unsafe.Pointer) *QMutex {
	return newQMutex((*C.QMutex)(h))
}

// NewQMutex constructs a new QMutex object.
func NewQMutex() *QMutex {
	ret := C.QMutex_new()
	return newQMutex(ret)
}

// NewQMutex2 constructs a new QMutex object.
func NewQMutex2(mode uintptr) *QMutex {
	ret := C.QMutex_new2((C.uintptr_t)(mode))
	return newQMutex(ret)
}

func (this *QMutex) Lock() {
	C.QMutex_Lock(this.h)
}

func (this *QMutex) TryLock() bool {
	ret := C.QMutex_TryLock(this.h)
	return (bool)(ret)
}

func (this *QMutex) Unlock() {
	C.QMutex_Unlock(this.h)
}

func (this *QMutex) TryLock2() bool {
	ret := C.QMutex_TryLock2(this.h)
	return (bool)(ret)
}

func (this *QMutex) IsRecursive() bool {
	ret := C.QMutex_IsRecursive(this.h)
	return (bool)(ret)
}

func (this *QMutex) TryLock1(timeout int) bool {
	ret := C.QMutex_TryLock1(this.h, (C.int)(timeout))
	return (bool)(ret)
}

func (this *QMutex) Delete() {
	C.QMutex_Delete(this.h)
}

type QRecursiveMutex struct {
	h *C.QRecursiveMutex
}

func (this *QRecursiveMutex) cPointer() *C.QRecursiveMutex {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRecursiveMutex(h *C.QRecursiveMutex) *QRecursiveMutex {
	if h == nil {
		return nil
	}
	return &QRecursiveMutex{h: h}
}

func newQRecursiveMutex_U(h unsafe.Pointer) *QRecursiveMutex {
	return newQRecursiveMutex((*C.QRecursiveMutex)(h))
}

// NewQRecursiveMutex constructs a new QRecursiveMutex object.
func NewQRecursiveMutex() *QRecursiveMutex {
	ret := C.QRecursiveMutex_new()
	return newQRecursiveMutex(ret)
}

func (this *QRecursiveMutex) Delete() {
	C.QRecursiveMutex_Delete(this.h)
}

type QMutexLocker struct {
	h *C.QMutexLocker
}

func (this *QMutexLocker) cPointer() *C.QMutexLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMutexLocker(h *C.QMutexLocker) *QMutexLocker {
	if h == nil {
		return nil
	}
	return &QMutexLocker{h: h}
}

func newQMutexLocker_U(h unsafe.Pointer) *QMutexLocker {
	return newQMutexLocker((*C.QMutexLocker)(h))
}

// NewQMutexLocker constructs a new QMutexLocker object.
func NewQMutexLocker(m *QBasicMutex) *QMutexLocker {
	ret := C.QMutexLocker_new(m.cPointer())
	return newQMutexLocker(ret)
}

// NewQMutexLocker2 constructs a new QMutexLocker object.
func NewQMutexLocker2(m *QRecursiveMutex) *QMutexLocker {
	ret := C.QMutexLocker_new2(m.cPointer())
	return newQMutexLocker(ret)
}

func (this *QMutexLocker) Unlock() {
	C.QMutexLocker_Unlock(this.h)
}

func (this *QMutexLocker) Relock() {
	C.QMutexLocker_Relock(this.h)
}

func (this *QMutexLocker) Mutex() *QMutex {
	ret := C.QMutexLocker_Mutex(this.h)
	return newQMutex_U(unsafe.Pointer(ret))
}

func (this *QMutexLocker) Delete() {
	C.QMutexLocker_Delete(this.h)
}
