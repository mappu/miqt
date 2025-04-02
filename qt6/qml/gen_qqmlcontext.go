package qml

/*

#include "gen_qqmlcontext.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlContext struct {
	h *C.QQmlContext
	*qt6.QObject
}

func (this *QQmlContext) cPointer() *C.QQmlContext {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlContext) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlContext constructs the type using only CGO pointers.
func newQQmlContext(h *C.QQmlContext) *QQmlContext {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QQmlContext_virtbase(h, &outptr_QObject)

	return &QQmlContext{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQQmlContext constructs the type using only unsafe pointers.
func UnsafeNewQQmlContext(h unsafe.Pointer) *QQmlContext {
	return newQQmlContext((*C.QQmlContext)(h))
}

// NewQQmlContext constructs a new QQmlContext object.
func NewQQmlContext(parent *QQmlEngine) *QQmlContext {

	return newQQmlContext(C.QQmlContext_new(parent.cPointer()))
}

// NewQQmlContext2 constructs a new QQmlContext object.
func NewQQmlContext2(parent *QQmlContext) *QQmlContext {

	return newQQmlContext(C.QQmlContext_new2(parent.cPointer()))
}

// NewQQmlContext3 constructs a new QQmlContext object.
func NewQQmlContext3(parent *QQmlEngine, objParent *qt6.QObject) *QQmlContext {

	return newQQmlContext(C.QQmlContext_new3(parent.cPointer(), (*C.QObject)(objParent.UnsafePointer())))
}

// NewQQmlContext4 constructs a new QQmlContext object.
func NewQQmlContext4(parent *QQmlContext, objParent *qt6.QObject) *QQmlContext {

	return newQQmlContext(C.QQmlContext_new4(parent.cPointer(), (*C.QObject)(objParent.UnsafePointer())))
}

func (this *QQmlContext) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlContext_metaObject(this.h)))
}

func (this *QQmlContext) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlContext_metacast(this.h, param1_Cstring))
}

func QQmlContext_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlContext_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlContext) IsValid() bool {
	return (bool)(C.QQmlContext_isValid(this.h))
}

func (this *QQmlContext) Engine() *QQmlEngine {
	return newQQmlEngine(C.QQmlContext_engine(this.h))
}

func (this *QQmlContext) ParentContext() *QQmlContext {
	return newQQmlContext(C.QQmlContext_parentContext(this.h))
}

func (this *QQmlContext) ContextObject() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlContext_contextObject(this.h)))
}

func (this *QQmlContext) SetContextObject(contextObject *qt6.QObject) {
	C.QQmlContext_setContextObject(this.h, (*C.QObject)(contextObject.UnsafePointer()))
}

func (this *QQmlContext) ContextProperty(param1 string) *qt6.QVariant {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QQmlContext_contextProperty(this.h, param1_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlContext) SetContextProperty(param1 string, param2 *qt6.QObject) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QQmlContext_setContextProperty(this.h, param1_ms, (*C.QObject)(param2.UnsafePointer()))
}

func (this *QQmlContext) SetContextProperty2(param1 string, param2 *qt6.QVariant) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QQmlContext_setContextProperty2(this.h, param1_ms, (*C.QVariant)(param2.UnsafePointer()))
}

func (this *QQmlContext) SetContextProperties(properties []QQmlContext__PropertyPair) {
	properties_CArray := (*[0xffff]*C.QQmlContext__PropertyPair)(C.malloc(C.size_t(8 * len(properties))))
	defer C.free(unsafe.Pointer(properties_CArray))
	for i := range properties {
		properties_CArray[i] = properties[i].cPointer()
	}
	properties_ma := C.struct_miqt_array{len: C.size_t(len(properties)), data: unsafe.Pointer(properties_CArray)}
	C.QQmlContext_setContextProperties(this.h, properties_ma)
}

func (this *QQmlContext) NameForObject(param1 *qt6.QObject) string {
	var _ms C.struct_miqt_string = C.QQmlContext_nameForObject(this.h, (*C.QObject)(param1.UnsafePointer()))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlContext) ObjectForName(param1 string) *qt6.QObject {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlContext_objectForName(this.h, param1_ms)))
}

func (this *QQmlContext) ResolvedUrl(param1 *qt6.QUrl) *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QQmlContext_resolvedUrl(this.h, (*C.QUrl)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlContext) SetBaseUrl(baseUrl *qt6.QUrl) {
	C.QQmlContext_setBaseUrl(this.h, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QQmlContext) BaseUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QQmlContext_baseUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlContext) ImportedScript(name string) *QJSValue {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQJSValue(C.QQmlContext_importedScript(this.h, name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQmlContext_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlContext_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlContext_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlContext_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QQmlContext that was directly constructed.
func (this *QQmlContext) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlContext_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QQmlContext that was directly constructed.
func (this *QQmlContext) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlContext_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QQmlContext that was directly constructed.
func (this *QQmlContext) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlContext_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QQmlContext that was directly constructed.
func (this *QQmlContext) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QQmlContext_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QQmlContext) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QQmlContext_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlContext) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QQmlContext_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlContext_event
func miqt_exec_callback_QQmlContext_event(self *C.QQmlContext, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlContext{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QQmlContext) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QQmlContext_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlContext) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QQmlContext_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlContext_eventFilter
func miqt_exec_callback_QQmlContext_eventFilter(self *C.QQmlContext, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlContext{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QQmlContext) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QQmlContext_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QQmlContext) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QQmlContext_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlContext_timerEvent
func miqt_exec_callback_QQmlContext_timerEvent(self *C.QQmlContext, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QQmlContext{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QQmlContext) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QQmlContext_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QQmlContext) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QQmlContext_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlContext_childEvent
func miqt_exec_callback_QQmlContext_childEvent(self *C.QQmlContext, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QQmlContext{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QQmlContext) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QQmlContext_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QQmlContext) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QQmlContext_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlContext_customEvent
func miqt_exec_callback_QQmlContext_customEvent(self *C.QQmlContext, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QQmlContext{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QQmlContext) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlContext_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlContext) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlContext_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlContext_connectNotify
func miqt_exec_callback_QQmlContext_connectNotify(self *C.QQmlContext, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlContext{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QQmlContext) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlContext_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlContext) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlContext_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlContext_disconnectNotify
func miqt_exec_callback_QQmlContext_disconnectNotify(self *C.QQmlContext, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlContext{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlContext) Delete() {
	C.QQmlContext_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlContext) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlContext) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QQmlContext__PropertyPair struct {
	h *C.QQmlContext__PropertyPair
}

func (this *QQmlContext__PropertyPair) cPointer() *C.QQmlContext__PropertyPair {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlContext__PropertyPair) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlContext__PropertyPair constructs the type using only CGO pointers.
func newQQmlContext__PropertyPair(h *C.QQmlContext__PropertyPair) *QQmlContext__PropertyPair {
	if h == nil {
		return nil
	}

	return &QQmlContext__PropertyPair{h: h}
}

// UnsafeNewQQmlContext__PropertyPair constructs the type using only unsafe pointers.
func UnsafeNewQQmlContext__PropertyPair(h unsafe.Pointer) *QQmlContext__PropertyPair {
	return newQQmlContext__PropertyPair((*C.QQmlContext__PropertyPair)(h))
}

// NewQQmlContext__PropertyPair constructs a new QQmlContext::PropertyPair object.
func NewQQmlContext__PropertyPair(param1 *QQmlContext__PropertyPair) *QQmlContext__PropertyPair {

	return newQQmlContext__PropertyPair(C.QQmlContext__PropertyPair_new(param1.cPointer()))
}

func (this *QQmlContext__PropertyPair) OperatorAssign(param1 *QQmlContext__PropertyPair) {
	C.QQmlContext__PropertyPair_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QQmlContext__PropertyPair) Delete() {
	C.QQmlContext__PropertyPair_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlContext__PropertyPair) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlContext__PropertyPair) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
