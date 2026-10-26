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
	QDataWidgetMapper__AutoSubmit   QDataWidgetMapper__SubmitPolicy = 0
	QDataWidgetMapper__ManualSubmit QDataWidgetMapper__SubmitPolicy = 1
)

type QDataWidgetMapper struct {
	h  *C.QDataWidgetMapper
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDataWidgetMapper) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
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
func newQDataWidgetMapper(h *C.QDataWidgetMapper) *QDataWidgetMapper {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDataWidgetMapper_virtbase(h, &outptr_QObject)

	return &QDataWidgetMapper{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQDataWidgetMapper constructs the type using only unsafe pointers.
func UnsafeNewQDataWidgetMapper(h unsafe.Pointer) *QDataWidgetMapper {
	return newQDataWidgetMapper((*C.QDataWidgetMapper)(h))
}

// NewQDataWidgetMapper constructs a new QDataWidgetMapper object.
func NewQDataWidgetMapper() *QDataWidgetMapper {

	return newQDataWidgetMapper(C.QDataWidgetMapper_new())
}

// NewQDataWidgetMapper2 constructs a new QDataWidgetMapper object.
func NewQDataWidgetMapper2(parent *QObject) *QDataWidgetMapper {
	defer runtime.KeepAlive(parent)

	return newQDataWidgetMapper(C.QDataWidgetMapper_new2(parent.cPointer()))
}

func (this *QDataWidgetMapper) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QDataWidgetMapper_metaObject(this.h))
}

func (this *QDataWidgetMapper) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDataWidgetMapper_metacast(this.h, param1_Cstring))
}

func QDataWidgetMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDataWidgetMapper_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDataWidgetMapper) SetModel(model *QAbstractItemModel) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(model)
	C.QDataWidgetMapper_setModel(this.h, model.cPointer())
}

func (this *QDataWidgetMapper) Model() *QAbstractItemModel {
	defer runtime.KeepAlive(this)
	return newQAbstractItemModel(C.QDataWidgetMapper_model(this.h))
}

func (this *QDataWidgetMapper) SetItemDelegate(delegate *QAbstractItemDelegate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(delegate)
	C.QDataWidgetMapper_setItemDelegate(this.h, delegate.cPointer())
}

func (this *QDataWidgetMapper) ItemDelegate() *QAbstractItemDelegate {
	defer runtime.KeepAlive(this)
	return newQAbstractItemDelegate(C.QDataWidgetMapper_itemDelegate(this.h))
}

func (this *QDataWidgetMapper) SetRootIndex(index *QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	C.QDataWidgetMapper_setRootIndex(this.h, index.cPointer())
}

func (this *QDataWidgetMapper) RootIndex() *QModelIndex {
	defer runtime.KeepAlive(this)
	_goptr := newQModelIndex(C.QDataWidgetMapper_rootIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDataWidgetMapper) SetOrientation(aOrientation Orientation) {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_setOrientation(this.h, (C.int)(aOrientation))
}

func (this *QDataWidgetMapper) Orientation() Orientation {
	defer runtime.KeepAlive(this)
	return (Orientation)(C.QDataWidgetMapper_orientation(this.h))
}

func (this *QDataWidgetMapper) SetSubmitPolicy(policy QDataWidgetMapper__SubmitPolicy) {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_setSubmitPolicy(this.h, (C.int)(policy))
}

func (this *QDataWidgetMapper) SubmitPolicy() QDataWidgetMapper__SubmitPolicy {
	defer runtime.KeepAlive(this)
	return (QDataWidgetMapper__SubmitPolicy)(C.QDataWidgetMapper_submitPolicy(this.h))
}

func (this *QDataWidgetMapper) AddMapping(widget *QWidget, section int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(widget)
	C.QDataWidgetMapper_addMapping(this.h, widget.cPointer(), (C.int)(section))
}

func (this *QDataWidgetMapper) AddMapping2(widget *QWidget, section int, propertyName []byte) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(widget)
	propertyName_alias := C.struct_miqt_string{}
	if len(propertyName) > 0 {
		propertyName_alias.data = (*C.char)(unsafe.Pointer(&propertyName[0]))
	} else {
		propertyName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	propertyName_alias.len = C.size_t(len(propertyName))
	C.QDataWidgetMapper_addMapping2(this.h, widget.cPointer(), (C.int)(section), propertyName_alias)
}

func (this *QDataWidgetMapper) RemoveMapping(widget *QWidget) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(widget)
	C.QDataWidgetMapper_removeMapping(this.h, widget.cPointer())
}

func (this *QDataWidgetMapper) MappedSection(widget *QWidget) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(widget)
	return (int)(C.QDataWidgetMapper_mappedSection(this.h, widget.cPointer()))
}

func (this *QDataWidgetMapper) MappedPropertyName(widget *QWidget) []byte {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(widget)
	var _bytearray C.struct_miqt_string = C.QDataWidgetMapper_mappedPropertyName(this.h, widget.cPointer())
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QDataWidgetMapper) MappedWidgetAt(section int) *QWidget {
	defer runtime.KeepAlive(this)
	return newQWidget(C.QDataWidgetMapper_mappedWidgetAt(this.h, (C.int)(section)))
}

func (this *QDataWidgetMapper) ClearMapping() {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_clearMapping(this.h)
}

func (this *QDataWidgetMapper) CurrentIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDataWidgetMapper_currentIndex(this.h))
}

func (this *QDataWidgetMapper) Revert() {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_revert(this.h)
}

func (this *QDataWidgetMapper) Submit() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDataWidgetMapper_submit(this.h))
}

func (this *QDataWidgetMapper) ToFirst() {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_toFirst(this.h)
}

func (this *QDataWidgetMapper) ToLast() {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_toLast(this.h)
}

func (this *QDataWidgetMapper) ToNext() {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_toNext(this.h)
}

func (this *QDataWidgetMapper) ToPrevious() {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_toPrevious(this.h)
}

func (this *QDataWidgetMapper) SetCurrentIndex(index int) {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_setCurrentIndex(this.h, (C.int)(index))
}

func (this *QDataWidgetMapper) SetCurrentModelIndex(index *QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	C.QDataWidgetMapper_setCurrentModelIndex(this.h, index.cPointer())
}

func (this *QDataWidgetMapper) CurrentIndexChanged(index int) {
	defer runtime.KeepAlive(this)
	C.QDataWidgetMapper_currentIndexChanged(this.h, (C.int)(index))
}
func (this *QDataWidgetMapper) OnCurrentIndexChanged(slot func(index int)) {
	C.QDataWidgetMapper_connect_currentIndexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDataWidgetMapper_currentIndexChanged
func miqt_exec_callback_QDataWidgetMapper_currentIndexChanged(cb C.intptr_t, index C.int) {
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
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDataWidgetMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDataWidgetMapper_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDataWidgetMapper_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDataWidgetMapper_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDataWidgetMapper that was directly constructed.
func (this *QDataWidgetMapper) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QDataWidgetMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDataWidgetMapper that was directly constructed.
func (this *QDataWidgetMapper) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDataWidgetMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDataWidgetMapper that was directly constructed.
func (this *QDataWidgetMapper) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDataWidgetMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDataWidgetMapper that was directly constructed.
func (this *QDataWidgetMapper) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDataWidgetMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDataWidgetMapper) callVirtualBase_SetCurrentIndex(index int) {
	defer runtime.KeepAlive(this)

	C.QDataWidgetMapper_virtualbase_setCurrentIndex(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QDataWidgetMapper) OnSetCurrentIndex(slot func(super func(index int), index int)) {
	ok := C.QDataWidgetMapper_override_virtual_setCurrentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDataWidgetMapper_setCurrentIndex
func miqt_exec_callback_QDataWidgetMapper_setCurrentIndex(self *C.QDataWidgetMapper, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_SetCurrentIndex, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QDataWidgetMapper_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDataWidgetMapper) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDataWidgetMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDataWidgetMapper_event
func miqt_exec_callback_QDataWidgetMapper_event(self *C.QDataWidgetMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDataWidgetMapper) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QDataWidgetMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDataWidgetMapper) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDataWidgetMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDataWidgetMapper_eventFilter
func miqt_exec_callback_QDataWidgetMapper_eventFilter(self *C.QDataWidgetMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDataWidgetMapper) callVirtualBase_TimerEvent(event *QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QDataWidgetMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDataWidgetMapper) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDataWidgetMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDataWidgetMapper_timerEvent
func miqt_exec_callback_QDataWidgetMapper_timerEvent(self *C.QDataWidgetMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QDataWidgetMapper_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDataWidgetMapper) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDataWidgetMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDataWidgetMapper_childEvent
func miqt_exec_callback_QDataWidgetMapper_childEvent(self *C.QDataWidgetMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QDataWidgetMapper_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDataWidgetMapper) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDataWidgetMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDataWidgetMapper_customEvent
func miqt_exec_callback_QDataWidgetMapper_customEvent(self *C.QDataWidgetMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QDataWidgetMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDataWidgetMapper) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDataWidgetMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDataWidgetMapper_connectNotify
func miqt_exec_callback_QDataWidgetMapper_connectNotify(self *C.QDataWidgetMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDataWidgetMapper) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QDataWidgetMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDataWidgetMapper) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDataWidgetMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDataWidgetMapper_disconnectNotify
func miqt_exec_callback_QDataWidgetMapper_disconnectNotify(self *C.QDataWidgetMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDataWidgetMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDataWidgetMapper) Delete() {
	C.QDataWidgetMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDataWidgetMapper) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDataWidgetMapper_delete((*C.QDataWidgetMapper)(gc[0]))
	})
	this.miqtSetGC(gc)
}
