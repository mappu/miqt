package qt

/*

#include "gen_qlockfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QLockFile_new(fileName_Cstring, C.ulong(len(fileName)))
	return newQLockFile(ret)
}

func (this *QLockFile) Lock() bool {
	ret := C.QLockFile_Lock(this.h)
	return (bool)(ret)
}

func (this *QLockFile) TryLock() bool {
	ret := C.QLockFile_TryLock(this.h)
	return (bool)(ret)
}

func (this *QLockFile) Unlock() {
	C.QLockFile_Unlock(this.h)
}

func (this *QLockFile) SetStaleLockTime(staleLockTime int) {
	C.QLockFile_SetStaleLockTime(this.h, (C.int)(staleLockTime))
}

func (this *QLockFile) StaleLockTime() int {
	ret := C.QLockFile_StaleLockTime(this.h)
	return (int)(ret)
}

func (this *QLockFile) IsLocked() bool {
	ret := C.QLockFile_IsLocked(this.h)
	return (bool)(ret)
}

func (this *QLockFile) RemoveStaleLockFile() bool {
	ret := C.QLockFile_RemoveStaleLockFile(this.h)
	return (bool)(ret)
}

func (this *QLockFile) Error() uintptr {
	ret := C.QLockFile_Error(this.h)
	return (uintptr)(ret)
}

func (this *QLockFile) TryLock1(timeout int) bool {
	ret := C.QLockFile_TryLock1(this.h, (C.int)(timeout))
	return (bool)(ret)
}

func (this *QLockFile) Delete() {
	C.QLockFile_Delete(this.h)
}
