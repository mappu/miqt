package qt

/*

#include "gen_qelapsedtimer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QElapsedTimer__ClockType int

const (
	QElapsedTimer__SystemTime         QElapsedTimer__ClockType = 0
	QElapsedTimer__MonotonicClock     QElapsedTimer__ClockType = 1
	QElapsedTimer__TickCounter        QElapsedTimer__ClockType = 2
	QElapsedTimer__MachAbsoluteTime   QElapsedTimer__ClockType = 3
	QElapsedTimer__PerformanceCounter QElapsedTimer__ClockType = 4
)

type QElapsedTimer struct {
	h  *C.QElapsedTimer
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QElapsedTimer) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QElapsedTimer) cPointer() *C.QElapsedTimer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QElapsedTimer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQElapsedTimer constructs the type using only CGO pointers.
func newQElapsedTimer(h *C.QElapsedTimer) *QElapsedTimer {
	if h == nil {
		return nil
	}

	return &QElapsedTimer{h: h}
}

// UnsafeNewQElapsedTimer constructs the type using only unsafe pointers.
func UnsafeNewQElapsedTimer(h unsafe.Pointer) *QElapsedTimer {
	return newQElapsedTimer((*C.QElapsedTimer)(h))
}

// NewQElapsedTimer constructs a new QElapsedTimer object.
func NewQElapsedTimer() *QElapsedTimer {

	return newQElapsedTimer(C.QElapsedTimer_new())
}

func QElapsedTimer_ClockType() QElapsedTimer__ClockType {
	return (QElapsedTimer__ClockType)(C.QElapsedTimer_clockType())
}

func QElapsedTimer_IsMonotonic() bool {
	return (bool)(C.QElapsedTimer_isMonotonic())
}

func (this *QElapsedTimer) Start() {
	defer runtime.KeepAlive(this)
	C.QElapsedTimer_start(this.h)
}

func (this *QElapsedTimer) Restart() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QElapsedTimer_restart(this.h))
}

func (this *QElapsedTimer) Invalidate() {
	defer runtime.KeepAlive(this)
	C.QElapsedTimer_invalidate(this.h)
}

func (this *QElapsedTimer) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QElapsedTimer_isValid(this.h))
}

func (this *QElapsedTimer) NsecsElapsed() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QElapsedTimer_nsecsElapsed(this.h))
}

func (this *QElapsedTimer) Elapsed() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QElapsedTimer_elapsed(this.h))
}

func (this *QElapsedTimer) HasExpired(timeout int64) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QElapsedTimer_hasExpired(this.h, (C.longlong)(timeout)))
}

func (this *QElapsedTimer) MsecsSinceReference() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QElapsedTimer_msecsSinceReference(this.h))
}

func (this *QElapsedTimer) MsecsTo(other *QElapsedTimer) int64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (int64)(C.QElapsedTimer_msecsTo(this.h, other.cPointer()))
}

func (this *QElapsedTimer) SecsTo(other *QElapsedTimer) int64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (int64)(C.QElapsedTimer_secsTo(this.h, other.cPointer()))
}

func (this *QElapsedTimer) OperatorEqual(other *QElapsedTimer) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QElapsedTimer_operatorEqual(this.h, other.cPointer()))
}

func (this *QElapsedTimer) OperatorNotEqual(other *QElapsedTimer) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QElapsedTimer_operatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QElapsedTimer) Delete() {
	C.QElapsedTimer_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QElapsedTimer) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QElapsedTimer_delete((*C.QElapsedTimer)(gc[0]))
	})
	this.miqtSetGC(gc)
}
