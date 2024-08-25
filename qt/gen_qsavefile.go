package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsavefile.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQSaveFile(h *C.QSaveFile) *QSaveFile {
	return &QSaveFile{h: h, QFileDevice: newQFileDevice_U(unsafe.Pointer(h))}
}

func newQSaveFile_U(h unsafe.Pointer) *QSaveFile {
	return newQSaveFile((*C.QSaveFile)(h))
}

// NewQSaveFile constructs a new QSaveFile object.
func NewQSaveFile(name string) *QSaveFile {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QSaveFile_new(name_Cstring, C.ulong(len(name)))
	return newQSaveFile(ret)
}

// NewQSaveFile2 constructs a new QSaveFile object.
func NewQSaveFile2() *QSaveFile {
	ret := C.QSaveFile_new2()
	return newQSaveFile(ret)
}

// NewQSaveFile3 constructs a new QSaveFile object.
func NewQSaveFile3(name string, parent *QObject) *QSaveFile {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QSaveFile_new3(name_Cstring, C.ulong(len(name)), parent.cPointer())
	return newQSaveFile(ret)
}

// NewQSaveFile4 constructs a new QSaveFile object.
func NewQSaveFile4(parent *QObject) *QSaveFile {
	ret := C.QSaveFile_new4(parent.cPointer())
	return newQSaveFile(ret)
}

func (this *QSaveFile) MetaObject() *QMetaObject {
	ret := C.QSaveFile_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSaveFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSaveFile_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSaveFile_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSaveFile_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSaveFile) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSaveFile_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSaveFile) SetFileName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QSaveFile_SetFileName(this.h, name_Cstring, C.ulong(len(name)))
}

func (this *QSaveFile) Commit() bool {
	ret := C.QSaveFile_Commit(this.h)
	return (bool)(ret)
}

func (this *QSaveFile) CancelWriting() {
	C.QSaveFile_CancelWriting(this.h)
}

func (this *QSaveFile) SetDirectWriteFallback(enabled bool) {
	C.QSaveFile_SetDirectWriteFallback(this.h, (C.bool)(enabled))
}

func (this *QSaveFile) DirectWriteFallback() bool {
	ret := C.QSaveFile_DirectWriteFallback(this.h)
	return (bool)(ret)
}

func QSaveFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSaveFile_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSaveFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSaveFile_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSaveFile_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSaveFile_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSaveFile_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSaveFile_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSaveFile) Delete() {
	C.QSaveFile_Delete(this.h)
}
