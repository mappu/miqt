package qt

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
	h  *C.QThread
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QThread) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
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
	defer runtime.KeepAlive(parent)

	return newQThread(C.QThread_new2(parent.cPointer()))
}

func (this *QThread) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QThread_metaObject(this.h))
}

func (this *QThread) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QThread_metacast(this.h, param1_Cstring))
}

func QThread_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QThread_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QThread_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_CurrentThreadId() unsafe.Pointer {
	return (unsafe.Pointer)(C.QThread_currentThreadId())
}

func QThread_CurrentThread() *QThread {
	return newQThread(C.QThread_currentThread())
}

func QThread_IdealThreadCount() int {
	return (int)(C.QThread_idealThreadCount())
}

func QThread_YieldCurrentThread() {
	C.QThread_yieldCurrentThread()
}

func (this *QThread) SetPriority(priority QThread__Priority) {
	defer runtime.KeepAlive(this)
	C.QThread_setPriority(this.h, (C.int)(priority))
}

func (this *QThread) Priority() QThread__Priority {
	defer runtime.KeepAlive(this)
	return (QThread__Priority)(C.QThread_priority(this.h))
}

func (this *QThread) IsFinished() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QThread_isFinished(this.h))
}

func (this *QThread) IsRunning() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QThread_isRunning(this.h))
}

func (this *QThread) RequestInterruption() {
	defer runtime.KeepAlive(this)
	C.QThread_requestInterruption(this.h)
}

func (this *QThread) IsInterruptionRequested() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QThread_isInterruptionRequested(this.h))
}

func (this *QThread) SetStackSize(stackSize uint) {
	defer runtime.KeepAlive(this)
	C.QThread_setStackSize(this.h, (C.uint)(stackSize))
}

func (this *QThread) StackSize() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QThread_stackSize(this.h))
}

func (this *QThread) Exit() {
	defer runtime.KeepAlive(this)
	C.QThread_exit(this.h)
}

func (this *QThread) EventDispatcher() *QAbstractEventDispatcher {
	defer runtime.KeepAlive(this)
	return newQAbstractEventDispatcher(C.QThread_eventDispatcher(this.h))
}

func (this *QThread) SetEventDispatcher(eventDispatcher *QAbstractEventDispatcher) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(eventDispatcher)
	C.QThread_setEventDispatcher(this.h, eventDispatcher.cPointer())
}

func (this *QThread) Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)
	return (bool)(C.QThread_event(this.h, event.cPointer()))
}

func (this *QThread) LoopLevel() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QThread_loopLevel(this.h))
}

func (this *QThread) Start() {
	defer runtime.KeepAlive(this)
	C.QThread_start(this.h)
}

func (this *QThread) Terminate() {
	defer runtime.KeepAlive(this)
	C.QThread_terminate(this.h)
}

func (this *QThread) Quit() {
	defer runtime.KeepAlive(this)
	C.QThread_quit(this.h)
}

func (this *QThread) Wait() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QThread_wait(this.h))
}

func (this *QThread) WaitWithTime(time uint64) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QThread_waitWithTime(this.h, (C.ulong)(time)))
}

func QThread_Sleep(param1 uint64) {
	C.QThread_sleep((C.ulong)(param1))
}

func QThread_Msleep(param1 uint64) {
	C.QThread_msleep((C.ulong)(param1))
}

func QThread_Usleep(param1 uint64) {
	C.QThread_usleep((C.ulong)(param1))
}

func QThread_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThread_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThread_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThread_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThread_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QThread) ExitWithRetcode(retcode int) {
	defer runtime.KeepAlive(this)
	C.QThread_exitWithRetcode(this.h, (C.int)(retcode))
}

func (this *QThread) StartWithQThreadPriority(param1 QThread__Priority) {
	defer runtime.KeepAlive(this)
	C.QThread_startWithQThreadPriority(this.h, (C.int)(param1))
}

func (this *QThread) WaitWithDeadline(deadline QDeadlineTimer) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(deadline)
	return (bool)(C.QThread_waitWithDeadline(this.h, deadline.cPointer()))
}

// Exec can only be called from a QThread that was directly constructed.
func (this *QThread) Exec() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QThread_protectedbase_exec(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QThread that was directly constructed.
func (this *QThread) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QThread_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QThread that was directly constructed.
func (this *QThread) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QThread_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QThread that was directly constructed.
func (this *QThread) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QThread_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QThread that was directly constructed.
func (this *QThread) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QThread_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QThread) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QThread_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QThread) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QThread_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_event
func miqt_exec_callback_QThread_event(self *C.QThread, cb C.intptr_t, event *C.QEvent) C.bool {
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
	defer runtime.KeepAlive(this)

	C.QThread_virtualbase_run(unsafe.Pointer(this.h))

}
func (this *QThread) OnRun(slot func(super func())) {
	ok := C.QThread_override_virtual_run(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_run
func miqt_exec_callback_QThread_run(self *C.QThread, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QThread{h: self}).callVirtualBase_Run)

}

func (this *QThread) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QThread_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QThread) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QThread_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_eventFilter
func miqt_exec_callback_QThread_eventFilter(self *C.QThread, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QThread_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThread) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QThread_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_timerEvent
func miqt_exec_callback_QThread_timerEvent(self *C.QThread, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QThread{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QThread) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QThread_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThread) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QThread_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_childEvent
func miqt_exec_callback_QThread_childEvent(self *C.QThread, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QThread{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QThread) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QThread_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QThread) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QThread_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_customEvent
func miqt_exec_callback_QThread_customEvent(self *C.QThread, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QThread{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QThread) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QThread_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QThread) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QThread_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_connectNotify
func miqt_exec_callback_QThread_connectNotify(self *C.QThread, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QThread{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QThread) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QThread_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QThread) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QThread_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QThread_disconnectNotify
func miqt_exec_callback_QThread_disconnectNotify(self *C.QThread, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QThread{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QThread) OnStarted(slot func()) {
	C.QThread_connect_started(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThread_started
func miqt_exec_callback_QThread_started(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QThread) OnFinished(slot func()) {
	C.QThread_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QThread_finished
func miqt_exec_callback_QThread_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QThread) Delete() {
	C.QThread_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QThread) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QThread_delete((*C.QThread)(gc[0]))
	})
	this.miqtSetGC(gc)
}
