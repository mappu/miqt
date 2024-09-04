package qt

/*

#include "gen_qsystemsemaphore.h"
#include <stdlib.h>

*/
import "C"

import (
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
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QSystemSemaphore_new(key_Cstring, C.size_t(len(key)))
	return newQSystemSemaphore(ret)
}

// NewQSystemSemaphore2 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore2(key string, initialValue int) *QSystemSemaphore {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QSystemSemaphore_new2(key_Cstring, C.size_t(len(key)), (C.int)(initialValue))
	return newQSystemSemaphore(ret)
}

// NewQSystemSemaphore3 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore3(key string, initialValue int, mode QSystemSemaphore__AccessMode) *QSystemSemaphore {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QSystemSemaphore_new3(key_Cstring, C.size_t(len(key)), (C.int)(initialValue), (C.uintptr_t)(mode))
	return newQSystemSemaphore(ret)
}

func (this *QSystemSemaphore) SetKey(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QSystemSemaphore_SetKey(this.h, key_Cstring, C.size_t(len(key)))
}

func (this *QSystemSemaphore) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemSemaphore_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSystemSemaphore) Acquire() bool {
	ret := C.QSystemSemaphore_Acquire(this.h)
	return (bool)(ret)
}

func (this *QSystemSemaphore) Release() bool {
	ret := C.QSystemSemaphore_Release(this.h)
	return (bool)(ret)
}

func (this *QSystemSemaphore) Error() QSystemSemaphore__SystemSemaphoreError {
	ret := C.QSystemSemaphore_Error(this.h)
	return (QSystemSemaphore__SystemSemaphoreError)(ret)
}

func (this *QSystemSemaphore) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemSemaphore_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSystemSemaphore) SetKey2(key string, initialValue int) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QSystemSemaphore_SetKey2(this.h, key_Cstring, C.size_t(len(key)), (C.int)(initialValue))
}

func (this *QSystemSemaphore) SetKey3(key string, initialValue int, mode QSystemSemaphore__AccessMode) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QSystemSemaphore_SetKey3(this.h, key_Cstring, C.size_t(len(key)), (C.int)(initialValue), (C.uintptr_t)(mode))
}

func (this *QSystemSemaphore) Release1(n int) bool {
	ret := C.QSystemSemaphore_Release1(this.h, (C.int)(n))
	return (bool)(ret)
}

func (this *QSystemSemaphore) Delete() {
	C.QSystemSemaphore_Delete(this.h)
}
