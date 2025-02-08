package qt

/*

#include "gen_qidentityproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QIdentityProxyModel struct {
	h *C.QIdentityProxyModel
	*QAbstractProxyModel
}

func (this *QIdentityProxyModel) cPointer() *C.QIdentityProxyModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIdentityProxyModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIdentityProxyModel constructs the type using only CGO pointers.
func newQIdentityProxyModel(h *C.QIdentityProxyModel) *QIdentityProxyModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractProxyModel *C.QAbstractProxyModel = nil
	C.QIdentityProxyModel_virtbase(h, &outptr_QAbstractProxyModel)

	return &QIdentityProxyModel{h: h,
		QAbstractProxyModel: newQAbstractProxyModel(outptr_QAbstractProxyModel)}
}

// UnsafeNewQIdentityProxyModel constructs the type using only unsafe pointers.
func UnsafeNewQIdentityProxyModel(h unsafe.Pointer) *QIdentityProxyModel {
	return newQIdentityProxyModel((*C.QIdentityProxyModel)(h))
}

// NewQIdentityProxyModel constructs a new QIdentityProxyModel object.
func NewQIdentityProxyModel() *QIdentityProxyModel {

	return newQIdentityProxyModel(C.QIdentityProxyModel_new())
}

// NewQIdentityProxyModel2 constructs a new QIdentityProxyModel object.
func NewQIdentityProxyModel2(parent *QObject) *QIdentityProxyModel {

	return newQIdentityProxyModel(C.QIdentityProxyModel_new2(parent.cPointer()))
}

func (this *QIdentityProxyModel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QIdentityProxyModel_metaObject(this.h))
}

func (this *QIdentityProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QIdentityProxyModel_metacast(this.h, param1_Cstring))
}

func QIdentityProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIdentityProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIdentityProxyModel) ColumnCount(parent *QModelIndex) int {
	return (int)(C.QIdentityProxyModel_columnCount(this.h, parent.cPointer()))
}

func (this *QIdentityProxyModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QIdentityProxyModel_index(this.h, (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QIdentityProxyModel_mapFromSource(this.h, sourceIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QIdentityProxyModel_mapToSource(this.h, proxyIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) Parent(child *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QIdentityProxyModel_parent(this.h, child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) RowCount(parent *QModelIndex) int {
	return (int)(C.QIdentityProxyModel_rowCount(this.h, parent.cPointer()))
}

func (this *QIdentityProxyModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_goptr := newQVariant(C.QIdentityProxyModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_dropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QIdentityProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QIdentityProxyModel_sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) MapSelectionFromSource(selection *QItemSelection) *QItemSelection {
	_goptr := newQItemSelection(C.QIdentityProxyModel_mapSelectionFromSource(this.h, selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) MapSelectionToSource(selection *QItemSelection) *QItemSelection {
	_goptr := newQItemSelection(C.QIdentityProxyModel_mapSelectionToSource(this.h, selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	var _ma C.struct_miqt_array = C.QIdentityProxyModel_match(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QIdentityProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QIdentityProxyModel_setSourceModel(this.h, sourceModel.cPointer())
}

func (this *QIdentityProxyModel) InsertColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_insertColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QIdentityProxyModel) InsertRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_insertRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QIdentityProxyModel) RemoveColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_removeColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QIdentityProxyModel) RemoveRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_removeRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QIdentityProxyModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QIdentityProxyModel_moveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QIdentityProxyModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QIdentityProxyModel_moveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func QIdentityProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIdentityProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIdentityProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIdentityProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ResetInternalData can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) ResetInternalData() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_resetInternalData(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CreateIndex can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) CreateIndex(row int, column int) QModelIndex {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQModelIndex(C.QIdentityProxyModel_protectedbase_createIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EncodeData can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) EncodeData(indexes []QModelIndex, stream *QDataStream) {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_encodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), indexes_ma, stream.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DecodeData can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) DecodeData(row int, column int, parent *QModelIndex, stream *QDataStream) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QIdentityProxyModel_protectedbase_decodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer(), stream.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginInsertRows can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) BeginInsertRows(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_beginInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertRows can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) EndInsertRows() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_endInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveRows can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) BeginRemoveRows(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_beginRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveRows can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) EndRemoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_endRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveRows can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) BeginMoveRows(sourceParent *QModelIndex, sourceFirst int, sourceLast int, destinationParent *QModelIndex, destinationRow int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QIdentityProxyModel_protectedbase_beginMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceFirst), (C.int)(sourceLast), destinationParent.cPointer(), (C.int)(destinationRow)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveRows can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) EndMoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_endMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginInsertColumns can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) BeginInsertColumns(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_beginInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertColumns can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) EndInsertColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_endInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveColumns can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) BeginRemoveColumns(parent *QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_beginRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveColumns can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) EndRemoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_endRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveColumns can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) BeginMoveColumns(sourceParent *QModelIndex, sourceFirst int, sourceLast int, destinationParent *QModelIndex, destinationColumn int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QIdentityProxyModel_protectedbase_beginMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceFirst), (C.int)(sourceLast), destinationParent.cPointer(), (C.int)(destinationColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveColumns can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) EndMoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_endMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginResetModel can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) BeginResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_beginResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndResetModel can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) EndResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_endResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndex can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) ChangePersistentIndex(from *QModelIndex, to *QModelIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QIdentityProxyModel_protectedbase_changePersistentIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), from.cPointer(), to.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndexList can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) ChangePersistentIndexList(from []QModelIndex, to []QModelIndex) {
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
	C.QIdentityProxyModel_protectedbase_changePersistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h), from_ma, to_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PersistentIndexList can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) PersistentIndexList() []QModelIndex {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QIdentityProxyModel_protectedbase_persistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
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

// Sender can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QIdentityProxyModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QIdentityProxyModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QIdentityProxyModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QIdentityProxyModel that was directly constructed.
func (this *QIdentityProxyModel) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QIdentityProxyModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QIdentityProxyModel) callVirtualBase_ColumnCount(parent *QModelIndex) int {

	return (int)(C.QIdentityProxyModel_virtualbase_columnCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnColumnCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QIdentityProxyModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_columnCount
func miqt_exec_callback_QIdentityProxyModel_columnCount(self *C.QIdentityProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_Index(row int, column int, parent *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QIdentityProxyModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnIndex(slot func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex) {
	ok := C.QIdentityProxyModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_index
func miqt_exec_callback_QIdentityProxyModel_index(self *C.QIdentityProxyModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_MapFromSource(sourceIndex *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QIdentityProxyModel_virtualbase_mapFromSource(unsafe.Pointer(this.h), sourceIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnMapFromSource(slot func(super func(sourceIndex *QModelIndex) *QModelIndex, sourceIndex *QModelIndex) *QModelIndex) {
	ok := C.QIdentityProxyModel_override_virtual_mapFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_mapFromSource
func miqt_exec_callback_QIdentityProxyModel_mapFromSource(self *C.QIdentityProxyModel, cb C.intptr_t, sourceIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceIndex *QModelIndex) *QModelIndex, sourceIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(sourceIndex)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_MapFromSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_MapToSource(proxyIndex *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QIdentityProxyModel_virtualbase_mapToSource(unsafe.Pointer(this.h), proxyIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnMapToSource(slot func(super func(proxyIndex *QModelIndex) *QModelIndex, proxyIndex *QModelIndex) *QModelIndex) {
	ok := C.QIdentityProxyModel_override_virtual_mapToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_mapToSource
func miqt_exec_callback_QIdentityProxyModel_mapToSource(self *C.QIdentityProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxyIndex *QModelIndex) *QModelIndex, proxyIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(proxyIndex)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_MapToSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_Parent(child *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QIdentityProxyModel_virtualbase_parent(unsafe.Pointer(this.h), child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnParent(slot func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex) {
	ok := C.QIdentityProxyModel_override_virtual_parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_parent
func miqt_exec_callback_QIdentityProxyModel_parent(self *C.QIdentityProxyModel, cb C.intptr_t, child *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(child)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Parent, slotval1)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_RowCount(parent *QModelIndex) int {

	return (int)(C.QIdentityProxyModel_virtualbase_rowCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnRowCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QIdentityProxyModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_rowCount
func miqt_exec_callback_QIdentityProxyModel_rowCount(self *C.QIdentityProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {

	_goptr := newQVariant(C.QIdentityProxyModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnHeaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	ok := C.QIdentityProxyModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_headerData
func miqt_exec_callback_QIdentityProxyModel_headerData(self *C.QIdentityProxyModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QIdentityProxyModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_dropMimeData
func miqt_exec_callback_QIdentityProxyModel_dropMimeData(self *C.QIdentityProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QIdentityProxyModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnSibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	ok := C.QIdentityProxyModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_sibling
func miqt_exec_callback_QIdentityProxyModel_sibling(self *C.QIdentityProxyModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(idx)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_MapSelectionFromSource(selection *QItemSelection) *QItemSelection {

	_goptr := newQItemSelection(C.QIdentityProxyModel_virtualbase_mapSelectionFromSource(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnMapSelectionFromSource(slot func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection) {
	ok := C.QIdentityProxyModel_override_virtual_mapSelectionFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_mapSelectionFromSource
func miqt_exec_callback_QIdentityProxyModel_mapSelectionFromSource(self *C.QIdentityProxyModel, cb C.intptr_t, selection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_MapSelectionFromSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_MapSelectionToSource(selection *QItemSelection) *QItemSelection {

	_goptr := newQItemSelection(C.QIdentityProxyModel_virtualbase_mapSelectionToSource(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnMapSelectionToSource(slot func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection) {
	ok := C.QIdentityProxyModel_override_virtual_mapSelectionToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_mapSelectionToSource
func miqt_exec_callback_QIdentityProxyModel_mapSelectionToSource(self *C.QIdentityProxyModel, cb C.intptr_t, selection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_MapSelectionToSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {

	var _ma C.struct_miqt_array = C.QIdentityProxyModel_virtualbase_match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QIdentityProxyModel) OnMatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	ok := C.QIdentityProxyModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_match
func miqt_exec_callback_QIdentityProxyModel_match(self *C.QIdentityProxyModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
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

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QIdentityProxyModel) callVirtualBase_SetSourceModel(sourceModel *QAbstractItemModel) {

	C.QIdentityProxyModel_virtualbase_setSourceModel(unsafe.Pointer(this.h), sourceModel.cPointer())

}
func (this *QIdentityProxyModel) OnSetSourceModel(slot func(super func(sourceModel *QAbstractItemModel), sourceModel *QAbstractItemModel)) {
	ok := C.QIdentityProxyModel_override_virtual_setSourceModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_setSourceModel
func miqt_exec_callback_QIdentityProxyModel_setSourceModel(self *C.QIdentityProxyModel, cb C.intptr_t, sourceModel *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceModel *QAbstractItemModel), sourceModel *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(sourceModel)

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_SetSourceModel, slotval1)

}

func (this *QIdentityProxyModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnInsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QIdentityProxyModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_insertColumns
func miqt_exec_callback_QIdentityProxyModel_insertColumns(self *C.QIdentityProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnInsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QIdentityProxyModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_insertRows
func miqt_exec_callback_QIdentityProxyModel_insertRows(self *C.QIdentityProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnRemoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QIdentityProxyModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_removeColumns
func miqt_exec_callback_QIdentityProxyModel_removeColumns(self *C.QIdentityProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnRemoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QIdentityProxyModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_removeRows
func miqt_exec_callback_QIdentityProxyModel_removeRows(self *C.QIdentityProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_moveRows(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QIdentityProxyModel) OnMoveRows(slot func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QIdentityProxyModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_moveRows
func miqt_exec_callback_QIdentityProxyModel_moveRows(self *C.QIdentityProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_moveColumns(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QIdentityProxyModel) OnMoveColumns(slot func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QIdentityProxyModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_moveColumns
func miqt_exec_callback_QIdentityProxyModel_moveColumns(self *C.QIdentityProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_Submit() bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QIdentityProxyModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QIdentityProxyModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_submit
func miqt_exec_callback_QIdentityProxyModel_submit(self *C.QIdentityProxyModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_Revert() {

	C.QIdentityProxyModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QIdentityProxyModel) OnRevert(slot func(super func())) {
	ok := C.QIdentityProxyModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_revert
func miqt_exec_callback_QIdentityProxyModel_revert(self *C.QIdentityProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Revert)

}

func (this *QIdentityProxyModel) callVirtualBase_Data(proxyIndex *QModelIndex, role int) *QVariant {

	_goptr := newQVariant(C.QIdentityProxyModel_virtualbase_data(unsafe.Pointer(this.h), proxyIndex.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnData(slot func(super func(proxyIndex *QModelIndex, role int) *QVariant, proxyIndex *QModelIndex, role int) *QVariant) {
	ok := C.QIdentityProxyModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_data
func miqt_exec_callback_QIdentityProxyModel_data(self *C.QIdentityProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxyIndex *QModelIndex, role int) *QVariant, proxyIndex *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(proxyIndex)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_ItemData(index *QModelIndex) map[int]QVariant {

	var _mm C.struct_miqt_map = C.QIdentityProxyModel_virtualbase_itemData(unsafe.Pointer(this.h), index.cPointer())
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
func (this *QIdentityProxyModel) OnItemData(slot func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant) {
	ok := C.QIdentityProxyModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_itemData
func miqt_exec_callback_QIdentityProxyModel_itemData(self *C.QIdentityProxyModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_ItemData, slotval1)
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

func (this *QIdentityProxyModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {

	return (ItemFlag)(C.QIdentityProxyModel_virtualbase_flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QIdentityProxyModel) OnFlags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	ok := C.QIdentityProxyModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_flags
func miqt_exec_callback_QIdentityProxyModel_flags(self *C.QIdentityProxyModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_setData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QIdentityProxyModel) OnSetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	ok := C.QIdentityProxyModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_setData
func miqt_exec_callback_QIdentityProxyModel_setData(self *C.QIdentityProxyModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQVariant(value)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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

	return (bool)(C.QIdentityProxyModel_virtualbase_setItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QIdentityProxyModel) OnSetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	ok := C.QIdentityProxyModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_setItemData
func miqt_exec_callback_QIdentityProxyModel_setItemData(self *C.QIdentityProxyModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
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

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QIdentityProxyModel) OnSetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	ok := C.QIdentityProxyModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_setHeaderData
func miqt_exec_callback_QIdentityProxyModel_setHeaderData(self *C.QIdentityProxyModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := newQVariant(value)

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QIdentityProxyModel_virtualbase_buddy(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnBuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QIdentityProxyModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_buddy
func miqt_exec_callback_QIdentityProxyModel_buddy(self *C.QIdentityProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Buddy, slotval1)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnCanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QIdentityProxyModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_canFetchMore
func miqt_exec_callback_QIdentityProxyModel_canFetchMore(self *C.QIdentityProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_FetchMore(parent *QModelIndex) {

	C.QIdentityProxyModel_virtualbase_fetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QIdentityProxyModel) OnFetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	ok := C.QIdentityProxyModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_fetchMore
func miqt_exec_callback_QIdentityProxyModel_fetchMore(self *C.QIdentityProxyModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QIdentityProxyModel) callVirtualBase_Sort(column int, order SortOrder) {

	C.QIdentityProxyModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QIdentityProxyModel) OnSort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	ok := C.QIdentityProxyModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_sort
func miqt_exec_callback_QIdentityProxyModel_sort(self *C.QIdentityProxyModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order SortOrder), column int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (SortOrder)(order)

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QIdentityProxyModel) callVirtualBase_Span(index *QModelIndex) *QSize {

	_goptr := newQSize(C.QIdentityProxyModel_virtualbase_span(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QIdentityProxyModel) OnSpan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	ok := C.QIdentityProxyModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_span
func miqt_exec_callback_QIdentityProxyModel_span(self *C.QIdentityProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Span, slotval1)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_HasChildren(parent *QModelIndex) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_hasChildren(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnHasChildren(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QIdentityProxyModel_override_virtual_hasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_hasChildren
func miqt_exec_callback_QIdentityProxyModel_hasChildren(self *C.QIdentityProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return newQMimeData(C.QIdentityProxyModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma))

}
func (this *QIdentityProxyModel) OnMimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	ok := C.QIdentityProxyModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_mimeData
func miqt_exec_callback_QIdentityProxyModel_mimeData(self *C.QIdentityProxyModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
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

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QIdentityProxyModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QIdentityProxyModel) OnCanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QIdentityProxyModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_canDropMimeData
func miqt_exec_callback_QIdentityProxyModel_canDropMimeData(self *C.QIdentityProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QIdentityProxyModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QIdentityProxyModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QIdentityProxyModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_mimeTypes
func miqt_exec_callback_QIdentityProxyModel_mimeTypes(self *C.QIdentityProxyModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_MimeTypes)
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

func (this *QIdentityProxyModel) callVirtualBase_SupportedDragActions() DropAction {

	return (DropAction)(C.QIdentityProxyModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QIdentityProxyModel) OnSupportedDragActions(slot func(super func() DropAction) DropAction) {
	ok := C.QIdentityProxyModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_supportedDragActions
func miqt_exec_callback_QIdentityProxyModel_supportedDragActions(self *C.QIdentityProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QIdentityProxyModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QIdentityProxyModel) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QIdentityProxyModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_supportedDropActions
func miqt_exec_callback_QIdentityProxyModel_supportedDropActions(self *C.QIdentityProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QIdentityProxyModel_virtualbase_roleNames(unsafe.Pointer(this.h))
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
func (this *QIdentityProxyModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QIdentityProxyModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_roleNames
func miqt_exec_callback_QIdentityProxyModel_roleNames(self *C.QIdentityProxyModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_RoleNames)
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

func (this *QIdentityProxyModel) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QIdentityProxyModel) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QIdentityProxyModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_event
func miqt_exec_callback_QIdentityProxyModel_event(self *C.QIdentityProxyModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QIdentityProxyModel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QIdentityProxyModel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QIdentityProxyModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_eventFilter
func miqt_exec_callback_QIdentityProxyModel_eventFilter(self *C.QIdentityProxyModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QIdentityProxyModel) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QIdentityProxyModel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIdentityProxyModel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QIdentityProxyModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_timerEvent
func miqt_exec_callback_QIdentityProxyModel_timerEvent(self *C.QIdentityProxyModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QIdentityProxyModel) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QIdentityProxyModel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIdentityProxyModel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QIdentityProxyModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_childEvent
func miqt_exec_callback_QIdentityProxyModel_childEvent(self *C.QIdentityProxyModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QIdentityProxyModel) callVirtualBase_CustomEvent(event *QEvent) {

	C.QIdentityProxyModel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIdentityProxyModel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QIdentityProxyModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_customEvent
func miqt_exec_callback_QIdentityProxyModel_customEvent(self *C.QIdentityProxyModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QIdentityProxyModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QIdentityProxyModel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIdentityProxyModel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QIdentityProxyModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_connectNotify
func miqt_exec_callback_QIdentityProxyModel_connectNotify(self *C.QIdentityProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QIdentityProxyModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QIdentityProxyModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIdentityProxyModel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QIdentityProxyModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIdentityProxyModel_disconnectNotify
func miqt_exec_callback_QIdentityProxyModel_disconnectNotify(self *C.QIdentityProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QIdentityProxyModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QIdentityProxyModel) Delete() {
	C.QIdentityProxyModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIdentityProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QIdentityProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
