package qt6

/*

#include "gen_qpropertyanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPropertyAnimation struct {
	h *C.QPropertyAnimation
	*QVariantAnimation
}

func (this *QPropertyAnimation) cPointer() *C.QPropertyAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyAnimation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPropertyAnimation constructs the type using only CGO pointers.
func newQPropertyAnimation(h *C.QPropertyAnimation) *QPropertyAnimation {
	if h == nil {
		return nil
	}
	var outptr_QVariantAnimation *C.QVariantAnimation = nil
	C.QPropertyAnimation_virtbase(h, &outptr_QVariantAnimation)

	return &QPropertyAnimation{h: h,
		QVariantAnimation: newQVariantAnimation(outptr_QVariantAnimation)}
}

// UnsafeNewQPropertyAnimation constructs the type using only unsafe pointers.
func UnsafeNewQPropertyAnimation(h unsafe.Pointer) *QPropertyAnimation {
	return newQPropertyAnimation((*C.QPropertyAnimation)(h))
}

// NewQPropertyAnimation constructs a new QPropertyAnimation object.
func NewQPropertyAnimation() *QPropertyAnimation {

	return newQPropertyAnimation(C.QPropertyAnimation_new())
}

// NewQPropertyAnimation2 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation2(target *QObject, propertyName []byte) *QPropertyAnimation {
	propertyName_alias := C.struct_miqt_string{}
	if len(propertyName) > 0 {
		propertyName_alias.data = (*C.char)(unsafe.Pointer(&propertyName[0]))
	} else {
		propertyName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	propertyName_alias.len = C.size_t(len(propertyName))

	return newQPropertyAnimation(C.QPropertyAnimation_new2(target.cPointer(), propertyName_alias))
}

// NewQPropertyAnimation3 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation3(parent *QObject) *QPropertyAnimation {

	return newQPropertyAnimation(C.QPropertyAnimation_new3(parent.cPointer()))
}

// NewQPropertyAnimation4 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation4(target *QObject, propertyName []byte, parent *QObject) *QPropertyAnimation {
	propertyName_alias := C.struct_miqt_string{}
	if len(propertyName) > 0 {
		propertyName_alias.data = (*C.char)(unsafe.Pointer(&propertyName[0]))
	} else {
		propertyName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	propertyName_alias.len = C.size_t(len(propertyName))

	return newQPropertyAnimation(C.QPropertyAnimation_new4(target.cPointer(), propertyName_alias, parent.cPointer()))
}

func (this *QPropertyAnimation) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPropertyAnimation_metaObject(this.h))
}

func (this *QPropertyAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPropertyAnimation_metacast(this.h, param1_Cstring))
}

func QPropertyAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPropertyAnimation) TargetObject() *QObject {
	return newQObject(C.QPropertyAnimation_targetObject(this.h))
}

func (this *QPropertyAnimation) SetTargetObject(target *QObject) {
	C.QPropertyAnimation_setTargetObject(this.h, target.cPointer())
}

func (this *QPropertyAnimation) PropertyName() []byte {
	var _bytearray C.struct_miqt_string = C.QPropertyAnimation_propertyName(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QPropertyAnimation) SetPropertyName(propertyName []byte) {
	propertyName_alias := C.struct_miqt_string{}
	if len(propertyName) > 0 {
		propertyName_alias.data = (*C.char)(unsafe.Pointer(&propertyName[0]))
	} else {
		propertyName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	propertyName_alias.len = C.size_t(len(propertyName))
	C.QPropertyAnimation_setPropertyName(this.h, propertyName_alias)
}

func QPropertyAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPropertyAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPropertyAnimation) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPropertyAnimation_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPropertyAnimation) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QPropertyAnimation_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_event
func miqt_exec_callback_QPropertyAnimation_event(self *C.QPropertyAnimation, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QPropertyAnimation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPropertyAnimation) callVirtualBase_UpdateCurrentValue(value *QVariant) {

	C.QPropertyAnimation_virtualbase_updateCurrentValue(unsafe.Pointer(this.h), value.cPointer())

}
func (this *QPropertyAnimation) OnupdateCurrentValue(slot func(super func(value *QVariant), value *QVariant)) {
	ok := C.QPropertyAnimation_override_virtual_updateCurrentValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_updateCurrentValue
func miqt_exec_callback_QPropertyAnimation_updateCurrentValue(self *C.QPropertyAnimation, cb C.intptr_t, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value *QVariant), value *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(value)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_UpdateCurrentValue, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QPropertyAnimation_virtualbase_updateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QPropertyAnimation) OnupdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	ok := C.QPropertyAnimation_override_virtual_updateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_updateState
func miqt_exec_callback_QPropertyAnimation_updateState(self *C.QPropertyAnimation, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QPropertyAnimation) callVirtualBase_Duration() int {

	return (int)(C.QPropertyAnimation_virtualbase_duration(unsafe.Pointer(this.h)))

}
func (this *QPropertyAnimation) Onduration(slot func(super func() int) int) {
	ok := C.QPropertyAnimation_override_virtual_duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_duration
func miqt_exec_callback_QPropertyAnimation_duration(self *C.QPropertyAnimation, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPropertyAnimation{h: self}).callVirtualBase_Duration)

	return (C.int)(virtualReturn)

}

func (this *QPropertyAnimation) callVirtualBase_UpdateCurrentTime(param1 int) {

	C.QPropertyAnimation_virtualbase_updateCurrentTime(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QPropertyAnimation) OnupdateCurrentTime(slot func(super func(param1 int), param1 int)) {
	ok := C.QPropertyAnimation_override_virtual_updateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_updateCurrentTime
func miqt_exec_callback_QPropertyAnimation_updateCurrentTime(self *C.QPropertyAnimation, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_UpdateCurrentTime, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_Interpolated(from *QVariant, to *QVariant, progress float64) *QVariant {

	_goptr := newQVariant(C.QPropertyAnimation_virtualbase_interpolated(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.double)(progress)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPropertyAnimation) Oninterpolated(slot func(super func(from *QVariant, to *QVariant, progress float64) *QVariant, from *QVariant, to *QVariant, progress float64) *QVariant) {
	ok := C.QPropertyAnimation_override_virtual_interpolated(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_interpolated
func miqt_exec_callback_QPropertyAnimation_interpolated(self *C.QPropertyAnimation, cb C.intptr_t, from *C.QVariant, to *C.QVariant, progress C.double) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QVariant, to *QVariant, progress float64) *QVariant, from *QVariant, to *QVariant, progress float64) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(from)

	slotval2 := newQVariant(to)

	slotval3 := (float64)(progress)

	virtualReturn := gofunc((&QPropertyAnimation{h: self}).callVirtualBase_Interpolated, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QPropertyAnimation) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QPropertyAnimation_virtualbase_updateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QPropertyAnimation) OnupdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	ok := C.QPropertyAnimation_override_virtual_updateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_updateDirection
func miqt_exec_callback_QPropertyAnimation_updateDirection(self *C.QPropertyAnimation, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPropertyAnimation_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPropertyAnimation) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPropertyAnimation_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_eventFilter
func miqt_exec_callback_QPropertyAnimation_eventFilter(self *C.QPropertyAnimation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPropertyAnimation{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPropertyAnimation) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPropertyAnimation_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPropertyAnimation) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPropertyAnimation_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_timerEvent
func miqt_exec_callback_QPropertyAnimation_timerEvent(self *C.QPropertyAnimation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPropertyAnimation_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPropertyAnimation) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPropertyAnimation_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_childEvent
func miqt_exec_callback_QPropertyAnimation_childEvent(self *C.QPropertyAnimation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPropertyAnimation_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPropertyAnimation) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPropertyAnimation_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_customEvent
func miqt_exec_callback_QPropertyAnimation_customEvent(self *C.QPropertyAnimation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPropertyAnimation_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPropertyAnimation) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPropertyAnimation_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_connectNotify
func miqt_exec_callback_QPropertyAnimation_connectNotify(self *C.QPropertyAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPropertyAnimation_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPropertyAnimation) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPropertyAnimation_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPropertyAnimation_disconnectNotify
func miqt_exec_callback_QPropertyAnimation_disconnectNotify(self *C.QPropertyAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPropertyAnimation) Delete() {
	C.QPropertyAnimation_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
