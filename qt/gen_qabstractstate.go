package qt

/*

#include "gen_qabstractstate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractState struct {
	h *C.QAbstractState
	*QObject
}

func (this *QAbstractState) cPointer() *C.QAbstractState {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractState(h *C.QAbstractState) *QAbstractState {
	if h == nil {
		return nil
	}
	return &QAbstractState{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractState_U(h unsafe.Pointer) *QAbstractState {
	return newQAbstractState((*C.QAbstractState)(h))
}

func (this *QAbstractState) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QAbstractState_MetaObject(this.h)))
}

func QAbstractState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractState_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractState_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractState) ParentState() *QState {
	return newQState_U(unsafe.Pointer(C.QAbstractState_ParentState(this.h)))
}

func (this *QAbstractState) Machine() *QStateMachine {
	return newQStateMachine_U(unsafe.Pointer(C.QAbstractState_Machine(this.h)))
}

func (this *QAbstractState) Active() bool {
	return (bool)(C.QAbstractState_Active(this.h))
}

func (this *QAbstractState) ActiveChanged(active bool) {
	C.QAbstractState_ActiveChanged(this.h, (C.bool)(active))
}
func (this *QAbstractState) OnActiveChanged(slot func(active bool)) {
	C.QAbstractState_connect_ActiveChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractState_ActiveChanged
func miqt_exec_callback_QAbstractState_ActiveChanged(cb *C.void, active C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(active bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(active)

	gofunc(slotval1)
}

func QAbstractState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractState_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractState_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractState_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractState) Delete() {
	C.QAbstractState_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractState) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
