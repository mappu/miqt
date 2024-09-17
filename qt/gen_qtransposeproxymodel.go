package qt

/*

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
	if h == nil {
		return nil
	}
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
	return newQMetaObject_U(unsafe.Pointer(C.QTransposeProxyModel_MetaObject(this.h)))
}

func QTransposeProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTransposeProxyModel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTransposeProxyModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTransposeProxyModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTransposeProxyModel) SetSourceModel(newSourceModel *QAbstractItemModel) {
	C.QTransposeProxyModel_SetSourceModel(this.h, newSourceModel.cPointer())
}

func (this *QTransposeProxyModel) RowCount() int {
	return (int)(C.QTransposeProxyModel_RowCount(this.h))
}

func (this *QTransposeProxyModel) ColumnCount() int {
	return (int)(C.QTransposeProxyModel_ColumnCount(this.h))
}

func (this *QTransposeProxyModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QTransposeProxyModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) SetHeaderData(section int, orientation Orientation, value *QVariant) bool {
	return (bool)(C.QTransposeProxyModel_SetHeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer()))
}

func (this *QTransposeProxyModel) Span(index *QModelIndex) *QSize {
	_ret := C.QTransposeProxyModel_Span(this.h, index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_ret := C.QTransposeProxyModel_MapFromSource(this.h, sourceIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_ret := C.QTransposeProxyModel_MapToSource(this.h, proxyIndex.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) Parent(index *QModelIndex) *QModelIndex {
	_ret := C.QTransposeProxyModel_Parent(this.h, index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) Index(row int, column int) *QModelIndex {
	_ret := C.QTransposeProxyModel_Index(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) InsertRows(row int, count int) bool {
	return (bool)(C.QTransposeProxyModel_InsertRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QTransposeProxyModel) RemoveRows(row int, count int) bool {
	return (bool)(C.QTransposeProxyModel_RemoveRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QTransposeProxyModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QTransposeProxyModel_MoveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QTransposeProxyModel) InsertColumns(column int, count int) bool {
	return (bool)(C.QTransposeProxyModel_InsertColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QTransposeProxyModel) RemoveColumns(column int, count int) bool {
	return (bool)(C.QTransposeProxyModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QTransposeProxyModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QTransposeProxyModel_MoveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QTransposeProxyModel) Sort(column int) {
	C.QTransposeProxyModel_Sort(this.h, (C.int)(column))
}

func QTransposeProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTransposeProxyModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTransposeProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTransposeProxyModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTransposeProxyModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTransposeProxyModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTransposeProxyModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTransposeProxyModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTransposeProxyModel) RowCount1(parent *QModelIndex) int {
	return (int)(C.QTransposeProxyModel_RowCount1(this.h, parent.cPointer()))
}

func (this *QTransposeProxyModel) ColumnCount1(parent *QModelIndex) int {
	return (int)(C.QTransposeProxyModel_ColumnCount1(this.h, parent.cPointer()))
}

func (this *QTransposeProxyModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QTransposeProxyModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) SetHeaderData4(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QTransposeProxyModel_SetHeaderData4(this.h, (C.int)(section), (C.uintptr_t)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QTransposeProxyModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QTransposeProxyModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QTransposeProxyModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QTransposeProxyModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QTransposeProxyModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QTransposeProxyModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QTransposeProxyModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QTransposeProxyModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QTransposeProxyModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QTransposeProxyModel) Sort2(column int, order SortOrder) {
	C.QTransposeProxyModel_Sort2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

// Delete this object from C++ memory.
func (this *QTransposeProxyModel) Delete() {
	C.QTransposeProxyModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTransposeProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QTransposeProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
