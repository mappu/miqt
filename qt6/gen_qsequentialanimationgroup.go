package qt6

/*

#include "gen_qsequentialanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSequentialAnimationGroup struct {
	h *C.QSequentialAnimationGroup
	*QAnimationGroup
}

func (this *QSequentialAnimationGroup) cPointer() *C.QSequentialAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSequentialAnimationGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSequentialAnimationGroup constructs the type using only CGO pointers.
func newQSequentialAnimationGroup(h *C.QSequentialAnimationGroup) *QSequentialAnimationGroup {
	if h == nil {
		return nil
	}
	var outptr_QAnimationGroup *C.QAnimationGroup = nil
	C.QSequentialAnimationGroup_virtbase(h, &outptr_QAnimationGroup)

	return &QSequentialAnimationGroup{h: h,
		QAnimationGroup: newQAnimationGroup(outptr_QAnimationGroup)}
}

// UnsafeNewQSequentialAnimationGroup constructs the type using only unsafe pointers.
func UnsafeNewQSequentialAnimationGroup(h unsafe.Pointer) *QSequentialAnimationGroup {
	return newQSequentialAnimationGroup((*C.QSequentialAnimationGroup)(h))
}

// NewQSequentialAnimationGroup constructs a new QSequentialAnimationGroup object.
func NewQSequentialAnimationGroup() *QSequentialAnimationGroup {

	return newQSequentialAnimationGroup(C.QSequentialAnimationGroup_new())
}

// NewQSequentialAnimationGroup2 constructs a new QSequentialAnimationGroup object.
func NewQSequentialAnimationGroup2(parent *QObject) *QSequentialAnimationGroup {

	return newQSequentialAnimationGroup(C.QSequentialAnimationGroup_new2(parent.cPointer()))
}

func (this *QSequentialAnimationGroup) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSequentialAnimationGroup_MetaObject(this.h))
}

func (this *QSequentialAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSequentialAnimationGroup_Metacast(this.h, param1_Cstring))
}

func QSequentialAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSequentialAnimationGroup) AddPause(msecs int) *QPauseAnimation {
	return newQPauseAnimation(C.QSequentialAnimationGroup_AddPause(this.h, (C.int)(msecs)))
}

func (this *QSequentialAnimationGroup) InsertPause(index int, msecs int) *QPauseAnimation {
	return newQPauseAnimation(C.QSequentialAnimationGroup_InsertPause(this.h, (C.int)(index), (C.int)(msecs)))
}

func (this *QSequentialAnimationGroup) CurrentAnimation() *QAbstractAnimation {
	return newQAbstractAnimation(C.QSequentialAnimationGroup_CurrentAnimation(this.h))
}

func (this *QSequentialAnimationGroup) Duration() int {
	return (int)(C.QSequentialAnimationGroup_Duration(this.h))
}

func (this *QSequentialAnimationGroup) CurrentAnimationChanged(current *QAbstractAnimation) {
	C.QSequentialAnimationGroup_CurrentAnimationChanged(this.h, current.cPointer())
}
func (this *QSequentialAnimationGroup) OnCurrentAnimationChanged(slot func(current *QAbstractAnimation)) {
	C.QSequentialAnimationGroup_connect_CurrentAnimationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged
func miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged(cb C.intptr_t, current *C.QAbstractAnimation) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QAbstractAnimation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractAnimation(current)

	gofunc(slotval1)
}

func QSequentialAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSequentialAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSequentialAnimationGroup) callVirtualBase_Duration() int {

	return (int)(C.QSequentialAnimationGroup_virtualbase_Duration(unsafe.Pointer(this.h)))

}
func (this *QSequentialAnimationGroup) OnDuration(slot func(super func() int) int) {
	ok := C.QSequentialAnimationGroup_override_virtual_Duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_Duration
func miqt_exec_callback_QSequentialAnimationGroup_Duration(self *C.QSequentialAnimationGroup, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_Duration)

	return (C.int)(virtualReturn)

}

func (this *QSequentialAnimationGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSequentialAnimationGroup_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSequentialAnimationGroup) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSequentialAnimationGroup_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_Event
func miqt_exec_callback_QSequentialAnimationGroup_Event(self *C.QSequentialAnimationGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSequentialAnimationGroup) callVirtualBase_UpdateCurrentTime(param1 int) {

	C.QSequentialAnimationGroup_virtualbase_UpdateCurrentTime(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QSequentialAnimationGroup) OnUpdateCurrentTime(slot func(super func(param1 int), param1 int)) {
	ok := C.QSequentialAnimationGroup_override_virtual_UpdateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_UpdateCurrentTime
func miqt_exec_callback_QSequentialAnimationGroup_UpdateCurrentTime(self *C.QSequentialAnimationGroup, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_UpdateCurrentTime, slotval1)

}

func (this *QSequentialAnimationGroup) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QSequentialAnimationGroup_virtualbase_UpdateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QSequentialAnimationGroup) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	ok := C.QSequentialAnimationGroup_override_virtual_UpdateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_UpdateState
func miqt_exec_callback_QSequentialAnimationGroup_UpdateState(self *C.QSequentialAnimationGroup, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QSequentialAnimationGroup) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QSequentialAnimationGroup_virtualbase_UpdateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QSequentialAnimationGroup) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	ok := C.QSequentialAnimationGroup_override_virtual_UpdateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_UpdateDirection
func miqt_exec_callback_QSequentialAnimationGroup_UpdateDirection(self *C.QSequentialAnimationGroup, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

func (this *QSequentialAnimationGroup) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSequentialAnimationGroup_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSequentialAnimationGroup) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSequentialAnimationGroup_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_EventFilter
func miqt_exec_callback_QSequentialAnimationGroup_EventFilter(self *C.QSequentialAnimationGroup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSequentialAnimationGroup) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSequentialAnimationGroup_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSequentialAnimationGroup) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSequentialAnimationGroup_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_TimerEvent
func miqt_exec_callback_QSequentialAnimationGroup_TimerEvent(self *C.QSequentialAnimationGroup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSequentialAnimationGroup) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSequentialAnimationGroup_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSequentialAnimationGroup) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSequentialAnimationGroup_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_ChildEvent
func miqt_exec_callback_QSequentialAnimationGroup_ChildEvent(self *C.QSequentialAnimationGroup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSequentialAnimationGroup) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSequentialAnimationGroup_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSequentialAnimationGroup) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSequentialAnimationGroup_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_CustomEvent
func miqt_exec_callback_QSequentialAnimationGroup_CustomEvent(self *C.QSequentialAnimationGroup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSequentialAnimationGroup) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSequentialAnimationGroup_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSequentialAnimationGroup) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSequentialAnimationGroup_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_ConnectNotify
func miqt_exec_callback_QSequentialAnimationGroup_ConnectNotify(self *C.QSequentialAnimationGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSequentialAnimationGroup) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSequentialAnimationGroup_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSequentialAnimationGroup) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSequentialAnimationGroup_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSequentialAnimationGroup_DisconnectNotify
func miqt_exec_callback_QSequentialAnimationGroup_DisconnectNotify(self *C.QSequentialAnimationGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSequentialAnimationGroup) Delete() {
	C.QSequentialAnimationGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSequentialAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QSequentialAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
