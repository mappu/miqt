package qt

/*

#include "gen_qdeadlinetimer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDeadlineTimer__ForeverConstant int

const (
	QDeadlineTimer__Forever QDeadlineTimer__ForeverConstant = 0
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

func (this *QDeadlineTimer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDeadlineTimer(h *C.QDeadlineTimer) *QDeadlineTimer {
	if h == nil {
		return nil
	}
	return &QDeadlineTimer{h: h}
}

func UnsafeNewQDeadlineTimer(h unsafe.Pointer) *QDeadlineTimer {
	return newQDeadlineTimer((*C.QDeadlineTimer)(h))
}

// NewQDeadlineTimer constructs a new QDeadlineTimer object.
func NewQDeadlineTimer() *QDeadlineTimer {
	ret := C.QDeadlineTimer_new()
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer2 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer2(param1 QDeadlineTimer__ForeverConstant) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new2((C.int)(param1))
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
func NewQDeadlineTimer5(type_ TimerType) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new5((C.int)(type_))
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer6 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer6(param1 QDeadlineTimer__ForeverConstant, type_ TimerType) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new6((C.int)(param1), (C.int)(type_))
	return newQDeadlineTimer(ret)
}

// NewQDeadlineTimer7 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer7(msecs int64, typeVal TimerType) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new7((C.longlong)(msecs), (C.int)(typeVal))
	return newQDeadlineTimer(ret)
}

func (this *QDeadlineTimer) Swap(other *QDeadlineTimer) {
	C.QDeadlineTimer_Swap(this.h, other.cPointer())
}

func (this *QDeadlineTimer) IsForever() bool {
	return (bool)(C.QDeadlineTimer_IsForever(this.h))
}

func (this *QDeadlineTimer) HasExpired() bool {
	return (bool)(C.QDeadlineTimer_HasExpired(this.h))
}

func (this *QDeadlineTimer) TimerType() TimerType {
	return (TimerType)(C.QDeadlineTimer_TimerType(this.h))
}

func (this *QDeadlineTimer) SetTimerType(typeVal TimerType) {
	C.QDeadlineTimer_SetTimerType(this.h, (C.int)(typeVal))
}

func (this *QDeadlineTimer) RemainingTime() int64 {
	return (int64)(C.QDeadlineTimer_RemainingTime(this.h))
}

func (this *QDeadlineTimer) RemainingTimeNSecs() int64 {
	return (int64)(C.QDeadlineTimer_RemainingTimeNSecs(this.h))
}

func (this *QDeadlineTimer) SetRemainingTime(msecs int64) {
	C.QDeadlineTimer_SetRemainingTime(this.h, (C.longlong)(msecs))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime(secs int64) {
	C.QDeadlineTimer_SetPreciseRemainingTime(this.h, (C.longlong)(secs))
}

func (this *QDeadlineTimer) Deadline() int64 {
	return (int64)(C.QDeadlineTimer_Deadline(this.h))
}

func (this *QDeadlineTimer) DeadlineNSecs() int64 {
	return (int64)(C.QDeadlineTimer_DeadlineNSecs(this.h))
}

func (this *QDeadlineTimer) SetDeadline(msecs int64) {
	C.QDeadlineTimer_SetDeadline(this.h, (C.longlong)(msecs))
}

func (this *QDeadlineTimer) SetPreciseDeadline(secs int64) {
	C.QDeadlineTimer_SetPreciseDeadline(this.h, (C.longlong)(secs))
}

func QDeadlineTimer_AddNSecs(dt QDeadlineTimer, nsecs int64) *QDeadlineTimer {
	_ret := C.QDeadlineTimer_AddNSecs(dt.cPointer(), (C.longlong)(nsecs))
	_goptr := newQDeadlineTimer(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDeadlineTimer_Current() *QDeadlineTimer {
	_ret := C.QDeadlineTimer_Current()
	_goptr := newQDeadlineTimer(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDeadlineTimer) OperatorPlusAssign(msecs int64) *QDeadlineTimer {
	return UnsafeNewQDeadlineTimer(unsafe.Pointer(C.QDeadlineTimer_OperatorPlusAssign(this.h, (C.longlong)(msecs))))
}

func (this *QDeadlineTimer) OperatorMinusAssign(msecs int64) *QDeadlineTimer {
	return UnsafeNewQDeadlineTimer(unsafe.Pointer(C.QDeadlineTimer_OperatorMinusAssign(this.h, (C.longlong)(msecs))))
}

func (this *QDeadlineTimer) OperatorAssign(param1 *QDeadlineTimer) {
	C.QDeadlineTimer_OperatorAssign(this.h, param1.cPointer())
}

func (this *QDeadlineTimer) SetRemainingTime2(msecs int64, typeVal TimerType) {
	C.QDeadlineTimer_SetRemainingTime2(this.h, (C.longlong)(msecs), (C.int)(typeVal))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime2(secs int64, nsecs int64) {
	C.QDeadlineTimer_SetPreciseRemainingTime2(this.h, (C.longlong)(secs), (C.longlong)(nsecs))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime3(secs int64, nsecs int64, typeVal TimerType) {
	C.QDeadlineTimer_SetPreciseRemainingTime3(this.h, (C.longlong)(secs), (C.longlong)(nsecs), (C.int)(typeVal))
}

func (this *QDeadlineTimer) SetDeadline2(msecs int64, timerType TimerType) {
	C.QDeadlineTimer_SetDeadline2(this.h, (C.longlong)(msecs), (C.int)(timerType))
}

func (this *QDeadlineTimer) SetPreciseDeadline2(secs int64, nsecs int64) {
	C.QDeadlineTimer_SetPreciseDeadline2(this.h, (C.longlong)(secs), (C.longlong)(nsecs))
}

func (this *QDeadlineTimer) SetPreciseDeadline3(secs int64, nsecs int64, typeVal TimerType) {
	C.QDeadlineTimer_SetPreciseDeadline3(this.h, (C.longlong)(secs), (C.longlong)(nsecs), (C.int)(typeVal))
}

func QDeadlineTimer_Current1(timerType TimerType) *QDeadlineTimer {
	_ret := C.QDeadlineTimer_Current1((C.int)(timerType))
	_goptr := newQDeadlineTimer(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDeadlineTimer) Delete() {
	C.QDeadlineTimer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDeadlineTimer) GoGC() {
	runtime.SetFinalizer(this, func(this *QDeadlineTimer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
