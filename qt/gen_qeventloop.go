package qt

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
)

type QEventLoop struct {
	h *C.QEventLoop
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
func newQEventLoop(h *C.QEventLoop) *QEventLoop {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QEventLoop_virtbase(h, &outptr_QObject)

	return &QEventLoop{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQEventLoop constructs the type using only unsafe pointers.
func UnsafeNewQEventLoop(h unsafe.Pointer) *QEventLoop {
	return newQEventLoop((*C.QEventLoop)(h))
}

// NewQEventLoop constructs a new QEventLoop object.
func NewQEventLoop() *QEventLoop {

	return newQEventLoop(C.QEventLoop_new())
}

// NewQEventLoop2 constructs a new QEventLoop object.
func NewQEventLoop2(parent *QObject) *QEventLoop {

	return newQEventLoop(C.QEventLoop_new2(parent.cPointer()))
}

func (this *QEventLoop) MetaObject() *QMetaObject {
	return newQMetaObject(C.QEventLoop_metaObject(this.h))
}

func (this *QEventLoop) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QEventLoop_metacast(this.h, param1_Cstring))
}

func QEventLoop_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventLoop) ProcessEvents() bool {
	return (bool)(C.QEventLoop_processEvents(this.h))
}

func (this *QEventLoop) ProcessEvents2(flags QEventLoop__ProcessEventsFlag, maximumTime int) {
	C.QEventLoop_processEvents2(this.h, (C.int)(flags), (C.int)(maximumTime))
}

func (this *QEventLoop) Exec() int {
	return (int)(C.QEventLoop_exec(this.h))
}

func (this *QEventLoop) Exit() {
	C.QEventLoop_exit(this.h)
}

func (this *QEventLoop) IsRunning() bool {
	return (bool)(C.QEventLoop_isRunning(this.h))
}

func (this *QEventLoop) WakeUp() {
	C.QEventLoop_wakeUp(this.h)
}

func (this *QEventLoop) Event(event *QEvent) bool {
	return (bool)(C.QEventLoop_event(this.h, event.cPointer()))
}

func (this *QEventLoop) Quit() {
	C.QEventLoop_quit(this.h)
}

func QEventLoop_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEventLoop_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QEventLoop_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QEventLoop) ProcessEvents1(flags QEventLoop__ProcessEventsFlag) bool {
	return (bool)(C.QEventLoop_processEvents1(this.h, (C.int)(flags)))
}

func (this *QEventLoop) Exec1(flags QEventLoop__ProcessEventsFlag) int {
	return (int)(C.QEventLoop_exec1(this.h, (C.int)(flags)))
}

func (this *QEventLoop) Exit1(returnCode int) {
	C.QEventLoop_exit1(this.h, (C.int)(returnCode))
}

func (this *QEventLoop) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QEventLoop_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QEventLoop) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QEventLoop_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventLoop_event
func miqt_exec_callback_QEventLoop_event(self *C.QEventLoop, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QEventLoop{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QEventLoop) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QEventLoop_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QEventLoop) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QEventLoop_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventLoop_eventFilter
func miqt_exec_callback_QEventLoop_eventFilter(self *C.QEventLoop, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QEventLoop{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QEventLoop) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QEventLoop_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventLoop) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QEventLoop_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventLoop_timerEvent
func miqt_exec_callback_QEventLoop_timerEvent(self *C.QEventLoop, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QEventLoop{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QEventLoop) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QEventLoop_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventLoop) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QEventLoop_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventLoop_childEvent
func miqt_exec_callback_QEventLoop_childEvent(self *C.QEventLoop, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QEventLoop{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QEventLoop) callVirtualBase_CustomEvent(event *QEvent) {

	C.QEventLoop_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QEventLoop) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QEventLoop_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventLoop_customEvent
func miqt_exec_callback_QEventLoop_customEvent(self *C.QEventLoop, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QEventLoop{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QEventLoop) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QEventLoop_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QEventLoop) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QEventLoop_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventLoop_connectNotify
func miqt_exec_callback_QEventLoop_connectNotify(self *C.QEventLoop, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QEventLoop{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QEventLoop) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QEventLoop_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QEventLoop) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QEventLoop_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QEventLoop_disconnectNotify
func miqt_exec_callback_QEventLoop_disconnectNotify(self *C.QEventLoop, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QEventLoop{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QEventLoop) Delete() {
	C.QEventLoop_delete(this.h)
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
	h *C.QEventLoopLocker
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
	return newQEventLoopLocker((*C.QEventLoopLocker)(h))
}

// NewQEventLoopLocker constructs a new QEventLoopLocker object.
func NewQEventLoopLocker() *QEventLoopLocker {

	return newQEventLoopLocker(C.QEventLoopLocker_new())
}

// NewQEventLoopLocker2 constructs a new QEventLoopLocker object.
func NewQEventLoopLocker2(loop *QEventLoop) *QEventLoopLocker {

	return newQEventLoopLocker(C.QEventLoopLocker_new2(loop.cPointer()))
}

// NewQEventLoopLocker3 constructs a new QEventLoopLocker object.
func NewQEventLoopLocker3(thread *QThread) *QEventLoopLocker {

	return newQEventLoopLocker(C.QEventLoopLocker_new3(thread.cPointer()))
}

// Delete this object from C++ memory.
func (this *QEventLoopLocker) Delete() {
	C.QEventLoopLocker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEventLoopLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QEventLoopLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
