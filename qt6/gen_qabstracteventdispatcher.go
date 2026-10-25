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
	h  *C.QAbstractEventDispatcher
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractEventDispatcher) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
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
func newQAbstractEventDispatcher(h *C.QAbstractEventDispatcher) *QAbstractEventDispatcher {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractEventDispatcher_virtbase(h, &outptr_QObject)

	return &QAbstractEventDispatcher{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAbstractEventDispatcher constructs the type using only unsafe pointers.
func UnsafeNewQAbstractEventDispatcher(h unsafe.Pointer) *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher((*C.QAbstractEventDispatcher)(h))
}

func (this *QAbstractEventDispatcher) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QAbstractEventDispatcher_metaObject(this.h))
}

func (this *QAbstractEventDispatcher) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractEventDispatcher_metacast(this.h, param1_Cstring))
}

func QAbstractEventDispatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Instance() *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QAbstractEventDispatcher_instance())
}

func (this *QAbstractEventDispatcher) ProcessEvents(flags QEventLoop__ProcessEventsFlag) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAbstractEventDispatcher_processEvents(this.h, (C.int)(flags)))
}

func (this *QAbstractEventDispatcher) RegisterSocketNotifier(notifier *QSocketNotifier) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(notifier)
	C.QAbstractEventDispatcher_registerSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterSocketNotifier(notifier *QSocketNotifier) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(notifier)
	C.QAbstractEventDispatcher_unregisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) RegisterTimer(interval int64, timerType TimerType, object *QObject) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(object)
	return (int)(C.QAbstractEventDispatcher_registerTimer(this.h, (C.longlong)(interval), (C.int)(timerType), object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisterTimer2(timerId int, interval int64, timerType TimerType, object *QObject) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(object)
	C.QAbstractEventDispatcher_registerTimer2(this.h, (C.int)(timerId), (C.longlong)(interval), (C.int)(timerType), object.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterTimer(timerId int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAbstractEventDispatcher_unregisterTimer(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) UnregisterTimers(object *QObject) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(object)
	return (bool)(C.QAbstractEventDispatcher_unregisterTimers(this.h, object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisteredTimers(object *QObject) []QAbstractEventDispatcher__TimerInfo {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(object)
	var _ma C.struct_miqt_array = C.QAbstractEventDispatcher_registeredTimers(this.h, object.cPointer())
	_ret := make([]QAbstractEventDispatcher__TimerInfo, int(_ma.len))
	_outCast := unsafe.Slice((**C.QAbstractEventDispatcher__TimerInfo)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQAbstractEventDispatcher__TimerInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QAbstractEventDispatcher) RemainingTime(timerId int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAbstractEventDispatcher_remainingTime(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) WakeUp() {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher_wakeUp(this.h)
}

func (this *QAbstractEventDispatcher) Interrupt() {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher_interrupt(this.h)
}

func (this *QAbstractEventDispatcher) StartingUp() {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher_startingUp(this.h)
}

func (this *QAbstractEventDispatcher) ClosingDown() {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher_closingDown(this.h)
}

func (this *QAbstractEventDispatcher) InstallNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(filterObj)
	C.QAbstractEventDispatcher_installNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QAbstractEventDispatcher) RemoveNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(filterObj)
	C.QAbstractEventDispatcher_removeNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QAbstractEventDispatcher) FilterNativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	defer runtime.KeepAlive(this)
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))
	return (bool)(C.QAbstractEventDispatcher_filterNativeEvent(this.h, eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))
}

func (this *QAbstractEventDispatcher) AboutToBlock() {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher_aboutToBlock(this.h)
}
func (this *QAbstractEventDispatcher) OnAboutToBlock(slot func()) {
	C.QAbstractEventDispatcher_connect_aboutToBlock(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock
func miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractEventDispatcher) Awake() {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher_awake(this.h)
}
func (this *QAbstractEventDispatcher) OnAwake(slot func()) {
	C.QAbstractEventDispatcher_connect_awake(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_awake
func miqt_exec_callback_QAbstractEventDispatcher_awake(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_InstanceWithThread(thread *QThread) *QAbstractEventDispatcher {
	defer runtime.KeepAlive(thread)
	return newQAbstractEventDispatcher(C.QAbstractEventDispatcher_instanceWithThread(thread.cPointer()))
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher) Delete() {
	C.QAbstractEventDispatcher_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAbstractEventDispatcher) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractEventDispatcher_delete((*C.QAbstractEventDispatcher)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAbstractEventDispatcher__TimerInfo struct {
	h  *C.QAbstractEventDispatcher__TimerInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractEventDispatcher__TimerInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQAbstractEventDispatcher__TimerInfo((*C.QAbstractEventDispatcher__TimerInfo)(h))
}

// NewQAbstractEventDispatcher__TimerInfo constructs a new QAbstractEventDispatcher::TimerInfo object.
func NewQAbstractEventDispatcher__TimerInfo(id int, i int, t TimerType) *QAbstractEventDispatcher__TimerInfo {

	return newQAbstractEventDispatcher__TimerInfo(C.QAbstractEventDispatcher__TimerInfo_new((C.int)(id), (C.int)(i), (C.int)(t)))
}

func (this *QAbstractEventDispatcher__TimerInfo) TimerId() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAbstractEventDispatcher__TimerInfo_timerId(this.h))
}

func (this *QAbstractEventDispatcher__TimerInfo) SetTimerId(timerId int) {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher__TimerInfo_setTimerId(this.h, (C.int)(timerId))
}

func (this *QAbstractEventDispatcher__TimerInfo) Interval() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAbstractEventDispatcher__TimerInfo_interval(this.h))
}

func (this *QAbstractEventDispatcher__TimerInfo) SetInterval(interval int) {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher__TimerInfo_setInterval(this.h, (C.int)(interval))
}

func (this *QAbstractEventDispatcher__TimerInfo) TimerType() TimerType {
	defer runtime.KeepAlive(this)
	return (TimerType)(C.QAbstractEventDispatcher__TimerInfo_timerType(this.h))
}

func (this *QAbstractEventDispatcher__TimerInfo) SetTimerType(timerType TimerType) {
	defer runtime.KeepAlive(this)
	C.QAbstractEventDispatcher__TimerInfo_setTimerType(this.h, (C.int)(timerType))
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher__TimerInfo) Delete() {
	C.QAbstractEventDispatcher__TimerInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAbstractEventDispatcher__TimerInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractEventDispatcher__TimerInfo_delete((*C.QAbstractEventDispatcher__TimerInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}
