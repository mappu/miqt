package webchannel

/*

#include "gen_qwebchannelabstracttransport.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebChannelAbstractTransport struct {
	h *C.QWebChannelAbstractTransport
	*qt6.QObject
}

func (this *QWebChannelAbstractTransport) cPointer() *C.QWebChannelAbstractTransport {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebChannelAbstractTransport) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebChannelAbstractTransport constructs the type using only CGO pointers.
func newQWebChannelAbstractTransport(h *C.QWebChannelAbstractTransport) *QWebChannelAbstractTransport {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebChannelAbstractTransport_virtbase(h, &outptr_QObject)

	return &QWebChannelAbstractTransport{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebChannelAbstractTransport constructs the type using only unsafe pointers.
func UnsafeNewQWebChannelAbstractTransport(h unsafe.Pointer) *QWebChannelAbstractTransport {
	return newQWebChannelAbstractTransport((*C.QWebChannelAbstractTransport)(h))
}

// NewQWebChannelAbstractTransport constructs a new QWebChannelAbstractTransport object.
func NewQWebChannelAbstractTransport() *QWebChannelAbstractTransport {

	return newQWebChannelAbstractTransport(C.QWebChannelAbstractTransport_new())
}

// NewQWebChannelAbstractTransport2 constructs a new QWebChannelAbstractTransport object.
func NewQWebChannelAbstractTransport2(parent *qt6.QObject) *QWebChannelAbstractTransport {

	return newQWebChannelAbstractTransport(C.QWebChannelAbstractTransport_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QWebChannelAbstractTransport) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebChannelAbstractTransport_metaObject(this.h)))
}

func (this *QWebChannelAbstractTransport) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebChannelAbstractTransport_metacast(this.h, param1_Cstring))
}

func QWebChannelAbstractTransport_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannelAbstractTransport_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebChannelAbstractTransport) SendMessage(message *qt6.QJsonObject) {
	C.QWebChannelAbstractTransport_sendMessage(this.h, (*C.QJsonObject)(message.UnsafePointer()))
}

func (this *QWebChannelAbstractTransport) MessageReceived(message *qt6.QJsonObject, transport *QWebChannelAbstractTransport) {
	C.QWebChannelAbstractTransport_messageReceived(this.h, (*C.QJsonObject)(message.UnsafePointer()), transport.cPointer())
}
func (this *QWebChannelAbstractTransport) OnMessageReceived(slot func(message *qt6.QJsonObject, transport *QWebChannelAbstractTransport)) {
	C.QWebChannelAbstractTransport_connect_messageReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannelAbstractTransport_messageReceived
func miqt_exec_callback_QWebChannelAbstractTransport_messageReceived(cb C.intptr_t, message *C.QJsonObject, transport *C.QWebChannelAbstractTransport) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message *qt6.QJsonObject, transport *QWebChannelAbstractTransport))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQJsonObject(unsafe.Pointer(message))

	slotval2 := newQWebChannelAbstractTransport(transport)

	gofunc(slotval1, slotval2)
}

func QWebChannelAbstractTransport_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannelAbstractTransport_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebChannelAbstractTransport_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannelAbstractTransport_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QWebChannelAbstractTransport that was directly constructed.
func (this *QWebChannelAbstractTransport) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QWebChannelAbstractTransport_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWebChannelAbstractTransport that was directly constructed.
func (this *QWebChannelAbstractTransport) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebChannelAbstractTransport_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWebChannelAbstractTransport that was directly constructed.
func (this *QWebChannelAbstractTransport) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebChannelAbstractTransport_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWebChannelAbstractTransport that was directly constructed.
func (this *QWebChannelAbstractTransport) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebChannelAbstractTransport_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QWebChannelAbstractTransport) OnSendMessage(slot func(message *qt6.QJsonObject)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_sendMessage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_sendMessage
func miqt_exec_callback_QWebChannelAbstractTransport_sendMessage(self *C.QWebChannelAbstractTransport, cb C.intptr_t, message *C.QJsonObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message *qt6.QJsonObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQJsonObject(unsafe.Pointer(message))

	gofunc(slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QWebChannelAbstractTransport_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebChannelAbstractTransport) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QWebChannelAbstractTransport_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_event
func miqt_exec_callback_QWebChannelAbstractTransport_event(self *C.QWebChannelAbstractTransport, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWebChannelAbstractTransport_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebChannelAbstractTransport) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QWebChannelAbstractTransport_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_eventFilter
func miqt_exec_callback_QWebChannelAbstractTransport_eventFilter(self *C.QWebChannelAbstractTransport, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWebChannelAbstractTransport_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_timerEvent
func miqt_exec_callback_QWebChannelAbstractTransport_timerEvent(self *C.QWebChannelAbstractTransport, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWebChannelAbstractTransport_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_childEvent
func miqt_exec_callback_QWebChannelAbstractTransport_childEvent(self *C.QWebChannelAbstractTransport, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWebChannelAbstractTransport_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_customEvent
func miqt_exec_callback_QWebChannelAbstractTransport_customEvent(self *C.QWebChannelAbstractTransport, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWebChannelAbstractTransport_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_connectNotify
func miqt_exec_callback_QWebChannelAbstractTransport_connectNotify(self *C.QWebChannelAbstractTransport, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWebChannelAbstractTransport_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_disconnectNotify
func miqt_exec_callback_QWebChannelAbstractTransport_disconnectNotify(self *C.QWebChannelAbstractTransport, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebChannelAbstractTransport) Delete() {
	C.QWebChannelAbstractTransport_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebChannelAbstractTransport) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebChannelAbstractTransport) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
