package statemachine

/*

#include "gen_qabstractstate.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractState struct {
	h  *C.QAbstractState
	gc *[1]unsafe.Pointer
	*qt6.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractState) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAbstractState) cPointer() *C.QAbstractState {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractState) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractState constructs the type using only CGO pointers.
func newQAbstractState(h *C.QAbstractState) *QAbstractState {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractState_virtbase(h, &outptr_QObject)

	return &QAbstractState{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAbstractState constructs the type using only unsafe pointers.
func UnsafeNewQAbstractState(h unsafe.Pointer) *QAbstractState {
	return newQAbstractState((*C.QAbstractState)(h))
}

func (this *QAbstractState) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractState_metaObject(this.h)))
}

func (this *QAbstractState) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractState_metacast(this.h, param1_Cstring))
}

func QAbstractState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractState_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractState) ParentState() *QState {
	defer runtime.KeepAlive(this)
	return newQState(C.QAbstractState_parentState(this.h))
}

func (this *QAbstractState) Machine() *QStateMachine {
	defer runtime.KeepAlive(this)
	return newQStateMachine(C.QAbstractState_machine(this.h))
}

func (this *QAbstractState) Active() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAbstractState_active(this.h))
}

func (this *QAbstractState) ActiveChanged(active bool) {
	defer runtime.KeepAlive(this)
	C.QAbstractState_activeChanged(this.h, (C.bool)(active))
}
func (this *QAbstractState) OnActiveChanged(slot func(active bool)) {
	C.QAbstractState_connect_activeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractState_activeChanged
func miqt_exec_callback_QAbstractState_activeChanged(cb C.intptr_t, active C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(active bool))
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
	var _ms C.struct_miqt_string = C.QAbstractState_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractState_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAbstractState) OnEntered(slot func()) {
	C.QAbstractState_connect_entered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractState_entered
func miqt_exec_callback_QAbstractState_entered(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractState) OnExited(slot func()) {
	C.QAbstractState_connect_exited(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractState_exited
func miqt_exec_callback_QAbstractState_exited(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QAbstractState) Delete() {
	C.QAbstractState_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAbstractState) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractState_delete((*C.QAbstractState)(gc[0]))
	})
	this.miqtSetGC(gc)
}
