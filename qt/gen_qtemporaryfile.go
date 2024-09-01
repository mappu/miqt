package qt

/*

#include "gen_qtemporaryfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QTemporaryFile struct {
	h *C.QTemporaryFile
	*QFile
}

func (this *QTemporaryFile) cPointer() *C.QTemporaryFile {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTemporaryFile(h *C.QTemporaryFile) *QTemporaryFile {
	if h == nil {
		return nil
	}
	return &QTemporaryFile{h: h, QFile: newQFile_U(unsafe.Pointer(h))}
}

func newQTemporaryFile_U(h unsafe.Pointer) *QTemporaryFile {
	return newQTemporaryFile((*C.QTemporaryFile)(h))
}

// NewQTemporaryFile constructs a new QTemporaryFile object.
func NewQTemporaryFile() *QTemporaryFile {
	ret := C.QTemporaryFile_new()
	return newQTemporaryFile(ret)
}

// NewQTemporaryFile2 constructs a new QTemporaryFile object.
func NewQTemporaryFile2(templateName string) *QTemporaryFile {
	templateName_Cstring := C.CString(templateName)
	defer C.free(unsafe.Pointer(templateName_Cstring))
	ret := C.QTemporaryFile_new2(templateName_Cstring, C.size_t(len(templateName)))
	return newQTemporaryFile(ret)
}

// NewQTemporaryFile3 constructs a new QTemporaryFile object.
func NewQTemporaryFile3(parent *QObject) *QTemporaryFile {
	ret := C.QTemporaryFile_new3(parent.cPointer())
	return newQTemporaryFile(ret)
}

// NewQTemporaryFile4 constructs a new QTemporaryFile object.
func NewQTemporaryFile4(templateName string, parent *QObject) *QTemporaryFile {
	templateName_Cstring := C.CString(templateName)
	defer C.free(unsafe.Pointer(templateName_Cstring))
	ret := C.QTemporaryFile_new4(templateName_Cstring, C.size_t(len(templateName)), parent.cPointer())
	return newQTemporaryFile(ret)
}

func (this *QTemporaryFile) MetaObject() *QMetaObject {
	ret := C.QTemporaryFile_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTemporaryFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryFile_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTemporaryFile_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryFile_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTemporaryFile) AutoRemove() bool {
	ret := C.QTemporaryFile_AutoRemove(this.h)
	return (bool)(ret)
}

func (this *QTemporaryFile) SetAutoRemove(b bool) {
	C.QTemporaryFile_SetAutoRemove(this.h, (C.bool)(b))
}

func (this *QTemporaryFile) Open() bool {
	ret := C.QTemporaryFile_Open(this.h)
	return (bool)(ret)
}

func (this *QTemporaryFile) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryFile_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTemporaryFile) FileTemplate() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryFile_FileTemplate(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTemporaryFile) SetFileTemplate(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QTemporaryFile_SetFileTemplate(this.h, name_Cstring, C.size_t(len(name)))
}

func (this *QTemporaryFile) Rename(newName string) bool {
	newName_Cstring := C.CString(newName)
	defer C.free(unsafe.Pointer(newName_Cstring))
	ret := C.QTemporaryFile_Rename(this.h, newName_Cstring, C.size_t(len(newName)))
	return (bool)(ret)
}

func QTemporaryFile_CreateLocalFile(fileName string) *QTemporaryFile {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QTemporaryFile_CreateLocalFile(fileName_Cstring, C.size_t(len(fileName)))
	return newQTemporaryFile_U(unsafe.Pointer(ret))
}

func QTemporaryFile_CreateLocalFileWithFile(file *QFile) *QTemporaryFile {
	ret := C.QTemporaryFile_CreateLocalFileWithFile(file.cPointer())
	return newQTemporaryFile_U(unsafe.Pointer(ret))
}

func QTemporaryFile_CreateNativeFile(fileName string) *QTemporaryFile {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QTemporaryFile_CreateNativeFile(fileName_Cstring, C.size_t(len(fileName)))
	return newQTemporaryFile_U(unsafe.Pointer(ret))
}

func QTemporaryFile_CreateNativeFileWithFile(file *QFile) *QTemporaryFile {
	ret := C.QTemporaryFile_CreateNativeFileWithFile(file.cPointer())
	return newQTemporaryFile_U(unsafe.Pointer(ret))
}

func QTemporaryFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryFile_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTemporaryFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryFile_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTemporaryFile_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryFile_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTemporaryFile_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryFile_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTemporaryFile) Delete() {
	C.QTemporaryFile_Delete(this.h)
}
