package qt6

/*

#include "gen_qbuttongroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QButtonGroup struct {
	h          *C.QButtonGroup
	isSubclass bool
	*QObject
}

func (this *QButtonGroup) cPointer() *C.QButtonGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QButtonGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQButtonGroup constructs the type using only CGO pointers.
func newQButtonGroup(h *C.QButtonGroup, h_QObject *C.QObject) *QButtonGroup {
	if h == nil {
		return nil
	}
	return &QButtonGroup{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQButtonGroup constructs the type using only unsafe pointers.
func UnsafeNewQButtonGroup(h unsafe.Pointer, h_QObject unsafe.Pointer) *QButtonGroup {
	if h == nil {
		return nil
	}

	return &QButtonGroup{h: (*C.QButtonGroup)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQButtonGroup constructs a new QButtonGroup object.
func NewQButtonGroup() *QButtonGroup {
	var outptr_QButtonGroup *C.QButtonGroup = nil
	var outptr_QObject *C.QObject = nil

	C.QButtonGroup_new(&outptr_QButtonGroup, &outptr_QObject)
	ret := newQButtonGroup(outptr_QButtonGroup, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQButtonGroup2 constructs a new QButtonGroup object.
func NewQButtonGroup2(parent *QObject) *QButtonGroup {
	var outptr_QButtonGroup *C.QButtonGroup = nil
	var outptr_QObject *C.QObject = nil

	C.QButtonGroup_new2(parent.cPointer(), &outptr_QButtonGroup, &outptr_QObject)
	ret := newQButtonGroup(outptr_QButtonGroup, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QButtonGroup) MetaObject() *QMetaObject {
	return newQMetaObject(C.QButtonGroup_MetaObject(this.h))
}

func (this *QButtonGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QButtonGroup_Metacast(this.h, param1_Cstring))
}

func QButtonGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QButtonGroup) SetExclusive(exclusive bool) {
	C.QButtonGroup_SetExclusive(this.h, (C.bool)(exclusive))
}

func (this *QButtonGroup) Exclusive() bool {
	return (bool)(C.QButtonGroup_Exclusive(this.h))
}

func (this *QButtonGroup) AddButton(param1 *QAbstractButton) {
	C.QButtonGroup_AddButton(this.h, param1.cPointer())
}

func (this *QButtonGroup) RemoveButton(param1 *QAbstractButton) {
	C.QButtonGroup_RemoveButton(this.h, param1.cPointer())
}

func (this *QButtonGroup) Buttons() []*QAbstractButton {
	var _ma C.struct_miqt_array = C.QButtonGroup_Buttons(this.h)
	_ret := make([]*QAbstractButton, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractButton(_outCast[i], nil, nil, nil)
	}
	return _ret
}

func (this *QButtonGroup) CheckedButton() *QAbstractButton {
	return newQAbstractButton(C.QButtonGroup_CheckedButton(this.h), nil, nil, nil)
}

func (this *QButtonGroup) Button(id int) *QAbstractButton {
	return newQAbstractButton(C.QButtonGroup_Button(this.h, (C.int)(id)), nil, nil, nil)
}

func (this *QButtonGroup) SetId(button *QAbstractButton, id int) {
	C.QButtonGroup_SetId(this.h, button.cPointer(), (C.int)(id))
}

func (this *QButtonGroup) Id(button *QAbstractButton) int {
	return (int)(C.QButtonGroup_Id(this.h, button.cPointer()))
}

func (this *QButtonGroup) CheckedId() int {
	return (int)(C.QButtonGroup_CheckedId(this.h))
}

func (this *QButtonGroup) ButtonClicked(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonClicked(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonClicked(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_ButtonClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonClicked
func miqt_exec_callback_QButtonGroup_ButtonClicked(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(param1, nil, nil, nil)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonPressed(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonPressed(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonPressed(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_ButtonPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonPressed
func miqt_exec_callback_QButtonGroup_ButtonPressed(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(param1, nil, nil, nil)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonReleased(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonReleased(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonReleased(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_ButtonReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonReleased
func miqt_exec_callback_QButtonGroup_ButtonReleased(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(param1, nil, nil, nil)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonToggled(param1 *QAbstractButton, param2 bool) {
	C.QButtonGroup_ButtonToggled(this.h, param1.cPointer(), (C.bool)(param2))
}
func (this *QButtonGroup) OnButtonToggled(slot func(param1 *QAbstractButton, param2 bool)) {
	C.QButtonGroup_connect_ButtonToggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonToggled
func miqt_exec_callback_QButtonGroup_ButtonToggled(cb C.intptr_t, param1 *C.QAbstractButton, param2 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton, param2 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(param1, nil, nil, nil)

	slotval2 := (bool)(param2)

	gofunc(slotval1, slotval2)
}

func (this *QButtonGroup) IdClicked(param1 int) {
	C.QButtonGroup_IdClicked(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdClicked(slot func(param1 int)) {
	C.QButtonGroup_connect_IdClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_IdClicked
func miqt_exec_callback_QButtonGroup_IdClicked(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdPressed(param1 int) {
	C.QButtonGroup_IdPressed(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdPressed(slot func(param1 int)) {
	C.QButtonGroup_connect_IdPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_IdPressed
func miqt_exec_callback_QButtonGroup_IdPressed(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdReleased(param1 int) {
	C.QButtonGroup_IdReleased(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdReleased(slot func(param1 int)) {
	C.QButtonGroup_connect_IdReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_IdReleased
func miqt_exec_callback_QButtonGroup_IdReleased(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdToggled(param1 int, param2 bool) {
	C.QButtonGroup_IdToggled(this.h, (C.int)(param1), (C.bool)(param2))
}
func (this *QButtonGroup) OnIdToggled(slot func(param1 int, param2 bool)) {
	C.QButtonGroup_connect_IdToggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_IdToggled
func miqt_exec_callback_QButtonGroup_IdToggled(cb C.intptr_t, param1 C.int, param2 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int, param2 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	slotval2 := (bool)(param2)

	gofunc(slotval1, slotval2)
}

func QButtonGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QButtonGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QButtonGroup) AddButton2(param1 *QAbstractButton, id int) {
	C.QButtonGroup_AddButton2(this.h, param1.cPointer(), (C.int)(id))
}

func (this *QButtonGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QButtonGroup_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QButtonGroup) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QButtonGroup_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_Event
func miqt_exec_callback_QButtonGroup_Event(self *C.QButtonGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QButtonGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QButtonGroup) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QButtonGroup_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QButtonGroup) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QButtonGroup_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_EventFilter
func miqt_exec_callback_QButtonGroup_EventFilter(self *C.QButtonGroup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QButtonGroup{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QButtonGroup) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QButtonGroup_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QButtonGroup) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QButtonGroup_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_TimerEvent
func miqt_exec_callback_QButtonGroup_TimerEvent(self *C.QButtonGroup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event, nil)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QButtonGroup) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QButtonGroup_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QButtonGroup) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QButtonGroup_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ChildEvent
func miqt_exec_callback_QButtonGroup_ChildEvent(self *C.QButtonGroup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event, nil)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QButtonGroup) callVirtualBase_CustomEvent(event *QEvent) {

	C.QButtonGroup_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QButtonGroup) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QButtonGroup_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_CustomEvent
func miqt_exec_callback_QButtonGroup_CustomEvent(self *C.QButtonGroup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QButtonGroup) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QButtonGroup_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QButtonGroup) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QButtonGroup_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ConnectNotify
func miqt_exec_callback_QButtonGroup_ConnectNotify(self *C.QButtonGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QButtonGroup) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QButtonGroup_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QButtonGroup) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QButtonGroup_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_DisconnectNotify
func miqt_exec_callback_QButtonGroup_DisconnectNotify(self *C.QButtonGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QButtonGroup) Delete() {
	C.QButtonGroup_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QButtonGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QButtonGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
