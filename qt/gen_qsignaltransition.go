package qt

/*

#include "gen_qsignaltransition.h"
#include <stdlib.h>

*/
import "C"

import (
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
func NewQSignalTransition2(sender *QObject, signal string) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	return newQSignalTransition(C.QSignalTransition_new2(sender.cPointer(), signal_Cstring))
}

// NewQSignalTransition3 constructs a new QSignalTransition object.
func NewQSignalTransition3(sourceState *QState) *QSignalTransition {

	return newQSignalTransition(C.QSignalTransition_new3(sourceState.cPointer()))
}

// NewQSignalTransition4 constructs a new QSignalTransition object.
func NewQSignalTransition4(sender *QObject, signal string, sourceState *QState) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	return newQSignalTransition(C.QSignalTransition_new4(sender.cPointer(), signal_Cstring, sourceState.cPointer()))
}

func (this *QSignalTransition) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSignalTransition_metaObject(this.h))
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

func QSignalTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalTransition) SenderObject() *QObject {
	return newQObject(C.QSignalTransition_senderObject(this.h))
}

func (this *QSignalTransition) SetSenderObject(sender *QObject) {
	C.QSignalTransition_setSenderObject(this.h, sender.cPointer())
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

func QSignalTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_eventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSignalTransition) OneventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_eventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_eventTest
func miqt_exec_callback_QSignalTransition_eventTest(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_OnTransition(event *QEvent) {

	C.QSignalTransition_virtualbase_onTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OnonTransition(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSignalTransition_override_virtual_onTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_onTransition
func miqt_exec_callback_QSignalTransition_onTransition(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QSignalTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QSignalTransition) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_event
func miqt_exec_callback_QSignalTransition_event(self *C.QSignalTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSignalTransition) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_eventFilter
func miqt_exec_callback_QSignalTransition_eventFilter(self *C.QSignalTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSignalTransition_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSignalTransition_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_timerEvent
func miqt_exec_callback_QSignalTransition_timerEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSignalTransition_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSignalTransition_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_childEvent
func miqt_exec_callback_QSignalTransition_childEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSignalTransition_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSignalTransition_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_customEvent
func miqt_exec_callback_QSignalTransition_customEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSignalTransition_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSignalTransition) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSignalTransition_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_connectNotify
func miqt_exec_callback_QSignalTransition_connectNotify(self *C.QSignalTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSignalTransition) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSignalTransition_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSignalTransition) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSignalTransition_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_disconnectNotify
func miqt_exec_callback_QSignalTransition_disconnectNotify(self *C.QSignalTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
