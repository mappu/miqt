package qt6

/*

#include "gen_qactiongroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QActionGroup__ExclusionPolicy int

const (
	QActionGroup__None              QActionGroup__ExclusionPolicy = 0
	QActionGroup__Exclusive         QActionGroup__ExclusionPolicy = 1
	QActionGroup__ExclusiveOptional QActionGroup__ExclusionPolicy = 2
)

type QActionGroup struct {
	h *C.QActionGroup
	*QObject
}

func (this *QActionGroup) cPointer() *C.QActionGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QActionGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQActionGroup constructs the type using only CGO pointers.
func newQActionGroup(h *C.QActionGroup) *QActionGroup {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QActionGroup_virtbase(h, &outptr_QObject)

	return &QActionGroup{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQActionGroup constructs the type using only unsafe pointers.
func UnsafeNewQActionGroup(h unsafe.Pointer) *QActionGroup {
	return newQActionGroup((*C.QActionGroup)(h))
}

// NewQActionGroup constructs a new QActionGroup object.
func NewQActionGroup(parent *QObject) *QActionGroup {

	return newQActionGroup(C.QActionGroup_new(parent.cPointer()))
}

func (this *QActionGroup) MetaObject() *QMetaObject {
	return newQMetaObject(C.QActionGroup_MetaObject(this.h))
}

func (this *QActionGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QActionGroup_Metacast(this.h, param1_Cstring))
}

func QActionGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QActionGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QActionGroup) AddAction(a *QAction) *QAction {
	return newQAction(C.QActionGroup_AddAction(this.h, a.cPointer()))
}

func (this *QActionGroup) AddActionWithText(text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QActionGroup_AddActionWithText(this.h, text_ms))
}

func (this *QActionGroup) AddAction2(icon *QIcon, text string) *QAction {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQAction(C.QActionGroup_AddAction2(this.h, icon.cPointer(), text_ms))
}

func (this *QActionGroup) RemoveAction(a *QAction) {
	C.QActionGroup_RemoveAction(this.h, a.cPointer())
}

func (this *QActionGroup) Actions() []*QAction {
	var _ma C.struct_miqt_array = C.QActionGroup_Actions(this.h)
	_ret := make([]*QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAction(_outCast[i])
	}
	return _ret
}

func (this *QActionGroup) CheckedAction() *QAction {
	return newQAction(C.QActionGroup_CheckedAction(this.h))
}

func (this *QActionGroup) IsExclusive() bool {
	return (bool)(C.QActionGroup_IsExclusive(this.h))
}

func (this *QActionGroup) IsEnabled() bool {
	return (bool)(C.QActionGroup_IsEnabled(this.h))
}

func (this *QActionGroup) IsVisible() bool {
	return (bool)(C.QActionGroup_IsVisible(this.h))
}

func (this *QActionGroup) ExclusionPolicy() QActionGroup__ExclusionPolicy {
	return (QActionGroup__ExclusionPolicy)(C.QActionGroup_ExclusionPolicy(this.h))
}

func (this *QActionGroup) SetEnabled(enabled bool) {
	C.QActionGroup_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QActionGroup) SetDisabled(b bool) {
	C.QActionGroup_SetDisabled(this.h, (C.bool)(b))
}

func (this *QActionGroup) SetVisible(visible bool) {
	C.QActionGroup_SetVisible(this.h, (C.bool)(visible))
}

func (this *QActionGroup) SetExclusive(exclusive bool) {
	C.QActionGroup_SetExclusive(this.h, (C.bool)(exclusive))
}

func (this *QActionGroup) SetExclusionPolicy(policy QActionGroup__ExclusionPolicy) {
	C.QActionGroup_SetExclusionPolicy(this.h, (C.int)(policy))
}

func (this *QActionGroup) Triggered(param1 *QAction) {
	C.QActionGroup_Triggered(this.h, param1.cPointer())
}
func (this *QActionGroup) OnTriggered(slot func(param1 *QAction)) {
	C.QActionGroup_connect_Triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QActionGroup_Triggered
func miqt_exec_callback_QActionGroup_Triggered(cb C.intptr_t, param1 *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(param1)

	gofunc(slotval1)
}

func (this *QActionGroup) Hovered(param1 *QAction) {
	C.QActionGroup_Hovered(this.h, param1.cPointer())
}
func (this *QActionGroup) OnHovered(slot func(param1 *QAction)) {
	C.QActionGroup_connect_Hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QActionGroup_Hovered
func miqt_exec_callback_QActionGroup_Hovered(cb C.intptr_t, param1 *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction(param1)

	gofunc(slotval1)
}

func QActionGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QActionGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QActionGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QActionGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QActionGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QActionGroup_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QActionGroup) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QActionGroup_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionGroup_Event
func miqt_exec_callback_QActionGroup_Event(self *C.QActionGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QActionGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QActionGroup) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QActionGroup_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QActionGroup) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QActionGroup_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionGroup_EventFilter
func miqt_exec_callback_QActionGroup_EventFilter(self *C.QActionGroup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QActionGroup{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QActionGroup) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QActionGroup_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QActionGroup) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QActionGroup_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionGroup_TimerEvent
func miqt_exec_callback_QActionGroup_TimerEvent(self *C.QActionGroup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QActionGroup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QActionGroup) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QActionGroup_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QActionGroup) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QActionGroup_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionGroup_ChildEvent
func miqt_exec_callback_QActionGroup_ChildEvent(self *C.QActionGroup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QActionGroup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QActionGroup) callVirtualBase_CustomEvent(event *QEvent) {

	C.QActionGroup_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QActionGroup) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QActionGroup_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionGroup_CustomEvent
func miqt_exec_callback_QActionGroup_CustomEvent(self *C.QActionGroup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QActionGroup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QActionGroup) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QActionGroup_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QActionGroup) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QActionGroup_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionGroup_ConnectNotify
func miqt_exec_callback_QActionGroup_ConnectNotify(self *C.QActionGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QActionGroup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QActionGroup) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QActionGroup_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QActionGroup) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QActionGroup_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QActionGroup_DisconnectNotify
func miqt_exec_callback_QActionGroup_DisconnectNotify(self *C.QActionGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QActionGroup{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QActionGroup) Delete() {
	C.QActionGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QActionGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QActionGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
