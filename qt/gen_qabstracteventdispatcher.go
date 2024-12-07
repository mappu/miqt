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

func (this *QAbstractEventDispatcher) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractEventDispatcher_MetaObject(this.h))
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

func QAbstractEventDispatcher_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Instance() *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QAbstractEventDispatcher_Instance(), nil)
}

func (this *QAbstractEventDispatcher) ProcessEvents(flags QEventLoop__ProcessEventsFlag) bool {
	return (bool)(C.QAbstractEventDispatcher_ProcessEvents(this.h, (C.int)(flags)))
}

func (this *QAbstractEventDispatcher) HasPendingEvents() bool {
	return (bool)(C.QAbstractEventDispatcher_HasPendingEvents(this.h))
}

func (this *QAbstractEventDispatcher) RegisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_RegisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_UnregisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) RegisterTimer(interval int, timerType TimerType, object *QObject) int {
	return (int)(C.QAbstractEventDispatcher_RegisterTimer(this.h, (C.int)(interval), (C.int)(timerType), object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisterTimer2(timerId int, interval int, timerType TimerType, object *QObject) {
	C.QAbstractEventDispatcher_RegisterTimer2(this.h, (C.int)(timerId), (C.int)(interval), (C.int)(timerType), object.cPointer())
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
		_lv_goptr := newQAbstractEventDispatcher__TimerInfo(_outCast[i])
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

func (this *QAbstractEventDispatcher) Flush() {
	C.QAbstractEventDispatcher_Flush(this.h)
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

func (this *QAbstractEventDispatcher) FilterNativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))
	return (bool)(C.QAbstractEventDispatcher_FilterNativeEvent(this.h, eventType_alias, message, (*C.long)(unsafe.Pointer(result))))
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

func QAbstractEventDispatcher_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Instance1(thread *QThread) *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QAbstractEventDispatcher_Instance1(thread.cPointer()), nil)
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
