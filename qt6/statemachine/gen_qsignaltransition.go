package statemachine

/*

#include "gen_qsignaltransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSignalTransition struct {
	h *C.QSignalTransition
	*QAbstractTransition
}

func (this *QSignalTransition) cPointer() *C.QSignalTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSignalTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSignalTransition constructs the type using only CGO pointers.
func newQSignalTransition(h *C.QSignalTransition) *QSignalTransition {
	if h == nil {
		return nil
	}
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	C.QSignalTransition_virtbase(h, &outptr_QAbstractTransition)

	return &QSignalTransition{h: h,
		QAbstractTransition: newQAbstractTransition(outptr_QAbstractTransition)}
}

// UnsafeNewQSignalTransition constructs the type using only unsafe pointers.
func UnsafeNewQSignalTransition(h unsafe.Pointer) *QSignalTransition {
	return newQSignalTransition((*C.QSignalTransition)(h))
}

// NewQSignalTransition constructs a new QSignalTransition object.
func NewQSignalTransition() *QSignalTransition {

	return newQSignalTransition(C.QSignalTransition_new())
}

// NewQSignalTransition2 constructs a new QSignalTransition object.
func NewQSignalTransition2(sender *qt6.QObject, signal string) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	return newQSignalTransition(C.QSignalTransition_new2((*C.QObject)(sender.UnsafePointer()), signal_Cstring))
}

// NewQSignalTransition3 constructs a new QSignalTransition object.
func NewQSignalTransition3(sourceState *QState) *QSignalTransition {

	return newQSignalTransition(C.QSignalTransition_new3(sourceState.cPointer()))
}

// NewQSignalTransition4 constructs a new QSignalTransition object.
func NewQSignalTransition4(sender *qt6.QObject, signal string, sourceState *QState) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	return newQSignalTransition(C.QSignalTransition_new4((*C.QObject)(sender.UnsafePointer()), signal_Cstring, sourceState.cPointer()))
}

func (this *QSignalTransition) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSignalTransition_metaObject(this.h)))
}

func (this *QSignalTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSignalTransition_metacast(this.h, param1_Cstring))
}

func QSignalTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalTransition) SenderObject() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QSignalTransition_senderObject(this.h)))
}

func (this *QSignalTransition) SetSenderObject(sender *qt6.QObject) {
	C.QSignalTransition_setSenderObject(this.h, (*C.QObject)(sender.UnsafePointer()))
}

func (this *QSignalTransition) Signal() []byte {
	var _bytearray C.struct_miqt_string = C.QSignalTransition_signal(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSignalTransition) SetSignal(signal []byte) {
	signal_alias := C.struct_miqt_string{}
	if len(signal) > 0 {
		signal_alias.data = (*C.char)(unsafe.Pointer(&signal[0]))
	} else {
		signal_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	signal_alias.len = C.size_t(len(signal))
	C.QSignalTransition_setSignal(this.h, signal_alias)
}

func QSignalTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QSignalTransition that was directly constructed.
func (this *QSignalTransition) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QSignalTransition_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSignalTransition that was directly constructed.
func (this *QSignalTransition) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSignalTransition_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSignalTransition that was directly constructed.
func (this *QSignalTransition) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSignalTransition_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSignalTransition that was directly constructed.
func (this *QSignalTransition) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSignalTransition_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSignalTransition) callVirtualBase_EventTest(event *qt6.QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_eventTest(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSignalTransition) OnEventTest(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_eventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_eventTest
func miqt_exec_callback_QSignalTransition_eventTest(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_OnTransition(event *qt6.QEvent) {

	C.QSignalTransition_virtualbase_onTransition(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSignalTransition) OnOnTransition(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSignalTransition_override_virtual_onTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_onTransition
func miqt_exec_callback_QSignalTransition_onTransition(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSignalTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QSignalTransition) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QSignalTransition) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_event
func miqt_exec_callback_QSignalTransition_event(self *C.QSignalTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSignalTransition) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_eventFilter
func miqt_exec_callback_QSignalTransition_eventFilter(self *C.QSignalTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QSignalTransition_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSignalTransition) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSignalTransition_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_timerEvent
func miqt_exec_callback_QSignalTransition_timerEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSignalTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSignalTransition_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSignalTransition) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSignalTransition_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_childEvent
func miqt_exec_callback_QSignalTransition_childEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSignalTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSignalTransition_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSignalTransition) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSignalTransition_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_customEvent
func miqt_exec_callback_QSignalTransition_customEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSignalTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSignalTransition_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSignalTransition) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSignalTransition_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_connectNotify
func miqt_exec_callback_QSignalTransition_connectNotify(self *C.QSignalTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSignalTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSignalTransition) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSignalTransition_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSignalTransition) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSignalTransition_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_disconnectNotify
func miqt_exec_callback_QSignalTransition_disconnectNotify(self *C.QSignalTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSignalTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QSignalTransition) OnSenderObjectChanged(slot func()) {
	C.QSignalTransition_connect_senderObjectChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalTransition_senderObjectChanged
func miqt_exec_callback_QSignalTransition_senderObjectChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSignalTransition) OnSignalChanged(slot func()) {
	C.QSignalTransition_connect_signalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalTransition_signalChanged
func miqt_exec_callback_QSignalTransition_signalChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QSignalTransition) Delete() {
	C.QSignalTransition_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSignalTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QSignalTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
