package qt

/*

#include "gen_qtimer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTimer struct {
	h *C.QTimer
	*QObject
}

func (this *QTimer) cPointer() *C.QTimer {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTimer(h *C.QTimer) *QTimer {
	if h == nil {
		return nil
	}
	return &QTimer{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQTimer_U(h unsafe.Pointer) *QTimer {
	return newQTimer((*C.QTimer)(h))
}

// NewQTimer constructs a new QTimer object.
func NewQTimer() *QTimer {
	ret := C.QTimer_new()
	return newQTimer(ret)
}

// NewQTimer2 constructs a new QTimer object.
func NewQTimer2(parent *QObject) *QTimer {
	ret := C.QTimer_new2(parent.cPointer())
	return newQTimer(ret)
}

func (this *QTimer) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QTimer_MetaObject(this.h)))
}

func (this *QTimer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QTimer_Metacast(this.h, param1_Cstring)
}

func QTimer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTimer_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTimer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTimer_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTimer) IsActive() bool {
	return (bool)(C.QTimer_IsActive(this.h))
}

func (this *QTimer) TimerId() int {
	return (int)(C.QTimer_TimerId(this.h))
}

func (this *QTimer) SetInterval(msec int) {
	C.QTimer_SetInterval(this.h, (C.int)(msec))
}

func (this *QTimer) Interval() int {
	return (int)(C.QTimer_Interval(this.h))
}

func (this *QTimer) RemainingTime() int {
	return (int)(C.QTimer_RemainingTime(this.h))
}

func (this *QTimer) SetTimerType(atype TimerType) {
	C.QTimer_SetTimerType(this.h, (C.int)(atype))
}

func (this *QTimer) TimerType() TimerType {
	return (TimerType)(C.QTimer_TimerType(this.h))
}

func (this *QTimer) SetSingleShot(singleShot bool) {
	C.QTimer_SetSingleShot(this.h, (C.bool)(singleShot))
}

func (this *QTimer) IsSingleShot() bool {
	return (bool)(C.QTimer_IsSingleShot(this.h))
}

func (this *QTimer) Start(msec int) {
	C.QTimer_Start(this.h, (C.int)(msec))
}

func (this *QTimer) Start2() {
	C.QTimer_Start2(this.h)
}

func (this *QTimer) Stop() {
	C.QTimer_Stop(this.h)
}

func QTimer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTimer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTimer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTimer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTimer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTimer_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTimer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTimer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTimer) Delete() {
	C.QTimer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimer) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
