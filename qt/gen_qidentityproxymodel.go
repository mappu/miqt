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

func newQIdentityProxyModel(h *C.QIdentityProxyModel) *QIdentityProxyModel {
	if h == nil {
		return nil
	}
	return &QIdentityProxyModel{h: h, QAbstractProxyModel: newQAbstractProxyModel_U(unsafe.Pointer(h))}
}

func newQIdentityProxyModel_U(h unsafe.Pointer) *QIdentityProxyModel {
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
	ret := C.QIdentityProxyModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QIdentityProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIdentityProxyModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIdentityProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIdentityProxyModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIdentityProxyModel) ColumnCount() int {
	ret := C.QIdentityProxyModel_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QIdentityProxyModel) Index(row int, column int) *QModelIndex {
	ret := C.QIdentityProxyModel_Index(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIdentityProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	ret := C.QIdentityProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIdentityProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	ret := C.QIdentityProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIdentityProxyModel) Parent(child *QModelIndex) *QModelIndex {
	ret := C.QIdentityProxyModel_Parent(this.h, child.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIdentityProxyModel) RowCount() int {
	ret := C.QIdentityProxyModel_RowCount(this.h)
	return (int)(ret)
}

func (this *QIdentityProxyModel) HeaderData(section int, orientation Orientation) *QVariant {
	ret := C.QIdentityProxyModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIdentityProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	ret := C.QIdentityProxyModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QIdentityProxyModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	ret := C.QIdentityProxyModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIdentityProxyModel) Match(start *QModelIndex, role int, value *QVariant) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QIdentityProxyModel_Match(this.h, start.cPointer(), (C.int)(role), value.cPointer(), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIdentityProxyModel) SetSourceModel(sourceModel *QAbstractItemModel) {
	C.QIdentityProxyModel_SetSourceModel(this.h, sourceModel.cPointer())
}

func (this *QIdentityProxyModel) InsertColumns(column int, count int) bool {
	ret := C.QIdentityProxyModel_InsertColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(ret)
}

func (this *QIdentityProxyModel) InsertRows(row int, count int) bool {
	ret := C.QIdentityProxyModel_InsertRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QIdentityProxyModel) RemoveColumns(column int, count int) bool {
	ret := C.QIdentityProxyModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(ret)
}

func (this *QIdentityProxyModel) RemoveRows(row int, count int) bool {
	ret := C.QIdentityProxyModel_RemoveRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QIdentityProxyModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QIdentityProxyModel_MoveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func (this *QIdentityProxyModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QIdentityProxyModel_MoveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func QIdentityProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIdentityProxyModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIdentityProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIdentityProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIdentityProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIdentityProxyModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIdentityProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIdentityProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIdentityProxyModel) ColumnCount1(parent *QModelIndex) int {
	ret := C.QIdentityProxyModel_ColumnCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QIdentityProxyModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QIdentityProxyModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIdentityProxyModel) RowCount1(parent *QModelIndex) int {
	ret := C.QIdentityProxyModel_RowCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QIdentityProxyModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	ret := C.QIdentityProxyModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIdentityProxyModel) Match4(start *QModelIndex, role int, value *QVariant, hits int) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QIdentityProxyModel_Match4(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIdentityProxyModel) Match5(start *QModelIndex, role int, value *QVariant, hits int, flags int) []QModelIndex {
	var _out **C.QModelIndex = nil
	var _out_len C.size_t = 0
	C.QIdentityProxyModel_Match5(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags), &_out, &_out_len)
	ret := make([]QModelIndex, int(_out_len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIdentityProxyModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	ret := C.QIdentityProxyModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QIdentityProxyModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QIdentityProxyModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QIdentityProxyModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	ret := C.QIdentityProxyModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QIdentityProxyModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QIdentityProxyModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QIdentityProxyModel) Delete() {
	C.QIdentityProxyModel_Delete(this.h)
}
