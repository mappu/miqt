package qt

/*

#include "gen_qpauseanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPauseAnimation struct {
	h *C.QPauseAnimation
	*QAbstractAnimation
}

func (this *QPauseAnimation) cPointer() *C.QPauseAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPauseAnimation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPauseAnimation constructs the type using only CGO pointers.
func newQPauseAnimation(h *C.QPauseAnimation) *QPauseAnimation {
	if h == nil {
		return nil
	}
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	C.QPauseAnimation_virtbase(h, &outptr_QAbstractAnimation)

	return &QPauseAnimation{h: h,
		QAbstractAnimation: newQAbstractAnimation(outptr_QAbstractAnimation)}
}

// UnsafeNewQPauseAnimation constructs the type using only unsafe pointers.
func UnsafeNewQPauseAnimation(h unsafe.Pointer) *QPauseAnimation {
	return newQPauseAnimation((*C.QPauseAnimation)(h))
}

// NewQPauseAnimation constructs a new QPauseAnimation object.
func NewQPauseAnimation() *QPauseAnimation {

	return newQPauseAnimation(C.QPauseAnimation_new())
}

// NewQPauseAnimation2 constructs a new QPauseAnimation object.
func NewQPauseAnimation2(msecs int) *QPauseAnimation {

	return newQPauseAnimation(C.QPauseAnimation_new2((C.int)(msecs)))
}

// NewQPauseAnimation3 constructs a new QPauseAnimation object.
func NewQPauseAnimation3(parent *QObject) *QPauseAnimation {

	return newQPauseAnimation(C.QPauseAnimation_new3(parent.cPointer()))
}

// NewQPauseAnimation4 constructs a new QPauseAnimation object.
func NewQPauseAnimation4(msecs int, parent *QObject) *QPauseAnimation {

	return newQPauseAnimation(C.QPauseAnimation_new4((C.int)(msecs), parent.cPointer()))
}

func (this *QPauseAnimation) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPauseAnimation_MetaObject(this.h))
}

func (this *QPauseAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPauseAnimation_Metacast(this.h, param1_Cstring))
}

func QPauseAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPauseAnimation) Duration() int {
	return (int)(C.QPauseAnimation_Duration(this.h))
}

func (this *QPauseAnimation) SetDuration(msecs int) {
	C.QPauseAnimation_SetDuration(this.h, (C.int)(msecs))
}

func QPauseAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPauseAnimation) callVirtualBase_Duration() int {

	return (int)(C.QPauseAnimation_virtualbase_Duration(unsafe.Pointer(this.h)))

}
func (this *QPauseAnimation) OnDuration(slot func(super func() int) int) {
	ok := C.QPauseAnimation_override_virtual_Duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_Duration
func miqt_exec_callback_QPauseAnimation_Duration(self *C.QPauseAnimation, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPauseAnimation{h: self}).callVirtualBase_Duration)

	return (C.int)(virtualReturn)

}

func (this *QPauseAnimation) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QPauseAnimation_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QPauseAnimation) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QPauseAnimation_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_Event
func miqt_exec_callback_QPauseAnimation_Event(self *C.QPauseAnimation, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QPauseAnimation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPauseAnimation) callVirtualBase_UpdateCurrentTime(param1 int) {

	C.QPauseAnimation_virtualbase_UpdateCurrentTime(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QPauseAnimation) OnUpdateCurrentTime(slot func(super func(param1 int), param1 int)) {
	ok := C.QPauseAnimation_override_virtual_UpdateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_UpdateCurrentTime
func miqt_exec_callback_QPauseAnimation_UpdateCurrentTime(self *C.QPauseAnimation, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_UpdateCurrentTime, slotval1)

}

func (this *QPauseAnimation) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QPauseAnimation_virtualbase_UpdateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QPauseAnimation) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	ok := C.QPauseAnimation_override_virtual_UpdateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_UpdateState
func miqt_exec_callback_QPauseAnimation_UpdateState(self *C.QPauseAnimation, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QPauseAnimation) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QPauseAnimation_virtualbase_UpdateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QPauseAnimation) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	ok := C.QPauseAnimation_override_virtual_UpdateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPauseAnimation_UpdateDirection
func miqt_exec_callback_QPauseAnimation_UpdateDirection(self *C.QPauseAnimation, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QPauseAnimation{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

// Delete this object from C++ memory.
func (this *QPauseAnimation) Delete() {
	C.QPauseAnimation_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPauseAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QPauseAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
