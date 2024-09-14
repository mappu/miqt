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

func newQAbstractEventDispatcher(h *C.QAbstractEventDispatcher) *QAbstractEventDispatcher {
	if h == nil {
		return nil
	}
	return &QAbstractEventDispatcher{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractEventDispatcher_U(h unsafe.Pointer) *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher((*C.QAbstractEventDispatcher)(h))
}

func (this *QAbstractEventDispatcher) MetaObject() *QMetaObject {
	_ret := C.QAbstractEventDispatcher_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QAbstractEventDispatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractEventDispatcher_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractEventDispatcher_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractEventDispatcher_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractEventDispatcher_Instance() *QAbstractEventDispatcher {
	_ret := C.QAbstractEventDispatcher_Instance()
	return newQAbstractEventDispatcher_U(unsafe.Pointer(_ret))
}

func (this *QAbstractEventDispatcher) ProcessEvents(flags int) bool {
	_ret := C.QAbstractEventDispatcher_ProcessEvents(this.h, (C.int)(flags))
	return (bool)(_ret)
}

func (this *QAbstractEventDispatcher) HasPendingEvents() bool {
	_ret := C.QAbstractEventDispatcher_HasPendingEvents(this.h)
	return (bool)(_ret)
}

func (this *QAbstractEventDispatcher) RegisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_RegisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_UnregisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) RegisterTimer(interval int, timerType TimerType, object *QObject) int {
	_ret := C.QAbstractEventDispatcher_RegisterTimer(this.h, (C.int)(interval), (C.uintptr_t)(timerType), object.cPointer())
	return (int)(_ret)
}

func (this *QAbstractEventDispatcher) RegisterTimer2(timerId int, interval int, timerType TimerType, object *QObject) {
	C.QAbstractEventDispatcher_RegisterTimer2(this.h, (C.int)(timerId), (C.int)(interval), (C.uintptr_t)(timerType), object.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterTimer(timerId int) bool {
	_ret := C.QAbstractEventDispatcher_UnregisterTimer(this.h, (C.int)(timerId))
	return (bool)(_ret)
}

func (this *QAbstractEventDispatcher) UnregisterTimers(object *QObject) bool {
	_ret := C.QAbstractEventDispatcher_UnregisterTimers(this.h, object.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractEventDispatcher) RegisteredTimers(object *QObject) []QAbstractEventDispatcher__TimerInfo {
	var _ma *C.struct_miqt_array = C.QAbstractEventDispatcher_RegisteredTimers(this.h, object.cPointer())
	_ret := make([]QAbstractEventDispatcher__TimerInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractEventDispatcher__TimerInfo)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQAbstractEventDispatcher__TimerInfo(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAbstractEventDispatcher) RemainingTime(timerId int) int {
	_ret := C.QAbstractEventDispatcher_RemainingTime(this.h, (C.int)(timerId))
	return (int)(_ret)
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

func (this *QAbstractEventDispatcher) AboutToBlock() {
	C.QAbstractEventDispatcher_AboutToBlock(this.h)
}
func (this *QAbstractEventDispatcher) OnAboutToBlock(slot func()) {
	C.QAbstractEventDispatcher_connect_AboutToBlock(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractEventDispatcher_AboutToBlock
func miqt_exec_callback_QAbstractEventDispatcher_AboutToBlock(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractEventDispatcher) Awake() {
	C.QAbstractEventDispatcher_Awake(this.h)
}
func (this *QAbstractEventDispatcher) OnAwake(slot func()) {
	C.QAbstractEventDispatcher_connect_Awake(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractEventDispatcher_Awake
func miqt_exec_callback_QAbstractEventDispatcher_Awake(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
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
	var _ms *C.struct_miqt_string = C.QAbstractEventDispatcher_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractEventDispatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractEventDispatcher_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractEventDispatcher_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractEventDispatcher_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractEventDispatcher_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractEventDispatcher_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractEventDispatcher_Instance1(thread *QThread) *QAbstractEventDispatcher {
	_ret := C.QAbstractEventDispatcher_Instance1(thread.cPointer())
	return newQAbstractEventDispatcher_U(unsafe.Pointer(_ret))
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher) Delete() {
	C.QAbstractEventDispatcher_Delete(this.h)
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

func newQAbstractEventDispatcher__TimerInfo(h *C.QAbstractEventDispatcher__TimerInfo) *QAbstractEventDispatcher__TimerInfo {
	if h == nil {
		return nil
	}
	return &QAbstractEventDispatcher__TimerInfo{h: h}
}

func newQAbstractEventDispatcher__TimerInfo_U(h unsafe.Pointer) *QAbstractEventDispatcher__TimerInfo {
	return newQAbstractEventDispatcher__TimerInfo((*C.QAbstractEventDispatcher__TimerInfo)(h))
}

// NewQAbstractEventDispatcher__TimerInfo constructs a new QAbstractEventDispatcher::TimerInfo object.
func NewQAbstractEventDispatcher__TimerInfo(id int, i int, t TimerType) *QAbstractEventDispatcher__TimerInfo {
	ret := C.QAbstractEventDispatcher__TimerInfo_new((C.int)(id), (C.int)(i), (C.uintptr_t)(t))
	return newQAbstractEventDispatcher__TimerInfo(ret)
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher__TimerInfo) Delete() {
	C.QAbstractEventDispatcher__TimerInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractEventDispatcher__TimerInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractEventDispatcher__TimerInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
