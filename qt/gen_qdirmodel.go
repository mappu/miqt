package qt

/*

#include "gen_qdirmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDirModel__Roles int

const (
	QDirModel__FileIconRole QDirModel__Roles = 1
	QDirModel__FilePathRole QDirModel__Roles = 257
	QDirModel__FileNameRole QDirModel__Roles = 258
)

type QDirModel struct {
	h          *C.QDirModel
	isSubclass bool
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

// newQDirModel constructs the type using only CGO pointers.
func newQDirModel(h *C.QDirModel) *QDirModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemModel *C.QAbstractItemModel = nil
	C.QDirModel_virtbase(h, &outptr_QAbstractItemModel)

	return &QDirModel{h: h,
		QAbstractItemModel: newQAbstractItemModel(outptr_QAbstractItemModel)}
}

// UnsafeNewQDirModel constructs the type using only unsafe pointers.
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
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}

	ret := newQDirModel(C.QDirModel_new(nameFilters_ma, (C.int)(filters), (C.int)(sort)))
	ret.isSubclass = true
	return ret
}

// NewQDirModel2 constructs a new QDirModel object.
func NewQDirModel2() *QDirModel {

	ret := newQDirModel(C.QDirModel_new2())
	ret.isSubclass = true
	return ret
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
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}

	ret := newQDirModel(C.QDirModel_new3(nameFilters_ma, (C.int)(filters), (C.int)(sort), parent.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQDirModel4 constructs a new QDirModel object.
func NewQDirModel4(parent *QObject) *QDirModel {

	ret := newQDirModel(C.QDirModel_new4(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QDirModel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDirModel_MetaObject(this.h))
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

func (this *QDirModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QDirModel_Index(this.h, (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) Parent(child *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QDirModel_Parent(this.h, child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) RowCount(parent *QModelIndex) int {
	return (int)(C.QDirModel_RowCount(this.h, parent.cPointer()))
}

func (this *QDirModel) ColumnCount(parent *QModelIndex) int {
	return (int)(C.QDirModel_ColumnCount(this.h, parent.cPointer()))
}

func (this *QDirModel) Data(index *QModelIndex, role int) *QVariant {
	_goptr := newQVariant(C.QDirModel_Data(this.h, index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) SetData(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QDirModel_SetData(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QDirModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_goptr := newQVariant(C.QDirModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) HasChildren(index *QModelIndex) bool {
	return (bool)(C.QDirModel_HasChildren(this.h, index.cPointer()))
}

func (this *QDirModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QDirModel_Flags(this.h, index.cPointer()))
}

func (this *QDirModel) Sort(column int, order SortOrder) {
	C.QDirModel_Sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QDirModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QDirModel_MimeTypes(this.h)
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

func (this *QDirModel) MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	return newQMimeData(C.QDirModel_MimeData(this.h, indexes_ma))
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
	return newQFileIconProvider(C.QDirModel_IconProvider(this.h))
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
	filters_ma := C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	C.QDirModel_SetNameFilters(this.h, filters_ma)
}

func (this *QDirModel) NameFilters() []string {
	var _ma C.struct_miqt_array = C.QDirModel_NameFilters(this.h)
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
	_goptr := newQModelIndex(C.QDirModel_IndexWithPath(this.h, path_ms))
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
	_goptr := newQModelIndex(C.QDirModel_Mkdir(this.h, parent.cPointer(), name_ms))
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
	_goptr := newQIcon(C.QDirModel_FileIcon(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) FileInfo(index *QModelIndex) *QFileInfo {
	_goptr := newQFileInfo(C.QDirModel_FileInfo(this.h, index.cPointer()))
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

func (this *QDirModel) Index2(path string, column int) *QModelIndex {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	_goptr := newQModelIndex(C.QDirModel_Index2(this.h, path_ms, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirModel) Refresh1(parent *QModelIndex) {
	C.QDirModel_Refresh1(this.h, parent.cPointer())
}

func (this *QDirModel) callVirtualBase_Index(row int, column int, parent *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QDirModel_virtualbase_Index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDirModel) OnIndex(slot func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Index
func miqt_exec_callback_QDirModel_Index(self *C.QDirModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QDirModel) callVirtualBase_Parent(child *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QDirModel_virtualbase_Parent(unsafe.Pointer(this.h), child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDirModel) OnParent(slot func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Parent
func miqt_exec_callback_QDirModel_Parent(self *C.QDirModel, cb C.intptr_t, child *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(child)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Parent, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDirModel) callVirtualBase_RowCount(parent *QModelIndex) int {

	return (int)(C.QDirModel_virtualbase_RowCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QDirModel) OnRowCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_RowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_RowCount
func miqt_exec_callback_QDirModel_RowCount(self *C.QDirModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_ColumnCount(parent *QModelIndex) int {

	return (int)(C.QDirModel_virtualbase_ColumnCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QDirModel) OnColumnCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_ColumnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_ColumnCount
func miqt_exec_callback_QDirModel_ColumnCount(self *C.QDirModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_Data(index *QModelIndex, role int) *QVariant {

	_goptr := newQVariant(C.QDirModel_virtualbase_Data(unsafe.Pointer(this.h), index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDirModel) OnData(slot func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Data
func miqt_exec_callback_QDirModel_Data(self *C.QDirModel, cb C.intptr_t, index *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QDirModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {

	return (bool)(C.QDirModel_virtualbase_SetData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QDirModel) OnSetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_SetData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_SetData
func miqt_exec_callback_QDirModel_SetData(self *C.QDirModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQVariant(value)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {

	_goptr := newQVariant(C.QDirModel_virtualbase_HeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDirModel) OnHeaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_HeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_HeaderData
func miqt_exec_callback_QDirModel_HeaderData(self *C.QDirModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QDirModel) callVirtualBase_HasChildren(index *QModelIndex) bool {

	return (bool)(C.QDirModel_virtualbase_HasChildren(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QDirModel) OnHasChildren(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_HasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_HasChildren
func miqt_exec_callback_QDirModel_HasChildren(self *C.QDirModel, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {

	return (ItemFlag)(C.QDirModel_virtualbase_Flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QDirModel) OnFlags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Flags
func miqt_exec_callback_QDirModel_Flags(self *C.QDirModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_Sort(column int, order SortOrder) {

	C.QDirModel_virtualbase_Sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QDirModel) OnSort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Sort
func miqt_exec_callback_QDirModel_Sort(self *C.QDirModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order SortOrder), column int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (SortOrder)(order)

	gofunc((&QDirModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QDirModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QDirModel_virtualbase_MimeTypes(unsafe.Pointer(this.h))
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
func (this *QDirModel) OnMimeTypes(slot func(super func() []string) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_MimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_MimeTypes
func miqt_exec_callback_QDirModel_MimeTypes(self *C.QDirModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_MimeTypes)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QDirModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return newQMimeData(C.QDirModel_virtualbase_MimeData(unsafe.Pointer(this.h), indexes_ma))

}
func (this *QDirModel) OnMimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_MimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_MimeData
func miqt_exec_callback_QDirModel_MimeData(self *C.QDirModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]QModelIndex, int(indexes_ma.len))
	indexes_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(indexes_ma.data)) // hey ya
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_lv_goptr := newQModelIndex(indexes_outCast[i])
		indexes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		indexes_ret[i] = *indexes_lv_goptr
	}
	slotval1 := indexes_ret

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDirModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QDirModel_virtualbase_DropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QDirModel) OnDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_DropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_DropMimeData
func miqt_exec_callback_QDirModel_DropMimeData(self *C.QDirModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(data)

	slotval2 := (DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QDirModel_virtualbase_SupportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QDirModel) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_SupportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_SupportedDropActions
func miqt_exec_callback_QDirModel_SupportedDropActions(self *C.QDirModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QDirModel_virtualbase_Sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDirModel) OnSibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Sibling
func miqt_exec_callback_QDirModel_Sibling(self *C.QDirModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(idx)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QDirModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {

	return (bool)(C.QDirModel_virtualbase_SetHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QDirModel) OnSetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_SetHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_SetHeaderData
func miqt_exec_callback_QDirModel_SetHeaderData(self *C.QDirModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := newQVariant(value)

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_ItemData(index *QModelIndex) map[int]QVariant {

	var _mm C.struct_miqt_map = C.QDirModel_virtualbase_ItemData(unsafe.Pointer(this.h), index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QDirModel) OnItemData(slot func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_ItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_ItemData
func miqt_exec_callback_QDirModel_ItemData(self *C.QDirModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_ItemData, slotval1)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_Values_CArray[virtualReturn_ctr] = virtualReturn_v.cPointer()
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QDirModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
	roles_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Keys_CArray))
	roles_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Values_CArray))
	roles_ctr := 0
	for roles_k, roles_v := range roles {
		roles_Keys_CArray[roles_ctr] = (C.int)(roles_k)
		roles_Values_CArray[roles_ctr] = roles_v.cPointer()
		roles_ctr++
	}
	roles_mm := C.struct_miqt_map{
		len:    C.size_t(len(roles)),
		keys:   unsafe.Pointer(roles_Keys_CArray),
		values: unsafe.Pointer(roles_Values_CArray),
	}

	return (bool)(C.QDirModel_virtualbase_SetItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QDirModel) OnSetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_SetItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_SetItemData
func miqt_exec_callback_QDirModel_SetItemData(self *C.QDirModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	var roles_mm C.struct_miqt_map = roles
	roles_ret := make(map[int]QVariant, int(roles_mm.len))
	roles_Keys := (*[0xffff]C.int)(unsafe.Pointer(roles_mm.keys))
	roles_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(roles_mm.values))
	for i := 0; i < int(roles_mm.len); i++ {
		roles_entry_Key := (int)(roles_Keys[i])

		roles_mapval_goptr := newQVariant(roles_Values[i])
		roles_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		roles_entry_Value := *roles_mapval_goptr

		roles_ret[roles_entry_Key] = roles_entry_Value
	}
	slotval2 := roles_ret

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QDirModel_virtualbase_CanDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QDirModel) OnCanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_CanDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_CanDropMimeData
func miqt_exec_callback_QDirModel_CanDropMimeData(self *C.QDirModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(data)

	slotval2 := (DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_SupportedDragActions() DropAction {

	return (DropAction)(C.QDirModel_virtualbase_SupportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QDirModel) OnSupportedDragActions(slot func(super func() DropAction) DropAction) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_SupportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_SupportedDragActions
func miqt_exec_callback_QDirModel_SupportedDragActions(self *C.QDirModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QDirModel_virtualbase_InsertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QDirModel) OnInsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_InsertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_InsertRows
func miqt_exec_callback_QDirModel_InsertRows(self *C.QDirModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QDirModel_virtualbase_InsertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QDirModel) OnInsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_InsertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_InsertColumns
func miqt_exec_callback_QDirModel_InsertColumns(self *C.QDirModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QDirModel_virtualbase_RemoveRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QDirModel) OnRemoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_RemoveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_RemoveRows
func miqt_exec_callback_QDirModel_RemoveRows(self *C.QDirModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QDirModel_virtualbase_RemoveColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QDirModel) OnRemoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_RemoveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_RemoveColumns
func miqt_exec_callback_QDirModel_RemoveColumns(self *C.QDirModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QDirModel_virtualbase_MoveRows(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QDirModel) OnMoveRows(slot func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_MoveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_MoveRows
func miqt_exec_callback_QDirModel_MoveRows(self *C.QDirModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(sourceParent)

	slotval2 := (int)(sourceRow)

	slotval3 := (int)(count)

	slotval4 := newQModelIndex(destinationParent)

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QDirModel_virtualbase_MoveColumns(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QDirModel) OnMoveColumns(slot func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_MoveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_MoveColumns
func miqt_exec_callback_QDirModel_MoveColumns(self *C.QDirModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(sourceParent)

	slotval2 := (int)(sourceColumn)

	slotval3 := (int)(count)

	slotval4 := newQModelIndex(destinationParent)

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_FetchMore(parent *QModelIndex) {

	C.QDirModel_virtualbase_FetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QDirModel) OnFetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_FetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_FetchMore
func miqt_exec_callback_QDirModel_FetchMore(self *C.QDirModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	gofunc((&QDirModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QDirModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {

	return (bool)(C.QDirModel_virtualbase_CanFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QDirModel) OnCanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_CanFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_CanFetchMore
func miqt_exec_callback_QDirModel_CanFetchMore(self *C.QDirModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QDirModel_virtualbase_Buddy(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDirModel) OnBuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Buddy
func miqt_exec_callback_QDirModel_Buddy(self *C.QDirModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Buddy, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDirModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {

	var _ma C.struct_miqt_array = C.QDirModel_virtualbase_Match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QDirModel) OnMatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Match
func miqt_exec_callback_QDirModel_Match(self *C.QDirModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(start)

	slotval2 := (int)(role)

	slotval3 := newQVariant(value)

	slotval4 := (int)(hits)

	slotval5 := (MatchFlag)(flags)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QDirModel) callVirtualBase_Span(index *QModelIndex) *QSize {

	_goptr := newQSize(C.QDirModel_virtualbase_Span(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDirModel) OnSpan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Span
func miqt_exec_callback_QDirModel_Span(self *C.QDirModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Span, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDirModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QDirModel_virtualbase_RoleNames(unsafe.Pointer(this.h))
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		var _hashval_bytearray C.struct_miqt_string = _Values[i]
		_hashval_ret := C.GoBytes(unsafe.Pointer(_hashval_bytearray.data), C.int(int64(_hashval_bytearray.len)))
		C.free(unsafe.Pointer(_hashval_bytearray.data))
		_entry_Value := _hashval_ret
		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QDirModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_RoleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_RoleNames
func miqt_exec_callback_QDirModel_RoleNames(self *C.QDirModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_RoleNames)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_v_alias := C.struct_miqt_string{}
		virtualReturn_v_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn_v[0]))
		virtualReturn_v_alias.len = C.size_t(len(virtualReturn_v))
		virtualReturn_Values_CArray[virtualReturn_ctr] = virtualReturn_v_alias
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QDirModel) callVirtualBase_Submit() bool {

	return (bool)(C.QDirModel_virtualbase_Submit(unsafe.Pointer(this.h)))

}
func (this *QDirModel) OnSubmit(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Submit
func miqt_exec_callback_QDirModel_Submit(self *C.QDirModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDirModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QDirModel) callVirtualBase_Revert() {

	C.QDirModel_virtualbase_Revert(unsafe.Pointer(this.h))

}
func (this *QDirModel) OnRevert(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDirModel_override_virtual_Revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDirModel_Revert
func miqt_exec_callback_QDirModel_Revert(self *C.QDirModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDirModel{h: self}).callVirtualBase_Revert)

}

// Delete this object from C++ memory.
func (this *QDirModel) Delete() {
	C.QDirModel_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDirModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QDirModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
