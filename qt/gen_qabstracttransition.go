package qt

/*

#include "gen_qabstracttransition.h"
#include <stdlib.h>

*/
import "C"

import (
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
	h          *C.QAbstractTransition
	isSubclass bool
	*QObject
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
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAbstractTransition constructs the type using only unsafe pointers.
func UnsafeNewQAbstractTransition(h unsafe.Pointer) *QAbstractTransition {
	return newQAbstractTransition((*C.QAbstractTransition)(h))
}

// NewQAbstractTransition constructs a new QAbstractTransition object.
func NewQAbstractTransition() *QAbstractTransition {

	ret := newQAbstractTransition(C.QAbstractTransition_new())
	ret.isSubclass = true
	return ret
}

// NewQAbstractTransition2 constructs a new QAbstractTransition object.
func NewQAbstractTransition2(sourceState *QState) *QAbstractTransition {

	ret := newQAbstractTransition(C.QAbstractTransition_new2(sourceState.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QAbstractTransition) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractTransition_MetaObject(this.h))
}

func (this *QAbstractTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractTransition_Metacast(this.h, param1_Cstring))
}

func QAbstractTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTransition) SourceState() *QState {
	return newQState(C.QAbstractTransition_SourceState(this.h))
}

func (this *QAbstractTransition) TargetState() *QAbstractState {
	return newQAbstractState(C.QAbstractTransition_TargetState(this.h))
}

func (this *QAbstractTransition) SetTargetState(target *QAbstractState) {
	C.QAbstractTransition_SetTargetState(this.h, target.cPointer())
}

func (this *QAbstractTransition) TargetStates() []*QAbstractState {
	var _ma C.struct_miqt_array = C.QAbstractTransition_TargetStates(this.h)
	_ret := make([]*QAbstractState, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractState)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractState(_outCast[i])
	}
	return _ret
}

func (this *QAbstractTransition) SetTargetStates(targets []*QAbstractState) {
	targets_CArray := (*[0xffff]*C.QAbstractState)(C.malloc(C.size_t(8 * len(targets))))
	defer C.free(unsafe.Pointer(targets_CArray))
	for i := range targets {
		targets_CArray[i] = targets[i].cPointer()
	}
	targets_ma := C.struct_miqt_array{len: C.size_t(len(targets)), data: unsafe.Pointer(targets_CArray)}
	C.QAbstractTransition_SetTargetStates(this.h, targets_ma)
}

func (this *QAbstractTransition) TransitionType() QAbstractTransition__TransitionType {
	return (QAbstractTransition__TransitionType)(C.QAbstractTransition_TransitionType(this.h))
}

func (this *QAbstractTransition) SetTransitionType(typeVal QAbstractTransition__TransitionType) {
	C.QAbstractTransition_SetTransitionType(this.h, (C.int)(typeVal))
}

func (this *QAbstractTransition) Machine() *QStateMachine {
	return newQStateMachine(C.QAbstractTransition_Machine(this.h))
}

func (this *QAbstractTransition) AddAnimation(animation *QAbstractAnimation) {
	C.QAbstractTransition_AddAnimation(this.h, animation.cPointer())
}

func (this *QAbstractTransition) RemoveAnimation(animation *QAbstractAnimation) {
	C.QAbstractTransition_RemoveAnimation(this.h, animation.cPointer())
}

func (this *QAbstractTransition) Animations() []*QAbstractAnimation {
	var _ma C.struct_miqt_array = C.QAbstractTransition_Animations(this.h)
	_ret := make([]*QAbstractAnimation, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAnimation)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAnimation(_outCast[i])
	}
	return _ret
}

func QAbstractTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAbstractTransition) OnEventTest(slot func(event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_EventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_EventTest
func miqt_exec_callback_QAbstractTransition_EventTest(self *C.QAbstractTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractTransition) OnOnTransition(slot func(event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_OnTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_OnTransition
func miqt_exec_callback_QAbstractTransition_OnTransition(self *C.QAbstractTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc(slotval1)

}

func (this *QAbstractTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QAbstractTransition_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QAbstractTransition) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_Event
func miqt_exec_callback_QAbstractTransition_Event(self *C.QAbstractTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QAbstractTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractTransition) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractTransition_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractTransition) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_EventFilter
func miqt_exec_callback_QAbstractTransition_EventFilter(self *C.QAbstractTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractTransition) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractTransition_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTransition) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_TimerEvent
func miqt_exec_callback_QAbstractTransition_TimerEvent(self *C.QAbstractTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractTransition) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractTransition_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTransition) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_ChildEvent
func miqt_exec_callback_QAbstractTransition_ChildEvent(self *C.QAbstractTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractTransition) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractTransition_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTransition) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_CustomEvent
func miqt_exec_callback_QAbstractTransition_CustomEvent(self *C.QAbstractTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractTransition) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractTransition_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractTransition) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_ConnectNotify
func miqt_exec_callback_QAbstractTransition_ConnectNotify(self *C.QAbstractTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractTransition) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractTransition_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractTransition) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractTransition_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTransition_DisconnectNotify
func miqt_exec_callback_QAbstractTransition_DisconnectNotify(self *C.QAbstractTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractTransition) Delete() {
	C.QAbstractTransition_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
