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
	return newQMetaObject_U(unsafe.Pointer(C.QSortFilterProxyModel_MetaObject(this.h)))
}

func (this *QSortFilterProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSortFilterProxyModel_Metacast(this.h, param1_Cstring)
}

func QSortFilterProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSortFilterProxyModel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSortFilterProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSortFilterProxyModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	C.QSortFilterProxyModel_SetFilterRegExp(this.h, (*C.struct_miqt_string)(pattern_ms))
}

func (this *QSortFilterProxyModel) SetFilterRegExpWithRegExp(regExp *QRegExp) {
	C.QSortFilterProxyModel_SetFilterRegExpWithRegExp(this.h, regExp.cPointer())
}

func (this *QSortFilterProxyModel) SetFilterRegularExpression(pattern string) {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	C.QSortFilterProxyModel_SetFilterRegularExpression(this.h, (*C.struct_miqt_string)(pattern_ms))
}

func (this *QSortFilterProxyModel) SetFilterRegularExpressionWithRegularExpression(regularExpression *QRegularExpression) {
	C.QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(this.h, regularExpression.cPointer())
}

func (this *QSortFilterProxyModel) SetFilterWildcard(pattern string) {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	C.QSortFilterProxyModel_SetFilterWildcard(this.h, (*C.struct_miqt_string)(pattern_ms))
}

func (this *QSortFilterProxyModel) SetFilterFixedString(pattern string) {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	C.QSortFilterProxyModel_SetFilterFixedString(this.h, (*C.struct_miqt_string)(pattern_ms))
}

func (this *QSortFilterProxyModel) Clear() {
	C.QSortFilterProxyModel_Clear(this.h)
}

func (this *QSortFilterProxyModel) Invalidate() {
	C.QSortFilterProxyModel_Invalidate(this.h)
}

func (this *QSortFilterProxyModel) Index(row int, column int) *QModelIndex {
	_ret := C.QSortFilterProxyModel_Index(this.h, (C.int)(row), (C.int)(column))
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

func (this *QSortFilterProxyModel) RowCount() int {
	return (int)(C.QSortFilterProxyModel_RowCount(this.h))
}

func (this *QSortFilterProxyModel) ColumnCount() int {
	return (int)(C.QSortFilterProxyModel_ColumnCount(this.h))
}

func (this *QSortFilterProxyModel) HasChildren() bool {
	return (bool)(C.QSortFilterProxyModel_HasChildren(this.h))
}

func (this *QSortFilterProxyModel) Data(index *QModelIndex) *QVariant {
	_ret := C.QSortFilterProxyModel_Data(this.h, index.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) SetData(index *QModelIndex, value *QVariant) bool {
	return (bool)(C.QSortFilterProxyModel_SetData(this.h, index.cPointer(), value.cPointer()))
}

func (this *QSortFilterProxyModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QSortFilterProxyModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) SetHeaderData(section int, orientation Orientation, value *QVariant) bool {
	return (bool)(C.QSortFilterProxyModel_SetHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer()))
}

func (this *QSortFilterProxyModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := &C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(indexes_ma))
	return newQMimeData_U(unsafe.Pointer(C.QSortFilterProxyModel_MimeData(this.h, indexes_ma)))
}

func (this *QSortFilterProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QSortFilterProxyModel) InsertRows(row int, count int) bool {
	return (bool)(C.QSortFilterProxyModel_InsertRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QSortFilterProxyModel) InsertColumns(column int, count int) bool {
	return (bool)(C.QSortFilterProxyModel_InsertColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QSortFilterProxyModel) RemoveRows(row int, count int) bool {
	return (bool)(C.QSortFilterProxyModel_RemoveRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QSortFilterProxyModel) RemoveColumns(column int, count int) bool {
	return (bool)(C.QSortFilterProxyModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count)))
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

func (this *QSortFilterProxyModel) Match(start *QModelIndex, role int, value *QVariant) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QSortFilterProxyModel_Match(this.h, start.cPointer(), (C.int)(role), value.cPointer())
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSortFilterProxyModel) Span(index *QModelIndex) *QSize {
	_ret := C.QSortFilterProxyModel_Span(this.h, index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) Sort(column int) {
	C.QSortFilterProxyModel_Sort(this.h, (C.int)(column))
}

func (this *QSortFilterProxyModel) MimeTypes() []string {
	var _ma *C.struct_miqt_array = C.QSortFilterProxyModel_MimeTypes(this.h)
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

func (this *QSortFilterProxyModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QSortFilterProxyModel_SupportedDropActions(this.h))
}

func (this *QSortFilterProxyModel) DynamicSortFilterChanged(dynamicSortFilter bool) {
	C.QSortFilterProxyModel_DynamicSortFilterChanged(this.h, (C.bool)(dynamicSortFilter))
}
func (this *QSortFilterProxyModel) OnDynamicSortFilterChanged(slot func(dynamicSortFilter bool)) {
	C.QSortFilterProxyModel_connect_DynamicSortFilterChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSortFilterProxyModel_DynamicSortFilterChanged
func miqt_exec_callback_QSortFilterProxyModel_DynamicSortFilterChanged(cb *C.void, dynamicSortFilter C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(dynamicSortFilter bool))
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
	C.QSortFilterProxyModel_connect_FilterCaseSensitivityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSortFilterProxyModel_FilterCaseSensitivityChanged
func miqt_exec_callback_QSortFilterProxyModel_FilterCaseSensitivityChanged(cb *C.void, filterCaseSensitivity C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(filterCaseSensitivity CaseSensitivity))
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
	C.QSortFilterProxyModel_connect_SortCaseSensitivityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSortFilterProxyModel_SortCaseSensitivityChanged
func miqt_exec_callback_QSortFilterProxyModel_SortCaseSensitivityChanged(cb *C.void, sortCaseSensitivity C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(sortCaseSensitivity CaseSensitivity))
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
	C.QSortFilterProxyModel_connect_SortLocaleAwareChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSortFilterProxyModel_SortLocaleAwareChanged
func miqt_exec_callback_QSortFilterProxyModel_SortLocaleAwareChanged(cb *C.void, sortLocaleAware C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(sortLocaleAware bool))
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
	C.QSortFilterProxyModel_connect_SortRoleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSortFilterProxyModel_SortRoleChanged
func miqt_exec_callback_QSortFilterProxyModel_SortRoleChanged(cb *C.void, sortRole C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(sortRole int))
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
	C.QSortFilterProxyModel_connect_FilterRoleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSortFilterProxyModel_FilterRoleChanged
func miqt_exec_callback_QSortFilterProxyModel_FilterRoleChanged(cb *C.void, filterRole C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(filterRole int))
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
	C.QSortFilterProxyModel_connect_RecursiveFilteringEnabledChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSortFilterProxyModel_RecursiveFilteringEnabledChanged
func miqt_exec_callback_QSortFilterProxyModel_RecursiveFilteringEnabledChanged(cb *C.void, recursiveFilteringEnabled C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(recursiveFilteringEnabled bool))
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
	var _ms *C.struct_miqt_string = C.QSortFilterProxyModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSortFilterProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSortFilterProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSortFilterProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSortFilterProxyModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSortFilterProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSortFilterProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSortFilterProxyModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QSortFilterProxyModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) RowCount1(parent *QModelIndex) int {
	return (int)(C.QSortFilterProxyModel_RowCount1(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) ColumnCount1(parent *QModelIndex) int {
	return (int)(C.QSortFilterProxyModel_ColumnCount1(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) HasChildren1(parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_HasChildren1(this.h, parent.cPointer()))
}

func (this *QSortFilterProxyModel) Data2(index *QModelIndex, role int) *QVariant {
	_ret := C.QSortFilterProxyModel_Data2(this.h, index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QSortFilterProxyModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QSortFilterProxyModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QSortFilterProxyModel_HeaderData3(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSortFilterProxyModel) SetHeaderData4(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QSortFilterProxyModel_SetHeaderData4(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QSortFilterProxyModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QSortFilterProxyModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QSortFilterProxyModel) Match4(start *QModelIndex, role int, value *QVariant, hits int) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QSortFilterProxyModel_Match4(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSortFilterProxyModel) Match5(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QSortFilterProxyModel_Match5(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSortFilterProxyModel) Sort2(column int, order SortOrder) {
	C.QSortFilterProxyModel_Sort2(this.h, (C.int)(column), (C.int)(order))
}

// Delete this object from C++ memory.
func (this *QSortFilterProxyModel) Delete() {
	C.QSortFilterProxyModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSortFilterProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QSortFilterProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
