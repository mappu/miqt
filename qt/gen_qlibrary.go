package qt

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
	QLibrary__LoadHint__ResolveAllSymbolsHint     QLibrary__LoadHint = 1
	QLibrary__LoadHint__ExportExternalSymbolsHint QLibrary__LoadHint = 2
	QLibrary__LoadHint__LoadArchiveMemberHint     QLibrary__LoadHint = 4
	QLibrary__LoadHint__PreventUnloadHint         QLibrary__LoadHint = 8
	QLibrary__LoadHint__DeepBindHint              QLibrary__LoadHint = 16
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

func newQLibrary(h *C.QLibrary) *QLibrary {
	if h == nil {
		return nil
	}
	return &QLibrary{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQLibrary_U(h unsafe.Pointer) *QLibrary {
	return newQLibrary((*C.QLibrary)(h))
}

// NewQLibrary constructs a new QLibrary object.
func NewQLibrary() *QLibrary {
	ret := C.QLibrary_new()
	return newQLibrary(ret)
}

// NewQLibrary2 constructs a new QLibrary object.
func NewQLibrary2(fileName string) *QLibrary {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QLibrary_new2((*C.struct_miqt_string)(fileName_ms))
	return newQLibrary(ret)
}

// NewQLibrary3 constructs a new QLibrary object.
func NewQLibrary3(fileName string, verNum int) *QLibrary {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QLibrary_new3((*C.struct_miqt_string)(fileName_ms), (C.int)(verNum))
	return newQLibrary(ret)
}

// NewQLibrary4 constructs a new QLibrary object.
func NewQLibrary4(fileName string, version string) *QLibrary {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	version_ms := miqt_strdupg(version)
	defer C.free(version_ms)
	ret := C.QLibrary_new4((*C.struct_miqt_string)(fileName_ms), (*C.struct_miqt_string)(version_ms))
	return newQLibrary(ret)
}

// NewQLibrary5 constructs a new QLibrary object.
func NewQLibrary5(parent *QObject) *QLibrary {
	ret := C.QLibrary_new5(parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary6 constructs a new QLibrary object.
func NewQLibrary6(fileName string, parent *QObject) *QLibrary {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QLibrary_new6((*C.struct_miqt_string)(fileName_ms), parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary7 constructs a new QLibrary object.
func NewQLibrary7(fileName string, verNum int, parent *QObject) *QLibrary {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QLibrary_new7((*C.struct_miqt_string)(fileName_ms), (C.int)(verNum), parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary8 constructs a new QLibrary object.
func NewQLibrary8(fileName string, version string, parent *QObject) *QLibrary {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	version_ms := miqt_strdupg(version)
	defer C.free(version_ms)
	ret := C.QLibrary_new8((*C.struct_miqt_string)(fileName_ms), (*C.struct_miqt_string)(version_ms), parent.cPointer())
	return newQLibrary(ret)
}

func (this *QLibrary) MetaObject() *QMetaObject {
	_ret := C.QLibrary_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QLibrary_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QLibrary_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLibrary_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QLibrary_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLibrary) Load() bool {
	_ret := C.QLibrary_Load(this.h)
	return (bool)(_ret)
}

func (this *QLibrary) Unload() bool {
	_ret := C.QLibrary_Unload(this.h)
	return (bool)(_ret)
}

func (this *QLibrary) IsLoaded() bool {
	_ret := C.QLibrary_IsLoaded(this.h)
	return (bool)(_ret)
}

func QLibrary_IsLibrary(fileName string) bool {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QLibrary_IsLibrary((*C.struct_miqt_string)(fileName_ms))
	return (bool)(_ret)
}

func (this *QLibrary) SetFileName(fileName string) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QLibrary_SetFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
}

func (this *QLibrary) FileName() string {
	var _ms *C.struct_miqt_string = C.QLibrary_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLibrary) SetFileNameAndVersion(fileName string, verNum int) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QLibrary_SetFileNameAndVersion(this.h, (*C.struct_miqt_string)(fileName_ms), (C.int)(verNum))
}

func (this *QLibrary) SetFileNameAndVersion2(fileName string, version string) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	version_ms := miqt_strdupg(version)
	defer C.free(version_ms)
	C.QLibrary_SetFileNameAndVersion2(this.h, (*C.struct_miqt_string)(fileName_ms), (*C.struct_miqt_string)(version_ms))
}

func (this *QLibrary) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QLibrary_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLibrary) SetLoadHints(hints int) {
	C.QLibrary_SetLoadHints(this.h, (C.int)(hints))
}

func (this *QLibrary) LoadHints() int {
	_ret := C.QLibrary_LoadHints(this.h)
	return (int)(_ret)
}

func QLibrary_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLibrary_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLibrary_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLibrary_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLibrary_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLibrary_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLibrary_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLibrary_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
