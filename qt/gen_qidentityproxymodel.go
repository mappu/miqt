package qt

/*

#include "gen_qidentityproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQIdentityProxyModel(h *C.QIdentityProxyModel) *QIdentityProxyModel {
	if h == nil {
		return nil
	}
	return &QIdentityProxyModel{h: h, QAbstractProxyModel: UnsafeNewQAbstractProxyModel(unsafe.Pointer(h))}
}

func UnsafeNewQIdentityProxyModel(h unsafe.Pointer) *QIdentityProxyModel {
	return newQIdentityProxyModel((*C.QIdentityProxyModel)(h))
}

// NewQIdentityProxyModel constructs a new QIdentityProxyModel object.
func NewQIdentityProxyModel() *QIdentityProxyModel {
	ret := C.QIdentityProxyModel_new()
	return newQIdentityProxyModel(ret)
}

// NewQIdentityProxyModel2 constructs a new QIdentityProxyModel object.
func NewQIdentityProxyModel2(parent *QObject) *QIdentityProxyModel {
	ret := C.QIdentityProxyModel_new2(parent.cPointer())
	return newQIdentityProxyModel(ret)
}

func (this *QIdentityProxyModel) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QIdentityProxyModel_MetaObject(this.h)))
}

func (this *QIdentityProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QIdentityProxyModel_Metacast(this.h, param1_Cstring))
}

func QIdentityProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIdentityProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIdentityProxyModel) ColumnCount() int {
	return (int)(C.QIdentityProxyModel_ColumnCount(this.h))
}

func (this *QIdentityProxyModel) Index(row int, column int) *QModelIndex {
	_ret := C.QIdentityProxyModel_Index(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_ret := C.QIdentityProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_ret := C.QIdentityProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) Parent(child *QModelIndex) *QModelIndex {
	_ret := C.QIdentityProxyModel_Parent(this.h, child.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) RowCount() int {
	return (int)(C.QIdentityProxyModel_RowCount(this.h))
}

func (this *QIdentityProxyModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QIdentityProxyModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QIdentityProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_ret := C.QIdentityProxyModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) Match(start *QModelIndex, role int, value *QVariant) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QIdentityProxyModel_Match(this.h, start.cPointer(), (C.int)(role), value.cPointer())
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

func (this *QIdentityProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QIdentityProxyModel_SetSourceModel(this.h, sourceModel.cPointer())
}

func (this *QIdentityProxyModel) InsertColumns(column int, count int) bool {
	return (bool)(C.QIdentityProxyModel_InsertColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QIdentityProxyModel) InsertRows(row int, count int) bool {
	return (bool)(C.QIdentityProxyModel_InsertRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QIdentityProxyModel) RemoveColumns(column int, count int) bool {
	return (bool)(C.QIdentityProxyModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QIdentityProxyModel) RemoveRows(row int, count int) bool {
	return (bool)(C.QIdentityProxyModel_RemoveRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QIdentityProxyModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QIdentityProxyModel_MoveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QIdentityProxyModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QIdentityProxyModel_MoveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func QIdentityProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIdentityProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIdentityProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIdentityProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIdentityProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIdentityProxyModel) ColumnCount1(parent *QModelIndex) int {
	return (int)(C.QIdentityProxyModel_ColumnCount1(this.h, parent.cPointer()))
}

func (this *QIdentityProxyModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QIdentityProxyModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) RowCount1(parent *QModelIndex) int {
	return (int)(C.QIdentityProxyModel_RowCount1(this.h, parent.cPointer()))
}

func (this *QIdentityProxyModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QIdentityProxyModel_HeaderData3(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIdentityProxyModel) Match4(start *QModelIndex, role int, value *QVariant, hits int) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QIdentityProxyModel_Match4(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits))
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

func (this *QIdentityProxyModel) Match5(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	var _ma *C.struct_miqt_array = C.QIdentityProxyModel_Match5(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
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

func (this *QIdentityProxyModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QIdentityProxyModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QIdentityProxyModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QIdentityProxyModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QIdentityProxyModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

// Delete this object from C++ memory.
func (this *QIdentityProxyModel) Delete() {
	C.QIdentityProxyModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIdentityProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QIdentityProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
