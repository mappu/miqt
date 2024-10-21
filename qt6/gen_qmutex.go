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
	h *C.QBasicMutex
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

func newQBasicMutex(h *C.QBasicMutex) *QBasicMutex {
	if h == nil {
		return nil
	}
	return &QBasicMutex{h: h}
}

func UnsafeNewQBasicMutex(h unsafe.Pointer) *QBasicMutex {
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
	return (bool)(C.QBasicMutex_TryLock(this.h))
}

func (this *QBasicMutex) TryLock2() bool {
	return (bool)(C.QBasicMutex_TryLock2(this.h))
}

// Delete this object from C++ memory.
func (this *QBasicMutex) Delete() {
	C.QBasicMutex_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBasicMutex) GoGC() {
	runtime.SetFinalizer(this, func(this *QBasicMutex) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QMutex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMutex(h *C.QMutex) *QMutex {
	if h == nil {
		return nil
	}
	return &QMutex{h: h, QBasicMutex: UnsafeNewQBasicMutex(unsafe.Pointer(h))}
}

func UnsafeNewQMutex(h unsafe.Pointer) *QMutex {
	return newQMutex((*C.QMutex)(h))
}

// NewQMutex constructs a new QMutex object.
func NewQMutex() *QMutex {
	ret := C.QMutex_new()
	return newQMutex(ret)
}

func (this *QMutex) TryLock() bool {
	return (bool)(C.QMutex_TryLock(this.h))
}

func (this *QMutex) TryLockWithTimeout(timeout int) bool {
	return (bool)(C.QMutex_TryLockWithTimeout(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QMutex) Delete() {
	C.QMutex_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMutex) GoGC() {
	runtime.SetFinalizer(this, func(this *QMutex) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QRecursiveMutex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRecursiveMutex(h *C.QRecursiveMutex) *QRecursiveMutex {
	if h == nil {
		return nil
	}
	return &QRecursiveMutex{h: h}
}

func UnsafeNewQRecursiveMutex(h unsafe.Pointer) *QRecursiveMutex {
	return newQRecursiveMutex((*C.QRecursiveMutex)(h))
}

// NewQRecursiveMutex constructs a new QRecursiveMutex object.
func NewQRecursiveMutex() *QRecursiveMutex {
	ret := C.QRecursiveMutex_new()
	return newQRecursiveMutex(ret)
}

func (this *QRecursiveMutex) Lock() {
	C.QRecursiveMutex_Lock(this.h)
}

func (this *QRecursiveMutex) TryLock() bool {
	return (bool)(C.QRecursiveMutex_TryLock(this.h))
}

func (this *QRecursiveMutex) Unlock() {
	C.QRecursiveMutex_Unlock(this.h)
}

func (this *QRecursiveMutex) TryLock2() bool {
	return (bool)(C.QRecursiveMutex_TryLock2(this.h))
}

func (this *QRecursiveMutex) TryLock1(timeout int) bool {
	return (bool)(C.QRecursiveMutex_TryLock1(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QRecursiveMutex) Delete() {
	C.QRecursiveMutex_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRecursiveMutex) GoGC() {
	runtime.SetFinalizer(this, func(this *QRecursiveMutex) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
