package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfileinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFileInfo struct {
	h *C.QFileInfo
}

func (this *QFileInfo) cPointer() *C.QFileInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFileInfo(h *C.QFileInfo) *QFileInfo {
	return &QFileInfo{h: h}
}

func newQFileInfo_U(h unsafe.Pointer) *QFileInfo {
	return newQFileInfo((*C.QFileInfo)(h))
}

// NewQFileInfo constructs a new QFileInfo object.
func NewQFileInfo() *QFileInfo {
	ret := C.QFileInfo_new()
	return newQFileInfo(ret)
}

// NewQFileInfo2 constructs a new QFileInfo object.
func NewQFileInfo2(file string) *QFileInfo {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	ret := C.QFileInfo_new2(file_Cstring, C.ulong(len(file)))
	return newQFileInfo(ret)
}

// NewQFileInfo3 constructs a new QFileInfo object.
func NewQFileInfo3(file *QFile) *QFileInfo {
	ret := C.QFileInfo_new3(file.cPointer())
	return newQFileInfo(ret)
}

// NewQFileInfo4 constructs a new QFileInfo object.
func NewQFileInfo4(dir *QDir, file string) *QFileInfo {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	ret := C.QFileInfo_new4(dir.cPointer(), file_Cstring, C.ulong(len(file)))
	return newQFileInfo(ret)
}

// NewQFileInfo5 constructs a new QFileInfo object.
func NewQFileInfo5(fileinfo *QFileInfo) *QFileInfo {
	ret := C.QFileInfo_new5(fileinfo.cPointer())
	return newQFileInfo(ret)
}

func (this *QFileInfo) OperatorAssign(fileinfo *QFileInfo) {
	C.QFileInfo_OperatorAssign(this.h, fileinfo.cPointer())
}

func (this *QFileInfo) Swap(other *QFileInfo) {
	C.QFileInfo_Swap(this.h, other.cPointer())
}

func (this *QFileInfo) OperatorEqual(fileinfo *QFileInfo) bool {
	ret := C.QFileInfo_OperatorEqual(this.h, fileinfo.cPointer())
	return (bool)(ret)
}

func (this *QFileInfo) OperatorNotEqual(fileinfo *QFileInfo) bool {
	ret := C.QFileInfo_OperatorNotEqual(this.h, fileinfo.cPointer())
	return (bool)(ret)
}

func (this *QFileInfo) SetFile(file string) {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	C.QFileInfo_SetFile(this.h, file_Cstring, C.ulong(len(file)))
}

func (this *QFileInfo) SetFileWithFile(file *QFile) {
	C.QFileInfo_SetFileWithFile(this.h, file.cPointer())
}

func (this *QFileInfo) SetFile2(dir *QDir, file string) {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	C.QFileInfo_SetFile2(this.h, dir.cPointer(), file_Cstring, C.ulong(len(file)))
}

func (this *QFileInfo) Exists() bool {
	ret := C.QFileInfo_Exists(this.h)
	return (bool)(ret)
}

func QFileInfo_ExistsWithFile(file string) bool {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	ret := C.QFileInfo_ExistsWithFile(file_Cstring, C.ulong(len(file)))
	return (bool)(ret)
}

func (this *QFileInfo) Refresh() {
	C.QFileInfo_Refresh(this.h)
}

func (this *QFileInfo) FilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_FilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) AbsoluteFilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_AbsoluteFilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) CanonicalFilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_CanonicalFilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) BaseName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_BaseName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) CompleteBaseName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_CompleteBaseName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) Suffix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_Suffix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) BundleName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_BundleName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) CompleteSuffix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_CompleteSuffix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) Path() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_Path(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) AbsolutePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_AbsolutePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) CanonicalPath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_CanonicalPath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) Dir() *QDir {
	ret := C.QFileInfo_Dir(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDir(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDir) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileInfo) AbsoluteDir() *QDir {
	ret := C.QFileInfo_AbsoluteDir(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDir(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDir) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileInfo) IsReadable() bool {
	ret := C.QFileInfo_IsReadable(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsWritable() bool {
	ret := C.QFileInfo_IsWritable(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsExecutable() bool {
	ret := C.QFileInfo_IsExecutable(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsHidden() bool {
	ret := C.QFileInfo_IsHidden(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsNativePath() bool {
	ret := C.QFileInfo_IsNativePath(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsRelative() bool {
	ret := C.QFileInfo_IsRelative(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsAbsolute() bool {
	ret := C.QFileInfo_IsAbsolute(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) MakeAbsolute() bool {
	ret := C.QFileInfo_MakeAbsolute(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsFile() bool {
	ret := C.QFileInfo_IsFile(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsDir() bool {
	ret := C.QFileInfo_IsDir(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsSymLink() bool {
	ret := C.QFileInfo_IsSymLink(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsSymbolicLink() bool {
	ret := C.QFileInfo_IsSymbolicLink(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsShortcut() bool {
	ret := C.QFileInfo_IsShortcut(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsJunction() bool {
	ret := C.QFileInfo_IsJunction(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsRoot() bool {
	ret := C.QFileInfo_IsRoot(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) IsBundle() bool {
	ret := C.QFileInfo_IsBundle(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) ReadLink() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_ReadLink(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) SymLinkTarget() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_SymLinkTarget(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) Owner() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_Owner(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) OwnerId() uint {
	ret := C.QFileInfo_OwnerId(this.h)
	return (uint)(ret)
}

func (this *QFileInfo) Group() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileInfo_Group(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileInfo) GroupId() uint {
	ret := C.QFileInfo_GroupId(this.h)
	return (uint)(ret)
}

func (this *QFileInfo) Size() int64 {
	ret := C.QFileInfo_Size(this.h)
	return (int64)(ret)
}

func (this *QFileInfo) Created() *QDateTime {
	ret := C.QFileInfo_Created(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileInfo) BirthTime() *QDateTime {
	ret := C.QFileInfo_BirthTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileInfo) MetadataChangeTime() *QDateTime {
	ret := C.QFileInfo_MetadataChangeTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileInfo) LastModified() *QDateTime {
	ret := C.QFileInfo_LastModified(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileInfo) LastRead() *QDateTime {
	ret := C.QFileInfo_LastRead(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileInfo) Caching() bool {
	ret := C.QFileInfo_Caching(this.h)
	return (bool)(ret)
}

func (this *QFileInfo) SetCaching(on bool) {
	C.QFileInfo_SetCaching(this.h, (C.bool)(on))
}

func (this *QFileInfo) Delete() {
	C.QFileInfo_Delete(this.h)
}
