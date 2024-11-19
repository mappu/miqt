package qt6

/*

#include "gen_qeventloop.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QEventLoop__ProcessEventsFlag int

const (
	QEventLoop__AllEvents              QEventLoop__ProcessEventsFlag = 0
	QEventLoop__ExcludeUserInputEvents QEventLoop__ProcessEventsFlag = 1
	QEventLoop__ExcludeSocketNotifiers QEventLoop__ProcessEventsFlag = 2
	QEventLoop__WaitForMoreEvents      QEventLoop__ProcessEventsFlag = 4
	QEventLoop__X11ExcludeTimers       QEventLoop__ProcessEventsFlag = 8
	QEventLoop__EventLoopExec          QEventLoop__ProcessEventsFlag = 32
	QEventLoop__DialogExec             QEventLoop__ProcessEventsFlag = 64
	QEventLoop__ApplicationExec        QEventLoop__ProcessEventsFlag = 128
)

type QEventLoop struct {
	h          *C.QEventLoop
	isSubclass bool
	*QObject
}

func (this *QEventLoop) cPointer() *C.QEventLoop {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEventLoop) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQEventLoop constructs the type using only CGO pointers.
func newQEventLoop(h *C.QEventLoop, h_QObject *C.QObject) *QEventLoop {
	if h == nil {
		return nil
	}
	return &QEventLoop{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQEventLoop constructs the type using only unsafe pointers.
func UnsafeNewQEventLoop(h unsafe.Pointer, h_QObject unsafe.Pointer) *QEventLoop {
	if h == nil {
		return nil
	}

	return &QEventLoop{h: (*C.QEventLoop)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQEventLoop constructs a new QEventLoop object.
func NewQEventLoop() *QEventLoop {
	var outptr_QEventLoop *C.QEventLoop = nil
	var outptr_QObject *C.QObject = nil

	C.QEventLoop_new(&outptr_QEventLoop, &outptr_QObject)
	ret := newQEventLoop(outptr_QEventLoop, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQEventLoop2 constructs a new QEventLoop object.
func NewQEventLoop2(parent *QObject) *QEventLoop {
	var outptr_QEventLoop *C.QEventLoop = nil
	var outptr_QObject *C.QObject = nil

	C.QEventLoop_new2(parent.cPointer(), &outptr_QEventLoop, &outptr_QObject)
	ret := newQEventLoop(outptr_QEventLoop, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QEventLoop) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QEventLoop_MetaObject(this.h)))
}

func (this *QEventLoop) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QEventLoop_Metacast(this.h, param1_Cstring))
}

func QEventLoop_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventLoop) ProcessEvents() bool {
	return (bool)(C.QEventLoop_ProcessEvents(this.h))
}

func (this *QEventLoop) ProcessEvents2(flags QEventLoop__ProcessEventsFlag, maximumTime int) {
	C.QEventLoop_ProcessEvents2(this.h, (C.int)(flags), (C.int)(maximumTime))
}

func (this *QEventLoop) Exec() int {
	return (int)(C.QEventLoop_Exec(this.h))
}

func (this *QEventLoop) IsRunning() bool {
	return (bool)(C.QEventLoop_IsRunning(this.h))
}

func (this *QEventLoop) WakeUp() {
	C.QEventLoop_WakeUp(this.h)
}

func (this *QEventLoop) Event(event *QEvent) bool {
	return (bool)(C.QEventLoop_Event(this.h, event.cPointer()))
}

func (this *QEventLoop) Exit() {
	C.QEventLoop_Exit(this.h)
}

func (this *QEventLoop) Quit() {
	C.QEventLoop_Quit(this.h)
}

func QEventLoop_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventLoop) ProcessEvents1(flags QEventLoop__ProcessEventsFlag) bool {
	return (bool)(C.QEventLoop_ProcessEvents1(this.h, (C.int)(flags)))
}

func (this *QEventLoop) Exec1(flags QEventLoop__ProcessEventsFlag) int {
	return (int)(C.QEventLoop_Exec1(this.h, (C.int)(flags)))
}

func (this *QEventLoop) Exit1(returnCode int) {
	C.QEventLoop_Exit1(this.h, (C.int)(returnCode))
}

func (this *QEventLoop) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QEventLoop_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QEventLoop) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QEventLoop_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QEventLoop_Event
func miqt_exec_callback_QEventLoop_Event(self *C.QEventLoop, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QEventLoop{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QEventLoop) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QEventLoop_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QEventLoop) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QEventLoop_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QEventLoop_EventFilter
func miqt_exec_callback_QEventLoop_EventFilter(self *C.QEventLoop, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QEventLoop{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QEventLoop) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QEventLoop_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventLoop) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QEventLoop_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QEventLoop_TimerEvent
func miqt_exec_callback_QEventLoop_TimerEvent(self *C.QEventLoop, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QEventLoop{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QEventLoop) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QEventLoop_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventLoop) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QEventLoop_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QEventLoop_ChildEvent
func miqt_exec_callback_QEventLoop_ChildEvent(self *C.QEventLoop, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QEventLoop{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QEventLoop) callVirtualBase_CustomEvent(event *QEvent) {

	C.QEventLoop_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventLoop) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QEventLoop_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QEventLoop_CustomEvent
func miqt_exec_callback_QEventLoop_CustomEvent(self *C.QEventLoop, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QEventLoop{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QEventLoop) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QEventLoop_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QEventLoop) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QEventLoop_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QEventLoop_ConnectNotify
func miqt_exec_callback_QEventLoop_ConnectNotify(self *C.QEventLoop, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QEventLoop{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QEventLoop) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QEventLoop_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QEventLoop) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QEventLoop_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QEventLoop_DisconnectNotify
func miqt_exec_callback_QEventLoop_DisconnectNotify(self *C.QEventLoop, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QEventLoop{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QEventLoop) Delete() {
	C.QEventLoop_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventLoop) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventLoop) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QEventLoopLocker struct {
	h          *C.QEventLoopLocker
	isSubclass bool
}

func (this *QEventLoopLocker) cPointer() *C.QEventLoopLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEventLoopLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQEventLoopLocker constructs the type using only CGO pointers.
func newQEventLoopLocker(h *C.QEventLoopLocker) *QEventLoopLocker {
	if h == nil {
		return nil
	}
	return &QEventLoopLocker{h: h}
}

// UnsafeNewQEventLoopLocker constructs the type using only unsafe pointers.
func UnsafeNewQEventLoopLocker(h unsafe.Pointer) *QEventLoopLocker {
	if h == nil {
		return nil
	}

	return &QEventLoopLocker{h: (*C.QEventLoopLocker)(h)}
}

// NewQEventLoopLocker constructs a new QEventLoopLocker object.
func NewQEventLoopLocker() *QEventLoopLocker {
	var outptr_QEventLoopLocker *C.QEventLoopLocker = nil

	C.QEventLoopLocker_new(&outptr_QEventLoopLocker)
	ret := newQEventLoopLocker(outptr_QEventLoopLocker)
	ret.isSubclass = true
	return ret
}

// NewQEventLoopLocker2 constructs a new QEventLoopLocker object.
func NewQEventLoopLocker2(loop *QEventLoop) *QEventLoopLocker {
	var outptr_QEventLoopLocker *C.QEventLoopLocker = nil

	C.QEventLoopLocker_new2(loop.cPointer(), &outptr_QEventLoopLocker)
	ret := newQEventLoopLocker(outptr_QEventLoopLocker)
	ret.isSubclass = true
	return ret
}

// NewQEventLoopLocker3 constructs a new QEventLoopLocker object.
func NewQEventLoopLocker3(thread *QThread) *QEventLoopLocker {
	var outptr_QEventLoopLocker *C.QEventLoopLocker = nil

	C.QEventLoopLocker_new3(thread.cPointer(), &outptr_QEventLoopLocker)
	ret := newQEventLoopLocker(outptr_QEventLoopLocker)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QEventLoopLocker) Delete() {
	C.QEventLoopLocker_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventLoopLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventLoopLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
