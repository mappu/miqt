package qt

/*

#include "gen_qlockfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLockFile__LockError int

const (
	QLockFile__LockError__NoError         QLockFile__LockError = 0
	QLockFile__LockError__LockFailedError QLockFile__LockError = 1
	QLockFile__LockError__PermissionError QLockFile__LockError = 2
	QLockFile__LockError__UnknownError    QLockFile__LockError = 3
)

type QLockFile struct {
	h *C.QLockFile
}

func (this *QLockFile) cPointer() *C.QLockFile {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLockFile(h *C.QLockFile) *QLockFile {
	if h == nil {
		return nil
	}
	return &QLockFile{h: h}
}

func newQLockFile_U(h unsafe.Pointer) *QLockFile {
	return newQLockFile((*C.QLockFile)(h))
}

// NewQLockFile constructs a new QLockFile object.
func NewQLockFile(fileName string) *QLockFile {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QLockFile_new((*C.struct_miqt_string)(fileName_ms))
	return newQLockFile(ret)
}

func (this *QLockFile) Lock() bool {
	_ret := C.QLockFile_Lock(this.h)
	return (bool)(_ret)
}

func (this *QLockFile) TryLock() bool {
	_ret := C.QLockFile_TryLock(this.h)
	return (bool)(_ret)
}

func (this *QLockFile) Unlock() {
	C.QLockFile_Unlock(this.h)
}

func (this *QLockFile) SetStaleLockTime(staleLockTime int) {
	C.QLockFile_SetStaleLockTime(this.h, (C.int)(staleLockTime))
}

func (this *QLockFile) StaleLockTime() int {
	_ret := C.QLockFile_StaleLockTime(this.h)
	return (int)(_ret)
}

func (this *QLockFile) IsLocked() bool {
	_ret := C.QLockFile_IsLocked(this.h)
	return (bool)(_ret)
}

func (this *QLockFile) RemoveStaleLockFile() bool {
	_ret := C.QLockFile_RemoveStaleLockFile(this.h)
	return (bool)(_ret)
}

func (this *QLockFile) Error() QLockFile__LockError {
	_ret := C.QLockFile_Error(this.h)
	return (QLockFile__LockError)(_ret)
}

func (this *QLockFile) TryLock1(timeout int) bool {
	_ret := C.QLockFile_TryLock1(this.h, (C.int)(timeout))
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QLockFile) Delete() {
	C.QLockFile_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLockFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QLockFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
