package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qabstracteventdispatcher.h"
#include <stdlib.h>

*/
import "C"

import (
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
	return &QAbstractEventDispatcher{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractEventDispatcher_U(h unsafe.Pointer) *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher((*C.QAbstractEventDispatcher)(h))
}

func (this *QAbstractEventDispatcher) MetaObject() *QMetaObject {
	ret := C.QAbstractEventDispatcher_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractEventDispatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractEventDispatcher_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractEventDispatcher_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractEventDispatcher_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractEventDispatcher_Instance() *QAbstractEventDispatcher {
	ret := C.QAbstractEventDispatcher_Instance()
	return newQAbstractEventDispatcher_U(unsafe.Pointer(ret))
}

func (this *QAbstractEventDispatcher) HasPendingEvents() bool {
	ret := C.QAbstractEventDispatcher_HasPendingEvents(this.h)
	return (bool)(ret)
}

func (this *QAbstractEventDispatcher) RegisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_RegisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_UnregisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterTimer(timerId int) bool {
	ret := C.QAbstractEventDispatcher_UnregisterTimer(this.h, (C.int)(timerId))
	return (bool)(ret)
}

func (this *QAbstractEventDispatcher) UnregisterTimers(object *QObject) bool {
	ret := C.QAbstractEventDispatcher_UnregisterTimers(this.h, object.cPointer())
	return (bool)(ret)
}

func (this *QAbstractEventDispatcher) RemainingTime(timerId int) int {
	ret := C.QAbstractEventDispatcher_RemainingTime(this.h, (C.int)(timerId))
	return (int)(ret)
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
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractEventDispatcher_connect_AboutToBlock(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractEventDispatcher) Awake() {
	C.QAbstractEventDispatcher_Awake(this.h)
}

func (this *QAbstractEventDispatcher) OnAwake(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractEventDispatcher_connect_Awake(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAbstractEventDispatcher_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractEventDispatcher_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractEventDispatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractEventDispatcher_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractEventDispatcher_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractEventDispatcher_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractEventDispatcher_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractEventDispatcher_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractEventDispatcher_Instance1(thread *QThread) *QAbstractEventDispatcher {
	ret := C.QAbstractEventDispatcher_Instance1(thread.cPointer())
	return newQAbstractEventDispatcher_U(unsafe.Pointer(ret))
}

func (this *QAbstractEventDispatcher) Delete() {
	C.QAbstractEventDispatcher_Delete(this.h)
}
