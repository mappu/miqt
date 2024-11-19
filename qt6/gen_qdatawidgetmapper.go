package qt6

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
	QDataWidgetMapper__AutoSubmit   QDataWidgetMapper__SubmitPolicy = 0
	QDataWidgetMapper__ManualSubmit QDataWidgetMapper__SubmitPolicy = 1
)

type QDataWidgetMapper struct {
	h          *C.QDataWidgetMapper
	isSubclass bool
	*QObject
}

func (this *QDataWidgetMapper) cPointer() *C.QDataWidgetMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDataWidgetMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDataWidgetMapper constructs the type using only CGO pointers.
func newQDataWidgetMapper(h *C.QDataWidgetMapper, h_QObject *C.QObject) *QDataWidgetMapper {
	if h == nil {
		return nil
	}
	return &QDataWidgetMapper{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQDataWidgetMapper constructs the type using only unsafe pointers.
func UnsafeNewQDataWidgetMapper(h unsafe.Pointer, h_QObject unsafe.Pointer) *QDataWidgetMapper {
	if h == nil {
		return nil
	}

	return &QDataWidgetMapper{h: (*C.QDataWidgetMapper)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQDataWidgetMapper constructs a new QDataWidgetMapper object.
func NewQDataWidgetMapper() *QDataWidgetMapper {
	var outptr_QDataWidgetMapper *C.QDataWidgetMapper = nil
	var outptr_QObject *C.QObject = nil

	C.QDataWidgetMapper_new(&outptr_QDataWidgetMapper, &outptr_QObject)
	ret := newQDataWidgetMapper(outptr_QDataWidgetMapper, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQDataWidgetMapper2 constructs a new QDataWidgetMapper object.
func NewQDataWidgetMapper2(parent *QObject) *QDataWidgetMapper {
	var outptr_QDataWidgetMapper *C.QDataWidgetMapper = nil
	var outptr_QObject *C.QObject = nil

	C.QDataWidgetMapper_new2(parent.cPointer(), &outptr_QDataWidgetMapper, &outptr_QObject)
	ret := newQDataWidgetMapper(outptr_QDataWidgetMapper, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QDataWidgetMapper) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDataWidgetMapper_MetaObject(this.h)))
}

func (this *QDataWidgetMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDataWidgetMapper_Metacast(this.h, param1_Cstring))
}

func QDataWidgetMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDataWidgetMapper) SetModel(model *QAbstractItemModel) {
	C.QDataWidgetMapper_SetModel(this.h, model.cPointer())
}

func (this *QDataWidgetMapper) Model() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QDataWidgetMapper_Model(this.h)), nil)
}

func (this *QDataWidgetMapper) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QDataWidgetMapper_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QDataWidgetMapper) ItemDelegate() *QAbstractItemDelegate {
	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QDataWidgetMapper_ItemDelegate(this.h)), nil)
}

func (this *QDataWidgetMapper) SetRootIndex(index *QModelIndex) {
	C.QDataWidgetMapper_SetRootIndex(this.h, index.cPointer())
}

func (this *QDataWidgetMapper) RootIndex() *QModelIndex {
	_ret := C.QDataWidgetMapper_RootIndex(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDataWidgetMapper) SetOrientation(aOrientation Orientation) {
	C.QDataWidgetMapper_SetOrientation(this.h, (C.int)(aOrientation))
}

func (this *QDataWidgetMapper) Orientation() Orientation {
	return (Orientation)(C.QDataWidgetMapper_Orientation(this.h))
}

func (this *QDataWidgetMapper) SetSubmitPolicy(policy QDataWidgetMapper__SubmitPolicy) {
	C.QDataWidgetMapper_SetSubmitPolicy(this.h, (C.int)(policy))
}

func (this *QDataWidgetMapper) SubmitPolicy() QDataWidgetMapper__SubmitPolicy {
	return (QDataWidgetMapper__SubmitPolicy)(C.QDataWidgetMapper_SubmitPolicy(this.h))
}

func (this *QDataWidgetMapper) AddMapping(widget *QWidget, section int) {
	C.QDataWidgetMapper_AddMapping(this.h, widget.cPointer(), (C.int)(section))
}

func (this *QDataWidgetMapper) AddMapping2(widget *QWidget, section int, propertyName []byte) {
	propertyName_alias := C.struct_miqt_string{}
	propertyName_alias.data = (*C.char)(unsafe.Pointer(&propertyName[0]))
	propertyName_alias.len = C.size_t(len(propertyName))
	C.QDataWidgetMapper_AddMapping2(this.h, widget.cPointer(), (C.int)(section), propertyName_alias)
}

func (this *QDataWidgetMapper) RemoveMapping(widget *QWidget) {
	C.QDataWidgetMapper_RemoveMapping(this.h, widget.cPointer())
}

func (this *QDataWidgetMapper) MappedSection(widget *QWidget) int {
	return (int)(C.QDataWidgetMapper_MappedSection(this.h, widget.cPointer()))
}

func (this *QDataWidgetMapper) MappedPropertyName(widget *QWidget) []byte {
	var _bytearray C.struct_miqt_string = C.QDataWidgetMapper_MappedPropertyName(this.h, widget.cPointer())
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QDataWidgetMapper) MappedWidgetAt(section int) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QDataWidgetMapper_MappedWidgetAt(this.h, (C.int)(section))), nil, nil)
}

func (this *QDataWidgetMapper) ClearMapping() {
	C.QDataWidgetMapper_ClearMapping(this.h)
}

func (this *QDataWidgetMapper) CurrentIndex() int {
	return (int)(C.QDataWidgetMapper_CurrentIndex(this.h))
}

func (this *QDataWidgetMapper) Revert() {
	C.QDataWidgetMapper_Revert(this.h)
}

func (this *QDataWidgetMapper) Submit() bool {
	return (bool)(C.QDataWidgetMapper_Submit(this.h))
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
func (this *QDataWidgetMapper) OnCurrentIndexChanged(slot func(index int)) {
	C.QDataWidgetMapper_connect_CurrentIndexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_CurrentIndexChanged
func miqt_exec_callback_QDataWidgetMapper_CurrentIndexChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func QDataWidgetMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDataWidgetMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDataWidgetMapper) callVirtualBase_SetCurrentIndex(index int) {

	C.QDataWidgetMapper_virtualbase_SetCurrentIndex(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QDataWidgetMapper) OnSetCurrentIndex(slot func(super func(index int), index int)) {
	C.QDataWidgetMapper_override_virtual_SetCurrentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_SetCurrentIndex
func miqt_exec_callback_QDataWidgetMapper_SetCurrentIndex(self *C.QDataWidgetMapper, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_SetCurrentIndex, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDataWidgetMapper_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDataWidgetMapper) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QDataWidgetMapper_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_Event
func miqt_exec_callback_QDataWidgetMapper_Event(self *C.QDataWidgetMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDataWidgetMapper) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDataWidgetMapper_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDataWidgetMapper) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QDataWidgetMapper_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_EventFilter
func miqt_exec_callback_QDataWidgetMapper_EventFilter(self *C.QDataWidgetMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDataWidgetMapper) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDataWidgetMapper_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDataWidgetMapper) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QDataWidgetMapper_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_TimerEvent
func miqt_exec_callback_QDataWidgetMapper_TimerEvent(self *C.QDataWidgetMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDataWidgetMapper_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDataWidgetMapper) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QDataWidgetMapper_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_ChildEvent
func miqt_exec_callback_QDataWidgetMapper_ChildEvent(self *C.QDataWidgetMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDataWidgetMapper_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDataWidgetMapper) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QDataWidgetMapper_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_CustomEvent
func miqt_exec_callback_QDataWidgetMapper_CustomEvent(self *C.QDataWidgetMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDataWidgetMapper_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDataWidgetMapper) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QDataWidgetMapper_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_ConnectNotify
func miqt_exec_callback_QDataWidgetMapper_ConnectNotify(self *C.QDataWidgetMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDataWidgetMapper_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDataWidgetMapper) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QDataWidgetMapper_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_DisconnectNotify
func miqt_exec_callback_QDataWidgetMapper_DisconnectNotify(self *C.QDataWidgetMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDataWidgetMapper) Delete() {
	C.QDataWidgetMapper_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDataWidgetMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QDataWidgetMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
