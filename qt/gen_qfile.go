package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFile struct {
	h *C.QFile
	*QFileDevice
}

func (this *QFile) cPointer() *C.QFile {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFile(h *C.QFile) *QFile {
	return &QFile{h: h, QFileDevice: newQFileDevice_U(unsafe.Pointer(h))}
}

func newQFile_U(h unsafe.Pointer) *QFile {
	return newQFile((*C.QFile)(h))
}

// NewQFile constructs a new QFile object.
func NewQFile() *QFile {
	ret := C.QFile_new()
	return newQFile(ret)
}

// NewQFile2 constructs a new QFile object.
func NewQFile2(name string) *QFile {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QFile_new2(name_Cstring, C.ulong(len(name)))
	return newQFile(ret)
}

// NewQFile3 constructs a new QFile object.
func NewQFile3(parent *QObject) *QFile {
	ret := C.QFile_new3(parent.cPointer())
	return newQFile(ret)
}

// NewQFile4 constructs a new QFile object.
func NewQFile4(name string, parent *QObject) *QFile {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QFile_new4(name_Cstring, C.ulong(len(name)), parent.cPointer())
	return newQFile(ret)
}

func (this *QFile) MetaObject() *QMetaObject {
	ret := C.QFile_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFile_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFile) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFile) SetFileName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QFile_SetFileName(this.h, name_Cstring, C.ulong(len(name)))
}

func QFile_EncodeName(fileName string) *QByteArray {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QFile_EncodeName(fileName_Cstring, C.ulong(len(fileName)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFile_DecodeName(localFileName *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_DecodeName(localFileName.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFile_DecodeNameWithLocalFileName(localFileName string) string {
	localFileName_Cstring := C.CString(localFileName)
	defer C.free(unsafe.Pointer(localFileName_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_DecodeNameWithLocalFileName(localFileName_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFile) Exists() bool {
	ret := C.QFile_Exists(this.h)
	return (bool)(ret)
}

func QFile_ExistsWithFileName(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QFile_ExistsWithFileName(fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QFile) ReadLink() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_ReadLink(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFile_ReadLinkWithFileName(fileName string) string {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_ReadLinkWithFileName(fileName_Cstring, C.ulong(len(fileName)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFile) SymLinkTarget() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_SymLinkTarget(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFile_SymLinkTargetWithFileName(fileName string) string {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_SymLinkTargetWithFileName(fileName_Cstring, C.ulong(len(fileName)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFile) Remove() bool {
	ret := C.QFile_Remove(this.h)
	return (bool)(ret)
}

func QFile_RemoveWithFileName(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QFile_RemoveWithFileName(fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QFile) MoveToTrash() bool {
	ret := C.QFile_MoveToTrash(this.h)
	return (bool)(ret)
}

func QFile_MoveToTrashWithFileName(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QFile_MoveToTrashWithFileName(fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QFile) Rename(newName string) bool {
	newName_Cstring := C.CString(newName)
	defer C.free(unsafe.Pointer(newName_Cstring))
	ret := C.QFile_Rename(this.h, newName_Cstring, C.ulong(len(newName)))
	return (bool)(ret)
}

func QFile_Rename2(oldName string, newName string) bool {
	oldName_Cstring := C.CString(oldName)
	defer C.free(unsafe.Pointer(oldName_Cstring))
	newName_Cstring := C.CString(newName)
	defer C.free(unsafe.Pointer(newName_Cstring))
	ret := C.QFile_Rename2(oldName_Cstring, C.ulong(len(oldName)), newName_Cstring, C.ulong(len(newName)))
	return (bool)(ret)
}

func (this *QFile) Link(newName string) bool {
	newName_Cstring := C.CString(newName)
	defer C.free(unsafe.Pointer(newName_Cstring))
	ret := C.QFile_Link(this.h, newName_Cstring, C.ulong(len(newName)))
	return (bool)(ret)
}

func QFile_Link2(oldname string, newName string) bool {
	oldname_Cstring := C.CString(oldname)
	defer C.free(unsafe.Pointer(oldname_Cstring))
	newName_Cstring := C.CString(newName)
	defer C.free(unsafe.Pointer(newName_Cstring))
	ret := C.QFile_Link2(oldname_Cstring, C.ulong(len(oldname)), newName_Cstring, C.ulong(len(newName)))
	return (bool)(ret)
}

func (this *QFile) Copy(newName string) bool {
	newName_Cstring := C.CString(newName)
	defer C.free(unsafe.Pointer(newName_Cstring))
	ret := C.QFile_Copy(this.h, newName_Cstring, C.ulong(len(newName)))
	return (bool)(ret)
}

func QFile_Copy2(fileName string, newName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	newName_Cstring := C.CString(newName)
	defer C.free(unsafe.Pointer(newName_Cstring))
	ret := C.QFile_Copy2(fileName_Cstring, C.ulong(len(fileName)), newName_Cstring, C.ulong(len(newName)))
	return (bool)(ret)
}

func (this *QFile) Open(flags int) bool {
	ret := C.QFile_Open(this.h, (C.int)(flags))
	return (bool)(ret)
}

func (this *QFile) Open3(fd int, ioFlags int) bool {
	ret := C.QFile_Open3(this.h, (C.int)(fd), (C.int)(ioFlags))
	return (bool)(ret)
}

func (this *QFile) Size() int64 {
	ret := C.QFile_Size(this.h)
	return (int64)(ret)
}

func (this *QFile) Resize(sz int64) bool {
	ret := C.QFile_Resize(this.h, (C.longlong)(sz))
	return (bool)(ret)
}

func QFile_Resize2(filename string, sz int64) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QFile_Resize2(filename_Cstring, C.ulong(len(filename)), (C.longlong)(sz))
	return (bool)(ret)
}

func (this *QFile) Permissions() int {
	ret := C.QFile_Permissions(this.h)
	return (int)(ret)
}

func QFile_PermissionsWithFilename(filename string) int {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QFile_PermissionsWithFilename(filename_Cstring, C.ulong(len(filename)))
	return (int)(ret)
}

func (this *QFile) SetPermissions(permissionSpec int) bool {
	ret := C.QFile_SetPermissions(this.h, (C.int)(permissionSpec))
	return (bool)(ret)
}

func QFile_SetPermissions2(filename string, permissionSpec int) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QFile_SetPermissions2(filename_Cstring, C.ulong(len(filename)), (C.int)(permissionSpec))
	return (bool)(ret)
}

func QFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFile_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFile_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFile_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFile) Open33(fd int, ioFlags int, handleFlags int) bool {
	ret := C.QFile_Open33(this.h, (C.int)(fd), (C.int)(ioFlags), (C.int)(handleFlags))
	return (bool)(ret)
}

func (this *QFile) Delete() {
	C.QFile_Delete(this.h)
}
