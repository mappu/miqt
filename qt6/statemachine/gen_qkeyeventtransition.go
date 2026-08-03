package statemachine

/*

#include "gen_qkeyeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QKeyEventTransition struct {
	h *C.QKeyEventTransition
	*QEventTransition
}

func (this *QKeyEventTransition) cPointer() *C.QKeyEventTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeyEventTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQKeyEventTransition constructs the type using only CGO pointers.
func newQKeyEventTransition(h *C.QKeyEventTransition) *QKeyEventTransition {
	if h == nil {
		return nil
	}
	var outptr_QEventTransition *C.QEventTransition = nil
	C.QKeyEventTransition_virtbase(h, &outptr_QEventTransition)

	return &QKeyEventTransition{h: h,
		QEventTransition: newQEventTransition(outptr_QEventTransition)}
}

// UnsafeNewQKeyEventTransition constructs the type using only unsafe pointers.
func UnsafeNewQKeyEventTransition(h unsafe.Pointer) *QKeyEventTransition {
	return newQKeyEventTransition((*C.QKeyEventTransition)(h))
}

// NewQKeyEventTransition constructs a new QKeyEventTransition object.
func NewQKeyEventTransition() *QKeyEventTransition {

	return newQKeyEventTransition(C.QKeyEventTransition_new())
}

// NewQKeyEventTransition2 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition2(object *qt6.QObject, typeVal qt6.QEvent__Type, key int) *QKeyEventTransition {

	return newQKeyEventTransition(C.QKeyEventTransition_new2((*C.QObject)(object.UnsafePointer()), (C.int)(typeVal), (C.int)(key)))
}

// NewQKeyEventTransition3 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition3(sourceState *QState) *QKeyEventTransition {

	return newQKeyEventTransition(C.QKeyEventTransition_new3(sourceState.cPointer()))
}

// NewQKeyEventTransition4 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition4(object *qt6.QObject, typeVal qt6.QEvent__Type, key int, sourceState *QState) *QKeyEventTransition {

	return newQKeyEventTransition(C.QKeyEventTransition_new4((*C.QObject)(object.UnsafePointer()), (C.int)(typeVal), (C.int)(key), sourceState.cPointer()))
}

func (this *QKeyEventTransition) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QKeyEventTransition_metaObject(this.h)))
}

func (this *QKeyEventTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QKeyEventTransition_metacast(this.h, param1_Cstring))
}

func QKeyEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeyEventTransition) Key() int {
	return (int)(C.QKeyEventTransition_key(this.h))
}

func (this *QKeyEventTransition) SetKey(key int) {
	C.QKeyEventTransition_setKey(this.h, (C.int)(key))
}

func (this *QKeyEventTransition) ModifierMask() qt6.KeyboardModifier {
	return (qt6.KeyboardModifier)(C.QKeyEventTransition_modifierMask(this.h))
}

func (this *QKeyEventTransition) SetModifierMask(modifiers qt6.KeyboardModifier) {
	C.QKeyEventTransition_setModifierMask(this.h, (C.int)(modifiers))
}

func QKeyEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QKeyEventTransition that was directly constructed.
func (this *QKeyEventTransition) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QKeyEventTransition_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QKeyEventTransition that was directly constructed.
func (this *QKeyEventTransition) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QKeyEventTransition_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QKeyEventTransition that was directly constructed.
func (this *QKeyEventTransition) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QKeyEventTransition_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QKeyEventTransition that was directly constructed.
func (this *QKeyEventTransition) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QKeyEventTransition_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QKeyEventTransition) callVirtualBase_OnTransition(event *qt6.QEvent) {

	C.QKeyEventTransition_virtualbase_onTransition(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QKeyEventTransition) OnOnTransition(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QKeyEventTransition_override_virtual_onTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_onTransition
func miqt_exec_callback_QKeyEventTransition_onTransition(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_EventTest(event *qt6.QEvent) bool {

	return (bool)(C.QKeyEventTransition_virtualbase_eventTest(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QKeyEventTransition) OnEventTest(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QKeyEventTransition_override_virtual_eventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_eventTest
func miqt_exec_callback_QKeyEventTransition_eventTest(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QKeyEventTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QKeyEventTransition) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.QKeyEventTransition_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QKeyEventTransition) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QKeyEventTransition_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_event
func miqt_exec_callback_QKeyEventTransition_event(self *C.QKeyEventTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QKeyEventTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QKeyEventTransition) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QKeyEventTransition_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QKeyEventTransition) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QKeyEventTransition_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_eventFilter
func miqt_exec_callback_QKeyEventTransition_eventFilter(self *C.QKeyEventTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QKeyEventTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QKeyEventTransition) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QKeyEventTransition_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QKeyEventTransition) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QKeyEventTransition_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_timerEvent
func miqt_exec_callback_QKeyEventTransition_timerEvent(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QKeyEventTransition_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QKeyEventTransition) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QKeyEventTransition_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_childEvent
func miqt_exec_callback_QKeyEventTransition_childEvent(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QKeyEventTransition_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QKeyEventTransition) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QKeyEventTransition_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_customEvent
func miqt_exec_callback_QKeyEventTransition_customEvent(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QKeyEventTransition_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QKeyEventTransition) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QKeyEventTransition_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_connectNotify
func miqt_exec_callback_QKeyEventTransition_connectNotify(self *C.QKeyEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QKeyEventTransition_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QKeyEventTransition) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QKeyEventTransition_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeyEventTransition_disconnectNotify
func miqt_exec_callback_QKeyEventTransition_disconnectNotify(self *C.QKeyEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QKeyEventTransition) Delete() {
	C.QKeyEventTransition_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeyEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeyEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
