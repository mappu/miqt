package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qlibrary.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QLibrary_new2(fileName_Cstring, C.ulong(len(fileName)))
	return newQLibrary(ret)
}

// NewQLibrary3 constructs a new QLibrary object.
func NewQLibrary3(fileName string, verNum int) *QLibrary {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QLibrary_new3(fileName_Cstring, C.ulong(len(fileName)), (C.int)(verNum))
	return newQLibrary(ret)
}

// NewQLibrary4 constructs a new QLibrary object.
func NewQLibrary4(fileName string, version string) *QLibrary {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	version_Cstring := C.CString(version)
	defer C.free(unsafe.Pointer(version_Cstring))
	ret := C.QLibrary_new4(fileName_Cstring, C.ulong(len(fileName)), version_Cstring, C.ulong(len(version)))
	return newQLibrary(ret)
}

// NewQLibrary5 constructs a new QLibrary object.
func NewQLibrary5(parent *QObject) *QLibrary {
	ret := C.QLibrary_new5(parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary6 constructs a new QLibrary object.
func NewQLibrary6(fileName string, parent *QObject) *QLibrary {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QLibrary_new6(fileName_Cstring, C.ulong(len(fileName)), parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary7 constructs a new QLibrary object.
func NewQLibrary7(fileName string, verNum int, parent *QObject) *QLibrary {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QLibrary_new7(fileName_Cstring, C.ulong(len(fileName)), (C.int)(verNum), parent.cPointer())
	return newQLibrary(ret)
}

// NewQLibrary8 constructs a new QLibrary object.
func NewQLibrary8(fileName string, version string, parent *QObject) *QLibrary {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	version_Cstring := C.CString(version)
	defer C.free(unsafe.Pointer(version_Cstring))
	ret := C.QLibrary_new8(fileName_Cstring, C.ulong(len(fileName)), version_Cstring, C.ulong(len(version)), parent.cPointer())
	return newQLibrary(ret)
}

func (this *QLibrary) MetaObject() *QMetaObject {
	ret := C.QLibrary_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QLibrary_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibrary_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLibrary_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibrary_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLibrary) Load() bool {
	ret := C.QLibrary_Load(this.h)
	return (bool)(ret)
}

func (this *QLibrary) Unload() bool {
	ret := C.QLibrary_Unload(this.h)
	return (bool)(ret)
}

func (this *QLibrary) IsLoaded() bool {
	ret := C.QLibrary_IsLoaded(this.h)
	return (bool)(ret)
}

func QLibrary_IsLibrary(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QLibrary_IsLibrary(fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QLibrary) SetFileName(fileName string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QLibrary_SetFileName(this.h, fileName_Cstring, C.ulong(len(fileName)))
}

func (this *QLibrary) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibrary_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLibrary) SetFileNameAndVersion(fileName string, verNum int) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QLibrary_SetFileNameAndVersion(this.h, fileName_Cstring, C.ulong(len(fileName)), (C.int)(verNum))
}

func (this *QLibrary) SetFileNameAndVersion2(fileName string, version string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	version_Cstring := C.CString(version)
	defer C.free(unsafe.Pointer(version_Cstring))
	C.QLibrary_SetFileNameAndVersion2(this.h, fileName_Cstring, C.ulong(len(fileName)), version_Cstring, C.ulong(len(version)))
}

func (this *QLibrary) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibrary_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLibrary_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibrary_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLibrary_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibrary_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLibrary_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibrary_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLibrary_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibrary_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLibrary) Delete() {
	C.QLibrary_Delete(this.h)
}
