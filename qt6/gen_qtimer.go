package qt6

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
	h *C.QTimer
	*QObject
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

	return newQTimer(C.QTimer_new2(parent.cPointer()))
}

func (this *QTimer) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTimer_metaObject(this.h))
}

func (this *QTimer) Metacast(param1 string) unsafe.Pointer {
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

func (this *QTimer) IsActive() bool {
	return (bool)(C.QTimer_isActive(this.h))
}

func (this *QTimer) TimerId() int {
	return (int)(C.QTimer_timerId(this.h))
}

func (this *QTimer) SetInterval(msec int) {
	C.QTimer_setInterval(this.h, (C.int)(msec))
}

func (this *QTimer) Interval() int {
	return (int)(C.QTimer_interval(this.h))
}

func (this *QTimer) RemainingTime() int {
	return (int)(C.QTimer_remainingTime(this.h))
}

func (this *QTimer) SetTimerType(atype TimerType) {
	C.QTimer_setTimerType(this.h, (C.int)(atype))
}

func (this *QTimer) TimerType() TimerType {
	return (TimerType)(C.QTimer_timerType(this.h))
}

func (this *QTimer) SetSingleShot(singleShot bool) {
	C.QTimer_setSingleShot(this.h, (C.bool)(singleShot))
}

func (this *QTimer) IsSingleShot() bool {
	return (bool)(C.QTimer_isSingleShot(this.h))
}

func (this *QTimer) Start(msec int) {
	C.QTimer_start(this.h, (C.int)(msec))
}

func (this *QTimer) Start2() {
	C.QTimer_start2(this.h)
}

func (this *QTimer) Stop() {
	C.QTimer_stop(this.h)
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

func (this *QTimer) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QTimer_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTimer) OntimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
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

	return (bool)(C.QTimer_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTimer) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
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

	return (bool)(C.QTimer_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTimer) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
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

	C.QTimer_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimer) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
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

	C.QTimer_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimer) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
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

	C.QTimer_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimer) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
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

	C.QTimer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimer) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
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

// Delete this object from C++ memory.
func (this *QTimer) Delete() {
	C.QTimer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimer) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
