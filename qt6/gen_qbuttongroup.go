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
	h *C.QButtonGroup
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
func newQButtonGroup(h *C.QButtonGroup) *QButtonGroup {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QButtonGroup_virtbase(h, &outptr_QObject)

	return &QButtonGroup{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQButtonGroup constructs the type using only unsafe pointers.
func UnsafeNewQButtonGroup(h unsafe.Pointer) *QButtonGroup {
	return newQButtonGroup((*C.QButtonGroup)(h))
}

// NewQButtonGroup constructs a new QButtonGroup object.
func NewQButtonGroup() *QButtonGroup {

	return newQButtonGroup(C.QButtonGroup_new())
}

// NewQButtonGroup2 constructs a new QButtonGroup object.
func NewQButtonGroup2(parent *QObject) *QButtonGroup {

	return newQButtonGroup(C.QButtonGroup_new2(parent.cPointer()))
}

func (this *QButtonGroup) MetaObject() *QMetaObject {
	return newQMetaObject(C.QButtonGroup_metaObject(this.h))
}

func (this *QButtonGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QButtonGroup_metacast(this.h, param1_Cstring))
}

func QButtonGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QButtonGroup) SetExclusive(exclusive bool) {
	C.QButtonGroup_setExclusive(this.h, (C.bool)(exclusive))
}

func (this *QButtonGroup) Exclusive() bool {
	return (bool)(C.QButtonGroup_exclusive(this.h))
}

func (this *QButtonGroup) AddButton(param1 *QAbstractButton) {
	C.QButtonGroup_addButton(this.h, param1.cPointer())
}

func (this *QButtonGroup) RemoveButton(param1 *QAbstractButton) {
	C.QButtonGroup_removeButton(this.h, param1.cPointer())
}

func (this *QButtonGroup) Buttons() []*QAbstractButton {
	var _ma C.struct_miqt_array = C.QButtonGroup_buttons(this.h)
	_ret := make([]*QAbstractButton, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractButton(_outCast[i])
	}
	return _ret
}

func (this *QButtonGroup) CheckedButton() *QAbstractButton {
	return newQAbstractButton(C.QButtonGroup_checkedButton(this.h))
}

func (this *QButtonGroup) Button(id int) *QAbstractButton {
	return newQAbstractButton(C.QButtonGroup_button(this.h, (C.int)(id)))
}

func (this *QButtonGroup) SetId(button *QAbstractButton, id int) {
	C.QButtonGroup_setId(this.h, button.cPointer(), (C.int)(id))
}

func (this *QButtonGroup) Id(button *QAbstractButton) int {
	return (int)(C.QButtonGroup_id(this.h, button.cPointer()))
}

func (this *QButtonGroup) CheckedId() int {
	return (int)(C.QButtonGroup_checkedId(this.h))
}

func (this *QButtonGroup) ButtonClicked(param1 *QAbstractButton) {
	C.QButtonGroup_buttonClicked(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonClicked(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_buttonClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_buttonClicked
func miqt_exec_callback_QButtonGroup_buttonClicked(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonPressed(param1 *QAbstractButton) {
	C.QButtonGroup_buttonPressed(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonPressed(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_buttonPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_buttonPressed
func miqt_exec_callback_QButtonGroup_buttonPressed(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonReleased(param1 *QAbstractButton) {
	C.QButtonGroup_buttonReleased(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonReleased(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_buttonReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_buttonReleased
func miqt_exec_callback_QButtonGroup_buttonReleased(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonToggled(param1 *QAbstractButton, param2 bool) {
	C.QButtonGroup_buttonToggled(this.h, param1.cPointer(), (C.bool)(param2))
}
func (this *QButtonGroup) OnButtonToggled(slot func(param1 *QAbstractButton, param2 bool)) {
	C.QButtonGroup_connect_buttonToggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_buttonToggled
func miqt_exec_callback_QButtonGroup_buttonToggled(cb C.intptr_t, param1 *C.QAbstractButton, param2 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton, param2 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(param1)

	slotval2 := (bool)(param2)

	gofunc(slotval1, slotval2)
}

func (this *QButtonGroup) IdClicked(param1 int) {
	C.QButtonGroup_idClicked(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdClicked(slot func(param1 int)) {
	C.QButtonGroup_connect_idClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_idClicked
func miqt_exec_callback_QButtonGroup_idClicked(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdPressed(param1 int) {
	C.QButtonGroup_idPressed(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdPressed(slot func(param1 int)) {
	C.QButtonGroup_connect_idPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_idPressed
func miqt_exec_callback_QButtonGroup_idPressed(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdReleased(param1 int) {
	C.QButtonGroup_idReleased(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdReleased(slot func(param1 int)) {
	C.QButtonGroup_connect_idReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_idReleased
func miqt_exec_callback_QButtonGroup_idReleased(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdToggled(param1 int, param2 bool) {
	C.QButtonGroup_idToggled(this.h, (C.int)(param1), (C.bool)(param2))
}
func (this *QButtonGroup) OnIdToggled(slot func(param1 int, param2 bool)) {
	C.QButtonGroup_connect_idToggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_idToggled
func miqt_exec_callback_QButtonGroup_idToggled(cb C.intptr_t, param1 C.int, param2 C.bool) {
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
	var _ms C.struct_miqt_string = C.QButtonGroup_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QButtonGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QButtonGroup) AddButton2(param1 *QAbstractButton, id int) {
	C.QButtonGroup_addButton2(this.h, param1.cPointer(), (C.int)(id))
}

func (this *QButtonGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QButtonGroup_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QButtonGroup) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QButtonGroup_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QButtonGroup_event
func miqt_exec_callback_QButtonGroup_event(self *C.QButtonGroup, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QButtonGroup_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QButtonGroup) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QButtonGroup_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QButtonGroup_eventFilter
func miqt_exec_callback_QButtonGroup_eventFilter(self *C.QButtonGroup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QButtonGroup_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QButtonGroup) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QButtonGroup_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QButtonGroup_timerEvent
func miqt_exec_callback_QButtonGroup_timerEvent(self *C.QButtonGroup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QButtonGroup) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QButtonGroup_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QButtonGroup) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QButtonGroup_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QButtonGroup_childEvent
func miqt_exec_callback_QButtonGroup_childEvent(self *C.QButtonGroup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QButtonGroup) callVirtualBase_CustomEvent(event *QEvent) {

	C.QButtonGroup_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QButtonGroup) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QButtonGroup_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QButtonGroup_customEvent
func miqt_exec_callback_QButtonGroup_customEvent(self *C.QButtonGroup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QButtonGroup) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QButtonGroup_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QButtonGroup) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QButtonGroup_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QButtonGroup_connectNotify
func miqt_exec_callback_QButtonGroup_connectNotify(self *C.QButtonGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QButtonGroup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QButtonGroup) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QButtonGroup_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QButtonGroup) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QButtonGroup_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QButtonGroup_disconnectNotify
func miqt_exec_callback_QButtonGroup_disconnectNotify(self *C.QButtonGroup, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QButtonGroup_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QButtonGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QButtonGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
