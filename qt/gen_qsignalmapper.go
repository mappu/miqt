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
	h          *C.QSignalMapper
	isSubclass bool
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
func newQSignalMapper(h *C.QSignalMapper, h_QObject *C.QObject) *QSignalMapper {
	if h == nil {
		return nil
	}
	return &QSignalMapper{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQSignalMapper constructs the type using only unsafe pointers.
func UnsafeNewQSignalMapper(h unsafe.Pointer, h_QObject unsafe.Pointer) *QSignalMapper {
	if h == nil {
		return nil
	}

	return &QSignalMapper{h: (*C.QSignalMapper)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQSignalMapper constructs a new QSignalMapper object.
func NewQSignalMapper() *QSignalMapper {
	var outptr_QSignalMapper *C.QSignalMapper = nil
	var outptr_QObject *C.QObject = nil

	C.QSignalMapper_new(&outptr_QSignalMapper, &outptr_QObject)
	ret := newQSignalMapper(outptr_QSignalMapper, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSignalMapper2 constructs a new QSignalMapper object.
func NewQSignalMapper2(parent *QObject) *QSignalMapper {
	var outptr_QSignalMapper *C.QSignalMapper = nil
	var outptr_QObject *C.QObject = nil

	C.QSignalMapper_new2(parent.cPointer(), &outptr_QSignalMapper, &outptr_QObject)
	ret := newQSignalMapper(outptr_QSignalMapper, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QSignalMapper) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSignalMapper_MetaObject(this.h)))
}

func (this *QSignalMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSignalMapper_Metacast(this.h, param1_Cstring))
}

func QSignalMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalMapper_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalMapper) SetMapping(sender *QObject, id int) {
	C.QSignalMapper_SetMapping(this.h, sender.cPointer(), (C.int)(id))
}

func (this *QSignalMapper) SetMapping2(sender *QObject, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QSignalMapper_SetMapping2(this.h, sender.cPointer(), text_ms)
}

func (this *QSignalMapper) SetMapping3(sender *QObject, widget *QWidget) {
	C.QSignalMapper_SetMapping3(this.h, sender.cPointer(), widget.cPointer())
}

func (this *QSignalMapper) SetMapping4(sender *QObject, object *QObject) {
	C.QSignalMapper_SetMapping4(this.h, sender.cPointer(), object.cPointer())
}

func (this *QSignalMapper) RemoveMappings(sender *QObject) {
	C.QSignalMapper_RemoveMappings(this.h, sender.cPointer())
}

func (this *QSignalMapper) Mapping(id int) *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QSignalMapper_Mapping(this.h, (C.int)(id))))
}

func (this *QSignalMapper) MappingWithText(text string) *QObject {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQObject(unsafe.Pointer(C.QSignalMapper_MappingWithText(this.h, text_ms)))
}

func (this *QSignalMapper) MappingWithWidget(widget *QWidget) *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QSignalMapper_MappingWithWidget(this.h, widget.cPointer())))
}

func (this *QSignalMapper) MappingWithObject(object *QObject) *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QSignalMapper_MappingWithObject(this.h, object.cPointer())))
}

func (this *QSignalMapper) Mapped(param1 int) {
	C.QSignalMapper_Mapped(this.h, (C.int)(param1))
}
func (this *QSignalMapper) OnMapped(slot func(param1 int)) {
	C.QSignalMapper_connect_Mapped(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_Mapped
func miqt_exec_callback_QSignalMapper_Mapped(cb C.intptr_t, param1 C.int) {
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
	C.QSignalMapper_MappedWithQString(this.h, param1_ms)
}
func (this *QSignalMapper) OnMappedWithQString(slot func(param1 string)) {
	C.QSignalMapper_connect_MappedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedWithQString
func miqt_exec_callback_QSignalMapper_MappedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	C.QSignalMapper_MappedWithQWidget(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWithQWidget(slot func(param1 *QWidget)) {
	C.QSignalMapper_connect_MappedWithQWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedWithQWidget
func miqt_exec_callback_QSignalMapper_MappedWithQWidget(cb C.intptr_t, param1 *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(param1), nil, nil)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWithQObject(param1 *QObject) {
	C.QSignalMapper_MappedWithQObject(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWithQObject(slot func(param1 *QObject)) {
	C.QSignalMapper_connect_MappedWithQObject(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedWithQObject
func miqt_exec_callback_QSignalMapper_MappedWithQObject(cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedInt(param1 int) {
	C.QSignalMapper_MappedInt(this.h, (C.int)(param1))
}
func (this *QSignalMapper) OnMappedInt(slot func(param1 int)) {
	C.QSignalMapper_connect_MappedInt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedInt
func miqt_exec_callback_QSignalMapper_MappedInt(cb C.intptr_t, param1 C.int) {
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
	C.QSignalMapper_MappedString(this.h, param1_ms)
}
func (this *QSignalMapper) OnMappedString(slot func(param1 string)) {
	C.QSignalMapper_connect_MappedString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedString
func miqt_exec_callback_QSignalMapper_MappedString(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	C.QSignalMapper_MappedWidget(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWidget(slot func(param1 *QWidget)) {
	C.QSignalMapper_connect_MappedWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedWidget
func miqt_exec_callback_QSignalMapper_MappedWidget(cb C.intptr_t, param1 *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(param1), nil, nil)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedObject(param1 *QObject) {
	C.QSignalMapper_MappedObject(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedObject(slot func(param1 *QObject)) {
	C.QSignalMapper_connect_MappedObject(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedObject
func miqt_exec_callback_QSignalMapper_MappedObject(cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QSignalMapper) Map() {
	C.QSignalMapper_Map(this.h)
}

func (this *QSignalMapper) MapWithSender(sender *QObject) {
	C.QSignalMapper_MapWithSender(this.h, sender.cPointer())
}

func QSignalMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalMapper_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalMapper_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalMapper_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalMapper) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSignalMapper_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSignalMapper) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalMapper_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_Event
func miqt_exec_callback_QSignalMapper_Event(self *C.QSignalMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSignalMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalMapper) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSignalMapper_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSignalMapper) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalMapper_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_EventFilter
func miqt_exec_callback_QSignalMapper_EventFilter(self *C.QSignalMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSignalMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSignalMapper) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSignalMapper_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalMapper) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalMapper_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_TimerEvent
func miqt_exec_callback_QSignalMapper_TimerEvent(self *C.QSignalMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QSignalMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSignalMapper) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSignalMapper_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalMapper) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalMapper_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_ChildEvent
func miqt_exec_callback_QSignalMapper_ChildEvent(self *C.QSignalMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QSignalMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSignalMapper) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSignalMapper_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalMapper) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalMapper_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_CustomEvent
func miqt_exec_callback_QSignalMapper_CustomEvent(self *C.QSignalMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSignalMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSignalMapper) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSignalMapper_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSignalMapper) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalMapper_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_ConnectNotify
func miqt_exec_callback_QSignalMapper_ConnectNotify(self *C.QSignalMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSignalMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSignalMapper) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSignalMapper_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSignalMapper) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalMapper_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_DisconnectNotify
func miqt_exec_callback_QSignalMapper_DisconnectNotify(self *C.QSignalMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSignalMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSignalMapper) Delete() {
	C.QSignalMapper_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSignalMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QSignalMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
