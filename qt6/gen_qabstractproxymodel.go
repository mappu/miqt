package qt6

/*

#include "gen_qabstractproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractProxyModel struct {
	h *C.QAbstractProxyModel
	*QAbstractItemModel
}

func (this *QAbstractProxyModel) cPointer() *C.QAbstractProxyModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractProxyModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractProxyModel constructs the type using only CGO pointers.
func newQAbstractProxyModel(h *C.QAbstractProxyModel) *QAbstractProxyModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemModel *C.QAbstractItemModel = nil
	C.QAbstractProxyModel_virtbase(h, &outptr_QAbstractItemModel)

	return &QAbstractProxyModel{h: h,
		QAbstractItemModel: newQAbstractItemModel(outptr_QAbstractItemModel)}
}

// UnsafeNewQAbstractProxyModel constructs the type using only unsafe pointers.
func UnsafeNewQAbstractProxyModel(h unsafe.Pointer) *QAbstractProxyModel {
	return newQAbstractProxyModel((*C.QAbstractProxyModel)(h))
}

// NewQAbstractProxyModel constructs a new QAbstractProxyModel object.
func NewQAbstractProxyModel() *QAbstractProxyModel {

	return newQAbstractProxyModel(C.QAbstractProxyModel_new())
}

// NewQAbstractProxyModel2 constructs a new QAbstractProxyModel object.
func NewQAbstractProxyModel2(parent *QObject) *QAbstractProxyModel {

	return newQAbstractProxyModel(C.QAbstractProxyModel_new2(parent.cPointer()))
}

func (this *QAbstractProxyModel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractProxyModel_metaObject(this.h))
}

func (this *QAbstractProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractProxyModel_metacast(this.h, param1_Cstring))
}

func QAbstractProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QAbstractProxyModel_setSourceModel(this.h, sourceModel.cPointer())
}

func (this *QAbstractProxyModel) SourceModel() *QAbstractItemModel {
	return newQAbstractItemModel(C.QAbstractProxyModel_sourceModel(this.h))
}

func (this *QAbstractProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QAbstractProxyModel_mapToSource(this.h, proxyIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QAbstractProxyModel_mapFromSource(this.h, sourceIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) MapSelectionToSource(selection *QItemSelection) *QItemSelection {
	_goptr := newQItemSelection(C.QAbstractProxyModel_mapSelectionToSource(this.h, selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) MapSelectionFromSource(selection *QItemSelection) *QItemSelection {
	_goptr := newQItemSelection(C.QAbstractProxyModel_mapSelectionFromSource(this.h, selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) Submit() bool {
	return (bool)(C.QAbstractProxyModel_submit(this.h))
}

func (this *QAbstractProxyModel) Revert() {
	C.QAbstractProxyModel_revert(this.h)
}

func (this *QAbstractProxyModel) Data(proxyIndex *QModelIndex, role int) *QVariant {
	_goptr := newQVariant(C.QAbstractProxyModel_data(this.h, proxyIndex.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_goptr := newQVariant(C.QAbstractProxyModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) ItemData(index *QModelIndex) map[int]QVariant {
	var _mm C.struct_miqt_map = C.QAbstractProxyModel_itemData(this.h, index.cPointer())
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

func (this *QAbstractProxyModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QAbstractProxyModel_flags(this.h, index.cPointer()))
}

func (this *QAbstractProxyModel) SetData(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QAbstractProxyModel_setData(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QAbstractProxyModel) SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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
	return (bool)(C.QAbstractProxyModel_setItemData(this.h, index.cPointer(), roles_mm))
}

func (this *QAbstractProxyModel) SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QAbstractProxyModel_setHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QAbstractProxyModel) ClearItemData(index *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_clearItemData(this.h, index.cPointer()))
}

func (this *QAbstractProxyModel) Buddy(index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QAbstractProxyModel_buddy(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) CanFetchMore(parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_canFetchMore(this.h, parent.cPointer()))
}

func (this *QAbstractProxyModel) FetchMore(parent *QModelIndex) {
	C.QAbstractProxyModel_fetchMore(this.h, parent.cPointer())
}

func (this *QAbstractProxyModel) Sort(column int, order SortOrder) {
	C.QAbstractProxyModel_sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QAbstractProxyModel) Span(index *QModelIndex) *QSize {
	_goptr := newQSize(C.QAbstractProxyModel_span(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) HasChildren(parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_hasChildren(this.h, parent.cPointer()))
}

func (this *QAbstractProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QAbstractProxyModel_sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	return newQMimeData(C.QAbstractProxyModel_mimeData(this.h, indexes_ma))
}

func (this *QAbstractProxyModel) CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_canDropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_dropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractProxyModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QAbstractProxyModel_mimeTypes(this.h)
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

func (this *QAbstractProxyModel) SupportedDragActions() DropAction {
	return (DropAction)(C.QAbstractProxyModel_supportedDragActions(this.h))
}

func (this *QAbstractProxyModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QAbstractProxyModel_supportedDropActions(this.h))
}

func (this *QAbstractProxyModel) RoleNames() map[int][]byte {
	var _mm C.struct_miqt_map = C.QAbstractProxyModel_roleNames(this.h)
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

func QAbstractProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// CreateSourceIndex can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) CreateSourceIndex(row int, col int, internalPtr unsafe.Pointer) QModelIndex {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQModelIndex(C.QAbstractProxyModel_protectedbase_createSourceIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(col), internalPtr))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// CreateIndex can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) CreateIndex(row int, column int) QModelIndex {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQModelIndex(C.QAbstractProxyModel_protectedbase_createIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EncodeData can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) EncodeData(indexes []QModelIndex, stream *QDataStream) {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_encodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), indexes_ma, stream.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DecodeData can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) DecodeData(row int, column int, parent *QModelIndex, stream *QDataStream) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractProxyModel_protectedbase_decodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer(), stream.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginInsertRows can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) BeginInsertRows(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_beginInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertRows can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) EndInsertRows() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_endInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveRows can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) BeginRemoveRows(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_beginRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveRows can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) EndRemoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_endRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveRows can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) BeginMoveRows(sourceParent *QModelIndex, sourceFirst int, sourceLast int, destinationParent *QModelIndex, destinationRow int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractProxyModel_protectedbase_beginMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceFirst), (C.int)(sourceLast), destinationParent.cPointer(), (C.int)(destinationRow)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveRows can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) EndMoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_endMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginInsertColumns can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) BeginInsertColumns(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_beginInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertColumns can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) EndInsertColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_endInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveColumns can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) BeginRemoveColumns(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_beginRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveColumns can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) EndRemoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_endRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveColumns can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) BeginMoveColumns(sourceParent *QModelIndex, sourceFirst int, sourceLast int, destinationParent *QModelIndex, destinationColumn int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractProxyModel_protectedbase_beginMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceFirst), (C.int)(sourceLast), destinationParent.cPointer(), (C.int)(destinationColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveColumns can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) EndMoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_endMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginResetModel can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) BeginResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_beginResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndResetModel can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) EndResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_endResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndex can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) ChangePersistentIndex(from *QModelIndex, to *QModelIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_changePersistentIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), from.cPointer(), to.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndexList can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) ChangePersistentIndexList(from []QModelIndex, to []QModelIndex) {
	from_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(from))))
	defer C.free(unsafe.Pointer(from_CArray))
	for i := range from {
		from_CArray[i] = from[i].cPointer()
	}
	from_ma := C.struct_miqt_array{len: C.size_t(len(from)), data: unsafe.Pointer(from_CArray)}
	to_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(to))))
	defer C.free(unsafe.Pointer(to_CArray))
	for i := range to {
		to_CArray[i] = to[i].cPointer()
	}
	to_ma := C.struct_miqt_array{len: C.size_t(len(to)), data: unsafe.Pointer(to_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QAbstractProxyModel_protectedbase_changePersistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h), from_ma, to_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PersistentIndexList can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) PersistentIndexList() []QModelIndex {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QAbstractProxyModel_protectedbase_persistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
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

// Sender can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QAbstractProxyModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractProxyModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractProxyModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAbstractProxyModel that was directly constructed.
func (this *QAbstractProxyModel) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractProxyModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAbstractProxyModel) callVirtualBase_SetSourceModel(sourceModel *QAbstractItemModel) {

	C.QAbstractProxyModel_virtualbase_setSourceModel(unsafe.Pointer(this.h), sourceModel.cPointer())

}
func (this *QAbstractProxyModel) OnSetSourceModel(slot func(super func(sourceModel *QAbstractItemModel), sourceModel *QAbstractItemModel)) {
	ok := C.QAbstractProxyModel_override_virtual_setSourceModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_setSourceModel
func miqt_exec_callback_QAbstractProxyModel_setSourceModel(self *C.QAbstractProxyModel, cb C.intptr_t, sourceModel *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceModel *QAbstractItemModel), sourceModel *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(sourceModel)

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_SetSourceModel, slotval1)

}
func (this *QAbstractProxyModel) OnMapToSource(slot func(proxyIndex *QModelIndex) *QModelIndex) {
	ok := C.QAbstractProxyModel_override_virtual_mapToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_mapToSource
func miqt_exec_callback_QAbstractProxyModel_mapToSource(self *C.QAbstractProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(proxyIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(proxyIndex)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QAbstractProxyModel) OnMapFromSource(slot func(sourceIndex *QModelIndex) *QModelIndex) {
	ok := C.QAbstractProxyModel_override_virtual_mapFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_mapFromSource
func miqt_exec_callback_QAbstractProxyModel_mapFromSource(self *C.QAbstractProxyModel, cb C.intptr_t, sourceIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(sourceIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(sourceIndex)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_MapSelectionToSource(selection *QItemSelection) *QItemSelection {

	_goptr := newQItemSelection(C.QAbstractProxyModel_virtualbase_mapSelectionToSource(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractProxyModel) OnMapSelectionToSource(slot func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection) {
	ok := C.QAbstractProxyModel_override_virtual_mapSelectionToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_mapSelectionToSource
func miqt_exec_callback_QAbstractProxyModel_mapSelectionToSource(self *C.QAbstractProxyModel, cb C.intptr_t, selection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_MapSelectionToSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_MapSelectionFromSource(selection *QItemSelection) *QItemSelection {

	_goptr := newQItemSelection(C.QAbstractProxyModel_virtualbase_mapSelectionFromSource(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractProxyModel) OnMapSelectionFromSource(slot func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection) {
	ok := C.QAbstractProxyModel_override_virtual_mapSelectionFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_mapSelectionFromSource
func miqt_exec_callback_QAbstractProxyModel_mapSelectionFromSource(self *C.QAbstractProxyModel, cb C.intptr_t, selection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_MapSelectionFromSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_Submit() bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QAbstractProxyModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QAbstractProxyModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_submit
func miqt_exec_callback_QAbstractProxyModel_submit(self *C.QAbstractProxyModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_Revert() {

	C.QAbstractProxyModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QAbstractProxyModel) OnRevert(slot func(super func())) {
	ok := C.QAbstractProxyModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_revert
func miqt_exec_callback_QAbstractProxyModel_revert(self *C.QAbstractProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Revert)

}

func (this *QAbstractProxyModel) callVirtualBase_Data(proxyIndex *QModelIndex, role int) *QVariant {

	_goptr := newQVariant(C.QAbstractProxyModel_virtualbase_data(unsafe.Pointer(this.h), proxyIndex.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractProxyModel) OnData(slot func(super func(proxyIndex *QModelIndex, role int) *QVariant, proxyIndex *QModelIndex, role int) *QVariant) {
	ok := C.QAbstractProxyModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_data
func miqt_exec_callback_QAbstractProxyModel_data(self *C.QAbstractProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxyIndex *QModelIndex, role int) *QVariant, proxyIndex *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(proxyIndex)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {

	_goptr := newQVariant(C.QAbstractProxyModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractProxyModel) OnHeaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	ok := C.QAbstractProxyModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_headerData
func miqt_exec_callback_QAbstractProxyModel_headerData(self *C.QAbstractProxyModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_ItemData(index *QModelIndex) map[int]QVariant {

	var _mm C.struct_miqt_map = C.QAbstractProxyModel_virtualbase_itemData(unsafe.Pointer(this.h), index.cPointer())
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
func (this *QAbstractProxyModel) OnItemData(slot func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant) {
	ok := C.QAbstractProxyModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_itemData
func miqt_exec_callback_QAbstractProxyModel_itemData(self *C.QAbstractProxyModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_ItemData, slotval1)
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

func (this *QAbstractProxyModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {

	return (ItemFlag)(C.QAbstractProxyModel_virtualbase_flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QAbstractProxyModel) OnFlags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	ok := C.QAbstractProxyModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_flags
func miqt_exec_callback_QAbstractProxyModel_flags(self *C.QAbstractProxyModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_setData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QAbstractProxyModel) OnSetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	ok := C.QAbstractProxyModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_setData
func miqt_exec_callback_QAbstractProxyModel_setData(self *C.QAbstractProxyModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQVariant(value)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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

	return (bool)(C.QAbstractProxyModel_virtualbase_setItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QAbstractProxyModel) OnSetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	ok := C.QAbstractProxyModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_setItemData
func miqt_exec_callback_QAbstractProxyModel_setItemData(self *C.QAbstractProxyModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
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

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QAbstractProxyModel) OnSetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	ok := C.QAbstractProxyModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_setHeaderData
func miqt_exec_callback_QAbstractProxyModel_setHeaderData(self *C.QAbstractProxyModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := newQVariant(value)

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_ClearItemData(index *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_clearItemData(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QAbstractProxyModel) OnClearItemData(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_clearItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_clearItemData
func miqt_exec_callback_QAbstractProxyModel_clearItemData(self *C.QAbstractProxyModel, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_ClearItemData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QAbstractProxyModel_virtualbase_buddy(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractProxyModel) OnBuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QAbstractProxyModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_buddy
func miqt_exec_callback_QAbstractProxyModel_buddy(self *C.QAbstractProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Buddy, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QAbstractProxyModel) OnCanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_canFetchMore
func miqt_exec_callback_QAbstractProxyModel_canFetchMore(self *C.QAbstractProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_FetchMore(parent *QModelIndex) {

	C.QAbstractProxyModel_virtualbase_fetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QAbstractProxyModel) OnFetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	ok := C.QAbstractProxyModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_fetchMore
func miqt_exec_callback_QAbstractProxyModel_fetchMore(self *C.QAbstractProxyModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QAbstractProxyModel) callVirtualBase_Sort(column int, order SortOrder) {

	C.QAbstractProxyModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QAbstractProxyModel) OnSort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	ok := C.QAbstractProxyModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_sort
func miqt_exec_callback_QAbstractProxyModel_sort(self *C.QAbstractProxyModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order SortOrder), column int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (SortOrder)(order)

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QAbstractProxyModel) callVirtualBase_Span(index *QModelIndex) *QSize {

	_goptr := newQSize(C.QAbstractProxyModel_virtualbase_span(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractProxyModel) OnSpan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	ok := C.QAbstractProxyModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_span
func miqt_exec_callback_QAbstractProxyModel_span(self *C.QAbstractProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Span, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_HasChildren(parent *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_hasChildren(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QAbstractProxyModel) OnHasChildren(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_hasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_hasChildren
func miqt_exec_callback_QAbstractProxyModel_hasChildren(self *C.QAbstractProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QAbstractProxyModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractProxyModel) OnSibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	ok := C.QAbstractProxyModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_sibling
func miqt_exec_callback_QAbstractProxyModel_sibling(self *C.QAbstractProxyModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(idx)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return newQMimeData(C.QAbstractProxyModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma))

}
func (this *QAbstractProxyModel) OnMimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	ok := C.QAbstractProxyModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_mimeData
func miqt_exec_callback_QAbstractProxyModel_mimeData(self *C.QAbstractProxyModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
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

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractProxyModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QAbstractProxyModel) OnCanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_canDropMimeData
func miqt_exec_callback_QAbstractProxyModel_canDropMimeData(self *C.QAbstractProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QAbstractProxyModel) OnDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_dropMimeData
func miqt_exec_callback_QAbstractProxyModel_dropMimeData(self *C.QAbstractProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QAbstractProxyModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QAbstractProxyModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QAbstractProxyModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_mimeTypes
func miqt_exec_callback_QAbstractProxyModel_mimeTypes(self *C.QAbstractProxyModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_MimeTypes)
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

func (this *QAbstractProxyModel) callVirtualBase_SupportedDragActions() DropAction {

	return (DropAction)(C.QAbstractProxyModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QAbstractProxyModel) OnSupportedDragActions(slot func(super func() DropAction) DropAction) {
	ok := C.QAbstractProxyModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_supportedDragActions
func miqt_exec_callback_QAbstractProxyModel_supportedDragActions(self *C.QAbstractProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QAbstractProxyModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QAbstractProxyModel) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QAbstractProxyModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_supportedDropActions
func miqt_exec_callback_QAbstractProxyModel_supportedDropActions(self *C.QAbstractProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QAbstractProxyModel_virtualbase_roleNames(unsafe.Pointer(this.h))
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
func (this *QAbstractProxyModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QAbstractProxyModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_roleNames
func miqt_exec_callback_QAbstractProxyModel_roleNames(self *C.QAbstractProxyModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_RoleNames)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
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
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}
func (this *QAbstractProxyModel) OnIndex(slot func(row int, column int, parent *QModelIndex) *QModelIndex) {
	ok := C.QAbstractProxyModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_index
func miqt_exec_callback_QAbstractProxyModel_index(self *C.QAbstractProxyModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc(slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}
func (this *QAbstractProxyModel) OnParent(slot func(child *QModelIndex) *QModelIndex) {
	ok := C.QAbstractProxyModel_override_virtual_parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_parent
func miqt_exec_callback_QAbstractProxyModel_parent(self *C.QAbstractProxyModel, cb C.intptr_t, child *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(child *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(child)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QAbstractProxyModel) OnRowCount(slot func(parent *QModelIndex) int) {
	ok := C.QAbstractProxyModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_rowCount
func miqt_exec_callback_QAbstractProxyModel_rowCount(self *C.QAbstractProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *QAbstractProxyModel) OnColumnCount(slot func(parent *QModelIndex) int) {
	ok := C.QAbstractProxyModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_columnCount
func miqt_exec_callback_QAbstractProxyModel_columnCount(self *C.QAbstractProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QAbstractProxyModel) OnInsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_insertRows
func miqt_exec_callback_QAbstractProxyModel_insertRows(self *C.QAbstractProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QAbstractProxyModel) OnInsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_insertColumns
func miqt_exec_callback_QAbstractProxyModel_insertColumns(self *C.QAbstractProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QAbstractProxyModel) OnRemoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_removeRows
func miqt_exec_callback_QAbstractProxyModel_removeRows(self *C.QAbstractProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QAbstractProxyModel) OnRemoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QAbstractProxyModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_removeColumns
func miqt_exec_callback_QAbstractProxyModel_removeColumns(self *C.QAbstractProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_moveRows(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QAbstractProxyModel) OnMoveRows(slot func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QAbstractProxyModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_moveRows
func miqt_exec_callback_QAbstractProxyModel_moveRows(self *C.QAbstractProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_moveColumns(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QAbstractProxyModel) OnMoveColumns(slot func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QAbstractProxyModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_moveColumns
func miqt_exec_callback_QAbstractProxyModel_moveColumns(self *C.QAbstractProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {

	var _ma C.struct_miqt_array = C.QAbstractProxyModel_virtualbase_match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QAbstractProxyModel) OnMatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	ok := C.QAbstractProxyModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_match
func miqt_exec_callback_QAbstractProxyModel_match(self *C.QAbstractProxyModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
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

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QAbstractProxyModel) callVirtualBase_MultiData(index *QModelIndex, roleDataSpan QModelRoleDataSpan) {

	C.QAbstractProxyModel_virtualbase_multiData(unsafe.Pointer(this.h), index.cPointer(), roleDataSpan.cPointer())

}
func (this *QAbstractProxyModel) OnMultiData(slot func(super func(index *QModelIndex, roleDataSpan QModelRoleDataSpan), index *QModelIndex, roleDataSpan QModelRoleDataSpan)) {
	ok := C.QAbstractProxyModel_override_virtual_multiData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_multiData
func miqt_exec_callback_QAbstractProxyModel_multiData(self *C.QAbstractProxyModel, cb C.intptr_t, index *C.QModelIndex, roleDataSpan *C.QModelRoleDataSpan) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, roleDataSpan QModelRoleDataSpan), index *QModelIndex, roleDataSpan QModelRoleDataSpan))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	roleDataSpan_goptr := newQModelRoleDataSpan(roleDataSpan)
	roleDataSpan_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *roleDataSpan_goptr

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_MultiData, slotval1, slotval2)

}

func (this *QAbstractProxyModel) callVirtualBase_ResetInternalData() {

	C.QAbstractProxyModel_virtualbase_resetInternalData(unsafe.Pointer(this.h))

}
func (this *QAbstractProxyModel) OnResetInternalData(slot func(super func())) {
	ok := C.QAbstractProxyModel_override_virtual_resetInternalData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_resetInternalData
func miqt_exec_callback_QAbstractProxyModel_resetInternalData(self *C.QAbstractProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_ResetInternalData)

}

func (this *QAbstractProxyModel) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractProxyModel) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAbstractProxyModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_event
func miqt_exec_callback_QAbstractProxyModel_event(self *C.QAbstractProxyModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractProxyModel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractProxyModel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAbstractProxyModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_eventFilter
func miqt_exec_callback_QAbstractProxyModel_eventFilter(self *C.QAbstractProxyModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractProxyModel) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractProxyModel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractProxyModel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAbstractProxyModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_timerEvent
func miqt_exec_callback_QAbstractProxyModel_timerEvent(self *C.QAbstractProxyModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractProxyModel) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractProxyModel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractProxyModel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractProxyModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_childEvent
func miqt_exec_callback_QAbstractProxyModel_childEvent(self *C.QAbstractProxyModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractProxyModel) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractProxyModel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractProxyModel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractProxyModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_customEvent
func miqt_exec_callback_QAbstractProxyModel_customEvent(self *C.QAbstractProxyModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractProxyModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractProxyModel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractProxyModel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractProxyModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_connectNotify
func miqt_exec_callback_QAbstractProxyModel_connectNotify(self *C.QAbstractProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractProxyModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractProxyModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractProxyModel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractProxyModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractProxyModel_disconnectNotify
func miqt_exec_callback_QAbstractProxyModel_disconnectNotify(self *C.QAbstractProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractProxyModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QAbstractProxyModel) OnSourceModelChanged(slot func()) {
	C.QAbstractProxyModel_connect_sourceModelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractProxyModel_sourceModelChanged
func miqt_exec_callback_QAbstractProxyModel_sourceModelChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QAbstractProxyModel) Delete() {
	C.QAbstractProxyModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
