package qt

/*

#include "gen_qabstracttransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAbstractTransition__TransitionType int

const (
	QAbstractTransition__ExternalTransition QAbstractTransition__TransitionType = 0
	QAbstractTransition__InternalTransition QAbstractTransition__TransitionType = 1
)

type QAbstractTransition struct {
	h *C.QAbstractTransition
	*QObject
}

func (this *QAbstractTransition) cPointer() *C.QAbstractTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractTransition(h *C.QAbstractTransition) *QAbstractTransition {
	if h == nil {
		return nil
	}
	return &QAbstractTransition{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractTransition_U(h unsafe.Pointer) *QAbstractTransition {
	return newQAbstractTransition((*C.QAbstractTransition)(h))
}

func (this *QAbstractTransition) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QAbstractTransition_MetaObject(this.h)))
}

func QAbstractTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTransition_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractTransition) SourceState() *QState {
	return newQState_U(unsafe.Pointer(C.QAbstractTransition_SourceState(this.h)))
}

func (this *QAbstractTransition) TargetState() *QAbstractState {
	return newQAbstractState_U(unsafe.Pointer(C.QAbstractTransition_TargetState(this.h)))
}

func (this *QAbstractTransition) SetTargetState(target *QAbstractState) {
	C.QAbstractTransition_SetTargetState(this.h, target.cPointer())
}

func (this *QAbstractTransition) TargetStates() []*QAbstractState {
	var _ma *C.struct_miqt_array = C.QAbstractTransition_TargetStates(this.h)
	_ret := make([]*QAbstractState, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractState)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractState_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAbstractTransition) SetTargetStates(targets []*QAbstractState) {
	// For the C ABI, malloc a C array of raw pointers
	targets_CArray := (*[0xffff]*C.QAbstractState)(C.malloc(C.size_t(8 * len(targets))))
	defer C.free(unsafe.Pointer(targets_CArray))
	for i := range targets {
		targets_CArray[i] = targets[i].cPointer()
	}
	targets_ma := &C.struct_miqt_array{len: C.size_t(len(targets)), data: unsafe.Pointer(targets_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(targets_ma))
	C.QAbstractTransition_SetTargetStates(this.h, targets_ma)
}

func (this *QAbstractTransition) TransitionType() QAbstractTransition__TransitionType {
	return (QAbstractTransition__TransitionType)(C.QAbstractTransition_TransitionType(this.h))
}

func (this *QAbstractTransition) SetTransitionType(typeVal QAbstractTransition__TransitionType) {
	C.QAbstractTransition_SetTransitionType(this.h, (C.int)(typeVal))
}

func (this *QAbstractTransition) Machine() *QStateMachine {
	return newQStateMachine_U(unsafe.Pointer(C.QAbstractTransition_Machine(this.h)))
}

func (this *QAbstractTransition) AddAnimation(animation *QAbstractAnimation) {
	C.QAbstractTransition_AddAnimation(this.h, animation.cPointer())
}

func (this *QAbstractTransition) RemoveAnimation(animation *QAbstractAnimation) {
	C.QAbstractTransition_RemoveAnimation(this.h, animation.cPointer())
}

func (this *QAbstractTransition) Animations() []*QAbstractAnimation {
	var _ma *C.struct_miqt_array = C.QAbstractTransition_Animations(this.h)
	_ret := make([]*QAbstractAnimation, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAnimation)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAnimation_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QAbstractTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractTransition) Delete() {
	C.QAbstractTransition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
