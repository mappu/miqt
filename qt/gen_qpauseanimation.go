package qt

/*

#include "gen_qpauseanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPauseAnimation struct {
	h *C.QPauseAnimation
	*QAbstractAnimation
}

func (this *QPauseAnimation) cPointer() *C.QPauseAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPauseAnimation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPauseAnimation constructs the type using only CGO pointers.
func newQPauseAnimation(h *C.QPauseAnimation) *QPauseAnimation {
	if h == nil {
		return nil
	}
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	C.QPauseAnimation_virtbase(h, &outptr_QAbstractAnimation)

	return &QPauseAnimation{h: h,
		QAbstractAnimation: newQAbstractAnimation(outptr_QAbstractAnimation)}
}

// UnsafeNewQPauseAnimation constructs the type using only unsafe pointers.
func UnsafeNewQPauseAnimation(h unsafe.Pointer) *QPauseAnimation {
	return newQPauseAnimation((*C.QPauseAnimation)(h))
}

// NewQPauseAnimation constructs a new QPauseAnimation object.
func NewQPauseAnimation() *QPauseAnimation {

	return newQPauseAnimation(C.QPauseAnimation_new())
}

// NewQPauseAnimation2 constructs a new QPauseAnimation object.
func NewQPauseAnimation2(msecs int) *QPauseAnimation {

	return newQPauseAnimation(C.QPauseAnimation_new2((C.int)(msecs)))
}

// NewQPauseAnimation3 constructs a new QPauseAnimation object.
func NewQPauseAnimation3(parent *QObject) *QPauseAnimation {

	return newQPauseAnimation(C.QPauseAnimation_new3(parent.cPointer()))
}

// NewQPauseAnimation4 constructs a new QPauseAnimation object.
func NewQPauseAnimation4(msecs int, parent *QObject) *QPauseAnimation {

	return newQPauseAnimation(C.QPauseAnimation_new4((C.int)(msecs), parent.cPointer()))
}

func (this *QPauseAnimation) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPauseAnimation_metaObject(this.h))
}

func (this *QPauseAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPauseAnimation_metacast(this.h, param1_Cstring))
}

func QPauseAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPauseAnimation) Duration() int {
	return (int)(C.QPauseAnimation_duration(this.h))
}

func (this *QPauseAnimation) SetDuration(msecs int) {
	C.QPauseAnimation_setDuration(this.h, (C.int)(msecs))
}

func QPauseAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QPauseAnimation that was directly constructed.
func (this *QPauseAnimation) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QPauseAnimation_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPauseAnimation that was directly constructed.
func (this *QPauseAnimation) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPauseAnimation_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPauseAnimation that was directly constructed.
func (this *QPauseAnimation) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPauseAnimation_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPauseAnimation that was directly constructed.
func (this *QPauseAnimation) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPauseAnimation_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPauseAnimation) callVirtualBase_Duration() int {

	return (int)(C.QPauseAnimation_virtualbase_duration(unsafe.Pointer(this.h)))

}
func (this *QPauseAnimation) OnDuration(slot func(super func() int) int) {
	ok := C.QPauseAnimation_override_virtual_duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_duration
func miqt_exec_callback_QPauseAnimation_duration(self *C.QPauseAnimation, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPauseAnimation{h: self}).callVirtualBase_Duration)

	return (C.int)(virtualReturn)

}

func (this *QPauseAnimation) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QPauseAnimation_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QPauseAnimation) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QPauseAnimation_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_event
func miqt_exec_callback_QPauseAnimation_event(self *C.QPauseAnimation, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QPauseAnimation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPauseAnimation) callVirtualBase_UpdateCurrentTime(param1 int) {

	C.QPauseAnimation_virtualbase_updateCurrentTime(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QPauseAnimation) OnUpdateCurrentTime(slot func(super func(param1 int), param1 int)) {
	ok := C.QPauseAnimation_override_virtual_updateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_updateCurrentTime
func miqt_exec_callback_QPauseAnimation_updateCurrentTime(self *C.QPauseAnimation, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_UpdateCurrentTime, slotval1)

}

func (this *QPauseAnimation) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QPauseAnimation_virtualbase_updateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QPauseAnimation) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	ok := C.QPauseAnimation_override_virtual_updateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_updateState
func miqt_exec_callback_QPauseAnimation_updateState(self *C.QPauseAnimation, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QPauseAnimation) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QPauseAnimation_virtualbase_updateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QPauseAnimation) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	ok := C.QPauseAnimation_override_virtual_updateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_updateDirection
func miqt_exec_callback_QPauseAnimation_updateDirection(self *C.QPauseAnimation, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

func (this *QPauseAnimation) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPauseAnimation_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPauseAnimation) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPauseAnimation_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_eventFilter
func miqt_exec_callback_QPauseAnimation_eventFilter(self *C.QPauseAnimation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPauseAnimation{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPauseAnimation) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPauseAnimation_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPauseAnimation) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPauseAnimation_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_timerEvent
func miqt_exec_callback_QPauseAnimation_timerEvent(self *C.QPauseAnimation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPauseAnimation) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPauseAnimation_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPauseAnimation) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPauseAnimation_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_childEvent
func miqt_exec_callback_QPauseAnimation_childEvent(self *C.QPauseAnimation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPauseAnimation) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPauseAnimation_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPauseAnimation) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPauseAnimation_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_customEvent
func miqt_exec_callback_QPauseAnimation_customEvent(self *C.QPauseAnimation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPauseAnimation) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPauseAnimation_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPauseAnimation) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPauseAnimation_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_connectNotify
func miqt_exec_callback_QPauseAnimation_connectNotify(self *C.QPauseAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPauseAnimation) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPauseAnimation_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPauseAnimation) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPauseAnimation_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_disconnectNotify
func miqt_exec_callback_QPauseAnimation_disconnectNotify(self *C.QPauseAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPauseAnimation) Delete() {
	C.QPauseAnimation_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPauseAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QPauseAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
