package qt

/*

#include "gen_qsortfilterproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSortFilterProxyModel struct {
	h *C.QSortFilterProxyModel
	*QAbstractProxyModel
}

func (this *QSortFilterProxyModel) cPointer() *C.QSortFilterProxyModel {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSortFilterProxyModel(h *C.QSortFilterProxyModel) *QSortFilterProxyModel {
	if h == nil {
		return nil
	}
	return &QSortFilterProxyModel{h: h, QAbstractProxyModel: newQAbstractProxyModel_U(unsafe.Pointer(h))}
}

func newQSortFilterProxyModel_U(h unsafe.Pointer) *QSortFilterProxyModel {
	return newQSortFilterProxyModel((*C.QSortFilterProxyModel)(h))
}

// NewQSortFilterProxyModel constructs a new QSortFilterProxyModel object.
func NewQSortFilterProxyModel() *QSortFilterProxyModel {
	ret := C.QSortFilterProxyModel_new()
	return newQSortFilterProxyModel(ret)
}

// NewQSortFilterProxyModel2 constructs a new QSortFilterProxyModel object.
func NewQSortFilterProxyModel2(parent *QObject) *QSortFilterProxyModel {
	ret := C.QSortFilterProxyModel_new2(parent.cPointer())
	return newQSortFilterProxyModel(ret)
}

func (this *QSortFilterProxyModel) MetaObject() *QMetaObject {
	ret := C.QSortFilterProxyModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSortFilterProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSortFilterProxyModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSortFilterProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSortFilterProxyModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSortFilterProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QSortFilterProxyModel_SetSourceModel(this.h, sourceModel.cPointer())
}

func (this *QSortFilterProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	ret := C.QSortFilterProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	ret := C.QSortFilterProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) FilterRegExp() *QRegExp {
	ret := C.QSortFilterProxyModel_FilterRegExp(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegExp(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegExp) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) FilterRegularExpression() *QRegularExpression {
	ret := C.QSortFilterProxyModel_FilterRegularExpression(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpression(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpression) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) FilterKeyColumn() int {
	ret := C.QSortFilterProxyModel_FilterKeyColumn(this.h)
	return (int)(ret)
}

func (this *QSortFilterProxyModel) SetFilterKeyColumn(column int) {
	C.QSortFilterProxyModel_SetFilterKeyColumn(this.h, (C.int)(column))
}

func (this *QSortFilterProxyModel) FilterCaseSensitivity() uintptr {
	ret := C.QSortFilterProxyModel_FilterCaseSensitivity(this.h)
	return (uintptr)(ret)
}

func (this *QSortFilterProxyModel) SetFilterCaseSensitivity(cs uintptr) {
	C.QSortFilterProxyModel_SetFilterCaseSensitivity(this.h, (C.uintptr_t)(cs))
}

func (this *QSortFilterProxyModel) SortCaseSensitivity() uintptr {
	ret := C.QSortFilterProxyModel_SortCaseSensitivity(this.h)
	return (uintptr)(ret)
}

func (this *QSortFilterProxyModel) SetSortCaseSensitivity(cs uintptr) {
	C.QSortFilterProxyModel_SetSortCaseSensitivity(this.h, (C.uintptr_t)(cs))
}

func (this *QSortFilterProxyModel) IsSortLocaleAware() bool {
	ret := C.QSortFilterProxyModel_IsSortLocaleAware(this.h)
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) SetSortLocaleAware(on bool) {
	C.QSortFilterProxyModel_SetSortLocaleAware(this.h, (C.bool)(on))
}

func (this *QSortFilterProxyModel) SortColumn() int {
	ret := C.QSortFilterProxyModel_SortColumn(this.h)
	return (int)(ret)
}

func (this *QSortFilterProxyModel) SortOrder() uintptr {
	ret := C.QSortFilterProxyModel_SortOrder(this.h)
	return (uintptr)(ret)
}

func (this *QSortFilterProxyModel) DynamicSortFilter() bool {
	ret := C.QSortFilterProxyModel_DynamicSortFilter(this.h)
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) SetDynamicSortFilter(enable bool) {
	C.QSortFilterProxyModel_SetDynamicSortFilter(this.h, (C.bool)(enable))
}

func (this *QSortFilterProxyModel) SortRole() int {
	ret := C.QSortFilterProxyModel_SortRole(this.h)
	return (int)(ret)
}

func (this *QSortFilterProxyModel) SetSortRole(role int) {
	C.QSortFilterProxyModel_SetSortRole(this.h, (C.int)(role))
}

func (this *QSortFilterProxyModel) FilterRole() int {
	ret := C.QSortFilterProxyModel_FilterRole(this.h)
	return (int)(ret)
}

func (this *QSortFilterProxyModel) SetFilterRole(role int) {
	C.QSortFilterProxyModel_SetFilterRole(this.h, (C.int)(role))
}

func (this *QSortFilterProxyModel) IsRecursiveFilteringEnabled() bool {
	ret := C.QSortFilterProxyModel_IsRecursiveFilteringEnabled(this.h)
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) SetRecursiveFilteringEnabled(recursive bool) {
	C.QSortFilterProxyModel_SetRecursiveFilteringEnabled(this.h, (C.bool)(recursive))
}

func (this *QSortFilterProxyModel) SetFilterRegExp(pattern string) {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	C.QSortFilterProxyModel_SetFilterRegExp(this.h, pattern_Cstring, C.ulong(len(pattern)))
}

func (this *QSortFilterProxyModel) SetFilterRegExpWithRegExp(regExp *QRegExp) {
	C.QSortFilterProxyModel_SetFilterRegExpWithRegExp(this.h, regExp.cPointer())
}

func (this *QSortFilterProxyModel) SetFilterRegularExpression(pattern string) {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	C.QSortFilterProxyModel_SetFilterRegularExpression(this.h, pattern_Cstring, C.ulong(len(pattern)))
}

func (this *QSortFilterProxyModel) SetFilterRegularExpressionWithRegularExpression(regularExpression *QRegularExpression) {
	C.QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(this.h, regularExpression.cPointer())
}

func (this *QSortFilterProxyModel) SetFilterWildcard(pattern string) {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	C.QSortFilterProxyModel_SetFilterWildcard(this.h, pattern_Cstring, C.ulong(len(pattern)))
}

func (this *QSortFilterProxyModel) SetFilterFixedString(pattern string) {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	C.QSortFilterProxyModel_SetFilterFixedString(this.h, pattern_Cstring, C.ulong(len(pattern)))
}

func (this *QSortFilterProxyModel) Clear() {
	C.QSortFilterProxyModel_Clear(this.h)
}

func (this *QSortFilterProxyModel) Invalidate() {
	C.QSortFilterProxyModel_Invalidate(this.h)
}

func (this *QSortFilterProxyModel) Index(row int, column int) *QModelIndex {
	ret := C.QSortFilterProxyModel_Index(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) Parent(child *QModelIndex) *QModelIndex {
	ret := C.QSortFilterProxyModel_Parent(this.h, child.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	ret := C.QSortFilterProxyModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) RowCount() int {
	ret := C.QSortFilterProxyModel_RowCount(this.h)
	return (int)(ret)
}

func (this *QSortFilterProxyModel) ColumnCount() int {
	ret := C.QSortFilterProxyModel_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QSortFilterProxyModel) HasChildren() bool {
	ret := C.QSortFilterProxyModel_HasChildren(this.h)
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) Data(index *QModelIndex) *QVariant {
	ret := C.QSortFilterProxyModel_Data(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) SetData(index *QModelIndex, value *QVariant) bool {
	ret := C.QSortFilterProxyModel_SetData(this.h, index.cPointer(), value.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) HeaderData(section int, orientation uintptr) *QVariant {
	ret := C.QSortFilterProxyModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) SetHeaderData(section int, orientation uintptr, value *QVariant) bool {
	ret := C.QSortFilterProxyModel_SetHeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	ret := C.QSortFilterProxyModel_MimeData(this.h, &indexes_CArray[0], C.ulong(len(indexes)))
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QSortFilterProxyModel) DropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QSortFilterProxyModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) InsertRows(row int, count int) bool {
	ret := C.QSortFilterProxyModel_InsertRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) InsertColumns(column int, count int) bool {
	ret := C.QSortFilterProxyModel_InsertColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) RemoveRows(row int, count int) bool {
	ret := C.QSortFilterProxyModel_RemoveRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) RemoveColumns(column int, count int) bool {
	ret := C.QSortFilterProxyModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) FetchMore(parent *QModelIndex) {
	C.QSortFilterProxyModel_FetchMore(this.h, parent.cPointer())
}

func (this *QSortFilterProxyModel) CanFetchMore(parent *QModelIndex) bool {
	ret := C.QSortFilterProxyModel_CanFetchMore(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) Flags(index *QModelIndex) int {
	ret := C.QSortFilterProxyModel_Flags(this.h, index.cPointer())
	return (int)(ret)
}

func (this *QSortFilterProxyModel) Buddy(index *QModelIndex) *QModelIndex {
	ret := C.QSortFilterProxyModel_Buddy(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) Match(start *QModelIndex, role int, value *QVariant) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QSortFilterProxyModel_Match(this.h, start.cPointer(), (C.int)(role), value.cPointer(), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSortFilterProxyModel) Span(index *QModelIndex) *QSize {
	ret := C.QSortFilterProxyModel_Span(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) Sort(column int) {
	C.QSortFilterProxyModel_Sort(this.h, (C.int)(column))
}

func (this *QSortFilterProxyModel) MimeTypes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QSortFilterProxyModel_MimeTypes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSortFilterProxyModel) SupportedDropActions() int {
	ret := C.QSortFilterProxyModel_SupportedDropActions(this.h)
	return (int)(ret)
}

func (this *QSortFilterProxyModel) DynamicSortFilterChanged(dynamicSortFilter bool) {
	C.QSortFilterProxyModel_DynamicSortFilterChanged(this.h, (C.bool)(dynamicSortFilter))
}

func (this *QSortFilterProxyModel) OnDynamicSortFilterChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSortFilterProxyModel_connect_DynamicSortFilterChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSortFilterProxyModel) FilterCaseSensitivityChanged(filterCaseSensitivity uintptr) {
	C.QSortFilterProxyModel_FilterCaseSensitivityChanged(this.h, (C.uintptr_t)(filterCaseSensitivity))
}

func (this *QSortFilterProxyModel) OnFilterCaseSensitivityChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSortFilterProxyModel_connect_FilterCaseSensitivityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSortFilterProxyModel) SortCaseSensitivityChanged(sortCaseSensitivity uintptr) {
	C.QSortFilterProxyModel_SortCaseSensitivityChanged(this.h, (C.uintptr_t)(sortCaseSensitivity))
}

func (this *QSortFilterProxyModel) OnSortCaseSensitivityChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSortFilterProxyModel_connect_SortCaseSensitivityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSortFilterProxyModel) SortLocaleAwareChanged(sortLocaleAware bool) {
	C.QSortFilterProxyModel_SortLocaleAwareChanged(this.h, (C.bool)(sortLocaleAware))
}

func (this *QSortFilterProxyModel) OnSortLocaleAwareChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSortFilterProxyModel_connect_SortLocaleAwareChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSortFilterProxyModel) SortRoleChanged(sortRole int) {
	C.QSortFilterProxyModel_SortRoleChanged(this.h, (C.int)(sortRole))
}

func (this *QSortFilterProxyModel) OnSortRoleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSortFilterProxyModel_connect_SortRoleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSortFilterProxyModel) FilterRoleChanged(filterRole int) {
	C.QSortFilterProxyModel_FilterRoleChanged(this.h, (C.int)(filterRole))
}

func (this *QSortFilterProxyModel) OnFilterRoleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSortFilterProxyModel_connect_FilterRoleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSortFilterProxyModel) RecursiveFilteringEnabledChanged(recursiveFilteringEnabled bool) {
	C.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(this.h, (C.bool)(recursiveFilteringEnabled))
}

func (this *QSortFilterProxyModel) OnRecursiveFilteringEnabledChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSortFilterProxyModel_connect_RecursiveFilteringEnabledChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QSortFilterProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSortFilterProxyModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSortFilterProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSortFilterProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSortFilterProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSortFilterProxyModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSortFilterProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSortFilterProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSortFilterProxyModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QSortFilterProxyModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) RowCount1(parent *QModelIndex) int {
	ret := C.QSortFilterProxyModel_RowCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QSortFilterProxyModel) ColumnCount1(parent *QModelIndex) int {
	ret := C.QSortFilterProxyModel_ColumnCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QSortFilterProxyModel) HasChildren1(parent *QModelIndex) bool {
	ret := C.QSortFilterProxyModel_HasChildren1(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) Data2(index *QModelIndex, role int) *QVariant {
	ret := C.QSortFilterProxyModel_Data2(this.h, index.cPointer(), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	ret := C.QSortFilterProxyModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) HeaderData3(section int, orientation uintptr, role int) *QVariant {
	ret := C.QSortFilterProxyModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSortFilterProxyModel) SetHeaderData4(section int, orientation uintptr, value *QVariant, role int) bool {
	ret := C.QSortFilterProxyModel_SetHeaderData4(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QSortFilterProxyModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	ret := C.QSortFilterProxyModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QSortFilterProxyModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	ret := C.QSortFilterProxyModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QSortFilterProxyModel) Match4(start *QModelIndex, role int, value *QVariant, hits int) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QSortFilterProxyModel_Match4(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSortFilterProxyModel) Match5(start *QModelIndex, role int, value *QVariant, hits int, flags int) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QSortFilterProxyModel_Match5(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSortFilterProxyModel) Sort2(column int, order uintptr) {
	C.QSortFilterProxyModel_Sort2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QSortFilterProxyModel) Delete() {
	C.QSortFilterProxyModel_Delete(this.h)
}
