package qt6

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
	h  *C.QLockFile
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QLockFile) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

func (this *QLockFile) FileName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QLockFile_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLockFile) Lock() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QLockFile_lock(this.h))
}

func (this *QLockFile) TryLock() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QLockFile_tryLock(this.h))
}

func (this *QLockFile) Unlock() {
	defer runtime.KeepAlive(this)
	C.QLockFile_unlock(this.h)
}

func (this *QLockFile) SetStaleLockTime(staleLockTime int) {
	defer runtime.KeepAlive(this)
	C.QLockFile_setStaleLockTime(this.h, (C.int)(staleLockTime))
}

func (this *QLockFile) StaleLockTime() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QLockFile_staleLockTime(this.h))
}

func (this *QLockFile) TryLockWithTimeout(timeout Milliseconds) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QLockFile_tryLockWithTimeout(this.h, (C.int64_t)(timeout)))
}

func (this *QLockFile) SetStaleLockTimeWithValue(value Milliseconds) {
	defer runtime.KeepAlive(this)
	C.QLockFile_setStaleLockTimeWithValue(this.h, (C.int64_t)(value))
}

func (this *QLockFile) StaleLockTimeAsDuration() Milliseconds {
	defer runtime.KeepAlive(this)
	return (Milliseconds)(C.QLockFile_staleLockTimeAsDuration(this.h))
}

func (this *QLockFile) IsLocked() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QLockFile_isLocked(this.h))
}

func (this *QLockFile) RemoveStaleLockFile() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QLockFile_removeStaleLockFile(this.h))
}

func (this *QLockFile) Error() QLockFile__LockError {
	defer runtime.KeepAlive(this)
	return (QLockFile__LockError)(C.QLockFile_error(this.h))
}

func (this *QLockFile) TryLock2(timeout int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QLockFile_tryLock2(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QLockFile) Delete() {
	C.QLockFile_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QLockFile) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QLockFile_delete((*C.QLockFile)(gc[0]))
	})
	this.miqtSetGC(gc)
}
