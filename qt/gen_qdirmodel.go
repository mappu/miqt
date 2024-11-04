package qt

/*

#include "gen_qdirmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDirModel__Roles int

const (
	QDirModel__FileIconRole QDirModel__Roles = 1
	QDirModel__FilePathRole QDirModel__Roles = 257
	QDirModel__FileNameRole QDirModel__Roles = 258
)

type QDirModel struct {
	h *C.QDirModel
	*QAbstractItemModel
}

func (this *QDirModel) cPointer() *C.QDirModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDirModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDirModel(h *C.QDirModel) *QDirModel {
	if h == nil {
		return nil
	}
	return &QDirModel{h: h, QAbstractItemModel: UnsafeNewQAbstractItemModel(unsafe.Pointer(h))}
}

func UnsafeNewQDirModel(h unsafe.Pointer) *QDirModel {
	return newQDirModel((*C.QDirModel)(h))
}

// NewQDirModel constructs a new QDirModel object.
func NewQDirModel(nameFilters []string, filters QDir__Filter, sort QDir__SortFlag) *QDirModel {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
	ret := C.QDirModel_new(nameFilters_ma, (C.int)(filters), (C.int)(sort))
	return newQDirModel(ret)
}

// NewQDirModel2 constructs a new QDirModel object.
func NewQDirModel2() *QDirModel {
	ret := C.QDirModel_new2()
	return newQDirModel(ret)
}

// NewQDirModel3 constructs a new QDirModel object.
func NewQDirModel3(nameFilters []string, filters QDir__Filter, sort QDir__SortFlag, parent *QObject) *QDirModel {
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := &C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(nameFilters_ma))
	ret := C.QDirModel_new3(nameFilters_ma, (C.int)(filters), (C.int)(sort), parent.cPointer())
	return newQDirModel(ret)
}

// NewQDirModel4 constructs a new QDirModel object.
func NewQDirModel4(parent *QObject) *QDirModel {
	ret := C.QDirModel_new4(parent.cPointer())
	return newQDirModel(ret)
}

func (this *QDirModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDirModel_MetaObject(this.h)))
}

func (this *QDirModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDirModel_Metacast(this.h, param1_Cstring))
}

func QDirModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDirModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDirModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDirModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirModel) Index(row int, column int) *QModelIndex {
	_ret := C.QDirModel_Index(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) Parent(child *QModelIndex) *QModelIndex {
	_ret := C.QDirModel_Parent(this.h, child.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) RowCount() int {
	return (int)(C.QDirModel_RowCount(this.h))
}

func (this *QDirModel) ColumnCount() int {
	return (int)(C.QDirModel_ColumnCount(this.h))
}

func (this *QDirModel) Data(index *QModelIndex) *QVariant {
	_ret := C.QDirModel_Data(this.h, index.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) SetData(index *QModelIndex, value *QVariant) bool {
	return (bool)(C.QDirModel_SetData(this.h, index.cPointer(), value.cPointer()))
}

func (this *QDirModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QDirModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) HasChildren() bool {
	return (bool)(C.QDirModel_HasChildren(this.h))
}

func (this *QDirModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QDirModel_Flags(this.h, index.cPointer()))
}

func (this *QDirModel) Sort(column int) {
	C.QDirModel_Sort(this.h, (C.int)(column))
}

func (this *QDirModel) MimeTypes() []string {
	var _ma *C.struct_miqt_array = C.QDirModel_MimeTypes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDirModel) MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := &C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(indexes_ma))
	return UnsafeNewQMimeData(unsafe.Pointer(C.QDirModel_MimeData(this.h, indexes_ma)))
}

func (this *QDirModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QDirModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QDirModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QDirModel_SupportedDropActions(this.h))
}

func (this *QDirModel) SetIconProvider(provider *QFileIconProvider) {
	C.QDirModel_SetIconProvider(this.h, provider.cPointer())
}

func (this *QDirModel) IconProvider() *QFileIconProvider {
	return UnsafeNewQFileIconProvider(unsafe.Pointer(C.QDirModel_IconProvider(this.h)))
}

func (this *QDirModel) SetNameFilters(filters []string) {
	filters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	for i := range filters {
		filters_i_ms := C.struct_miqt_string{}
		filters_i_ms.data = C.CString(filters[i])
		filters_i_ms.len = C.size_t(len(filters[i]))
		defer C.free(unsafe.Pointer(filters_i_ms.data))
		filters_CArray[i] = filters_i_ms
	}
	filters_ma := &C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(filters_ma))
	C.QDirModel_SetNameFilters(this.h, filters_ma)
}

func (this *QDirModel) NameFilters() []string {
	var _ma *C.struct_miqt_array = C.QDirModel_NameFilters(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QDirModel) SetFilter(filters QDir__Filter) {
	C.QDirModel_SetFilter(this.h, (C.int)(filters))
}

func (this *QDirModel) Filter() QDir__Filter {
	return (QDir__Filter)(C.QDirModel_Filter(this.h))
}

func (this *QDirModel) SetSorting(sort QDir__SortFlag) {
	C.QDirModel_SetSorting(this.h, (C.int)(sort))
}

func (this *QDirModel) Sorting() QDir__SortFlag {
	return (QDir__SortFlag)(C.QDirModel_Sorting(this.h))
}

func (this *QDirModel) SetResolveSymlinks(enable bool) {
	C.QDirModel_SetResolveSymlinks(this.h, (C.bool)(enable))
}

func (this *QDirModel) ResolveSymlinks() bool {
	return (bool)(C.QDirModel_ResolveSymlinks(this.h))
}

func (this *QDirModel) SetReadOnly(enable bool) {
	C.QDirModel_SetReadOnly(this.h, (C.bool)(enable))
}

func (this *QDirModel) IsReadOnly() bool {
	return (bool)(C.QDirModel_IsReadOnly(this.h))
}

func (this *QDirModel) SetLazyChildCount(enable bool) {
	C.QDirModel_SetLazyChildCount(this.h, (C.bool)(enable))
}

func (this *QDirModel) LazyChildCount() bool {
	return (bool)(C.QDirModel_LazyChildCount(this.h))
}

func (this *QDirModel) IndexWithPath(path string) *QModelIndex {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	_ret := C.QDirModel_IndexWithPath(this.h, path_ms)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) IsDir(index *QModelIndex) bool {
	return (bool)(C.QDirModel_IsDir(this.h, index.cPointer()))
}

func (this *QDirModel) Mkdir(parent *QModelIndex, name string) *QModelIndex {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_ret := C.QDirModel_Mkdir(this.h, parent.cPointer(), name_ms)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) Rmdir(index *QModelIndex) bool {
	return (bool)(C.QDirModel_Rmdir(this.h, index.cPointer()))
}

func (this *QDirModel) Remove(index *QModelIndex) bool {
	return (bool)(C.QDirModel_Remove(this.h, index.cPointer()))
}

func (this *QDirModel) FilePath(index *QModelIndex) string {
	var _ms C.struct_miqt_string = C.QDirModel_FilePath(this.h, index.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirModel) FileName(index *QModelIndex) string {
	var _ms C.struct_miqt_string = C.QDirModel_FileName(this.h, index.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirModel) FileIcon(index *QModelIndex) *QIcon {
	_ret := C.QDirModel_FileIcon(this.h, index.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) FileInfo(index *QModelIndex) *QFileInfo {
	_ret := C.QDirModel_FileInfo(this.h, index.cPointer())
	_goptr := newQFileInfo(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) Refresh() {
	C.QDirModel_Refresh(this.h)
}

func QDirModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDirModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDirModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDirModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDirModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDirModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDirModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDirModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QDirModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) RowCount1(parent *QModelIndex) int {
	return (int)(C.QDirModel_RowCount1(this.h, parent.cPointer()))
}

func (this *QDirModel) ColumnCount1(parent *QModelIndex) int {
	return (int)(C.QDirModel_ColumnCount1(this.h, parent.cPointer()))
}

func (this *QDirModel) Data2(index *QModelIndex, role int) *QVariant {
	_ret := C.QDirModel_Data2(this.h, index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QDirModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QDirModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QDirModel_HeaderData3(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) HasChildren1(index *QModelIndex) bool {
	return (bool)(C.QDirModel_HasChildren1(this.h, index.cPointer()))
}

func (this *QDirModel) Sort2(column int, order SortOrder) {
	C.QDirModel_Sort2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QDirModel) Index2(path string, column int) *QModelIndex {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	_ret := C.QDirModel_Index2(this.h, path_ms, (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) Refresh1(parent *QModelIndex) {
	C.QDirModel_Refresh1(this.h, parent.cPointer())
}

// Delete this object from C++ memory.
func (this *QDirModel) Delete() {
	C.QDirModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDirModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QDirModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
