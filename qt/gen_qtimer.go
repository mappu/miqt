package qt

/*

#include "gen_qtimer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTimer struct {
	h  *C.QTimer
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTimer) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
}

func (this *QTimer) cPointer() *C.QTimer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTimer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTimer constructs the type using only CGO pointers.
func newQTimer(h *C.QTimer) *QTimer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QTimer_virtbase(h, &outptr_QObject)

	return &QTimer{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQTimer constructs the type using only unsafe pointers.
func UnsafeNewQTimer(h unsafe.Pointer) *QTimer {
	return newQTimer((*C.QTimer)(h))
}

// NewQTimer constructs a new QTimer object.
func NewQTimer() *QTimer {

	return newQTimer(C.QTimer_new())
}

// NewQTimer2 constructs a new QTimer object.
func NewQTimer2(parent *QObject) *QTimer {
	defer runtime.KeepAlive(parent)

	return newQTimer(C.QTimer_new2(parent.cPointer()))
}

func (this *QTimer) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QTimer_metaObject(this.h))
}

func (this *QTimer) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTimer_metacast(this.h, param1_Cstring))
}

func QTimer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimer) IsActive() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTimer_isActive(this.h))
}

func (this *QTimer) TimerId() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTimer_timerId(this.h))
}

func (this *QTimer) SetInterval(msec int) {
	defer runtime.KeepAlive(this)
	C.QTimer_setInterval(this.h, (C.int)(msec))
}

func (this *QTimer) Interval() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTimer_interval(this.h))
}

func (this *QTimer) RemainingTime() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTimer_remainingTime(this.h))
}

func (this *QTimer) SetTimerType(atype TimerType) {
	defer runtime.KeepAlive(this)
	C.QTimer_setTimerType(this.h, (C.int)(atype))
}

func (this *QTimer) TimerType() TimerType {
	defer runtime.KeepAlive(this)
	return (TimerType)(C.QTimer_timerType(this.h))
}

func (this *QTimer) SetSingleShot(singleShot bool) {
	defer runtime.KeepAlive(this)
	C.QTimer_setSingleShot(this.h, (C.bool)(singleShot))
}

func (this *QTimer) IsSingleShot() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTimer_isSingleShot(this.h))
}

func (this *QTimer) Start(msec int) {
	defer runtime.KeepAlive(this)
	C.QTimer_start(this.h, (C.int)(msec))
}

func (this *QTimer) Start2() {
	defer runtime.KeepAlive(this)
	C.QTimer_start2(this.h)
}

func (this *QTimer) Stop() {
	defer runtime.KeepAlive(this)
	C.QTimer_stop(this.h)
}

func (this *QTimer) SetIntervalWithValue(value Milliseconds) {
	defer runtime.KeepAlive(this)
	C.QTimer_setIntervalWithValue(this.h, (C.int64_t)(value))
}

func (this *QTimer) IntervalAsDuration() Milliseconds {
	defer runtime.KeepAlive(this)
	return (Milliseconds)(C.QTimer_intervalAsDuration(this.h))
}

func (this *QTimer) RemainingTimeAsDuration() Milliseconds {
	defer runtime.KeepAlive(this)
	return (Milliseconds)(C.QTimer_remainingTimeAsDuration(this.h))
}

func (this *QTimer) StartWithValue(value Milliseconds) {
	defer runtime.KeepAlive(this)
	C.QTimer_startWithValue(this.h, (C.int64_t)(value))
}

func QTimer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QTimer that was directly constructed.
func (this *QTimer) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTimer_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTimer that was directly constructed.
func (this *QTimer) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTimer_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTimer that was directly constructed.
func (this *QTimer) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTimer_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTimer that was directly constructed.
func (this *QTimer) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTimer_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTimer) callVirtualBase_TimerEvent(param1 *QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	C.QTimer_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTimer) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QTimer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimer_timerEvent
func miqt_exec_callback_QTimer_timerEvent(self *C.QTimer, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QTimer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTimer) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QTimer_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTimer) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTimer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimer_event
func miqt_exec_callback_QTimer_event(self *C.QTimer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTimer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTimer) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QTimer_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTimer) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTimer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimer_eventFilter
func miqt_exec_callback_QTimer_eventFilter(self *C.QTimer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTimer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTimer) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QTimer_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimer) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTimer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimer_childEvent
func miqt_exec_callback_QTimer_childEvent(self *C.QTimer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTimer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTimer) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QTimer_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimer) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTimer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimer_customEvent
func miqt_exec_callback_QTimer_customEvent(self *C.QTimer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTimer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTimer) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QTimer_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimer) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTimer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimer_connectNotify
func miqt_exec_callback_QTimer_connectNotify(self *C.QTimer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTimer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTimer) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QTimer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimer) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTimer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTimer_disconnectNotify
func miqt_exec_callback_QTimer_disconnectNotify(self *C.QTimer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTimer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QTimer) OnTimeout(slot func()) {
	C.QTimer_connect_timeout(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimer_timeout
func miqt_exec_callback_QTimer_timeout(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QTimer) Delete() {
	C.QTimer_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTimer) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTimer_delete((*C.QTimer)(gc[0]))
	})
	this.miqtSetGC(gc)
}
