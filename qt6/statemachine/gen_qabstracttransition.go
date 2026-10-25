package statemachine

/*

#include "gen_qabstracttransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractTransition__TransitionType int

const (
	QAbstractTransition__ExternalTransition QAbstractTransition__TransitionType = 0
	QAbstractTransition__InternalTransition QAbstractTransition__TransitionType = 1
)

type QAbstractTransition struct {
	h  *C.QAbstractTransition
	gc *[1]unsafe.Pointer
	*qt6.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractTransition) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAbstractTransition) cPointer() *C.QAbstractTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractTransition constructs the type using only CGO pointers.
func newQAbstractTransition(h *C.QAbstractTransition) *QAbstractTransition {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractTransition_virtbase(h, &outptr_QObject)

	return &QAbstractTransition{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAbstractTransition constructs the type using only unsafe pointers.
func UnsafeNewQAbstractTransition(h unsafe.Pointer) *QAbstractTransition {
	return newQAbstractTransition((*C.QAbstractTransition)(h))
}

// NewQAbstractTransition constructs a new QAbstractTransition object.
func NewQAbstractTransition() *QAbstractTransition {

	return newQAbstractTransition(C.QAbstractTransition_new())
}

// NewQAbstractTransition2 constructs a new QAbstractTransition object.
func NewQAbstractTransition2(sourceState *QState) *QAbstractTransition {
	defer runtime.KeepAlive(sourceState)

	return newQAbstractTransition(C.QAbstractTransition_new2(sourceState.cPointer()))
}

func (this *QAbstractTransition) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractTransition_metaObject(this.h)))
}

func (this *QAbstractTransition) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractTransition_metacast(this.h, param1_Cstring))
}

func QAbstractTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTransition) SourceState() *QState {
	defer runtime.KeepAlive(this)
	return newQState(C.QAbstractTransition_sourceState(this.h))
}

func (this *QAbstractTransition) TargetState() *QAbstractState {
	defer runtime.KeepAlive(this)
	return newQAbstractState(C.QAbstractTransition_targetState(this.h))
}

func (this *QAbstractTransition) SetTargetState(target *QAbstractState) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(target)
	C.QAbstractTransition_setTargetState(this.h, target.cPointer())
}

func (this *QAbstractTransition) TargetStates() []*QAbstractState {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAbstractTransition_targetStates(this.h)
	_ret := make([]*QAbstractState, int(_ma.len))
	_outCast := unsafe.Slice((**C.QAbstractState)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractState(_outCast[i])
	}
	return _ret
}

func (this *QAbstractTransition) SetTargetStates(targets []*QAbstractState) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(targets)
	targets_CArray_ptr := (**C.QAbstractState)(C.malloc(C.size_t(8 * len(targets))))
	defer C.free(unsafe.Pointer(targets_CArray_ptr))
	targets_CArray := unsafe.Slice(targets_CArray_ptr, len(targets))
	for i := range targets {
		targets_CArray[i] = targets[i].cPointer()
	}
	targets_ma := C.struct_miqt_array{len: C.size_t(len(targets)), data: unsafe.Pointer(targets_CArray_ptr)}
	C.QAbstractTransition_setTargetStates(this.h, targets_ma)
}

func (this *QAbstractTransition) TransitionType() QAbstractTransition__TransitionType {
	defer runtime.KeepAlive(this)
	return (QAbstractTransition__TransitionType)(C.QAbstractTransition_transitionType(this.h))
}

func (this *QAbstractTransition) SetTransitionType(typeVal QAbstractTransition__TransitionType) {
	defer runtime.KeepAlive(this)
	C.QAbstractTransition_setTransitionType(this.h, (C.int)(typeVal))
}

func (this *QAbstractTransition) Machine() *QStateMachine {
	defer runtime.KeepAlive(this)
	return newQStateMachine(C.QAbstractTransition_machine(this.h))
}

func (this *QAbstractTransition) AddAnimation(animation *qt6.QAbstractAnimation) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(animation)
	C.QAbstractTransition_addAnimation(this.h, (*C.QAbstractAnimation)(animation.UnsafePointer()))
}

func (this *QAbstractTransition) RemoveAnimation(animation *qt6.QAbstractAnimation) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(animation)
	C.QAbstractTransition_removeAnimation(this.h, (*C.QAbstractAnimation)(animation.UnsafePointer()))
}

func (this *QAbstractTransition) Animations() []*qt6.QAbstractAnimation {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAbstractTransition_animations(this.h)
	_ret := make([]*qt6.QAbstractAnimation, int(_ma.len))
	_outCast := unsafe.Slice((**C.QAbstractAnimation)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQAbstractAnimation(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func QAbstractTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QAbstractTransition that was directly constructed.
func (this *QAbstractTransition) Sender() *qt6.QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QAbstractTransition_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAbstractTransition that was directly constructed.
func (this *QAbstractTransition) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractTransition_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAbstractTransition that was directly constructed.
func (this *QAbstractTransition) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractTransition_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAbstractTransition that was directly constructed.
func (this *QAbstractTransition) IsSignalConnected(signal *qt6.QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractTransition_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QAbstractTransition) OnEventTest(slot func(event *qt6.QEvent) bool) {
	ok := C.QAbstractTransition_override_virtual_eventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_eventTest
func miqt_exec_callback_QAbstractTransition_eventTest(self *C.QAbstractTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractTransition) OnOnTransition(slot func(event *qt6.QEvent)) {
	ok := C.QAbstractTransition_override_virtual_onTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_onTransition
func miqt_exec_callback_QAbstractTransition_onTransition(self *C.QAbstractTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc(slotval1)

}

func (this *QAbstractTransition) callVirtualBase_Event(e *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(e)

	return (bool)(C.QAbstractTransition_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QAbstractTransition) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QAbstractTransition_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_event
func miqt_exec_callback_QAbstractTransition_event(self *C.QAbstractTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QAbstractTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractTransition) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QAbstractTransition_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractTransition) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAbstractTransition_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_eventFilter
func miqt_exec_callback_QAbstractTransition_eventFilter(self *C.QAbstractTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractTransition) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QAbstractTransition_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAbstractTransition) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAbstractTransition_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_timerEvent
func miqt_exec_callback_QAbstractTransition_timerEvent(self *C.QAbstractTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractTransition) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QAbstractTransition_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAbstractTransition) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAbstractTransition_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_childEvent
func miqt_exec_callback_QAbstractTransition_childEvent(self *C.QAbstractTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractTransition) callVirtualBase_CustomEvent(event *qt6.QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QAbstractTransition_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractTransition) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAbstractTransition_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_customEvent
func miqt_exec_callback_QAbstractTransition_customEvent(self *C.QAbstractTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractTransition) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QAbstractTransition_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractTransition) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAbstractTransition_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_connectNotify
func miqt_exec_callback_QAbstractTransition_connectNotify(self *C.QAbstractTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractTransition) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QAbstractTransition_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractTransition) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAbstractTransition_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTransition_disconnectNotify
func miqt_exec_callback_QAbstractTransition_disconnectNotify(self *C.QAbstractTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QAbstractTransition) OnTriggered(slot func()) {
	C.QAbstractTransition_connect_triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_triggered
func miqt_exec_callback_QAbstractTransition_triggered(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractTransition) OnTargetStateChanged(slot func()) {
	C.QAbstractTransition_connect_targetStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_targetStateChanged
func miqt_exec_callback_QAbstractTransition_targetStateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractTransition) OnTargetStatesChanged(slot func()) {
	C.QAbstractTransition_connect_targetStatesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_targetStatesChanged
func miqt_exec_callback_QAbstractTransition_targetStatesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QAbstractTransition) Delete() {
	C.QAbstractTransition_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAbstractTransition) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractTransition_delete((*C.QAbstractTransition)(gc[0]))
	})
	this.miqtSetGC(gc)
}
