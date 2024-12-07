package qt6

/*

#include "gen_qfileinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFileInfo struct {
	h          *C.QFileInfo
	isSubclass bool
}

func (this *QFileInfo) cPointer() *C.QFileInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFileInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFileInfo constructs the type using only CGO pointers.
func newQFileInfo(h *C.QFileInfo) *QFileInfo {
	if h == nil {
		return nil
	}
	return &QFileInfo{h: h}
}

// UnsafeNewQFileInfo constructs the type using only unsafe pointers.
func UnsafeNewQFileInfo(h unsafe.Pointer) *QFileInfo {
	if h == nil {
		return nil
	}

	return &QFileInfo{h: (*C.QFileInfo)(h)}
}

// NewQFileInfo constructs a new QFileInfo object.
func NewQFileInfo() *QFileInfo {
	var outptr_QFileInfo *C.QFileInfo = nil

	C.QFileInfo_new(&outptr_QFileInfo)
	ret := newQFileInfo(outptr_QFileInfo)
	ret.isSubclass = true
	return ret
}

// NewQFileInfo2 constructs a new QFileInfo object.
func NewQFileInfo2(file string) *QFileInfo {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	var outptr_QFileInfo *C.QFileInfo = nil

	C.QFileInfo_new2(file_ms, &outptr_QFileInfo)
	ret := newQFileInfo(outptr_QFileInfo)
	ret.isSubclass = true
	return ret
}

// NewQFileInfo3 constructs a new QFileInfo object.
func NewQFileInfo3(file *QFileDevice) *QFileInfo {
	var outptr_QFileInfo *C.QFileInfo = nil

	C.QFileInfo_new3(file.cPointer(), &outptr_QFileInfo)
	ret := newQFileInfo(outptr_QFileInfo)
	ret.isSubclass = true
	return ret
}

// NewQFileInfo4 constructs a new QFileInfo object.
func NewQFileInfo4(dir *QDir, file string) *QFileInfo {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	var outptr_QFileInfo *C.QFileInfo = nil

	C.QFileInfo_new4(dir.cPointer(), file_ms, &outptr_QFileInfo)
	ret := newQFileInfo(outptr_QFileInfo)
	ret.isSubclass = true
	return ret
}

// NewQFileInfo5 constructs a new QFileInfo object.
func NewQFileInfo5(fileinfo *QFileInfo) *QFileInfo {
	var outptr_QFileInfo *C.QFileInfo = nil

	C.QFileInfo_new5(fileinfo.cPointer(), &outptr_QFileInfo)
	ret := newQFileInfo(outptr_QFileInfo)
	ret.isSubclass = true
	return ret
}

func (this *QFileInfo) OperatorAssign(fileinfo *QFileInfo) {
	C.QFileInfo_OperatorAssign(this.h, fileinfo.cPointer())
}

func (this *QFileInfo) Swap(other *QFileInfo) {
	C.QFileInfo_Swap(this.h, other.cPointer())
}

func (this *QFileInfo) OperatorEqual(fileinfo *QFileInfo) bool {
	return (bool)(C.QFileInfo_OperatorEqual(this.h, fileinfo.cPointer()))
}

func (this *QFileInfo) OperatorNotEqual(fileinfo *QFileInfo) bool {
	return (bool)(C.QFileInfo_OperatorNotEqual(this.h, fileinfo.cPointer()))
}

func (this *QFileInfo) SetFile(file string) {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	C.QFileInfo_SetFile(this.h, file_ms)
}

func (this *QFileInfo) SetFileWithFile(file *QFileDevice) {
	C.QFileInfo_SetFileWithFile(this.h, file.cPointer())
}

func (this *QFileInfo) SetFile2(dir *QDir, file string) {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	C.QFileInfo_SetFile2(this.h, dir.cPointer(), file_ms)
}

func (this *QFileInfo) Exists() bool {
	return (bool)(C.QFileInfo_Exists(this.h))
}

func QFileInfo_ExistsWithFile(file string) bool {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	return (bool)(C.QFileInfo_ExistsWithFile(file_ms))
}

func (this *QFileInfo) Refresh() {
	C.QFileInfo_Refresh(this.h)
}

func (this *QFileInfo) FilePath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_FilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) AbsoluteFilePath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_AbsoluteFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) CanonicalFilePath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_CanonicalFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) FileName() string {
	var _ms C.struct_miqt_string = C.QFileInfo_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) BaseName() string {
	var _ms C.struct_miqt_string = C.QFileInfo_BaseName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) CompleteBaseName() string {
	var _ms C.struct_miqt_string = C.QFileInfo_CompleteBaseName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) Suffix() string {
	var _ms C.struct_miqt_string = C.QFileInfo_Suffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) BundleName() string {
	var _ms C.struct_miqt_string = C.QFileInfo_BundleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) CompleteSuffix() string {
	var _ms C.struct_miqt_string = C.QFileInfo_CompleteSuffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) Path() string {
	var _ms C.struct_miqt_string = C.QFileInfo_Path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) AbsolutePath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_AbsolutePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) CanonicalPath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_CanonicalPath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) Dir() *QDir {
	_goptr := newQDir(C.QFileInfo_Dir(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) AbsoluteDir() *QDir {
	_goptr := newQDir(C.QFileInfo_AbsoluteDir(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) IsReadable() bool {
	return (bool)(C.QFileInfo_IsReadable(this.h))
}

func (this *QFileInfo) IsWritable() bool {
	return (bool)(C.QFileInfo_IsWritable(this.h))
}

func (this *QFileInfo) IsExecutable() bool {
	return (bool)(C.QFileInfo_IsExecutable(this.h))
}

func (this *QFileInfo) IsHidden() bool {
	return (bool)(C.QFileInfo_IsHidden(this.h))
}

func (this *QFileInfo) IsNativePath() bool {
	return (bool)(C.QFileInfo_IsNativePath(this.h))
}

func (this *QFileInfo) IsRelative() bool {
	return (bool)(C.QFileInfo_IsRelative(this.h))
}

func (this *QFileInfo) IsAbsolute() bool {
	return (bool)(C.QFileInfo_IsAbsolute(this.h))
}

func (this *QFileInfo) MakeAbsolute() bool {
	return (bool)(C.QFileInfo_MakeAbsolute(this.h))
}

func (this *QFileInfo) IsFile() bool {
	return (bool)(C.QFileInfo_IsFile(this.h))
}

func (this *QFileInfo) IsDir() bool {
	return (bool)(C.QFileInfo_IsDir(this.h))
}

func (this *QFileInfo) IsSymLink() bool {
	return (bool)(C.QFileInfo_IsSymLink(this.h))
}

func (this *QFileInfo) IsSymbolicLink() bool {
	return (bool)(C.QFileInfo_IsSymbolicLink(this.h))
}

func (this *QFileInfo) IsShortcut() bool {
	return (bool)(C.QFileInfo_IsShortcut(this.h))
}

func (this *QFileInfo) IsAlias() bool {
	return (bool)(C.QFileInfo_IsAlias(this.h))
}

func (this *QFileInfo) IsJunction() bool {
	return (bool)(C.QFileInfo_IsJunction(this.h))
}

func (this *QFileInfo) IsRoot() bool {
	return (bool)(C.QFileInfo_IsRoot(this.h))
}

func (this *QFileInfo) IsBundle() bool {
	return (bool)(C.QFileInfo_IsBundle(this.h))
}

func (this *QFileInfo) SymLinkTarget() string {
	var _ms C.struct_miqt_string = C.QFileInfo_SymLinkTarget(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) JunctionTarget() string {
	var _ms C.struct_miqt_string = C.QFileInfo_JunctionTarget(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) Owner() string {
	var _ms C.struct_miqt_string = C.QFileInfo_Owner(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) OwnerId() uint {
	return (uint)(C.QFileInfo_OwnerId(this.h))
}

func (this *QFileInfo) Group() string {
	var _ms C.struct_miqt_string = C.QFileInfo_Group(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) GroupId() uint {
	return (uint)(C.QFileInfo_GroupId(this.h))
}

func (this *QFileInfo) Permission(permissions QFileDevice__Permission) bool {
	return (bool)(C.QFileInfo_Permission(this.h, (C.int)(permissions)))
}

func (this *QFileInfo) Permissions() QFileDevice__Permission {
	return (QFileDevice__Permission)(C.QFileInfo_Permissions(this.h))
}

func (this *QFileInfo) Size() int64 {
	return (int64)(C.QFileInfo_Size(this.h))
}

func (this *QFileInfo) BirthTime() *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_BirthTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) MetadataChangeTime() *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_MetadataChangeTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) LastModified() *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_LastModified(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) LastRead() *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_LastRead(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) FileTime(time QFileDevice__FileTime) *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_FileTime(this.h, (C.int)(time)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) Caching() bool {
	return (bool)(C.QFileInfo_Caching(this.h))
}

func (this *QFileInfo) SetCaching(on bool) {
	C.QFileInfo_SetCaching(this.h, (C.bool)(on))
}

func (this *QFileInfo) Stat() {
	C.QFileInfo_Stat(this.h)
}

// Delete this object from C++ memory.
func (this *QFileInfo) Delete() {
	C.QFileInfo_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
