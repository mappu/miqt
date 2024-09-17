package qt

/*

#include "gen_qfinalstate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFinalState struct {
	h *C.QFinalState
	*QAbstractState
}

func (this *QFinalState) cPointer() *C.QFinalState {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFinalState(h *C.QFinalState) *QFinalState {
	if h == nil {
		return nil
	}
	return &QFinalState{h: h, QAbstractState: newQAbstractState_U(unsafe.Pointer(h))}
}

func newQFinalState_U(h unsafe.Pointer) *QFinalState {
	return newQFinalState((*C.QFinalState)(h))
}

// NewQFinalState constructs a new QFinalState object.
func NewQFinalState() *QFinalState {
	ret := C.QFinalState_new()
	return newQFinalState(ret)
}

// NewQFinalState2 constructs a new QFinalState object.
func NewQFinalState2(parent *QState) *QFinalState {
	ret := C.QFinalState_new2(parent.cPointer())
	return newQFinalState(ret)
}

func (this *QFinalState) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QFinalState_MetaObject(this.h)))
}

func QFinalState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFinalState_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFinalState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFinalState_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFinalState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFinalState_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFinalState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFinalState_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFinalState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFinalState_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFinalState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFinalState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFinalState) Delete() {
	C.QFinalState_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFinalState) GoGC() {
	runtime.SetFinalizer(this, func(this *QFinalState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
