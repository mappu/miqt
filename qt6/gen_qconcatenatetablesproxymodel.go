package qt6

/*

#include "gen_qconcatenatetablesproxymodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

// newQConcatenateTablesProxyModel constructs the type using only CGO pointers.
func newQConcatenateTablesProxyModel(h *C.QConcatenateTablesProxyModel) *QConcatenateTablesProxyModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemModel *C.QAbstractItemModel = nil
	C.QConcatenateTablesProxyModel_virtbase(h, &outptr_QAbstractItemModel)

	return &QConcatenateTablesProxyModel{h: h,
		QAbstractItemModel: newQAbstractItemModel(outptr_QAbstractItemModel)}
}

// UnsafeNewQConcatenateTablesProxyModel constructs the type using only unsafe pointers.
func UnsafeNewQConcatenateTablesProxyModel(h unsafe.Pointer) *QConcatenateTablesProxyModel {
	return newQConcatenateTablesProxyModel((*C.QConcatenateTablesProxyModel)(h))
}

// NewQConcatenateTablesProxyModel constructs a new QConcatenateTablesProxyModel object.
func NewQConcatenateTablesProxyModel() *QConcatenateTablesProxyModel {

	return newQConcatenateTablesProxyModel(C.QConcatenateTablesProxyModel_new())
}

// NewQConcatenateTablesProxyModel2 constructs a new QConcatenateTablesProxyModel object.
func NewQConcatenateTablesProxyModel2(parent *QObject) *QConcatenateTablesProxyModel {

	return newQConcatenateTablesProxyModel(C.QConcatenateTablesProxyModel_new2(parent.cPointer()))
}

func (this *QConcatenateTablesProxyModel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QConcatenateTablesProxyModel_metaObject(this.h))
}

func (this *QConcatenateTablesProxyModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QConcatenateTablesProxyModel_metacast(this.h, param1_Cstring))
}

func QConcatenateTablesProxyModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QConcatenateTablesProxyModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QConcatenateTablesProxyModel) SourceModels() []*QAbstractItemModel {
	var _ma C.struct_miqt_array = C.QConcatenateTablesProxyModel_sourceModels(this.h)
	_ret := make([]*QAbstractItemModel, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractItemModel)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractItemModel(_outCast[i])
	}
	return _ret
}

func (this *QConcatenateTablesProxyModel) AddSourceModel(sourceModel *QAbstractItemModel) {
	C.QConcatenateTablesProxyModel_addSourceModel(this.h, sourceModel.cPointer())
}

func (this *QConcatenateTablesProxyModel) RemoveSourceModel(sourceModel *QAbstractItemModel) {
	C.QConcatenateTablesProxyModel_removeSourceModel(this.h, sourceModel.cPointer())
}

func (this *QConcatenateTablesProxyModel) MapFromSource(sourceIndex *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QConcatenateTablesProxyModel_mapFromSource(this.h, sourceIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) MapToSource(proxyIndex *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QConcatenateTablesProxyModel_mapToSource(this.h, proxyIndex.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) Data(index *QModelIndex, role int) *QVariant {
	_goptr := newQVariant(C.QConcatenateTablesProxyModel_data(this.h, index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) SetData(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QConcatenateTablesProxyModel_setData(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QConcatenateTablesProxyModel) ItemData(proxyIndex *QModelIndex) map[int]QVariant {
	var _mm C.struct_miqt_map = C.QConcatenateTablesProxyModel_itemData(this.h, proxyIndex.cPointer())
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
	return (bool)(C.QConcatenateTablesProxyModel_setItemData(this.h, index.cPointer(), roles_mm))
}

func (this *QConcatenateTablesProxyModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QConcatenateTablesProxyModel_flags(this.h, index.cPointer()))
}

func (this *QConcatenateTablesProxyModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QConcatenateTablesProxyModel_index(this.h, (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) Parent(index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QConcatenateTablesProxyModel_parent(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) RowCount(parent *QModelIndex) int {
	return (int)(C.QConcatenateTablesProxyModel_rowCount(this.h, parent.cPointer()))
}

func (this *QConcatenateTablesProxyModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_goptr := newQVariant(C.QConcatenateTablesProxyModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConcatenateTablesProxyModel) ColumnCount(parent *QModelIndex) int {
	return (int)(C.QConcatenateTablesProxyModel_columnCount(this.h, parent.cPointer()))
}

func (this *QConcatenateTablesProxyModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QConcatenateTablesProxyModel_mimeTypes(this.h)
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
	return newQMimeData(C.QConcatenateTablesProxyModel_mimeData(this.h, indexes_ma))
}

func (this *QConcatenateTablesProxyModel) CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QConcatenateTablesProxyModel_canDropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QConcatenateTablesProxyModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QConcatenateTablesProxyModel_dropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QConcatenateTablesProxyModel) Span(index *QModelIndex) *QSize {
	_goptr := newQSize(C.QConcatenateTablesProxyModel_span(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QConcatenateTablesProxyModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QConcatenateTablesProxyModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QConcatenateTablesProxyModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QConcatenateTablesProxyModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Data(index *QModelIndex, role int) *QVariant {

	_goptr := newQVariant(C.QConcatenateTablesProxyModel_virtualbase_data(unsafe.Pointer(this.h), index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QConcatenateTablesProxyModel) OnData(slot func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_data
func miqt_exec_callback_QConcatenateTablesProxyModel_data(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_setData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QConcatenateTablesProxyModel) OnSetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_setData
func miqt_exec_callback_QConcatenateTablesProxyModel_setData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQVariant(value)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_ItemData(proxyIndex *QModelIndex) map[int]QVariant {

	var _mm C.struct_miqt_map = C.QConcatenateTablesProxyModel_virtualbase_itemData(unsafe.Pointer(this.h), proxyIndex.cPointer())
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
func (this *QConcatenateTablesProxyModel) OnItemData(slot func(super func(proxyIndex *QModelIndex) map[int]QVariant, proxyIndex *QModelIndex) map[int]QVariant) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_itemData
func miqt_exec_callback_QConcatenateTablesProxyModel_itemData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, proxyIndex *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(proxyIndex *QModelIndex) map[int]QVariant, proxyIndex *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(proxyIndex)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_ItemData, slotval1)
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

func (this *QConcatenateTablesProxyModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
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

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_setItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QConcatenateTablesProxyModel) OnSetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_setItemData
func miqt_exec_callback_QConcatenateTablesProxyModel_setItemData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
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

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {

	return (ItemFlag)(C.QConcatenateTablesProxyModel_virtualbase_flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnFlags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_flags
func miqt_exec_callback_QConcatenateTablesProxyModel_flags(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Index(row int, column int, parent *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QConcatenateTablesProxyModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QConcatenateTablesProxyModel) OnIndex(slot func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_index
func miqt_exec_callback_QConcatenateTablesProxyModel_index(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Parent(index *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QConcatenateTablesProxyModel_virtualbase_parent(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QConcatenateTablesProxyModel) OnParent(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_parent
func miqt_exec_callback_QConcatenateTablesProxyModel_parent(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Parent, slotval1)

	return virtualReturn.cPointer()

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_RowCount(parent *QModelIndex) int {

	return (int)(C.QConcatenateTablesProxyModel_virtualbase_rowCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnRowCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_rowCount
func miqt_exec_callback_QConcatenateTablesProxyModel_rowCount(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {

	_goptr := newQVariant(C.QConcatenateTablesProxyModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QConcatenateTablesProxyModel) OnHeaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_headerData
func miqt_exec_callback_QConcatenateTablesProxyModel_headerData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_ColumnCount(parent *QModelIndex) int {

	return (int)(C.QConcatenateTablesProxyModel_virtualbase_columnCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnColumnCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_columnCount
func miqt_exec_callback_QConcatenateTablesProxyModel_columnCount(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QConcatenateTablesProxyModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QConcatenateTablesProxyModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_mimeTypes
func miqt_exec_callback_QConcatenateTablesProxyModel_mimeTypes(self *C.QConcatenateTablesProxyModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_MimeTypes)
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

func (this *QConcatenateTablesProxyModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return newQMimeData(C.QConcatenateTablesProxyModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma))

}
func (this *QConcatenateTablesProxyModel) OnMimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_mimeData
func miqt_exec_callback_QConcatenateTablesProxyModel_mimeData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
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

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnCanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_canDropMimeData
func miqt_exec_callback_QConcatenateTablesProxyModel_canDropMimeData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_dropMimeData
func miqt_exec_callback_QConcatenateTablesProxyModel_dropMimeData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
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

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Span(index *QModelIndex) *QSize {

	_goptr := newQSize(C.QConcatenateTablesProxyModel_virtualbase_span(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QConcatenateTablesProxyModel) OnSpan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_span
func miqt_exec_callback_QConcatenateTablesProxyModel_span(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Span, slotval1)

	return virtualReturn.cPointer()

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QConcatenateTablesProxyModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QConcatenateTablesProxyModel) OnSibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_sibling
func miqt_exec_callback_QConcatenateTablesProxyModel_sibling(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(idx)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_HasChildren(parent *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_hasChildren(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnHasChildren(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_hasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_hasChildren
func miqt_exec_callback_QConcatenateTablesProxyModel_hasChildren(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QConcatenateTablesProxyModel) OnSetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_setHeaderData
func miqt_exec_callback_QConcatenateTablesProxyModel_setHeaderData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := newQVariant(value)

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_ClearItemData(index *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_clearItemData(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnClearItemData(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_clearItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_clearItemData
func miqt_exec_callback_QConcatenateTablesProxyModel_clearItemData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_ClearItemData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QConcatenateTablesProxyModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QConcatenateTablesProxyModel) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_supportedDropActions
func miqt_exec_callback_QConcatenateTablesProxyModel_supportedDropActions(self *C.QConcatenateTablesProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_SupportedDragActions() DropAction {

	return (DropAction)(C.QConcatenateTablesProxyModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QConcatenateTablesProxyModel) OnSupportedDragActions(slot func(super func() DropAction) DropAction) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_supportedDragActions
func miqt_exec_callback_QConcatenateTablesProxyModel_supportedDragActions(self *C.QConcatenateTablesProxyModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnInsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_insertRows
func miqt_exec_callback_QConcatenateTablesProxyModel_insertRows(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnInsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_insertColumns
func miqt_exec_callback_QConcatenateTablesProxyModel_insertColumns(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnRemoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_removeRows
func miqt_exec_callback_QConcatenateTablesProxyModel_removeRows(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnRemoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_removeColumns
func miqt_exec_callback_QConcatenateTablesProxyModel_removeColumns(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_moveRows(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QConcatenateTablesProxyModel) OnMoveRows(slot func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_moveRows
func miqt_exec_callback_QConcatenateTablesProxyModel_moveRows(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_moveColumns(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QConcatenateTablesProxyModel) OnMoveColumns(slot func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_moveColumns
func miqt_exec_callback_QConcatenateTablesProxyModel_moveColumns(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
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

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_FetchMore(parent *QModelIndex) {

	C.QConcatenateTablesProxyModel_virtualbase_fetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QConcatenateTablesProxyModel) OnFetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_fetchMore
func miqt_exec_callback_QConcatenateTablesProxyModel_fetchMore(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnCanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_canFetchMore
func miqt_exec_callback_QConcatenateTablesProxyModel_canFetchMore(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Sort(column int, order SortOrder) {

	C.QConcatenateTablesProxyModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QConcatenateTablesProxyModel) OnSort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_sort
func miqt_exec_callback_QConcatenateTablesProxyModel_sort(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order SortOrder), column int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (SortOrder)(order)

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QConcatenateTablesProxyModel_virtualbase_buddy(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QConcatenateTablesProxyModel) OnBuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_buddy
func miqt_exec_callback_QConcatenateTablesProxyModel_buddy(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Buddy, slotval1)

	return virtualReturn.cPointer()

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {

	var _ma C.struct_miqt_array = C.QConcatenateTablesProxyModel_virtualbase_match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QConcatenateTablesProxyModel) OnMatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_match
func miqt_exec_callback_QConcatenateTablesProxyModel_match(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
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

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QConcatenateTablesProxyModel_virtualbase_roleNames(unsafe.Pointer(this.h))
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
func (this *QConcatenateTablesProxyModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_roleNames
func miqt_exec_callback_QConcatenateTablesProxyModel_roleNames(self *C.QConcatenateTablesProxyModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_RoleNames)
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

func (this *QConcatenateTablesProxyModel) callVirtualBase_MultiData(index *QModelIndex, roleDataSpan QModelRoleDataSpan) {

	C.QConcatenateTablesProxyModel_virtualbase_multiData(unsafe.Pointer(this.h), index.cPointer(), roleDataSpan.cPointer())

}
func (this *QConcatenateTablesProxyModel) OnMultiData(slot func(super func(index *QModelIndex, roleDataSpan QModelRoleDataSpan), index *QModelIndex, roleDataSpan QModelRoleDataSpan)) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_multiData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_multiData
func miqt_exec_callback_QConcatenateTablesProxyModel_multiData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, index *C.QModelIndex, roleDataSpan *C.QModelRoleDataSpan) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, roleDataSpan QModelRoleDataSpan), index *QModelIndex, roleDataSpan QModelRoleDataSpan))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	roleDataSpan_goptr := newQModelRoleDataSpan(roleDataSpan)
	roleDataSpan_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *roleDataSpan_goptr

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_MultiData, slotval1, slotval2)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Submit() bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QConcatenateTablesProxyModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_submit
func miqt_exec_callback_QConcatenateTablesProxyModel_submit(self *C.QConcatenateTablesProxyModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Revert() {

	C.QConcatenateTablesProxyModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QConcatenateTablesProxyModel) OnRevert(slot func(super func())) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_revert
func miqt_exec_callback_QConcatenateTablesProxyModel_revert(self *C.QConcatenateTablesProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Revert)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_ResetInternalData() {

	C.QConcatenateTablesProxyModel_virtualbase_resetInternalData(unsafe.Pointer(this.h))

}
func (this *QConcatenateTablesProxyModel) OnResetInternalData(slot func(super func())) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_resetInternalData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_resetInternalData
func miqt_exec_callback_QConcatenateTablesProxyModel_resetInternalData(self *C.QConcatenateTablesProxyModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_ResetInternalData)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_event
func miqt_exec_callback_QConcatenateTablesProxyModel_event(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QConcatenateTablesProxyModel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QConcatenateTablesProxyModel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_eventFilter
func miqt_exec_callback_QConcatenateTablesProxyModel_eventFilter(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QConcatenateTablesProxyModel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QConcatenateTablesProxyModel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_timerEvent
func miqt_exec_callback_QConcatenateTablesProxyModel_timerEvent(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QConcatenateTablesProxyModel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QConcatenateTablesProxyModel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_childEvent
func miqt_exec_callback_QConcatenateTablesProxyModel_childEvent(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_CustomEvent(event *QEvent) {

	C.QConcatenateTablesProxyModel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QConcatenateTablesProxyModel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_customEvent
func miqt_exec_callback_QConcatenateTablesProxyModel_customEvent(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QConcatenateTablesProxyModel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QConcatenateTablesProxyModel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_connectNotify
func miqt_exec_callback_QConcatenateTablesProxyModel_connectNotify(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QConcatenateTablesProxyModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QConcatenateTablesProxyModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QConcatenateTablesProxyModel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QConcatenateTablesProxyModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QConcatenateTablesProxyModel_disconnectNotify
func miqt_exec_callback_QConcatenateTablesProxyModel_disconnectNotify(self *C.QConcatenateTablesProxyModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QConcatenateTablesProxyModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QConcatenateTablesProxyModel) Delete() {
	C.QConcatenateTablesProxyModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QConcatenateTablesProxyModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QConcatenateTablesProxyModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
