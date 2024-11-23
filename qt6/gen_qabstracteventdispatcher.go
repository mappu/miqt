package qt6

/*

#include "gen_qabstracteventdispatcher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractEventDispatcher struct {
	h          *C.QAbstractEventDispatcher
	isSubclass bool
	*QObject
}

func (this *QAbstractEventDispatcher) cPointer() *C.QAbstractEventDispatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractEventDispatcher) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractEventDispatcher constructs the type using only CGO pointers.
func newQAbstractEventDispatcher(h *C.QAbstractEventDispatcher, h_QObject *C.QObject) *QAbstractEventDispatcher {
	if h == nil {
		return nil
	}
	return &QAbstractEventDispatcher{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAbstractEventDispatcher constructs the type using only unsafe pointers.
func UnsafeNewQAbstractEventDispatcher(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractEventDispatcher {
	if h == nil {
		return nil
	}

	return &QAbstractEventDispatcher{h: (*C.QAbstractEventDispatcher)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQAbstractEventDispatcher constructs a new QAbstractEventDispatcher object.
func NewQAbstractEventDispatcher() *QAbstractEventDispatcher {
	var outptr_QAbstractEventDispatcher *C.QAbstractEventDispatcher = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractEventDispatcher_new(&outptr_QAbstractEventDispatcher, &outptr_QObject)
	ret := newQAbstractEventDispatcher(outptr_QAbstractEventDispatcher, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAbstractEventDispatcher2 constructs a new QAbstractEventDispatcher object.
func NewQAbstractEventDispatcher2(parent *QObject) *QAbstractEventDispatcher {
	var outptr_QAbstractEventDispatcher *C.QAbstractEventDispatcher = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractEventDispatcher_new2(parent.cPointer(), &outptr_QAbstractEventDispatcher, &outptr_QObject)
	ret := newQAbstractEventDispatcher(outptr_QAbstractEventDispatcher, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractEventDispatcher) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractEventDispatcher_MetaObject(this.h)))
}

func (this *QAbstractEventDispatcher) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractEventDispatcher_Metacast(this.h, param1_Cstring))
}

func QAbstractEventDispatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Instance() *QAbstractEventDispatcher {
	return UnsafeNewQAbstractEventDispatcher(unsafe.Pointer(C.QAbstractEventDispatcher_Instance()), nil)
}

func (this *QAbstractEventDispatcher) ProcessEvents(flags QEventLoop__ProcessEventsFlag) bool {
	return (bool)(C.QAbstractEventDispatcher_ProcessEvents(this.h, (C.int)(flags)))
}

func (this *QAbstractEventDispatcher) RegisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_RegisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_UnregisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) RegisterTimer(interval int64, timerType TimerType, object *QObject) int {
	return (int)(C.QAbstractEventDispatcher_RegisterTimer(this.h, (C.longlong)(interval), (C.int)(timerType), object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisterTimer2(timerId int, interval int64, timerType TimerType, object *QObject) {
	C.QAbstractEventDispatcher_RegisterTimer2(this.h, (C.int)(timerId), (C.longlong)(interval), (C.int)(timerType), object.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterTimer(timerId int) bool {
	return (bool)(C.QAbstractEventDispatcher_UnregisterTimer(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) UnregisterTimers(object *QObject) bool {
	return (bool)(C.QAbstractEventDispatcher_UnregisterTimers(this.h, object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisteredTimers(object *QObject) []QAbstractEventDispatcher__TimerInfo {
	var _ma C.struct_miqt_array = C.QAbstractEventDispatcher_RegisteredTimers(this.h, object.cPointer())
	_ret := make([]QAbstractEventDispatcher__TimerInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractEventDispatcher__TimerInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQAbstractEventDispatcher__TimerInfo(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QAbstractEventDispatcher) RemainingTime(timerId int) int {
	return (int)(C.QAbstractEventDispatcher_RemainingTime(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) WakeUp() {
	C.QAbstractEventDispatcher_WakeUp(this.h)
}

func (this *QAbstractEventDispatcher) Interrupt() {
	C.QAbstractEventDispatcher_Interrupt(this.h)
}

func (this *QAbstractEventDispatcher) StartingUp() {
	C.QAbstractEventDispatcher_StartingUp(this.h)
}

func (this *QAbstractEventDispatcher) ClosingDown() {
	C.QAbstractEventDispatcher_ClosingDown(this.h)
}

func (this *QAbstractEventDispatcher) InstallNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QAbstractEventDispatcher_InstallNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QAbstractEventDispatcher) RemoveNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QAbstractEventDispatcher_RemoveNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QAbstractEventDispatcher) FilterNativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))
	return (bool)(C.QAbstractEventDispatcher_FilterNativeEvent(this.h, eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))
}

func (this *QAbstractEventDispatcher) AboutToBlock() {
	C.QAbstractEventDispatcher_AboutToBlock(this.h)
}
func (this *QAbstractEventDispatcher) OnAboutToBlock(slot func()) {
	C.QAbstractEventDispatcher_connect_AboutToBlock(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_AboutToBlock
func miqt_exec_callback_QAbstractEventDispatcher_AboutToBlock(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractEventDispatcher) Awake() {
	C.QAbstractEventDispatcher_Awake(this.h)
}
func (this *QAbstractEventDispatcher) OnAwake(slot func()) {
	C.QAbstractEventDispatcher_connect_Awake(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_Awake
func miqt_exec_callback_QAbstractEventDispatcher_Awake(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAbstractEventDispatcher_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Instance1(thread *QThread) *QAbstractEventDispatcher {
	return UnsafeNewQAbstractEventDispatcher(unsafe.Pointer(C.QAbstractEventDispatcher_Instance1(thread.cPointer())), nil)
}
func (this *QAbstractEventDispatcher) OnProcessEvents(slot func(flags QEventLoop__ProcessEventsFlag) bool) {
	C.QAbstractEventDispatcher_override_virtual_ProcessEvents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_ProcessEvents
func miqt_exec_callback_QAbstractEventDispatcher_ProcessEvents(self *C.QAbstractEventDispatcher, cb C.intptr_t, flags C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(flags QEventLoop__ProcessEventsFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QEventLoop__ProcessEventsFlag)(flags)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractEventDispatcher) OnRegisterSocketNotifier(slot func(notifier *QSocketNotifier)) {
	C.QAbstractEventDispatcher_override_virtual_RegisterSocketNotifier(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_RegisterSocketNotifier
func miqt_exec_callback_QAbstractEventDispatcher_RegisterSocketNotifier(self *C.QAbstractEventDispatcher, cb C.intptr_t, notifier *C.QSocketNotifier) {
	gofunc, ok := cgo.Handle(cb).Value().(func(notifier *QSocketNotifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSocketNotifier(unsafe.Pointer(notifier), nil)

	gofunc(slotval1)

}
func (this *QAbstractEventDispatcher) OnUnregisterSocketNotifier(slot func(notifier *QSocketNotifier)) {
	C.QAbstractEventDispatcher_override_virtual_UnregisterSocketNotifier(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_UnregisterSocketNotifier
func miqt_exec_callback_QAbstractEventDispatcher_UnregisterSocketNotifier(self *C.QAbstractEventDispatcher, cb C.intptr_t, notifier *C.QSocketNotifier) {
	gofunc, ok := cgo.Handle(cb).Value().(func(notifier *QSocketNotifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSocketNotifier(unsafe.Pointer(notifier), nil)

	gofunc(slotval1)

}
func (this *QAbstractEventDispatcher) OnRegisterTimer2(slot func(timerId int, interval int64, timerType TimerType, object *QObject)) {
	C.QAbstractEventDispatcher_override_virtual_RegisterTimer2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_RegisterTimer2
func miqt_exec_callback_QAbstractEventDispatcher_RegisterTimer2(self *C.QAbstractEventDispatcher, cb C.intptr_t, timerId C.int, interval C.longlong, timerType C.int, object *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(timerId int, interval int64, timerType TimerType, object *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(timerId)

	slotval2 := (int64)(interval)

	slotval3 := (TimerType)(timerType)

	slotval4 := UnsafeNewQObject(unsafe.Pointer(object))

	gofunc(slotval1, slotval2, slotval3, slotval4)

}
func (this *QAbstractEventDispatcher) OnUnregisterTimer(slot func(timerId int) bool) {
	C.QAbstractEventDispatcher_override_virtual_UnregisterTimer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_UnregisterTimer
func miqt_exec_callback_QAbstractEventDispatcher_UnregisterTimer(self *C.QAbstractEventDispatcher, cb C.intptr_t, timerId C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(timerId int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(timerId)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractEventDispatcher) OnUnregisterTimers(slot func(object *QObject) bool) {
	C.QAbstractEventDispatcher_override_virtual_UnregisterTimers(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_UnregisterTimers
func miqt_exec_callback_QAbstractEventDispatcher_UnregisterTimers(self *C.QAbstractEventDispatcher, cb C.intptr_t, object *C.QObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *QObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(object))

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractEventDispatcher) OnRegisteredTimers(slot func(object *QObject) []QAbstractEventDispatcher__TimerInfo) {
	C.QAbstractEventDispatcher_override_virtual_RegisteredTimers(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_RegisteredTimers
func miqt_exec_callback_QAbstractEventDispatcher_RegisteredTimers(self *C.QAbstractEventDispatcher, cb C.intptr_t, object *C.QObject) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *QObject) []QAbstractEventDispatcher__TimerInfo)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(object))

	virtualReturn := gofunc(slotval1)
	virtualReturn_CArray := (*[0xffff]*C.QAbstractEventDispatcher__TimerInfo)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QAbstractEventDispatcher) OnRemainingTime(slot func(timerId int) int) {
	C.QAbstractEventDispatcher_override_virtual_RemainingTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_RemainingTime
func miqt_exec_callback_QAbstractEventDispatcher_RemainingTime(self *C.QAbstractEventDispatcher, cb C.intptr_t, timerId C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(timerId int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(timerId)

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *QAbstractEventDispatcher) OnWakeUp(slot func()) {
	C.QAbstractEventDispatcher_override_virtual_WakeUp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_WakeUp
func miqt_exec_callback_QAbstractEventDispatcher_WakeUp(self *C.QAbstractEventDispatcher, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QAbstractEventDispatcher) OnInterrupt(slot func()) {
	C.QAbstractEventDispatcher_override_virtual_Interrupt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_Interrupt
func miqt_exec_callback_QAbstractEventDispatcher_Interrupt(self *C.QAbstractEventDispatcher, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

func (this *QAbstractEventDispatcher) callVirtualBase_StartingUp() {

	C.QAbstractEventDispatcher_virtualbase_StartingUp(unsafe.Pointer(this.h))

}
func (this *QAbstractEventDispatcher) OnStartingUp(slot func(super func())) {
	C.QAbstractEventDispatcher_override_virtual_StartingUp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_StartingUp
func miqt_exec_callback_QAbstractEventDispatcher_StartingUp(self *C.QAbstractEventDispatcher, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_StartingUp)

}

func (this *QAbstractEventDispatcher) callVirtualBase_ClosingDown() {

	C.QAbstractEventDispatcher_virtualbase_ClosingDown(unsafe.Pointer(this.h))

}
func (this *QAbstractEventDispatcher) OnClosingDown(slot func(super func())) {
	C.QAbstractEventDispatcher_override_virtual_ClosingDown(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_ClosingDown
func miqt_exec_callback_QAbstractEventDispatcher_ClosingDown(self *C.QAbstractEventDispatcher, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_ClosingDown)

}

func (this *QAbstractEventDispatcher) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractEventDispatcher_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractEventDispatcher) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QAbstractEventDispatcher_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_Event
func miqt_exec_callback_QAbstractEventDispatcher_Event(self *C.QAbstractEventDispatcher, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractEventDispatcher) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractEventDispatcher_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractEventDispatcher) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QAbstractEventDispatcher_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_EventFilter
func miqt_exec_callback_QAbstractEventDispatcher_EventFilter(self *C.QAbstractEventDispatcher, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractEventDispatcher) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractEventDispatcher_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractEventDispatcher) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QAbstractEventDispatcher_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_TimerEvent
func miqt_exec_callback_QAbstractEventDispatcher_TimerEvent(self *C.QAbstractEventDispatcher, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractEventDispatcher) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractEventDispatcher_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractEventDispatcher) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QAbstractEventDispatcher_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_ChildEvent
func miqt_exec_callback_QAbstractEventDispatcher_ChildEvent(self *C.QAbstractEventDispatcher, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractEventDispatcher) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractEventDispatcher_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractEventDispatcher) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QAbstractEventDispatcher_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_CustomEvent
func miqt_exec_callback_QAbstractEventDispatcher_CustomEvent(self *C.QAbstractEventDispatcher, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractEventDispatcher) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractEventDispatcher_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractEventDispatcher) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QAbstractEventDispatcher_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_ConnectNotify
func miqt_exec_callback_QAbstractEventDispatcher_ConnectNotify(self *C.QAbstractEventDispatcher, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractEventDispatcher) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractEventDispatcher_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractEventDispatcher) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QAbstractEventDispatcher_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_DisconnectNotify
func miqt_exec_callback_QAbstractEventDispatcher_DisconnectNotify(self *C.QAbstractEventDispatcher, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractEventDispatcher{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher) Delete() {
	C.QAbstractEventDispatcher_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractEventDispatcher) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractEventDispatcher) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractEventDispatcher__TimerInfo struct {
	h          *C.QAbstractEventDispatcher__TimerInfo
	isSubclass bool
}

func (this *QAbstractEventDispatcher__TimerInfo) cPointer() *C.QAbstractEventDispatcher__TimerInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractEventDispatcher__TimerInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractEventDispatcher__TimerInfo constructs the type using only CGO pointers.
func newQAbstractEventDispatcher__TimerInfo(h *C.QAbstractEventDispatcher__TimerInfo) *QAbstractEventDispatcher__TimerInfo {
	if h == nil {
		return nil
	}
	return &QAbstractEventDispatcher__TimerInfo{h: h}
}

// UnsafeNewQAbstractEventDispatcher__TimerInfo constructs the type using only unsafe pointers.
func UnsafeNewQAbstractEventDispatcher__TimerInfo(h unsafe.Pointer) *QAbstractEventDispatcher__TimerInfo {
	if h == nil {
		return nil
	}

	return &QAbstractEventDispatcher__TimerInfo{h: (*C.QAbstractEventDispatcher__TimerInfo)(h)}
}

// NewQAbstractEventDispatcher__TimerInfo constructs a new QAbstractEventDispatcher::TimerInfo object.
func NewQAbstractEventDispatcher__TimerInfo(id int, i int, t TimerType) *QAbstractEventDispatcher__TimerInfo {
	var outptr_QAbstractEventDispatcher__TimerInfo *C.QAbstractEventDispatcher__TimerInfo = nil

	C.QAbstractEventDispatcher__TimerInfo_new((C.int)(id), (C.int)(i), (C.int)(t), &outptr_QAbstractEventDispatcher__TimerInfo)
	ret := newQAbstractEventDispatcher__TimerInfo(outptr_QAbstractEventDispatcher__TimerInfo)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher__TimerInfo) Delete() {
	C.QAbstractEventDispatcher__TimerInfo_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractEventDispatcher__TimerInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractEventDispatcher__TimerInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
