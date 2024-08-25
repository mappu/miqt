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
func NewQDeadlineTimer(param1 *QDeadlineTimer) *QDeadlineTimer {
	ret := C.QDeadlineTimer_new(param1.cPointer())
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

func (this *QDeadlineTimer) RemainingTime() int64 {
	ret := C.QDeadlineTimer_RemainingTime(this.h)
	return (int64)(ret)
}

func (this *QDeadlineTimer) RemainingTimeNSecs() int64 {
	ret := C.QDeadlineTimer_RemainingTimeNSecs(this.h)
	return (int64)(ret)
}

func (this *QDeadlineTimer) Deadline() int64 {
	ret := C.QDeadlineTimer_Deadline(this.h)
	return (int64)(ret)
}

func (this *QDeadlineTimer) DeadlineNSecs() int64 {
	ret := C.QDeadlineTimer_DeadlineNSecs(this.h)
	return (int64)(ret)
}

func QDeadlineTimer_AddNSecs(dt QDeadlineTimer, nsecs int64) *QDeadlineTimer {
	ret := C.QDeadlineTimer_AddNSecs(dt.cPointer(), (C.int64_t)(nsecs))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDeadlineTimer(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDeadlineTimer) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDeadlineTimer) OperatorPlusAssign(msecs int64) *QDeadlineTimer {
	ret := C.QDeadlineTimer_OperatorPlusAssign(this.h, (C.int64_t)(msecs))
	return newQDeadlineTimer_U(unsafe.Pointer(ret))
}

func (this *QDeadlineTimer) OperatorMinusAssign(msecs int64) *QDeadlineTimer {
	ret := C.QDeadlineTimer_OperatorMinusAssign(this.h, (C.int64_t)(msecs))
	return newQDeadlineTimer_U(unsafe.Pointer(ret))
}

func (this *QDeadlineTimer) OperatorAssign(param1 *QDeadlineTimer) {
	C.QDeadlineTimer_OperatorAssign(this.h, param1.cPointer())
}

func (this *QDeadlineTimer) Delete() {
	C.QDeadlineTimer_Delete(this.h)
}
