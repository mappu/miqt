package qt

/*

#include "gen_qfilesystemmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFileSystemModel__Roles int

const (
	QFileSystemModel__FileIconRole    QFileSystemModel__Roles = 1
	QFileSystemModel__FilePathRole    QFileSystemModel__Roles = 257
	QFileSystemModel__FileNameRole    QFileSystemModel__Roles = 258
	QFileSystemModel__FilePermissions QFileSystemModel__Roles = 259
)

type QFileSystemModel__Option int

const (
	QFileSystemModel__DontWatchForChanges         QFileSystemModel__Option = 1
	QFileSystemModel__DontResolveSymlinks         QFileSystemModel__Option = 2
	QFileSystemModel__DontUseCustomDirectoryIcons QFileSystemModel__Option = 4
)

type QFileSystemModel struct {
	h *C.QFileSystemModel
	*QAbstractItemModel
}

func (this *QFileSystemModel) cPointer() *C.QFileSystemModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFileSystemModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQFileSystemModel(h *C.QFileSystemModel) *QFileSystemModel {
	if h == nil {
		return nil
	}
	return &QFileSystemModel{h: h, QAbstractItemModel: UnsafeNewQAbstractItemModel(unsafe.Pointer(h))}
}

func UnsafeNewQFileSystemModel(h unsafe.Pointer) *QFileSystemModel {
	return newQFileSystemModel((*C.QFileSystemModel)(h))
}

// NewQFileSystemModel constructs a new QFileSystemModel object.
func NewQFileSystemModel() *QFileSystemModel {
	ret := C.QFileSystemModel_new()
	return newQFileSystemModel(ret)
}

// NewQFileSystemModel2 constructs a new QFileSystemModel object.
func NewQFileSystemModel2(parent *QObject) *QFileSystemModel {
	ret := C.QFileSystemModel_new2(parent.cPointer())
	return newQFileSystemModel(ret)
}

func (this *QFileSystemModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QFileSystemModel_MetaObject(this.h)))
}

func (this *QFileSystemModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QFileSystemModel_Metacast(this.h, param1_Cstring)
}

func QFileSystemModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemModel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSystemModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSystemModel) RootPathChanged(newPath string) {
	newPath_ms := libmiqt.Strdupg(newPath)
	defer C.free(newPath_ms)
	C.QFileSystemModel_RootPathChanged(this.h, (*C.struct_miqt_string)(newPath_ms))
}
func (this *QFileSystemModel) OnRootPathChanged(slot func(newPath string)) {
	C.QFileSystemModel_connect_RootPathChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSystemModel_RootPathChanged
func miqt_exec_callback_QFileSystemModel_RootPathChanged(cb C.intptr_t, newPath *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newPath string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var newPath_ms *C.struct_miqt_string = newPath
	newPath_ret := C.GoStringN(&newPath_ms.data, C.int(int64(newPath_ms.len)))
	C.free(unsafe.Pointer(newPath_ms))
	slotval1 := newPath_ret

	gofunc(slotval1)
}

func (this *QFileSystemModel) FileRenamed(path string, oldName string, newName string) {
	path_ms := libmiqt.Strdupg(path)
	defer C.free(path_ms)
	oldName_ms := libmiqt.Strdupg(oldName)
	defer C.free(oldName_ms)
	newName_ms := libmiqt.Strdupg(newName)
	defer C.free(newName_ms)
	C.QFileSystemModel_FileRenamed(this.h, (*C.struct_miqt_string)(path_ms), (*C.struct_miqt_string)(oldName_ms), (*C.struct_miqt_string)(newName_ms))
}
func (this *QFileSystemModel) OnFileRenamed(slot func(path string, oldName string, newName string)) {
	C.QFileSystemModel_connect_FileRenamed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSystemModel_FileRenamed
func miqt_exec_callback_QFileSystemModel_FileRenamed(cb C.intptr_t, path *C.struct_miqt_string, oldName *C.struct_miqt_string, newName *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(path string, oldName string, newName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var path_ms *C.struct_miqt_string = path
	path_ret := C.GoStringN(&path_ms.data, C.int(int64(path_ms.len)))
	C.free(unsafe.Pointer(path_ms))
	slotval1 := path_ret
	var oldName_ms *C.struct_miqt_string = oldName
	oldName_ret := C.GoStringN(&oldName_ms.data, C.int(int64(oldName_ms.len)))
	C.free(unsafe.Pointer(oldName_ms))
	slotval2 := oldName_ret
	var newName_ms *C.struct_miqt_string = newName
	newName_ret := C.GoStringN(&newName_ms.data, C.int(int64(newName_ms.len)))
	C.free(unsafe.Pointer(newName_ms))
	slotval3 := newName_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QFileSystemModel) DirectoryLoaded(path string) {
	path_ms := libmiqt.Strdupg(path)
	defer C.free(path_ms)
	C.QFileSystemModel_DirectoryLoaded(this.h, (*C.struct_miqt_string)(path_ms))
}
func (this *QFileSystemModel) OnDirectoryLoaded(slot func(path string)) {
	C.QFileSystemModel_connect_DirectoryLoaded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSystemModel_DirectoryLoaded
func miqt_exec_callback_QFileSystemModel_DirectoryLoaded(cb C.intptr_t, path *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(path string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var path_ms *C.struct_miqt_string = path
	path_ret := C.GoStringN(&path_ms.data, C.int(int64(path_ms.len)))
	C.free(unsafe.Pointer(path_ms))
	slotval1 := path_ret

	gofunc(slotval1)
}

func (this *QFileSystemModel) Index(row int, column int) *QModelIndex {
	_ret := C.QFileSystemModel_Index(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) IndexWithPath(path string) *QModelIndex {
	path_ms := libmiqt.Strdupg(path)
	defer C.free(path_ms)
	_ret := C.QFileSystemModel_IndexWithPath(this.h, (*C.struct_miqt_string)(path_ms))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Parent(child *QModelIndex) *QModelIndex {
	_ret := C.QFileSystemModel_Parent(this.h, child.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_ret := C.QFileSystemModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) HasChildren() bool {
	return (bool)(C.QFileSystemModel_HasChildren(this.h))
}

func (this *QFileSystemModel) CanFetchMore(parent *QModelIndex) bool {
	return (bool)(C.QFileSystemModel_CanFetchMore(this.h, parent.cPointer()))
}

func (this *QFileSystemModel) FetchMore(parent *QModelIndex) {
	C.QFileSystemModel_FetchMore(this.h, parent.cPointer())
}

func (this *QFileSystemModel) RowCount() int {
	return (int)(C.QFileSystemModel_RowCount(this.h))
}

func (this *QFileSystemModel) ColumnCount() int {
	return (int)(C.QFileSystemModel_ColumnCount(this.h))
}

func (this *QFileSystemModel) MyComputer() *QVariant {
	_ret := C.QFileSystemModel_MyComputer(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Data(index *QModelIndex) *QVariant {
	_ret := C.QFileSystemModel_Data(this.h, index.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) SetData(index *QModelIndex, value *QVariant) bool {
	return (bool)(C.QFileSystemModel_SetData(this.h, index.cPointer(), value.cPointer()))
}

func (this *QFileSystemModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QFileSystemModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QFileSystemModel_Flags(this.h, index.cPointer()))
}

func (this *QFileSystemModel) Sort(column int) {
	C.QFileSystemModel_Sort(this.h, (C.int)(column))
}

func (this *QFileSystemModel) MimeTypes() []string {
	var _ma *C.struct_miqt_array = C.QFileSystemModel_MimeTypes(this.h)
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

func (this *QFileSystemModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := &C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(indexes_ma))
	return UnsafeNewQMimeData(unsafe.Pointer(C.QFileSystemModel_MimeData(this.h, indexes_ma)))
}

func (this *QFileSystemModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QFileSystemModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QFileSystemModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QFileSystemModel_SupportedDropActions(this.h))
}

func (this *QFileSystemModel) SetRootPath(path string) *QModelIndex {
	path_ms := libmiqt.Strdupg(path)
	defer C.free(path_ms)
	_ret := C.QFileSystemModel_SetRootPath(this.h, (*C.struct_miqt_string)(path_ms))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) RootPath() string {
	var _ms *C.struct_miqt_string = C.QFileSystemModel_RootPath(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSystemModel) RootDirectory() *QDir {
	_ret := C.QFileSystemModel_RootDirectory(this.h)
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) SetIconProvider(provider *QFileIconProvider) {
	C.QFileSystemModel_SetIconProvider(this.h, provider.cPointer())
}

func (this *QFileSystemModel) IconProvider() *QFileIconProvider {
	return UnsafeNewQFileIconProvider(unsafe.Pointer(C.QFileSystemModel_IconProvider(this.h)))
}

func (this *QFileSystemModel) SetFilter(filters QDir__Filter) {
	C.QFileSystemModel_SetFilter(this.h, (C.int)(filters))
}

func (this *QFileSystemModel) Filter() QDir__Filter {
	return (QDir__Filter)(C.QFileSystemModel_Filter(this.h))
}

func (this *QFileSystemModel) SetResolveSymlinks(enable bool) {
	C.QFileSystemModel_SetResolveSymlinks(this.h, (C.bool)(enable))
}

func (this *QFileSystemModel) ResolveSymlinks() bool {
	return (bool)(C.QFileSystemModel_ResolveSymlinks(this.h))
}

func (this *QFileSystemModel) SetReadOnly(enable bool) {
	C.QFileSystemModel_SetReadOnly(this.h, (C.bool)(enable))
}

func (this *QFileSystemModel) IsReadOnly() bool {
	return (bool)(C.QFileSystemModel_IsReadOnly(this.h))
}

func (this *QFileSystemModel) SetNameFilterDisables(enable bool) {
	C.QFileSystemModel_SetNameFilterDisables(this.h, (C.bool)(enable))
}

func (this *QFileSystemModel) NameFilterDisables() bool {
	return (bool)(C.QFileSystemModel_NameFilterDisables(this.h))
}

func (this *QFileSystemModel) SetNameFilters(filters []string) {
	// For the C ABI, malloc a C array of raw pointers
	filters_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	for i := range filters {
		filters_i_ms := libmiqt.Strdupg(filters[i])
		defer C.free(filters_i_ms)
		filters_CArray[i] = (*C.struct_miqt_string)(filters_i_ms)
	}
	filters_ma := &C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(filters_ma))
	C.QFileSystemModel_SetNameFilters(this.h, filters_ma)
}

func (this *QFileSystemModel) NameFilters() []string {
	var _ma *C.struct_miqt_array = C.QFileSystemModel_NameFilters(this.h)
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

func (this *QFileSystemModel) SetOption(option QFileSystemModel__Option) {
	C.QFileSystemModel_SetOption(this.h, (C.int)(option))
}

func (this *QFileSystemModel) TestOption(option QFileSystemModel__Option) bool {
	return (bool)(C.QFileSystemModel_TestOption(this.h, (C.int)(option)))
}

func (this *QFileSystemModel) SetOptions(options QFileSystemModel__Option) {
	C.QFileSystemModel_SetOptions(this.h, (C.int)(options))
}

func (this *QFileSystemModel) Options() QFileSystemModel__Option {
	return (QFileSystemModel__Option)(C.QFileSystemModel_Options(this.h))
}

func (this *QFileSystemModel) FilePath(index *QModelIndex) string {
	var _ms *C.struct_miqt_string = C.QFileSystemModel_FilePath(this.h, index.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSystemModel) IsDir(index *QModelIndex) bool {
	return (bool)(C.QFileSystemModel_IsDir(this.h, index.cPointer()))
}

func (this *QFileSystemModel) Size(index *QModelIndex) int64 {
	return (int64)(C.QFileSystemModel_Size(this.h, index.cPointer()))
}

func (this *QFileSystemModel) Type(index *QModelIndex) string {
	var _ms *C.struct_miqt_string = C.QFileSystemModel_Type(this.h, index.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSystemModel) LastModified(index *QModelIndex) *QDateTime {
	_ret := C.QFileSystemModel_LastModified(this.h, index.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Mkdir(parent *QModelIndex, name string) *QModelIndex {
	name_ms := libmiqt.Strdupg(name)
	defer C.free(name_ms)
	_ret := C.QFileSystemModel_Mkdir(this.h, parent.cPointer(), (*C.struct_miqt_string)(name_ms))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Rmdir(index *QModelIndex) bool {
	return (bool)(C.QFileSystemModel_Rmdir(this.h, index.cPointer()))
}

func (this *QFileSystemModel) FileName(index *QModelIndex) string {
	var _ms *C.struct_miqt_string = C.QFileSystemModel_FileName(this.h, index.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSystemModel) FileIcon(index *QModelIndex) *QIcon {
	_ret := C.QFileSystemModel_FileIcon(this.h, index.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Permissions(index *QModelIndex) QFileDevice__Permission {
	return (QFileDevice__Permission)(C.QFileSystemModel_Permissions(this.h, index.cPointer()))
}

func (this *QFileSystemModel) FileInfo(index *QModelIndex) *QFileInfo {
	_ret := C.QFileSystemModel_FileInfo(this.h, index.cPointer())
	_goptr := newQFileInfo(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Remove(index *QModelIndex) bool {
	return (bool)(C.QFileSystemModel_Remove(this.h, index.cPointer()))
}

func QFileSystemModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSystemModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSystemModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSystemModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSystemModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QFileSystemModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Index2(path string, column int) *QModelIndex {
	path_ms := libmiqt.Strdupg(path)
	defer C.free(path_ms)
	_ret := C.QFileSystemModel_Index2(this.h, (*C.struct_miqt_string)(path_ms), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) HasChildren1(parent *QModelIndex) bool {
	return (bool)(C.QFileSystemModel_HasChildren1(this.h, parent.cPointer()))
}

func (this *QFileSystemModel) RowCount1(parent *QModelIndex) int {
	return (int)(C.QFileSystemModel_RowCount1(this.h, parent.cPointer()))
}

func (this *QFileSystemModel) ColumnCount1(parent *QModelIndex) int {
	return (int)(C.QFileSystemModel_ColumnCount1(this.h, parent.cPointer()))
}

func (this *QFileSystemModel) MyComputer1(role int) *QVariant {
	_ret := C.QFileSystemModel_MyComputer1(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Data2(index *QModelIndex, role int) *QVariant {
	_ret := C.QFileSystemModel_Data2(this.h, index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QFileSystemModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QFileSystemModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QFileSystemModel_HeaderData3(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSystemModel) Sort2(column int, order SortOrder) {
	C.QFileSystemModel_Sort2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QFileSystemModel) SetOption2(option QFileSystemModel__Option, on bool) {
	C.QFileSystemModel_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QFileSystemModel) Delete() {
	C.QFileSystemModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileSystemModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileSystemModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
