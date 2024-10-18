package qt

/*

#include "gen_qhistorystate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QHistoryState__HistoryType int

const (
	QHistoryState__ShallowHistory QHistoryState__HistoryType = 0
	QHistoryState__DeepHistory    QHistoryState__HistoryType = 1
)

type QHistoryState struct {
	h *C.QHistoryState
	*QAbstractState
}

func (this *QHistoryState) cPointer() *C.QHistoryState {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHistoryState) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQHistoryState(h *C.QHistoryState) *QHistoryState {
	if h == nil {
		return nil
	}
	return &QHistoryState{h: h, QAbstractState: UnsafeNewQAbstractState(unsafe.Pointer(h))}
}

func UnsafeNewQHistoryState(h unsafe.Pointer) *QHistoryState {
	return newQHistoryState((*C.QHistoryState)(h))
}

// NewQHistoryState constructs a new QHistoryState object.
func NewQHistoryState() *QHistoryState {
	ret := C.QHistoryState_new()
	return newQHistoryState(ret)
}

// NewQHistoryState2 constructs a new QHistoryState object.
func NewQHistoryState2(typeVal QHistoryState__HistoryType) *QHistoryState {
	ret := C.QHistoryState_new2((C.int)(typeVal))
	return newQHistoryState(ret)
}

// NewQHistoryState3 constructs a new QHistoryState object.
func NewQHistoryState3(parent *QState) *QHistoryState {
	ret := C.QHistoryState_new3(parent.cPointer())
	return newQHistoryState(ret)
}

// NewQHistoryState4 constructs a new QHistoryState object.
func NewQHistoryState4(typeVal QHistoryState__HistoryType, parent *QState) *QHistoryState {
	ret := C.QHistoryState_new4((C.int)(typeVal), parent.cPointer())
	return newQHistoryState(ret)
}

func (this *QHistoryState) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QHistoryState_MetaObject(this.h)))
}

func (this *QHistoryState) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHistoryState_Metacast(this.h, param1_Cstring))
}

func QHistoryState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHistoryState) DefaultTransition() *QAbstractTransition {
	return UnsafeNewQAbstractTransition(unsafe.Pointer(C.QHistoryState_DefaultTransition(this.h)))
}

func (this *QHistoryState) SetDefaultTransition(transition *QAbstractTransition) {
	C.QHistoryState_SetDefaultTransition(this.h, transition.cPointer())
}

func (this *QHistoryState) DefaultState() *QAbstractState {
	return UnsafeNewQAbstractState(unsafe.Pointer(C.QHistoryState_DefaultState(this.h)))
}

func (this *QHistoryState) SetDefaultState(state *QAbstractState) {
	C.QHistoryState_SetDefaultState(this.h, state.cPointer())
}

func (this *QHistoryState) HistoryType() QHistoryState__HistoryType {
	return (QHistoryState__HistoryType)(C.QHistoryState_HistoryType(this.h))
}

func (this *QHistoryState) SetHistoryType(typeVal QHistoryState__HistoryType) {
	C.QHistoryState_SetHistoryType(this.h, (C.int)(typeVal))
}

func QHistoryState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHistoryState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHistoryState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QHistoryState) Delete() {
	C.QHistoryState_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHistoryState) GoGC() {
	runtime.SetFinalizer(this, func(this *QHistoryState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
