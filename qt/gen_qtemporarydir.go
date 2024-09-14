package qt

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
	h *C.QTemporaryDir
}

func (this *QTemporaryDir) cPointer() *C.QTemporaryDir {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTemporaryDir(h *C.QTemporaryDir) *QTemporaryDir {
	if h == nil {
		return nil
	}
	return &QTemporaryDir{h: h}
}

func newQTemporaryDir_U(h unsafe.Pointer) *QTemporaryDir {
	return newQTemporaryDir((*C.QTemporaryDir)(h))
}

// NewQTemporaryDir constructs a new QTemporaryDir object.
func NewQTemporaryDir() *QTemporaryDir {
	ret := C.QTemporaryDir_new()
	return newQTemporaryDir(ret)
}

// NewQTemporaryDir2 constructs a new QTemporaryDir object.
func NewQTemporaryDir2(templateName string) *QTemporaryDir {
	templateName_ms := miqt_strdupg(templateName)
	defer C.free(templateName_ms)
	ret := C.QTemporaryDir_new2((*C.struct_miqt_string)(templateName_ms))
	return newQTemporaryDir(ret)
}

func (this *QTemporaryDir) IsValid() bool {
	_ret := C.QTemporaryDir_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QTemporaryDir) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QTemporaryDir_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTemporaryDir) AutoRemove() bool {
	_ret := C.QTemporaryDir_AutoRemove(this.h)
	return (bool)(_ret)
}

func (this *QTemporaryDir) SetAutoRemove(b bool) {
	C.QTemporaryDir_SetAutoRemove(this.h, (C.bool)(b))
}

func (this *QTemporaryDir) Remove() bool {
	_ret := C.QTemporaryDir_Remove(this.h)
	return (bool)(_ret)
}

func (this *QTemporaryDir) Path() string {
	var _ms *C.struct_miqt_string = C.QTemporaryDir_Path(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTemporaryDir) FilePath(fileName string) string {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QTemporaryDir_FilePath(this.h, (*C.struct_miqt_string)(fileName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTemporaryDir) Delete() {
	C.QTemporaryDir_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTemporaryDir) GoGC() {
	runtime.SetFinalizer(this, func(this *QTemporaryDir) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
