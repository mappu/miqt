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
	QLockFile__NoError         QLockFile__LockError = 0
	QLockFile__LockFailedError QLockFile__LockError = 1
	QLockFile__PermissionError QLockFile__LockError = 2
	QLockFile__UnknownError    QLockFile__LockError = 3
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

func (this *QLockFile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLockFile constructs the type using only CGO pointers.
func newQLockFile(h *C.QLockFile) *QLockFile {
	if h == nil {
		return nil
	}

	return &QLockFile{h: h}
}

// UnsafeNewQLockFile constructs the type using only unsafe pointers.
func UnsafeNewQLockFile(h unsafe.Pointer) *QLockFile {
	return newQLockFile((*C.QLockFile)(h))
}

// NewQLockFile constructs a new QLockFile object.
func NewQLockFile(fileName string) *QLockFile {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQLockFile(C.QLockFile_new(fileName_ms))
}

func (this *QLockFile) Lock() bool {
	return (bool)(C.QLockFile_lock(this.h))
}

func (this *QLockFile) TryLock() bool {
	return (bool)(C.QLockFile_tryLock(this.h))
}

func (this *QLockFile) Unlock() {
	C.QLockFile_unlock(this.h)
}

func (this *QLockFile) SetStaleLockTime(staleLockTime int) {
	C.QLockFile_setStaleLockTime(this.h, (C.int)(staleLockTime))
}

func (this *QLockFile) StaleLockTime() int {
	return (int)(C.QLockFile_staleLockTime(this.h))
}

func (this *QLockFile) IsLocked() bool {
	return (bool)(C.QLockFile_isLocked(this.h))
}

func (this *QLockFile) RemoveStaleLockFile() bool {
	return (bool)(C.QLockFile_removeStaleLockFile(this.h))
}

func (this *QLockFile) Error() QLockFile__LockError {
	return (QLockFile__LockError)(C.QLockFile_error(this.h))
}

func (this *QLockFile) TryLockWithTimeout(timeout int) bool {
	return (bool)(C.QLockFile_tryLockWithTimeout(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QLockFile) Delete() {
	C.QLockFile_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLockFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QLockFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
