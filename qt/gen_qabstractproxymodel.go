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

func newQAbstractProxyModel(h *C.QAbstractProxyModel) *QAbstractProxyModel {
	if h == nil {
		return nil
	}
	return &QAbstractProxyModel{h: h, QAbstractItemModel: newQAbstractItemModel_U(unsafe.Pointer(h))}
}

func newQAbstractProxyModel_U(h unsafe.Pointer) *QAbstractProxyModel {
	return newQAbstractProxyModel((*C.QAbstractProxyModel)(h))
}

func (this *QAbstractProxyModel) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QAbstractProxyModel_MetaObject(this.h)))
}

func QAbstractProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractProxyModel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractProxyModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QAbstractProxyModel_SetSourceModel(this.h, sourceModel.cPointer())
}

func (this *QAbstractProxyModel) SourceModel() *QAbstractItemModel {
	return newQAbstractItemModel_U(unsafe.Pointer(C.QAbstractProxyModel_SourceModel(this.h)))
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
	_ret := C.QAbstractProxyModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) Flags(index *QModelIndex) int {
	return (int)(C.QAbstractProxyModel_Flags(this.h, index.cPointer()))
}

func (this *QAbstractProxyModel) SetData(index *QModelIndex, value *QVariant) bool {
	return (bool)(C.QAbstractProxyModel_SetData(this.h, index.cPointer(), value.cPointer()))
}

func (this *QAbstractProxyModel) SetHeaderData(section int, orientation Orientation, value *QVariant) bool {
	return (bool)(C.QAbstractProxyModel_SetHeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer()))
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
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := &C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(indexes_ma))
	return newQMimeData_U(unsafe.Pointer(C.QAbstractProxyModel_MimeData(this.h, indexes_ma)))
}

func (this *QAbstractProxyModel) CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_CanDropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QAbstractProxyModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QAbstractProxyModel) MimeTypes() []string {
	var _ma *C.struct_miqt_array = C.QAbstractProxyModel_MimeTypes(this.h)
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

func (this *QAbstractProxyModel) SupportedDragActions() int {
	return (int)(C.QAbstractProxyModel_SupportedDragActions(this.h))
}

func (this *QAbstractProxyModel) SupportedDropActions() int {
	return (int)(C.QAbstractProxyModel_SupportedDropActions(this.h))
}

func QAbstractProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractProxyModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractProxyModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractProxyModel) Data2(proxyIndex *QModelIndex, role int) *QVariant {
	_ret := C.QAbstractProxyModel_Data2(this.h, proxyIndex.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QAbstractProxyModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractProxyModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QAbstractProxyModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QAbstractProxyModel) SetHeaderData4(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QAbstractProxyModel_SetHeaderData4(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QAbstractProxyModel) Sort2(column int, order SortOrder) {
	C.QAbstractProxyModel_Sort2(this.h, (C.int)(column), (C.uintptr_t)(order))
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
