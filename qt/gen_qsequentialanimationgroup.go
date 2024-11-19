package qt

/*

#include "gen_qsequentialanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSequentialAnimationGroup struct {
	h          *C.QSequentialAnimationGroup
	isSubclass bool
	*QAnimationGroup
}

func (this *QSequentialAnimationGroup) cPointer() *C.QSequentialAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSequentialAnimationGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSequentialAnimationGroup constructs the type using only CGO pointers.
func newQSequentialAnimationGroup(h *C.QSequentialAnimationGroup, h_QAnimationGroup *C.QAnimationGroup, h_QAbstractAnimation *C.QAbstractAnimation, h_QObject *C.QObject) *QSequentialAnimationGroup {
	if h == nil {
		return nil
	}
	return &QSequentialAnimationGroup{h: h,
		QAnimationGroup: newQAnimationGroup(h_QAnimationGroup, h_QAbstractAnimation, h_QObject)}
}

// UnsafeNewQSequentialAnimationGroup constructs the type using only unsafe pointers.
func UnsafeNewQSequentialAnimationGroup(h unsafe.Pointer, h_QAnimationGroup unsafe.Pointer, h_QAbstractAnimation unsafe.Pointer, h_QObject unsafe.Pointer) *QSequentialAnimationGroup {
	if h == nil {
		return nil
	}

	return &QSequentialAnimationGroup{h: (*C.QSequentialAnimationGroup)(h),
		QAnimationGroup: UnsafeNewQAnimationGroup(h_QAnimationGroup, h_QAbstractAnimation, h_QObject)}
}

// NewQSequentialAnimationGroup constructs a new QSequentialAnimationGroup object.
func NewQSequentialAnimationGroup() *QSequentialAnimationGroup {
	var outptr_QSequentialAnimationGroup *C.QSequentialAnimationGroup = nil
	var outptr_QAnimationGroup *C.QAnimationGroup = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QSequentialAnimationGroup_new(&outptr_QSequentialAnimationGroup, &outptr_QAnimationGroup, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQSequentialAnimationGroup(outptr_QSequentialAnimationGroup, outptr_QAnimationGroup, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSequentialAnimationGroup2 constructs a new QSequentialAnimationGroup object.
func NewQSequentialAnimationGroup2(parent *QObject) *QSequentialAnimationGroup {
	var outptr_QSequentialAnimationGroup *C.QSequentialAnimationGroup = nil
	var outptr_QAnimationGroup *C.QAnimationGroup = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QSequentialAnimationGroup_new2(parent.cPointer(), &outptr_QSequentialAnimationGroup, &outptr_QAnimationGroup, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQSequentialAnimationGroup(outptr_QSequentialAnimationGroup, outptr_QAnimationGroup, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QSequentialAnimationGroup) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSequentialAnimationGroup_MetaObject(this.h)))
}

func (this *QSequentialAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSequentialAnimationGroup_Metacast(this.h, param1_Cstring))
}

func QSequentialAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSequentialAnimationGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSequentialAnimationGroup) AddPause(msecs int) *QPauseAnimation {
	return UnsafeNewQPauseAnimation(unsafe.Pointer(C.QSequentialAnimationGroup_AddPause(this.h, (C.int)(msecs))), nil, nil)
}

func (this *QSequentialAnimationGroup) InsertPause(index int, msecs int) *QPauseAnimation {
	return UnsafeNewQPauseAnimation(unsafe.Pointer(C.QSequentialAnimationGroup_InsertPause(this.h, (C.int)(index), (C.int)(msecs))), nil, nil)
}

func (this *QSequentialAnimationGroup) CurrentAnimation() *QAbstractAnimation {
	return UnsafeNewQAbstractAnimation(unsafe.Pointer(C.QSequentialAnimationGroup_CurrentAnimation(this.h)), nil)
}

func (this *QSequentialAnimationGroup) Duration() int {
	return (int)(C.QSequentialAnimationGroup_Duration(this.h))
}

func (this *QSequentialAnimationGroup) CurrentAnimationChanged(current *QAbstractAnimation) {
	C.QSequentialAnimationGroup_CurrentAnimationChanged(this.h, current.cPointer())
}
func (this *QSequentialAnimationGroup) OnCurrentAnimationChanged(slot func(current *QAbstractAnimation)) {
	C.QSequentialAnimationGroup_connect_CurrentAnimationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged
func miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged(cb C.intptr_t, current *C.QAbstractAnimation) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QAbstractAnimation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractAnimation(unsafe.Pointer(current), nil)

	gofunc(slotval1)
}

func QSequentialAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSequentialAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSequentialAnimationGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSequentialAnimationGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSequentialAnimationGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSequentialAnimationGroup) callVirtualBase_Duration() int {

	return (int)(C.QSequentialAnimationGroup_virtualbase_Duration(unsafe.Pointer(this.h)))

}
func (this *QSequentialAnimationGroup) OnDuration(slot func(super func() int) int) {
	C.QSequentialAnimationGroup_override_virtual_Duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSequentialAnimationGroup_Duration
func miqt_exec_callback_QSequentialAnimationGroup_Duration(self *C.QSequentialAnimationGroup, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_Duration)

	return (C.int)(virtualReturn)

}

func (this *QSequentialAnimationGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSequentialAnimationGroup_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSequentialAnimationGroup) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QSequentialAnimationGroup_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSequentialAnimationGroup_Event
func miqt_exec_callback_QSequentialAnimationGroup_Event(self *C.QSequentialAnimationGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSequentialAnimationGroup) callVirtualBase_UpdateCurrentTime(param1 int) {

	C.QSequentialAnimationGroup_virtualbase_UpdateCurrentTime(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QSequentialAnimationGroup) OnUpdateCurrentTime(slot func(super func(param1 int), param1 int)) {
	C.QSequentialAnimationGroup_override_virtual_UpdateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSequentialAnimationGroup_UpdateCurrentTime
func miqt_exec_callback_QSequentialAnimationGroup_UpdateCurrentTime(self *C.QSequentialAnimationGroup, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_UpdateCurrentTime, slotval1)

}

func (this *QSequentialAnimationGroup) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QSequentialAnimationGroup_virtualbase_UpdateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QSequentialAnimationGroup) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	C.QSequentialAnimationGroup_override_virtual_UpdateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSequentialAnimationGroup_UpdateState
func miqt_exec_callback_QSequentialAnimationGroup_UpdateState(self *C.QSequentialAnimationGroup, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QSequentialAnimationGroup) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QSequentialAnimationGroup_virtualbase_UpdateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QSequentialAnimationGroup) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	C.QSequentialAnimationGroup_override_virtual_UpdateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSequentialAnimationGroup_UpdateDirection
func miqt_exec_callback_QSequentialAnimationGroup_UpdateDirection(self *C.QSequentialAnimationGroup, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QSequentialAnimationGroup{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

// Delete this object from C++ memory.
func (this *QSequentialAnimationGroup) Delete() {
	C.QSequentialAnimationGroup_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSequentialAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QSequentialAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
