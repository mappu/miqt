package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
	return &QAbstractProxyModel{h: h, QAbstractItemModel: newQAbstractItemModel_U(unsafe.Pointer(h))}
}

func newQAbstractProxyModel_U(h unsafe.Pointer) *QAbstractProxyModel {
	return newQAbstractProxyModel((*C.QAbstractProxyModel)(h))
}

func (this *QAbstractProxyModel) MetaObject() *QMetaObject {
	ret := C.QAbstractProxyModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractProxyModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractProxyModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QAbstractProxyModel_SetSourceModel(this.h, sourceModel.cPointer())
}

func (this *QAbstractProxyModel) SourceModel() *QAbstractItemModel {
	ret := C.QAbstractProxyModel_SourceModel(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(ret))
}

func (this *QAbstractProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	ret := C.QAbstractProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	ret := C.QAbstractProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) Submit() bool {
	ret := C.QAbstractProxyModel_Submit(this.h)
	return (bool)(ret)
}

func (this *QAbstractProxyModel) Revert() {
	C.QAbstractProxyModel_Revert(this.h)
}

func (this *QAbstractProxyModel) Data(proxyIndex *QModelIndex) *QVariant {
	ret := C.QAbstractProxyModel_Data(this.h, proxyIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) HeaderData(section int, orientation uintptr) *QVariant {
	ret := C.QAbstractProxyModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) Flags(index *QModelIndex) int {
	ret := C.QAbstractProxyModel_Flags(this.h, index.cPointer())
	return (int)(ret)
}

func (this *QAbstractProxyModel) SetData(index *QModelIndex, value *QVariant) bool {
	ret := C.QAbstractProxyModel_SetData(this.h, index.cPointer(), value.cPointer())
	return (bool)(ret)
}

func (this *QAbstractProxyModel) SetHeaderData(section int, orientation uintptr, value *QVariant) bool {
	ret := C.QAbstractProxyModel_SetHeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer())
	return (bool)(ret)
}

func (this *QAbstractProxyModel) Buddy(index *QModelIndex) *QModelIndex {
	ret := C.QAbstractProxyModel_Buddy(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) CanFetchMore(parent *QModelIndex) bool {
	ret := C.QAbstractProxyModel_CanFetchMore(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractProxyModel) FetchMore(parent *QModelIndex) {
	C.QAbstractProxyModel_FetchMore(this.h, parent.cPointer())
}

func (this *QAbstractProxyModel) Sort(column int) {
	C.QAbstractProxyModel_Sort(this.h, (C.int)(column))
}

func (this *QAbstractProxyModel) Span(index *QModelIndex) *QSize {
	ret := C.QAbstractProxyModel_Span(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) HasChildren() bool {
	ret := C.QAbstractProxyModel_HasChildren(this.h)
	return (bool)(ret)
}

func (this *QAbstractProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	ret := C.QAbstractProxyModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.ulong(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	ret := C.QAbstractProxyModel_MimeData(this.h, &indexes_CArray[0], C.ulong(len(indexes)))
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QAbstractProxyModel) CanDropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QAbstractProxyModel_CanDropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractProxyModel) DropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QAbstractProxyModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractProxyModel) MimeTypes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QAbstractProxyModel_MimeTypes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractProxyModel) SupportedDragActions() int {
	ret := C.QAbstractProxyModel_SupportedDragActions(this.h)
	return (int)(ret)
}

func (this *QAbstractProxyModel) SupportedDropActions() int {
	ret := C.QAbstractProxyModel_SupportedDropActions(this.h)
	return (int)(ret)
}

func QAbstractProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractProxyModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractProxyModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractProxyModel) Data2(proxyIndex *QModelIndex, role int) *QVariant {
	ret := C.QAbstractProxyModel_Data2(this.h, proxyIndex.cPointer(), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) HeaderData3(section int, orientation uintptr, role int) *QVariant {
	ret := C.QAbstractProxyModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractProxyModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	ret := C.QAbstractProxyModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QAbstractProxyModel) SetHeaderData4(section int, orientation uintptr, value *QVariant, role int) bool {
	ret := C.QAbstractProxyModel_SetHeaderData4(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QAbstractProxyModel) Sort2(column int, order uintptr) {
	C.QAbstractProxyModel_Sort2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QAbstractProxyModel) HasChildren1(parent *QModelIndex) bool {
	ret := C.QAbstractProxyModel_HasChildren1(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QAbstractProxyModel) Delete() {
	C.QAbstractProxyModel_Delete(this.h)
}
