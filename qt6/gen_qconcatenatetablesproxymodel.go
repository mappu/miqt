package qt6

/*

#include "gen_qconcatenatetablesproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QConcatenateTablesProxyModel struct {
	h *C.QConcatenateTablesProxyModel
	*QAbstractItemModel
}

func (this *QConcatenateTablesProxyModel) cPointer() *C.QConcatenateTablesProxyModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QConcatenateTablesProxyModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQConcatenateTablesProxyModel(h *C.QConcatenateTablesProxyModel) *QConcatenateTablesProxyModel {
	if h == nil {
		return nil
	}
	return &QConcatenateTablesProxyModel{h: h, QAbstractItemModel: UnsafeNewQAbstractItemModel(unsafe.Pointer(h))}
}

func UnsafeNewQConcatenateTablesProxyModel(h unsafe.Pointer) *QConcatenateTablesProxyModel {
	return newQConcatenateTablesProxyModel((*C.QConcatenateTablesProxyModel)(h))
}

// NewQConcatenateTablesProxyModel constructs a new QConcatenateTablesProxyModel object.
func NewQConcatenateTablesProxyModel() *QConcatenateTablesProxyModel {
	ret := C.QConcatenateTablesProxyModel_new()
	return newQConcatenateTablesProxyModel(ret)
}

// NewQConcatenateTablesProxyModel2 constructs a new QConcatenateTablesProxyModel object.
func NewQConcatenateTablesProxyModel2(parent *QObject) *QConcatenateTablesProxyModel {
	ret := C.QConcatenateTablesProxyModel_new2(parent.cPointer())
	return newQConcatenateTablesProxyModel(ret)
}

func (this *QConcatenateTablesProxyModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QConcatenateTablesProxyModel_MetaObject(this.h)))
}

func (this *QConcatenateTablesProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QConcatenateTablesProxyModel_Metacast(this.h, param1_Cstring))
}

func QConcatenateTablesProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QConcatenateTablesProxyModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QConcatenateTablesProxyModel) SourceModels() []*QAbstractItemModel {
	var _ma C.struct_miqt_array = C.QConcatenateTablesProxyModel_SourceModels(this.h)
	_ret := make([]*QAbstractItemModel, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractItemModel)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQAbstractItemModel(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QConcatenateTablesProxyModel) AddSourceModel(sourceModel *QAbstractItemModel) {
	C.QConcatenateTablesProxyModel_AddSourceModel(this.h, sourceModel.cPointer())
}

func (this *QConcatenateTablesProxyModel) RemoveSourceModel(sourceModel *QAbstractItemModel) {
	C.QConcatenateTablesProxyModel_RemoveSourceModel(this.h, sourceModel.cPointer())
}

func (this *QConcatenateTablesProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_ret := C.QConcatenateTablesProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_ret := C.QConcatenateTablesProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) Data(index *QModelIndex) *QVariant {
	_ret := C.QConcatenateTablesProxyModel_Data(this.h, index.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) SetData(index *QModelIndex, value *QVariant) bool {
	return (bool)(C.QConcatenateTablesProxyModel_SetData(this.h, index.cPointer(), value.cPointer()))
}

func (this *QConcatenateTablesProxyModel) ItemData(proxyIndex *QModelIndex) map[int]QVariant {
	var _mm C.struct_miqt_map = C.QConcatenateTablesProxyModel_ItemData(this.h, proxyIndex.cPointer())
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

func (this *QConcatenateTablesProxyModel) SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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
	return (bool)(C.QConcatenateTablesProxyModel_SetItemData(this.h, index.cPointer(), roles_mm))
}

func (this *QConcatenateTablesProxyModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QConcatenateTablesProxyModel_Flags(this.h, index.cPointer()))
}

func (this *QConcatenateTablesProxyModel) Index(row int, column int) *QModelIndex {
	_ret := C.QConcatenateTablesProxyModel_Index(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) Parent(index *QModelIndex) *QModelIndex {
	_ret := C.QConcatenateTablesProxyModel_Parent(this.h, index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) RowCount() int {
	return (int)(C.QConcatenateTablesProxyModel_RowCount(this.h))
}

func (this *QConcatenateTablesProxyModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QConcatenateTablesProxyModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) ColumnCount() int {
	return (int)(C.QConcatenateTablesProxyModel_ColumnCount(this.h))
}

func (this *QConcatenateTablesProxyModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QConcatenateTablesProxyModel_MimeTypes(this.h)
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

func (this *QConcatenateTablesProxyModel) MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	return UnsafeNewQMimeData(unsafe.Pointer(C.QConcatenateTablesProxyModel_MimeData(this.h, indexes_ma)))
}

func (this *QConcatenateTablesProxyModel) CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QConcatenateTablesProxyModel_CanDropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QConcatenateTablesProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QConcatenateTablesProxyModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QConcatenateTablesProxyModel) Span(index *QModelIndex) *QSize {
	_ret := C.QConcatenateTablesProxyModel_Span(this.h, index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QConcatenateTablesProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QConcatenateTablesProxyModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QConcatenateTablesProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QConcatenateTablesProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QConcatenateTablesProxyModel) Data2(index *QModelIndex, role int) *QVariant {
	_ret := C.QConcatenateTablesProxyModel_Data2(this.h, index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QConcatenateTablesProxyModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QConcatenateTablesProxyModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QConcatenateTablesProxyModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) RowCount1(parent *QModelIndex) int {
	return (int)(C.QConcatenateTablesProxyModel_RowCount1(this.h, parent.cPointer()))
}

func (this *QConcatenateTablesProxyModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QConcatenateTablesProxyModel_HeaderData3(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) ColumnCount1(parent *QModelIndex) int {
	return (int)(C.QConcatenateTablesProxyModel_ColumnCount1(this.h, parent.cPointer()))
}

// Delete this object from C++ memory.
func (this *QConcatenateTablesProxyModel) Delete() {
	C.QConcatenateTablesProxyModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QConcatenateTablesProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QConcatenateTablesProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
