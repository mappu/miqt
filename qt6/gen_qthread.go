package qt6

/*

#include "gen_qthread.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QThread__Priority int

const (
	QThread__IdlePriority         QThread__Priority = 0
	QThread__LowestPriority       QThread__Priority = 1
	QThread__LowPriority          QThread__Priority = 2
	QThread__NormalPriority       QThread__Priority = 3
	QThread__HighPriority         QThread__Priority = 4
	QThread__HighestPriority      QThread__Priority = 5
	QThread__TimeCriticalPriority QThread__Priority = 6
	QThread__InheritPriority      QThread__Priority = 7
)

type QThread struct {
	h *C.QThread
	*QObject
}

func (this *QThread) cPointer() *C.QThread {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QThread) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQThread constructs the type using only CGO pointers.
func newQThread(h *C.QThread) *QThread {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QThread_virtbase(h, &outptr_QObject)

	return &QThread{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQThread constructs the type using only unsafe pointers.
func UnsafeNewQThread(h unsafe.Pointer) *QThread {
	return newQThread((*C.QThread)(h))
}

// NewQThread constructs a new QThread object.
func NewQThread() *QThread {

	return newQThread(C.QThread_new())
}

// NewQThread2 constructs a new QThread object.
func NewQThread2(parent *QObject) *QThread {

	return newQThread(C.QThread_new2(parent.cPointer()))
}

func (this *QThread) MetaObject() *QMetaObject {
	return newQMetaObject(C.QThread_MetaObject(this.h))
}

func (this *QThread) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QThread_Metacast(this.h, param1_Cstring))
}

func QThread_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QThread_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_CurrentThreadId() unsafe.Pointer {
	return (unsafe.Pointer)(C.QThread_CurrentThreadId())
}

func QThread_CurrentThread() *QThread {
	return newQThread(C.QThread_CurrentThread())
}

func QThread_IdealThreadCount() int {
	return (int)(C.QThread_IdealThreadCount())
}

func QThread_YieldCurrentThread() {
	C.QThread_YieldCurrentThread()
}

func (this *QThread) SetPriority(priority QThread__Priority) {
	C.QThread_SetPriority(this.h, (C.int)(priority))
}

func (this *QThread) Priority() QThread__Priority {
	return (QThread__Priority)(C.QThread_Priority(this.h))
}

func (this *QThread) IsFinished() bool {
	return (bool)(C.QThread_IsFinished(this.h))
}

func (this *QThread) IsRunning() bool {
	return (bool)(C.QThread_IsRunning(this.h))
}

func (this *QThread) RequestInterruption() {
	C.QThread_RequestInterruption(this.h)
}

func (this *QThread) IsInterruptionRequested() bool {
	return (bool)(C.QThread_IsInterruptionRequested(this.h))
}

func (this *QThread) SetStackSize(stackSize uint) {
	C.QThread_SetStackSize(this.h, (C.uint)(stackSize))
}

func (this *QThread) StackSize() uint {
	return (uint)(C.QThread_StackSize(this.h))
}

func (this *QThread) EventDispatcher() *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QThread_EventDispatcher(this.h))
}

func (this *QThread) SetEventDispatcher(eventDispatcher *QAbstractEventDispatcher) {
	C.QThread_SetEventDispatcher(this.h, eventDispatcher.cPointer())
}

func (this *QThread) Event(event *QEvent) bool {
	return (bool)(C.QThread_Event(this.h, event.cPointer()))
}

func (this *QThread) LoopLevel() int {
	return (int)(C.QThread_LoopLevel(this.h))
}

func (this *QThread) Start() {
	C.QThread_Start(this.h)
}

func (this *QThread) Terminate() {
	C.QThread_Terminate(this.h)
}

func (this *QThread) Exit() {
	C.QThread_Exit(this.h)
}

func (this *QThread) Quit() {
	C.QThread_Quit(this.h)
}

func (this *QThread) Wait() bool {
	return (bool)(C.QThread_Wait(this.h))
}

func (this *QThread) WaitWithTime(time uint64) bool {
	return (bool)(C.QThread_WaitWithTime(this.h, (C.ulong)(time)))
}

func QThread_Sleep(param1 uint64) {
	C.QThread_Sleep((C.ulong)(param1))
}

func QThread_Msleep(param1 uint64) {
	C.QThread_Msleep((C.ulong)(param1))
}

func QThread_Usleep(param1 uint64) {
	C.QThread_Usleep((C.ulong)(param1))
}

func QThread_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThread_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThread_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QThread) Start1(param1 QThread__Priority) {
	C.QThread_Start1(this.h, (C.int)(param1))
}

func (this *QThread) Exit1(retcode int) {
	C.QThread_Exit1(this.h, (C.int)(retcode))
}

func (this *QThread) Wait1(deadline QDeadlineTimer) bool {
	return (bool)(C.QThread_Wait1(this.h, deadline.cPointer()))
}

func (this *QThread) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QThread_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QThread) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QThread_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_Event
func miqt_exec_callback_QThread_Event(self *C.QThread, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QThread{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QThread) callVirtualBase_Run() {

	C.QThread_virtualbase_Run(unsafe.Pointer(this.h))

}
func (this *QThread) OnRun(slot func(super func())) {
	ok := C.QThread_override_virtual_Run(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_Run
func miqt_exec_callback_QThread_Run(self *C.QThread, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QThread{h: self}).callVirtualBase_Run)

}

func (this *QThread) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QThread_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QThread) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QThread_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_EventFilter
func miqt_exec_callback_QThread_EventFilter(self *C.QThread, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QThread{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QThread) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QThread_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThread) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QThread_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_TimerEvent
func miqt_exec_callback_QThread_TimerEvent(self *C.QThread, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QThread{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QThread) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QThread_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThread) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QThread_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_ChildEvent
func miqt_exec_callback_QThread_ChildEvent(self *C.QThread, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QThread{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QThread) callVirtualBase_CustomEvent(event *QEvent) {

	C.QThread_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThread) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QThread_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_CustomEvent
func miqt_exec_callback_QThread_CustomEvent(self *C.QThread, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QThread{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QThread) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QThread_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QThread) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QThread_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_ConnectNotify
func miqt_exec_callback_QThread_ConnectNotify(self *C.QThread, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QThread{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QThread) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QThread_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QThread) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QThread_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_DisconnectNotify
func miqt_exec_callback_QThread_DisconnectNotify(self *C.QThread, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QThread{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QThread) Delete() {
	C.QThread_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QThread) GoGC() {
	runtime.SetFinalizer(this, func(this *QThread) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
