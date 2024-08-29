package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qdeadlinetimer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDeadlineTimer struct {
	h *C.QDeadlineTimer
}

func (this *QDeadlineTimer) cPointer() *C.QDeadlineTimer {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDeadlineTimer(h *C.QDeadlineTimer) *QDeadlineTimer {
	return &QDeadlineTimer{h: h}
}

func newQDeadlineTimer_U(h unsafe.Pointer) *QDeadlineTimer {
	return newQDeadlineTimer((*C.QDeadlineTimer)(h))
}

// NewQDeadlineTimer constructs a new QDeadlineTimer object.
func NewQDeadlineTimer() *QDeadlineTimer {
	ret := C.QDeadlineTimer_new()
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer2 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer2(param1 uintptr) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new2((C.uintptr_t)(param1))
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer3 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer3(msecs int64) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new3((C.longlong)(msecs))
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer4 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer4(param1 *QDeadlineTimer) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new4(param1.cPointer())
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer5 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer5(type_ uintptr) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new5((C.uintptr_t)(type_))
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer6 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer6(param1 uintptr, type_ uintptr) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new6((C.uintptr_t)(param1), (C.uintptr_t)(type_))
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer7 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer7(msecs int64, typeVal uintptr) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new7((C.longlong)(msecs), (C.uintptr_t)(typeVal))
	return newQDeadlineTimer(ret)
}

func (this *QDeadlineTimer) Swap(other *QDeadlineTimer) {
	C.QDeadlineTimer_Swap(this.h, other.cPointer())
}

func (this *QDeadlineTimer) IsForever() bool {
	ret := C.QDeadlineTimer_IsForever(this.h)
	return (bool)(ret)
}

func (this *QDeadlineTimer) HasExpired() bool {
	ret := C.QDeadlineTimer_HasExpired(this.h)
	return (bool)(ret)
}

func (this *QDeadlineTimer) TimerType() uintptr {
	ret := C.QDeadlineTimer_TimerType(this.h)
	return (uintptr)(ret)
}

func (this *QDeadlineTimer) SetTimerType(typeVal uintptr) {
	C.QDeadlineTimer_SetTimerType(this.h, (C.uintptr_t)(typeVal))
}

func (this *QDeadlineTimer) RemainingTime() int64 {
	ret := C.QDeadlineTimer_RemainingTime(this.h)
	return (int64)(ret)
}

func (this *QDeadlineTimer) RemainingTimeNSecs() int64 {
	ret := C.QDeadlineTimer_RemainingTimeNSecs(this.h)
	return (int64)(ret)
}

func (this *QDeadlineTimer) SetRemainingTime(msecs int64) {
	C.QDeadlineTimer_SetRemainingTime(this.h, (C.longlong)(msecs))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime(secs int64) {
	C.QDeadlineTimer_SetPreciseRemainingTime(this.h, (C.longlong)(secs))
}

func (this *QDeadlineTimer) Deadline() int64 {
	ret := C.QDeadlineTimer_Deadline(this.h)
	return (int64)(ret)
}

func (this *QDeadlineTimer) DeadlineNSecs() int64 {
	ret := C.QDeadlineTimer_DeadlineNSecs(this.h)
	return (int64)(ret)
}

func (this *QDeadlineTimer) SetDeadline(msecs int64) {
	C.QDeadlineTimer_SetDeadline(this.h, (C.longlong)(msecs))
}

func (this *QDeadlineTimer) SetPreciseDeadline(secs int64) {
	C.QDeadlineTimer_SetPreciseDeadline(this.h, (C.longlong)(secs))
}

func QDeadlineTimer_AddNSecs(dt QDeadlineTimer, nsecs int64) *QDeadlineTimer {
	ret := C.QDeadlineTimer_AddNSecs(dt.cPointer(), (C.longlong)(nsecs))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDeadlineTimer(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDeadlineTimer) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QDeadlineTimer_Current() *QDeadlineTimer {
	ret := C.QDeadlineTimer_Current()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDeadlineTimer(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDeadlineTimer) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDeadlineTimer) OperatorPlusAssign(msecs int64) *QDeadlineTimer {
	ret := C.QDeadlineTimer_OperatorPlusAssign(this.h, (C.longlong)(msecs))
	return newQDeadlineTimer_U(unsafe.Pointer(ret))
}

func (this *QDeadlineTimer) OperatorMinusAssign(msecs int64) *QDeadlineTimer {
	ret := C.QDeadlineTimer_OperatorMinusAssign(this.h, (C.longlong)(msecs))
	return newQDeadlineTimer_U(unsafe.Pointer(ret))
}

func (this *QDeadlineTimer) OperatorAssign(param1 *QDeadlineTimer) {
	C.QDeadlineTimer_OperatorAssign(this.h, param1.cPointer())
}

func (this *QDeadlineTimer) SetRemainingTime2(msecs int64, typeVal uintptr) {
	C.QDeadlineTimer_SetRemainingTime2(this.h, (C.longlong)(msecs), (C.uintptr_t)(typeVal))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime2(secs int64, nsecs int64) {
	C.QDeadlineTimer_SetPreciseRemainingTime2(this.h, (C.longlong)(secs), (C.longlong)(nsecs))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime3(secs int64, nsecs int64, typeVal uintptr) {
	C.QDeadlineTimer_SetPreciseRemainingTime3(this.h, (C.longlong)(secs), (C.longlong)(nsecs), (C.uintptr_t)(typeVal))
}

func (this *QDeadlineTimer) SetDeadline2(msecs int64, timerType uintptr) {
	C.QDeadlineTimer_SetDeadline2(this.h, (C.longlong)(msecs), (C.uintptr_t)(timerType))
}

func (this *QDeadlineTimer) SetPreciseDeadline2(secs int64, nsecs int64) {
	C.QDeadlineTimer_SetPreciseDeadline2(this.h, (C.longlong)(secs), (C.longlong)(nsecs))
}

func (this *QDeadlineTimer) SetPreciseDeadline3(secs int64, nsecs int64, typeVal uintptr) {
	C.QDeadlineTimer_SetPreciseDeadline3(this.h, (C.longlong)(secs), (C.longlong)(nsecs), (C.uintptr_t)(typeVal))
}

func QDeadlineTimer_Current1(timerType uintptr) *QDeadlineTimer {
	ret := C.QDeadlineTimer_Current1((C.uintptr_t)(timerType))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDeadlineTimer(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDeadlineTimer) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDeadlineTimer) Delete() {
	C.QDeadlineTimer_Delete(this.h)
}
