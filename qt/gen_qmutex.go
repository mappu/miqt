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
	C.QBasicMutex_lock(this.h)
}

func (this *QBasicMutex) Unlock() {
	C.QBasicMutex_unlock(this.h)
}

func (this *QBasicMutex) TryLock() bool {
	return (bool)(C.QBasicMutex_tryLock(this.h))
}

func (this *QBasicMutex) TryLock2() bool {
	return (bool)(C.QBasicMutex_tryLock2(this.h))
}

func (this *QBasicMutex) IsRecursive() bool {
	return (bool)(C.QBasicMutex_isRecursive(this.h))
}

func (this *QBasicMutex) IsRecursive2() bool {
	return (bool)(C.QBasicMutex_isRecursive2(this.h))
}

// Delete this object from C++ memory.
func (this *QBasicMutex) Delete() {
	C.QBasicMutex_delete(this.h)
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

// NewQMutex2 constructs a new QMutex object.
func NewQMutex2(mode QMutex__RecursionMode) *QMutex {

	return newQMutex(C.QMutex_new2((C.int)(mode)))
}

func (this *QMutex) Lock() {
	C.QMutex_lock(this.h)
}

func (this *QMutex) TryLock() bool {
	return (bool)(C.QMutex_tryLock(this.h))
}

func (this *QMutex) Unlock() {
	C.QMutex_unlock(this.h)
}

func (this *QMutex) TryLock2() bool {
	return (bool)(C.QMutex_tryLock2(this.h))
}

func (this *QMutex) IsRecursive() bool {
	return (bool)(C.QMutex_isRecursive(this.h))
}

func (this *QMutex) TryLock1(timeout int) bool {
	return (bool)(C.QMutex_tryLock1(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QMutex) Delete() {
	C.QMutex_delete(this.h)
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

// Delete this object from C++ memory.
func (this *QRecursiveMutex) Delete() {
	C.QRecursiveMutex_delete(this.h)
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
	h *C.QMutexLocker
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
	return newQMutexLocker((*C.QMutexLocker)(h))
}

// NewQMutexLocker constructs a new QMutexLocker object.
func NewQMutexLocker(m *QBasicMutex) *QMutexLocker {

	return newQMutexLocker(C.QMutexLocker_new(m.cPointer()))
}

// NewQMutexLocker2 constructs a new QMutexLocker object.
func NewQMutexLocker2(m *QRecursiveMutex) *QMutexLocker {

	return newQMutexLocker(C.QMutexLocker_new2(m.cPointer()))
}

func (this *QMutexLocker) Unlock() {
	C.QMutexLocker_unlock(this.h)
}

func (this *QMutexLocker) Relock() {
	C.QMutexLocker_relock(this.h)
}

func (this *QMutexLocker) Mutex() *QMutex {
	return newQMutex(C.QMutexLocker_mutex(this.h))
}

// Delete this object from C++ memory.
func (this *QMutexLocker) Delete() {
	C.QMutexLocker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMutexLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QMutexLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
