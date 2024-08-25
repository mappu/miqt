package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtransposeproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTransposeProxyModel struct {
	h *C.QTransposeProxyModel
	*QAbstractProxyModel
}

func (this *QTransposeProxyModel) cPointer() *C.QTransposeProxyModel {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTransposeProxyModel(h *C.QTransposeProxyModel) *QTransposeProxyModel {
	return &QTransposeProxyModel{h: h, QAbstractProxyModel: newQAbstractProxyModel_U(unsafe.Pointer(h))}
}

func newQTransposeProxyModel_U(h unsafe.Pointer) *QTransposeProxyModel {
	return newQTransposeProxyModel((*C.QTransposeProxyModel)(h))
}

// NewQTransposeProxyModel constructs a new QTransposeProxyModel object.
func NewQTransposeProxyModel() *QTransposeProxyModel {
	ret := C.QTransposeProxyModel_new()
	return newQTransposeProxyModel(ret)
}

// NewQTransposeProxyModel2 constructs a new QTransposeProxyModel object.
func NewQTransposeProxyModel2(parent *QObject) *QTransposeProxyModel {
	ret := C.QTransposeProxyModel_new2(parent.cPointer())
	return newQTransposeProxyModel(ret)
}

func (this *QTransposeProxyModel) MetaObject() *QMetaObject {
	ret := C.QTransposeProxyModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTransposeProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTransposeProxyModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTransposeProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTransposeProxyModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTransposeProxyModel) SetSourceModel(newSourceModel *QAbstractItemModel) {
	C.QTransposeProxyModel_SetSourceModel(this.h, newSourceModel.cPointer())
}

func (this *QTransposeProxyModel) RowCount() int {
	ret := C.QTransposeProxyModel_RowCount(this.h)
	return (int)(ret)
}

func (this *QTransposeProxyModel) ColumnCount() int {
	ret := C.QTransposeProxyModel_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QTransposeProxyModel) Span(index *QModelIndex) *QSize {
	ret := C.QTransposeProxyModel_Span(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransposeProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	ret := C.QTransposeProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransposeProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	ret := C.QTransposeProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransposeProxyModel) Parent(index *QModelIndex) *QModelIndex {
	ret := C.QTransposeProxyModel_Parent(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransposeProxyModel) Index(row int, column int) *QModelIndex {
	ret := C.QTransposeProxyModel_Index(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransposeProxyModel) InsertRows(row int, count int) bool {
	ret := C.QTransposeProxyModel_InsertRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QTransposeProxyModel) RemoveRows(row int, count int) bool {
	ret := C.QTransposeProxyModel_RemoveRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QTransposeProxyModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QTransposeProxyModel_MoveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func (this *QTransposeProxyModel) InsertColumns(column int, count int) bool {
	ret := C.QTransposeProxyModel_InsertColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(ret)
}

func (this *QTransposeProxyModel) RemoveColumns(column int, count int) bool {
	ret := C.QTransposeProxyModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count))
	return (bool)(ret)
}

func (this *QTransposeProxyModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QTransposeProxyModel_MoveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func QTransposeProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTransposeProxyModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTransposeProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTransposeProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTransposeProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTransposeProxyModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTransposeProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTransposeProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTransposeProxyModel) RowCount1(parent *QModelIndex) int {
	ret := C.QTransposeProxyModel_RowCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QTransposeProxyModel) ColumnCount1(parent *QModelIndex) int {
	ret := C.QTransposeProxyModel_ColumnCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QTransposeProxyModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QTransposeProxyModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransposeProxyModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QTransposeProxyModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QTransposeProxyModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QTransposeProxyModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QTransposeProxyModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	ret := C.QTransposeProxyModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QTransposeProxyModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	ret := C.QTransposeProxyModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QTransposeProxyModel) Delete() {
	C.QTransposeProxyModel_Delete(this.h)
}
