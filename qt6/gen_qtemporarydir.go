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
	h  *C.QTemporaryDir
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTemporaryDir) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQTemporaryDir((*C.QTemporaryDir)(h))
}

// NewQTemporaryDir constructs a new QTemporaryDir object.
func NewQTemporaryDir() *QTemporaryDir {

	return newQTemporaryDir(C.QTemporaryDir_new())
}

// NewQTemporaryDir2 constructs a new QTemporaryDir object.
func NewQTemporaryDir2(templateName string) *QTemporaryDir {
	templateName_ms := C.struct_miqt_string{}
	templateName_ms.data = C.CString(templateName)
	templateName_ms.len = C.size_t(len(templateName))
	defer C.free(unsafe.Pointer(templateName_ms.data))

	return newQTemporaryDir(C.QTemporaryDir_new2(templateName_ms))
}

func (this *QTemporaryDir) Swap(other *QTemporaryDir) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QTemporaryDir_swap(this.h, other.cPointer())
}

func (this *QTemporaryDir) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTemporaryDir_isValid(this.h))
}

func (this *QTemporaryDir) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTemporaryDir_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryDir) AutoRemove() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTemporaryDir_autoRemove(this.h))
}

func (this *QTemporaryDir) SetAutoRemove(b bool) {
	defer runtime.KeepAlive(this)
	C.QTemporaryDir_setAutoRemove(this.h, (C.bool)(b))
}

func (this *QTemporaryDir) Remove() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTemporaryDir_remove(this.h))
}

func (this *QTemporaryDir) Path() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTemporaryDir_path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryDir) FilePath(fileName string) string {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QTemporaryDir_filePath(this.h, fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTemporaryDir) Delete() {
	C.QTemporaryDir_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTemporaryDir) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTemporaryDir_delete((*C.QTemporaryDir)(gc[0]))
	})
	this.miqtSetGC(gc)
}
