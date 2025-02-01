package qt6

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

// newQDeadlineTimer constructs the type using only CGO pointers.
func newQDeadlineTimer(h *C.QDeadlineTimer) *QDeadlineTimer {
	if h == nil {
		return nil
	}

	return &QDeadlineTimer{h: h}
}

// UnsafeNewQDeadlineTimer constructs the type using only unsafe pointers.
func UnsafeNewQDeadlineTimer(h unsafe.Pointer) *QDeadlineTimer {
	return newQDeadlineTimer((*C.QDeadlineTimer)(h))
}

// NewQDeadlineTimer constructs a new QDeadlineTimer object.
func NewQDeadlineTimer() *QDeadlineTimer {

	return newQDeadlineTimer(C.QDeadlineTimer_new())
}

// NewQDeadlineTimer2 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer2(param1 QDeadlineTimer__ForeverConstant) *QDeadlineTimer {

	return newQDeadlineTimer(C.QDeadlineTimer_new2((C.int)(param1)))
}

// NewQDeadlineTimer3 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer3(msecs int64) *QDeadlineTimer {

	return newQDeadlineTimer(C.QDeadlineTimer_new3((C.longlong)(msecs)))
}

// NewQDeadlineTimer4 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer4(param1 *QDeadlineTimer) *QDeadlineTimer {

	return newQDeadlineTimer(C.QDeadlineTimer_new4(param1.cPointer()))
}

// NewQDeadlineTimer5 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer5(type_ TimerType) *QDeadlineTimer {

	return newQDeadlineTimer(C.QDeadlineTimer_new5((C.int)(type_)))
}

// NewQDeadlineTimer6 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer6(param1 QDeadlineTimer__ForeverConstant, type_ TimerType) *QDeadlineTimer {

	return newQDeadlineTimer(C.QDeadlineTimer_new6((C.int)(param1), (C.int)(type_)))
}

// NewQDeadlineTimer7 constructs a new QDeadlineTimer object.
func NewQDeadlineTimer7(msecs int64, typeVal TimerType) *QDeadlineTimer {

	return newQDeadlineTimer(C.QDeadlineTimer_new7((C.longlong)(msecs), (C.int)(typeVal)))
}

func (this *QDeadlineTimer) Swap(other *QDeadlineTimer) {
	C.QDeadlineTimer_swap(this.h, other.cPointer())
}

func (this *QDeadlineTimer) IsForever() bool {
	return (bool)(C.QDeadlineTimer_isForever(this.h))
}

func (this *QDeadlineTimer) HasExpired() bool {
	return (bool)(C.QDeadlineTimer_hasExpired(this.h))
}

func (this *QDeadlineTimer) TimerType() TimerType {
	return (TimerType)(C.QDeadlineTimer_timerType(this.h))
}

func (this *QDeadlineTimer) SetTimerType(typeVal TimerType) {
	C.QDeadlineTimer_setTimerType(this.h, (C.int)(typeVal))
}

func (this *QDeadlineTimer) RemainingTime() int64 {
	return (int64)(C.QDeadlineTimer_remainingTime(this.h))
}

func (this *QDeadlineTimer) RemainingTimeNSecs() int64 {
	return (int64)(C.QDeadlineTimer_remainingTimeNSecs(this.h))
}

func (this *QDeadlineTimer) SetRemainingTime(msecs int64) {
	C.QDeadlineTimer_setRemainingTime(this.h, (C.longlong)(msecs))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime(secs int64) {
	C.QDeadlineTimer_setPreciseRemainingTime(this.h, (C.longlong)(secs))
}

func (this *QDeadlineTimer) Deadline() int64 {
	return (int64)(C.QDeadlineTimer_deadline(this.h))
}

func (this *QDeadlineTimer) DeadlineNSecs() int64 {
	return (int64)(C.QDeadlineTimer_deadlineNSecs(this.h))
}

func (this *QDeadlineTimer) SetDeadline(msecs int64) {
	C.QDeadlineTimer_setDeadline(this.h, (C.longlong)(msecs))
}

func (this *QDeadlineTimer) SetPreciseDeadline(secs int64) {
	C.QDeadlineTimer_setPreciseDeadline(this.h, (C.longlong)(secs))
}

func QDeadlineTimer_AddNSecs(dt QDeadlineTimer, nsecs int64) *QDeadlineTimer {
	_goptr := newQDeadlineTimer(C.QDeadlineTimer_addNSecs(dt.cPointer(), (C.longlong)(nsecs)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDeadlineTimer_Current() *QDeadlineTimer {
	_goptr := newQDeadlineTimer(C.QDeadlineTimer_current())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDeadlineTimer) OperatorPlusAssign(msecs int64) *QDeadlineTimer {
	return newQDeadlineTimer(C.QDeadlineTimer_operatorPlusAssign(this.h, (C.longlong)(msecs)))
}

func (this *QDeadlineTimer) OperatorMinusAssign(msecs int64) *QDeadlineTimer {
	return newQDeadlineTimer(C.QDeadlineTimer_operatorMinusAssign(this.h, (C.longlong)(msecs)))
}

func (this *QDeadlineTimer) OperatorAssign(param1 *QDeadlineTimer) {
	C.QDeadlineTimer_operatorAssign(this.h, param1.cPointer())
}

func (this *QDeadlineTimer) SetRemainingTime2(msecs int64, typeVal TimerType) {
	C.QDeadlineTimer_setRemainingTime2(this.h, (C.longlong)(msecs), (C.int)(typeVal))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime2(secs int64, nsecs int64) {
	C.QDeadlineTimer_setPreciseRemainingTime2(this.h, (C.longlong)(secs), (C.longlong)(nsecs))
}

func (this *QDeadlineTimer) SetPreciseRemainingTime3(secs int64, nsecs int64, typeVal TimerType) {
	C.QDeadlineTimer_setPreciseRemainingTime3(this.h, (C.longlong)(secs), (C.longlong)(nsecs), (C.int)(typeVal))
}

func (this *QDeadlineTimer) SetDeadline2(msecs int64, timerType TimerType) {
	C.QDeadlineTimer_setDeadline2(this.h, (C.longlong)(msecs), (C.int)(timerType))
}

func (this *QDeadlineTimer) SetPreciseDeadline2(secs int64, nsecs int64) {
	C.QDeadlineTimer_setPreciseDeadline2(this.h, (C.longlong)(secs), (C.longlong)(nsecs))
}

func (this *QDeadlineTimer) SetPreciseDeadline3(secs int64, nsecs int64, typeVal TimerType) {
	C.QDeadlineTimer_setPreciseDeadline3(this.h, (C.longlong)(secs), (C.longlong)(nsecs), (C.int)(typeVal))
}

func QDeadlineTimer_Current1(timerType TimerType) *QDeadlineTimer {
	_goptr := newQDeadlineTimer(C.QDeadlineTimer_current1((C.int)(timerType)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDeadlineTimer) Delete() {
	C.QDeadlineTimer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDeadlineTimer) GoGC() {
	runtime.SetFinalizer(this, func(this *QDeadlineTimer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
