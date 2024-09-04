package qt

/*

#include "gen_qdatawidgetmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDataWidgetMapper__SubmitPolicy int

const (
	QDataWidgetMapper__SubmitPolicy__AutoSubmit   QDataWidgetMapper__SubmitPolicy = 0
	QDataWidgetMapper__SubmitPolicy__ManualSubmit QDataWidgetMapper__SubmitPolicy = 1
)

type QDataWidgetMapper struct {
	h *C.QDataWidgetMapper
	*QObject
}

func (this *QDataWidgetMapper) cPointer() *C.QDataWidgetMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDataWidgetMapper(h *C.QDataWidgetMapper) *QDataWidgetMapper {
	if h == nil {
		return nil
	}
	return &QDataWidgetMapper{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQDataWidgetMapper_U(h unsafe.Pointer) *QDataWidgetMapper {
	return newQDataWidgetMapper((*C.QDataWidgetMapper)(h))
}

// NewQDataWidgetMapper constructs a new QDataWidgetMapper object.
func NewQDataWidgetMapper() *QDataWidgetMapper {
	ret := C.QDataWidgetMapper_new()
	return newQDataWidgetMapper(ret)
}

// NewQDataWidgetMapper2 constructs a new QDataWidgetMapper object.
func NewQDataWidgetMapper2(parent *QObject) *QDataWidgetMapper {
	ret := C.QDataWidgetMapper_new2(parent.cPointer())
	return newQDataWidgetMapper(ret)
}

func (this *QDataWidgetMapper) MetaObject() *QMetaObject {
	ret := C.QDataWidgetMapper_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDataWidgetMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDataWidgetMapper_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDataWidgetMapper_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDataWidgetMapper_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDataWidgetMapper) SetModel(model *QAbstractItemModel) {
	C.QDataWidgetMapper_SetModel(this.h, model.cPointer())
}

func (this *QDataWidgetMapper) Model() *QAbstractItemModel {
	ret := C.QDataWidgetMapper_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(ret))
}

func (this *QDataWidgetMapper) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QDataWidgetMapper_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QDataWidgetMapper) ItemDelegate() *QAbstractItemDelegate {
	ret := C.QDataWidgetMapper_ItemDelegate(this.h)
	return newQAbstractItemDelegate_U(unsafe.Pointer(ret))
}

func (this *QDataWidgetMapper) SetRootIndex(index *QModelIndex) {
	C.QDataWidgetMapper_SetRootIndex(this.h, index.cPointer())
}

func (this *QDataWidgetMapper) RootIndex() *QModelIndex {
	ret := C.QDataWidgetMapper_RootIndex(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDataWidgetMapper) SetOrientation(aOrientation Orientation) {
	C.QDataWidgetMapper_SetOrientation(this.h, (C.uintptr_t)(aOrientation))
}

func (this *QDataWidgetMapper) Orientation() Orientation {
	ret := C.QDataWidgetMapper_Orientation(this.h)
	return (Orientation)(ret)
}

func (this *QDataWidgetMapper) SetSubmitPolicy(policy QDataWidgetMapper__SubmitPolicy) {
	C.QDataWidgetMapper_SetSubmitPolicy(this.h, (C.uintptr_t)(policy))
}

func (this *QDataWidgetMapper) SubmitPolicy() QDataWidgetMapper__SubmitPolicy {
	ret := C.QDataWidgetMapper_SubmitPolicy(this.h)
	return (QDataWidgetMapper__SubmitPolicy)(ret)
}

func (this *QDataWidgetMapper) AddMapping(widget *QWidget, section int) {
	C.QDataWidgetMapper_AddMapping(this.h, widget.cPointer(), (C.int)(section))
}

func (this *QDataWidgetMapper) AddMapping2(widget *QWidget, section int, propertyName *QByteArray) {
	C.QDataWidgetMapper_AddMapping2(this.h, widget.cPointer(), (C.int)(section), propertyName.cPointer())
}

func (this *QDataWidgetMapper) RemoveMapping(widget *QWidget) {
	C.QDataWidgetMapper_RemoveMapping(this.h, widget.cPointer())
}

func (this *QDataWidgetMapper) MappedSection(widget *QWidget) int {
	ret := C.QDataWidgetMapper_MappedSection(this.h, widget.cPointer())
	return (int)(ret)
}

func (this *QDataWidgetMapper) MappedPropertyName(widget *QWidget) *QByteArray {
	ret := C.QDataWidgetMapper_MappedPropertyName(this.h, widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDataWidgetMapper) MappedWidgetAt(section int) *QWidget {
	ret := C.QDataWidgetMapper_MappedWidgetAt(this.h, (C.int)(section))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QDataWidgetMapper) ClearMapping() {
	C.QDataWidgetMapper_ClearMapping(this.h)
}

func (this *QDataWidgetMapper) CurrentIndex() int {
	ret := C.QDataWidgetMapper_CurrentIndex(this.h)
	return (int)(ret)
}

func (this *QDataWidgetMapper) Revert() {
	C.QDataWidgetMapper_Revert(this.h)
}

func (this *QDataWidgetMapper) Submit() bool {
	ret := C.QDataWidgetMapper_Submit(this.h)
	return (bool)(ret)
}

func (this *QDataWidgetMapper) ToFirst() {
	C.QDataWidgetMapper_ToFirst(this.h)
}

func (this *QDataWidgetMapper) ToLast() {
	C.QDataWidgetMapper_ToLast(this.h)
}

func (this *QDataWidgetMapper) ToNext() {
	C.QDataWidgetMapper_ToNext(this.h)
}

func (this *QDataWidgetMapper) ToPrevious() {
	C.QDataWidgetMapper_ToPrevious(this.h)
}

func (this *QDataWidgetMapper) SetCurrentIndex(index int) {
	C.QDataWidgetMapper_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QDataWidgetMapper) SetCurrentModelIndex(index *QModelIndex) {
	C.QDataWidgetMapper_SetCurrentModelIndex(this.h, index.cPointer())
}

func (this *QDataWidgetMapper) CurrentIndexChanged(index int) {
	C.QDataWidgetMapper_CurrentIndexChanged(this.h, (C.int)(index))
}

func (this *QDataWidgetMapper) OnCurrentIndexChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDataWidgetMapper_connect_CurrentIndexChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QDataWidgetMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDataWidgetMapper_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDataWidgetMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDataWidgetMapper_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDataWidgetMapper_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDataWidgetMapper_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDataWidgetMapper_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDataWidgetMapper_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDataWidgetMapper) Delete() {
	C.QDataWidgetMapper_Delete(this.h)
}
