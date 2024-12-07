package qt6

/*

#include "gen_qabstractanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractAnimation__Direction int

const (
	QAbstractAnimation__Forward  QAbstractAnimation__Direction = 0
	QAbstractAnimation__Backward QAbstractAnimation__Direction = 1
)

type QAbstractAnimation__State int

const (
	QAbstractAnimation__Stopped QAbstractAnimation__State = 0
	QAbstractAnimation__Paused  QAbstractAnimation__State = 1
	QAbstractAnimation__Running QAbstractAnimation__State = 2
)

type QAbstractAnimation__DeletionPolicy int

const (
	QAbstractAnimation__KeepWhenStopped   QAbstractAnimation__DeletionPolicy = 0
	QAbstractAnimation__DeleteWhenStopped QAbstractAnimation__DeletionPolicy = 1
)

type QAbstractAnimation struct {
	h          *C.QAbstractAnimation
	isSubclass bool
	*QObject
}

func (this *QAbstractAnimation) cPointer() *C.QAbstractAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractAnimation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractAnimation constructs the type using only CGO pointers.
func newQAbstractAnimation(h *C.QAbstractAnimation, h_QObject *C.QObject) *QAbstractAnimation {
	if h == nil {
		return nil
	}
	return &QAbstractAnimation{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAbstractAnimation constructs the type using only unsafe pointers.
func UnsafeNewQAbstractAnimation(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractAnimation {
	if h == nil {
		return nil
	}

	return &QAbstractAnimation{h: (*C.QAbstractAnimation)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQAbstractAnimation constructs a new QAbstractAnimation object.
func NewQAbstractAnimation() *QAbstractAnimation {
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractAnimation_new(&outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQAbstractAnimation(outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAbstractAnimation2 constructs a new QAbstractAnimation object.
func NewQAbstractAnimation2(parent *QObject) *QAbstractAnimation {
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractAnimation_new2(parent.cPointer(), &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQAbstractAnimation(outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractAnimation) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractAnimation_MetaObject(this.h))
}

func (this *QAbstractAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractAnimation_Metacast(this.h, param1_Cstring))
}

func QAbstractAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAnimation_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractAnimation) State() QAbstractAnimation__State {
	return (QAbstractAnimation__State)(C.QAbstractAnimation_State(this.h))
}

func (this *QAbstractAnimation) Group() *QAnimationGroup {
	return newQAnimationGroup(C.QAbstractAnimation_Group(this.h), nil, nil)
}

func (this *QAbstractAnimation) Direction() QAbstractAnimation__Direction {
	return (QAbstractAnimation__Direction)(C.QAbstractAnimation_Direction(this.h))
}

func (this *QAbstractAnimation) SetDirection(direction QAbstractAnimation__Direction) {
	C.QAbstractAnimation_SetDirection(this.h, (C.int)(direction))
}

func (this *QAbstractAnimation) CurrentTime() int {
	return (int)(C.QAbstractAnimation_CurrentTime(this.h))
}

func (this *QAbstractAnimation) CurrentLoopTime() int {
	return (int)(C.QAbstractAnimation_CurrentLoopTime(this.h))
}

func (this *QAbstractAnimation) LoopCount() int {
	return (int)(C.QAbstractAnimation_LoopCount(this.h))
}

func (this *QAbstractAnimation) SetLoopCount(loopCount int) {
	C.QAbstractAnimation_SetLoopCount(this.h, (C.int)(loopCount))
}

func (this *QAbstractAnimation) CurrentLoop() int {
	return (int)(C.QAbstractAnimation_CurrentLoop(this.h))
}

func (this *QAbstractAnimation) Duration() int {
	return (int)(C.QAbstractAnimation_Duration(this.h))
}

func (this *QAbstractAnimation) TotalDuration() int {
	return (int)(C.QAbstractAnimation_TotalDuration(this.h))
}

func (this *QAbstractAnimation) Finished() {
	C.QAbstractAnimation_Finished(this.h)
}
func (this *QAbstractAnimation) OnFinished(slot func()) {
	C.QAbstractAnimation_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_Finished
func miqt_exec_callback_QAbstractAnimation_Finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractAnimation) StateChanged(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {
	C.QAbstractAnimation_StateChanged(this.h, (C.int)(newState), (C.int)(oldState))
}
func (this *QAbstractAnimation) OnStateChanged(slot func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	C.QAbstractAnimation_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_StateChanged
func miqt_exec_callback_QAbstractAnimation_StateChanged(cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractAnimation) CurrentLoopChanged(currentLoop int) {
	C.QAbstractAnimation_CurrentLoopChanged(this.h, (C.int)(currentLoop))
}
func (this *QAbstractAnimation) OnCurrentLoopChanged(slot func(currentLoop int)) {
	C.QAbstractAnimation_connect_CurrentLoopChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_CurrentLoopChanged
func miqt_exec_callback_QAbstractAnimation_CurrentLoopChanged(cb C.intptr_t, currentLoop C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentLoop int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentLoop)

	gofunc(slotval1)
}

func (this *QAbstractAnimation) DirectionChanged(param1 QAbstractAnimation__Direction) {
	C.QAbstractAnimation_DirectionChanged(this.h, (C.int)(param1))
}
func (this *QAbstractAnimation) OnDirectionChanged(slot func(param1 QAbstractAnimation__Direction)) {
	C.QAbstractAnimation_connect_DirectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_DirectionChanged
func miqt_exec_callback_QAbstractAnimation_DirectionChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(param1)

	gofunc(slotval1)
}

func (this *QAbstractAnimation) Start() {
	C.QAbstractAnimation_Start(this.h)
}

func (this *QAbstractAnimation) Pause() {
	C.QAbstractAnimation_Pause(this.h)
}

func (this *QAbstractAnimation) Resume() {
	C.QAbstractAnimation_Resume(this.h)
}

func (this *QAbstractAnimation) SetPaused(paused bool) {
	C.QAbstractAnimation_SetPaused(this.h, (C.bool)(paused))
}

func (this *QAbstractAnimation) Stop() {
	C.QAbstractAnimation_Stop(this.h)
}

func (this *QAbstractAnimation) SetCurrentTime(msecs int) {
	C.QAbstractAnimation_SetCurrentTime(this.h, (C.int)(msecs))
}

func QAbstractAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAnimation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractAnimation) Start1(policy QAbstractAnimation__DeletionPolicy) {
	C.QAbstractAnimation_Start1(this.h, (C.int)(policy))
}
func (this *QAbstractAnimation) OnDuration(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_Duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_Duration
func miqt_exec_callback_QAbstractAnimation_Duration(self *C.QAbstractAnimation, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QAbstractAnimation) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractAnimation_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractAnimation) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_Event
func miqt_exec_callback_QAbstractAnimation_Event(self *C.QAbstractAnimation, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractAnimation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractAnimation) OnUpdateCurrentTime(slot func(currentTime int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_UpdateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_UpdateCurrentTime
func miqt_exec_callback_QAbstractAnimation_UpdateCurrentTime(self *C.QAbstractAnimation, cb C.intptr_t, currentTime C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentTime)

	gofunc(slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QAbstractAnimation_virtualbase_UpdateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QAbstractAnimation) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_UpdateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_UpdateState
func miqt_exec_callback_QAbstractAnimation_UpdateState(self *C.QAbstractAnimation, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QAbstractAnimation) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QAbstractAnimation_virtualbase_UpdateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QAbstractAnimation) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_UpdateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_UpdateDirection
func miqt_exec_callback_QAbstractAnimation_UpdateDirection(self *C.QAbstractAnimation, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractAnimation_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractAnimation) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_EventFilter
func miqt_exec_callback_QAbstractAnimation_EventFilter(self *C.QAbstractAnimation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractAnimation{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractAnimation) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractAnimation_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractAnimation) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_TimerEvent
func miqt_exec_callback_QAbstractAnimation_TimerEvent(self *C.QAbstractAnimation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event, nil)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractAnimation_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractAnimation) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_ChildEvent
func miqt_exec_callback_QAbstractAnimation_ChildEvent(self *C.QAbstractAnimation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event, nil)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractAnimation_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractAnimation) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_CustomEvent
func miqt_exec_callback_QAbstractAnimation_CustomEvent(self *C.QAbstractAnimation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractAnimation_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractAnimation) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_ConnectNotify
func miqt_exec_callback_QAbstractAnimation_ConnectNotify(self *C.QAbstractAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractAnimation_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractAnimation) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractAnimation_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_DisconnectNotify
func miqt_exec_callback_QAbstractAnimation_DisconnectNotify(self *C.QAbstractAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractAnimation) Delete() {
	C.QAbstractAnimation_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAnimationDriver struct {
	h          *C.QAnimationDriver
	isSubclass bool
	*QObject
}

func (this *QAnimationDriver) cPointer() *C.QAnimationDriver {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAnimationDriver) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAnimationDriver constructs the type using only CGO pointers.
func newQAnimationDriver(h *C.QAnimationDriver, h_QObject *C.QObject) *QAnimationDriver {
	if h == nil {
		return nil
	}
	return &QAnimationDriver{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAnimationDriver constructs the type using only unsafe pointers.
func UnsafeNewQAnimationDriver(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAnimationDriver {
	if h == nil {
		return nil
	}

	return &QAnimationDriver{h: (*C.QAnimationDriver)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQAnimationDriver constructs a new QAnimationDriver object.
func NewQAnimationDriver() *QAnimationDriver {
	var outptr_QAnimationDriver *C.QAnimationDriver = nil
	var outptr_QObject *C.QObject = nil

	C.QAnimationDriver_new(&outptr_QAnimationDriver, &outptr_QObject)
	ret := newQAnimationDriver(outptr_QAnimationDriver, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAnimationDriver2 constructs a new QAnimationDriver object.
func NewQAnimationDriver2(parent *QObject) *QAnimationDriver {
	var outptr_QAnimationDriver *C.QAnimationDriver = nil
	var outptr_QObject *C.QObject = nil

	C.QAnimationDriver_new2(parent.cPointer(), &outptr_QAnimationDriver, &outptr_QObject)
	ret := newQAnimationDriver(outptr_QAnimationDriver, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAnimationDriver) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAnimationDriver_MetaObject(this.h))
}

func (this *QAnimationDriver) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAnimationDriver_Metacast(this.h, param1_Cstring))
}

func QAnimationDriver_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationDriver_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnimationDriver) Advance() {
	C.QAnimationDriver_Advance(this.h)
}

func (this *QAnimationDriver) Install() {
	C.QAnimationDriver_Install(this.h)
}

func (this *QAnimationDriver) Uninstall() {
	C.QAnimationDriver_Uninstall(this.h)
}

func (this *QAnimationDriver) IsRunning() bool {
	return (bool)(C.QAnimationDriver_IsRunning(this.h))
}

func (this *QAnimationDriver) Elapsed() int64 {
	return (int64)(C.QAnimationDriver_Elapsed(this.h))
}

func (this *QAnimationDriver) Started() {
	C.QAnimationDriver_Started(this.h)
}
func (this *QAnimationDriver) OnStarted(slot func()) {
	C.QAnimationDriver_connect_Started(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_Started
func miqt_exec_callback_QAnimationDriver_Started(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAnimationDriver) Stopped() {
	C.QAnimationDriver_Stopped(this.h)
}
func (this *QAnimationDriver) OnStopped(slot func()) {
	C.QAnimationDriver_connect_Stopped(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_Stopped
func miqt_exec_callback_QAnimationDriver_Stopped(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAnimationDriver_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationDriver_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAnimationDriver_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationDriver_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnimationDriver) callVirtualBase_Advance() {

	C.QAnimationDriver_virtualbase_Advance(unsafe.Pointer(this.h))

}
func (this *QAnimationDriver) OnAdvance(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_Advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_Advance
func miqt_exec_callback_QAnimationDriver_Advance(self *C.QAnimationDriver, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_Advance)

}

func (this *QAnimationDriver) callVirtualBase_Elapsed() int64 {

	return (int64)(C.QAnimationDriver_virtualbase_Elapsed(unsafe.Pointer(this.h)))

}
func (this *QAnimationDriver) OnElapsed(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_Elapsed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_Elapsed
func miqt_exec_callback_QAnimationDriver_Elapsed(self *C.QAnimationDriver, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAnimationDriver{h: self}).callVirtualBase_Elapsed)

	return (C.longlong)(virtualReturn)

}

func (this *QAnimationDriver) callVirtualBase_Start() {

	C.QAnimationDriver_virtualbase_Start(unsafe.Pointer(this.h))

}
func (this *QAnimationDriver) OnStart(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_Start(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_Start
func miqt_exec_callback_QAnimationDriver_Start(self *C.QAnimationDriver, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_Start)

}

func (this *QAnimationDriver) callVirtualBase_Stop() {

	C.QAnimationDriver_virtualbase_Stop(unsafe.Pointer(this.h))

}
func (this *QAnimationDriver) OnStop(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_Stop(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_Stop
func miqt_exec_callback_QAnimationDriver_Stop(self *C.QAnimationDriver, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_Stop)

}

func (this *QAnimationDriver) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAnimationDriver_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAnimationDriver) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_Event
func miqt_exec_callback_QAnimationDriver_Event(self *C.QAnimationDriver, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAnimationDriver{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAnimationDriver) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAnimationDriver_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAnimationDriver) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_EventFilter
func miqt_exec_callback_QAnimationDriver_EventFilter(self *C.QAnimationDriver, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAnimationDriver{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAnimationDriver) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAnimationDriver_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationDriver) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_TimerEvent
func miqt_exec_callback_QAnimationDriver_TimerEvent(self *C.QAnimationDriver, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event, nil)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAnimationDriver) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAnimationDriver_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationDriver) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_ChildEvent
func miqt_exec_callback_QAnimationDriver_ChildEvent(self *C.QAnimationDriver, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event, nil)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAnimationDriver) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAnimationDriver_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationDriver) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_CustomEvent
func miqt_exec_callback_QAnimationDriver_CustomEvent(self *C.QAnimationDriver, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAnimationDriver) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAnimationDriver_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAnimationDriver) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_ConnectNotify
func miqt_exec_callback_QAnimationDriver_ConnectNotify(self *C.QAnimationDriver, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAnimationDriver) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAnimationDriver_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAnimationDriver) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAnimationDriver_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_DisconnectNotify
func miqt_exec_callback_QAnimationDriver_DisconnectNotify(self *C.QAnimationDriver, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAnimationDriver) Delete() {
	C.QAnimationDriver_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnimationDriver) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnimationDriver) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
