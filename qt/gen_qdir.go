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
	h *C.QDir
}

func (this *QDir) cPointer() *C.QDir {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDir(h *C.QDir) *QDir {
	if h == nil {
		return nil
	}
	return &QDir{h: h}
}

func newQDir_U(h unsafe.Pointer) *QDir {
	return newQDir((*C.QDir)(h))
}

// NewQDir constructs a new QDir object.
func NewQDir(param1 *QDir) *QDir {
	ret := C.QDir_new(param1.cPointer())
	return newQDir(ret)
}

// NewQDir2 constructs a new QDir object.
func NewQDir2() *QDir {
	ret := C.QDir_new2()
	return newQDir(ret)
}

// NewQDir3 constructs a new QDir object.
func NewQDir3(path string, nameFilter string) *QDir {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	nameFilter_ms := miqt_strdupg(nameFilter)
	defer C.free(nameFilter_ms)
	ret := C.QDir_new3((*C.struct_miqt_string)(path_ms), (*C.struct_miqt_string)(nameFilter_ms))
	return newQDir(ret)
}

// NewQDir4 constructs a new QDir object.
func NewQDir4(path string) *QDir {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	ret := C.QDir_new4((*C.struct_miqt_string)(path_ms))
	return newQDir(ret)
}

// NewQDir5 constructs a new QDir object.
func NewQDir5(path string, nameFilter string, sort QDir__SortFlag) *QDir {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	nameFilter_ms := miqt_strdupg(nameFilter)
	defer C.free(nameFilter_ms)
	ret := C.QDir_new5((*C.struct_miqt_string)(path_ms), (*C.struct_miqt_string)(nameFilter_ms), (C.int)(sort))
	return newQDir(ret)
}

// NewQDir6 constructs a new QDir object.
func NewQDir6(path string, nameFilter string, sort QDir__SortFlag, filter QDir__Filter) *QDir {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	nameFilter_ms := miqt_strdupg(nameFilter)
	defer C.free(nameFilter_ms)
	ret := C.QDir_new6((*C.struct_miqt_string)(path_ms), (*C.struct_miqt_string)(nameFilter_ms), (C.int)(sort), (C.int)(filter))
	return newQDir(ret)
}

func (this *QDir) OperatorAssign(param1 *QDir) {
	C.QDir_OperatorAssign(this.h, param1.cPointer())
}

func (this *QDir) OperatorAssignWithPath(path string) {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	C.QDir_OperatorAssignWithPath(this.h, (*C.struct_miqt_string)(path_ms))
}

func (this *QDir) Swap(other *QDir) {
	C.QDir_Swap(this.h, other.cPointer())
}

func (this *QDir) SetPath(path string) {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	C.QDir_SetPath(this.h, (*C.struct_miqt_string)(path_ms))
}

func (this *QDir) Path() string {
	var _ms *C.struct_miqt_string = C.QDir_Path(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDir) AbsolutePath() string {
	var _ms *C.struct_miqt_string = C.QDir_AbsolutePath(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDir) CanonicalPath() string {
	var _ms *C.struct_miqt_string = C.QDir_CanonicalPath(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDir_AddResourceSearchPath(path string) {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	C.QDir_AddResourceSearchPath((*C.struct_miqt_string)(path_ms))
}

func QDir_SetSearchPaths(prefix string, searchPaths []string) {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	// For the C ABI, malloc a C array of raw pointers
	searchPaths_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(searchPaths))))
	defer C.free(unsafe.Pointer(searchPaths_CArray))
	for i := range searchPaths {
		searchPaths_i_ms := miqt_strdupg(searchPaths[i])
		defer C.free(searchPaths_i_ms)
		searchPaths_CArray[i] = (*C.struct_miqt_string)(searchPaths_i_ms)
	}
	searchPaths_ma := &C.struct_miqt_array{len: C.size_t(len(searchPaths)), data: unsafe.Pointer(searchPaths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(searchPaths_ma))
	C.QDir_SetSearchPaths((*C.struct_miqt_string)(prefix_ms), searchPaths_ma)
}

func QDir_AddSearchPath(prefix string, path string) {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	C.QDir_AddSearchPath((*C.struct_miqt_string)(prefix_ms), (*C.struct_miqt_string)(path_ms))
}

func QDir_SearchPaths(prefix string) []string {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	var _ma *C.struct_miqt_array = C.QDir_SearchPaths((*C.struct_miqt_string)(prefix_ms))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) DirName() string {
	var _ms *C.struct_miqt_string = C.QDir_DirName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDir) FilePath(fileName string) string {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QDir_FilePath(this.h, (*C.struct_miqt_string)(fileName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDir) AbsoluteFilePath(fileName string) string {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QDir_AbsoluteFilePath(this.h, (*C.struct_miqt_string)(fileName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDir) RelativeFilePath(fileName string) string {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QDir_RelativeFilePath(this.h, (*C.struct_miqt_string)(fileName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDir_ToNativeSeparators(pathName string) string {
	pathName_ms := miqt_strdupg(pathName)
	defer C.free(pathName_ms)
	var _ms *C.struct_miqt_string = C.QDir_ToNativeSeparators((*C.struct_miqt_string)(pathName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDir_FromNativeSeparators(pathName string) string {
	pathName_ms := miqt_strdupg(pathName)
	defer C.free(pathName_ms)
	var _ms *C.struct_miqt_string = C.QDir_FromNativeSeparators((*C.struct_miqt_string)(pathName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDir) Cd(dirName string) bool {
	dirName_ms := miqt_strdupg(dirName)
	defer C.free(dirName_ms)
	return (bool)(C.QDir_Cd(this.h, (*C.struct_miqt_string)(dirName_ms)))
}

func (this *QDir) CdUp() bool {
	return (bool)(C.QDir_CdUp(this.h))
}

func (this *QDir) NameFilters() []string {
	var _ma *C.struct_miqt_array = C.QDir_NameFilters(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) SetNameFilters(nameFilters []string) {
	// For the C ABI, malloc a C array of raw pointers
	nameFilters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := miqt_strdupg(nameFilters[i])
		defer C.free(nameFilters_i_ms)
		nameFilters_CArray[i] = (*C.struct_miqt_string)(nameFilters_i_ms)
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
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
	var _ms *C.struct_miqt_string = C.QDir_OperatorSubscript(this.h, (C.int)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDir_NameFiltersFromString(nameFilter string) []string {
	nameFilter_ms := miqt_strdupg(nameFilter)
	defer C.free(nameFilter_ms)
	var _ma *C.struct_miqt_array = C.QDir_NameFiltersFromString((*C.struct_miqt_string)(nameFilter_ms))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryList() []string {
	var _ma *C.struct_miqt_array = C.QDir_EntryList(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryListWithNameFilters(nameFilters []string) []string {
	// For the C ABI, malloc a C array of raw pointers
	nameFilters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := miqt_strdupg(nameFilters[i])
		defer C.free(nameFilters_i_ms)
		nameFilters_CArray[i] = (*C.struct_miqt_string)(nameFilters_i_ms)
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
	var _ma *C.struct_miqt_array = C.QDir_EntryListWithNameFilters(this.h, nameFilters_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryInfoList() []QFileInfo {
	var _ma *C.struct_miqt_array = C.QDir_EntryInfoList(this.h)
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryInfoListWithNameFilters(nameFilters []string) []QFileInfo {
	// For the C ABI, malloc a C array of raw pointers
	nameFilters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := miqt_strdupg(nameFilters[i])
		defer C.free(nameFilters_i_ms)
		nameFilters_CArray[i] = (*C.struct_miqt_string)(nameFilters_i_ms)
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
	var _ma *C.struct_miqt_array = C.QDir_EntryInfoListWithNameFilters(this.h, nameFilters_ma)
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) Mkdir(dirName string) bool {
	dirName_ms := miqt_strdupg(dirName)
	defer C.free(dirName_ms)
	return (bool)(C.QDir_Mkdir(this.h, (*C.struct_miqt_string)(dirName_ms)))
}

func (this *QDir) Rmdir(dirName string) bool {
	dirName_ms := miqt_strdupg(dirName)
	defer C.free(dirName_ms)
	return (bool)(C.QDir_Rmdir(this.h, (*C.struct_miqt_string)(dirName_ms)))
}

func (this *QDir) Mkpath(dirPath string) bool {
	dirPath_ms := miqt_strdupg(dirPath)
	defer C.free(dirPath_ms)
	return (bool)(C.QDir_Mkpath(this.h, (*C.struct_miqt_string)(dirPath_ms)))
}

func (this *QDir) Rmpath(dirPath string) bool {
	dirPath_ms := miqt_strdupg(dirPath)
	defer C.free(dirPath_ms)
	return (bool)(C.QDir_Rmpath(this.h, (*C.struct_miqt_string)(dirPath_ms)))
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
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	return (bool)(C.QDir_IsRelativePath((*C.struct_miqt_string)(path_ms)))
}

func QDir_IsAbsolutePath(path string) bool {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	return (bool)(C.QDir_IsAbsolutePath((*C.struct_miqt_string)(path_ms)))
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
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	return (bool)(C.QDir_Remove(this.h, (*C.struct_miqt_string)(fileName_ms)))
}

func (this *QDir) Rename(oldName string, newName string) bool {
	oldName_ms := miqt_strdupg(oldName)
	defer C.free(oldName_ms)
	newName_ms := miqt_strdupg(newName)
	defer C.free(newName_ms)
	return (bool)(C.QDir_Rename(this.h, (*C.struct_miqt_string)(oldName_ms), (*C.struct_miqt_string)(newName_ms)))
}

func (this *QDir) ExistsWithName(name string) bool {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	return (bool)(C.QDir_ExistsWithName(this.h, (*C.struct_miqt_string)(name_ms)))
}

func QDir_Drives() []QFileInfo {
	var _ma *C.struct_miqt_array = C.QDir_Drives()
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
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
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	return (bool)(C.QDir_SetCurrent((*C.struct_miqt_string)(path_ms)))
}

func QDir_Current() *QDir {
	_ret := C.QDir_Current()
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_CurrentPath() string {
	var _ms *C.struct_miqt_string = C.QDir_CurrentPath()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDir_Home() *QDir {
	_ret := C.QDir_Home()
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_HomePath() string {
	var _ms *C.struct_miqt_string = C.QDir_HomePath()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDir_Root() *QDir {
	_ret := C.QDir_Root()
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_RootPath() string {
	var _ms *C.struct_miqt_string = C.QDir_RootPath()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDir_Temp() *QDir {
	_ret := C.QDir_Temp()
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDir_TempPath() string {
	var _ms *C.struct_miqt_string = C.QDir_TempPath()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDir_Match(filters []string, fileName string) bool {
	// For the C ABI, malloc a C array of raw pointers
	filters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	for i := range filters {
		filters_i_ms := miqt_strdupg(filters[i])
		defer C.free(filters_i_ms)
		filters_CArray[i] = (*C.struct_miqt_string)(filters_i_ms)
	}
	filters_ma := &C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(filters_ma))
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	return (bool)(C.QDir_Match(filters_ma, (*C.struct_miqt_string)(fileName_ms)))
}

func QDir_Match2(filter string, fileName string) bool {
	filter_ms := miqt_strdupg(filter)
	defer C.free(filter_ms)
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	return (bool)(C.QDir_Match2((*C.struct_miqt_string)(filter_ms), (*C.struct_miqt_string)(fileName_ms)))
}

func QDir_CleanPath(path string) string {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	var _ms *C.struct_miqt_string = C.QDir_CleanPath((*C.struct_miqt_string)(path_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDir) Refresh() {
	C.QDir_Refresh(this.h)
}

func (this *QDir) IsEmpty1(filters QDir__Filter) bool {
	return (bool)(C.QDir_IsEmpty1(this.h, (C.int)(filters)))
}

func (this *QDir) EntryList1(filters QDir__Filter) []string {
	var _ma *C.struct_miqt_array = C.QDir_EntryList1(this.h, (C.int)(filters))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryList2(filters QDir__Filter, sort QDir__SortFlag) []string {
	var _ma *C.struct_miqt_array = C.QDir_EntryList2(this.h, (C.int)(filters), (C.int)(sort))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryList22(nameFilters []string, filters QDir__Filter) []string {
	// For the C ABI, malloc a C array of raw pointers
	nameFilters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := miqt_strdupg(nameFilters[i])
		defer C.free(nameFilters_i_ms)
		nameFilters_CArray[i] = (*C.struct_miqt_string)(nameFilters_i_ms)
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
	var _ma *C.struct_miqt_array = C.QDir_EntryList22(this.h, nameFilters_ma, (C.int)(filters))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryList3(nameFilters []string, filters QDir__Filter, sort QDir__SortFlag) []string {
	// For the C ABI, malloc a C array of raw pointers
	nameFilters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := miqt_strdupg(nameFilters[i])
		defer C.free(nameFilters_i_ms)
		nameFilters_CArray[i] = (*C.struct_miqt_string)(nameFilters_i_ms)
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
	var _ma *C.struct_miqt_array = C.QDir_EntryList3(this.h, nameFilters_ma, (C.int)(filters), (C.int)(sort))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryInfoList1(filters QDir__Filter) []QFileInfo {
	var _ma *C.struct_miqt_array = C.QDir_EntryInfoList1(this.h, (C.int)(filters))
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryInfoList2(filters QDir__Filter, sort QDir__SortFlag) []QFileInfo {
	var _ma *C.struct_miqt_array = C.QDir_EntryInfoList2(this.h, (C.int)(filters), (C.int)(sort))
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryInfoList22(nameFilters []string, filters QDir__Filter) []QFileInfo {
	// For the C ABI, malloc a C array of raw pointers
	nameFilters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := miqt_strdupg(nameFilters[i])
		defer C.free(nameFilters_i_ms)
		nameFilters_CArray[i] = (*C.struct_miqt_string)(nameFilters_i_ms)
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
	var _ma *C.struct_miqt_array = C.QDir_EntryInfoList22(this.h, nameFilters_ma, (C.int)(filters))
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDir) EntryInfoList3(nameFilters []string, filters QDir__Filter, sort QDir__SortFlag) []QFileInfo {
	// For the C ABI, malloc a C array of raw pointers
	nameFilters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := miqt_strdupg(nameFilters[i])
		defer C.free(nameFilters_i_ms)
		nameFilters_CArray[i] = (*C.struct_miqt_string)(nameFilters_i_ms)
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
	var _ma *C.struct_miqt_array = C.QDir_EntryInfoList3(this.h, nameFilters_ma, (C.int)(filters), (C.int)(sort))
	_ret := make([]QFileInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QFileInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQFileInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDir) Delete() {
	C.QDir_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDir) GoGC() {
	runtime.SetFinalizer(this, func(this *QDir) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
