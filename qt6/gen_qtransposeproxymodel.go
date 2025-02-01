package qt6

/*

#include "gen_qtransposeproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

func (this *QTransposeProxyModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTransposeProxyModel constructs the type using only CGO pointers.
func newQTransposeProxyModel(h *C.QTransposeProxyModel) *QTransposeProxyModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractProxyModel *C.QAbstractProxyModel = nil
	C.QTransposeProxyModel_virtbase(h, &outptr_QAbstractProxyModel)

	return &QTransposeProxyModel{h: h,
		QAbstractProxyModel: newQAbstractProxyModel(outptr_QAbstractProxyModel)}
}

// UnsafeNewQTransposeProxyModel constructs the type using only unsafe pointers.
func UnsafeNewQTransposeProxyModel(h unsafe.Pointer) *QTransposeProxyModel {
	return newQTransposeProxyModel((*C.QTransposeProxyModel)(h))
}

// NewQTransposeProxyModel constructs a new QTransposeProxyModel object.
func NewQTransposeProxyModel() *QTransposeProxyModel {

	return newQTransposeProxyModel(C.QTransposeProxyModel_new())
}

// NewQTransposeProxyModel2 constructs a new QTransposeProxyModel object.
func NewQTransposeProxyModel2(parent *QObject) *QTransposeProxyModel {

	return newQTransposeProxyModel(C.QTransposeProxyModel_new2(parent.cPointer()))
}

func (this *QTransposeProxyModel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTransposeProxyModel_metaObject(this.h))
}

func (this *QTransposeProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTransposeProxyModel_metacast(this.h, param1_Cstring))
}

func QTransposeProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTransposeProxyModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTransposeProxyModel) SetSourceModel(newSourceModel *QAbstractItemModel) {
	C.QTransposeProxyModel_setSourceModel(this.h, newSourceModel.cPointer())
}

func (this *QTransposeProxyModel) RowCount(parent *QModelIndex) int {
	return (int)(C.QTransposeProxyModel_rowCount(this.h, parent.cPointer()))
}

func (this *QTransposeProxyModel) ColumnCount(parent *QModelIndex) int {
	return (int)(C.QTransposeProxyModel_columnCount(this.h, parent.cPointer()))
}

func (this *QTransposeProxyModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_goptr := newQVariant(C.QTransposeProxyModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QTransposeProxyModel_setHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QTransposeProxyModel) SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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
	return (bool)(C.QTransposeProxyModel_setItemData(this.h, index.cPointer(), roles_mm))
}

func (this *QTransposeProxyModel) Span(index *QModelIndex) *QSize {
	_goptr := newQSize(C.QTransposeProxyModel_span(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) ItemData(index *QModelIndex) map[int]QVariant {
	var _mm C.struct_miqt_map = C.QTransposeProxyModel_itemData(this.h, index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QTransposeProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QTransposeProxyModel_mapFromSource(this.h, sourceIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QTransposeProxyModel_mapToSource(this.h, proxyIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) Parent(index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QTransposeProxyModel_parent(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QTransposeProxyModel_index(this.h, (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransposeProxyModel) InsertRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QTransposeProxyModel_insertRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QTransposeProxyModel) RemoveRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QTransposeProxyModel_removeRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QTransposeProxyModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QTransposeProxyModel_moveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QTransposeProxyModel) InsertColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QTransposeProxyModel_insertColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QTransposeProxyModel) RemoveColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QTransposeProxyModel_removeColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QTransposeProxyModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	return (bool)(C.QTransposeProxyModel_moveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))
}

func (this *QTransposeProxyModel) Sort(column int, order SortOrder) {
	C.QTransposeProxyModel_sort(this.h, (C.int)(column), (C.int)(order))
}

func QTransposeProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTransposeProxyModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTransposeProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTransposeProxyModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTransposeProxyModel) callVirtualBase_SetSourceModel(newSourceModel *QAbstractItemModel) {

	C.QTransposeProxyModel_virtualbase_setSourceModel(unsafe.Pointer(this.h), newSourceModel.cPointer())

}
func (this *QTransposeProxyModel) OnSetSourceModel(slot func(super func(newSourceModel *QAbstractItemModel), newSourceModel *QAbstractItemModel)) {
	ok := C.QTransposeProxyModel_override_virtual_setSourceModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_setSourceModel
func miqt_exec_callback_QTransposeProxyModel_setSourceModel(self *C.QTransposeProxyModel, cb C.intptr_t, newSourceModel *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newSourceModel *QAbstractItemModel), newSourceModel *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(newSourceModel)

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_SetSourceModel, slotval1)

}

func (this *QTransposeProxyModel) callVirtualBase_RowCount(parent *QModelIndex) int {

	return (int)(C.QTransposeProxyModel_virtualbase_rowCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnRowCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QTransposeProxyModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_rowCount
func miqt_exec_callback_QTransposeProxyModel_rowCount(self *C.QTransposeProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_ColumnCount(parent *QModelIndex) int {

	return (int)(C.QTransposeProxyModel_virtualbase_columnCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnColumnCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QTransposeProxyModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_columnCount
func miqt_exec_callback_QTransposeProxyModel_columnCount(self *C.QTransposeProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {

	_goptr := newQVariant(C.QTransposeProxyModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnHeaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	ok := C.QTransposeProxyModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_headerData
func miqt_exec_callback_QTransposeProxyModel_headerData(self *C.QTransposeProxyModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QTransposeProxyModel) OnSetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	ok := C.QTransposeProxyModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_setHeaderData
func miqt_exec_callback_QTransposeProxyModel_setHeaderData(self *C.QTransposeProxyModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := newQVariant(value)

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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

	return (bool)(C.QTransposeProxyModel_virtualbase_setItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QTransposeProxyModel) OnSetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	ok := C.QTransposeProxyModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_setItemData
func miqt_exec_callback_QTransposeProxyModel_setItemData(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	var roles_mm C.struct_miqt_map = roles
	roles_ret := make(map[int]QVariant, int(roles_mm.len))
	roles_Keys := (*[0xffff]C.int)(unsafe.Pointer(roles_mm.keys))
	roles_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(roles_mm.values))
	for i := 0; i < int(roles_mm.len); i++ {
		roles_entry_Key := (int)(roles_Keys[i])

		roles_mapval_goptr := newQVariant(roles_Values[i])
		roles_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		roles_entry_Value := *roles_mapval_goptr

		roles_ret[roles_entry_Key] = roles_entry_Value
	}
	slotval2 := roles_ret

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_Span(index *QModelIndex) *QSize {

	_goptr := newQSize(C.QTransposeProxyModel_virtualbase_span(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnSpan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	ok := C.QTransposeProxyModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_span
func miqt_exec_callback_QTransposeProxyModel_span(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Span, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_ItemData(index *QModelIndex) map[int]QVariant {

	var _mm C.struct_miqt_map = C.QTransposeProxyModel_virtualbase_itemData(unsafe.Pointer(this.h), index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QTransposeProxyModel) OnItemData(slot func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant) {
	ok := C.QTransposeProxyModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_itemData
func miqt_exec_callback_QTransposeProxyModel_itemData(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_ItemData, slotval1)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_Values_CArray[virtualReturn_ctr] = virtualReturn_v.cPointer()
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QTransposeProxyModel) callVirtualBase_MapFromSource(sourceIndex *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QTransposeProxyModel_virtualbase_mapFromSource(unsafe.Pointer(this.h), sourceIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnMapFromSource(slot func(super func(sourceIndex *QModelIndex) *QModelIndex, sourceIndex *QModelIndex) *QModelIndex) {
	ok := C.QTransposeProxyModel_override_virtual_mapFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_mapFromSource
func miqt_exec_callback_QTransposeProxyModel_mapFromSource(self *C.QTransposeProxyModel, cb C.intptr_t, sourceIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceIndex *QModelIndex) *QModelIndex, sourceIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(sourceIndex)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MapFromSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_MapToSource(proxyIndex *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QTransposeProxyModel_virtualbase_mapToSource(unsafe.Pointer(this.h), proxyIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnMapToSource(slot func(super func(proxyIndex *QModelIndex) *QModelIndex, proxyIndex *QModelIndex) *QModelIndex) {
	ok := C.QTransposeProxyModel_override_virtual_mapToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_mapToSource
func miqt_exec_callback_QTransposeProxyModel_mapToSource(self *C.QTransposeProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxyIndex *QModelIndex) *QModelIndex, proxyIndex *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(proxyIndex)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MapToSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_Parent(index *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QTransposeProxyModel_virtualbase_parent(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnParent(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QTransposeProxyModel_override_virtual_parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_parent
func miqt_exec_callback_QTransposeProxyModel_parent(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Parent, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_Index(row int, column int, parent *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QTransposeProxyModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnIndex(slot func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex) {
	ok := C.QTransposeProxyModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_index
func miqt_exec_callback_QTransposeProxyModel_index(self *C.QTransposeProxyModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnInsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_insertRows
func miqt_exec_callback_QTransposeProxyModel_insertRows(self *C.QTransposeProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnRemoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_removeRows
func miqt_exec_callback_QTransposeProxyModel_removeRows(self *C.QTransposeProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_moveRows(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QTransposeProxyModel) OnMoveRows(slot func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QTransposeProxyModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_moveRows
func miqt_exec_callback_QTransposeProxyModel_moveRows(self *C.QTransposeProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnInsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_insertColumns
func miqt_exec_callback_QTransposeProxyModel_insertColumns(self *C.QTransposeProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnRemoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_removeColumns
func miqt_exec_callback_QTransposeProxyModel_removeColumns(self *C.QTransposeProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_moveColumns(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QTransposeProxyModel) OnMoveColumns(slot func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QTransposeProxyModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_moveColumns
func miqt_exec_callback_QTransposeProxyModel_moveColumns(self *C.QTransposeProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_Sort(column int, order SortOrder) {

	C.QTransposeProxyModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QTransposeProxyModel) OnSort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	ok := C.QTransposeProxyModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_sort
func miqt_exec_callback_QTransposeProxyModel_sort(self *C.QTransposeProxyModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order SortOrder), column int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (SortOrder)(order)

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QTransposeProxyModel) callVirtualBase_MapSelectionToSource(selection *QItemSelection) *QItemSelection {

	_goptr := newQItemSelection(C.QTransposeProxyModel_virtualbase_mapSelectionToSource(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnMapSelectionToSource(slot func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection) {
	ok := C.QTransposeProxyModel_override_virtual_mapSelectionToSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_mapSelectionToSource
func miqt_exec_callback_QTransposeProxyModel_mapSelectionToSource(self *C.QTransposeProxyModel, cb C.intptr_t, selection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MapSelectionToSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_MapSelectionFromSource(selection *QItemSelection) *QItemSelection {

	_goptr := newQItemSelection(C.QTransposeProxyModel_virtualbase_mapSelectionFromSource(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnMapSelectionFromSource(slot func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection) {
	ok := C.QTransposeProxyModel_override_virtual_mapSelectionFromSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_mapSelectionFromSource
func miqt_exec_callback_QTransposeProxyModel_mapSelectionFromSource(self *C.QTransposeProxyModel, cb C.intptr_t, selection *C.QItemSelection) *C.QItemSelection {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QItemSelection, selection *QItemSelection) *QItemSelection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MapSelectionFromSource, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_Submit() bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QTransposeProxyModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QTransposeProxyModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_submit
func miqt_exec_callback_QTransposeProxyModel_submit(self *C.QTransposeProxyModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_Revert() {

	C.QTransposeProxyModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QTransposeProxyModel) OnRevert(slot func(super func())) {
	ok := C.QTransposeProxyModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_revert
func miqt_exec_callback_QTransposeProxyModel_revert(self *C.QTransposeProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Revert)

}

func (this *QTransposeProxyModel) callVirtualBase_Data(proxyIndex *QModelIndex, role int) *QVariant {

	_goptr := newQVariant(C.QTransposeProxyModel_virtualbase_data(unsafe.Pointer(this.h), proxyIndex.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnData(slot func(super func(proxyIndex *QModelIndex, role int) *QVariant, proxyIndex *QModelIndex, role int) *QVariant) {
	ok := C.QTransposeProxyModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_data
func miqt_exec_callback_QTransposeProxyModel_data(self *C.QTransposeProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxyIndex *QModelIndex, role int) *QVariant, proxyIndex *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(proxyIndex)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {

	return (ItemFlag)(C.QTransposeProxyModel_virtualbase_flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTransposeProxyModel) OnFlags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	ok := C.QTransposeProxyModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_flags
func miqt_exec_callback_QTransposeProxyModel_flags(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_setData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QTransposeProxyModel) OnSetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	ok := C.QTransposeProxyModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_setData
func miqt_exec_callback_QTransposeProxyModel_setData(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQVariant(value)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_ClearItemData(index *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_clearItemData(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTransposeProxyModel) OnClearItemData(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_clearItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_clearItemData
func miqt_exec_callback_QTransposeProxyModel_clearItemData(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_ClearItemData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QTransposeProxyModel_virtualbase_buddy(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnBuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QTransposeProxyModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_buddy
func miqt_exec_callback_QTransposeProxyModel_buddy(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Buddy, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnCanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_canFetchMore
func miqt_exec_callback_QTransposeProxyModel_canFetchMore(self *C.QTransposeProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_FetchMore(parent *QModelIndex) {

	C.QTransposeProxyModel_virtualbase_fetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QTransposeProxyModel) OnFetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	ok := C.QTransposeProxyModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_fetchMore
func miqt_exec_callback_QTransposeProxyModel_fetchMore(self *C.QTransposeProxyModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QTransposeProxyModel) callVirtualBase_HasChildren(parent *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_hasChildren(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnHasChildren(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_hasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_hasChildren
func miqt_exec_callback_QTransposeProxyModel_hasChildren(self *C.QTransposeProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QTransposeProxyModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTransposeProxyModel) OnSibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	ok := C.QTransposeProxyModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_sibling
func miqt_exec_callback_QTransposeProxyModel_sibling(self *C.QTransposeProxyModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(idx)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return newQMimeData(C.QTransposeProxyModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma))

}
func (this *QTransposeProxyModel) OnMimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	ok := C.QTransposeProxyModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_mimeData
func miqt_exec_callback_QTransposeProxyModel_mimeData(self *C.QTransposeProxyModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]QModelIndex, int(indexes_ma.len))
	indexes_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(indexes_ma.data)) // hey ya
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_lv_goptr := newQModelIndex(indexes_outCast[i])
		indexes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		indexes_ret[i] = *indexes_lv_goptr
	}
	slotval1 := indexes_ret

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTransposeProxyModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnCanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_canDropMimeData
func miqt_exec_callback_QTransposeProxyModel_canDropMimeData(self *C.QTransposeProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QTransposeProxyModel) OnDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QTransposeProxyModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_dropMimeData
func miqt_exec_callback_QTransposeProxyModel_dropMimeData(self *C.QTransposeProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QTransposeProxyModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QTransposeProxyModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QTransposeProxyModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_mimeTypes
func miqt_exec_callback_QTransposeProxyModel_mimeTypes(self *C.QTransposeProxyModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MimeTypes)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QTransposeProxyModel) callVirtualBase_SupportedDragActions() DropAction {

	return (DropAction)(C.QTransposeProxyModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QTransposeProxyModel) OnSupportedDragActions(slot func(super func() DropAction) DropAction) {
	ok := C.QTransposeProxyModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_supportedDragActions
func miqt_exec_callback_QTransposeProxyModel_supportedDragActions(self *C.QTransposeProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QTransposeProxyModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QTransposeProxyModel) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QTransposeProxyModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_supportedDropActions
func miqt_exec_callback_QTransposeProxyModel_supportedDropActions(self *C.QTransposeProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QTransposeProxyModel_virtualbase_roleNames(unsafe.Pointer(this.h))
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
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
func (this *QTransposeProxyModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QTransposeProxyModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_roleNames
func miqt_exec_callback_QTransposeProxyModel_roleNames(self *C.QTransposeProxyModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_RoleNames)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
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
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QTransposeProxyModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {

	var _ma C.struct_miqt_array = C.QTransposeProxyModel_virtualbase_match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QTransposeProxyModel) OnMatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	ok := C.QTransposeProxyModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_match
func miqt_exec_callback_QTransposeProxyModel_match(self *C.QTransposeProxyModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
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

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QTransposeProxyModel) callVirtualBase_MultiData(index *QModelIndex, roleDataSpan QModelRoleDataSpan) {

	C.QTransposeProxyModel_virtualbase_multiData(unsafe.Pointer(this.h), index.cPointer(), roleDataSpan.cPointer())

}
func (this *QTransposeProxyModel) OnMultiData(slot func(super func(index *QModelIndex, roleDataSpan QModelRoleDataSpan), index *QModelIndex, roleDataSpan QModelRoleDataSpan)) {
	ok := C.QTransposeProxyModel_override_virtual_multiData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_multiData
func miqt_exec_callback_QTransposeProxyModel_multiData(self *C.QTransposeProxyModel, cb C.intptr_t, index *C.QModelIndex, roleDataSpan *C.QModelRoleDataSpan) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, roleDataSpan QModelRoleDataSpan), index *QModelIndex, roleDataSpan QModelRoleDataSpan))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	roleDataSpan_goptr := newQModelRoleDataSpan(roleDataSpan)
	roleDataSpan_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *roleDataSpan_goptr

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_MultiData, slotval1, slotval2)

}

func (this *QTransposeProxyModel) callVirtualBase_ResetInternalData() {

	C.QTransposeProxyModel_virtualbase_resetInternalData(unsafe.Pointer(this.h))

}
func (this *QTransposeProxyModel) OnResetInternalData(slot func(super func())) {
	ok := C.QTransposeProxyModel_override_virtual_resetInternalData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_resetInternalData
func miqt_exec_callback_QTransposeProxyModel_resetInternalData(self *C.QTransposeProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_ResetInternalData)

}

func (this *QTransposeProxyModel) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTransposeProxyModel) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTransposeProxyModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_event
func miqt_exec_callback_QTransposeProxyModel_event(self *C.QTransposeProxyModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTransposeProxyModel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTransposeProxyModel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTransposeProxyModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_eventFilter
func miqt_exec_callback_QTransposeProxyModel_eventFilter(self *C.QTransposeProxyModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTransposeProxyModel) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTransposeProxyModel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTransposeProxyModel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTransposeProxyModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_timerEvent
func miqt_exec_callback_QTransposeProxyModel_timerEvent(self *C.QTransposeProxyModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTransposeProxyModel) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTransposeProxyModel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTransposeProxyModel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTransposeProxyModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_childEvent
func miqt_exec_callback_QTransposeProxyModel_childEvent(self *C.QTransposeProxyModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTransposeProxyModel) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTransposeProxyModel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTransposeProxyModel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTransposeProxyModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_customEvent
func miqt_exec_callback_QTransposeProxyModel_customEvent(self *C.QTransposeProxyModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTransposeProxyModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTransposeProxyModel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTransposeProxyModel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTransposeProxyModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_connectNotify
func miqt_exec_callback_QTransposeProxyModel_connectNotify(self *C.QTransposeProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTransposeProxyModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTransposeProxyModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTransposeProxyModel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTransposeProxyModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTransposeProxyModel_disconnectNotify
func miqt_exec_callback_QTransposeProxyModel_disconnectNotify(self *C.QTransposeProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTransposeProxyModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTransposeProxyModel) Delete() {
	C.QTransposeProxyModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTransposeProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QTransposeProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
