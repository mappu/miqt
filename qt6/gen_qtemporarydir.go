package qt6

/*

#include "gen_qtemporarydir.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTemporaryDir struct {
	h          *C.QTemporaryDir
	isSubclass bool
}

func (this *QTemporaryDir) cPointer() *C.QTemporaryDir {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTemporaryDir) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTemporaryDir constructs the type using only CGO pointers.
func newQTemporaryDir(h *C.QTemporaryDir) *QTemporaryDir {
	if h == nil {
		return nil
	}
	return &QTemporaryDir{h: h}
}

// UnsafeNewQTemporaryDir constructs the type using only unsafe pointers.
func UnsafeNewQTemporaryDir(h unsafe.Pointer) *QTemporaryDir {
	if h == nil {
		return nil
	}

	return &QTemporaryDir{h: (*C.QTemporaryDir)(h)}
}

// NewQTemporaryDir constructs a new QTemporaryDir object.
func NewQTemporaryDir() *QTemporaryDir {
	var outptr_QTemporaryDir *C.QTemporaryDir = nil

	C.QTemporaryDir_new(&outptr_QTemporaryDir)
	ret := newQTemporaryDir(outptr_QTemporaryDir)
	ret.isSubclass = true
	return ret
}

// NewQTemporaryDir2 constructs a new QTemporaryDir object.
func NewQTemporaryDir2(templateName string) *QTemporaryDir {
	templateName_ms := C.struct_miqt_string{}
	templateName_ms.data = C.CString(templateName)
	templateName_ms.len = C.size_t(len(templateName))
	defer C.free(unsafe.Pointer(templateName_ms.data))
	var outptr_QTemporaryDir *C.QTemporaryDir = nil

	C.QTemporaryDir_new2(templateName_ms, &outptr_QTemporaryDir)
	ret := newQTemporaryDir(outptr_QTemporaryDir)
	ret.isSubclass = true
	return ret
}

func (this *QTemporaryDir) Swap(other *QTemporaryDir) {
	C.QTemporaryDir_Swap(this.h, other.cPointer())
}

func (this *QTemporaryDir) IsValid() bool {
	return (bool)(C.QTemporaryDir_IsValid(this.h))
}

func (this *QTemporaryDir) ErrorString() string {
	var _ms C.struct_miqt_string = C.QTemporaryDir_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryDir) AutoRemove() bool {
	return (bool)(C.QTemporaryDir_AutoRemove(this.h))
}

func (this *QTemporaryDir) SetAutoRemove(b bool) {
	C.QTemporaryDir_SetAutoRemove(this.h, (C.bool)(b))
}

func (this *QTemporaryDir) Remove() bool {
	return (bool)(C.QTemporaryDir_Remove(this.h))
}

func (this *QTemporaryDir) Path() string {
	var _ms C.struct_miqt_string = C.QTemporaryDir_Path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryDir) FilePath(fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QTemporaryDir_FilePath(this.h, fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTemporaryDir) Delete() {
	C.QTemporaryDir_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTemporaryDir) GoGC() {
	runtime.SetFinalizer(this, func(this *QTemporaryDir) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
