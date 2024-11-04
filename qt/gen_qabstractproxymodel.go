package qt

/*

#include "gen_qabstractproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQAbstractProxyModel(h *C.QAbstractProxyModel) *QAbstractProxyModel {
	if h == nil {
		return nil
	}
	return &QAbstractProxyModel{h: h, QAbstractItemModel: UnsafeNewQAbstractItemModel(unsafe.Pointer(h))}
}

func UnsafeNewQAbstractProxyModel(h unsafe.Pointer) *QAbstractProxyModel {
	return newQAbstractProxyModel((*C.QAbstractProxyModel)(h))
}

func (this *QAbstractProxyModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractProxyModel_MetaObject(this.h)))
}

func (this *QAbstractProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractProxyModel_Metacast(this.h, param1_Cstring))
}

func QAbstractProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QAbstractProxyModel_SetSourceModel(this.h, sourceModel.cPointer())
}

func (this *QAbstractProxyModel) SourceModel() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QAbstractProxyModel_SourceModel(this.h)))
}

func (this *QAbstractProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_ret := C.QAbstractProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_ret := C.QAbstractProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) Submit() bool {
	return (bool)(C.QAbstractProxyModel_Submit(this.h))
}

func (this *QAbstractProxyModel) Revert() {
	C.QAbstractProxyModel_Revert(this.h)
}

func (this *QAbstractProxyModel) Data(proxyIndex *QModelIndex) *QVariant {
	_ret := C.QAbstractProxyModel_Data(this.h, proxyIndex.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QAbstractProxyModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) ItemData(index *QModelIndex) map[int]QVariant {
	var _mm C.struct_miqt_map = C.QAbstractProxyModel_ItemData(this.h, index.cPointer())
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

func (this *QAbstractProxyModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QAbstractProxyModel_Flags(this.h, index.cPointer()))
}

func (this *QAbstractProxyModel) SetData(index *QModelIndex, value *QVariant) bool {
	return (bool)(C.QAbstractProxyModel_SetData(this.h, index.cPointer(), value.cPointer()))
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
	return (bool)(C.QAbstractProxyModel_SetItemData(this.h, index.cPointer(), roles_mm))
}

func (this *QAbstractProxyModel) SetHeaderData(section int, orientation Orientation, value *QVariant) bool {
	return (bool)(C.QAbstractProxyModel_SetHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer()))
}

func (this *QAbstractProxyModel) Buddy(index *QModelIndex) *QModelIndex {
	_ret := C.QAbstractProxyModel_Buddy(this.h, index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) CanFetchMore(parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_CanFetchMore(this.h, parent.cPointer()))
}

func (this *QAbstractProxyModel) FetchMore(parent *QModelIndex) {
	C.QAbstractProxyModel_FetchMore(this.h, parent.cPointer())
}

func (this *QAbstractProxyModel) Sort(column int) {
	C.QAbstractProxyModel_Sort(this.h, (C.int)(column))
}

func (this *QAbstractProxyModel) Span(index *QModelIndex) *QSize {
	_ret := C.QAbstractProxyModel_Span(this.h, index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) HasChildren() bool {
	return (bool)(C.QAbstractProxyModel_HasChildren(this.h))
}

func (this *QAbstractProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_ret := C.QAbstractProxyModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
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
	return UnsafeNewQMimeData(unsafe.Pointer(C.QAbstractProxyModel_MimeData(this.h, indexes_ma)))
}

func (this *QAbstractProxyModel) CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_CanDropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractProxyModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QAbstractProxyModel_MimeTypes(this.h)
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
	return (DropAction)(C.QAbstractProxyModel_SupportedDragActions(this.h))
}

func (this *QAbstractProxyModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QAbstractProxyModel_SupportedDropActions(this.h))
}

func QAbstractProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractProxyModel) Data2(proxyIndex *QModelIndex, role int) *QVariant {
	_ret := C.QAbstractProxyModel_Data2(this.h, proxyIndex.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QAbstractProxyModel_HeaderData3(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QAbstractProxyModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QAbstractProxyModel) SetHeaderData4(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QAbstractProxyModel_SetHeaderData4(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QAbstractProxyModel) Sort2(column int, order SortOrder) {
	C.QAbstractProxyModel_Sort2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QAbstractProxyModel) HasChildren1(parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_HasChildren1(this.h, parent.cPointer()))
}

// Delete this object from C++ memory.
func (this *QAbstractProxyModel) Delete() {
	C.QAbstractProxyModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
