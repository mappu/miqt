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
	h *C.QAbstractAnimation
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
func newQAbstractAnimation(h *C.QAbstractAnimation) *QAbstractAnimation {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractAnimation_virtbase(h, &outptr_QObject)

	return &QAbstractAnimation{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAbstractAnimation constructs the type using only unsafe pointers.
func UnsafeNewQAbstractAnimation(h unsafe.Pointer) *QAbstractAnimation {
	return newQAbstractAnimation((*C.QAbstractAnimation)(h))
}

// NewQAbstractAnimation constructs a new QAbstractAnimation object.
func NewQAbstractAnimation() *QAbstractAnimation {

	return newQAbstractAnimation(C.QAbstractAnimation_new())
}

// NewQAbstractAnimation2 constructs a new QAbstractAnimation object.
func NewQAbstractAnimation2(parent *QObject) *QAbstractAnimation {

	return newQAbstractAnimation(C.QAbstractAnimation_new2(parent.cPointer()))
}

func (this *QAbstractAnimation) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractAnimation_metaObject(this.h))
}

func (this *QAbstractAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractAnimation_metacast(this.h, param1_Cstring))
}

func QAbstractAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAnimation_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractAnimation) State() QAbstractAnimation__State {
	return (QAbstractAnimation__State)(C.QAbstractAnimation_state(this.h))
}

func (this *QAbstractAnimation) Group() *QAnimationGroup {
	return newQAnimationGroup(C.QAbstractAnimation_group(this.h))
}

func (this *QAbstractAnimation) Direction() QAbstractAnimation__Direction {
	return (QAbstractAnimation__Direction)(C.QAbstractAnimation_direction(this.h))
}

func (this *QAbstractAnimation) SetDirection(direction QAbstractAnimation__Direction) {
	C.QAbstractAnimation_setDirection(this.h, (C.int)(direction))
}

func (this *QAbstractAnimation) CurrentTime() int {
	return (int)(C.QAbstractAnimation_currentTime(this.h))
}

func (this *QAbstractAnimation) CurrentLoopTime() int {
	return (int)(C.QAbstractAnimation_currentLoopTime(this.h))
}

func (this *QAbstractAnimation) LoopCount() int {
	return (int)(C.QAbstractAnimation_loopCount(this.h))
}

func (this *QAbstractAnimation) SetLoopCount(loopCount int) {
	C.QAbstractAnimation_setLoopCount(this.h, (C.int)(loopCount))
}

func (this *QAbstractAnimation) CurrentLoop() int {
	return (int)(C.QAbstractAnimation_currentLoop(this.h))
}

func (this *QAbstractAnimation) Duration() int {
	return (int)(C.QAbstractAnimation_duration(this.h))
}

func (this *QAbstractAnimation) TotalDuration() int {
	return (int)(C.QAbstractAnimation_totalDuration(this.h))
}

func (this *QAbstractAnimation) Finished() {
	C.QAbstractAnimation_finished(this.h)
}
func (this *QAbstractAnimation) OnFinished(slot func()) {
	C.QAbstractAnimation_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_finished
func miqt_exec_callback_QAbstractAnimation_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractAnimation) StateChanged(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {
	C.QAbstractAnimation_stateChanged(this.h, (C.int)(newState), (C.int)(oldState))
}
func (this *QAbstractAnimation) OnStateChanged(slot func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	C.QAbstractAnimation_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_stateChanged
func miqt_exec_callback_QAbstractAnimation_stateChanged(cb C.intptr_t, newState C.int, oldState C.int) {
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
	C.QAbstractAnimation_currentLoopChanged(this.h, (C.int)(currentLoop))
}
func (this *QAbstractAnimation) OnCurrentLoopChanged(slot func(currentLoop int)) {
	C.QAbstractAnimation_connect_currentLoopChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_currentLoopChanged
func miqt_exec_callback_QAbstractAnimation_currentLoopChanged(cb C.intptr_t, currentLoop C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentLoop int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentLoop)

	gofunc(slotval1)
}

func (this *QAbstractAnimation) DirectionChanged(param1 QAbstractAnimation__Direction) {
	C.QAbstractAnimation_directionChanged(this.h, (C.int)(param1))
}
func (this *QAbstractAnimation) OnDirectionChanged(slot func(param1 QAbstractAnimation__Direction)) {
	C.QAbstractAnimation_connect_directionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAnimation_directionChanged
func miqt_exec_callback_QAbstractAnimation_directionChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(param1)

	gofunc(slotval1)
}

func (this *QAbstractAnimation) Start() {
	C.QAbstractAnimation_start(this.h)
}

func (this *QAbstractAnimation) Pause() {
	C.QAbstractAnimation_pause(this.h)
}

func (this *QAbstractAnimation) Resume() {
	C.QAbstractAnimation_resume(this.h)
}

func (this *QAbstractAnimation) SetPaused(paused bool) {
	C.QAbstractAnimation_setPaused(this.h, (C.bool)(paused))
}

func (this *QAbstractAnimation) Stop() {
	C.QAbstractAnimation_stop(this.h)
}

func (this *QAbstractAnimation) SetCurrentTime(msecs int) {
	C.QAbstractAnimation_setCurrentTime(this.h, (C.int)(msecs))
}

func QAbstractAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAnimation_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAnimation_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractAnimation) StartWithPolicy(policy QAbstractAnimation__DeletionPolicy) {
	C.QAbstractAnimation_startWithPolicy(this.h, (C.int)(policy))
}

// Sender can only be called from a QAbstractAnimation that was directly constructed.
func (this *QAbstractAnimation) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QAbstractAnimation_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAbstractAnimation that was directly constructed.
func (this *QAbstractAnimation) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractAnimation_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAbstractAnimation that was directly constructed.
func (this *QAbstractAnimation) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractAnimation_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAbstractAnimation that was directly constructed.
func (this *QAbstractAnimation) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractAnimation_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QAbstractAnimation) OnDuration(slot func() int) {
	ok := C.QAbstractAnimation_override_virtual_duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_duration
func miqt_exec_callback_QAbstractAnimation_duration(self *C.QAbstractAnimation, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QAbstractAnimation) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractAnimation_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractAnimation) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAbstractAnimation_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_event
func miqt_exec_callback_QAbstractAnimation_event(self *C.QAbstractAnimation, cb C.intptr_t, event *C.QEvent) C.bool {
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
	ok := C.QAbstractAnimation_override_virtual_updateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_updateCurrentTime
func miqt_exec_callback_QAbstractAnimation_updateCurrentTime(self *C.QAbstractAnimation, cb C.intptr_t, currentTime C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentTime)

	gofunc(slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QAbstractAnimation_virtualbase_updateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QAbstractAnimation) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	ok := C.QAbstractAnimation_override_virtual_updateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_updateState
func miqt_exec_callback_QAbstractAnimation_updateState(self *C.QAbstractAnimation, cb C.intptr_t, newState C.int, oldState C.int) {
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

	C.QAbstractAnimation_virtualbase_updateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QAbstractAnimation) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	ok := C.QAbstractAnimation_override_virtual_updateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_updateDirection
func miqt_exec_callback_QAbstractAnimation_updateDirection(self *C.QAbstractAnimation, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractAnimation_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractAnimation) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAbstractAnimation_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_eventFilter
func miqt_exec_callback_QAbstractAnimation_eventFilter(self *C.QAbstractAnimation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QAbstractAnimation_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractAnimation) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAbstractAnimation_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_timerEvent
func miqt_exec_callback_QAbstractAnimation_timerEvent(self *C.QAbstractAnimation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractAnimation_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractAnimation) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractAnimation_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_childEvent
func miqt_exec_callback_QAbstractAnimation_childEvent(self *C.QAbstractAnimation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractAnimation_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractAnimation) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractAnimation_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_customEvent
func miqt_exec_callback_QAbstractAnimation_customEvent(self *C.QAbstractAnimation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractAnimation_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractAnimation) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractAnimation_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_connectNotify
func miqt_exec_callback_QAbstractAnimation_connectNotify(self *C.QAbstractAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractAnimation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractAnimation) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractAnimation_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractAnimation) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractAnimation_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractAnimation_disconnectNotify
func miqt_exec_callback_QAbstractAnimation_disconnectNotify(self *C.QAbstractAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QAbstractAnimation_delete(this.h)
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
	h *C.QAnimationDriver
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
func newQAnimationDriver(h *C.QAnimationDriver) *QAnimationDriver {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAnimationDriver_virtbase(h, &outptr_QObject)

	return &QAnimationDriver{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAnimationDriver constructs the type using only unsafe pointers.
func UnsafeNewQAnimationDriver(h unsafe.Pointer) *QAnimationDriver {
	return newQAnimationDriver((*C.QAnimationDriver)(h))
}

// NewQAnimationDriver constructs a new QAnimationDriver object.
func NewQAnimationDriver() *QAnimationDriver {

	return newQAnimationDriver(C.QAnimationDriver_new())
}

// NewQAnimationDriver2 constructs a new QAnimationDriver object.
func NewQAnimationDriver2(parent *QObject) *QAnimationDriver {

	return newQAnimationDriver(C.QAnimationDriver_new2(parent.cPointer()))
}

func (this *QAnimationDriver) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAnimationDriver_metaObject(this.h))
}

func (this *QAnimationDriver) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAnimationDriver_metacast(this.h, param1_Cstring))
}

func QAnimationDriver_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationDriver_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnimationDriver) Advance() {
	C.QAnimationDriver_advance(this.h)
}

func (this *QAnimationDriver) Install() {
	C.QAnimationDriver_install(this.h)
}

func (this *QAnimationDriver) Uninstall() {
	C.QAnimationDriver_uninstall(this.h)
}

func (this *QAnimationDriver) IsRunning() bool {
	return (bool)(C.QAnimationDriver_isRunning(this.h))
}

func (this *QAnimationDriver) Elapsed() int64 {
	return (int64)(C.QAnimationDriver_elapsed(this.h))
}

func (this *QAnimationDriver) Started() {
	C.QAnimationDriver_started(this.h)
}
func (this *QAnimationDriver) OnStarted(slot func()) {
	C.QAnimationDriver_connect_started(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_started
func miqt_exec_callback_QAnimationDriver_started(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAnimationDriver) Stopped() {
	C.QAnimationDriver_stopped(this.h)
}
func (this *QAnimationDriver) OnStopped(slot func()) {
	C.QAnimationDriver_connect_stopped(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationDriver_stopped
func miqt_exec_callback_QAnimationDriver_stopped(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QAnimationDriver_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAnimationDriver_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationDriver_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// AdvanceAnimation can only be called from a QAnimationDriver that was directly constructed.
func (this *QAnimationDriver) AdvanceAnimation() {

	var _dynamic_cast_ok C.bool = false
	C.QAnimationDriver_protectedbase_advanceAnimation(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QAnimationDriver that was directly constructed.
func (this *QAnimationDriver) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QAnimationDriver_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAnimationDriver that was directly constructed.
func (this *QAnimationDriver) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAnimationDriver_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAnimationDriver that was directly constructed.
func (this *QAnimationDriver) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAnimationDriver_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAnimationDriver that was directly constructed.
func (this *QAnimationDriver) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAnimationDriver_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAnimationDriver) callVirtualBase_Advance() {

	C.QAnimationDriver_virtualbase_advance(unsafe.Pointer(this.h))

}
func (this *QAnimationDriver) OnAdvance(slot func(super func())) {
	ok := C.QAnimationDriver_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_advance
func miqt_exec_callback_QAnimationDriver_advance(self *C.QAnimationDriver, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_Advance)

}

func (this *QAnimationDriver) callVirtualBase_Elapsed() int64 {

	return (int64)(C.QAnimationDriver_virtualbase_elapsed(unsafe.Pointer(this.h)))

}
func (this *QAnimationDriver) OnElapsed(slot func(super func() int64) int64) {
	ok := C.QAnimationDriver_override_virtual_elapsed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_elapsed
func miqt_exec_callback_QAnimationDriver_elapsed(self *C.QAnimationDriver, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAnimationDriver{h: self}).callVirtualBase_Elapsed)

	return (C.longlong)(virtualReturn)

}

func (this *QAnimationDriver) callVirtualBase_Start() {

	C.QAnimationDriver_virtualbase_start(unsafe.Pointer(this.h))

}
func (this *QAnimationDriver) OnStart(slot func(super func())) {
	ok := C.QAnimationDriver_override_virtual_start(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_start
func miqt_exec_callback_QAnimationDriver_start(self *C.QAnimationDriver, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_Start)

}

func (this *QAnimationDriver) callVirtualBase_Stop() {

	C.QAnimationDriver_virtualbase_stop(unsafe.Pointer(this.h))

}
func (this *QAnimationDriver) OnStop(slot func(super func())) {
	ok := C.QAnimationDriver_override_virtual_stop(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_stop
func miqt_exec_callback_QAnimationDriver_stop(self *C.QAnimationDriver, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_Stop)

}

func (this *QAnimationDriver) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAnimationDriver_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAnimationDriver) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAnimationDriver_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_event
func miqt_exec_callback_QAnimationDriver_event(self *C.QAnimationDriver, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QAnimationDriver_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAnimationDriver) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAnimationDriver_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_eventFilter
func miqt_exec_callback_QAnimationDriver_eventFilter(self *C.QAnimationDriver, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QAnimationDriver_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationDriver) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAnimationDriver_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_timerEvent
func miqt_exec_callback_QAnimationDriver_timerEvent(self *C.QAnimationDriver, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAnimationDriver) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAnimationDriver_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationDriver) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAnimationDriver_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_childEvent
func miqt_exec_callback_QAnimationDriver_childEvent(self *C.QAnimationDriver, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAnimationDriver) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAnimationDriver_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAnimationDriver) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAnimationDriver_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_customEvent
func miqt_exec_callback_QAnimationDriver_customEvent(self *C.QAnimationDriver, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAnimationDriver) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAnimationDriver_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAnimationDriver) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAnimationDriver_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_connectNotify
func miqt_exec_callback_QAnimationDriver_connectNotify(self *C.QAnimationDriver, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAnimationDriver{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAnimationDriver) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAnimationDriver_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAnimationDriver) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAnimationDriver_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAnimationDriver_disconnectNotify
func miqt_exec_callback_QAnimationDriver_disconnectNotify(self *C.QAnimationDriver, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QAnimationDriver_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnimationDriver) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnimationDriver) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
