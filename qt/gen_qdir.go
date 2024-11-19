package qt

/*

#include "gen_qdir.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDir__Filter int

const (
	QDir__Dirs           QDir__Filter = 1
	QDir__Files          QDir__Filter = 2
	QDir__Drives         QDir__Filter = 4
	QDir__NoSymLinks     QDir__Filter = 8
	QDir__AllEntries     QDir__Filter = 7
	QDir__TypeMask       QDir__Filter = 15
	QDir__Readable       QDir__Filter = 16
	QDir__Writable       QDir__Filter = 32
	QDir__Executable     QDir__Filter = 64
	QDir__PermissionMask QDir__Filter = 112
	QDir__Modified       QDir__Filter = 128
	QDir__Hidden         QDir__Filter = 256
	QDir__System         QDir__Filter = 512
	QDir__AccessMask     QDir__Filter = 1008
	QDir__AllDirs        QDir__Filter = 1024
	QDir__CaseSensitive  QDir__Filter = 2048
	QDir__NoDot          QDir__Filter = 8192
	QDir__NoDotDot       QDir__Filter = 16384
	QDir__NoDotAndDotDot QDir__Filter = 24576
	QDir__NoFilter       QDir__Filter = -1
)

type QDir__SortFlag int

const (
	QDir__Name        QDir__SortFlag = 0
	QDir__Time        QDir__SortFlag = 1
	QDir__Size        QDir__SortFlag = 2
	QDir__Unsorted    QDir__SortFlag = 3
	QDir__SortByMask  QDir__SortFlag = 3
	QDir__DirsFirst   QDir__SortFlag = 4
	QDir__Reversed    QDir__SortFlag = 8
	QDir__IgnoreCase  QDir__SortFlag = 16
	QDir__DirsLast    QDir__SortFlag = 32
	QDir__LocaleAware QDir__SortFlag = 64
	QDir__Type        QDir__SortFlag = 128
	QDir__NoSort      QDir__SortFlag = -1
)

type QDir struct {
	h          *C.QDir
	isSubclass bool
}

func (this *QDir) cPointer() *C.QDir {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDir) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDir constructs the type using only CGO pointers.
func newQDir(h *C.QDir) *QDir {
	if h == nil {
		return nil
	}
	return &QDir{h: h}
}

// UnsafeNewQDir constructs the type using only unsafe pointers.
func UnsafeNewQDir(h unsafe.Pointer) *QDir {
	if h == nil {
		return nil
	}

	return &QDir{h: (*C.QDir)(h)}
}

// NewQDir constructs a new QDir object.
func NewQDir(param1 *QDir) *QDir {
	var outptr_QDir *C.QDir = nil

	C.QDir_new(param1.cPointer(), &outptr_QDir)
	ret := newQDir(outptr_QDir)
	ret.isSubclass = true
	return ret
}

// NewQDir2 constructs a new QDir object.
func NewQDir2() *QDir {
	var outptr_QDir *C.QDir = nil

	C.QDir_new2(&outptr_QDir)
	ret := newQDir(outptr_QDir)
	ret.isSubclass = true
	return ret
}

// NewQDir3 constructs a new QDir object.
func NewQDir3(path string, nameFilter string) *QDir {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	nameFilter_ms := C.struct_miqt_string{}
	nameFilter_ms.data = C.CString(nameFilter)
	nameFilter_ms.len = C.size_t(len(nameFilter))
	defer C.free(unsafe.Pointer(nameFilter_ms.data))
	var outptr_QDir *C.QDir = nil

	C.QDir_new3(path_ms, nameFilter_ms, &outptr_QDir)
	ret := newQDir(outptr_QDir)
	ret.isSubclass = true
	return ret
}

// NewQDir4 constructs a new QDir object.
func NewQDir4(path string) *QDir {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	var outptr_QDir *C.QDir = nil

	C.QDir_new4(path_ms, &outptr_QDir)
	ret := newQDir(outptr_QDir)
	ret.isSubclass = true
	return ret
}

// NewQDir5 constructs a new QDir object.
func NewQDir5(path string, nameFilter string, sort QDir__SortFlag) *QDir {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	nameFilter_ms := C.struct_miqt_string{}
	nameFilter_ms.data = C.CString(nameFilter)
	nameFilter_ms.len = C.size_t(len(nameFilter))
	defer C.free(unsafe.Pointer(nameFilter_ms.data))
	var outptr_QDir *C.QDir = nil

	C.QDir_new5(path_ms, nameFilter_ms, (C.int)(sort), &outptr_QDir)
	ret := newQDir(outptr_QDir)
	ret.isSubclass = true
	return ret
}

// NewQDir6 constructs a new QDir object.
func NewQDir6(path string, nameFilter string, sort QDir__SortFlag, filter QDir__Filter) *QDir {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	nameFilter_ms := C.struct_miqt_string{}
	nameFilter_ms.data = C.CString(nameFilter)
	nameFilter_ms.len = C.size_t(len(nameFilter))
	defer C.free(unsafe.Pointer(nameFilter_ms.data))
	var outptr_QDir *C.QDir = nil

	C.QDir_new6(path_ms, nameFilter_ms, (C.int)(sort), (C.int)(filter), &outptr_QDir)
	ret := newQDir(outptr_QDir)
	ret.isSubclass = true
	return ret
}

func (this *QDir) OperatorAssign(param1 *QDir) {
	C.QDir_OperatorAssign(this.h, param1.cPointer())
}

func (this *QDir) OperatorAssignWithPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QDir_OperatorAssignWithPath(this.h, path_ms)
}

func (this *QDir) Swap(other *QDir) {
	C.QDir_Swap(this.h, other.cPointer())
}

func (this *QDir) SetPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QDir_SetPath(this.h, path_ms)
}

func (this *QDir) Path() string {
	var _ms C.struct_miqt_string = C.QDir_Path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDir) AbsolutePath() string {
	var _ms C.struct_miqt_string = C.QDir_AbsolutePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDir) CanonicalPath() string {
	var _ms C.struct_miqt_string = C.QDir_CanonicalPath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDir_AddResourceSearchPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QDir_AddResourceSearchPath(path_ms)
}

func QDir_SetSearchPaths(prefix string, searchPaths []string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	searchPaths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(searchPaths))))
	defer C.free(unsafe.Pointer(searchPaths_CArray))
	for i := range searchPaths {
		searchPaths_i_ms := C.struct_miqt_string{}
		searchPaths_i_ms.data = C.CString(searchPaths[i])
		searchPaths_i_ms.len = C.size_t(len(searchPaths[i]))
		defer C.free(unsafe.Pointer(searchPaths_i_ms.data))
		searchPaths_CArray[i] = searchPaths_i_ms
	}
	searchPaths_ma := C.struct_miqt_array{len: C.size_t(len(searchPaths)), data: unsafe.Pointer(searchPaths_CArray)}
	C.QDir_SetSearchPaths(prefix_ms, searchPaths_ma)
}

func QDir_AddSearchPath(prefix string, path string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QDir_AddSearchPath(prefix_ms, path_ms)
}

func QDir_SearchPaths(prefix string) []string {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	var _ma C.struct_miqt_array = C.QDir_SearchPaths(prefix_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) DirName() string {
	var _ms C.struct_miqt_string = C.QDir_DirName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDir) FilePath(fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QDir_FilePath(this.h, fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDir) AbsoluteFilePath(fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QDir_AbsoluteFilePath(this.h, fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDir) RelativeFilePath(fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QDir_RelativeFilePath(this.h, fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDir_ToNativeSeparators(pathName string) string {
	pathName_ms := C.struct_miqt_string{}
	pathName_ms.data = C.CString(pathName)
	pathName_ms.len = C.size_t(len(pathName))
	defer C.free(unsafe.Pointer(pathName_ms.data))
	var _ms C.struct_miqt_string = C.QDir_ToNativeSeparators(pathName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDir_FromNativeSeparators(pathName string) string {
	pathName_ms := C.struct_miqt_string{}
	pathName_ms.data = C.CString(pathName)
	pathName_ms.len = C.size_t(len(pathName))
	defer C.free(unsafe.Pointer(pathName_ms.data))
	var _ms C.struct_miqt_string = C.QDir_FromNativeSeparators(pathName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDir) Cd(dirName string) bool {
	dirName_ms := C.struct_miqt_string{}
	dirName_ms.data = C.CString(dirName)
	dirName_ms.len = C.size_t(len(dirName))
	defer C.free(unsafe.Pointer(dirName_ms.data))
	return (bool)(C.QDir_Cd(this.h, dirName_ms))
}

func (this *QDir) CdUp() bool {
	return (bool)(C.QDir_CdUp(this.h))
}

func (this *QDir) NameFilters() []string {
	var _ma C.struct_miqt_array = C.QDir_NameFilters(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) SetNameFilters(nameFilters []string) {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	C.QDir_SetNameFilters(this.h, nameFilters_ma)
}

func (this *QDir) Filter() QDir__Filter {
	return (QDir__Filter)(C.QDir_Filter(this.h))
}

func (this *QDir) SetFilter(filter QDir__Filter) {
	C.QDir_SetFilter(this.h, (C.int)(filter))
}

func (this *QDir) Sorting() QDir__SortFlag {
	return (QDir__SortFlag)(C.QDir_Sorting(this.h))
}

func (this *QDir) SetSorting(sort QDir__SortFlag) {
	C.QDir_SetSorting(this.h, (C.int)(sort))
}

func (this *QDir) Count() uint {
	return (uint)(C.QDir_Count(this.h))
}

func (this *QDir) IsEmpty() bool {
	return (bool)(C.QDir_IsEmpty(this.h))
}

func (this *QDir) OperatorSubscript(param1 int) string {
	var _ms C.struct_miqt_string = C.QDir_OperatorSubscript(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDir_NameFiltersFromString(nameFilter string) []string {
	nameFilter_ms := C.struct_miqt_string{}
	nameFilter_ms.data = C.CString(nameFilter)
	nameFilter_ms.len = C.size_t(len(nameFilter))
	defer C.free(unsafe.Pointer(nameFilter_ms.data))
	var _ma C.struct_miqt_array = C.QDir_NameFiltersFromString(nameFilter_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) EntryList() []string {
	var _ma C.struct_miqt_array = C.QDir_EntryList(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) EntryListWithNameFilters(nameFilters []string) []string {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	var _ma C.struct_miqt_array = C.QDir_EntryListWithNameFilters(this.h, nameFilters_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) EntryInfoList() []QFileInfo {
	var _ma C.struct_miqt_array = C.QDir_EntryInfoList(this.h)
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDir) EntryInfoListWithNameFilters(nameFilters []string) []QFileInfo {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	var _ma C.struct_miqt_array = C.QDir_EntryInfoListWithNameFilters(this.h, nameFilters_ma)
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDir) Mkdir(dirName string) bool {
	dirName_ms := C.struct_miqt_string{}
	dirName_ms.data = C.CString(dirName)
	dirName_ms.len = C.size_t(len(dirName))
	defer C.free(unsafe.Pointer(dirName_ms.data))
	return (bool)(C.QDir_Mkdir(this.h, dirName_ms))
}

func (this *QDir) Rmdir(dirName string) bool {
	dirName_ms := C.struct_miqt_string{}
	dirName_ms.data = C.CString(dirName)
	dirName_ms.len = C.size_t(len(dirName))
	defer C.free(unsafe.Pointer(dirName_ms.data))
	return (bool)(C.QDir_Rmdir(this.h, dirName_ms))
}

func (this *QDir) Mkpath(dirPath string) bool {
	dirPath_ms := C.struct_miqt_string{}
	dirPath_ms.data = C.CString(dirPath)
	dirPath_ms.len = C.size_t(len(dirPath))
	defer C.free(unsafe.Pointer(dirPath_ms.data))
	return (bool)(C.QDir_Mkpath(this.h, dirPath_ms))
}

func (this *QDir) Rmpath(dirPath string) bool {
	dirPath_ms := C.struct_miqt_string{}
	dirPath_ms.data = C.CString(dirPath)
	dirPath_ms.len = C.size_t(len(dirPath))
	defer C.free(unsafe.Pointer(dirPath_ms.data))
	return (bool)(C.QDir_Rmpath(this.h, dirPath_ms))
}

func (this *QDir) RemoveRecursively() bool {
	return (bool)(C.QDir_RemoveRecursively(this.h))
}

func (this *QDir) IsReadable() bool {
	return (bool)(C.QDir_IsReadable(this.h))
}

func (this *QDir) Exists() bool {
	return (bool)(C.QDir_Exists(this.h))
}

func (this *QDir) IsRoot() bool {
	return (bool)(C.QDir_IsRoot(this.h))
}

func QDir_IsRelativePath(path string) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QDir_IsRelativePath(path_ms))
}

func QDir_IsAbsolutePath(path string) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QDir_IsAbsolutePath(path_ms))
}

func (this *QDir) IsRelative() bool {
	return (bool)(C.QDir_IsRelative(this.h))
}

func (this *QDir) IsAbsolute() bool {
	return (bool)(C.QDir_IsAbsolute(this.h))
}

func (this *QDir) MakeAbsolute() bool {
	return (bool)(C.QDir_MakeAbsolute(this.h))
}

func (this *QDir) OperatorEqual(dir *QDir) bool {
	return (bool)(C.QDir_OperatorEqual(this.h, dir.cPointer()))
}

func (this *QDir) OperatorNotEqual(dir *QDir) bool {
	return (bool)(C.QDir_OperatorNotEqual(this.h, dir.cPointer()))
}

func (this *QDir) Remove(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QDir_Remove(this.h, fileName_ms))
}

func (this *QDir) Rename(oldName string, newName string) bool {
	oldName_ms := C.struct_miqt_string{}
	oldName_ms.data = C.CString(oldName)
	oldName_ms.len = C.size_t(len(oldName))
	defer C.free(unsafe.Pointer(oldName_ms.data))
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QDir_Rename(this.h, oldName_ms, newName_ms))
}

func (this *QDir) ExistsWithName(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QDir_ExistsWithName(this.h, name_ms))
}

func QDir_Drives() []QFileInfo {
	var _ma C.struct_miqt_array = C.QDir_Drives()
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QDir_ListSeparator() *QChar {
	_ret := C.QDir_ListSeparator()
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_Separator() *QChar {
	_ret := C.QDir_Separator()
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_SetCurrent(path string) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QDir_SetCurrent(path_ms))
}

func QDir_Current() *QDir {
	_ret := C.QDir_Current()
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_CurrentPath() string {
	var _ms C.struct_miqt_string = C.QDir_CurrentPath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDir_Home() *QDir {
	_ret := C.QDir_Home()
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_HomePath() string {
	var _ms C.struct_miqt_string = C.QDir_HomePath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDir_Root() *QDir {
	_ret := C.QDir_Root()
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_RootPath() string {
	var _ms C.struct_miqt_string = C.QDir_RootPath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDir_Temp() *QDir {
	_ret := C.QDir_Temp()
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_TempPath() string {
	var _ms C.struct_miqt_string = C.QDir_TempPath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDir_Match(filters []string, fileName string) bool {
	filters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	for i := range filters {
		filters_i_ms := C.struct_miqt_string{}
		filters_i_ms.data = C.CString(filters[i])
		filters_i_ms.len = C.size_t(len(filters[i]))
		defer C.free(unsafe.Pointer(filters_i_ms.data))
		filters_CArray[i] = filters_i_ms
	}
	filters_ma := C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QDir_Match(filters_ma, fileName_ms))
}

func QDir_Match2(filter string, fileName string) bool {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QDir_Match2(filter_ms, fileName_ms))
}

func QDir_CleanPath(path string) string {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	var _ms C.struct_miqt_string = C.QDir_CleanPath(path_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDir) Refresh() {
	C.QDir_Refresh(this.h)
}

func (this *QDir) IsEmpty1(filters QDir__Filter) bool {
	return (bool)(C.QDir_IsEmpty1(this.h, (C.int)(filters)))
}

func (this *QDir) EntryList1(filters QDir__Filter) []string {
	var _ma C.struct_miqt_array = C.QDir_EntryList1(this.h, (C.int)(filters))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) EntryList2(filters QDir__Filter, sort QDir__SortFlag) []string {
	var _ma C.struct_miqt_array = C.QDir_EntryList2(this.h, (C.int)(filters), (C.int)(sort))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) EntryList22(nameFilters []string, filters QDir__Filter) []string {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	var _ma C.struct_miqt_array = C.QDir_EntryList22(this.h, nameFilters_ma, (C.int)(filters))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) EntryList3(nameFilters []string, filters QDir__Filter, sort QDir__SortFlag) []string {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	var _ma C.struct_miqt_array = C.QDir_EntryList3(this.h, nameFilters_ma, (C.int)(filters), (C.int)(sort))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDir) EntryInfoList1(filters QDir__Filter) []QFileInfo {
	var _ma C.struct_miqt_array = C.QDir_EntryInfoList1(this.h, (C.int)(filters))
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDir) EntryInfoList2(filters QDir__Filter, sort QDir__SortFlag) []QFileInfo {
	var _ma C.struct_miqt_array = C.QDir_EntryInfoList2(this.h, (C.int)(filters), (C.int)(sort))
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDir) EntryInfoList22(nameFilters []string, filters QDir__Filter) []QFileInfo {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	var _ma C.struct_miqt_array = C.QDir_EntryInfoList22(this.h, nameFilters_ma, (C.int)(filters))
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDir) EntryInfoList3(nameFilters []string, filters QDir__Filter, sort QDir__SortFlag) []QFileInfo {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	var _ma C.struct_miqt_array = C.QDir_EntryInfoList3(this.h, nameFilters_ma, (C.int)(filters), (C.int)(sort))
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QDir) Delete() {
	C.QDir_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDir) GoGC() {
	runtime.SetFinalizer(this, func(this *QDir) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
