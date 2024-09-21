package qt

/*

#include "gen_qstate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QState__ChildMode int

const (
	QState__ExclusiveStates QState__ChildMode = 0
	QState__ParallelStates  QState__ChildMode = 1
)

type QState__RestorePolicy int

const (
	QState__DontRestoreProperties QState__RestorePolicy = 0
	QState__RestoreProperties     QState__RestorePolicy = 1
)

type QState struct {
	h *C.QState
	*QAbstractState
}

func (this *QState) cPointer() *C.QState {
	if this == nil {
		return nil
	}
	return this.h
}

func newQState(h *C.QState) *QState {
	if h == nil {
		return nil
	}
	return &QState{h: h, QAbstractState: newQAbstractState_U(unsafe.Pointer(h))}
}

func newQState_U(h unsafe.Pointer) *QState {
	return newQState((*C.QState)(h))
}

// NewQState constructs a new QState object.
func NewQState() *QState {
	ret := C.QState_new()
	return newQState(ret)
}

// NewQState2 constructs a new QState object.
func NewQState2(childMode QState__ChildMode) *QState {
	ret := C.QState_new2((C.int)(childMode))
	return newQState(ret)
}

// NewQState3 constructs a new QState object.
func NewQState3(parent *QState) *QState {
	ret := C.QState_new3(parent.cPointer())
	return newQState(ret)
}

// NewQState4 constructs a new QState object.
func NewQState4(childMode QState__ChildMode, parent *QState) *QState {
	ret := C.QState_new4((C.int)(childMode), parent.cPointer())
	return newQState(ret)
}

func (this *QState) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QState_MetaObject(this.h)))
}

func (this *QState) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QState_Metacast(this.h, param1_Cstring)
}

func QState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QState_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QState_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QState) ErrorState() *QAbstractState {
	return newQAbstractState_U(unsafe.Pointer(C.QState_ErrorState(this.h)))
}

func (this *QState) SetErrorState(state *QAbstractState) {
	C.QState_SetErrorState(this.h, state.cPointer())
}

func (this *QState) AddTransition(transition *QAbstractTransition) {
	C.QState_AddTransition(this.h, transition.cPointer())
}

func (this *QState) AddTransition2(sender *QObject, signal string, target *QAbstractState) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	return newQSignalTransition_U(unsafe.Pointer(C.QState_AddTransition2(this.h, sender.cPointer(), signal_Cstring, target.cPointer())))
}

func (this *QState) AddTransitionWithTarget(target *QAbstractState) *QAbstractTransition {
	return newQAbstractTransition_U(unsafe.Pointer(C.QState_AddTransitionWithTarget(this.h, target.cPointer())))
}

func (this *QState) RemoveTransition(transition *QAbstractTransition) {
	C.QState_RemoveTransition(this.h, transition.cPointer())
}

func (this *QState) Transitions() []*QAbstractTransition {
	var _ma *C.struct_miqt_array = C.QState_Transitions(this.h)
	_ret := make([]*QAbstractTransition, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractTransition)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractTransition_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QState) InitialState() *QAbstractState {
	return newQAbstractState_U(unsafe.Pointer(C.QState_InitialState(this.h)))
}

func (this *QState) SetInitialState(state *QAbstractState) {
	C.QState_SetInitialState(this.h, state.cPointer())
}

func (this *QState) ChildMode() QState__ChildMode {
	return (QState__ChildMode)(C.QState_ChildMode(this.h))
}

func (this *QState) SetChildMode(mode QState__ChildMode) {
	C.QState_SetChildMode(this.h, (C.int)(mode))
}

func (this *QState) AssignProperty(object *QObject, name string, value *QVariant) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QState_AssignProperty(this.h, object.cPointer(), name_Cstring, value.cPointer())
}

func QState_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QState_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QState_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QState_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QState) Delete() {
	C.QState_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QState) GoGC() {
	runtime.SetFinalizer(this, func(this *QState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
