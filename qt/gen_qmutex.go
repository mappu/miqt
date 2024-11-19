package qt

/*

#include "gen_qmutex.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMutex__RecursionMode int

const (
	QMutex__NonRecursive QMutex__RecursionMode = 0
	QMutex__Recursive    QMutex__RecursionMode = 1
)

type QBasicMutex struct {
	h          *C.QBasicMutex
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QBasicMutex{h: (*C.QBasicMutex)(h)}
}

// NewQBasicMutex constructs a new QBasicMutex object.
func NewQBasicMutex() *QBasicMutex {
	var outptr_QBasicMutex *C.QBasicMutex = nil

	C.QBasicMutex_new(&outptr_QBasicMutex)
	ret := newQBasicMutex(outptr_QBasicMutex)
	ret.isSubclass = true
	return ret
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

func (this *QBasicMutex) IsRecursive() bool {
	return (bool)(C.QBasicMutex_IsRecursive(this.h))
}

func (this *QBasicMutex) IsRecursive2() bool {
	return (bool)(C.QBasicMutex_IsRecursive2(this.h))
}

// Delete this object from C++ memory.
func (this *QBasicMutex) Delete() {
	C.QBasicMutex_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QMutex
	isSubclass bool
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

// newQMutex constructs the type using only CGO pointers.
func newQMutex(h *C.QMutex, h_QBasicMutex *C.QBasicMutex) *QMutex {
	if h == nil {
		return nil
	}
	return &QMutex{h: h,
		QBasicMutex: newQBasicMutex(h_QBasicMutex)}
}

// UnsafeNewQMutex constructs the type using only unsafe pointers.
func UnsafeNewQMutex(h unsafe.Pointer, h_QBasicMutex unsafe.Pointer) *QMutex {
	if h == nil {
		return nil
	}

	return &QMutex{h: (*C.QMutex)(h),
		QBasicMutex: UnsafeNewQBasicMutex(h_QBasicMutex)}
}

// NewQMutex constructs a new QMutex object.
func NewQMutex() *QMutex {
	var outptr_QMutex *C.QMutex = nil
	var outptr_QBasicMutex *C.QBasicMutex = nil

	C.QMutex_new(&outptr_QMutex, &outptr_QBasicMutex)
	ret := newQMutex(outptr_QMutex, outptr_QBasicMutex)
	ret.isSubclass = true
	return ret
}

// NewQMutex2 constructs a new QMutex object.
func NewQMutex2(mode QMutex__RecursionMode) *QMutex {
	var outptr_QMutex *C.QMutex = nil
	var outptr_QBasicMutex *C.QBasicMutex = nil

	C.QMutex_new2((C.int)(mode), &outptr_QMutex, &outptr_QBasicMutex)
	ret := newQMutex(outptr_QMutex, outptr_QBasicMutex)
	ret.isSubclass = true
	return ret
}

func (this *QMutex) Lock() {
	C.QMutex_Lock(this.h)
}

func (this *QMutex) TryLock() bool {
	return (bool)(C.QMutex_TryLock(this.h))
}

func (this *QMutex) Unlock() {
	C.QMutex_Unlock(this.h)
}

func (this *QMutex) TryLock2() bool {
	return (bool)(C.QMutex_TryLock2(this.h))
}

func (this *QMutex) IsRecursive() bool {
	return (bool)(C.QMutex_IsRecursive(this.h))
}

func (this *QMutex) TryLock1(timeout int) bool {
	return (bool)(C.QMutex_TryLock1(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QMutex) Delete() {
	C.QMutex_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QRecursiveMutex
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QRecursiveMutex{h: (*C.QRecursiveMutex)(h)}
}

// NewQRecursiveMutex constructs a new QRecursiveMutex object.
func NewQRecursiveMutex() *QRecursiveMutex {
	var outptr_QRecursiveMutex *C.QRecursiveMutex = nil

	C.QRecursiveMutex_new(&outptr_QRecursiveMutex)
	ret := newQRecursiveMutex(outptr_QRecursiveMutex)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QRecursiveMutex) Delete() {
	C.QRecursiveMutex_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRecursiveMutex) GoGC() {
	runtime.SetFinalizer(this, func(this *QRecursiveMutex) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMutexLocker struct {
	h          *C.QMutexLocker
	isSubclass bool
}

func (this *QMutexLocker) cPointer() *C.QMutexLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMutexLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMutexLocker constructs the type using only CGO pointers.
func newQMutexLocker(h *C.QMutexLocker) *QMutexLocker {
	if h == nil {
		return nil
	}
	return &QMutexLocker{h: h}
}

// UnsafeNewQMutexLocker constructs the type using only unsafe pointers.
func UnsafeNewQMutexLocker(h unsafe.Pointer) *QMutexLocker {
	if h == nil {
		return nil
	}

	return &QMutexLocker{h: (*C.QMutexLocker)(h)}
}

// NewQMutexLocker constructs a new QMutexLocker object.
func NewQMutexLocker(m *QBasicMutex) *QMutexLocker {
	var outptr_QMutexLocker *C.QMutexLocker = nil

	C.QMutexLocker_new(m.cPointer(), &outptr_QMutexLocker)
	ret := newQMutexLocker(outptr_QMutexLocker)
	ret.isSubclass = true
	return ret
}

// NewQMutexLocker2 constructs a new QMutexLocker object.
func NewQMutexLocker2(m *QRecursiveMutex) *QMutexLocker {
	var outptr_QMutexLocker *C.QMutexLocker = nil

	C.QMutexLocker_new2(m.cPointer(), &outptr_QMutexLocker)
	ret := newQMutexLocker(outptr_QMutexLocker)
	ret.isSubclass = true
	return ret
}

func (this *QMutexLocker) Unlock() {
	C.QMutexLocker_Unlock(this.h)
}

func (this *QMutexLocker) Relock() {
	C.QMutexLocker_Relock(this.h)
}

func (this *QMutexLocker) Mutex() *QMutex {
	return UnsafeNewQMutex(unsafe.Pointer(C.QMutexLocker_Mutex(this.h)), nil)
}

// Delete this object from C++ memory.
func (this *QMutexLocker) Delete() {
	C.QMutexLocker_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMutexLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QMutexLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
