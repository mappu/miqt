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

func newQDirModel(h *C.QDirModel) *QDirModel {
	if h == nil {
		return nil
	}
	return &QDirModel{h: h, QAbstractItemModel: newQAbstractItemModel_U(unsafe.Pointer(h))}
}

func newQDirModel_U(h unsafe.Pointer) *QDirModel {
	return newQDirModel((*C.QDirModel)(h))
}

// NewQDirModel constructs a new QDirModel object.
func NewQDirModel(nameFilters []string, filters int, sort int) *QDirModel {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	nameFilters_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(nameFilters))))
	nameFilters_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	defer C.free(unsafe.Pointer(nameFilters_Lengths))
	for i := range nameFilters {
		single_cstring := C.CString(nameFilters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		nameFilters_CArray[i] = single_cstring
		nameFilters_Lengths[i] = (C.uint64_t)(len(nameFilters[i]))
	}
	ret := C.QDirModel_new(&nameFilters_CArray[0], &nameFilters_Lengths[0], C.size_t(len(nameFilters)), (C.int)(filters), (C.int)(sort))
	return newQDirModel(ret)
}

// NewQDirModel2 constructs a new QDirModel object.
func NewQDirModel2() *QDirModel {
	ret := C.QDirModel_new2()
	return newQDirModel(ret)
}

// NewQDirModel3 constructs a new QDirModel object.
func NewQDirModel3(nameFilters []string, filters int, sort int, parent *QObject) *QDirModel {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	nameFilters_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(nameFilters))))
	nameFilters_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	defer C.free(unsafe.Pointer(nameFilters_Lengths))
	for i := range nameFilters {
		single_cstring := C.CString(nameFilters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		nameFilters_CArray[i] = single_cstring
		nameFilters_Lengths[i] = (C.uint64_t)(len(nameFilters[i]))
	}
	ret := C.QDirModel_new3(&nameFilters_CArray[0], &nameFilters_Lengths[0], C.size_t(len(nameFilters)), (C.int)(filters), (C.int)(sort), parent.cPointer())
	return newQDirModel(ret)
}

// NewQDirModel4 constructs a new QDirModel object.
func NewQDirModel4(parent *QObject) *QDirModel {
	ret := C.QDirModel_new4(parent.cPointer())
	return newQDirModel(ret)
}

func (this *QDirModel) MetaObject() *QMetaObject {
	ret := C.QDirModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDirModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDirModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirModel) Index(row int, column int) *QModelIndex {
	ret := C.QDirModel_Index(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) Parent(child *QModelIndex) *QModelIndex {
	ret := C.QDirModel_Parent(this.h, child.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) RowCount() int {
	ret := C.QDirModel_RowCount(this.h)
	return (int)(ret)
}

func (this *QDirModel) ColumnCount() int {
	ret := C.QDirModel_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QDirModel) Data(index *QModelIndex) *QVariant {
	ret := C.QDirModel_Data(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) SetData(index *QModelIndex, value *QVariant) bool {
	ret := C.QDirModel_SetData(this.h, index.cPointer(), value.cPointer())
	return (bool)(ret)
}

func (this *QDirModel) HeaderData(section int, orientation uintptr) *QVariant {
	ret := C.QDirModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) HasChildren() bool {
	ret := C.QDirModel_HasChildren(this.h)
	return (bool)(ret)
}

func (this *QDirModel) Flags(index *QModelIndex) int {
	ret := C.QDirModel_Flags(this.h, index.cPointer())
	return (int)(ret)
}

func (this *QDirModel) Sort(column int) {
	C.QDirModel_Sort(this.h, (C.int)(column))
}

func (this *QDirModel) MimeTypes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QDirModel_MimeTypes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	ret := C.QDirModel_MimeData(this.h, &indexes_CArray[0], C.size_t(len(indexes)))
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QDirModel) DropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QDirModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QDirModel) SupportedDropActions() int {
	ret := C.QDirModel_SupportedDropActions(this.h)
	return (int)(ret)
}

func (this *QDirModel) SetIconProvider(provider *QFileIconProvider) {
	C.QDirModel_SetIconProvider(this.h, provider.cPointer())
}

func (this *QDirModel) IconProvider() *QFileIconProvider {
	ret := C.QDirModel_IconProvider(this.h)
	return newQFileIconProvider_U(unsafe.Pointer(ret))
}

func (this *QDirModel) SetNameFilters(filters []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	filters_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(filters))))
	filters_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	defer C.free(unsafe.Pointer(filters_Lengths))
	for i := range filters {
		single_cstring := C.CString(filters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		filters_CArray[i] = single_cstring
		filters_Lengths[i] = (C.uint64_t)(len(filters[i]))
	}
	C.QDirModel_SetNameFilters(this.h, &filters_CArray[0], &filters_Lengths[0], C.size_t(len(filters)))
}

func (this *QDirModel) NameFilters() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QDirModel_NameFilters(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirModel) SetFilter(filters int) {
	C.QDirModel_SetFilter(this.h, (C.int)(filters))
}

func (this *QDirModel) Filter() int {
	ret := C.QDirModel_Filter(this.h)
	return (int)(ret)
}

func (this *QDirModel) SetSorting(sort int) {
	C.QDirModel_SetSorting(this.h, (C.int)(sort))
}

func (this *QDirModel) Sorting() int {
	ret := C.QDirModel_Sorting(this.h)
	return (int)(ret)
}

func (this *QDirModel) SetResolveSymlinks(enable bool) {
	C.QDirModel_SetResolveSymlinks(this.h, (C.bool)(enable))
}

func (this *QDirModel) ResolveSymlinks() bool {
	ret := C.QDirModel_ResolveSymlinks(this.h)
	return (bool)(ret)
}

func (this *QDirModel) SetReadOnly(enable bool) {
	C.QDirModel_SetReadOnly(this.h, (C.bool)(enable))
}

func (this *QDirModel) IsReadOnly() bool {
	ret := C.QDirModel_IsReadOnly(this.h)
	return (bool)(ret)
}

func (this *QDirModel) SetLazyChildCount(enable bool) {
	C.QDirModel_SetLazyChildCount(this.h, (C.bool)(enable))
}

func (this *QDirModel) LazyChildCount() bool {
	ret := C.QDirModel_LazyChildCount(this.h)
	return (bool)(ret)
}

func (this *QDirModel) IndexWithPath(path string) *QModelIndex {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QDirModel_IndexWithPath(this.h, path_Cstring, C.size_t(len(path)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) IsDir(index *QModelIndex) bool {
	ret := C.QDirModel_IsDir(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QDirModel) Mkdir(parent *QModelIndex, name string) *QModelIndex {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QDirModel_Mkdir(this.h, parent.cPointer(), name_Cstring, C.size_t(len(name)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) Rmdir(index *QModelIndex) bool {
	ret := C.QDirModel_Rmdir(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QDirModel) Remove(index *QModelIndex) bool {
	ret := C.QDirModel_Remove(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QDirModel) FilePath(index *QModelIndex) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirModel_FilePath(this.h, index.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirModel) FileName(index *QModelIndex) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirModel_FileName(this.h, index.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirModel) FileIcon(index *QModelIndex) *QIcon {
	ret := C.QDirModel_FileIcon(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) FileInfo(index *QModelIndex) *QFileInfo {
	ret := C.QDirModel_FileInfo(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFileInfo(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFileInfo) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) Refresh() {
	C.QDirModel_Refresh(this.h)
}

func QDirModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDirModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDirModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDirModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QDirModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) RowCount1(parent *QModelIndex) int {
	ret := C.QDirModel_RowCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QDirModel) ColumnCount1(parent *QModelIndex) int {
	ret := C.QDirModel_ColumnCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QDirModel) Data2(index *QModelIndex, role int) *QVariant {
	ret := C.QDirModel_Data2(this.h, index.cPointer(), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	ret := C.QDirModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QDirModel) HeaderData3(section int, orientation uintptr, role int) *QVariant {
	ret := C.QDirModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) HasChildren1(index *QModelIndex) bool {
	ret := C.QDirModel_HasChildren1(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QDirModel) Sort2(column int, order uintptr) {
	C.QDirModel_Sort2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QDirModel) Index2(path string, column int) *QModelIndex {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QDirModel_Index2(this.h, path_Cstring, C.size_t(len(path)), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirModel) Refresh1(parent *QModelIndex) {
	C.QDirModel_Refresh1(this.h, parent.cPointer())
}

func (this *QDirModel) Delete() {
	C.QDirModel_Delete(this.h)
}
