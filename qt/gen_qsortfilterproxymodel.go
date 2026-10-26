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
	h  *C.QSortFilterProxyModel
	gc *[1]unsafe.Pointer
	*QAbstractProxyModel
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSortFilterProxyModel) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAbstractProxyModel.miqtSetGC(gc)
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
func newQSortFilterProxyModel(h *C.QSortFilterProxyModel) *QSortFilterProxyModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractProxyModel *C.QAbstractProxyModel = nil
	C.QSortFilterProxyModel_virtbase(h, &outptr_QAbstractProxyModel)

	return &QSortFilterProxyModel{h: h,
		QAbstractProxyModel: newQAbstractProxyModel(outptr_QAbstractProxyModel)}
}

// UnsafeNewQSortFilterProxyModel constructs the type using only unsafe pointers.
func UnsafeNewQSortFilterProxyModel(h unsafe.Pointer) *QSortFilterProxyModel {
	return newQSortFilterProxyModel((*C.QSortFilterProxyModel)(h))
}

// NewQSortFilterProxyModel constructs a new QSortFilterProxyModel object.
func NewQSortFilterProxyModel() *QSortFilterProxyModel {

	return newQSortFilterProxyModel(C.QSortFilterProxyModel_new())
}

// NewQSortFilterProxyModel2 constructs a new QSortFilterProxyModel object.
func NewQSortFilterProxyModel2(parent *QObject) *QSortFilterProxyModel {
	defer runtime.KeepAlive(parent)

	return newQSortFilterProxyModel(C.QSortFilterProxyModel_new2(parent.cPointer()))
}

func (this *QSortFilterProxyModel) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QSortFilterProxyModel_metaObject(this.h))
}

func (this *QSortFilterProxyModel) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSortFilterProxyModel_metacast(this.h, param1_Cstring))
}

func QSortFilterProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSortFilterProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSortFilterProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceModel)
	C.QSortFilterProxyModel_setSourceModel(this.h, sourceModel.cPointer())
}

func (this *QSortFilterProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(proxyIndex)
	_goptr := newQModelIndex(C.QSortFilterProxyModel_mapToSource(this.h, proxyIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceIndex)
	_goptr := newQModelIndex(C.QSortFilterProxyModel_mapFromSource(this.h, sourceIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) MapSelectionToSource(proxySelection *QItemSelection) *QItemSelection {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(proxySelection)
	_goptr := newQItemSelection(C.QSortFilterProxyModel_mapSelectionToSource(this.h, proxySelection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) MapSelectionFromSource(sourceSelection *QItemSelection) *QItemSelection {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceSelection)
	_goptr := newQItemSelection(C.QSortFilterProxyModel_mapSelectionFromSource(this.h, sourceSelection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) FilterRegExp() *QRegExp {
	defer runtime.KeepAlive(this)
	_goptr := newQRegExp(C.QSortFilterProxyModel_filterRegExp(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) FilterRegularExpression() *QRegularExpression {
	defer runtime.KeepAlive(this)
	_goptr := newQRegularExpression(C.QSortFilterProxyModel_filterRegularExpression(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) FilterKeyColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSortFilterProxyModel_filterKeyColumn(this.h))
}

func (this *QSortFilterProxyModel) SetFilterKeyColumn(column int) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_setFilterKeyColumn(this.h, (C.int)(column))
}

func (this *QSortFilterProxyModel) FilterCaseSensitivity() CaseSensitivity {
	defer runtime.KeepAlive(this)
	return (CaseSensitivity)(C.QSortFilterProxyModel_filterCaseSensitivity(this.h))
}

func (this *QSortFilterProxyModel) SetFilterCaseSensitivity(cs CaseSensitivity) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_setFilterCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QSortFilterProxyModel) SortCaseSensitivity() CaseSensitivity {
	defer runtime.KeepAlive(this)
	return (CaseSensitivity)(C.QSortFilterProxyModel_sortCaseSensitivity(this.h))
}

func (this *QSortFilterProxyModel) SetSortCaseSensitivity(cs CaseSensitivity) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_setSortCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QSortFilterProxyModel) IsSortLocaleAware() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSortFilterProxyModel_isSortLocaleAware(this.h))
}

func (this *QSortFilterProxyModel) SetSortLocaleAware(on bool) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_setSortLocaleAware(this.h, (C.bool)(on))
}

func (this *QSortFilterProxyModel) SortColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSortFilterProxyModel_sortColumn(this.h))
}

func (this *QSortFilterProxyModel) SortOrder() SortOrder {
	defer runtime.KeepAlive(this)
	return (SortOrder)(C.QSortFilterProxyModel_sortOrder(this.h))
}

func (this *QSortFilterProxyModel) DynamicSortFilter() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSortFilterProxyModel_dynamicSortFilter(this.h))
}

func (this *QSortFilterProxyModel) SetDynamicSortFilter(enable bool) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_setDynamicSortFilter(this.h, (C.bool)(enable))
}

func (this *QSortFilterProxyModel) SortRole() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSortFilterProxyModel_sortRole(this.h))
}

func (this *QSortFilterProxyModel) SetSortRole(role int) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_setSortRole(this.h, (C.int)(role))
}

func (this *QSortFilterProxyModel) FilterRole() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSortFilterProxyModel_filterRole(this.h))
}

func (this *QSortFilterProxyModel) SetFilterRole(role int) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_setFilterRole(this.h, (C.int)(role))
}

func (this *QSortFilterProxyModel) IsRecursiveFilteringEnabled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSortFilterProxyModel_isRecursiveFilteringEnabled(this.h))
}

func (this *QSortFilterProxyModel) SetRecursiveFilteringEnabled(recursive bool) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_setRecursiveFilteringEnabled(this.h, (C.bool)(recursive))
}

func (this *QSortFilterProxyModel) SetFilterRegExp(pattern string) {
	defer runtime.KeepAlive(this)
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QSortFilterProxyModel_setFilterRegExp(this.h, pattern_ms)
}

func (this *QSortFilterProxyModel) SetFilterRegExpWithRegExp(regExp *QRegExp) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(regExp)
	C.QSortFilterProxyModel_setFilterRegExpWithRegExp(this.h, regExp.cPointer())
}

func (this *QSortFilterProxyModel) SetFilterRegularExpression(pattern string) {
	defer runtime.KeepAlive(this)
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QSortFilterProxyModel_setFilterRegularExpression(this.h, pattern_ms)
}

func (this *QSortFilterProxyModel) SetFilterRegularExpressionWithRegularExpression(regularExpression *QRegularExpression) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(regularExpression)
	C.QSortFilterProxyModel_setFilterRegularExpressionWithRegularExpression(this.h, regularExpression.cPointer())
}

func (this *QSortFilterProxyModel) SetFilterWildcard(pattern string) {
	defer runtime.KeepAlive(this)
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QSortFilterProxyModel_setFilterWildcard(this.h, pattern_ms)
}

func (this *QSortFilterProxyModel) SetFilterFixedString(pattern string) {
	defer runtime.KeepAlive(this)
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QSortFilterProxyModel_setFilterFixedString(this.h, pattern_ms)
}

func (this *QSortFilterProxyModel) Clear() {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_clear(this.h)
}

func (this *QSortFilterProxyModel) Invalidate() {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_invalidate(this.h)
}

func (this *QSortFilterProxyModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	_goptr := newQModelIndex(C.QSortFilterProxyModel_index(this.h, (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Parent(child *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(child)
	_goptr := newQModelIndex(C.QSortFilterProxyModel_parent(this.h, child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(idx)
	_goptr := newQModelIndex(C.QSortFilterProxyModel_sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) RowCount(parent *QModelIndex) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (int)(C.QSortFilterProxyModel_rowCount(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) ColumnCount(parent *QModelIndex) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (int)(C.QSortFilterProxyModel_columnCount(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) HasChildren(parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QSortFilterProxyModel_hasChildren(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) Data(index *QModelIndex, role int) *QVariant {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	_goptr := newQVariant(C.QSortFilterProxyModel_data(this.h, index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) SetData(index *QModelIndex, value *QVariant, role int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	defer runtime.KeepAlive(value)
	return (bool)(C.QSortFilterProxyModel_setData(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QSortFilterProxyModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QSortFilterProxyModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	return (bool)(C.QSortFilterProxyModel_setHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QSortFilterProxyModel) MimeData(indexes []QModelIndex) *QMimeData {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(indexes)
	indexes_CArray_ptr := (**C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray_ptr))
	indexes_CArray := unsafe.Slice(indexes_CArray_ptr, len(indexes))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray_ptr)}
	return newQMimeData(C.QSortFilterProxyModel_mimeData(this.h, indexes_ma))
}

func (this *QSortFilterProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QSortFilterProxyModel_dropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QSortFilterProxyModel) InsertRows(row int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QSortFilterProxyModel_insertRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) InsertColumns(column int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QSortFilterProxyModel_insertColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) RemoveRows(row int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QSortFilterProxyModel_removeRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) RemoveColumns(column int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QSortFilterProxyModel_removeColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) FetchMore(parent *QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	C.QSortFilterProxyModel_fetchMore(this.h, parent.cPointer())
}

func (this *QSortFilterProxyModel) CanFetchMore(parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QSortFilterProxyModel_canFetchMore(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) Flags(index *QModelIndex) ItemFlag {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	return (ItemFlag)(C.QSortFilterProxyModel_flags(this.h, index.cPointer()))
}

func (this *QSortFilterProxyModel) Buddy(index *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	_goptr := newQModelIndex(C.QSortFilterProxyModel_buddy(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(start)
	defer runtime.KeepAlive(value)
	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_match(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := unsafe.Slice((**C.QModelIndex)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSortFilterProxyModel) Span(index *QModelIndex) *QSize {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	_goptr := newQSize(C.QSortFilterProxyModel_span(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Sort(column int, order SortOrder) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QSortFilterProxyModel) MimeTypes() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_mimeTypes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QSortFilterProxyModel) SupportedDropActions() DropAction {
	defer runtime.KeepAlive(this)
	return (DropAction)(C.QSortFilterProxyModel_supportedDropActions(this.h))
}

func (this *QSortFilterProxyModel) DynamicSortFilterChanged(dynamicSortFilter bool) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_dynamicSortFilterChanged(this.h, (C.bool)(dynamicSortFilter))
}
func (this *QSortFilterProxyModel) OnDynamicSortFilterChanged(slot func(dynamicSortFilter bool)) {
	C.QSortFilterProxyModel_connect_dynamicSortFilterChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_dynamicSortFilterChanged
func miqt_exec_callback_QSortFilterProxyModel_dynamicSortFilterChanged(cb C.intptr_t, dynamicSortFilter C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dynamicSortFilter bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(dynamicSortFilter)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) FilterCaseSensitivityChanged(filterCaseSensitivity CaseSensitivity) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_filterCaseSensitivityChanged(this.h, (C.int)(filterCaseSensitivity))
}
func (this *QSortFilterProxyModel) OnFilterCaseSensitivityChanged(slot func(filterCaseSensitivity CaseSensitivity)) {
	C.QSortFilterProxyModel_connect_filterCaseSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_filterCaseSensitivityChanged
func miqt_exec_callback_QSortFilterProxyModel_filterCaseSensitivityChanged(cb C.intptr_t, filterCaseSensitivity C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filterCaseSensitivity CaseSensitivity))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (CaseSensitivity)(filterCaseSensitivity)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) SortCaseSensitivityChanged(sortCaseSensitivity CaseSensitivity) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_sortCaseSensitivityChanged(this.h, (C.int)(sortCaseSensitivity))
}
func (this *QSortFilterProxyModel) OnSortCaseSensitivityChanged(slot func(sortCaseSensitivity CaseSensitivity)) {
	C.QSortFilterProxyModel_connect_sortCaseSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_sortCaseSensitivityChanged
func miqt_exec_callback_QSortFilterProxyModel_sortCaseSensitivityChanged(cb C.intptr_t, sortCaseSensitivity C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sortCaseSensitivity CaseSensitivity))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (CaseSensitivity)(sortCaseSensitivity)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) SortLocaleAwareChanged(sortLocaleAware bool) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_sortLocaleAwareChanged(this.h, (C.bool)(sortLocaleAware))
}
func (this *QSortFilterProxyModel) OnSortLocaleAwareChanged(slot func(sortLocaleAware bool)) {
	C.QSortFilterProxyModel_connect_sortLocaleAwareChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_sortLocaleAwareChanged
func miqt_exec_callback_QSortFilterProxyModel_sortLocaleAwareChanged(cb C.intptr_t, sortLocaleAware C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sortLocaleAware bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(sortLocaleAware)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) SortRoleChanged(sortRole int) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_sortRoleChanged(this.h, (C.int)(sortRole))
}
func (this *QSortFilterProxyModel) OnSortRoleChanged(slot func(sortRole int)) {
	C.QSortFilterProxyModel_connect_sortRoleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_sortRoleChanged
func miqt_exec_callback_QSortFilterProxyModel_sortRoleChanged(cb C.intptr_t, sortRole C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sortRole int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(sortRole)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) FilterRoleChanged(filterRole int) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_filterRoleChanged(this.h, (C.int)(filterRole))
}
func (this *QSortFilterProxyModel) OnFilterRoleChanged(slot func(filterRole int)) {
	C.QSortFilterProxyModel_connect_filterRoleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_filterRoleChanged
func miqt_exec_callback_QSortFilterProxyModel_filterRoleChanged(cb C.intptr_t, filterRole C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filterRole int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(filterRole)

	gofunc(slotval1)
}

func (this *QSortFilterProxyModel) RecursiveFilteringEnabledChanged(recursiveFilteringEnabled bool) {
	defer runtime.KeepAlive(this)
	C.QSortFilterProxyModel_recursiveFilteringEnabledChanged(this.h, (C.bool)(recursiveFilteringEnabled))
}
func (this *QSortFilterProxyModel) OnRecursiveFilteringEnabledChanged(slot func(recursiveFilteringEnabled bool)) {
	C.QSortFilterProxyModel_connect_recursiveFilteringEnabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSortFilterProxyModel_recursiveFilteringEnabledChanged
func miqt_exec_callback_QSortFilterProxyModel_recursiveFilteringEnabledChanged(cb C.intptr_t, recursiveFilteringEnabled C.bool) {
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
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSortFilterProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSortFilterProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSortFilterProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSortFilterProxyModel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// FilterChanged can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) FilterChanged() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_filterChanged(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InvalidateFilter can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) InvalidateFilter() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_invalidateFilter(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ResetInternalData can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) ResetInternalData() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_resetInternalData(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CreateIndex can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) CreateIndex(row int, column int) QModelIndex {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_goptr := newQModelIndex(C.QSortFilterProxyModel_protectedbase_createIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EncodeData can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) EncodeData(indexes []QModelIndex, stream *QDataStream) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(indexes)
	defer runtime.KeepAlive(stream)
	indexes_CArray_ptr := (**C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray_ptr))
	indexes_CArray := unsafe.Slice(indexes_CArray_ptr, len(indexes))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray_ptr)}

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_encodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), indexes_ma, stream.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DecodeData can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) DecodeData(row int, column int, parent *QModelIndex, stream *QDataStream) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	defer runtime.KeepAlive(stream)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSortFilterProxyModel_protectedbase_decodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer(), stream.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginInsertRows can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) BeginInsertRows(parent *QModelIndex, first int, last int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_beginInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertRows can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) EndInsertRows() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_endInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveRows can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) BeginRemoveRows(parent *QModelIndex, first int, last int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_beginRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveRows can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) EndRemoveRows() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_endRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveRows can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) BeginMoveRows(sourceParent *QModelIndex, sourceFirst int, sourceLast int, destinationParent *QModelIndex, destinationRow int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSortFilterProxyModel_protectedbase_beginMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceFirst), (C.int)(sourceLast), destinationParent.cPointer(), (C.int)(destinationRow)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveRows can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) EndMoveRows() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_endMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginInsertColumns can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) BeginInsertColumns(parent *QModelIndex, first int, last int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_beginInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertColumns can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) EndInsertColumns() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_endInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveColumns can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) BeginRemoveColumns(parent *QModelIndex, first int, last int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_beginRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveColumns can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) EndRemoveColumns() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_endRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveColumns can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) BeginMoveColumns(sourceParent *QModelIndex, sourceFirst int, sourceLast int, destinationParent *QModelIndex, destinationColumn int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSortFilterProxyModel_protectedbase_beginMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceFirst), (C.int)(sourceLast), destinationParent.cPointer(), (C.int)(destinationColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveColumns can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) EndMoveColumns() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_endMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginResetModel can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) BeginResetModel() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_beginResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndResetModel can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) EndResetModel() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_endResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndex can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) ChangePersistentIndex(from *QModelIndex, to *QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(from)
	defer runtime.KeepAlive(to)

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_changePersistentIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), from.cPointer(), to.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndexList can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) ChangePersistentIndexList(from []QModelIndex, to []QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(from)
	defer runtime.KeepAlive(to)
	from_CArray_ptr := (**C.QModelIndex)(C.malloc(C.size_t(8 * len(from))))
	defer C.free(unsafe.Pointer(from_CArray_ptr))
	from_CArray := unsafe.Slice(from_CArray_ptr, len(from))
	for i := range from {
		from_CArray[i] = from[i].cPointer()
	}
	from_ma := C.struct_miqt_array{len: C.size_t(len(from)), data: unsafe.Pointer(from_CArray_ptr)}
	to_CArray_ptr := (**C.QModelIndex)(C.malloc(C.size_t(8 * len(to))))
	defer C.free(unsafe.Pointer(to_CArray_ptr))
	to_CArray := unsafe.Slice(to_CArray_ptr, len(to))
	for i := range to {
		to_CArray[i] = to[i].cPointer()
	}
	to_ma := C.struct_miqt_array{len: C.size_t(len(to)), data: unsafe.Pointer(to_CArray_ptr)}

	var _dynamic_cast_ok C.bool = false
	C.QSortFilterProxyModel_protectedbase_changePersistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h), from_ma, to_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PersistentIndexList can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) PersistentIndexList() []QModelIndex {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_protectedbase_persistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := unsafe.Slice((**C.QModelIndex)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QSortFilterProxyModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSortFilterProxyModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSortFilterProxyModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSortFilterProxyModel that was directly constructed.
func (this *QSortFilterProxyModel) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSortFilterProxyModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSortFilterProxyModel) callVirtualBase_SetSourceModel(sourceModel *QAbstractItemModel) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceModel)

	C.QSortFilterProxyModel_virtualbase_setSourceModel(unsafe.Pointer(this.h), sourceModel.cPointer())

}
func (this *QSortFilterProxyModel) OnSetSourceModel(slot func(super func(sourceModel *QAbstractItemModel), sourceModel *QAbstractItemModel)) {
	ok := C.QSortFilterProxyModel_override_virtual_setSourceModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_setSourceModel
func miqt_exec_callback_QSortFilterProxyModel_setSourceModel(self *C.QSortFilterProxyModel, cb C.intptr_t, sourceModel *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceModel *QAbstractItemModel), sourceModel *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(sourceModel)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SetSourceModel, slotval1)

}

func (this *QSortFilterProxyModel) callVirtualBase_MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(proxyIndex)

	_goptr := newQModelIndex(C.QSortFilterProxyModel_virtualbase_mapToSource(unsafe.Pointer(this.h), proxyIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnMapToSource(slot func(super func(proxyIndex *QModelIndex) *QModelIndex, proxyIndex *QModelIndex) *QModelIndex) {
	ok := C.QSortFilterProxyModel_override_virtual_mapToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_mapToSource
func miqt_exec_callback_QSortFilterProxyModel_mapToSource(self *C.QSortFilterProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxyIndex *QModelIndex) *QModelIndex, proxyIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(proxyIndex)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MapToSource, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceIndex)

	_goptr := newQModelIndex(C.QSortFilterProxyModel_virtualbase_mapFromSource(unsafe.Pointer(this.h), sourceIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnMapFromSource(slot func(super func(sourceIndex *QModelIndex) *QModelIndex, sourceIndex *QModelIndex) *QModelIndex) {
	ok := C.QSortFilterProxyModel_override_virtual_mapFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_mapFromSource
func miqt_exec_callback_QSortFilterProxyModel_mapFromSource(self *C.QSortFilterProxyModel, cb C.intptr_t, sourceIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceIndex *QModelIndex) *QModelIndex, sourceIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(sourceIndex)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MapFromSource, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_MapSelectionToSource(proxySelection *QItemSelection) *QItemSelection {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(proxySelection)

	_goptr := newQItemSelection(C.QSortFilterProxyModel_virtualbase_mapSelectionToSource(unsafe.Pointer(this.h), proxySelection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnMapSelectionToSource(slot func(super func(proxySelection *QItemSelection) *QItemSelection, proxySelection *QItemSelection) *QItemSelection) {
	ok := C.QSortFilterProxyModel_override_virtual_mapSelectionToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_mapSelectionToSource
func miqt_exec_callback_QSortFilterProxyModel_mapSelectionToSource(self *C.QSortFilterProxyModel, cb C.intptr_t, proxySelection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxySelection *QItemSelection) *QItemSelection, proxySelection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(proxySelection)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MapSelectionToSource, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QItemSelection(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_MapSelectionFromSource(sourceSelection *QItemSelection) *QItemSelection {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceSelection)

	_goptr := newQItemSelection(C.QSortFilterProxyModel_virtualbase_mapSelectionFromSource(unsafe.Pointer(this.h), sourceSelection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnMapSelectionFromSource(slot func(super func(sourceSelection *QItemSelection) *QItemSelection, sourceSelection *QItemSelection) *QItemSelection) {
	ok := C.QSortFilterProxyModel_override_virtual_mapSelectionFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_mapSelectionFromSource
func miqt_exec_callback_QSortFilterProxyModel_mapSelectionFromSource(self *C.QSortFilterProxyModel, cb C.intptr_t, sourceSelection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceSelection *QItemSelection) *QItemSelection, sourceSelection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(sourceSelection)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MapSelectionFromSource, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QItemSelection(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_FilterAcceptsRow(source_row int, source_parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(source_parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_filterAcceptsRow(unsafe.Pointer(this.h), (C.int)(source_row), source_parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnFilterAcceptsRow(slot func(super func(source_row int, source_parent *QModelIndex) bool, source_row int, source_parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_filterAcceptsRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_filterAcceptsRow
func miqt_exec_callback_QSortFilterProxyModel_filterAcceptsRow(self *C.QSortFilterProxyModel, cb C.intptr_t, source_row C.int, source_parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source_row int, source_parent *QModelIndex) bool, source_row int, source_parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(source_row)

	slotval2 := newQModelIndex(source_parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_FilterAcceptsRow, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_FilterAcceptsColumn(source_column int, source_parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(source_parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_filterAcceptsColumn(unsafe.Pointer(this.h), (C.int)(source_column), source_parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnFilterAcceptsColumn(slot func(super func(source_column int, source_parent *QModelIndex) bool, source_column int, source_parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_filterAcceptsColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_filterAcceptsColumn
func miqt_exec_callback_QSortFilterProxyModel_filterAcceptsColumn(self *C.QSortFilterProxyModel, cb C.intptr_t, source_column C.int, source_parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source_column int, source_parent *QModelIndex) bool, source_column int, source_parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(source_column)

	slotval2 := newQModelIndex(source_parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_FilterAcceptsColumn, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_LessThan(source_left *QModelIndex, source_right *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(source_left)
	defer runtime.KeepAlive(source_right)

	return (bool)(C.QSortFilterProxyModel_virtualbase_lessThan(unsafe.Pointer(this.h), source_left.cPointer(), source_right.cPointer()))

}
func (this *QSortFilterProxyModel) OnLessThan(slot func(super func(source_left *QModelIndex, source_right *QModelIndex) bool, source_left *QModelIndex, source_right *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_lessThan(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_lessThan
func miqt_exec_callback_QSortFilterProxyModel_lessThan(self *C.QSortFilterProxyModel, cb C.intptr_t, source_left *C.QModelIndex, source_right *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source_left *QModelIndex, source_right *QModelIndex) bool, source_left *QModelIndex, source_right *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(source_left)

	slotval2 := newQModelIndex(source_right)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_LessThan, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Index(row int, column int, parent *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	_goptr := newQModelIndex(C.QSortFilterProxyModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnIndex(slot func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex) {
	ok := C.QSortFilterProxyModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_index
func miqt_exec_callback_QSortFilterProxyModel_index(self *C.QSortFilterProxyModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_Parent(child *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(child)

	_goptr := newQModelIndex(C.QSortFilterProxyModel_virtualbase_parent(unsafe.Pointer(this.h), child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnParent(slot func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex) {
	ok := C.QSortFilterProxyModel_override_virtual_parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_parent
func miqt_exec_callback_QSortFilterProxyModel_parent(self *C.QSortFilterProxyModel, cb C.intptr_t, child *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(child)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Parent, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(idx)

	_goptr := newQModelIndex(C.QSortFilterProxyModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnSibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	ok := C.QSortFilterProxyModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_sibling
func miqt_exec_callback_QSortFilterProxyModel_sibling(self *C.QSortFilterProxyModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(idx)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_RowCount(parent *QModelIndex) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (int)(C.QSortFilterProxyModel_virtualbase_rowCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnRowCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QSortFilterProxyModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_rowCount
func miqt_exec_callback_QSortFilterProxyModel_rowCount(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_ColumnCount(parent *QModelIndex) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (int)(C.QSortFilterProxyModel_virtualbase_columnCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnColumnCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QSortFilterProxyModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_columnCount
func miqt_exec_callback_QSortFilterProxyModel_columnCount(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_HasChildren(parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_hasChildren(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnHasChildren(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_hasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_hasChildren
func miqt_exec_callback_QSortFilterProxyModel_hasChildren(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Data(index *QModelIndex, role int) *QVariant {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	_goptr := newQVariant(C.QSortFilterProxyModel_virtualbase_data(unsafe.Pointer(this.h), index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnData(slot func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant) {
	ok := C.QSortFilterProxyModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_data
func miqt_exec_callback_QSortFilterProxyModel_data(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Data, slotval1, slotval2)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QVariant(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	defer runtime.KeepAlive(value)

	return (bool)(C.QSortFilterProxyModel_virtualbase_setData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QSortFilterProxyModel) OnSetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_setData
func miqt_exec_callback_QSortFilterProxyModel_setData(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQVariant(value)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {
	defer runtime.KeepAlive(this)

	_goptr := newQVariant(C.QSortFilterProxyModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnHeaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	ok := C.QSortFilterProxyModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_headerData
func miqt_exec_callback_QSortFilterProxyModel_headerData(self *C.QSortFilterProxyModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QVariant(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)

	return (bool)(C.QSortFilterProxyModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QSortFilterProxyModel) OnSetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_setHeaderData
func miqt_exec_callback_QSortFilterProxyModel_setHeaderData(self *C.QSortFilterProxyModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := newQVariant(value)

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(indexes)
	indexes_CArray_ptr := (**C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray_ptr))
	indexes_CArray := unsafe.Slice(indexes_CArray_ptr, len(indexes))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray_ptr)}

	return newQMimeData(C.QSortFilterProxyModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma))

}
func (this *QSortFilterProxyModel) OnMimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	ok := C.QSortFilterProxyModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_mimeData
func miqt_exec_callback_QSortFilterProxyModel_mimeData(self *C.QSortFilterProxyModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]QModelIndex, int(indexes_ma.len))
	indexes_outCast := unsafe.Slice((**C.QModelIndex)(unsafe.Pointer(indexes_ma.data)), int(indexes_ma.len))
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_lv_goptr := newQModelIndex(indexes_outCast[i])
		indexes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		indexes_ret[i] = *indexes_lv_goptr
	}
	slotval1 := indexes_ret

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MimeData, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

func (this *QSortFilterProxyModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_dropMimeData
func miqt_exec_callback_QSortFilterProxyModel_dropMimeData(self *C.QSortFilterProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnInsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_insertRows
func miqt_exec_callback_QSortFilterProxyModel_insertRows(self *C.QSortFilterProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnInsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_insertColumns
func miqt_exec_callback_QSortFilterProxyModel_insertColumns(self *C.QSortFilterProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnRemoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_removeRows
func miqt_exec_callback_QSortFilterProxyModel_removeRows(self *C.QSortFilterProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnRemoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_removeColumns
func miqt_exec_callback_QSortFilterProxyModel_removeColumns(self *C.QSortFilterProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_FetchMore(parent *QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	C.QSortFilterProxyModel_virtualbase_fetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QSortFilterProxyModel) OnFetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	ok := C.QSortFilterProxyModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_fetchMore
func miqt_exec_callback_QSortFilterProxyModel_fetchMore(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QSortFilterProxyModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnCanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_canFetchMore
func miqt_exec_callback_QSortFilterProxyModel_canFetchMore(self *C.QSortFilterProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	return (ItemFlag)(C.QSortFilterProxyModel_virtualbase_flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QSortFilterProxyModel) OnFlags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	ok := C.QSortFilterProxyModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_flags
func miqt_exec_callback_QSortFilterProxyModel_flags(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	_goptr := newQModelIndex(C.QSortFilterProxyModel_virtualbase_buddy(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnBuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QSortFilterProxyModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_buddy
func miqt_exec_callback_QSortFilterProxyModel_buddy(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Buddy, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(start)
	defer runtime.KeepAlive(value)

	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_virtualbase_match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := unsafe.Slice((**C.QModelIndex)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QSortFilterProxyModel) OnMatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	ok := C.QSortFilterProxyModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_match
func miqt_exec_callback_QSortFilterProxyModel_match(self *C.QSortFilterProxyModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
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

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	defer runtime.KeepAlive(virtualReturn)
	virtualReturn_CArray_ptr := (**C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_CArray := unsafe.Slice(virtualReturn_CArray_ptr, len(virtualReturn))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = C.QSortFilterProxyModel_virtualreturncopy_QModelIndex(virtualReturn[i].cPointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray_ptr)}

	return virtualReturn_ma

}

func (this *QSortFilterProxyModel) callVirtualBase_Span(index *QModelIndex) *QSize {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	_goptr := newQSize(C.QSortFilterProxyModel_virtualbase_span(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSortFilterProxyModel) OnSpan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	ok := C.QSortFilterProxyModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_span
func miqt_exec_callback_QSortFilterProxyModel_span(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Span, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QSortFilterProxyModel_virtualreturncopy_QSize(virtualReturn.cPointer())

}

func (this *QSortFilterProxyModel) callVirtualBase_Sort(column int, order SortOrder) {
	defer runtime.KeepAlive(this)

	C.QSortFilterProxyModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QSortFilterProxyModel) OnSort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	ok := C.QSortFilterProxyModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_sort
func miqt_exec_callback_QSortFilterProxyModel_sort(self *C.QSortFilterProxyModel, cb C.intptr_t, column C.int, order C.int) {
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
	defer runtime.KeepAlive(this)

	var _ma C.struct_miqt_array = C.QSortFilterProxyModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret

}
func (this *QSortFilterProxyModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QSortFilterProxyModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_mimeTypes
func miqt_exec_callback_QSortFilterProxyModel_mimeTypes(self *C.QSortFilterProxyModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MimeTypes)
	virtualReturn_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	virtualReturn_CArray := unsafe.Slice(virtualReturn_CArray_ptr, len(virtualReturn))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray_ptr)}

	return virtualReturn_ma

}

func (this *QSortFilterProxyModel) callVirtualBase_SupportedDropActions() DropAction {
	defer runtime.KeepAlive(this)

	return (DropAction)(C.QSortFilterProxyModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QSortFilterProxyModel) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QSortFilterProxyModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_supportedDropActions
func miqt_exec_callback_QSortFilterProxyModel_supportedDropActions(self *C.QSortFilterProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Submit() bool {
	defer runtime.KeepAlive(this)

	return (bool)(C.QSortFilterProxyModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QSortFilterProxyModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_submit
func miqt_exec_callback_QSortFilterProxyModel_submit(self *C.QSortFilterProxyModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_Revert() {
	defer runtime.KeepAlive(this)

	C.QSortFilterProxyModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QSortFilterProxyModel) OnRevert(slot func(super func())) {
	ok := C.QSortFilterProxyModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_revert
func miqt_exec_callback_QSortFilterProxyModel_revert(self *C.QSortFilterProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Revert)

}

func (this *QSortFilterProxyModel) callVirtualBase_ItemData(index *QModelIndex) map[int]QVariant {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	var _mm C.struct_miqt_map = C.QSortFilterProxyModel_virtualbase_itemData(unsafe.Pointer(this.h), index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.int)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QSortFilterProxyModel) OnItemData(slot func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant) {
	ok := C.QSortFilterProxyModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_itemData
func miqt_exec_callback_QSortFilterProxyModel_itemData(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_ItemData, slotval1)
	defer runtime.KeepAlive(virtualReturn)
	virtualReturn_Keys_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_Keys_CArray := unsafe.Slice(virtualReturn_Keys_CArray_ptr, len(virtualReturn))
	virtualReturn_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_Values_CArray := unsafe.Slice(virtualReturn_Values_CArray_ptr, len(virtualReturn))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_Values_CArray[virtualReturn_ctr] = C.QSortFilterProxyModel_virtualreturncopy_QVariant(virtualReturn_v.cPointer())
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray_ptr),
		values: unsafe.Pointer(virtualReturn_Values_CArray_ptr),
	}

	return virtualReturn_mm

}

func (this *QSortFilterProxyModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	defer runtime.KeepAlive(roles)
	roles_Keys_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Keys_CArray_ptr))
	roles_Keys_CArray := unsafe.Slice(roles_Keys_CArray_ptr, len(roles))
	roles_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Values_CArray_ptr))
	roles_Values_CArray := unsafe.Slice(roles_Values_CArray_ptr, len(roles))
	roles_ctr := 0
	for roles_k, roles_v := range roles {
		roles_Keys_CArray[roles_ctr] = (C.int)(roles_k)
		roles_Values_CArray[roles_ctr] = roles_v.cPointer()
		roles_ctr++
	}
	roles_mm := C.struct_miqt_map{
		len:    C.size_t(len(roles)),
		keys:   unsafe.Pointer(roles_Keys_CArray_ptr),
		values: unsafe.Pointer(roles_Values_CArray_ptr),
	}

	return (bool)(C.QSortFilterProxyModel_virtualbase_setItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QSortFilterProxyModel) OnSetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_setItemData
func miqt_exec_callback_QSortFilterProxyModel_setItemData(self *C.QSortFilterProxyModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	var roles_mm C.struct_miqt_map = roles
	roles_ret := make(map[int]QVariant, int(roles_mm.len))
	roles_Keys := unsafe.Slice((*C.int)(unsafe.Pointer(roles_mm.keys)), int(roles_mm.len))
	roles_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(roles_mm.values)), int(roles_mm.len))
	for i := 0; i < int(roles_mm.len); i++ {
		roles_entry_Key := (int)(roles_Keys[i])

		roles_mapval_goptr := newQVariant(roles_Values[i])
		roles_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		roles_entry_Value := *roles_mapval_goptr

		roles_ret[roles_entry_Key] = roles_entry_Value
	}
	slotval2 := roles_ret

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QSortFilterProxyModel) OnCanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_canDropMimeData
func miqt_exec_callback_QSortFilterProxyModel_canDropMimeData(self *C.QSortFilterProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_SupportedDragActions() DropAction {
	defer runtime.KeepAlive(this)

	return (DropAction)(C.QSortFilterProxyModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QSortFilterProxyModel) OnSupportedDragActions(slot func(super func() DropAction) DropAction) {
	ok := C.QSortFilterProxyModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_supportedDragActions
func miqt_exec_callback_QSortFilterProxyModel_supportedDragActions(self *C.QSortFilterProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_moveRows(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QSortFilterProxyModel) OnMoveRows(slot func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_moveRows
func miqt_exec_callback_QSortFilterProxyModel_moveRows(self *C.QSortFilterProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)

	return (bool)(C.QSortFilterProxyModel_virtualbase_moveColumns(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QSortFilterProxyModel) OnMoveColumns(slot func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_moveColumns
func miqt_exec_callback_QSortFilterProxyModel_moveColumns(self *C.QSortFilterProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_RoleNames() map[int][]byte {
	defer runtime.KeepAlive(this)

	var _mm C.struct_miqt_map = C.QSortFilterProxyModel_virtualbase_roleNames(unsafe.Pointer(this.h))
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := unsafe.Slice((*C.int)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.values)), int(_mm.len))
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
func (this *QSortFilterProxyModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QSortFilterProxyModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_roleNames
func miqt_exec_callback_QSortFilterProxyModel_roleNames(self *C.QSortFilterProxyModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_RoleNames)
	virtualReturn_Keys_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_Keys_CArray := unsafe.Slice(virtualReturn_Keys_CArray_ptr, len(virtualReturn))
	virtualReturn_Values_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	virtualReturn_Values_CArray := unsafe.Slice(virtualReturn_Values_CArray_ptr, len(virtualReturn))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_v_alias := C.struct_miqt_string{}
		if len(virtualReturn_v) > 0 {
			virtualReturn_v_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn_v[0]))
		} else {
			virtualReturn_v_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		virtualReturn_v_alias.len = C.size_t(len(virtualReturn_v))
		virtualReturn_Values_CArray[virtualReturn_ctr] = virtualReturn_v_alias
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray_ptr),
		values: unsafe.Pointer(virtualReturn_Values_CArray_ptr),
	}

	return virtualReturn_mm

}

func (this *QSortFilterProxyModel) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QSortFilterProxyModel_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSortFilterProxyModel) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_event
func miqt_exec_callback_QSortFilterProxyModel_event(self *C.QSortFilterProxyModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QSortFilterProxyModel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSortFilterProxyModel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSortFilterProxyModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_eventFilter
func miqt_exec_callback_QSortFilterProxyModel_eventFilter(self *C.QSortFilterProxyModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSortFilterProxyModel) callVirtualBase_TimerEvent(event *QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QSortFilterProxyModel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSortFilterProxyModel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSortFilterProxyModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_timerEvent
func miqt_exec_callback_QSortFilterProxyModel_timerEvent(self *C.QSortFilterProxyModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSortFilterProxyModel) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QSortFilterProxyModel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSortFilterProxyModel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSortFilterProxyModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_childEvent
func miqt_exec_callback_QSortFilterProxyModel_childEvent(self *C.QSortFilterProxyModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSortFilterProxyModel) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QSortFilterProxyModel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSortFilterProxyModel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSortFilterProxyModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_customEvent
func miqt_exec_callback_QSortFilterProxyModel_customEvent(self *C.QSortFilterProxyModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSortFilterProxyModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QSortFilterProxyModel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSortFilterProxyModel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSortFilterProxyModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_connectNotify
func miqt_exec_callback_QSortFilterProxyModel_connectNotify(self *C.QSortFilterProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSortFilterProxyModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QSortFilterProxyModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSortFilterProxyModel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSortFilterProxyModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSortFilterProxyModel_disconnectNotify
func miqt_exec_callback_QSortFilterProxyModel_disconnectNotify(self *C.QSortFilterProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSortFilterProxyModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSortFilterProxyModel) Delete() {
	C.QSortFilterProxyModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSortFilterProxyModel) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSortFilterProxyModel_delete((*C.QSortFilterProxyModel)(gc[0]))
	})
	this.miqtSetGC(gc)
}
