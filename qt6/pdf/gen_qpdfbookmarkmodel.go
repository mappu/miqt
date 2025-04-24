package pdf

/*

#include "gen_qpdfbookmarkmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPdfBookmarkModel__Role int

const (
	QPdfBookmarkModel__Title    QPdfBookmarkModel__Role = 256
	QPdfBookmarkModel__Level    QPdfBookmarkModel__Role = 257
	QPdfBookmarkModel__Page     QPdfBookmarkModel__Role = 258
	QPdfBookmarkModel__Location QPdfBookmarkModel__Role = 259
	QPdfBookmarkModel__Zoom     QPdfBookmarkModel__Role = 260
	QPdfBookmarkModel__NRoles   QPdfBookmarkModel__Role = 261
)

type QPdfBookmarkModel struct {
	h *C.QPdfBookmarkModel
	*qt6.QAbstractItemModel
}

func (this *QPdfBookmarkModel) cPointer() *C.QPdfBookmarkModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfBookmarkModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfBookmarkModel constructs the type using only CGO pointers.
func newQPdfBookmarkModel(h *C.QPdfBookmarkModel) *QPdfBookmarkModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemModel *C.QAbstractItemModel = nil
	C.QPdfBookmarkModel_virtbase(h, &outptr_QAbstractItemModel)

	return &QPdfBookmarkModel{h: h,
		QAbstractItemModel: qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(outptr_QAbstractItemModel))}
}

// UnsafeNewQPdfBookmarkModel constructs the type using only unsafe pointers.
func UnsafeNewQPdfBookmarkModel(h unsafe.Pointer) *QPdfBookmarkModel {
	return newQPdfBookmarkModel((*C.QPdfBookmarkModel)(h))
}

// NewQPdfBookmarkModel constructs a new QPdfBookmarkModel object.
func NewQPdfBookmarkModel() *QPdfBookmarkModel {

	return newQPdfBookmarkModel(C.QPdfBookmarkModel_new())
}

// NewQPdfBookmarkModel2 constructs a new QPdfBookmarkModel object.
func NewQPdfBookmarkModel2(parent *qt6.QObject) *QPdfBookmarkModel {

	return newQPdfBookmarkModel(C.QPdfBookmarkModel_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QPdfBookmarkModel) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPdfBookmarkModel_metaObject(this.h)))
}

func (this *QPdfBookmarkModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfBookmarkModel_metacast(this.h, param1_Cstring))
}

func QPdfBookmarkModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfBookmarkModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfBookmarkModel) Document() *QPdfDocument {
	return newQPdfDocument(C.QPdfBookmarkModel_document(this.h))
}

func (this *QPdfBookmarkModel) SetDocument(document *QPdfDocument) {
	C.QPdfBookmarkModel_setDocument(this.h, document.cPointer())
}

func (this *QPdfBookmarkModel) Data(index *qt6.QModelIndex, role int) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPdfBookmarkModel_data(this.h, (*C.QModelIndex)(index.UnsafePointer()), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfBookmarkModel) Index(row int, column int, parent *qt6.QModelIndex) *qt6.QModelIndex {
	_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(C.QPdfBookmarkModel_index(this.h, (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfBookmarkModel) Parent(index *qt6.QModelIndex) *qt6.QModelIndex {
	_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(C.QPdfBookmarkModel_parent(this.h, (*C.QModelIndex)(index.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfBookmarkModel) RowCount(parent *qt6.QModelIndex) int {
	return (int)(C.QPdfBookmarkModel_rowCount(this.h, (*C.QModelIndex)(parent.UnsafePointer())))
}

func (this *QPdfBookmarkModel) ColumnCount(parent *qt6.QModelIndex) int {
	return (int)(C.QPdfBookmarkModel_columnCount(this.h, (*C.QModelIndex)(parent.UnsafePointer())))
}

func (this *QPdfBookmarkModel) RoleNames() map[int][]byte {
	var _mm C.struct_miqt_map = C.QPdfBookmarkModel_roleNames(this.h)
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

func (this *QPdfBookmarkModel) DocumentChanged(document *QPdfDocument) {
	C.QPdfBookmarkModel_documentChanged(this.h, document.cPointer())
}
func (this *QPdfBookmarkModel) OnDocumentChanged(slot func(document *QPdfDocument)) {
	C.QPdfBookmarkModel_connect_documentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfBookmarkModel_documentChanged
func miqt_exec_callback_QPdfBookmarkModel_documentChanged(cb C.intptr_t, document *C.QPdfDocument) {
	gofunc, ok := cgo.Handle(cb).Value().(func(document *QPdfDocument))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPdfDocument(document)

	gofunc(slotval1)
}

func QPdfBookmarkModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfBookmarkModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfBookmarkModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfBookmarkModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// CreateIndex can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) CreateIndex(row int, column int) qt6.QModelIndex {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(C.QPdfBookmarkModel_protectedbase_createIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EncodeData can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) EncodeData(indexes []qt6.QModelIndex, stream *qt6.QDataStream) {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (*C.QModelIndex)(indexes[i].UnsafePointer())
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_encodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), indexes_ma, (*C.QDataStream)(stream.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DecodeData can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) DecodeData(row int, column int, parent *qt6.QModelIndex, stream *qt6.QDataStream) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfBookmarkModel_protectedbase_decodeData(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer()), (*C.QDataStream)(stream.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BeginInsertRows can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) BeginInsertRows(parent *qt6.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_beginInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertRows can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) EndInsertRows() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_endInsertRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveRows can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) BeginRemoveRows(parent *qt6.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_beginRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveRows can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) EndRemoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_endRemoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveRows can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) BeginMoveRows(sourceParent *qt6.QModelIndex, sourceFirst int, sourceLast int, destinationParent *qt6.QModelIndex, destinationRow int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfBookmarkModel_protectedbase_beginMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceFirst), (C.int)(sourceLast), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationRow)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveRows can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) EndMoveRows() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_endMoveRows(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginInsertColumns can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) BeginInsertColumns(parent *qt6.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_beginInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndInsertColumns can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) EndInsertColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_endInsertColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginRemoveColumns can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) BeginRemoveColumns(parent *qt6.QModelIndex, first int, last int) {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_beginRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()), (C.int)(first), (C.int)(last))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndRemoveColumns can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) EndRemoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_endRemoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginMoveColumns can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) BeginMoveColumns(sourceParent *qt6.QModelIndex, sourceFirst int, sourceLast int, destinationParent *qt6.QModelIndex, destinationColumn int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfBookmarkModel_protectedbase_beginMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceFirst), (C.int)(sourceLast), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationColumn)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// EndMoveColumns can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) EndMoveColumns() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_endMoveColumns(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BeginResetModel can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) BeginResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_beginResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// EndResetModel can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) EndResetModel() {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_endResetModel(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndex can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) ChangePersistentIndex(from *qt6.QModelIndex, to *qt6.QModelIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_changePersistentIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QModelIndex)(from.UnsafePointer()), (*C.QModelIndex)(to.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ChangePersistentIndexList can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) ChangePersistentIndexList(from []qt6.QModelIndex, to []qt6.QModelIndex) {
	from_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(from))))
	defer C.free(unsafe.Pointer(from_CArray))
	for i := range from {
		from_CArray[i] = (*C.QModelIndex)(from[i].UnsafePointer())
	}
	from_ma := C.struct_miqt_array{len: C.size_t(len(from)), data: unsafe.Pointer(from_CArray)}
	to_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(to))))
	defer C.free(unsafe.Pointer(to_CArray))
	for i := range to {
		to_CArray[i] = (*C.QModelIndex)(to[i].UnsafePointer())
	}
	to_ma := C.struct_miqt_array{len: C.size_t(len(to)), data: unsafe.Pointer(to_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QPdfBookmarkModel_protectedbase_changePersistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h), from_ma, to_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PersistentIndexList can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) PersistentIndexList() []qt6.QModelIndex {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QPdfBookmarkModel_protectedbase_persistentIndexList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := make([]qt6.QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPdfBookmarkModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfBookmarkModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfBookmarkModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPdfBookmarkModel that was directly constructed.
func (this *QPdfBookmarkModel) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfBookmarkModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPdfBookmarkModel) callVirtualBase_Data(index *qt6.QModelIndex, role int) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPdfBookmarkModel_virtualbase_data(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfBookmarkModel) OnData(slot func(super func(index *qt6.QModelIndex, role int) *qt6.QVariant, index *qt6.QModelIndex, role int) *qt6.QVariant) {
	ok := C.QPdfBookmarkModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_data
func miqt_exec_callback_QPdfBookmarkModel_data(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex, role int) *qt6.QVariant, index *qt6.QModelIndex, role int) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPdfBookmarkModel) callVirtualBase_Index(row int, column int, parent *qt6.QModelIndex) *qt6.QModelIndex {

	_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(C.QPdfBookmarkModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfBookmarkModel) OnIndex(slot func(super func(row int, column int, parent *qt6.QModelIndex) *qt6.QModelIndex, row int, column int, parent *qt6.QModelIndex) *qt6.QModelIndex) {
	ok := C.QPdfBookmarkModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_index
func miqt_exec_callback_QPdfBookmarkModel_index(self *C.QPdfBookmarkModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *qt6.QModelIndex) *qt6.QModelIndex, row int, column int, parent *qt6.QModelIndex) *qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QPdfBookmarkModel) callVirtualBase_Parent(index *qt6.QModelIndex) *qt6.QModelIndex {

	_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(C.QPdfBookmarkModel_virtualbase_parent(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfBookmarkModel) OnParent(slot func(super func(index *qt6.QModelIndex) *qt6.QModelIndex, index *qt6.QModelIndex) *qt6.QModelIndex) {
	ok := C.QPdfBookmarkModel_override_virtual_parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_parent
func miqt_exec_callback_QPdfBookmarkModel_parent(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex) *qt6.QModelIndex, index *qt6.QModelIndex) *qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Parent, slotval1)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QPdfBookmarkModel) callVirtualBase_RowCount(parent *qt6.QModelIndex) int {

	return (int)(C.QPdfBookmarkModel_virtualbase_rowCount(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnRowCount(slot func(super func(parent *qt6.QModelIndex) int, parent *qt6.QModelIndex) int) {
	ok := C.QPdfBookmarkModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_rowCount
func miqt_exec_callback_QPdfBookmarkModel_rowCount(self *C.QPdfBookmarkModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QModelIndex) int, parent *qt6.QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_ColumnCount(parent *qt6.QModelIndex) int {

	return (int)(C.QPdfBookmarkModel_virtualbase_columnCount(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnColumnCount(slot func(super func(parent *qt6.QModelIndex) int, parent *qt6.QModelIndex) int) {
	ok := C.QPdfBookmarkModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_columnCount
func miqt_exec_callback_QPdfBookmarkModel_columnCount(self *C.QPdfBookmarkModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QModelIndex) int, parent *qt6.QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QPdfBookmarkModel_virtualbase_roleNames(unsafe.Pointer(this.h))
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
func (this *QPdfBookmarkModel) OnRoleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QPdfBookmarkModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_roleNames
func miqt_exec_callback_QPdfBookmarkModel_roleNames(self *C.QPdfBookmarkModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_RoleNames)
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

func (this *QPdfBookmarkModel) callVirtualBase_Sibling(row int, column int, idx *qt6.QModelIndex) *qt6.QModelIndex {

	_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(C.QPdfBookmarkModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), (*C.QModelIndex)(idx.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfBookmarkModel) OnSibling(slot func(super func(row int, column int, idx *qt6.QModelIndex) *qt6.QModelIndex, row int, column int, idx *qt6.QModelIndex) *qt6.QModelIndex) {
	ok := C.QPdfBookmarkModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_sibling
func miqt_exec_callback_QPdfBookmarkModel_sibling(self *C.QPdfBookmarkModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *qt6.QModelIndex) *qt6.QModelIndex, row int, column int, idx *qt6.QModelIndex) *qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(idx))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QPdfBookmarkModel) callVirtualBase_HasChildren(parent *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_hasChildren(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnHasChildren(slot func(super func(parent *qt6.QModelIndex) bool, parent *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_hasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_hasChildren
func miqt_exec_callback_QPdfBookmarkModel_hasChildren(self *C.QPdfBookmarkModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QModelIndex) bool, parent *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_SetData(index *qt6.QModelIndex, value *qt6.QVariant, role int) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_setData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))

}
func (this *QPdfBookmarkModel) OnSetData(slot func(super func(index *qt6.QModelIndex, value *qt6.QVariant, role int) bool, index *qt6.QModelIndex, value *qt6.QVariant, role int) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_setData
func miqt_exec_callback_QPdfBookmarkModel_setData(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex, value *qt6.QVariant, role int) bool, index *qt6.QModelIndex, value *qt6.QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_HeaderData(section int, orientation qt6.Orientation, role int) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPdfBookmarkModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfBookmarkModel) OnHeaderData(slot func(super func(section int, orientation qt6.Orientation, role int) *qt6.QVariant, section int, orientation qt6.Orientation, role int) *qt6.QVariant) {
	ok := C.QPdfBookmarkModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_headerData
func miqt_exec_callback_QPdfBookmarkModel_headerData(self *C.QPdfBookmarkModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation qt6.Orientation, role int) *qt6.QVariant, section int, orientation qt6.Orientation, role int) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (qt6.Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPdfBookmarkModel) callVirtualBase_SetHeaderData(section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (*C.QVariant)(value.UnsafePointer()), (C.int)(role)))

}
func (this *QPdfBookmarkModel) OnSetHeaderData(slot func(super func(section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool, section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_setHeaderData
func miqt_exec_callback_QPdfBookmarkModel_setHeaderData(self *C.QPdfBookmarkModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool, section int, orientation qt6.Orientation, value *qt6.QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (qt6.Orientation)(orientation)

	slotval3 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_ItemData(index *qt6.QModelIndex) map[int]qt6.QVariant {

	var _mm C.struct_miqt_map = C.QPdfBookmarkModel_virtualbase_itemData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))
	_ret := make(map[int]qt6.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QPdfBookmarkModel) OnItemData(slot func(super func(index *qt6.QModelIndex) map[int]qt6.QVariant, index *qt6.QModelIndex) map[int]qt6.QVariant) {
	ok := C.QPdfBookmarkModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_itemData
func miqt_exec_callback_QPdfBookmarkModel_itemData(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex) map[int]qt6.QVariant, index *qt6.QModelIndex) map[int]qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_ItemData, slotval1)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_Values_CArray[virtualReturn_ctr] = (*C.QVariant)(virtualReturn_v.UnsafePointer())
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QPdfBookmarkModel) callVirtualBase_SetItemData(index *qt6.QModelIndex, roles map[int]qt6.QVariant) bool {
	roles_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Keys_CArray))
	roles_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Values_CArray))
	roles_ctr := 0
	for roles_k, roles_v := range roles {
		roles_Keys_CArray[roles_ctr] = (C.int)(roles_k)
		roles_Values_CArray[roles_ctr] = (*C.QVariant)(roles_v.UnsafePointer())
		roles_ctr++
	}
	roles_mm := C.struct_miqt_map{
		len:    C.size_t(len(roles)),
		keys:   unsafe.Pointer(roles_Keys_CArray),
		values: unsafe.Pointer(roles_Values_CArray),
	}

	return (bool)(C.QPdfBookmarkModel_virtualbase_setItemData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()), roles_mm))

}
func (this *QPdfBookmarkModel) OnSetItemData(slot func(super func(index *qt6.QModelIndex, roles map[int]qt6.QVariant) bool, index *qt6.QModelIndex, roles map[int]qt6.QVariant) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_setItemData
func miqt_exec_callback_QPdfBookmarkModel_setItemData(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex, roles map[int]qt6.QVariant) bool, index *qt6.QModelIndex, roles map[int]qt6.QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	var roles_mm C.struct_miqt_map = roles
	roles_ret := make(map[int]qt6.QVariant, int(roles_mm.len))
	roles_Keys := (*[0xffff]C.int)(unsafe.Pointer(roles_mm.keys))
	roles_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(roles_mm.values))
	for i := 0; i < int(roles_mm.len); i++ {
		roles_entry_Key := (int)(roles_Keys[i])

		roles_mapval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(roles_Values[i]))
		roles_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		roles_entry_Value := *roles_mapval_goptr

		roles_ret[roles_entry_Key] = roles_entry_Value
	}
	slotval2 := roles_ret

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_ClearItemData(index *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_clearItemData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnClearItemData(slot func(super func(index *qt6.QModelIndex) bool, index *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_clearItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_clearItemData
func miqt_exec_callback_QPdfBookmarkModel_clearItemData(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex) bool, index *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_ClearItemData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QPdfBookmarkModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QPdfBookmarkModel) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QPdfBookmarkModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_mimeTypes
func miqt_exec_callback_QPdfBookmarkModel_mimeTypes(self *C.QPdfBookmarkModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_MimeTypes)
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

func (this *QPdfBookmarkModel) callVirtualBase_MimeData(indexes []qt6.QModelIndex) *qt6.QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (*C.QModelIndex)(indexes[i].UnsafePointer())
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return qt6.UnsafeNewQMimeData(unsafe.Pointer(C.QPdfBookmarkModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma)))

}
func (this *QPdfBookmarkModel) OnMimeData(slot func(super func(indexes []qt6.QModelIndex) *qt6.QMimeData, indexes []qt6.QModelIndex) *qt6.QMimeData) {
	ok := C.QPdfBookmarkModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_mimeData
func miqt_exec_callback_QPdfBookmarkModel_mimeData(self *C.QPdfBookmarkModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indexes []qt6.QModelIndex) *qt6.QMimeData, indexes []qt6.QModelIndex) *qt6.QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]qt6.QModelIndex, int(indexes_ma.len))
	indexes_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(indexes_ma.data)) // hey ya
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_lv_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(indexes_outCast[i]))
		indexes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		indexes_ret[i] = *indexes_lv_goptr
	}
	slotval1 := indexes_ret

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_MimeData, slotval1)

	return (*C.QMimeData)(virtualReturn.UnsafePointer())

}

func (this *QPdfBookmarkModel) callVirtualBase_CanDropMimeData(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(data.UnsafePointer()), (C.int)(action), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnCanDropMimeData(slot func(super func(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool, data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_canDropMimeData
func miqt_exec_callback_QPdfBookmarkModel_canDropMimeData(self *C.QPdfBookmarkModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool, data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMimeData(unsafe.Pointer(data))

	slotval2 := (qt6.DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_DropMimeData(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(data.UnsafePointer()), (C.int)(action), (C.int)(row), (C.int)(column), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnDropMimeData(slot func(super func(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool, data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_dropMimeData
func miqt_exec_callback_QPdfBookmarkModel_dropMimeData(self *C.QPdfBookmarkModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool, data *qt6.QMimeData, action qt6.DropAction, row int, column int, parent *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMimeData(unsafe.Pointer(data))

	slotval2 := (qt6.DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_SupportedDropActions() qt6.DropAction {

	return (qt6.DropAction)(C.QPdfBookmarkModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QPdfBookmarkModel) OnSupportedDropActions(slot func(super func() qt6.DropAction) qt6.DropAction) {
	ok := C.QPdfBookmarkModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_supportedDropActions
func miqt_exec_callback_QPdfBookmarkModel_supportedDropActions(self *C.QPdfBookmarkModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt6.DropAction) qt6.DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_SupportedDragActions() qt6.DropAction {

	return (qt6.DropAction)(C.QPdfBookmarkModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QPdfBookmarkModel) OnSupportedDragActions(slot func(super func() qt6.DropAction) qt6.DropAction) {
	ok := C.QPdfBookmarkModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_supportedDragActions
func miqt_exec_callback_QPdfBookmarkModel_supportedDragActions(self *C.QPdfBookmarkModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt6.DropAction) qt6.DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_InsertRows(row int, count int, parent *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnInsertRows(slot func(super func(row int, count int, parent *qt6.QModelIndex) bool, row int, count int, parent *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_insertRows
func miqt_exec_callback_QPdfBookmarkModel_insertRows(self *C.QPdfBookmarkModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *qt6.QModelIndex) bool, row int, count int, parent *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_InsertColumns(column int, count int, parent *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnInsertColumns(slot func(super func(column int, count int, parent *qt6.QModelIndex) bool, column int, count int, parent *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_insertColumns
func miqt_exec_callback_QPdfBookmarkModel_insertColumns(self *C.QPdfBookmarkModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *qt6.QModelIndex) bool, column int, count int, parent *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_RemoveRows(row int, count int, parent *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnRemoveRows(slot func(super func(row int, count int, parent *qt6.QModelIndex) bool, row int, count int, parent *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_removeRows
func miqt_exec_callback_QPdfBookmarkModel_removeRows(self *C.QPdfBookmarkModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *qt6.QModelIndex) bool, row int, count int, parent *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_RemoveColumns(column int, count int, parent *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnRemoveColumns(slot func(super func(column int, count int, parent *qt6.QModelIndex) bool, column int, count int, parent *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_removeColumns
func miqt_exec_callback_QPdfBookmarkModel_removeColumns(self *C.QPdfBookmarkModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *qt6.QModelIndex) bool, column int, count int, parent *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_MoveRows(sourceParent *qt6.QModelIndex, sourceRow int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_moveRows(unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceRow), (C.int)(count), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationChild)))

}
func (this *QPdfBookmarkModel) OnMoveRows(slot func(super func(sourceParent *qt6.QModelIndex, sourceRow int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool, sourceParent *qt6.QModelIndex, sourceRow int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_moveRows
func miqt_exec_callback_QPdfBookmarkModel_moveRows(self *C.QPdfBookmarkModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent *qt6.QModelIndex, sourceRow int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool, sourceParent *qt6.QModelIndex, sourceRow int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(sourceParent))

	slotval2 := (int)(sourceRow)

	slotval3 := (int)(count)

	slotval4 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(destinationParent))

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_MoveColumns(sourceParent *qt6.QModelIndex, sourceColumn int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_moveColumns(unsafe.Pointer(this.h), (*C.QModelIndex)(sourceParent.UnsafePointer()), (C.int)(sourceColumn), (C.int)(count), (*C.QModelIndex)(destinationParent.UnsafePointer()), (C.int)(destinationChild)))

}
func (this *QPdfBookmarkModel) OnMoveColumns(slot func(super func(sourceParent *qt6.QModelIndex, sourceColumn int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool, sourceParent *qt6.QModelIndex, sourceColumn int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_moveColumns
func miqt_exec_callback_QPdfBookmarkModel_moveColumns(self *C.QPdfBookmarkModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent *qt6.QModelIndex, sourceColumn int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool, sourceParent *qt6.QModelIndex, sourceColumn int, count int, destinationParent *qt6.QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(sourceParent))

	slotval2 := (int)(sourceColumn)

	slotval3 := (int)(count)

	slotval4 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(destinationParent))

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_FetchMore(parent *qt6.QModelIndex) {

	C.QPdfBookmarkModel_virtualbase_fetchMore(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer()))

}
func (this *QPdfBookmarkModel) OnFetchMore(slot func(super func(parent *qt6.QModelIndex), parent *qt6.QModelIndex)) {
	ok := C.QPdfBookmarkModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_fetchMore
func miqt_exec_callback_QPdfBookmarkModel_fetchMore(self *C.QPdfBookmarkModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QModelIndex), parent *qt6.QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QPdfBookmarkModel) callVirtualBase_CanFetchMore(parent *qt6.QModelIndex) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), (*C.QModelIndex)(parent.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnCanFetchMore(slot func(super func(parent *qt6.QModelIndex) bool, parent *qt6.QModelIndex) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_canFetchMore
func miqt_exec_callback_QPdfBookmarkModel_canFetchMore(self *C.QPdfBookmarkModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QModelIndex) bool, parent *qt6.QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_Flags(index *qt6.QModelIndex) qt6.ItemFlag {

	return (qt6.ItemFlag)(C.QPdfBookmarkModel_virtualbase_flags(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnFlags(slot func(super func(index *qt6.QModelIndex) qt6.ItemFlag, index *qt6.QModelIndex) qt6.ItemFlag) {
	ok := C.QPdfBookmarkModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_flags
func miqt_exec_callback_QPdfBookmarkModel_flags(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex) qt6.ItemFlag, index *qt6.QModelIndex) qt6.ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_Sort(column int, order qt6.SortOrder) {

	C.QPdfBookmarkModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QPdfBookmarkModel) OnSort(slot func(super func(column int, order qt6.SortOrder), column int, order qt6.SortOrder)) {
	ok := C.QPdfBookmarkModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_sort
func miqt_exec_callback_QPdfBookmarkModel_sort(self *C.QPdfBookmarkModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order qt6.SortOrder), column int, order qt6.SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (qt6.SortOrder)(order)

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QPdfBookmarkModel) callVirtualBase_Buddy(index *qt6.QModelIndex) *qt6.QModelIndex {

	_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(C.QPdfBookmarkModel_virtualbase_buddy(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfBookmarkModel) OnBuddy(slot func(super func(index *qt6.QModelIndex) *qt6.QModelIndex, index *qt6.QModelIndex) *qt6.QModelIndex) {
	ok := C.QPdfBookmarkModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_buddy
func miqt_exec_callback_QPdfBookmarkModel_buddy(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex) *qt6.QModelIndex, index *qt6.QModelIndex) *qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Buddy, slotval1)

	return (*C.QModelIndex)(virtualReturn.UnsafePointer())

}

func (this *QPdfBookmarkModel) callVirtualBase_Match(start *qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex {

	var _ma C.struct_miqt_array = C.QPdfBookmarkModel_virtualbase_match(unsafe.Pointer(this.h), (*C.QModelIndex)(start.UnsafePointer()), (C.int)(role), (*C.QVariant)(value.UnsafePointer()), (C.int)(hits), (C.int)(flags))
	_ret := make([]qt6.QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQModelIndex(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QPdfBookmarkModel) OnMatch(slot func(super func(start *qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex, start *qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex) {
	ok := C.QPdfBookmarkModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_match
func miqt_exec_callback_QPdfBookmarkModel_match(self *C.QPdfBookmarkModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(start *qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex, start *qt6.QModelIndex, role int, value *qt6.QVariant, hits int, flags qt6.MatchFlag) []qt6.QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(start))

	slotval2 := (int)(role)

	slotval3 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval4 := (int)(hits)

	slotval5 := (qt6.MatchFlag)(flags)

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QModelIndex)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QPdfBookmarkModel) callVirtualBase_Span(index *qt6.QModelIndex) *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPdfBookmarkModel_virtualbase_span(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPdfBookmarkModel) OnSpan(slot func(super func(index *qt6.QModelIndex) *qt6.QSize, index *qt6.QModelIndex) *qt6.QSize) {
	ok := C.QPdfBookmarkModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_span
func miqt_exec_callback_QPdfBookmarkModel_span(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex) *qt6.QSize, index *qt6.QModelIndex) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Span, slotval1)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPdfBookmarkModel) callVirtualBase_MultiData(index *qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan) {

	C.QPdfBookmarkModel_virtualbase_multiData(unsafe.Pointer(this.h), (*C.QModelIndex)(index.UnsafePointer()), (*C.QModelRoleDataSpan)(roleDataSpan.UnsafePointer()))

}
func (this *QPdfBookmarkModel) OnMultiData(slot func(super func(index *qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan), index *qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan)) {
	ok := C.QPdfBookmarkModel_override_virtual_multiData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_multiData
func miqt_exec_callback_QPdfBookmarkModel_multiData(self *C.QPdfBookmarkModel, cb C.intptr_t, index *C.QModelIndex, roleDataSpan *C.QModelRoleDataSpan) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan), index *qt6.QModelIndex, roleDataSpan qt6.QModelRoleDataSpan))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQModelIndex(unsafe.Pointer(index))

	roleDataSpan_goptr := qt6.UnsafeNewQModelRoleDataSpan(unsafe.Pointer(roleDataSpan))
	roleDataSpan_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *roleDataSpan_goptr

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_MultiData, slotval1, slotval2)

}

func (this *QPdfBookmarkModel) callVirtualBase_Submit() bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QPdfBookmarkModel) OnSubmit(slot func(super func() bool) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_submit
func miqt_exec_callback_QPdfBookmarkModel_submit(self *C.QPdfBookmarkModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_Revert() {

	C.QPdfBookmarkModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QPdfBookmarkModel) OnRevert(slot func(super func())) {
	ok := C.QPdfBookmarkModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_revert
func miqt_exec_callback_QPdfBookmarkModel_revert(self *C.QPdfBookmarkModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Revert)

}

func (this *QPdfBookmarkModel) callVirtualBase_ResetInternalData() {

	C.QPdfBookmarkModel_virtualbase_resetInternalData(unsafe.Pointer(this.h))

}
func (this *QPdfBookmarkModel) OnResetInternalData(slot func(super func())) {
	ok := C.QPdfBookmarkModel_override_virtual_resetInternalData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_resetInternalData
func miqt_exec_callback_QPdfBookmarkModel_resetInternalData(self *C.QPdfBookmarkModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_ResetInternalData)

}

func (this *QPdfBookmarkModel) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_event
func miqt_exec_callback_QPdfBookmarkModel_event(self *C.QPdfBookmarkModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QPdfBookmarkModel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfBookmarkModel) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPdfBookmarkModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_eventFilter
func miqt_exec_callback_QPdfBookmarkModel_eventFilter(self *C.QPdfBookmarkModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfBookmarkModel) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPdfBookmarkModel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPdfBookmarkModel) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPdfBookmarkModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_timerEvent
func miqt_exec_callback_QPdfBookmarkModel_timerEvent(self *C.QPdfBookmarkModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPdfBookmarkModel) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPdfBookmarkModel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPdfBookmarkModel) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPdfBookmarkModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_childEvent
func miqt_exec_callback_QPdfBookmarkModel_childEvent(self *C.QPdfBookmarkModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPdfBookmarkModel) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPdfBookmarkModel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPdfBookmarkModel) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPdfBookmarkModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_customEvent
func miqt_exec_callback_QPdfBookmarkModel_customEvent(self *C.QPdfBookmarkModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPdfBookmarkModel) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPdfBookmarkModel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfBookmarkModel) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPdfBookmarkModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_connectNotify
func miqt_exec_callback_QPdfBookmarkModel_connectNotify(self *C.QPdfBookmarkModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPdfBookmarkModel) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPdfBookmarkModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfBookmarkModel) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPdfBookmarkModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfBookmarkModel_disconnectNotify
func miqt_exec_callback_QPdfBookmarkModel_disconnectNotify(self *C.QPdfBookmarkModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfBookmarkModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPdfBookmarkModel) Delete() {
	C.QPdfBookmarkModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfBookmarkModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfBookmarkModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
