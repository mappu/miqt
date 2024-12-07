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
	h          *C.QTimer
	isSubclass bool
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
func newQTimer(h *C.QTimer, h_QObject *C.QObject) *QTimer {
	if h == nil {
		return nil
	}
	return &QTimer{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQTimer constructs the type using only unsafe pointers.
func UnsafeNewQTimer(h unsafe.Pointer, h_QObject unsafe.Pointer) *QTimer {
	if h == nil {
		return nil
	}

	return &QTimer{h: (*C.QTimer)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQTimer constructs a new QTimer object.
func NewQTimer() *QTimer {
	var outptr_QTimer *C.QTimer = nil
	var outptr_QObject *C.QObject = nil

	C.QTimer_new(&outptr_QTimer, &outptr_QObject)
	ret := newQTimer(outptr_QTimer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQTimer2 constructs a new QTimer object.
func NewQTimer2(parent *QObject) *QTimer {
	var outptr_QTimer *C.QTimer = nil
	var outptr_QObject *C.QObject = nil

	C.QTimer_new2(parent.cPointer(), &outptr_QTimer, &outptr_QObject)
	ret := newQTimer(outptr_QTimer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QTimer) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTimer_MetaObject(this.h)))
}

func (this *QTimer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTimer_Metacast(this.h, param1_Cstring))
}

func QTimer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimer) IsActive() bool {
	return (bool)(C.QTimer_IsActive(this.h))
}

func (this *QTimer) TimerId() int {
	return (int)(C.QTimer_TimerId(this.h))
}

func (this *QTimer) SetInterval(msec int) {
	C.QTimer_SetInterval(this.h, (C.int)(msec))
}

func (this *QTimer) Interval() int {
	return (int)(C.QTimer_Interval(this.h))
}

func (this *QTimer) RemainingTime() int {
	return (int)(C.QTimer_RemainingTime(this.h))
}

func (this *QTimer) SetTimerType(atype TimerType) {
	C.QTimer_SetTimerType(this.h, (C.int)(atype))
}

func (this *QTimer) TimerType() TimerType {
	return (TimerType)(C.QTimer_TimerType(this.h))
}

func (this *QTimer) SetSingleShot(singleShot bool) {
	C.QTimer_SetSingleShot(this.h, (C.bool)(singleShot))
}

func (this *QTimer) IsSingleShot() bool {
	return (bool)(C.QTimer_IsSingleShot(this.h))
}

func (this *QTimer) Start(msec int) {
	C.QTimer_Start(this.h, (C.int)(msec))
}

func (this *QTimer) Start2() {
	C.QTimer_Start2(this.h)
}

func (this *QTimer) Stop() {
	C.QTimer_Stop(this.h)
}

func QTimer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTimer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTimer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTimer) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QTimer_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTimer) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTimer_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimer_TimerEvent
func miqt_exec_callback_QTimer_TimerEvent(self *C.QTimer, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(param1), nil)

	gofunc((&QTimer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTimer) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTimer_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTimer) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTimer_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimer_Event
func miqt_exec_callback_QTimer_Event(self *C.QTimer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTimer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTimer) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTimer_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTimer) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTimer_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimer_EventFilter
func miqt_exec_callback_QTimer_EventFilter(self *C.QTimer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTimer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTimer) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTimer_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimer) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTimer_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimer_ChildEvent
func miqt_exec_callback_QTimer_ChildEvent(self *C.QTimer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QTimer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTimer) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTimer_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTimer) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTimer_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimer_CustomEvent
func miqt_exec_callback_QTimer_CustomEvent(self *C.QTimer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTimer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTimer) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTimer_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimer) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTimer_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimer_ConnectNotify
func miqt_exec_callback_QTimer_ConnectNotify(self *C.QTimer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTimer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTimer) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTimer_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTimer) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTimer_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTimer_DisconnectNotify
func miqt_exec_callback_QTimer_DisconnectNotify(self *C.QTimer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTimer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTimer) Delete() {
	C.QTimer_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimer) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
