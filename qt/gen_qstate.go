package qt

/*

#include "gen_qstate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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
	h          *C.QState
	isSubclass bool
	*QAbstractState
}

func (this *QState) cPointer() *C.QState {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QState) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQState constructs the type using only CGO pointers.
func newQState(h *C.QState, h_QAbstractState *C.QAbstractState, h_QObject *C.QObject) *QState {
	if h == nil {
		return nil
	}
	return &QState{h: h,
		QAbstractState: newQAbstractState(h_QAbstractState, h_QObject)}
}

// UnsafeNewQState constructs the type using only unsafe pointers.
func UnsafeNewQState(h unsafe.Pointer, h_QAbstractState unsafe.Pointer, h_QObject unsafe.Pointer) *QState {
	if h == nil {
		return nil
	}

	return &QState{h: (*C.QState)(h),
		QAbstractState: UnsafeNewQAbstractState(h_QAbstractState, h_QObject)}
}

// NewQState constructs a new QState object.
func NewQState() *QState {
	var outptr_QState *C.QState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QState_new(&outptr_QState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQState(outptr_QState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQState2 constructs a new QState object.
func NewQState2(childMode QState__ChildMode) *QState {
	var outptr_QState *C.QState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QState_new2((C.int)(childMode), &outptr_QState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQState(outptr_QState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQState3 constructs a new QState object.
func NewQState3(parent *QState) *QState {
	var outptr_QState *C.QState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QState_new3(parent.cPointer(), &outptr_QState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQState(outptr_QState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQState4 constructs a new QState object.
func NewQState4(childMode QState__ChildMode, parent *QState) *QState {
	var outptr_QState *C.QState = nil
	var outptr_QAbstractState *C.QAbstractState = nil
	var outptr_QObject *C.QObject = nil

	C.QState_new4((C.int)(childMode), parent.cPointer(), &outptr_QState, &outptr_QAbstractState, &outptr_QObject)
	ret := newQState(outptr_QState, outptr_QAbstractState, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QState) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QState_MetaObject(this.h)))
}

func (this *QState) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QState_Metacast(this.h, param1_Cstring))
}

func QState_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QState_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QState_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QState_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QState) ErrorState() *QAbstractState {
	return UnsafeNewQAbstractState(unsafe.Pointer(C.QState_ErrorState(this.h)), nil)
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
	return UnsafeNewQSignalTransition(unsafe.Pointer(C.QState_AddTransition2(this.h, sender.cPointer(), signal_Cstring, target.cPointer())), nil, nil)
}

func (this *QState) AddTransitionWithTarget(target *QAbstractState) *QAbstractTransition {
	return UnsafeNewQAbstractTransition(unsafe.Pointer(C.QState_AddTransitionWithTarget(this.h, target.cPointer())), nil)
}

func (this *QState) RemoveTransition(transition *QAbstractTransition) {
	C.QState_RemoveTransition(this.h, transition.cPointer())
}

func (this *QState) Transitions() []*QAbstractTransition {
	var _ma C.struct_miqt_array = C.QState_Transitions(this.h)
	_ret := make([]*QAbstractTransition, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractTransition)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQAbstractTransition(unsafe.Pointer(_outCast[i]), nil)
	}
	return _ret
}

func (this *QState) InitialState() *QAbstractState {
	return UnsafeNewQAbstractState(unsafe.Pointer(C.QState_InitialState(this.h)), nil)
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
	var _ms C.struct_miqt_string = C.QState_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QState_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QState_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QState_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QState_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QState_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QState_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QState) callVirtualBase_OnEntry(event *QEvent) {

	C.QState_virtualbase_OnEntry(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QState) OnOnEntry(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QState_override_virtual_OnEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QState_OnEntry
func miqt_exec_callback_QState_OnEntry(self *C.QState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QState{h: self}).callVirtualBase_OnEntry, slotval1)

}

func (this *QState) callVirtualBase_OnExit(event *QEvent) {

	C.QState_virtualbase_OnExit(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QState) OnOnExit(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QState_override_virtual_OnExit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QState_OnExit
func miqt_exec_callback_QState_OnExit(self *C.QState, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QState{h: self}).callVirtualBase_OnExit, slotval1)

}

func (this *QState) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QState_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QState) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QState_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QState_Event
func miqt_exec_callback_QState_Event(self *C.QState, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QState{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QState) Delete() {
	C.QState_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QState) GoGC() {
	runtime.SetFinalizer(this, func(this *QState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
