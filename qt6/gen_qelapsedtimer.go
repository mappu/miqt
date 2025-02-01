package qt6

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
	QElapsedTimer__MachAbsoluteTime   QElapsedTimer__ClockType = 2
	QElapsedTimer__PerformanceCounter QElapsedTimer__ClockType = 3
)

type QElapsedTimer struct {
	h *C.QElapsedTimer
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
	C.QElapsedTimer_start(this.h)
}

func (this *QElapsedTimer) Restart() int64 {
	return (int64)(C.QElapsedTimer_restart(this.h))
}

func (this *QElapsedTimer) Invalidate() {
	C.QElapsedTimer_invalidate(this.h)
}

func (this *QElapsedTimer) IsValid() bool {
	return (bool)(C.QElapsedTimer_isValid(this.h))
}

func (this *QElapsedTimer) NsecsElapsed() int64 {
	return (int64)(C.QElapsedTimer_nsecsElapsed(this.h))
}

func (this *QElapsedTimer) Elapsed() int64 {
	return (int64)(C.QElapsedTimer_elapsed(this.h))
}

func (this *QElapsedTimer) HasExpired(timeout int64) bool {
	return (bool)(C.QElapsedTimer_hasExpired(this.h, (C.longlong)(timeout)))
}

func (this *QElapsedTimer) MsecsSinceReference() int64 {
	return (int64)(C.QElapsedTimer_msecsSinceReference(this.h))
}

func (this *QElapsedTimer) MsecsTo(other *QElapsedTimer) int64 {
	return (int64)(C.QElapsedTimer_msecsTo(this.h, other.cPointer()))
}

func (this *QElapsedTimer) SecsTo(other *QElapsedTimer) int64 {
	return (int64)(C.QElapsedTimer_secsTo(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QElapsedTimer) Delete() {
	C.QElapsedTimer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QElapsedTimer) GoGC() {
	runtime.SetFinalizer(this, func(this *QElapsedTimer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
