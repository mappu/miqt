package qt

/*

#include "gen_qthreadpool.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QThreadPool struct {
	h          *C.QThreadPool
	isSubclass bool
	*QObject
}

func (this *QThreadPool) cPointer() *C.QThreadPool {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QThreadPool) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQThreadPool constructs the type using only CGO pointers.
func newQThreadPool(h *C.QThreadPool) *QThreadPool {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QThreadPool_virtbase(h, &outptr_QObject)

	return &QThreadPool{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQThreadPool constructs the type using only unsafe pointers.
func UnsafeNewQThreadPool(h unsafe.Pointer) *QThreadPool {
	return newQThreadPool((*C.QThreadPool)(h))
}

// NewQThreadPool constructs a new QThreadPool object.
func NewQThreadPool() *QThreadPool {

	ret := newQThreadPool(C.QThreadPool_new())
	ret.isSubclass = true
	return ret
}

// NewQThreadPool2 constructs a new QThreadPool object.
func NewQThreadPool2(parent *QObject) *QThreadPool {

	ret := newQThreadPool(C.QThreadPool_new2(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QThreadPool) MetaObject() *QMetaObject {
	return newQMetaObject(C.QThreadPool_MetaObject(this.h))
}

func (this *QThreadPool) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QThreadPool_Metacast(this.h, param1_Cstring))
}

func QThreadPool_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_GlobalInstance() *QThreadPool {
	return newQThreadPool(C.QThreadPool_GlobalInstance())
}

func (this *QThreadPool) Start(runnable *QRunnable) {
	C.QThreadPool_Start(this.h, runnable.cPointer())
}

func (this *QThreadPool) TryStart(runnable *QRunnable) bool {
	return (bool)(C.QThreadPool_TryStart(this.h, runnable.cPointer()))
}

func (this *QThreadPool) ExpiryTimeout() int {
	return (int)(C.QThreadPool_ExpiryTimeout(this.h))
}

func (this *QThreadPool) SetExpiryTimeout(expiryTimeout int) {
	C.QThreadPool_SetExpiryTimeout(this.h, (C.int)(expiryTimeout))
}

func (this *QThreadPool) MaxThreadCount() int {
	return (int)(C.QThreadPool_MaxThreadCount(this.h))
}

func (this *QThreadPool) SetMaxThreadCount(maxThreadCount int) {
	C.QThreadPool_SetMaxThreadCount(this.h, (C.int)(maxThreadCount))
}

func (this *QThreadPool) ActiveThreadCount() int {
	return (int)(C.QThreadPool_ActiveThreadCount(this.h))
}

func (this *QThreadPool) SetStackSize(stackSize uint) {
	C.QThreadPool_SetStackSize(this.h, (C.uint)(stackSize))
}

func (this *QThreadPool) StackSize() uint {
	return (uint)(C.QThreadPool_StackSize(this.h))
}

func (this *QThreadPool) ReserveThread() {
	C.QThreadPool_ReserveThread(this.h)
}

func (this *QThreadPool) ReleaseThread() {
	C.QThreadPool_ReleaseThread(this.h)
}

func (this *QThreadPool) WaitForDone() bool {
	return (bool)(C.QThreadPool_WaitForDone(this.h))
}

func (this *QThreadPool) Clear() {
	C.QThreadPool_Clear(this.h)
}

func (this *QThreadPool) Contains(thread *QThread) bool {
	return (bool)(C.QThreadPool_Contains(this.h, thread.cPointer()))
}

func (this *QThreadPool) Cancel(runnable *QRunnable) {
	C.QThreadPool_Cancel(this.h, runnable.cPointer())
}

func (this *QThreadPool) TryTake(runnable *QRunnable) bool {
	return (bool)(C.QThreadPool_TryTake(this.h, runnable.cPointer()))
}

func QThreadPool_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThreadPool_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThreadPool_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QThreadPool) Start2(runnable *QRunnable, priority int) {
	C.QThreadPool_Start2(this.h, runnable.cPointer(), (C.int)(priority))
}

func (this *QThreadPool) WaitForDone1(msecs int) bool {
	return (bool)(C.QThreadPool_WaitForDone1(this.h, (C.int)(msecs)))
}

func (this *QThreadPool) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QThreadPool_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QThreadPool) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QThreadPool_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThreadPool_Event
func miqt_exec_callback_QThreadPool_Event(self *C.QThreadPool, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QThreadPool{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QThreadPool) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QThreadPool_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QThreadPool) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QThreadPool_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThreadPool_EventFilter
func miqt_exec_callback_QThreadPool_EventFilter(self *C.QThreadPool, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QThreadPool{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QThreadPool) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QThreadPool_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThreadPool) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QThreadPool_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThreadPool_TimerEvent
func miqt_exec_callback_QThreadPool_TimerEvent(self *C.QThreadPool, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QThreadPool{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QThreadPool) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QThreadPool_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThreadPool) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QThreadPool_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThreadPool_ChildEvent
func miqt_exec_callback_QThreadPool_ChildEvent(self *C.QThreadPool, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QThreadPool{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QThreadPool) callVirtualBase_CustomEvent(event *QEvent) {

	C.QThreadPool_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThreadPool) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QThreadPool_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThreadPool_CustomEvent
func miqt_exec_callback_QThreadPool_CustomEvent(self *C.QThreadPool, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QThreadPool{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QThreadPool) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QThreadPool_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QThreadPool) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QThreadPool_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThreadPool_ConnectNotify
func miqt_exec_callback_QThreadPool_ConnectNotify(self *C.QThreadPool, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QThreadPool{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QThreadPool) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QThreadPool_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QThreadPool) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QThreadPool_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThreadPool_DisconnectNotify
func miqt_exec_callback_QThreadPool_DisconnectNotify(self *C.QThreadPool, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QThreadPool{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QThreadPool) Delete() {
	C.QThreadPool_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QThreadPool) GoGC() {
	runtime.SetFinalizer(this, func(this *QThreadPool) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
