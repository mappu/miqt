package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQConcatenateTablesProxyModel(h *C.QConcatenateTablesProxyModel) *QConcatenateTablesProxyModel {
	return &QConcatenateTablesProxyModel{h: h, QAbstractItemModel: newQAbstractItemModel_U(unsafe.Pointer(h))}
}

func newQConcatenateTablesProxyModel_U(h unsafe.Pointer) *QConcatenateTablesProxyModel {
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
	ret := C.QConcatenateTablesProxyModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QConcatenateTablesProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QConcatenateTablesProxyModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QConcatenateTablesProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QConcatenateTablesProxyModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QConcatenateTablesProxyModel) SourceModels() []*QAbstractItemModel {
	var _out **C.QAbstractItemModel = nil
	var _out_len C.size_t = 0
	C.QConcatenateTablesProxyModel_SourceModels(this.h, &_out, &_out_len)
	ret := make([]*QAbstractItemModel, int(_out_len))
	_outCast := (*[0xffff]*C.QAbstractItemModel)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAbstractItemModel(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QConcatenateTablesProxyModel) AddSourceModel(sourceModel *QAbstractItemModel) {
	C.QConcatenateTablesProxyModel_AddSourceModel(this.h, sourceModel.cPointer())
}

func (this *QConcatenateTablesProxyModel) RemoveSourceModel(sourceModel *QAbstractItemModel) {
	C.QConcatenateTablesProxyModel_RemoveSourceModel(this.h, sourceModel.cPointer())
}

func (this *QConcatenateTablesProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	ret := C.QConcatenateTablesProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	ret := C.QConcatenateTablesProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) Data(index *QModelIndex) *QVariant {
	ret := C.QConcatenateTablesProxyModel_Data(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) SetData(index *QModelIndex, value *QVariant) bool {
	ret := C.QConcatenateTablesProxyModel_SetData(this.h, index.cPointer(), value.cPointer())
	return (bool)(ret)
}

func (this *QConcatenateTablesProxyModel) Flags(index *QModelIndex) int {
	ret := C.QConcatenateTablesProxyModel_Flags(this.h, index.cPointer())
	return (int)(ret)
}

func (this *QConcatenateTablesProxyModel) Index(row int, column int) *QModelIndex {
	ret := C.QConcatenateTablesProxyModel_Index(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) Parent(index *QModelIndex) *QModelIndex {
	ret := C.QConcatenateTablesProxyModel_Parent(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) RowCount() int {
	ret := C.QConcatenateTablesProxyModel_RowCount(this.h)
	return (int)(ret)
}

func (this *QConcatenateTablesProxyModel) HeaderData(section int, orientation uintptr) *QVariant {
	ret := C.QConcatenateTablesProxyModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) ColumnCount() int {
	ret := C.QConcatenateTablesProxyModel_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QConcatenateTablesProxyModel) MimeTypes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QConcatenateTablesProxyModel_MimeTypes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QConcatenateTablesProxyModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.ulong(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	ret := C.QConcatenateTablesProxyModel_MimeData(this.h, &indexes_CArray[0], C.ulong(len(indexes)))
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QConcatenateTablesProxyModel) CanDropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QConcatenateTablesProxyModel_CanDropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QConcatenateTablesProxyModel) DropMimeData(data *QMimeData, action uintptr, row int, column int, parent *QModelIndex) bool {
	ret := C.QConcatenateTablesProxyModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QConcatenateTablesProxyModel) Span(index *QModelIndex) *QSize {
	ret := C.QConcatenateTablesProxyModel_Span(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QConcatenateTablesProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QConcatenateTablesProxyModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QConcatenateTablesProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QConcatenateTablesProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QConcatenateTablesProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QConcatenateTablesProxyModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QConcatenateTablesProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QConcatenateTablesProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QConcatenateTablesProxyModel) Data2(index *QModelIndex, role int) *QVariant {
	ret := C.QConcatenateTablesProxyModel_Data2(this.h, index.cPointer(), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	ret := C.QConcatenateTablesProxyModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QConcatenateTablesProxyModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QConcatenateTablesProxyModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) RowCount1(parent *QModelIndex) int {
	ret := C.QConcatenateTablesProxyModel_RowCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QConcatenateTablesProxyModel) HeaderData3(section int, orientation uintptr, role int) *QVariant {
	ret := C.QConcatenateTablesProxyModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConcatenateTablesProxyModel) ColumnCount1(parent *QModelIndex) int {
	ret := C.QConcatenateTablesProxyModel_ColumnCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QConcatenateTablesProxyModel) Delete() {
	C.QConcatenateTablesProxyModel_Delete(this.h)
}
