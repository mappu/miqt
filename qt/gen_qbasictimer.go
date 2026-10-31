package qt

/*

#include "gen_qbasictimer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBasicTimer struct {
	h  *C.QBasicTimer
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QBasicTimer) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QBasicTimer) cPointer() *C.QBasicTimer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBasicTimer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBasicTimer constructs the type using only CGO pointers.
func newQBasicTimer(h *C.QBasicTimer) *QBasicTimer {
	if h == nil {
		return nil
	}

	return &QBasicTimer{h: h}
}

// UnsafeNewQBasicTimer constructs the type using only unsafe pointers.
func UnsafeNewQBasicTimer(h unsafe.Pointer) *QBasicTimer {
	return newQBasicTimer((*C.QBasicTimer)(h))
}

// NewQBasicTimer constructs a new QBasicTimer object.
func NewQBasicTimer(param1 *QBasicTimer) *QBasicTimer {
	defer runtime.KeepAlive(param1)

	return newQBasicTimer(C.QBasicTimer_new(param1.cPointer()))
}

// NewQBasicTimer2 constructs a new QBasicTimer object.
func NewQBasicTimer2() *QBasicTimer {

	return newQBasicTimer(C.QBasicTimer_new2())
}

func (this *QBasicTimer) OperatorAssign(param1 *QBasicTimer) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QBasicTimer_operatorAssign(this.h, param1.cPointer())
}

func (this *QBasicTimer) Swap(other *QBasicTimer) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QBasicTimer_swap(this.h, other.cPointer())
}

func (this *QBasicTimer) IsActive() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBasicTimer_isActive(this.h))
}

func (this *QBasicTimer) TimerId() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QBasicTimer_timerId(this.h))
}

func (this *QBasicTimer) Start(msec int, obj *QObject) {
	defer runtime.KeepAlive(this)
	C.QBasicTimer_start(this.h, (C.int)(msec), obj.cPointer())
}

func (this *QBasicTimer) Start2(msec int, timerType TimerType, obj *QObject) {
	defer runtime.KeepAlive(this)
	C.QBasicTimer_start2(this.h, (C.int)(msec), (C.int)(timerType), obj.cPointer())
}

func (this *QBasicTimer) Stop() {
	defer runtime.KeepAlive(this)
	C.QBasicTimer_stop(this.h)
}

// Delete this object from C++ memory.
func (this *QBasicTimer) Delete() {
	C.QBasicTimer_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QBasicTimer) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QBasicTimer_delete((*C.QBasicTimer)(gc[0]))
	})
	this.miqtSetGC(gc)
}
