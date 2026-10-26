package qt

/*

#include "gen_qstringlistmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStringListModel struct {
	h  *C.QStringListModel
	gc *[1]unsafe.Pointer
	*QAbstractListModel
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStringListModel) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAbstractListModel.miqtSetGC(gc)
}

func (this *QStringListModel) cPointer() *C.QStringListModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringListModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringListModel constructs the type using only CGO pointers.
func newQStringListModel(h *C.QStringListModel) *QStringListModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractListModel *C.QAbstractListModel = nil
	C.QStringListModel_virtbase(h, &outptr_QAbstractListModel)

	return &QStringListModel{h: h,
		QAbstractListModel: newQAbstractListModel(outptr_QAbstractListModel)}
}

// UnsafeNewQStringListModel constructs the type using only unsafe pointers.
func UnsafeNewQStringListModel(h unsafe.Pointer) *QStringListModel {
	return newQStringListModel((*C.QStringListModel)(h))
}

// NewQStringListModel constructs a new QStringListModel object.
func NewQStringListModel() *QStringListModel {

	return newQStringListModel(C.QStringListModel_new())
}

// NewQStringListModel2 constructs a new QStringListModel object.
func NewQStringListModel2(strings []string) *QStringListModel {
	strings_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray_ptr))
	strings_CArray := unsafe.Slice(strings_CArray_ptr, len(strings))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray_ptr)}

	return newQStringListModel(C.QStringListModel_new2(strings_ma))
}

// NewQStringListModel3 constructs a new QStringListModel object.
func NewQStringListModel3(parent *QObject) *QStringListModel {
	defer runtime.KeepAlive(parent)

	return newQStringListModel(C.QStringListModel_new3(parent.cPointer()))
}

// NewQStringListModel4 constructs a new QStringListModel object.
func NewQStringListModel4(strings []string, parent *QObject) *QStringListModel {
	defer runtime.KeepAlive(parent)
	strings_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray_ptr))
	strings_CArray := unsafe.Slice(strings_CArray_ptr, len(strings))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray_ptr)}

	return newQStringListModel(C.QStringListModel_new4(strings_ma, parent.cPointer()))
}

func (this *QStringListModel) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QStringListModel_metaObject(this.h))
}

func (this *QStringListModel) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStringListModel_metacast(this.h, param1_Cstring))
}

func QStringListModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStringListModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStringListModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStringListModel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStringListModel) RowCount(parent *QModelIndex) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (int)(C.QStringListModel_rowCount(this.h, parent.cPointer()))
}

func (this *QStringListModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(idx)
	_goptr := newQModelIndex(C.QStringListModel_sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringListModel) Data(index *QModelIndex, role int) *QVariant {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	_goptr := newQVariant(C.QStringListModel_data(this.h, index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringListModel) SetData(index *QModelIndex, value *QVariant, role int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	defer runtime.KeepAlive(value)
	return (bool)(C.QStringListModel_setData(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QStringListModel) Flags(index *QModelIndex) ItemFlag {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	return (ItemFlag)(C.QStringListModel_flags(this.h, index.cPointer()))
}

func (this *QStringListModel) InsertRows(row int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QStringListModel_insertRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QStringListModel) RemoveRows(row int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return (bool)(C.QStringListModel_removeRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QStringListModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)
	return (bool)(C.QStringListModel_moveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QStringListModel) ItemData(index *QModelIndex) map[int]QVariant {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	var _mm C.struct_miqt_map = C.QStringListModel_itemData(this.h, index.cPointer())
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

func (this *QStringListModel) SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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
	return (bool)(C.QStringListModel_setItemData(this.h, index.cPointer(), roles_mm))
}

func (this *QStringListModel) Sort(column int, order SortOrder) {
	defer runtime.KeepAlive(this)
	C.QStringListModel_sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QStringListModel) StringList() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QStringListModel_stringList(this.h)
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

func (this *QStringListModel) SetStringList(strings []string) {
	defer runtime.KeepAlive(this)
	strings_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray_ptr))
	strings_CArray := unsafe.Slice(strings_CArray_ptr, len(strings))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray_ptr)}
	C.QStringListModel_setStringList(this.h, strings_ma)
}

func (this *QStringListModel) SupportedDropActions() DropAction {
	defer runtime.KeepAlive(this)
	return (DropAction)(C.QStringListModel_supportedDropActions(this.h))
}

func QStringListModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStringListModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStringListModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStringListModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStringListModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStringListModel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStringListModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStringListModel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ResetInternalData can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) ResetInternalData() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_resetInternalData(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CreateIndex can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) CreateIndex(row int, column int) QModelIndex {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_goptr := newQModelIndex(C.QStringListModel_protectedbase_createIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EncodeData can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) EncodeData(indexes []QModelIndex, stream *QDataStream) {
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
	C.QStringListModel_protectedbase_encodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), indexes_ma, stream.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DecodeData can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) DecodeData(row int, column int, parent *QModelIndex, stream *QDataStream) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	defer runtime.KeepAlive(stream)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStringListModel_protectedbase_decodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer(), stream.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginInsertRows can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) BeginInsertRows(parent *QModelIndex, first int, last int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_beginInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertRows can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) EndInsertRows() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_endInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveRows can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) BeginRemoveRows(parent *QModelIndex, first int, last int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_beginRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveRows can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) EndRemoveRows() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_endRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveRows can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) BeginMoveRows(sourceParent *QModelIndex, sourceFirst int, sourceLast int, destinationParent *QModelIndex, destinationRow int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStringListModel_protectedbase_beginMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceFirst), (C.int)(sourceLast), destinationParent.cPointer(), (C.int)(destinationRow)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveRows can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) EndMoveRows() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_endMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginInsertColumns can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) BeginInsertColumns(parent *QModelIndex, first int, last int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_beginInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertColumns can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) EndInsertColumns() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_endInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveColumns can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) BeginRemoveColumns(parent *QModelIndex, first int, last int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_beginRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveColumns can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) EndRemoveColumns() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_endRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveColumns can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) BeginMoveColumns(sourceParent *QModelIndex, sourceFirst int, sourceLast int, destinationParent *QModelIndex, destinationColumn int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStringListModel_protectedbase_beginMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceFirst), (C.int)(sourceLast), destinationParent.cPointer(), (C.int)(destinationColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveColumns can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) EndMoveColumns() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_endMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginResetModel can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) BeginResetModel() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_beginResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndResetModel can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) EndResetModel() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_endResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndex can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) ChangePersistentIndex(from *QModelIndex, to *QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(from)
	defer runtime.KeepAlive(to)

	var _dynamic_cast_ok C.bool = false
	C.QStringListModel_protectedbase_changePersistentIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), from.cPointer(), to.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndexList can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) ChangePersistentIndexList(from []QModelIndex, to []QModelIndex) {
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
	C.QStringListModel_protectedbase_changePersistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h), from_ma, to_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PersistentIndexList can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) PersistentIndexList() []QModelIndex {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QStringListModel_protectedbase_persistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
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

// Sender can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QStringListModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStringListModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStringListModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QStringListModel that was directly constructed.
func (this *QStringListModel) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStringListModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QStringListModel) callVirtualBase_RowCount(parent *QModelIndex) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (int)(C.QStringListModel_virtualbase_rowCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QStringListModel) OnRowCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QStringListModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_rowCount
func miqt_exec_callback_QStringListModel_rowCount(self *C.QStringListModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(idx)

	_goptr := newQModelIndex(C.QStringListModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStringListModel) OnSibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	ok := C.QStringListModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_sibling
func miqt_exec_callback_QStringListModel_sibling(self *C.QStringListModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(idx)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QStringListModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QStringListModel) callVirtualBase_Data(index *QModelIndex, role int) *QVariant {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	_goptr := newQVariant(C.QStringListModel_virtualbase_data(unsafe.Pointer(this.h), index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStringListModel) OnData(slot func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant) {
	ok := C.QStringListModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_data
func miqt_exec_callback_QStringListModel_data(self *C.QStringListModel, cb C.intptr_t, index *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Data, slotval1, slotval2)
	defer runtime.KeepAlive(virtualReturn)

	return C.QStringListModel_virtualreturncopy_QVariant(virtualReturn.cPointer())

}

func (this *QStringListModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	defer runtime.KeepAlive(value)

	return (bool)(C.QStringListModel_virtualbase_setData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QStringListModel) OnSetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	ok := C.QStringListModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_setData
func miqt_exec_callback_QStringListModel_setData(self *C.QStringListModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQVariant(value)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	return (ItemFlag)(C.QStringListModel_virtualbase_flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QStringListModel) OnFlags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	ok := C.QStringListModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_flags
func miqt_exec_callback_QStringListModel_flags(self *C.QStringListModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QStringListModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QStringListModel) OnInsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QStringListModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_insertRows
func miqt_exec_callback_QStringListModel_insertRows(self *C.QStringListModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QStringListModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QStringListModel) OnRemoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QStringListModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_removeRows
func miqt_exec_callback_QStringListModel_removeRows(self *C.QStringListModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)

	return (bool)(C.QStringListModel_virtualbase_moveRows(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QStringListModel) OnMoveRows(slot func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QStringListModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_moveRows
func miqt_exec_callback_QStringListModel_moveRows(self *C.QStringListModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_ItemData(index *QModelIndex) map[int]QVariant {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	var _mm C.struct_miqt_map = C.QStringListModel_virtualbase_itemData(unsafe.Pointer(this.h), index.cPointer())
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
func (this *QStringListModel) OnItemData(slot func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant) {
	ok := C.QStringListModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_itemData
func miqt_exec_callback_QStringListModel_itemData(self *C.QStringListModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_ItemData, slotval1)
	defer runtime.KeepAlive(virtualReturn)
	virtualReturn_Keys_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_Keys_CArray := unsafe.Slice(virtualReturn_Keys_CArray_ptr, len(virtualReturn))
	virtualReturn_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_Values_CArray := unsafe.Slice(virtualReturn_Values_CArray_ptr, len(virtualReturn))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_Values_CArray[virtualReturn_ctr] = C.QStringListModel_virtualreturncopy_QVariant(virtualReturn_v.cPointer())
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray_ptr),
		values: unsafe.Pointer(virtualReturn_Values_CArray_ptr),
	}

	return virtualReturn_mm

}

func (this *QStringListModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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

	return (bool)(C.QStringListModel_virtualbase_setItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QStringListModel) OnSetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	ok := C.QStringListModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_setItemData
func miqt_exec_callback_QStringListModel_setItemData(self *C.QStringListModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
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

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_Sort(column int, order SortOrder) {
	defer runtime.KeepAlive(this)

	C.QStringListModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QStringListModel) OnSort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	ok := C.QStringListModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_sort
func miqt_exec_callback_QStringListModel_sort(self *C.QStringListModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order SortOrder), column int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (SortOrder)(order)

	gofunc((&QStringListModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QStringListModel) callVirtualBase_SupportedDropActions() DropAction {
	defer runtime.KeepAlive(this)

	return (DropAction)(C.QStringListModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QStringListModel) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QStringListModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_supportedDropActions
func miqt_exec_callback_QStringListModel_supportedDropActions(self *C.QStringListModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_Index(row int, column int, parent *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	_goptr := newQModelIndex(C.QStringListModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStringListModel) OnIndex(slot func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex) {
	ok := C.QStringListModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_index
func miqt_exec_callback_QStringListModel_index(self *C.QStringListModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QStringListModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QStringListModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QStringListModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QStringListModel) OnDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QStringListModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_dropMimeData
func miqt_exec_callback_QStringListModel_dropMimeData(self *C.QStringListModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {
	defer runtime.KeepAlive(this)

	_goptr := newQVariant(C.QStringListModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStringListModel) OnHeaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	ok := C.QStringListModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_headerData
func miqt_exec_callback_QStringListModel_headerData(self *C.QStringListModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QStringListModel_virtualreturncopy_QVariant(virtualReturn.cPointer())

}

func (this *QStringListModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)

	return (bool)(C.QStringListModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QStringListModel) OnSetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	ok := C.QStringListModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_setHeaderData
func miqt_exec_callback_QStringListModel_setHeaderData(self *C.QStringListModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := newQVariant(value)

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_MimeTypes() []string {
	defer runtime.KeepAlive(this)

	var _ma C.struct_miqt_array = C.QStringListModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QStringListModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QStringListModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_mimeTypes
func miqt_exec_callback_QStringListModel_mimeTypes(self *C.QStringListModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_MimeTypes)
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

func (this *QStringListModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(indexes)
	indexes_CArray_ptr := (**C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray_ptr))
	indexes_CArray := unsafe.Slice(indexes_CArray_ptr, len(indexes))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray_ptr)}

	return newQMimeData(C.QStringListModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma))

}
func (this *QStringListModel) OnMimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	ok := C.QStringListModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_mimeData
func miqt_exec_callback_QStringListModel_mimeData(self *C.QStringListModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
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

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_MimeData, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

func (this *QStringListModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QStringListModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QStringListModel) OnCanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QStringListModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_canDropMimeData
func miqt_exec_callback_QStringListModel_canDropMimeData(self *C.QStringListModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_SupportedDragActions() DropAction {
	defer runtime.KeepAlive(this)

	return (DropAction)(C.QStringListModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QStringListModel) OnSupportedDragActions(slot func(super func() DropAction) DropAction) {
	ok := C.QStringListModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_supportedDragActions
func miqt_exec_callback_QStringListModel_supportedDragActions(self *C.QStringListModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QStringListModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QStringListModel) OnInsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QStringListModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_insertColumns
func miqt_exec_callback_QStringListModel_insertColumns(self *C.QStringListModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QStringListModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QStringListModel) OnRemoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QStringListModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_removeColumns
func miqt_exec_callback_QStringListModel_removeColumns(self *C.QStringListModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sourceParent)
	defer runtime.KeepAlive(destinationParent)

	return (bool)(C.QStringListModel_virtualbase_moveColumns(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QStringListModel) OnMoveColumns(slot func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QStringListModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_moveColumns
func miqt_exec_callback_QStringListModel_moveColumns(self *C.QStringListModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_FetchMore(parent *QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	C.QStringListModel_virtualbase_fetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QStringListModel) OnFetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	ok := C.QStringListModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_fetchMore
func miqt_exec_callback_QStringListModel_fetchMore(self *C.QStringListModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	gofunc((&QStringListModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QStringListModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)

	return (bool)(C.QStringListModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QStringListModel) OnCanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QStringListModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_canFetchMore
func miqt_exec_callback_QStringListModel_canFetchMore(self *C.QStringListModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	_goptr := newQModelIndex(C.QStringListModel_virtualbase_buddy(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStringListModel) OnBuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QStringListModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_buddy
func miqt_exec_callback_QStringListModel_buddy(self *C.QStringListModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Buddy, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QStringListModel_virtualreturncopy_QModelIndex(virtualReturn.cPointer())

}

func (this *QStringListModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(start)
	defer runtime.KeepAlive(value)

	var _ma C.struct_miqt_array = C.QStringListModel_virtualbase_match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := unsafe.Slice((**C.QModelIndex)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QStringListModel) OnMatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	ok := C.QStringListModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_match
func miqt_exec_callback_QStringListModel_match(self *C.QStringListModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
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

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	defer runtime.KeepAlive(virtualReturn)
	virtualReturn_CArray_ptr := (**C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	virtualReturn_CArray := unsafe.Slice(virtualReturn_CArray_ptr, len(virtualReturn))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = C.QStringListModel_virtualreturncopy_QModelIndex(virtualReturn[i].cPointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray_ptr)}

	return virtualReturn_ma

}

func (this *QStringListModel) callVirtualBase_Span(index *QModelIndex) *QSize {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)

	_goptr := newQSize(C.QStringListModel_virtualbase_span(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStringListModel) OnSpan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	ok := C.QStringListModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_span
func miqt_exec_callback_QStringListModel_span(self *C.QStringListModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Span, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QStringListModel_virtualreturncopy_QSize(virtualReturn.cPointer())

}

func (this *QStringListModel) callVirtualBase_RoleNames() map[int][]byte {
	defer runtime.KeepAlive(this)

	var _mm C.struct_miqt_map = C.QStringListModel_virtualbase_roleNames(unsafe.Pointer(this.h))
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
func (this *QStringListModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QStringListModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_roleNames
func miqt_exec_callback_QStringListModel_roleNames(self *C.QStringListModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_RoleNames)
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

func (this *QStringListModel) callVirtualBase_Submit() bool {
	defer runtime.KeepAlive(this)

	return (bool)(C.QStringListModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QStringListModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QStringListModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_submit
func miqt_exec_callback_QStringListModel_submit(self *C.QStringListModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_Revert() {
	defer runtime.KeepAlive(this)

	C.QStringListModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QStringListModel) OnRevert(slot func(super func())) {
	ok := C.QStringListModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_revert
func miqt_exec_callback_QStringListModel_revert(self *C.QStringListModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QStringListModel{h: self}).callVirtualBase_Revert)

}

func (this *QStringListModel) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QStringListModel_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QStringListModel) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QStringListModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_event
func miqt_exec_callback_QStringListModel_event(self *C.QStringListModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QStringListModel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QStringListModel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QStringListModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_eventFilter
func miqt_exec_callback_QStringListModel_eventFilter(self *C.QStringListModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QStringListModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStringListModel) callVirtualBase_TimerEvent(event *QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QStringListModel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStringListModel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QStringListModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_timerEvent
func miqt_exec_callback_QStringListModel_timerEvent(self *C.QStringListModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QStringListModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QStringListModel) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QStringListModel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStringListModel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QStringListModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_childEvent
func miqt_exec_callback_QStringListModel_childEvent(self *C.QStringListModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QStringListModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QStringListModel) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QStringListModel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStringListModel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStringListModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_customEvent
func miqt_exec_callback_QStringListModel_customEvent(self *C.QStringListModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStringListModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QStringListModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QStringListModel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStringListModel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStringListModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_connectNotify
func miqt_exec_callback_QStringListModel_connectNotify(self *C.QStringListModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStringListModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QStringListModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QStringListModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStringListModel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStringListModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStringListModel_disconnectNotify
func miqt_exec_callback_QStringListModel_disconnectNotify(self *C.QStringListModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStringListModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QStringListModel) Delete() {
	C.QStringListModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStringListModel) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStringListModel_delete((*C.QStringListModel)(gc[0]))
	})
	this.miqtSetGC(gc)
}
