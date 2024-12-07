package qt6

/*

#include "gen_qparallelanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QParallelAnimationGroup struct {
	h          *C.QParallelAnimationGroup
	isSubclass bool
	*QAnimationGroup
}

func (this *QParallelAnimationGroup) cPointer() *C.QParallelAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QParallelAnimationGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQParallelAnimationGroup constructs the type using only CGO pointers.
func newQParallelAnimationGroup(h *C.QParallelAnimationGroup, h_QAnimationGroup *C.QAnimationGroup, h_QAbstractAnimation *C.QAbstractAnimation, h_QObject *C.QObject) *QParallelAnimationGroup {
	if h == nil {
		return nil
	}
	return &QParallelAnimationGroup{h: h,
		QAnimationGroup: newQAnimationGroup(h_QAnimationGroup, h_QAbstractAnimation, h_QObject)}
}

// UnsafeNewQParallelAnimationGroup constructs the type using only unsafe pointers.
func UnsafeNewQParallelAnimationGroup(h unsafe.Pointer, h_QAnimationGroup unsafe.Pointer, h_QAbstractAnimation unsafe.Pointer, h_QObject unsafe.Pointer) *QParallelAnimationGroup {
	if h == nil {
		return nil
	}

	return &QParallelAnimationGroup{h: (*C.QParallelAnimationGroup)(h),
		QAnimationGroup: UnsafeNewQAnimationGroup(h_QAnimationGroup, h_QAbstractAnimation, h_QObject)}
}

// NewQParallelAnimationGroup constructs a new QParallelAnimationGroup object.
func NewQParallelAnimationGroup() *QParallelAnimationGroup {
	var outptr_QParallelAnimationGroup *C.QParallelAnimationGroup = nil
	var outptr_QAnimationGroup *C.QAnimationGroup = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QParallelAnimationGroup_new(&outptr_QParallelAnimationGroup, &outptr_QAnimationGroup, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQParallelAnimationGroup(outptr_QParallelAnimationGroup, outptr_QAnimationGroup, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQParallelAnimationGroup2 constructs a new QParallelAnimationGroup object.
func NewQParallelAnimationGroup2(parent *QObject) *QParallelAnimationGroup {
	var outptr_QParallelAnimationGroup *C.QParallelAnimationGroup = nil
	var outptr_QAnimationGroup *C.QAnimationGroup = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QParallelAnimationGroup_new2(parent.cPointer(), &outptr_QParallelAnimationGroup, &outptr_QAnimationGroup, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQParallelAnimationGroup(outptr_QParallelAnimationGroup, outptr_QAnimationGroup, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QParallelAnimationGroup) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QParallelAnimationGroup_MetaObject(this.h)))
}

func (this *QParallelAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QParallelAnimationGroup_Metacast(this.h, param1_Cstring))
}

func QParallelAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QParallelAnimationGroup) Duration() int {
	return (int)(C.QParallelAnimationGroup_Duration(this.h))
}

func QParallelAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QParallelAnimationGroup) callVirtualBase_Duration() int {

	return (int)(C.QParallelAnimationGroup_virtualbase_Duration(unsafe.Pointer(this.h)))

}
func (this *QParallelAnimationGroup) OnDuration(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QParallelAnimationGroup_override_virtual_Duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QParallelAnimationGroup_Duration
func miqt_exec_callback_QParallelAnimationGroup_Duration(self *C.QParallelAnimationGroup, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_Duration)

	return (C.int)(virtualReturn)

}

func (this *QParallelAnimationGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QParallelAnimationGroup_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QParallelAnimationGroup) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QParallelAnimationGroup_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QParallelAnimationGroup_Event
func miqt_exec_callback_QParallelAnimationGroup_Event(self *C.QParallelAnimationGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QParallelAnimationGroup) callVirtualBase_UpdateCurrentTime(currentTime int) {

	C.QParallelAnimationGroup_virtualbase_UpdateCurrentTime(unsafe.Pointer(this.h), (C.int)(currentTime))

}
func (this *QParallelAnimationGroup) OnUpdateCurrentTime(slot func(super func(currentTime int), currentTime int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QParallelAnimationGroup_override_virtual_UpdateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QParallelAnimationGroup_UpdateCurrentTime
func miqt_exec_callback_QParallelAnimationGroup_UpdateCurrentTime(self *C.QParallelAnimationGroup, cb C.intptr_t, currentTime C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(currentTime int), currentTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentTime)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_UpdateCurrentTime, slotval1)

}

func (this *QParallelAnimationGroup) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QParallelAnimationGroup_virtualbase_UpdateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QParallelAnimationGroup) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QParallelAnimationGroup_override_virtual_UpdateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QParallelAnimationGroup_UpdateState
func miqt_exec_callback_QParallelAnimationGroup_UpdateState(self *C.QParallelAnimationGroup, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QParallelAnimationGroup) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QParallelAnimationGroup_virtualbase_UpdateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QParallelAnimationGroup) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QParallelAnimationGroup_override_virtual_UpdateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QParallelAnimationGroup_UpdateDirection
func miqt_exec_callback_QParallelAnimationGroup_UpdateDirection(self *C.QParallelAnimationGroup, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QParallelAnimationGroup{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

// Delete this object from C++ memory.
func (this *QParallelAnimationGroup) Delete() {
	C.QParallelAnimationGroup_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QParallelAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QParallelAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
