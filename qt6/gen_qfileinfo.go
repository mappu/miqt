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
	h *C.QFileInfo
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
	return newQFileInfo((*C.QFileInfo)(h))
}

// NewQFileInfo constructs a new QFileInfo object.
func NewQFileInfo() *QFileInfo {

	return newQFileInfo(C.QFileInfo_new())
}

// NewQFileInfo2 constructs a new QFileInfo object.
func NewQFileInfo2(file string) *QFileInfo {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))

	return newQFileInfo(C.QFileInfo_new2(file_ms))
}

// NewQFileInfo3 constructs a new QFileInfo object.
func NewQFileInfo3(file *QFileDevice) *QFileInfo {

	return newQFileInfo(C.QFileInfo_new3(file.cPointer()))
}

// NewQFileInfo4 constructs a new QFileInfo object.
func NewQFileInfo4(dir *QDir, file string) *QFileInfo {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))

	return newQFileInfo(C.QFileInfo_new4(dir.cPointer(), file_ms))
}

// NewQFileInfo5 constructs a new QFileInfo object.
func NewQFileInfo5(fileinfo *QFileInfo) *QFileInfo {

	return newQFileInfo(C.QFileInfo_new5(fileinfo.cPointer()))
}

func (this *QFileInfo) OperatorAssign(fileinfo *QFileInfo) {
	C.QFileInfo_operatorAssign(this.h, fileinfo.cPointer())
}

func (this *QFileInfo) Swap(other *QFileInfo) {
	C.QFileInfo_swap(this.h, other.cPointer())
}

func (this *QFileInfo) OperatorEqual(fileinfo *QFileInfo) bool {
	return (bool)(C.QFileInfo_operatorEqual(this.h, fileinfo.cPointer()))
}

func (this *QFileInfo) OperatorNotEqual(fileinfo *QFileInfo) bool {
	return (bool)(C.QFileInfo_operatorNotEqual(this.h, fileinfo.cPointer()))
}

func (this *QFileInfo) SetFile(file string) {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	C.QFileInfo_setFile(this.h, file_ms)
}

func (this *QFileInfo) SetFileWithFile(file *QFileDevice) {
	C.QFileInfo_setFileWithFile(this.h, file.cPointer())
}

func (this *QFileInfo) SetFile2(dir *QDir, file string) {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	C.QFileInfo_setFile2(this.h, dir.cPointer(), file_ms)
}

func (this *QFileInfo) Exists() bool {
	return (bool)(C.QFileInfo_exists(this.h))
}

func QFileInfo_ExistsWithFile(file string) bool {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	return (bool)(C.QFileInfo_existsWithFile(file_ms))
}

func (this *QFileInfo) Refresh() {
	C.QFileInfo_refresh(this.h)
}

func (this *QFileInfo) FilePath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_filePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) AbsoluteFilePath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_absoluteFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) CanonicalFilePath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_canonicalFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) FileName() string {
	var _ms C.struct_miqt_string = C.QFileInfo_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) BaseName() string {
	var _ms C.struct_miqt_string = C.QFileInfo_baseName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) CompleteBaseName() string {
	var _ms C.struct_miqt_string = C.QFileInfo_completeBaseName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) Suffix() string {
	var _ms C.struct_miqt_string = C.QFileInfo_suffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) BundleName() string {
	var _ms C.struct_miqt_string = C.QFileInfo_bundleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) CompleteSuffix() string {
	var _ms C.struct_miqt_string = C.QFileInfo_completeSuffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) Path() string {
	var _ms C.struct_miqt_string = C.QFileInfo_path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) AbsolutePath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_absolutePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) CanonicalPath() string {
	var _ms C.struct_miqt_string = C.QFileInfo_canonicalPath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) Dir() *QDir {
	_goptr := newQDir(C.QFileInfo_dir(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) AbsoluteDir() *QDir {
	_goptr := newQDir(C.QFileInfo_absoluteDir(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) IsReadable() bool {
	return (bool)(C.QFileInfo_isReadable(this.h))
}

func (this *QFileInfo) IsWritable() bool {
	return (bool)(C.QFileInfo_isWritable(this.h))
}

func (this *QFileInfo) IsExecutable() bool {
	return (bool)(C.QFileInfo_isExecutable(this.h))
}

func (this *QFileInfo) IsHidden() bool {
	return (bool)(C.QFileInfo_isHidden(this.h))
}

func (this *QFileInfo) IsNativePath() bool {
	return (bool)(C.QFileInfo_isNativePath(this.h))
}

func (this *QFileInfo) IsRelative() bool {
	return (bool)(C.QFileInfo_isRelative(this.h))
}

func (this *QFileInfo) IsAbsolute() bool {
	return (bool)(C.QFileInfo_isAbsolute(this.h))
}

func (this *QFileInfo) MakeAbsolute() bool {
	return (bool)(C.QFileInfo_makeAbsolute(this.h))
}

func (this *QFileInfo) IsFile() bool {
	return (bool)(C.QFileInfo_isFile(this.h))
}

func (this *QFileInfo) IsDir() bool {
	return (bool)(C.QFileInfo_isDir(this.h))
}

func (this *QFileInfo) IsSymLink() bool {
	return (bool)(C.QFileInfo_isSymLink(this.h))
}

func (this *QFileInfo) IsSymbolicLink() bool {
	return (bool)(C.QFileInfo_isSymbolicLink(this.h))
}

func (this *QFileInfo) IsShortcut() bool {
	return (bool)(C.QFileInfo_isShortcut(this.h))
}

func (this *QFileInfo) IsAlias() bool {
	return (bool)(C.QFileInfo_isAlias(this.h))
}

func (this *QFileInfo) IsJunction() bool {
	return (bool)(C.QFileInfo_isJunction(this.h))
}

func (this *QFileInfo) IsRoot() bool {
	return (bool)(C.QFileInfo_isRoot(this.h))
}

func (this *QFileInfo) IsBundle() bool {
	return (bool)(C.QFileInfo_isBundle(this.h))
}

func (this *QFileInfo) SymLinkTarget() string {
	var _ms C.struct_miqt_string = C.QFileInfo_symLinkTarget(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) JunctionTarget() string {
	var _ms C.struct_miqt_string = C.QFileInfo_junctionTarget(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) Owner() string {
	var _ms C.struct_miqt_string = C.QFileInfo_owner(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) OwnerId() uint {
	return (uint)(C.QFileInfo_ownerId(this.h))
}

func (this *QFileInfo) Group() string {
	var _ms C.struct_miqt_string = C.QFileInfo_group(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileInfo) GroupId() uint {
	return (uint)(C.QFileInfo_groupId(this.h))
}

func (this *QFileInfo) Permission(permissions QFileDevice__Permission) bool {
	return (bool)(C.QFileInfo_permission(this.h, (C.int)(permissions)))
}

func (this *QFileInfo) Permissions() QFileDevice__Permission {
	return (QFileDevice__Permission)(C.QFileInfo_permissions(this.h))
}

func (this *QFileInfo) Size() int64 {
	return (int64)(C.QFileInfo_size(this.h))
}

func (this *QFileInfo) BirthTime() *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_birthTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) MetadataChangeTime() *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_metadataChangeTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) LastModified() *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_lastModified(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) LastRead() *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_lastRead(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) FileTime(time QFileDevice__FileTime) *QDateTime {
	_goptr := newQDateTime(C.QFileInfo_fileTime(this.h, (C.int)(time)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileInfo) Caching() bool {
	return (bool)(C.QFileInfo_caching(this.h))
}

func (this *QFileInfo) SetCaching(on bool) {
	C.QFileInfo_setCaching(this.h, (C.bool)(on))
}

func (this *QFileInfo) Stat() {
	C.QFileInfo_stat(this.h)
}

// Delete this object from C++ memory.
func (this *QFileInfo) Delete() {
	C.QFileInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
