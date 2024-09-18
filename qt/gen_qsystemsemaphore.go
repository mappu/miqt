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
	QSystemSemaphore__AccessMode__Open   QSystemSemaphore__AccessMode = 0
	QSystemSemaphore__AccessMode__Create QSystemSemaphore__AccessMode = 1
)

type QSystemSemaphore__SystemSemaphoreError int

const (
	QSystemSemaphore__SystemSemaphoreError__NoError          QSystemSemaphore__SystemSemaphoreError = 0
	QSystemSemaphore__SystemSemaphoreError__PermissionDenied QSystemSemaphore__SystemSemaphoreError = 1
	QSystemSemaphore__SystemSemaphoreError__KeyError         QSystemSemaphore__SystemSemaphoreError = 2
	QSystemSemaphore__SystemSemaphoreError__AlreadyExists    QSystemSemaphore__SystemSemaphoreError = 3
	QSystemSemaphore__SystemSemaphoreError__NotFound         QSystemSemaphore__SystemSemaphoreError = 4
	QSystemSemaphore__SystemSemaphoreError__OutOfResources   QSystemSemaphore__SystemSemaphoreError = 5
	QSystemSemaphore__SystemSemaphoreError__UnknownError     QSystemSemaphore__SystemSemaphoreError = 6
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

func newQSystemSemaphore(h *C.QSystemSemaphore) *QSystemSemaphore {
	if h == nil {
		return nil
	}
	return &QSystemSemaphore{h: h}
}

func newQSystemSemaphore_U(h unsafe.Pointer) *QSystemSemaphore {
	return newQSystemSemaphore((*C.QSystemSemaphore)(h))
}

// NewQSystemSemaphore constructs a new QSystemSemaphore object.
func NewQSystemSemaphore(key string) *QSystemSemaphore {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	ret := C.QSystemSemaphore_new((*C.struct_miqt_string)(key_ms))
	return newQSystemSemaphore(ret)
}

// NewQSystemSemaphore2 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore2(key string, initialValue int) *QSystemSemaphore {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	ret := C.QSystemSemaphore_new2((*C.struct_miqt_string)(key_ms), (C.int)(initialValue))
	return newQSystemSemaphore(ret)
}

// NewQSystemSemaphore3 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore3(key string, initialValue int, mode QSystemSemaphore__AccessMode) *QSystemSemaphore {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	ret := C.QSystemSemaphore_new3((*C.struct_miqt_string)(key_ms), (C.int)(initialValue), (C.int)(mode))
	return newQSystemSemaphore(ret)
}

func (this *QSystemSemaphore) SetKey(key string) {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	C.QSystemSemaphore_SetKey(this.h, (*C.struct_miqt_string)(key_ms))
}

func (this *QSystemSemaphore) Key() string {
	var _ms *C.struct_miqt_string = C.QSystemSemaphore_Key(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSystemSemaphore) Acquire() bool {
	return (bool)(C.QSystemSemaphore_Acquire(this.h))
}

func (this *QSystemSemaphore) Release() bool {
	return (bool)(C.QSystemSemaphore_Release(this.h))
}

func (this *QSystemSemaphore) Error() QSystemSemaphore__SystemSemaphoreError {
	return (QSystemSemaphore__SystemSemaphoreError)(C.QSystemSemaphore_Error(this.h))
}

func (this *QSystemSemaphore) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QSystemSemaphore_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSystemSemaphore) SetKey2(key string, initialValue int) {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	C.QSystemSemaphore_SetKey2(this.h, (*C.struct_miqt_string)(key_ms), (C.int)(initialValue))
}

func (this *QSystemSemaphore) SetKey3(key string, initialValue int, mode QSystemSemaphore__AccessMode) {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	C.QSystemSemaphore_SetKey3(this.h, (*C.struct_miqt_string)(key_ms), (C.int)(initialValue), (C.int)(mode))
}

func (this *QSystemSemaphore) Release1(n int) bool {
	return (bool)(C.QSystemSemaphore_Release1(this.h, (C.int)(n)))
}

// Delete this object from C++ memory.
func (this *QSystemSemaphore) Delete() {
	C.QSystemSemaphore_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSystemSemaphore) GoGC() {
	runtime.SetFinalizer(this, func(this *QSystemSemaphore) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
