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
	h          *C.QSortFilterProxyModel
	isSubclass bool
	*QAbstractProxyModel
}

func (this *QSortFilterProxyModel) cPointer() *C.QSortFilterProxyModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSortFilterProxyModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSortFilterProxyModel constructs the type using only CGO pointers.
func newQSortFilterProxyModel(h *C.QSortFilterProxyModel, h_QAbstractProxyModel *C.QAbstractProxyModel, h_QAbstractItemModel *C.QAbstractItemModel, h_QObject *C.QObject) *QSortFilterProxyModel {
	if h == nil {
		return nil
	}
	return &QSortFilterProxyModel{h: h,
		QAbstractProxyModel: newQAbstractProxyModel(h_QAbstractProxyModel, h_QAbstractItemModel, h_QObject)}
}

// UnsafeNewQSortFilterProxyModel constructs the type using only unsafe pointers.
func UnsafeNewQSortFilterProxyModel(h unsafe.Pointer, h_QAbstractProxyModel unsafe.Pointer, h_QAbstractItemModel unsafe.Pointer, h_QObject unsafe.Pointer) *QSortFilterProxyModel {
	if h == nil {
		return nil
	}

	return &QSortFilterProxyModel{h: (*C.QSortFilterProxyModel)(h),
		QAbstractProxyModel: UnsafeNewQAbstractProxyModel(h_QAbstractProxyModel, h_QAbstractItemModel, h_QObject)}
}

// NewQSortFilterProxyModel constructs a new QSortFilterProxyModel object.
func NewQSortFilterProxyModel() *QSortFilterProxyModel {
	var outptr_QSortFilterProxyModel *C.QSortFilterProxyModel = nil
	var outptr_QAbstractProxyModel *C.QAbstractProxyModel = nil
	var outptr_QAbstractItemModel *C.QAbstractItemModel = nil
	var outptr_QObject *C.QObject = nil

	C.QSortFilterProxyModel_new(&outptr_QSortFilterProxyModel, &outptr_QAbstractProxyModel, &outptr_QAbstractItemModel, &outptr_QObject)
	ret := newQSortFilterProxyModel(outptr_QSortFilterProxyModel, outptr_QAbstractProxyModel, outptr_QAbstractItemModel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSortFilterProxyModel2 constructs a new QSortFilterProxyModel object.
func NewQSortFilterProxyModel2(parent *QObject) *QSortFilterProxyModel {
	var outptr_QSortFilterProxyModel *C.QSortFilterProxyModel = nil
	var outptr_QAbstractProxyModel *C.QAbstractProxyModel = nil
	var outptr_QAbstractItemModel *C.QAbstractItemModel = nil
	var outptr_QObject *C.QObject = nil

	C.QSortFilterProxyModel_new2(parent.cPointer(), &outptr_QSortFilterProxyModel, &outptr_QAbstractProxyModel, &outptr_QAbstractItemModel, &outptr_QObject)
	ret := newQSortFilterProxyModel(outptr_QSortFilterProxyModel, outptr_QAbstractProxyModel, outptr_QAbstractItemModel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QSortFilterProxyModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSortFilterProxyModel_MetaObject(this.h)))
}

func (this *QSortFilterProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSortFilterProxyModel_Metacast(this.h, param1_Cstring))
}

func QSortFilterProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSortFilterProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSortFilterProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QSortFilterProxyModel_SetSourceModel(this.h, sourceModel.cPointer())
}

func (this *QSortFilterProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_ret := C.QSortFilterProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_ret := C.QSortFilterProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) MapSelectionToSource(proxySelection *QItemSelection) *QItemSelection {
	_ret := C.QSortFilterProxyModel_MapSelectionToSource(this.h, proxySelection.cPointer())
	_goptr := newQItemSelection(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) MapSelectionFromSource(sourceSelection *QItemSelection) *QItemSelection {
	_ret := C.QSortFilterProxyModel_MapSelectionFromSource(this.h, sourceSelection.cPointer())
	_goptr := newQItemSelection(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) FilterRegExp() *QRegExp {
	_ret := C.QSortFilterProxyModel_FilterRegExp(this.h)
	_goptr := newQRegExp(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) FilterRegularExpression() *QRegularExpression {
	_ret := C.QSortFilterProxyModel_FilterRegularExpression(this.h)
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) FilterKeyColumn() int {
	return (int)(C.QSortFilterProxyModel_FilterKeyColumn(this.h))
}

func (this *QSortFilterProxyModel) SetFilterKeyColumn(column int) {
	C.QSortFilterProxyModel_SetFilterKeyColumn(this.h, (C.int)(column))
}

func (this *QSortFilterProxyModel) FilterCaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QSortFilterProxyModel_FilterCaseSensitivity(this.h))
}

func (this *QSortFilterProxyModel) SetFilterCaseSensitivity(cs CaseSensitivity) {
	C.QSortFilterProxyModel_SetFilterCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QSortFilterProxyModel) SortCaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QSortFilterProxyModel_SortCaseSensitivity(this.h))
}

func (this *QSortFilterProxyModel) SetSortCaseSensitivity(cs CaseSensitivity) {
	C.QSortFilterProxyModel_SetSortCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QSortFilterProxyModel) IsSortLocaleAware() bool {
	return (bool)(C.QSortFilterProxyModel_IsSortLocaleAware(this.h))
}

func (this *QSortFilterProxyModel) SetSortLocaleAware(on bool) {
	C.QSortFilterProxyModel_SetSortLocaleAware(this.h, (C.bool)(on))
}

func (this *QSortFilterProxyModel) SortColumn() int {
	return (int)(C.QSortFilterProxyModel_SortColumn(this.h))
}

func (this *QSortFilterProxyModel) SortOrder() SortOrder {
	return (SortOrder)(C.QSortFilterProxyModel_SortOrder(this.h))
}

func (this *QSortFilterProxyModel) DynamicSortFilter() bool {
	return (bool)(C.QSortFilterProxyModel_DynamicSortFilter(this.h))
}

func (this *QSortFilterProxyModel) SetDynamicSortFilter(enable bool) {
	C.QSortFilterProxyModel_SetDynamicSortFilter(this.h, (C.bool)(enable))
}

func (this *QSortFilterProxyModel) SortRole() int {
	return (int)(C.QSortFilterProxyModel_SortRole(this.h))
}

func (this *QSortFilterProxyModel) SetSortRole(role int) {
	C.QSortFilterProxyModel_SetSortRole(this.h, (C.int)(role))
}

func (this *QSortFilterProxyModel) FilterRole() int {
	return (int)(C.QSortFilterProxyModel_FilterRole(this.h))
}

func (this *QSortFilterProxyModel) SetFilterRole(role int) {
	C.QSortFilterProxyModel_SetFilterRole(this.h, (C.int)(role))
}

func (this *QSortFilterProxyModel) IsRecursiveFilteringEnabled() bool {
	return (bool)(C.QSortFilterProxyModel_IsRecursiveFilteringEnabled(this.h))
}

func (this *QSortFilterProxyModel) SetRecursiveFilteringEnabled(recursive bool) {
	C.QSortFilterProxyModel_SetRecursiveFilteringEnabled(this.h, (C.bool)(recursive))
}

func (this *QSortFilterProxyModel) SetFilterRegExp(pattern string) {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QSortFilterProxyModel_SetFilterRegExp(this.h, pattern_ms)
}

func (this *QSortFilterProxyModel) SetFilterRegExpWithRegExp(regExp *QRegExp) {
	C.QSortFilterProxyModel_SetFilterRegExpWithRegExp(this.h, regExp.cPointer())
}

func (this *QSortFilterProxyModel) SetFilterRegularExpression(pattern string) {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QSortFilterProxyModel_SetFilterRegularExpression(this.h, pattern_ms)
}

func (this *QSortFilterProxyModel) SetFilterRegularExpressionWithRegularExpression(regularExpression *QRegularExpression) {
	C.QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(this.h, regularExpression.cPointer())
}

func (this *QSortFilterProxyModel) SetFilterWildcard(pattern string) {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QSortFilterProxyModel_SetFilterWildcard(this.h, pattern_ms)
}

func (this *QSortFilterProxyModel) SetFilterFixedString(pattern string) {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QSortFilterProxyModel_SetFilterFixedString(this.h, pattern_ms)
}

func (this *QSortFilterProxyModel) Clear() {
	C.QSortFilterProxyModel_Clear(this.h)
}

func (this *QSortFilterProxyModel) Invalidate() {
	C.QSortFilterProxyModel_Invalidate(this.h)
}

func (this *QSortFilterProxyModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QSortFilterProxyModel_Index(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Parent(child *QModelIndex) *QModelIndex {
	_ret := C.QSortFilterProxyModel_Parent(this.h, child.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_ret := C.QSortFilterProxyModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) RowCount(parent *QModelIndex) int {
	return (int)(C.QSortFilterProxyModel_RowCount(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) ColumnCount(parent *QModelIndex) int {
	return (int)(C.QSortFilterProxyModel_ColumnCount(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) HasChildren(parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_HasChildren(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) Data(index *QModelIndex, role int) *QVariant {
	_ret := C.QSortFilterProxyModel_Data(this.h, index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) SetData(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QSortFilterProxyModel_SetData(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QSortFilterProxyModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QSortFilterProxyModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QSortFilterProxyModel_SetHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QSortFilterProxyModel) MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	return UnsafeNewQMimeData(unsafe.Pointer(C.QSortFilterProxyModel_MimeData(this.h, indexes_ma)), nil)
}

func (this *QSortFilterProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QSortFilterProxyModel) InsertRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_InsertRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) InsertColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_InsertColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) RemoveRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_RemoveRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) RemoveColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) FetchMore(parent *QModelIndex) {
	C.QSortFilterProxyModel_FetchMore(this.h, parent.cPointer())
}

func (this *QSortFilterProxyModel) CanFetchMore(parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_CanFetchMore(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QSortFilterProxyModel_Flags(this.h, index.cPointer()))
}

func (this *QSortFilterProxyModel) Buddy(index *QModelIndex) *QModelIndex {
	_ret := C.QSortFilterProxyModel_Buddy(this.h, index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_Match(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSortFilterProxyModel) Span(index *QModelIndex) *QSize {
	_ret := C.QSortFilterProxyModel_Span(this.h, index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Sort(column int, order SortOrder) {
	C.QSortFilterProxyModel_Sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QSortFilterProxyModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_MimeTypes(this.h)
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

func (this *QSortFilterProxyModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QSortFilterProxyModel_SupportedDropActions(this.h))
}

func (this *QSortFilterProxyModel) DynamicSortFilterChanged(dynamicSortFilter bool) {
	C.QSortFilterProxyModel_DynamicSortFilterChanged(this.h, (C.bool)(dynamicSortFilter))
}
func (this *QSortFilterProxyModel) OnDynamicSortFilterChanged(slot func(dynamicSortFilter bool)) {
	C.QSortFilterProxyModel_connect_DynamicSortFilterChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_DynamicSortFilterChanged
func miqt_exec_callback_QSortFilterProxyModel_DynamicSortFilterChanged(cb C.intptr_t, dynamicSortFilter C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dynamicSortFilter bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(dynamicSortFilter)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) FilterCaseSensitivityChanged(filterCaseSensitivity CaseSensitivity) {
	C.QSortFilterProxyModel_FilterCaseSensitivityChanged(this.h, (C.int)(filterCaseSensitivity))
}
func (this *QSortFilterProxyModel) OnFilterCaseSensitivityChanged(slot func(filterCaseSensitivity CaseSensitivity)) {
	C.QSortFilterProxyModel_connect_FilterCaseSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_FilterCaseSensitivityChanged
func miqt_exec_callback_QSortFilterProxyModel_FilterCaseSensitivityChanged(cb C.intptr_t, filterCaseSensitivity C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filterCaseSensitivity CaseSensitivity))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (CaseSensitivity)(filterCaseSensitivity)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) SortCaseSensitivityChanged(sortCaseSensitivity CaseSensitivity) {
	C.QSortFilterProxyModel_SortCaseSensitivityChanged(this.h, (C.int)(sortCaseSensitivity))
}
func (this *QSortFilterProxyModel) OnSortCaseSensitivityChanged(slot func(sortCaseSensitivity CaseSensitivity)) {
	C.QSortFilterProxyModel_connect_SortCaseSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SortCaseSensitivityChanged
func miqt_exec_callback_QSortFilterProxyModel_SortCaseSensitivityChanged(cb C.intptr_t, sortCaseSensitivity C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sortCaseSensitivity CaseSensitivity))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (CaseSensitivity)(sortCaseSensitivity)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) SortLocaleAwareChanged(sortLocaleAware bool) {
	C.QSortFilterProxyModel_SortLocaleAwareChanged(this.h, (C.bool)(sortLocaleAware))
}
func (this *QSortFilterProxyModel) OnSortLocaleAwareChanged(slot func(sortLocaleAware bool)) {
	C.QSortFilterProxyModel_connect_SortLocaleAwareChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SortLocaleAwareChanged
func miqt_exec_callback_QSortFilterProxyModel_SortLocaleAwareChanged(cb C.intptr_t, sortLocaleAware C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sortLocaleAware bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(sortLocaleAware)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) SortRoleChanged(sortRole int) {
	C.QSortFilterProxyModel_SortRoleChanged(this.h, (C.int)(sortRole))
}
func (this *QSortFilterProxyModel) OnSortRoleChanged(slot func(sortRole int)) {
	C.QSortFilterProxyModel_connect_SortRoleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SortRoleChanged
func miqt_exec_callback_QSortFilterProxyModel_SortRoleChanged(cb C.intptr_t, sortRole C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sortRole int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(sortRole)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) FilterRoleChanged(filterRole int) {
	C.QSortFilterProxyModel_FilterRoleChanged(this.h, (C.int)(filterRole))
}
func (this *QSortFilterProxyModel) OnFilterRoleChanged(slot func(filterRole int)) {
	C.QSortFilterProxyModel_connect_FilterRoleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_FilterRoleChanged
func miqt_exec_callback_QSortFilterProxyModel_FilterRoleChanged(cb C.intptr_t, filterRole C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filterRole int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(filterRole)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) RecursiveFilteringEnabledChanged(recursiveFilteringEnabled bool) {
	C.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(this.h, (C.bool)(recursiveFilteringEnabled))
}
func (this *QSortFilterProxyModel) OnRecursiveFilteringEnabledChanged(slot func(recursiveFilteringEnabled bool)) {
	C.QSortFilterProxyModel_connect_RecursiveFilteringEnabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_RecursiveFilteringEnabledChanged
func miqt_exec_callback_QSortFilterProxyModel_RecursiveFilteringEnabledChanged(cb C.intptr_t, recursiveFilteringEnabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(recursiveFilteringEnabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(recursiveFilteringEnabled)

	gofunc(slotval1)
}

func QSortFilterProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSortFilterProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSortFilterProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSortFilterProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSortFilterProxyModel) callVirtualBase_SetSourceModel(sourceModel *QAbstractItemModel) {

	C.QSortFilterProxyModel_virtualbase_SetSourceModel(unsafe.Pointer(this.h), sourceModel.cPointer())

}
func (this *QSortFilterProxyModel) OnSetSourceModel(slot func(super func(sourceModel *QAbstractItemModel), sourceModel *QAbstractItemModel)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_SetSourceModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SetSourceModel
func miqt_exec_callback_QSortFilterProxyModel_SetSourceModel(self *C.QSortFilterProxyModel, cb C.intptr_t, sourceModel *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceModel *QAbstractItemModel), sourceModel *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractItemModel(unsafe.Pointer(sourceModel), nil)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SetSourceModel, slotval1)

}

func (this *QSortFilterProxyModel) callVirtualBase_MapToSource(proxyIndex *QModelIndex) *QModelIndex {

	_ret := C.QSortFilterProxyModel_virtualbase_MapToSource(unsafe.Pointer(this.h), proxyIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnMapToSource(slot func(super func(proxyIndex *QModelIndex) *QModelIndex, proxyIndex *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_MapToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_MapToSource
func miqt_exec_callback_QSortFilterProxyModel_MapToSource(self *C.QSortFilterProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxyIndex *QModelIndex) *QModelIndex, proxyIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(proxyIndex))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MapToSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_MapFromSource(sourceIndex *QModelIndex) *QModelIndex {

	_ret := C.QSortFilterProxyModel_virtualbase_MapFromSource(unsafe.Pointer(this.h), sourceIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnMapFromSource(slot func(super func(sourceIndex *QModelIndex) *QModelIndex, sourceIndex *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_MapFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_MapFromSource
func miqt_exec_callback_QSortFilterProxyModel_MapFromSource(self *C.QSortFilterProxyModel, cb C.intptr_t, sourceIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceIndex *QModelIndex) *QModelIndex, sourceIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(sourceIndex))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MapFromSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_MapSelectionToSource(proxySelection *QItemSelection) *QItemSelection {

	_ret := C.QSortFilterProxyModel_virtualbase_MapSelectionToSource(unsafe.Pointer(this.h), proxySelection.cPointer())
	_goptr := newQItemSelection(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnMapSelectionToSource(slot func(super func(proxySelection *QItemSelection) *QItemSelection, proxySelection *QItemSelection) *QItemSelection) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_MapSelectionToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_MapSelectionToSource
func miqt_exec_callback_QSortFilterProxyModel_MapSelectionToSource(self *C.QSortFilterProxyModel, cb C.intptr_t, proxySelection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxySelection *QItemSelection) *QItemSelection, proxySelection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(proxySelection))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MapSelectionToSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_MapSelectionFromSource(sourceSelection *QItemSelection) *QItemSelection {

	_ret := C.QSortFilterProxyModel_virtualbase_MapSelectionFromSource(unsafe.Pointer(this.h), sourceSelection.cPointer())
	_goptr := newQItemSelection(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnMapSelectionFromSource(slot func(super func(sourceSelection *QItemSelection) *QItemSelection, sourceSelection *QItemSelection) *QItemSelection) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_MapSelectionFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_MapSelectionFromSource
func miqt_exec_callback_QSortFilterProxyModel_MapSelectionFromSource(self *C.QSortFilterProxyModel, cb C.intptr_t, sourceSelection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceSelection *QItemSelection) *QItemSelection, sourceSelection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(sourceSelection))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MapSelectionFromSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_FilterAcceptsRow(source_row int, source_parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_FilterAcceptsRow(unsafe.Pointer(this.h), (C.int)(source_row), source_parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnFilterAcceptsRow(slot func(super func(source_row int, source_parent *QModelIndex) bool, source_row int, source_parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_FilterAcceptsRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_FilterAcceptsRow
func miqt_exec_callback_QSortFilterProxyModel_FilterAcceptsRow(self *C.QSortFilterProxyModel, cb C.intptr_t, source_row C.int, source_parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source_row int, source_parent *QModelIndex) bool, source_row int, source_parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(source_row)

	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(source_parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_FilterAcceptsRow, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_FilterAcceptsColumn(source_column int, source_parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_FilterAcceptsColumn(unsafe.Pointer(this.h), (C.int)(source_column), source_parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnFilterAcceptsColumn(slot func(super func(source_column int, source_parent *QModelIndex) bool, source_column int, source_parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_FilterAcceptsColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_FilterAcceptsColumn
func miqt_exec_callback_QSortFilterProxyModel_FilterAcceptsColumn(self *C.QSortFilterProxyModel, cb C.intptr_t, source_column C.int, source_parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source_column int, source_parent *QModelIndex) bool, source_column int, source_parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(source_column)

	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(source_parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_FilterAcceptsColumn, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_LessThan(source_left *QModelIndex, source_right *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_LessThan(unsafe.Pointer(this.h), source_left.cPointer(), source_right.cPointer()))

}
func (this *QSortFilterProxyModel) OnLessThan(slot func(super func(source_left *QModelIndex, source_right *QModelIndex) bool, source_left *QModelIndex, source_right *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_LessThan(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_LessThan
func miqt_exec_callback_QSortFilterProxyModel_LessThan(self *C.QSortFilterProxyModel, cb C.intptr_t, source_left *C.QModelIndex, source_right *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source_left *QModelIndex, source_right *QModelIndex) bool, source_left *QModelIndex, source_right *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(source_left))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(source_right))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_LessThan, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Index(row int, column int, parent *QModelIndex) *QModelIndex {

	_ret := C.QSortFilterProxyModel_virtualbase_Index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnIndex(slot func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Index
func miqt_exec_callback_QSortFilterProxyModel_Index(self *C.QSortFilterProxyModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_Parent(child *QModelIndex) *QModelIndex {

	_ret := C.QSortFilterProxyModel_virtualbase_Parent(unsafe.Pointer(this.h), child.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnParent(slot func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Parent
func miqt_exec_callback_QSortFilterProxyModel_Parent(self *C.QSortFilterProxyModel, cb C.intptr_t, child *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(child))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Parent, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {

	_ret := C.QSortFilterProxyModel_virtualbase_Sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnSibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Sibling
func miqt_exec_callback_QSortFilterProxyModel_Sibling(self *C.QSortFilterProxyModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(idx))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_RowCount(parent *QModelIndex) int {

	return (int)(C.QSortFilterProxyModel_virtualbase_RowCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnRowCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_RowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_RowCount
func miqt_exec_callback_QSortFilterProxyModel_RowCount(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_ColumnCount(parent *QModelIndex) int {

	return (int)(C.QSortFilterProxyModel_virtualbase_ColumnCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnColumnCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_ColumnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_ColumnCount
func miqt_exec_callback_QSortFilterProxyModel_ColumnCount(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_HasChildren(parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_HasChildren(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnHasChildren(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_HasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_HasChildren
func miqt_exec_callback_QSortFilterProxyModel_HasChildren(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Data(index *QModelIndex, role int) *QVariant {

	_ret := C.QSortFilterProxyModel_virtualbase_Data(unsafe.Pointer(this.h), index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnData(slot func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Data
func miqt_exec_callback_QSortFilterProxyModel_Data(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (int)(role)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_SetData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QSortFilterProxyModel) OnSetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_SetData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SetData
func miqt_exec_callback_QSortFilterProxyModel_SetData(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := UnsafeNewQVariant(unsafe.Pointer(value))
	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {

	_ret := C.QSortFilterProxyModel_virtualbase_HeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnHeaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_HeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_HeaderData
func miqt_exec_callback_QSortFilterProxyModel_HeaderData(self *C.QSortFilterProxyModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_SetHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QSortFilterProxyModel) OnSetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_SetHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SetHeaderData
func miqt_exec_callback_QSortFilterProxyModel_SetHeaderData(self *C.QSortFilterProxyModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := UnsafeNewQVariant(unsafe.Pointer(value))
	slotval4 := (int)(role)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return UnsafeNewQMimeData(unsafe.Pointer(C.QSortFilterProxyModel_virtualbase_MimeData(unsafe.Pointer(this.h), indexes_ma)), nil)
}
func (this *QSortFilterProxyModel) OnMimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_MimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_MimeData
func miqt_exec_callback_QSortFilterProxyModel_MimeData(self *C.QSortFilterProxyModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]QModelIndex, int(indexes_ma.len))
	indexes_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(indexes_ma.data)) // hey ya
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_lv_ret := indexes_outCast[i]
		indexes_lv_goptr := newQModelIndex(indexes_lv_ret)
		indexes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		indexes_ret[i] = *indexes_lv_goptr
	}
	slotval1 := indexes_ret

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_DropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_DropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_DropMimeData
func miqt_exec_callback_QSortFilterProxyModel_DropMimeData(self *C.QSortFilterProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMimeData(unsafe.Pointer(data), nil)
	slotval2 := (DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_InsertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnInsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_InsertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_InsertRows
func miqt_exec_callback_QSortFilterProxyModel_InsertRows(self *C.QSortFilterProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_InsertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnInsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_InsertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_InsertColumns
func miqt_exec_callback_QSortFilterProxyModel_InsertColumns(self *C.QSortFilterProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_RemoveRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnRemoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_RemoveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_RemoveRows
func miqt_exec_callback_QSortFilterProxyModel_RemoveRows(self *C.QSortFilterProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_RemoveColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnRemoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_RemoveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_RemoveColumns
func miqt_exec_callback_QSortFilterProxyModel_RemoveColumns(self *C.QSortFilterProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_FetchMore(parent *QModelIndex) {

	C.QSortFilterProxyModel_virtualbase_FetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QSortFilterProxyModel) OnFetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_FetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_FetchMore
func miqt_exec_callback_QSortFilterProxyModel_FetchMore(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QSortFilterProxyModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_CanFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnCanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_CanFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_CanFetchMore
func miqt_exec_callback_QSortFilterProxyModel_CanFetchMore(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {

	return (ItemFlag)(C.QSortFilterProxyModel_virtualbase_Flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QSortFilterProxyModel) OnFlags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Flags
func miqt_exec_callback_QSortFilterProxyModel_Flags(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {

	_ret := C.QSortFilterProxyModel_virtualbase_Buddy(unsafe.Pointer(this.h), index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnBuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Buddy
func miqt_exec_callback_QSortFilterProxyModel_Buddy(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Buddy, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {

	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_virtualbase_Match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QSortFilterProxyModel) OnMatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Match
func miqt_exec_callback_QSortFilterProxyModel_Match(self *C.QSortFilterProxyModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(start))
	slotval2 := (int)(role)

	slotval3 := UnsafeNewQVariant(unsafe.Pointer(value))
	slotval4 := (int)(hits)

	slotval5 := (MatchFlag)(flags)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QSortFilterProxyModel) callVirtualBase_Span(index *QModelIndex) *QSize {

	_ret := C.QSortFilterProxyModel_virtualbase_Span(unsafe.Pointer(this.h), index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnSpan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Span
func miqt_exec_callback_QSortFilterProxyModel_Span(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Span, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_Sort(column int, order SortOrder) {

	C.QSortFilterProxyModel_virtualbase_Sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QSortFilterProxyModel) OnSort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Sort
func miqt_exec_callback_QSortFilterProxyModel_Sort(self *C.QSortFilterProxyModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order SortOrder), column int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (SortOrder)(order)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QSortFilterProxyModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_virtualbase_MimeTypes(unsafe.Pointer(this.h))
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
func (this *QSortFilterProxyModel) OnMimeTypes(slot func(super func() []string) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_MimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_MimeTypes
func miqt_exec_callback_QSortFilterProxyModel_MimeTypes(self *C.QSortFilterProxyModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MimeTypes)
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

func (this *QSortFilterProxyModel) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QSortFilterProxyModel_virtualbase_SupportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QSortFilterProxyModel) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_SupportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SupportedDropActions
func miqt_exec_callback_QSortFilterProxyModel_SupportedDropActions(self *C.QSortFilterProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Submit() bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_Submit(unsafe.Pointer(this.h)))

}
func (this *QSortFilterProxyModel) OnSubmit(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Submit
func miqt_exec_callback_QSortFilterProxyModel_Submit(self *C.QSortFilterProxyModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Revert() {

	C.QSortFilterProxyModel_virtualbase_Revert(unsafe.Pointer(this.h))

}
func (this *QSortFilterProxyModel) OnRevert(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_Revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_Revert
func miqt_exec_callback_QSortFilterProxyModel_Revert(self *C.QSortFilterProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Revert)

}

func (this *QSortFilterProxyModel) callVirtualBase_ItemData(index *QModelIndex) map[int]QVariant {

	var _mm C.struct_miqt_map = C.QSortFilterProxyModel_virtualbase_ItemData(unsafe.Pointer(this.h), index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_ret := _Values[i]
		_mapval_goptr := newQVariant(_mapval_ret)
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QSortFilterProxyModel) OnItemData(slot func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_ItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_ItemData
func miqt_exec_callback_QSortFilterProxyModel_ItemData(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_ItemData, slotval1)
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

func (this *QSortFilterProxyModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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

	return (bool)(C.QSortFilterProxyModel_virtualbase_SetItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QSortFilterProxyModel) OnSetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_SetItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SetItemData
func miqt_exec_callback_QSortFilterProxyModel_SetItemData(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	var roles_mm C.struct_miqt_map = roles
	roles_ret := make(map[int]QVariant, int(roles_mm.len))
	roles_Keys := (*[0xffff]C.int)(unsafe.Pointer(roles_mm.keys))
	roles_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(roles_mm.values))
	for i := 0; i < int(roles_mm.len); i++ {
		roles_entry_Key := (int)(roles_Keys[i])

		roles_mapval_ret := roles_Values[i]
		roles_mapval_goptr := newQVariant(roles_mapval_ret)
		roles_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		roles_entry_Value := *roles_mapval_goptr

		roles_ret[roles_entry_Key] = roles_entry_Value
	}
	slotval2 := roles_ret

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QSortFilterProxyModel_virtualbase_CanDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnCanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_CanDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_CanDropMimeData
func miqt_exec_callback_QSortFilterProxyModel_CanDropMimeData(self *C.QSortFilterProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMimeData(unsafe.Pointer(data), nil)
	slotval2 := (DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_SupportedDragActions() DropAction {

	return (DropAction)(C.QSortFilterProxyModel_virtualbase_SupportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QSortFilterProxyModel) OnSupportedDragActions(slot func(super func() DropAction) DropAction) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSortFilterProxyModel_override_virtual_SupportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_SupportedDragActions
func miqt_exec_callback_QSortFilterProxyModel_SupportedDragActions(self *C.QSortFilterProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QSortFilterProxyModel) Delete() {
	C.QSortFilterProxyModel_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSortFilterProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QSortFilterProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
