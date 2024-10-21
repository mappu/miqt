package qt6

/*

#include "gen_qsavefile.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSaveFile struct {
	h *C.QSaveFile
	*QFileDevice
}

func (this *QSaveFile) cPointer() *C.QSaveFile {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSaveFile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSaveFile(h *C.QSaveFile) *QSaveFile {
	if h == nil {
		return nil
	}
	return &QSaveFile{h: h, QFileDevice: UnsafeNewQFileDevice(unsafe.Pointer(h))}
}

func UnsafeNewQSaveFile(h unsafe.Pointer) *QSaveFile {
	return newQSaveFile((*C.QSaveFile)(h))
}

// NewQSaveFile constructs a new QSaveFile object.
func NewQSaveFile(name string) *QSaveFile {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QSaveFile_new(name_ms)
	return newQSaveFile(ret)
}

// NewQSaveFile2 constructs a new QSaveFile object.
func NewQSaveFile2() *QSaveFile {
	ret := C.QSaveFile_new2()
	return newQSaveFile(ret)
}

// NewQSaveFile3 constructs a new QSaveFile object.
func NewQSaveFile3(name string, parent *QObject) *QSaveFile {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QSaveFile_new3(name_ms, parent.cPointer())
	return newQSaveFile(ret)
}

// NewQSaveFile4 constructs a new QSaveFile object.
func NewQSaveFile4(parent *QObject) *QSaveFile {
	ret := C.QSaveFile_new4(parent.cPointer())
	return newQSaveFile(ret)
}

func (this *QSaveFile) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSaveFile_MetaObject(this.h)))
}

func (this *QSaveFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSaveFile_Metacast(this.h, param1_Cstring))
}

func QSaveFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSaveFile) FileName() string {
	var _ms C.struct_miqt_string = C.QSaveFile_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSaveFile) SetFileName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSaveFile_SetFileName(this.h, name_ms)
}

func (this *QSaveFile) Open(flags QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QSaveFile_Open(this.h, (C.int)(flags)))
}

func (this *QSaveFile) Commit() bool {
	return (bool)(C.QSaveFile_Commit(this.h))
}

func (this *QSaveFile) CancelWriting() {
	C.QSaveFile_CancelWriting(this.h)
}

func (this *QSaveFile) SetDirectWriteFallback(enabled bool) {
	C.QSaveFile_SetDirectWriteFallback(this.h, (C.bool)(enabled))
}

func (this *QSaveFile) DirectWriteFallback() bool {
	return (bool)(C.QSaveFile_DirectWriteFallback(this.h))
}

func QSaveFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSaveFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSaveFile) Delete() {
	C.QSaveFile_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSaveFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QSaveFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
