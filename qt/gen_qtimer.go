package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtimer.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QTimer_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTimer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimer_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimer_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimer) IsActive() bool {
	ret := C.QTimer_IsActive(this.h)
	return (bool)(ret)
}

func (this *QTimer) TimerId() int {
	ret := C.QTimer_TimerId(this.h)
	return (int)(ret)
}

func (this *QTimer) SetInterval(msec int) {
	C.QTimer_SetInterval(this.h, (C.int)(msec))
}

func (this *QTimer) Interval() int {
	ret := C.QTimer_Interval(this.h)
	return (int)(ret)
}

func (this *QTimer) RemainingTime() int {
	ret := C.QTimer_RemainingTime(this.h)
	return (int)(ret)
}

func (this *QTimer) SetTimerType(atype uintptr) {
	C.QTimer_SetTimerType(this.h, (C.uintptr_t)(atype))
}

func (this *QTimer) TimerType() uintptr {
	ret := C.QTimer_TimerType(this.h)
	return (uintptr)(ret)
}

func (this *QTimer) SetSingleShot(singleShot bool) {
	C.QTimer_SetSingleShot(this.h, (C.bool)(singleShot))
}

func (this *QTimer) IsSingleShot() bool {
	ret := C.QTimer_IsSingleShot(this.h)
	return (bool)(ret)
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimer_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimer_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimer_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTimer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTimer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTimer) Delete() {
	C.QTimer_Delete(this.h)
}
