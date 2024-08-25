package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qstringlistmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStringListModel struct {
	h *C.QStringListModel
	*QAbstractListModel
}

func (this *QStringListModel) cPointer() *C.QStringListModel {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStringListModel(h *C.QStringListModel) *QStringListModel {
	return &QStringListModel{h: h, QAbstractListModel: newQAbstractListModel_U(unsafe.Pointer(h))}
}

func newQStringListModel_U(h unsafe.Pointer) *QStringListModel {
	return newQStringListModel((*C.QStringListModel)(h))
}

// NewQStringListModel constructs a new QStringListModel object.
func NewQStringListModel() *QStringListModel {
	ret := C.QStringListModel_new()
	return newQStringListModel(ret)
}

// NewQStringListModel2 constructs a new QStringListModel object.
func NewQStringListModel2(strings []string) *QStringListModel {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.size_t)(len(strings[i]))
	}
	ret := C.QStringListModel_new2(&strings_CArray[0], &strings_Lengths[0], C.ulong(len(strings)))
	return newQStringListModel(ret)
}

// NewQStringListModel3 constructs a new QStringListModel object.
func NewQStringListModel3(parent *QObject) *QStringListModel {
	ret := C.QStringListModel_new3(parent.cPointer())
	return newQStringListModel(ret)
}

// NewQStringListModel4 constructs a new QStringListModel object.
func NewQStringListModel4(strings []string, parent *QObject) *QStringListModel {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.size_t)(len(strings[i]))
	}
	ret := C.QStringListModel_new4(&strings_CArray[0], &strings_Lengths[0], C.ulong(len(strings)), parent.cPointer())
	return newQStringListModel(ret)
}

func (this *QStringListModel) MetaObject() *QMetaObject {
	ret := C.QStringListModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QStringListModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStringListModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStringListModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStringListModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStringListModel) RowCount() int {
	ret := C.QStringListModel_RowCount(this.h)
	return (int)(ret)
}

func (this *QStringListModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	ret := C.QStringListModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringListModel) Data(index *QModelIndex) *QVariant {
	ret := C.QStringListModel_Data(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringListModel) SetData(index *QModelIndex, value *QVariant) bool {
	ret := C.QStringListModel_SetData(this.h, index.cPointer(), value.cPointer())
	return (bool)(ret)
}

func (this *QStringListModel) InsertRows(row int, count int) bool {
	ret := C.QStringListModel_InsertRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QStringListModel) RemoveRows(row int, count int) bool {
	ret := C.QStringListModel_RemoveRows(this.h, (C.int)(row), (C.int)(count))
	return (bool)(ret)
}

func (this *QStringListModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {
	ret := C.QStringListModel_MoveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild))
	return (bool)(ret)
}

func (this *QStringListModel) StringList() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QStringListModel_StringList(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStringListModel) SetStringList(strings []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.size_t)(len(strings[i]))
	}
	C.QStringListModel_SetStringList(this.h, &strings_CArray[0], &strings_Lengths[0], C.ulong(len(strings)))
}

func QStringListModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStringListModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStringListModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStringListModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStringListModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStringListModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStringListModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStringListModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStringListModel) RowCount1(parent *QModelIndex) int {
	ret := C.QStringListModel_RowCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QStringListModel) Data2(index *QModelIndex, role int) *QVariant {
	ret := C.QStringListModel_Data2(this.h, index.cPointer(), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringListModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	ret := C.QStringListModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QStringListModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QStringListModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QStringListModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	ret := C.QStringListModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer())
	return (bool)(ret)
}

func (this *QStringListModel) Delete() {
	C.QStringListModel_Delete(this.h)
}
