package qt

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
	h *C.QAbstractEventDispatcher
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
	return newQMetaObject(C.QAbstractEventDispatcher_metaObject(this.h))
}

func (this *QAbstractEventDispatcher) Metacast(param1 string) unsafe.Pointer {
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

func QAbstractEventDispatcher_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Instance() *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QAbstractEventDispatcher_instance())
}

func (this *QAbstractEventDispatcher) ProcessEvents(flags QEventLoop__ProcessEventsFlag) bool {
	return (bool)(C.QAbstractEventDispatcher_processEvents(this.h, (C.int)(flags)))
}

func (this *QAbstractEventDispatcher) HasPendingEvents() bool {
	return (bool)(C.QAbstractEventDispatcher_hasPendingEvents(this.h))
}

func (this *QAbstractEventDispatcher) RegisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_registerSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_unregisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) RegisterTimer(interval int, timerType TimerType, object *QObject) int {
	return (int)(C.QAbstractEventDispatcher_registerTimer(this.h, (C.int)(interval), (C.int)(timerType), object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisterTimer2(timerId int, interval int, timerType TimerType, object *QObject) {
	C.QAbstractEventDispatcher_registerTimer2(this.h, (C.int)(timerId), (C.int)(interval), (C.int)(timerType), object.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterTimer(timerId int) bool {
	return (bool)(C.QAbstractEventDispatcher_unregisterTimer(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) UnregisterTimers(object *QObject) bool {
	return (bool)(C.QAbstractEventDispatcher_unregisterTimers(this.h, object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisteredTimers(object *QObject) []QAbstractEventDispatcher__TimerInfo {
	var _ma C.struct_miqt_array = C.QAbstractEventDispatcher_registeredTimers(this.h, object.cPointer())
	_ret := make([]QAbstractEventDispatcher__TimerInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractEventDispatcher__TimerInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQAbstractEventDispatcher__TimerInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QAbstractEventDispatcher) RemainingTime(timerId int) int {
	return (int)(C.QAbstractEventDispatcher_remainingTime(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) WakeUp() {
	C.QAbstractEventDispatcher_wakeUp(this.h)
}

func (this *QAbstractEventDispatcher) Interrupt() {
	C.QAbstractEventDispatcher_interrupt(this.h)
}

func (this *QAbstractEventDispatcher) Flush() {
	C.QAbstractEventDispatcher_flush(this.h)
}

func (this *QAbstractEventDispatcher) StartingUp() {
	C.QAbstractEventDispatcher_startingUp(this.h)
}

func (this *QAbstractEventDispatcher) ClosingDown() {
	C.QAbstractEventDispatcher_closingDown(this.h)
}

func (this *QAbstractEventDispatcher) InstallNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QAbstractEventDispatcher_installNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QAbstractEventDispatcher) RemoveNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QAbstractEventDispatcher_removeNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QAbstractEventDispatcher) FilterNativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))
	return (bool)(C.QAbstractEventDispatcher_filterNativeEvent(this.h, eventType_alias, message, (*C.long)(unsafe.Pointer(result))))
}

func (this *QAbstractEventDispatcher) AboutToBlock() {
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

func QAbstractEventDispatcher_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_InstanceWithThread(thread *QThread) *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QAbstractEventDispatcher_instanceWithThread(thread.cPointer()))
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher) Delete() {
	C.QAbstractEventDispatcher_delete(this.h)
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
	h *C.QAbstractEventDispatcher__TimerInfo
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

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher__TimerInfo) Delete() {
	C.QAbstractEventDispatcher__TimerInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractEventDispatcher__TimerInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractEventDispatcher__TimerInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
