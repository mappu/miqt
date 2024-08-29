package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qelapsedtimer.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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

func newQElapsedTimer(h *C.QElapsedTimer) *QElapsedTimer {
	return &QElapsedTimer{h: h}
}

func newQElapsedTimer_U(h unsafe.Pointer) *QElapsedTimer {
	return newQElapsedTimer((*C.QElapsedTimer)(h))
}

// NewQElapsedTimer constructs a new QElapsedTimer object.
func NewQElapsedTimer() *QElapsedTimer {
	ret := C.QElapsedTimer_new()
	return newQElapsedTimer(ret)
}

func QElapsedTimer_ClockType() uintptr {
	ret := C.QElapsedTimer_ClockType()
	return (uintptr)(ret)
}

func QElapsedTimer_IsMonotonic() bool {
	ret := C.QElapsedTimer_IsMonotonic()
	return (bool)(ret)
}

func (this *QElapsedTimer) Start() {
	C.QElapsedTimer_Start(this.h)
}

func (this *QElapsedTimer) Restart() int64 {
	ret := C.QElapsedTimer_Restart(this.h)
	return (int64)(ret)
}

func (this *QElapsedTimer) Invalidate() {
	C.QElapsedTimer_Invalidate(this.h)
}

func (this *QElapsedTimer) IsValid() bool {
	ret := C.QElapsedTimer_IsValid(this.h)
	return (bool)(ret)
}

func (this *QElapsedTimer) NsecsElapsed() int64 {
	ret := C.QElapsedTimer_NsecsElapsed(this.h)
	return (int64)(ret)
}

func (this *QElapsedTimer) Elapsed() int64 {
	ret := C.QElapsedTimer_Elapsed(this.h)
	return (int64)(ret)
}

func (this *QElapsedTimer) HasExpired(timeout int64) bool {
	ret := C.QElapsedTimer_HasExpired(this.h, (C.longlong)(timeout))
	return (bool)(ret)
}

func (this *QElapsedTimer) MsecsSinceReference() int64 {
	ret := C.QElapsedTimer_MsecsSinceReference(this.h)
	return (int64)(ret)
}

func (this *QElapsedTimer) MsecsTo(other *QElapsedTimer) int64 {
	ret := C.QElapsedTimer_MsecsTo(this.h, other.cPointer())
	return (int64)(ret)
}

func (this *QElapsedTimer) SecsTo(other *QElapsedTimer) int64 {
	ret := C.QElapsedTimer_SecsTo(this.h, other.cPointer())
	return (int64)(ret)
}

func (this *QElapsedTimer) OperatorEqual(other *QElapsedTimer) bool {
	ret := C.QElapsedTimer_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QElapsedTimer) OperatorNotEqual(other *QElapsedTimer) bool {
	ret := C.QElapsedTimer_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QElapsedTimer) Delete() {
	C.QElapsedTimer_Delete(this.h)
}
