package qt

/*

#include "gen_qthread.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QThread struct {
	h *C.QThread
	*QObject
}

func (this *QThread) cPointer() *C.QThread {
	if this == nil {
		return nil
	}
	return this.h
}

func newQThread(h *C.QThread) *QThread {
	if h == nil {
		return nil
	}
	return &QThread{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQThread_U(h unsafe.Pointer) *QThread {
	return newQThread((*C.QThread)(h))
}

// NewQThread constructs a new QThread object.
func NewQThread() *QThread {
	ret := C.QThread_new()
	return newQThread(ret)
}

// NewQThread2 constructs a new QThread object.
func NewQThread2(parent *QObject) *QThread {
	ret := C.QThread_new2(parent.cPointer())
	return newQThread(ret)
}

func (this *QThread) MetaObject() *QMetaObject {
	ret := C.QThread_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QThread_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThread_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThread_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThread_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThread_CurrentThread() *QThread {
	ret := C.QThread_CurrentThread()
	return newQThread_U(unsafe.Pointer(ret))
}

func QThread_IdealThreadCount() int {
	ret := C.QThread_IdealThreadCount()
	return (int)(ret)
}

func QThread_YieldCurrentThread() {
	C.QThread_YieldCurrentThread()
}

func (this *QThread) SetPriority(priority uintptr) {
	C.QThread_SetPriority(this.h, (C.uintptr_t)(priority))
}

func (this *QThread) Priority() uintptr {
	ret := C.QThread_Priority(this.h)
	return (uintptr)(ret)
}

func (this *QThread) IsFinished() bool {
	ret := C.QThread_IsFinished(this.h)
	return (bool)(ret)
}

func (this *QThread) IsRunning() bool {
	ret := C.QThread_IsRunning(this.h)
	return (bool)(ret)
}

func (this *QThread) RequestInterruption() {
	C.QThread_RequestInterruption(this.h)
}

func (this *QThread) IsInterruptionRequested() bool {
	ret := C.QThread_IsInterruptionRequested(this.h)
	return (bool)(ret)
}

func (this *QThread) SetStackSize(stackSize uint) {
	C.QThread_SetStackSize(this.h, (C.uint)(stackSize))
}

func (this *QThread) StackSize() uint {
	ret := C.QThread_StackSize(this.h)
	return (uint)(ret)
}

func (this *QThread) Exit() {
	C.QThread_Exit(this.h)
}

func (this *QThread) EventDispatcher() *QAbstractEventDispatcher {
	ret := C.QThread_EventDispatcher(this.h)
	return newQAbstractEventDispatcher_U(unsafe.Pointer(ret))
}

func (this *QThread) SetEventDispatcher(eventDispatcher *QAbstractEventDispatcher) {
	C.QThread_SetEventDispatcher(this.h, eventDispatcher.cPointer())
}

func (this *QThread) Event(event *QEvent) bool {
	ret := C.QThread_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func (this *QThread) LoopLevel() int {
	ret := C.QThread_LoopLevel(this.h)
	return (int)(ret)
}

func (this *QThread) Start() {
	C.QThread_Start(this.h)
}

func (this *QThread) Terminate() {
	C.QThread_Terminate(this.h)
}

func (this *QThread) Quit() {
	C.QThread_Quit(this.h)
}

func (this *QThread) Wait() bool {
	ret := C.QThread_Wait(this.h)
	return (bool)(ret)
}

func (this *QThread) WaitWithTime(time uint64) bool {
	ret := C.QThread_WaitWithTime(this.h, (C.ulong)(time))
	return (bool)(ret)
}

func QThread_Sleep(param1 uint64) {
	C.QThread_Sleep((C.ulong)(param1))
}

func QThread_Msleep(param1 uint64) {
	C.QThread_Msleep((C.ulong)(param1))
}

func QThread_Usleep(param1 uint64) {
	C.QThread_Usleep((C.ulong)(param1))
}

func QThread_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThread_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThread_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThread_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThread_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThread_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QThread_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QThread_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QThread) Exit1(retcode int) {
	C.QThread_Exit1(this.h, (C.int)(retcode))
}

func (this *QThread) Start1(param1 uintptr) {
	C.QThread_Start1(this.h, (C.uintptr_t)(param1))
}

func (this *QThread) Wait1(deadline QDeadlineTimer) bool {
	ret := C.QThread_Wait1(this.h, deadline.cPointer())
	return (bool)(ret)
}

func (this *QThread) Delete() {
	C.QThread_Delete(this.h)
}
