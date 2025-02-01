package qt

/*

#include "gen_qsignalmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSignalMapper struct {
	h *C.QSignalMapper
	*QObject
}

func (this *QSignalMapper) cPointer() *C.QSignalMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSignalMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSignalMapper constructs the type using only CGO pointers.
func newQSignalMapper(h *C.QSignalMapper) *QSignalMapper {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSignalMapper_virtbase(h, &outptr_QObject)

	return &QSignalMapper{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQSignalMapper constructs the type using only unsafe pointers.
func UnsafeNewQSignalMapper(h unsafe.Pointer) *QSignalMapper {
	return newQSignalMapper((*C.QSignalMapper)(h))
}

// NewQSignalMapper constructs a new QSignalMapper object.
func NewQSignalMapper() *QSignalMapper {

	return newQSignalMapper(C.QSignalMapper_new())
}

// NewQSignalMapper2 constructs a new QSignalMapper object.
func NewQSignalMapper2(parent *QObject) *QSignalMapper {

	return newQSignalMapper(C.QSignalMapper_new2(parent.cPointer()))
}

func (this *QSignalMapper) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSignalMapper_metaObject(this.h))
}

func (this *QSignalMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSignalMapper_metacast(this.h, param1_Cstring))
}

func QSignalMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalMapper_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalMapper) SetMapping(sender *QObject, id int) {
	C.QSignalMapper_setMapping(this.h, sender.cPointer(), (C.int)(id))
}

func (this *QSignalMapper) SetMapping2(sender *QObject, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QSignalMapper_setMapping2(this.h, sender.cPointer(), text_ms)
}

func (this *QSignalMapper) SetMapping3(sender *QObject, widget *QWidget) {
	C.QSignalMapper_setMapping3(this.h, sender.cPointer(), widget.cPointer())
}

func (this *QSignalMapper) SetMapping4(sender *QObject, object *QObject) {
	C.QSignalMapper_setMapping4(this.h, sender.cPointer(), object.cPointer())
}

func (this *QSignalMapper) RemoveMappings(sender *QObject) {
	C.QSignalMapper_removeMappings(this.h, sender.cPointer())
}

func (this *QSignalMapper) Mapping(id int) *QObject {
	return newQObject(C.QSignalMapper_mapping(this.h, (C.int)(id)))
}

func (this *QSignalMapper) MappingWithText(text string) *QObject {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQObject(C.QSignalMapper_mappingWithText(this.h, text_ms))
}

func (this *QSignalMapper) MappingWithWidget(widget *QWidget) *QObject {
	return newQObject(C.QSignalMapper_mappingWithWidget(this.h, widget.cPointer()))
}

func (this *QSignalMapper) MappingWithObject(object *QObject) *QObject {
	return newQObject(C.QSignalMapper_mappingWithObject(this.h, object.cPointer()))
}

func (this *QSignalMapper) Mapped(param1 int) {
	C.QSignalMapper_mapped(this.h, (C.int)(param1))
}
func (this *QSignalMapper) OnMapped(slot func(param1 int)) {
	C.QSignalMapper_connect_mapped(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_mapped
func miqt_exec_callback_QSignalMapper_mapped(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWithQString(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QSignalMapper_mappedWithQString(this.h, param1_ms)
}
func (this *QSignalMapper) OnMappedWithQString(slot func(param1 string)) {
	C.QSignalMapper_connect_mappedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_mappedWithQString
func miqt_exec_callback_QSignalMapper_mappedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWithQWidget(param1 *QWidget) {
	C.QSignalMapper_mappedWithQWidget(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWithQWidget(slot func(param1 *QWidget)) {
	C.QSignalMapper_connect_mappedWithQWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_mappedWithQWidget
func miqt_exec_callback_QSignalMapper_mappedWithQWidget(cb C.intptr_t, param1 *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWithQObject(param1 *QObject) {
	C.QSignalMapper_mappedWithQObject(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWithQObject(slot func(param1 *QObject)) {
	C.QSignalMapper_connect_mappedWithQObject(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_mappedWithQObject
func miqt_exec_callback_QSignalMapper_mappedWithQObject(cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedInt(param1 int) {
	C.QSignalMapper_mappedInt(this.h, (C.int)(param1))
}
func (this *QSignalMapper) OnMappedInt(slot func(param1 int)) {
	C.QSignalMapper_connect_mappedInt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_mappedInt
func miqt_exec_callback_QSignalMapper_mappedInt(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedString(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QSignalMapper_mappedString(this.h, param1_ms)
}
func (this *QSignalMapper) OnMappedString(slot func(param1 string)) {
	C.QSignalMapper_connect_mappedString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_mappedString
func miqt_exec_callback_QSignalMapper_mappedString(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWidget(param1 *QWidget) {
	C.QSignalMapper_mappedWidget(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWidget(slot func(param1 *QWidget)) {
	C.QSignalMapper_connect_mappedWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_mappedWidget
func miqt_exec_callback_QSignalMapper_mappedWidget(cb C.intptr_t, param1 *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedObject(param1 *QObject) {
	C.QSignalMapper_mappedObject(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedObject(slot func(param1 *QObject)) {
	C.QSignalMapper_connect_mappedObject(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_mappedObject
func miqt_exec_callback_QSignalMapper_mappedObject(cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	gofunc(slotval1)
}

func (this *QSignalMapper) Map() {
	C.QSignalMapper_map(this.h)
}

func (this *QSignalMapper) MapWithSender(sender *QObject) {
	C.QSignalMapper_mapWithSender(this.h, sender.cPointer())
}

func QSignalMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalMapper_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalMapper_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalMapper) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSignalMapper_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSignalMapper) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSignalMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalMapper_event
func miqt_exec_callback_QSignalMapper_event(self *C.QSignalMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSignalMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalMapper) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSignalMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSignalMapper) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSignalMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalMapper_eventFilter
func miqt_exec_callback_QSignalMapper_eventFilter(self *C.QSignalMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSignalMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSignalMapper) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSignalMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalMapper) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSignalMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalMapper_timerEvent
func miqt_exec_callback_QSignalMapper_timerEvent(self *C.QSignalMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSignalMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSignalMapper) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSignalMapper_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalMapper) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSignalMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalMapper_childEvent
func miqt_exec_callback_QSignalMapper_childEvent(self *C.QSignalMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSignalMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSignalMapper) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSignalMapper_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalMapper) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSignalMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalMapper_customEvent
func miqt_exec_callback_QSignalMapper_customEvent(self *C.QSignalMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSignalMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSignalMapper) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSignalMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSignalMapper) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSignalMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalMapper_connectNotify
func miqt_exec_callback_QSignalMapper_connectNotify(self *C.QSignalMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSignalMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSignalMapper) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSignalMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSignalMapper) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSignalMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalMapper_disconnectNotify
func miqt_exec_callback_QSignalMapper_disconnectNotify(self *C.QSignalMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSignalMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSignalMapper) Delete() {
	C.QSignalMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSignalMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QSignalMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
