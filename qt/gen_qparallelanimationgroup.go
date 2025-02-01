package qt

/*

#include "gen_qparallelanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QParallelAnimationGroup struct {
	h *C.QParallelAnimationGroup
	*QAnimationGroup
}

func (this *QParallelAnimationGroup) cPointer() *C.QParallelAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QParallelAnimationGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQParallelAnimationGroup constructs the type using only CGO pointers.
func newQParallelAnimationGroup(h *C.QParallelAnimationGroup) *QParallelAnimationGroup {
	if h == nil {
		return nil
	}
	var outptr_QAnimationGroup *C.QAnimationGroup = nil
	C.QParallelAnimationGroup_virtbase(h, &outptr_QAnimationGroup)

	return &QParallelAnimationGroup{h: h,
		QAnimationGroup: newQAnimationGroup(outptr_QAnimationGroup)}
}

// UnsafeNewQParallelAnimationGroup constructs the type using only unsafe pointers.
func UnsafeNewQParallelAnimationGroup(h unsafe.Pointer) *QParallelAnimationGroup {
	return newQParallelAnimationGroup((*C.QParallelAnimationGroup)(h))
}

// NewQParallelAnimationGroup constructs a new QParallelAnimationGroup object.
func NewQParallelAnimationGroup() *QParallelAnimationGroup {

	return newQParallelAnimationGroup(C.QParallelAnimationGroup_new())
}

// NewQParallelAnimationGroup2 constructs a new QParallelAnimationGroup object.
func NewQParallelAnimationGroup2(parent *QObject) *QParallelAnimationGroup {

	return newQParallelAnimationGroup(C.QParallelAnimationGroup_new2(parent.cPointer()))
}

func (this *QParallelAnimationGroup) MetaObject() *QMetaObject {
	return newQMetaObject(C.QParallelAnimationGroup_metaObject(this.h))
}

func (this *QParallelAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QParallelAnimationGroup_metacast(this.h, param1_Cstring))
}

func QParallelAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QParallelAnimationGroup) Duration() int {
	return (int)(C.QParallelAnimationGroup_duration(this.h))
}

func QParallelAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QParallelAnimationGroup) callVirtualBase_Duration() int {

	return (int)(C.QParallelAnimationGroup_virtualbase_duration(unsafe.Pointer(this.h)))

}
func (this *QParallelAnimationGroup) Onduration(slot func(super func() int) int) {
	ok := C.QParallelAnimationGroup_override_virtual_duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_duration
func miqt_exec_callback_QParallelAnimationGroup_duration(self *C.QParallelAnimationGroup, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_Duration)

	return (C.int)(virtualReturn)

}

func (this *QParallelAnimationGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QParallelAnimationGroup_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QParallelAnimationGroup) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QParallelAnimationGroup_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_event
func miqt_exec_callback_QParallelAnimationGroup_event(self *C.QParallelAnimationGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QParallelAnimationGroup) callVirtualBase_UpdateCurrentTime(currentTime int) {

	C.QParallelAnimationGroup_virtualbase_updateCurrentTime(unsafe.Pointer(this.h), (C.int)(currentTime))

}
func (this *QParallelAnimationGroup) OnupdateCurrentTime(slot func(super func(currentTime int), currentTime int)) {
	ok := C.QParallelAnimationGroup_override_virtual_updateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_updateCurrentTime
func miqt_exec_callback_QParallelAnimationGroup_updateCurrentTime(self *C.QParallelAnimationGroup, cb C.intptr_t, currentTime C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(currentTime int), currentTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentTime)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_UpdateCurrentTime, slotval1)

}

func (this *QParallelAnimationGroup) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QParallelAnimationGroup_virtualbase_updateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QParallelAnimationGroup) OnupdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	ok := C.QParallelAnimationGroup_override_virtual_updateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_updateState
func miqt_exec_callback_QParallelAnimationGroup_updateState(self *C.QParallelAnimationGroup, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QParallelAnimationGroup) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QParallelAnimationGroup_virtualbase_updateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QParallelAnimationGroup) OnupdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	ok := C.QParallelAnimationGroup_override_virtual_updateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_updateDirection
func miqt_exec_callback_QParallelAnimationGroup_updateDirection(self *C.QParallelAnimationGroup, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

func (this *QParallelAnimationGroup) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QParallelAnimationGroup_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QParallelAnimationGroup) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QParallelAnimationGroup_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_eventFilter
func miqt_exec_callback_QParallelAnimationGroup_eventFilter(self *C.QParallelAnimationGroup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QParallelAnimationGroup) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QParallelAnimationGroup_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QParallelAnimationGroup) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QParallelAnimationGroup_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_timerEvent
func miqt_exec_callback_QParallelAnimationGroup_timerEvent(self *C.QParallelAnimationGroup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QParallelAnimationGroup) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QParallelAnimationGroup_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QParallelAnimationGroup) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QParallelAnimationGroup_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_childEvent
func miqt_exec_callback_QParallelAnimationGroup_childEvent(self *C.QParallelAnimationGroup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QParallelAnimationGroup) callVirtualBase_CustomEvent(event *QEvent) {

	C.QParallelAnimationGroup_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QParallelAnimationGroup) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QParallelAnimationGroup_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_customEvent
func miqt_exec_callback_QParallelAnimationGroup_customEvent(self *C.QParallelAnimationGroup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QParallelAnimationGroup) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QParallelAnimationGroup_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QParallelAnimationGroup) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QParallelAnimationGroup_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_connectNotify
func miqt_exec_callback_QParallelAnimationGroup_connectNotify(self *C.QParallelAnimationGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QParallelAnimationGroup) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QParallelAnimationGroup_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QParallelAnimationGroup) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QParallelAnimationGroup_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QParallelAnimationGroup_disconnectNotify
func miqt_exec_callback_QParallelAnimationGroup_disconnectNotify(self *C.QParallelAnimationGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QParallelAnimationGroup) Delete() {
	C.QParallelAnimationGroup_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QParallelAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QParallelAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
