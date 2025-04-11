package qt

/*

#include "gen_qsystemsemaphore.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSystemSemaphore__AccessMode int

const (
	QSystemSemaphore__Open   QSystemSemaphore__AccessMode = 0
	QSystemSemaphore__Create QSystemSemaphore__AccessMode = 1
)

type QSystemSemaphore__SystemSemaphoreError int

const (
	QSystemSemaphore__NoError          QSystemSemaphore__SystemSemaphoreError = 0
	QSystemSemaphore__PermissionDenied QSystemSemaphore__SystemSemaphoreError = 1
	QSystemSemaphore__KeyError         QSystemSemaphore__SystemSemaphoreError = 2
	QSystemSemaphore__AlreadyExists    QSystemSemaphore__SystemSemaphoreError = 3
	QSystemSemaphore__NotFound         QSystemSemaphore__SystemSemaphoreError = 4
	QSystemSemaphore__OutOfResources   QSystemSemaphore__SystemSemaphoreError = 5
	QSystemSemaphore__UnknownError     QSystemSemaphore__SystemSemaphoreError = 6
)

type QSystemSemaphore struct {
	h *C.QSystemSemaphore
}

func (this *QSystemSemaphore) cPointer() *C.QSystemSemaphore {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSystemSemaphore) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSystemSemaphore constructs the type using only CGO pointers.
func newQSystemSemaphore(h *C.QSystemSemaphore) *QSystemSemaphore {
	if h == nil {
		return nil
	}

	return &QSystemSemaphore{h: h}
}

// UnsafeNewQSystemSemaphore constructs the type using only unsafe pointers.
func UnsafeNewQSystemSemaphore(h unsafe.Pointer) *QSystemSemaphore {
	return newQSystemSemaphore((*C.QSystemSemaphore)(h))
}

// NewQSystemSemaphore constructs a new QSystemSemaphore object.
func NewQSystemSemaphore(key string) *QSystemSemaphore {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	return newQSystemSemaphore(C.QSystemSemaphore_new(key_ms))
}

// NewQSystemSemaphore2 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore2(key string, initialValue int) *QSystemSemaphore {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	return newQSystemSemaphore(C.QSystemSemaphore_new2(key_ms, (C.int)(initialValue)))
}

// NewQSystemSemaphore3 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore3(key string, initialValue int, mode QSystemSemaphore__AccessMode) *QSystemSemaphore {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	return newQSystemSemaphore(C.QSystemSemaphore_new3(key_ms, (C.int)(initialValue), (C.int)(mode)))
}

func (this *QSystemSemaphore) SetKey(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setKey(this.h, key_ms)
}

func (this *QSystemSemaphore) Key() string {
	var _ms C.struct_miqt_string = C.QSystemSemaphore_key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemSemaphore) Acquire() bool {
	return (bool)(C.QSystemSemaphore_acquire(this.h))
}

func (this *QSystemSemaphore) Release() bool {
	return (bool)(C.QSystemSemaphore_release(this.h))
}

func (this *QSystemSemaphore) Error() QSystemSemaphore__SystemSemaphoreError {
	return (QSystemSemaphore__SystemSemaphoreError)(C.QSystemSemaphore_error(this.h))
}

func (this *QSystemSemaphore) ErrorString() string {
	var _ms C.struct_miqt_string = C.QSystemSemaphore_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemSemaphore) SetKey2(key string, initialValue int) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setKey2(this.h, key_ms, (C.int)(initialValue))
}

func (this *QSystemSemaphore) SetKey3(key string, initialValue int, mode QSystemSemaphore__AccessMode) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setKey3(this.h, key_ms, (C.int)(initialValue), (C.int)(mode))
}

func (this *QSystemSemaphore) ReleaseWithInt(n int) bool {
	return (bool)(C.QSystemSemaphore_releaseWithInt(this.h, (C.int)(n)))
}

// Delete this object from C++ memory.
func (this *QSystemSemaphore) Delete() {
	C.QSystemSemaphore_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSystemSemaphore) GoGC() {
	runtime.SetFinalizer(this, func(this *QSystemSemaphore) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
