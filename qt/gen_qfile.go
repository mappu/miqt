package qt

/*

#include "gen_qfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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

func (this *QFile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQFile(h *C.QFile) *QFile {
	if h == nil {
		return nil
	}
	return &QFile{h: h, QFileDevice: UnsafeNewQFileDevice(unsafe.Pointer(h))}
}

func UnsafeNewQFile(h unsafe.Pointer) *QFile {
	return newQFile((*C.QFile)(h))
}

// NewQFile constructs a new QFile object.
func NewQFile() *QFile {
	ret := C.QFile_new()
	return newQFile(ret)
}

// NewQFile2 constructs a new QFile object.
func NewQFile2(name string) *QFile {
	name_ms := libmiqt.Strdupg(name)
	defer C.free(name_ms)
	ret := C.QFile_new2((*C.struct_miqt_string)(name_ms))
	return newQFile(ret)
}

// NewQFile3 constructs a new QFile object.
func NewQFile3(parent *QObject) *QFile {
	ret := C.QFile_new3(parent.cPointer())
	return newQFile(ret)
}

// NewQFile4 constructs a new QFile object.
func NewQFile4(name string, parent *QObject) *QFile {
	name_ms := libmiqt.Strdupg(name)
	defer C.free(name_ms)
	ret := C.QFile_new4((*C.struct_miqt_string)(name_ms), parent.cPointer())
	return newQFile(ret)
}

func (this *QFile) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QFile_MetaObject(this.h)))
}

func (this *QFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QFile_Metacast(this.h, param1_Cstring)
}

func QFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFile_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFile_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFile_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFile) FileName() string {
	var _ms *C.struct_miqt_string = C.QFile_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFile) SetFileName(name string) {
	name_ms := libmiqt.Strdupg(name)
	defer C.free(name_ms)
	C.QFile_SetFileName(this.h, (*C.struct_miqt_string)(name_ms))
}

func QFile_EncodeName(fileName string) *QByteArray {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QFile_EncodeName((*C.struct_miqt_string)(fileName_ms))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFile_DecodeName(localFileName *QByteArray) string {
	var _ms *C.struct_miqt_string = C.QFile_DecodeName(localFileName.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFile_DecodeNameWithLocalFileName(localFileName string) string {
	localFileName_Cstring := C.CString(localFileName)
	defer C.free(unsafe.Pointer(localFileName_Cstring))
	var _ms *C.struct_miqt_string = C.QFile_DecodeNameWithLocalFileName(localFileName_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFile) Exists() bool {
	return (bool)(C.QFile_Exists(this.h))
}

func QFile_ExistsWithFileName(fileName string) bool {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	return (bool)(C.QFile_ExistsWithFileName((*C.struct_miqt_string)(fileName_ms)))
}

func (this *QFile) ReadLink() string {
	var _ms *C.struct_miqt_string = C.QFile_ReadLink(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFile_ReadLinkWithFileName(fileName string) string {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QFile_ReadLinkWithFileName((*C.struct_miqt_string)(fileName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFile) SymLinkTarget() string {
	var _ms *C.struct_miqt_string = C.QFile_SymLinkTarget(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFile_SymLinkTargetWithFileName(fileName string) string {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QFile_SymLinkTargetWithFileName((*C.struct_miqt_string)(fileName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFile) Remove() bool {
	return (bool)(C.QFile_Remove(this.h))
}

func QFile_RemoveWithFileName(fileName string) bool {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	return (bool)(C.QFile_RemoveWithFileName((*C.struct_miqt_string)(fileName_ms)))
}

func (this *QFile) MoveToTrash() bool {
	return (bool)(C.QFile_MoveToTrash(this.h))
}

func QFile_MoveToTrashWithFileName(fileName string) bool {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	return (bool)(C.QFile_MoveToTrashWithFileName((*C.struct_miqt_string)(fileName_ms)))
}

func (this *QFile) Rename(newName string) bool {
	newName_ms := libmiqt.Strdupg(newName)
	defer C.free(newName_ms)
	return (bool)(C.QFile_Rename(this.h, (*C.struct_miqt_string)(newName_ms)))
}

func QFile_Rename2(oldName string, newName string) bool {
	oldName_ms := libmiqt.Strdupg(oldName)
	defer C.free(oldName_ms)
	newName_ms := libmiqt.Strdupg(newName)
	defer C.free(newName_ms)
	return (bool)(C.QFile_Rename2((*C.struct_miqt_string)(oldName_ms), (*C.struct_miqt_string)(newName_ms)))
}

func (this *QFile) Link(newName string) bool {
	newName_ms := libmiqt.Strdupg(newName)
	defer C.free(newName_ms)
	return (bool)(C.QFile_Link(this.h, (*C.struct_miqt_string)(newName_ms)))
}

func QFile_Link2(oldname string, newName string) bool {
	oldname_ms := libmiqt.Strdupg(oldname)
	defer C.free(oldname_ms)
	newName_ms := libmiqt.Strdupg(newName)
	defer C.free(newName_ms)
	return (bool)(C.QFile_Link2((*C.struct_miqt_string)(oldname_ms), (*C.struct_miqt_string)(newName_ms)))
}

func (this *QFile) Copy(newName string) bool {
	newName_ms := libmiqt.Strdupg(newName)
	defer C.free(newName_ms)
	return (bool)(C.QFile_Copy(this.h, (*C.struct_miqt_string)(newName_ms)))
}

func QFile_Copy2(fileName string, newName string) bool {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	newName_ms := libmiqt.Strdupg(newName)
	defer C.free(newName_ms)
	return (bool)(C.QFile_Copy2((*C.struct_miqt_string)(fileName_ms), (*C.struct_miqt_string)(newName_ms)))
}

func (this *QFile) Open(flags QIODevice__OpenModeFlag) bool {
	return (bool)(C.QFile_Open(this.h, (C.int)(flags)))
}

func (this *QFile) Open3(fd int, ioFlags QIODevice__OpenModeFlag) bool {
	return (bool)(C.QFile_Open3(this.h, (C.int)(fd), (C.int)(ioFlags)))
}

func (this *QFile) Size() int64 {
	return (int64)(C.QFile_Size(this.h))
}

func (this *QFile) Resize(sz int64) bool {
	return (bool)(C.QFile_Resize(this.h, (C.longlong)(sz)))
}

func QFile_Resize2(filename string, sz int64) bool {
	filename_ms := libmiqt.Strdupg(filename)
	defer C.free(filename_ms)
	return (bool)(C.QFile_Resize2((*C.struct_miqt_string)(filename_ms), (C.longlong)(sz)))
}

func (this *QFile) Permissions() QFileDevice__Permission {
	return (QFileDevice__Permission)(C.QFile_Permissions(this.h))
}

func QFile_PermissionsWithFilename(filename string) QFileDevice__Permission {
	filename_ms := libmiqt.Strdupg(filename)
	defer C.free(filename_ms)
	return (QFileDevice__Permission)(C.QFile_PermissionsWithFilename((*C.struct_miqt_string)(filename_ms)))
}

func (this *QFile) SetPermissions(permissionSpec QFileDevice__Permission) bool {
	return (bool)(C.QFile_SetPermissions(this.h, (C.int)(permissionSpec)))
}

func QFile_SetPermissions2(filename string, permissionSpec QFileDevice__Permission) bool {
	filename_ms := libmiqt.Strdupg(filename)
	defer C.free(filename_ms)
	return (bool)(C.QFile_SetPermissions2((*C.struct_miqt_string)(filename_ms), (C.int)(permissionSpec)))
}

func QFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFile_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFile_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFile_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFile_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFile_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFile_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFile) Open33(fd int, ioFlags QIODevice__OpenModeFlag, handleFlags QFileDevice__FileHandleFlag) bool {
	return (bool)(C.QFile_Open33(this.h, (C.int)(fd), (C.int)(ioFlags), (C.int)(handleFlags)))
}

// Delete this object from C++ memory.
func (this *QFile) Delete() {
	C.QFile_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
