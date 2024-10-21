package qt6

/*

#include "gen_qlibrary.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLibrary__LoadHint int

const (
	QLibrary__ResolveAllSymbolsHint     QLibrary__LoadHint = 1
	QLibrary__ExportExternalSymbolsHint QLibrary__LoadHint = 2
	QLibrary__LoadArchiveMemberHint     QLibrary__LoadHint = 4
	QLibrary__PreventUnloadHint         QLibrary__LoadHint = 8
	QLibrary__DeepBindHint              QLibrary__LoadHint = 16
)

type QLibrary struct {
	h *C.QLibrary
	*QObject
}

func (this *QLibrary) cPointer() *C.QLibrary {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLibrary) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQLibrary(h *C.QLibrary) *QLibrary {
	if h == nil {
		return nil
	}
	return &QLibrary{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQLibrary(h unsafe.Pointer) *QLibrary {
	return newQLibrary((*C.QLibrary)(h))
}

// NewQLibrary constructs a new QLibrary object.
func NewQLibrary() *QLibrary {
	ret := C.QLibrary_new()
	return newQLibrary(ret)
}

// NewQLibrary2 constructs a new QLibrary object.
func NewQLibrary2(fileName string) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QLibrary_new2(fileName_ms)
	return newQLibrary(ret)
}

// NewQLibrary3 constructs a new QLibrary object.
func NewQLibrary3(fileName string, verNum int) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QLibrary_new3(fileName_ms, (C.int)(verNum))
	return newQLibrary(ret)
}

// NewQLibrary4 constructs a new QLibrary object.
func NewQLibrary4(fileName string, version string) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))
	ret := C.QLibrary_new4(fileName_ms, version_ms)
	return newQLibrary(ret)
}

// NewQLibrary5 constructs a new QLibrary object.
func NewQLibrary5(parent *QObject) *QLibrary {
	ret := C.QLibrary_new5(parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary6 constructs a new QLibrary object.
func NewQLibrary6(fileName string, parent *QObject) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QLibrary_new6(fileName_ms, parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary7 constructs a new QLibrary object.
func NewQLibrary7(fileName string, verNum int, parent *QObject) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QLibrary_new7(fileName_ms, (C.int)(verNum), parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary8 constructs a new QLibrary object.
func NewQLibrary8(fileName string, version string, parent *QObject) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))
	ret := C.QLibrary_new8(fileName_ms, version_ms, parent.cPointer())
	return newQLibrary(ret)
}

func (this *QLibrary) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QLibrary_MetaObject(this.h)))
}

func (this *QLibrary) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLibrary_Metacast(this.h, param1_Cstring))
}

func QLibrary_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) Load() bool {
	return (bool)(C.QLibrary_Load(this.h))
}

func (this *QLibrary) Unload() bool {
	return (bool)(C.QLibrary_Unload(this.h))
}

func (this *QLibrary) IsLoaded() bool {
	return (bool)(C.QLibrary_IsLoaded(this.h))
}

func QLibrary_IsLibrary(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QLibrary_IsLibrary(fileName_ms))
}

func (this *QLibrary) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QLibrary_SetFileName(this.h, fileName_ms)
}

func (this *QLibrary) FileName() string {
	var _ms C.struct_miqt_string = C.QLibrary_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) SetFileNameAndVersion(fileName string, verNum int) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QLibrary_SetFileNameAndVersion(this.h, fileName_ms, (C.int)(verNum))
}

func (this *QLibrary) SetFileNameAndVersion2(fileName string, version string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))
	C.QLibrary_SetFileNameAndVersion2(this.h, fileName_ms, version_ms)
}

func (this *QLibrary) ErrorString() string {
	var _ms C.struct_miqt_string = C.QLibrary_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) SetLoadHints(hints QLibrary__LoadHint) {
	C.QLibrary_SetLoadHints(this.h, (C.int)(hints))
}

func (this *QLibrary) LoadHints() QLibrary__LoadHint {
	return (QLibrary__LoadHint)(C.QLibrary_LoadHints(this.h))
}

func QLibrary_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibrary_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QLibrary) Delete() {
	C.QLibrary_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLibrary) GoGC() {
	runtime.SetFinalizer(this, func(this *QLibrary) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
