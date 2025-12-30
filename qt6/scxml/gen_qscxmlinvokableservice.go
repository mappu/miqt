package scxml

/*

#include "gen_qscxmlinvokableservice.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScxmlInvokableService struct {
	h *C.QScxmlInvokableService
	*qt6.QObject
}

func (this *QScxmlInvokableService) cPointer() *C.QScxmlInvokableService {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlInvokableService) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlInvokableService constructs the type using only CGO pointers.
func newQScxmlInvokableService(h *C.QScxmlInvokableService) *QScxmlInvokableService {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QScxmlInvokableService_virtbase(h, &outptr_QObject)

	return &QScxmlInvokableService{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQScxmlInvokableService constructs the type using only unsafe pointers.
func UnsafeNewQScxmlInvokableService(h unsafe.Pointer) *QScxmlInvokableService {
	return newQScxmlInvokableService((*C.QScxmlInvokableService)(h))
}

// NewQScxmlInvokableService constructs a new QScxmlInvokableService object.
func NewQScxmlInvokableService(parentStateMachine *QScxmlStateMachine, parent *QScxmlInvokableServiceFactory) *QScxmlInvokableService {

	return newQScxmlInvokableService(C.QScxmlInvokableService_new(parentStateMachine.cPointer(), parent.cPointer()))
}

func (this *QScxmlInvokableService) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScxmlInvokableService_metaObject(this.h)))
}

func (this *QScxmlInvokableService) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScxmlInvokableService_metacast(this.h, param1_Cstring))
}

func QScxmlInvokableService_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlInvokableService_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlInvokableService) ParentStateMachine() *QScxmlStateMachine {
	return newQScxmlStateMachine(C.QScxmlInvokableService_parentStateMachine(this.h))
}

func (this *QScxmlInvokableService) Start() bool {
	return (bool)(C.QScxmlInvokableService_start(this.h))
}

func (this *QScxmlInvokableService) Id() string {
	var _ms C.struct_miqt_string = C.QScxmlInvokableService_id(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlInvokableService) Name() string {
	var _ms C.struct_miqt_string = C.QScxmlInvokableService_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlInvokableService) PostEvent(event *QScxmlEvent) {
	C.QScxmlInvokableService_postEvent(this.h, event.cPointer())
}

func QScxmlInvokableService_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlInvokableService_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlInvokableService_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlInvokableService_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QScxmlInvokableService that was directly constructed.
func (this *QScxmlInvokableService) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QScxmlInvokableService_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QScxmlInvokableService that was directly constructed.
func (this *QScxmlInvokableService) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlInvokableService_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QScxmlInvokableService that was directly constructed.
func (this *QScxmlInvokableService) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlInvokableService_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QScxmlInvokableService that was directly constructed.
func (this *QScxmlInvokableService) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QScxmlInvokableService_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QScxmlInvokableService) OnStart(slot func() bool) {
	ok := C.QScxmlInvokableService_override_virtual_start(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_start
func miqt_exec_callback_QScxmlInvokableService_start(self *C.QScxmlInvokableService, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QScxmlInvokableService) OnId(slot func() string) {
	ok := C.QScxmlInvokableService_override_virtual_id(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_id
func miqt_exec_callback_QScxmlInvokableService_id(self *C.QScxmlInvokableService, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QScxmlInvokableService) OnName(slot func() string) {
	ok := C.QScxmlInvokableService_override_virtual_name(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_name
func miqt_exec_callback_QScxmlInvokableService_name(self *C.QScxmlInvokableService, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QScxmlInvokableService) OnPostEvent(slot func(event *QScxmlEvent)) {
	ok := C.QScxmlInvokableService_override_virtual_postEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_postEvent
func miqt_exec_callback_QScxmlInvokableService_postEvent(self *C.QScxmlInvokableService, cb C.intptr_t, event *C.QScxmlEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *QScxmlEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlEvent(event)

	gofunc(slotval1)

}

func (this *QScxmlInvokableService) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QScxmlInvokableService_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlInvokableService) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QScxmlInvokableService_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_event
func miqt_exec_callback_QScxmlInvokableService_event(self *C.QScxmlInvokableService, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlInvokableService{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlInvokableService) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QScxmlInvokableService_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlInvokableService) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QScxmlInvokableService_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_eventFilter
func miqt_exec_callback_QScxmlInvokableService_eventFilter(self *C.QScxmlInvokableService, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlInvokableService{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlInvokableService) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QScxmlInvokableService_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScxmlInvokableService) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QScxmlInvokableService_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_timerEvent
func miqt_exec_callback_QScxmlInvokableService_timerEvent(self *C.QScxmlInvokableService, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScxmlInvokableService{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScxmlInvokableService) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QScxmlInvokableService_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScxmlInvokableService) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QScxmlInvokableService_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_childEvent
func miqt_exec_callback_QScxmlInvokableService_childEvent(self *C.QScxmlInvokableService, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScxmlInvokableService{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScxmlInvokableService) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QScxmlInvokableService_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScxmlInvokableService) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QScxmlInvokableService_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_customEvent
func miqt_exec_callback_QScxmlInvokableService_customEvent(self *C.QScxmlInvokableService, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScxmlInvokableService{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScxmlInvokableService) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlInvokableService_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlInvokableService) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlInvokableService_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_connectNotify
func miqt_exec_callback_QScxmlInvokableService_connectNotify(self *C.QScxmlInvokableService, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlInvokableService{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScxmlInvokableService) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlInvokableService_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlInvokableService) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlInvokableService_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableService_disconnectNotify
func miqt_exec_callback_QScxmlInvokableService_disconnectNotify(self *C.QScxmlInvokableService, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlInvokableService{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScxmlInvokableService) Delete() {
	C.QScxmlInvokableService_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlInvokableService) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlInvokableService) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlInvokableServiceFactory struct {
	h *C.QScxmlInvokableServiceFactory
	*qt6.QObject
}

func (this *QScxmlInvokableServiceFactory) cPointer() *C.QScxmlInvokableServiceFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlInvokableServiceFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlInvokableServiceFactory constructs the type using only CGO pointers.
func newQScxmlInvokableServiceFactory(h *C.QScxmlInvokableServiceFactory) *QScxmlInvokableServiceFactory {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QScxmlInvokableServiceFactory_virtbase(h, &outptr_QObject)

	return &QScxmlInvokableServiceFactory{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQScxmlInvokableServiceFactory constructs the type using only unsafe pointers.
func UnsafeNewQScxmlInvokableServiceFactory(h unsafe.Pointer) *QScxmlInvokableServiceFactory {
	return newQScxmlInvokableServiceFactory((*C.QScxmlInvokableServiceFactory)(h))
}

// NewQScxmlInvokableServiceFactory constructs a new QScxmlInvokableServiceFactory object.
func NewQScxmlInvokableServiceFactory(invokeInfo *QScxmlExecutableContent__InvokeInfo, names []int, parameters []QScxmlExecutableContent__ParameterInfo) *QScxmlInvokableServiceFactory {
	names_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_CArray[i] = (C.int)(names[i])
	}
	names_ma := C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	parameters_CArray := (*[0xffff]*C.QScxmlExecutableContent__ParameterInfo)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_CArray))
	for i := range parameters {
		parameters_CArray[i] = parameters[i].cPointer()
	}
	parameters_ma := C.struct_miqt_array{len: C.size_t(len(parameters)), data: unsafe.Pointer(parameters_CArray)}

	return newQScxmlInvokableServiceFactory(C.QScxmlInvokableServiceFactory_new(invokeInfo.cPointer(), names_ma, parameters_ma))
}

// NewQScxmlInvokableServiceFactory2 constructs a new QScxmlInvokableServiceFactory object.
func NewQScxmlInvokableServiceFactory2(invokeInfo *QScxmlExecutableContent__InvokeInfo, names []int, parameters []QScxmlExecutableContent__ParameterInfo, parent *qt6.QObject) *QScxmlInvokableServiceFactory {
	names_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_CArray[i] = (C.int)(names[i])
	}
	names_ma := C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	parameters_CArray := (*[0xffff]*C.QScxmlExecutableContent__ParameterInfo)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_CArray))
	for i := range parameters {
		parameters_CArray[i] = parameters[i].cPointer()
	}
	parameters_ma := C.struct_miqt_array{len: C.size_t(len(parameters)), data: unsafe.Pointer(parameters_CArray)}

	return newQScxmlInvokableServiceFactory(C.QScxmlInvokableServiceFactory_new2(invokeInfo.cPointer(), names_ma, parameters_ma, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QScxmlInvokableServiceFactory) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScxmlInvokableServiceFactory_metaObject(this.h)))
}

func (this *QScxmlInvokableServiceFactory) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScxmlInvokableServiceFactory_metacast(this.h, param1_Cstring))
}

func QScxmlInvokableServiceFactory_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlInvokableServiceFactory_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlInvokableServiceFactory) Invoke(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService {
	return newQScxmlInvokableService(C.QScxmlInvokableServiceFactory_invoke(this.h, parentStateMachine.cPointer()))
}

func (this *QScxmlInvokableServiceFactory) InvokeInfo() *QScxmlExecutableContent__InvokeInfo {
	return newQScxmlExecutableContent__InvokeInfo(C.QScxmlInvokableServiceFactory_invokeInfo(this.h))
}

func (this *QScxmlInvokableServiceFactory) Parameters() []QScxmlExecutableContent__ParameterInfo {
	var _ma C.struct_miqt_array = C.QScxmlInvokableServiceFactory_parameters(this.h)
	_ret := make([]QScxmlExecutableContent__ParameterInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QScxmlExecutableContent__ParameterInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQScxmlExecutableContent__ParameterInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QScxmlInvokableServiceFactory) Names() []int {
	var _ma C.struct_miqt_array = C.QScxmlInvokableServiceFactory_names(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func QScxmlInvokableServiceFactory_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlInvokableServiceFactory_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlInvokableServiceFactory_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlInvokableServiceFactory_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QScxmlInvokableServiceFactory that was directly constructed.
func (this *QScxmlInvokableServiceFactory) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QScxmlInvokableServiceFactory_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QScxmlInvokableServiceFactory that was directly constructed.
func (this *QScxmlInvokableServiceFactory) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlInvokableServiceFactory_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QScxmlInvokableServiceFactory that was directly constructed.
func (this *QScxmlInvokableServiceFactory) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlInvokableServiceFactory_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QScxmlInvokableServiceFactory that was directly constructed.
func (this *QScxmlInvokableServiceFactory) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QScxmlInvokableServiceFactory_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QScxmlInvokableServiceFactory) OnInvoke(slot func(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService) {
	ok := C.QScxmlInvokableServiceFactory_override_virtual_invoke(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableServiceFactory_invoke
func miqt_exec_callback_QScxmlInvokableServiceFactory_invoke(self *C.QScxmlInvokableServiceFactory, cb C.intptr_t, parentStateMachine *C.QScxmlStateMachine) *C.QScxmlInvokableService {
	gofunc, ok := cgo.Handle(cb).Value().(func(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlStateMachine(parentStateMachine)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QScxmlInvokableServiceFactory) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QScxmlInvokableServiceFactory_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlInvokableServiceFactory) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QScxmlInvokableServiceFactory_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableServiceFactory_event
func miqt_exec_callback_QScxmlInvokableServiceFactory_event(self *C.QScxmlInvokableServiceFactory, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlInvokableServiceFactory{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlInvokableServiceFactory) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QScxmlInvokableServiceFactory_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlInvokableServiceFactory) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QScxmlInvokableServiceFactory_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableServiceFactory_eventFilter
func miqt_exec_callback_QScxmlInvokableServiceFactory_eventFilter(self *C.QScxmlInvokableServiceFactory, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlInvokableServiceFactory{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlInvokableServiceFactory) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QScxmlInvokableServiceFactory_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScxmlInvokableServiceFactory) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QScxmlInvokableServiceFactory_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableServiceFactory_timerEvent
func miqt_exec_callback_QScxmlInvokableServiceFactory_timerEvent(self *C.QScxmlInvokableServiceFactory, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScxmlInvokableServiceFactory{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScxmlInvokableServiceFactory) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QScxmlInvokableServiceFactory_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScxmlInvokableServiceFactory) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QScxmlInvokableServiceFactory_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableServiceFactory_childEvent
func miqt_exec_callback_QScxmlInvokableServiceFactory_childEvent(self *C.QScxmlInvokableServiceFactory, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScxmlInvokableServiceFactory{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScxmlInvokableServiceFactory) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QScxmlInvokableServiceFactory_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScxmlInvokableServiceFactory) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QScxmlInvokableServiceFactory_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableServiceFactory_customEvent
func miqt_exec_callback_QScxmlInvokableServiceFactory_customEvent(self *C.QScxmlInvokableServiceFactory, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScxmlInvokableServiceFactory{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScxmlInvokableServiceFactory) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlInvokableServiceFactory_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlInvokableServiceFactory) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlInvokableServiceFactory_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableServiceFactory_connectNotify
func miqt_exec_callback_QScxmlInvokableServiceFactory_connectNotify(self *C.QScxmlInvokableServiceFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlInvokableServiceFactory{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScxmlInvokableServiceFactory) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlInvokableServiceFactory_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlInvokableServiceFactory) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlInvokableServiceFactory_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlInvokableServiceFactory_disconnectNotify
func miqt_exec_callback_QScxmlInvokableServiceFactory_disconnectNotify(self *C.QScxmlInvokableServiceFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlInvokableServiceFactory{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScxmlInvokableServiceFactory) Delete() {
	C.QScxmlInvokableServiceFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlInvokableServiceFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlInvokableServiceFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlStaticScxmlServiceFactory struct {
	h *C.QScxmlStaticScxmlServiceFactory
	*QScxmlInvokableServiceFactory
}

func (this *QScxmlStaticScxmlServiceFactory) cPointer() *C.QScxmlStaticScxmlServiceFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlStaticScxmlServiceFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlStaticScxmlServiceFactory constructs the type using only CGO pointers.
func newQScxmlStaticScxmlServiceFactory(h *C.QScxmlStaticScxmlServiceFactory) *QScxmlStaticScxmlServiceFactory {
	if h == nil {
		return nil
	}
	var outptr_QScxmlInvokableServiceFactory *C.QScxmlInvokableServiceFactory = nil
	C.QScxmlStaticScxmlServiceFactory_virtbase(h, &outptr_QScxmlInvokableServiceFactory)

	return &QScxmlStaticScxmlServiceFactory{h: h,
		QScxmlInvokableServiceFactory: newQScxmlInvokableServiceFactory(outptr_QScxmlInvokableServiceFactory)}
}

// UnsafeNewQScxmlStaticScxmlServiceFactory constructs the type using only unsafe pointers.
func UnsafeNewQScxmlStaticScxmlServiceFactory(h unsafe.Pointer) *QScxmlStaticScxmlServiceFactory {
	return newQScxmlStaticScxmlServiceFactory((*C.QScxmlStaticScxmlServiceFactory)(h))
}

// NewQScxmlStaticScxmlServiceFactory constructs a new QScxmlStaticScxmlServiceFactory object.
func NewQScxmlStaticScxmlServiceFactory(metaObject *qt6.QMetaObject, invokeInfo *QScxmlExecutableContent__InvokeInfo, nameList []int, parameters []QScxmlExecutableContent__ParameterInfo) *QScxmlStaticScxmlServiceFactory {
	nameList_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(nameList))))
	defer C.free(unsafe.Pointer(nameList_CArray))
	for i := range nameList {
		nameList_CArray[i] = (C.int)(nameList[i])
	}
	nameList_ma := C.struct_miqt_array{len: C.size_t(len(nameList)), data: unsafe.Pointer(nameList_CArray)}
	parameters_CArray := (*[0xffff]*C.QScxmlExecutableContent__ParameterInfo)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_CArray))
	for i := range parameters {
		parameters_CArray[i] = parameters[i].cPointer()
	}
	parameters_ma := C.struct_miqt_array{len: C.size_t(len(parameters)), data: unsafe.Pointer(parameters_CArray)}

	return newQScxmlStaticScxmlServiceFactory(C.QScxmlStaticScxmlServiceFactory_new((*C.QMetaObject)(metaObject.UnsafePointer()), invokeInfo.cPointer(), nameList_ma, parameters_ma))
}

// NewQScxmlStaticScxmlServiceFactory2 constructs a new QScxmlStaticScxmlServiceFactory object.
func NewQScxmlStaticScxmlServiceFactory2(metaObject *qt6.QMetaObject, invokeInfo *QScxmlExecutableContent__InvokeInfo, nameList []int, parameters []QScxmlExecutableContent__ParameterInfo, parent *qt6.QObject) *QScxmlStaticScxmlServiceFactory {
	nameList_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(nameList))))
	defer C.free(unsafe.Pointer(nameList_CArray))
	for i := range nameList {
		nameList_CArray[i] = (C.int)(nameList[i])
	}
	nameList_ma := C.struct_miqt_array{len: C.size_t(len(nameList)), data: unsafe.Pointer(nameList_CArray)}
	parameters_CArray := (*[0xffff]*C.QScxmlExecutableContent__ParameterInfo)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_CArray))
	for i := range parameters {
		parameters_CArray[i] = parameters[i].cPointer()
	}
	parameters_ma := C.struct_miqt_array{len: C.size_t(len(parameters)), data: unsafe.Pointer(parameters_CArray)}

	return newQScxmlStaticScxmlServiceFactory(C.QScxmlStaticScxmlServiceFactory_new2((*C.QMetaObject)(metaObject.UnsafePointer()), invokeInfo.cPointer(), nameList_ma, parameters_ma, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QScxmlStaticScxmlServiceFactory) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScxmlStaticScxmlServiceFactory_metaObject(this.h)))
}

func (this *QScxmlStaticScxmlServiceFactory) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScxmlStaticScxmlServiceFactory_metacast(this.h, param1_Cstring))
}

func QScxmlStaticScxmlServiceFactory_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlStaticScxmlServiceFactory_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlStaticScxmlServiceFactory) Invoke(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService {
	return newQScxmlInvokableService(C.QScxmlStaticScxmlServiceFactory_invoke(this.h, parentStateMachine.cPointer()))
}

func QScxmlStaticScxmlServiceFactory_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlStaticScxmlServiceFactory_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlStaticScxmlServiceFactory_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlStaticScxmlServiceFactory_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QScxmlStaticScxmlServiceFactory that was directly constructed.
func (this *QScxmlStaticScxmlServiceFactory) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QScxmlStaticScxmlServiceFactory_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QScxmlStaticScxmlServiceFactory that was directly constructed.
func (this *QScxmlStaticScxmlServiceFactory) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlStaticScxmlServiceFactory_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QScxmlStaticScxmlServiceFactory that was directly constructed.
func (this *QScxmlStaticScxmlServiceFactory) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlStaticScxmlServiceFactory_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QScxmlStaticScxmlServiceFactory that was directly constructed.
func (this *QScxmlStaticScxmlServiceFactory) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QScxmlStaticScxmlServiceFactory_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QScxmlStaticScxmlServiceFactory) callVirtualBase_Invoke(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService {

	return newQScxmlInvokableService(C.QScxmlStaticScxmlServiceFactory_virtualbase_invoke(unsafe.Pointer(this.h), parentStateMachine.cPointer()))

}
func (this *QScxmlStaticScxmlServiceFactory) OnInvoke(slot func(super func(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService, parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService) {
	ok := C.QScxmlStaticScxmlServiceFactory_override_virtual_invoke(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlStaticScxmlServiceFactory_invoke
func miqt_exec_callback_QScxmlStaticScxmlServiceFactory_invoke(self *C.QScxmlStaticScxmlServiceFactory, cb C.intptr_t, parentStateMachine *C.QScxmlStateMachine) *C.QScxmlInvokableService {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService, parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlStateMachine(parentStateMachine)

	virtualReturn := gofunc((&QScxmlStaticScxmlServiceFactory{h: self}).callVirtualBase_Invoke, slotval1)

	return virtualReturn.cPointer()

}

func (this *QScxmlStaticScxmlServiceFactory) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QScxmlStaticScxmlServiceFactory_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlStaticScxmlServiceFactory) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QScxmlStaticScxmlServiceFactory_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlStaticScxmlServiceFactory_event
func miqt_exec_callback_QScxmlStaticScxmlServiceFactory_event(self *C.QScxmlStaticScxmlServiceFactory, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlStaticScxmlServiceFactory{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlStaticScxmlServiceFactory) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QScxmlStaticScxmlServiceFactory_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlStaticScxmlServiceFactory) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QScxmlStaticScxmlServiceFactory_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlStaticScxmlServiceFactory_eventFilter
func miqt_exec_callback_QScxmlStaticScxmlServiceFactory_eventFilter(self *C.QScxmlStaticScxmlServiceFactory, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlStaticScxmlServiceFactory{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlStaticScxmlServiceFactory) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QScxmlStaticScxmlServiceFactory_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScxmlStaticScxmlServiceFactory) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QScxmlStaticScxmlServiceFactory_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlStaticScxmlServiceFactory_timerEvent
func miqt_exec_callback_QScxmlStaticScxmlServiceFactory_timerEvent(self *C.QScxmlStaticScxmlServiceFactory, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScxmlStaticScxmlServiceFactory{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScxmlStaticScxmlServiceFactory) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QScxmlStaticScxmlServiceFactory_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScxmlStaticScxmlServiceFactory) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QScxmlStaticScxmlServiceFactory_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlStaticScxmlServiceFactory_childEvent
func miqt_exec_callback_QScxmlStaticScxmlServiceFactory_childEvent(self *C.QScxmlStaticScxmlServiceFactory, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScxmlStaticScxmlServiceFactory{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScxmlStaticScxmlServiceFactory) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QScxmlStaticScxmlServiceFactory_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScxmlStaticScxmlServiceFactory) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QScxmlStaticScxmlServiceFactory_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlStaticScxmlServiceFactory_customEvent
func miqt_exec_callback_QScxmlStaticScxmlServiceFactory_customEvent(self *C.QScxmlStaticScxmlServiceFactory, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScxmlStaticScxmlServiceFactory{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScxmlStaticScxmlServiceFactory) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlStaticScxmlServiceFactory_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlStaticScxmlServiceFactory) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlStaticScxmlServiceFactory_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlStaticScxmlServiceFactory_connectNotify
func miqt_exec_callback_QScxmlStaticScxmlServiceFactory_connectNotify(self *C.QScxmlStaticScxmlServiceFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlStaticScxmlServiceFactory{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScxmlStaticScxmlServiceFactory) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlStaticScxmlServiceFactory_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlStaticScxmlServiceFactory) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlStaticScxmlServiceFactory_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlStaticScxmlServiceFactory_disconnectNotify
func miqt_exec_callback_QScxmlStaticScxmlServiceFactory_disconnectNotify(self *C.QScxmlStaticScxmlServiceFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlStaticScxmlServiceFactory{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScxmlStaticScxmlServiceFactory) Delete() {
	C.QScxmlStaticScxmlServiceFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlStaticScxmlServiceFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlStaticScxmlServiceFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlDynamicScxmlServiceFactory struct {
	h *C.QScxmlDynamicScxmlServiceFactory
	*QScxmlInvokableServiceFactory
}

func (this *QScxmlDynamicScxmlServiceFactory) cPointer() *C.QScxmlDynamicScxmlServiceFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlDynamicScxmlServiceFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlDynamicScxmlServiceFactory constructs the type using only CGO pointers.
func newQScxmlDynamicScxmlServiceFactory(h *C.QScxmlDynamicScxmlServiceFactory) *QScxmlDynamicScxmlServiceFactory {
	if h == nil {
		return nil
	}
	var outptr_QScxmlInvokableServiceFactory *C.QScxmlInvokableServiceFactory = nil
	C.QScxmlDynamicScxmlServiceFactory_virtbase(h, &outptr_QScxmlInvokableServiceFactory)

	return &QScxmlDynamicScxmlServiceFactory{h: h,
		QScxmlInvokableServiceFactory: newQScxmlInvokableServiceFactory(outptr_QScxmlInvokableServiceFactory)}
}

// UnsafeNewQScxmlDynamicScxmlServiceFactory constructs the type using only unsafe pointers.
func UnsafeNewQScxmlDynamicScxmlServiceFactory(h unsafe.Pointer) *QScxmlDynamicScxmlServiceFactory {
	return newQScxmlDynamicScxmlServiceFactory((*C.QScxmlDynamicScxmlServiceFactory)(h))
}

// NewQScxmlDynamicScxmlServiceFactory constructs a new QScxmlDynamicScxmlServiceFactory object.
func NewQScxmlDynamicScxmlServiceFactory(invokeInfo *QScxmlExecutableContent__InvokeInfo, names []int, parameters []QScxmlExecutableContent__ParameterInfo) *QScxmlDynamicScxmlServiceFactory {
	names_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_CArray[i] = (C.int)(names[i])
	}
	names_ma := C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	parameters_CArray := (*[0xffff]*C.QScxmlExecutableContent__ParameterInfo)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_CArray))
	for i := range parameters {
		parameters_CArray[i] = parameters[i].cPointer()
	}
	parameters_ma := C.struct_miqt_array{len: C.size_t(len(parameters)), data: unsafe.Pointer(parameters_CArray)}

	return newQScxmlDynamicScxmlServiceFactory(C.QScxmlDynamicScxmlServiceFactory_new(invokeInfo.cPointer(), names_ma, parameters_ma))
}

// NewQScxmlDynamicScxmlServiceFactory2 constructs a new QScxmlDynamicScxmlServiceFactory object.
func NewQScxmlDynamicScxmlServiceFactory2(invokeInfo *QScxmlExecutableContent__InvokeInfo, names []int, parameters []QScxmlExecutableContent__ParameterInfo, parent *qt6.QObject) *QScxmlDynamicScxmlServiceFactory {
	names_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_CArray[i] = (C.int)(names[i])
	}
	names_ma := C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	parameters_CArray := (*[0xffff]*C.QScxmlExecutableContent__ParameterInfo)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_CArray))
	for i := range parameters {
		parameters_CArray[i] = parameters[i].cPointer()
	}
	parameters_ma := C.struct_miqt_array{len: C.size_t(len(parameters)), data: unsafe.Pointer(parameters_CArray)}

	return newQScxmlDynamicScxmlServiceFactory(C.QScxmlDynamicScxmlServiceFactory_new2(invokeInfo.cPointer(), names_ma, parameters_ma, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QScxmlDynamicScxmlServiceFactory) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScxmlDynamicScxmlServiceFactory_metaObject(this.h)))
}

func (this *QScxmlDynamicScxmlServiceFactory) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScxmlDynamicScxmlServiceFactory_metacast(this.h, param1_Cstring))
}

func QScxmlDynamicScxmlServiceFactory_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlDynamicScxmlServiceFactory_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlDynamicScxmlServiceFactory) Invoke(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService {
	return newQScxmlInvokableService(C.QScxmlDynamicScxmlServiceFactory_invoke(this.h, parentStateMachine.cPointer()))
}

func QScxmlDynamicScxmlServiceFactory_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlDynamicScxmlServiceFactory_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlDynamicScxmlServiceFactory_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlDynamicScxmlServiceFactory_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QScxmlDynamicScxmlServiceFactory that was directly constructed.
func (this *QScxmlDynamicScxmlServiceFactory) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QScxmlDynamicScxmlServiceFactory_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QScxmlDynamicScxmlServiceFactory that was directly constructed.
func (this *QScxmlDynamicScxmlServiceFactory) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlDynamicScxmlServiceFactory_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QScxmlDynamicScxmlServiceFactory that was directly constructed.
func (this *QScxmlDynamicScxmlServiceFactory) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlDynamicScxmlServiceFactory_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QScxmlDynamicScxmlServiceFactory that was directly constructed.
func (this *QScxmlDynamicScxmlServiceFactory) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QScxmlDynamicScxmlServiceFactory_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QScxmlDynamicScxmlServiceFactory) callVirtualBase_Invoke(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService {

	return newQScxmlInvokableService(C.QScxmlDynamicScxmlServiceFactory_virtualbase_invoke(unsafe.Pointer(this.h), parentStateMachine.cPointer()))

}
func (this *QScxmlDynamicScxmlServiceFactory) OnInvoke(slot func(super func(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService, parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService) {
	ok := C.QScxmlDynamicScxmlServiceFactory_override_virtual_invoke(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_invoke
func miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_invoke(self *C.QScxmlDynamicScxmlServiceFactory, cb C.intptr_t, parentStateMachine *C.QScxmlStateMachine) *C.QScxmlInvokableService {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService, parentStateMachine *QScxmlStateMachine) *QScxmlInvokableService)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlStateMachine(parentStateMachine)

	virtualReturn := gofunc((&QScxmlDynamicScxmlServiceFactory{h: self}).callVirtualBase_Invoke, slotval1)

	return virtualReturn.cPointer()

}

func (this *QScxmlDynamicScxmlServiceFactory) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QScxmlDynamicScxmlServiceFactory_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlDynamicScxmlServiceFactory) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QScxmlDynamicScxmlServiceFactory_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_event
func miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_event(self *C.QScxmlDynamicScxmlServiceFactory, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlDynamicScxmlServiceFactory{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlDynamicScxmlServiceFactory) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QScxmlDynamicScxmlServiceFactory_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlDynamicScxmlServiceFactory) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QScxmlDynamicScxmlServiceFactory_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_eventFilter
func miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_eventFilter(self *C.QScxmlDynamicScxmlServiceFactory, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlDynamicScxmlServiceFactory{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlDynamicScxmlServiceFactory) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QScxmlDynamicScxmlServiceFactory_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScxmlDynamicScxmlServiceFactory) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QScxmlDynamicScxmlServiceFactory_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_timerEvent
func miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_timerEvent(self *C.QScxmlDynamicScxmlServiceFactory, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScxmlDynamicScxmlServiceFactory{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScxmlDynamicScxmlServiceFactory) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QScxmlDynamicScxmlServiceFactory_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScxmlDynamicScxmlServiceFactory) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QScxmlDynamicScxmlServiceFactory_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_childEvent
func miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_childEvent(self *C.QScxmlDynamicScxmlServiceFactory, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScxmlDynamicScxmlServiceFactory{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScxmlDynamicScxmlServiceFactory) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QScxmlDynamicScxmlServiceFactory_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScxmlDynamicScxmlServiceFactory) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QScxmlDynamicScxmlServiceFactory_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_customEvent
func miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_customEvent(self *C.QScxmlDynamicScxmlServiceFactory, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScxmlDynamicScxmlServiceFactory{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScxmlDynamicScxmlServiceFactory) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlDynamicScxmlServiceFactory_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlDynamicScxmlServiceFactory) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlDynamicScxmlServiceFactory_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_connectNotify
func miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_connectNotify(self *C.QScxmlDynamicScxmlServiceFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlDynamicScxmlServiceFactory{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScxmlDynamicScxmlServiceFactory) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlDynamicScxmlServiceFactory_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlDynamicScxmlServiceFactory) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlDynamicScxmlServiceFactory_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_disconnectNotify
func miqt_exec_callback_QScxmlDynamicScxmlServiceFactory_disconnectNotify(self *C.QScxmlDynamicScxmlServiceFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlDynamicScxmlServiceFactory{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScxmlDynamicScxmlServiceFactory) Delete() {
	C.QScxmlDynamicScxmlServiceFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlDynamicScxmlServiceFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlDynamicScxmlServiceFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
