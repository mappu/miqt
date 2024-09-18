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
	h *C.QBasicTimer
}

func (this *QBasicTimer) cPointer() *C.QBasicTimer {
	if this == nil {
		return nil
	}
	return this.h
}

func newQBasicTimer(h *C.QBasicTimer) *QBasicTimer {
	if h == nil {
		return nil
	}
	return &QBasicTimer{h: h}
}

func newQBasicTimer_U(h unsafe.Pointer) *QBasicTimer {
	return newQBasicTimer((*C.QBasicTimer)(h))
}

// NewQBasicTimer constructs a new QBasicTimer object.
func NewQBasicTimer(param1 *QBasicTimer) *QBasicTimer {
	ret := C.QBasicTimer_new(param1.cPointer())
	return newQBasicTimer(ret)
}

// NewQBasicTimer2 constructs a new QBasicTimer object.
func NewQBasicTimer2() *QBasicTimer {
	ret := C.QBasicTimer_new2()
	return newQBasicTimer(ret)
}

func (this *QBasicTimer) OperatorAssign(param1 *QBasicTimer) {
	C.QBasicTimer_OperatorAssign(this.h, param1.cPointer())
}

func (this *QBasicTimer) Swap(other *QBasicTimer) {
	C.QBasicTimer_Swap(this.h, other.cPointer())
}

func (this *QBasicTimer) IsActive() bool {
	return (bool)(C.QBasicTimer_IsActive(this.h))
}

func (this *QBasicTimer) TimerId() int {
	return (int)(C.QBasicTimer_TimerId(this.h))
}

func (this *QBasicTimer) Start(msec int, obj *QObject) {
	C.QBasicTimer_Start(this.h, (C.int)(msec), obj.cPointer())
}

func (this *QBasicTimer) Start2(msec int, timerType TimerType, obj *QObject) {
	C.QBasicTimer_Start2(this.h, (C.int)(msec), (C.int)(timerType), obj.cPointer())
}

func (this *QBasicTimer) Stop() {
	C.QBasicTimer_Stop(this.h)
}

// Delete this object from C++ memory.
func (this *QBasicTimer) Delete() {
	C.QBasicTimer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBasicTimer) GoGC() {
	runtime.SetFinalizer(this, func(this *QBasicTimer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
