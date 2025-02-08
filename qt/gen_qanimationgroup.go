package qt

/*

#include "gen_qanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAnimationGroup struct {
	h *C.QAnimationGroup
	*QAbstractAnimation
}

func (this *QAnimationGroup) cPointer() *C.QAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAnimationGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAnimationGroup constructs the type using only CGO pointers.
func newQAnimationGroup(h *C.QAnimationGroup) *QAnimationGroup {
	if h == nil {
		return nil
	}
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	C.QAnimationGroup_virtbase(h, &outptr_QAbstractAnimation)

	return &QAnimationGroup{h: h,
		QAbstractAnimation: newQAbstractAnimation(outptr_QAbstractAnimation)}
}

// UnsafeNewQAnimationGroup constructs the type using only unsafe pointers.
func UnsafeNewQAnimationGroup(h unsafe.Pointer) *QAnimationGroup {
	return newQAnimationGroup((*C.QAnimationGroup)(h))
}

// NewQAnimationGroup constructs a new QAnimationGroup object.
func NewQAnimationGroup() *QAnimationGroup {

	return newQAnimationGroup(C.QAnimationGroup_new())
}

// NewQAnimationGroup2 constructs a new QAnimationGroup object.
func NewQAnimationGroup2(parent *QObject) *QAnimationGroup {

	return newQAnimationGroup(C.QAnimationGroup_new2(parent.cPointer()))
}

func (this *QAnimationGroup) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAnimationGroup_metaObject(this.h))
}

func (this *QAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAnimationGroup_metacast(this.h, param1_Cstring))
}

func QAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAnimationGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnimationGroup) AnimationAt(index int) *QAbstractAnimation {
	return newQAbstractAnimation(C.QAnimationGroup_animationAt(this.h, (C.int)(index)))
}

func (this *QAnimationGroup) AnimationCount() int {
	return (int)(C.QAnimationGroup_animationCount(this.h))
}

func (this *QAnimationGroup) IndexOfAnimation(animation *QAbstractAnimation) int {
	return (int)(C.QAnimationGroup_indexOfAnimation(this.h, animation.cPointer()))
}

func (this *QAnimationGroup) AddAnimation(animation *QAbstractAnimation) {
	C.QAnimationGroup_addAnimation(this.h, animation.cPointer())
}

func (this *QAnimationGroup) InsertAnimation(index int, animation *QAbstractAnimation) {
	C.QAnimationGroup_insertAnimation(this.h, (C.int)(index), animation.cPointer())
}

func (this *QAnimationGroup) RemoveAnimation(animation *QAbstractAnimation) {
	C.QAnimationGroup_removeAnimation(this.h, animation.cPointer())
}

func (this *QAnimationGroup) TakeAnimation(index int) *QAbstractAnimation {
	return newQAbstractAnimation(C.QAnimationGroup_takeAnimation(this.h, (C.int)(index)))
}

func (this *QAnimationGroup) Clear() {
	C.QAnimationGroup_clear(this.h)
}

func QAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAnimationGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAnimationGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QAnimationGroup that was directly constructed.
func (this *QAnimationGroup) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QAnimationGroup_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAnimationGroup that was directly constructed.
func (this *QAnimationGroup) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAnimationGroup_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAnimationGroup that was directly constructed.
func (this *QAnimationGroup) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAnimationGroup_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAnimationGroup that was directly constructed.
func (this *QAnimationGroup) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAnimationGroup_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAnimationGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAnimationGroup_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAnimationGroup) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAnimationGroup_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_event
func miqt_exec_callback_QAnimationGroup_event(self *C.QAnimationGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAnimationGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAnimationGroup) OnDuration(slot func() int) {
	ok := C.QAnimationGroup_override_virtual_duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_duration
func miqt_exec_callback_QAnimationGroup_duration(self *C.QAnimationGroup, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAnimationGroup) OnUpdateCurrentTime(slot func(currentTime int)) {
	ok := C.QAnimationGroup_override_virtual_updateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_updateCurrentTime
func miqt_exec_callback_QAnimationGroup_updateCurrentTime(self *C.QAnimationGroup, cb C.intptr_t, currentTime C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentTime)

	gofunc(slotval1)

}

func (this *QAnimationGroup) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QAnimationGroup_virtualbase_updateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QAnimationGroup) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	ok := C.QAnimationGroup_override_virtual_updateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_updateState
func miqt_exec_callback_QAnimationGroup_updateState(self *C.QAnimationGroup, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QAnimationGroup) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QAnimationGroup_virtualbase_updateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QAnimationGroup) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	ok := C.QAnimationGroup_override_virtual_updateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_updateDirection
func miqt_exec_callback_QAnimationGroup_updateDirection(self *C.QAnimationGroup, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

func (this *QAnimationGroup) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAnimationGroup_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAnimationGroup) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAnimationGroup_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_eventFilter
func miqt_exec_callback_QAnimationGroup_eventFilter(self *C.QAnimationGroup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAnimationGroup{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAnimationGroup) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAnimationGroup_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationGroup) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAnimationGroup_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_timerEvent
func miqt_exec_callback_QAnimationGroup_timerEvent(self *C.QAnimationGroup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAnimationGroup) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAnimationGroup_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationGroup) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAnimationGroup_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_childEvent
func miqt_exec_callback_QAnimationGroup_childEvent(self *C.QAnimationGroup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAnimationGroup) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAnimationGroup_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationGroup) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAnimationGroup_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_customEvent
func miqt_exec_callback_QAnimationGroup_customEvent(self *C.QAnimationGroup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAnimationGroup) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAnimationGroup_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAnimationGroup) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAnimationGroup_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_connectNotify
func miqt_exec_callback_QAnimationGroup_connectNotify(self *C.QAnimationGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAnimationGroup) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAnimationGroup_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAnimationGroup) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAnimationGroup_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationGroup_disconnectNotify
func miqt_exec_callback_QAnimationGroup_disconnectNotify(self *C.QAnimationGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAnimationGroup) Delete() {
	C.QAnimationGroup_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
