package qt

/*

#include "gen_qmouseeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMouseEventTransition struct {
	h *C.QMouseEventTransition
	*QEventTransition
}

func (this *QMouseEventTransition) cPointer() *C.QMouseEventTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMouseEventTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMouseEventTransition constructs the type using only CGO pointers.
func newQMouseEventTransition(h *C.QMouseEventTransition) *QMouseEventTransition {
	if h == nil {
		return nil
	}
	var outptr_QEventTransition *C.QEventTransition = nil
	C.QMouseEventTransition_virtbase(h, &outptr_QEventTransition)

	return &QMouseEventTransition{h: h,
		QEventTransition: newQEventTransition(outptr_QEventTransition)}
}

// UnsafeNewQMouseEventTransition constructs the type using only unsafe pointers.
func UnsafeNewQMouseEventTransition(h unsafe.Pointer) *QMouseEventTransition {
	return newQMouseEventTransition((*C.QMouseEventTransition)(h))
}

// NewQMouseEventTransition constructs a new QMouseEventTransition object.
func NewQMouseEventTransition() *QMouseEventTransition {

	return newQMouseEventTransition(C.QMouseEventTransition_new())
}

// NewQMouseEventTransition2 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition2(object *QObject, typeVal QEvent__Type, button MouseButton) *QMouseEventTransition {

	return newQMouseEventTransition(C.QMouseEventTransition_new2(object.cPointer(), (C.int)(typeVal), (C.int)(button)))
}

// NewQMouseEventTransition3 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition3(sourceState *QState) *QMouseEventTransition {

	return newQMouseEventTransition(C.QMouseEventTransition_new3(sourceState.cPointer()))
}

// NewQMouseEventTransition4 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition4(object *QObject, typeVal QEvent__Type, button MouseButton, sourceState *QState) *QMouseEventTransition {

	return newQMouseEventTransition(C.QMouseEventTransition_new4(object.cPointer(), (C.int)(typeVal), (C.int)(button), sourceState.cPointer()))
}

func (this *QMouseEventTransition) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMouseEventTransition_metaObject(this.h))
}

func (this *QMouseEventTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMouseEventTransition_metacast(this.h, param1_Cstring))
}

func QMouseEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMouseEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMouseEventTransition) Button() MouseButton {
	return (MouseButton)(C.QMouseEventTransition_button(this.h))
}

func (this *QMouseEventTransition) SetButton(button MouseButton) {
	C.QMouseEventTransition_setButton(this.h, (C.int)(button))
}

func (this *QMouseEventTransition) ModifierMask() KeyboardModifier {
	return (KeyboardModifier)(C.QMouseEventTransition_modifierMask(this.h))
}

func (this *QMouseEventTransition) SetModifierMask(modifiers KeyboardModifier) {
	C.QMouseEventTransition_setModifierMask(this.h, (C.int)(modifiers))
}

func (this *QMouseEventTransition) HitTestPath() *QPainterPath {
	_goptr := newQPainterPath(C.QMouseEventTransition_hitTestPath(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEventTransition) SetHitTestPath(path *QPainterPath) {
	C.QMouseEventTransition_setHitTestPath(this.h, path.cPointer())
}

func QMouseEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMouseEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMouseEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMouseEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMouseEventTransition) callVirtualBase_OnTransition(event *QEvent) {

	C.QMouseEventTransition_virtualbase_onTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMouseEventTransition) OnonTransition(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMouseEventTransition_override_virtual_onTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_onTransition
func miqt_exec_callback_QMouseEventTransition_onTransition(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QMouseEventTransition_virtualbase_eventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMouseEventTransition) OneventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QMouseEventTransition_override_virtual_eventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_eventTest
func miqt_exec_callback_QMouseEventTransition_eventTest(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMouseEventTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEventTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QMouseEventTransition_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QMouseEventTransition) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QMouseEventTransition_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_event
func miqt_exec_callback_QMouseEventTransition_event(self *C.QMouseEventTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QMouseEventTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEventTransition) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QMouseEventTransition_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QMouseEventTransition) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QMouseEventTransition_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_eventFilter
func miqt_exec_callback_QMouseEventTransition_eventFilter(self *C.QMouseEventTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QMouseEventTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEventTransition) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QMouseEventTransition_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMouseEventTransition) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QMouseEventTransition_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_timerEvent
func miqt_exec_callback_QMouseEventTransition_timerEvent(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QMouseEventTransition_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMouseEventTransition) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QMouseEventTransition_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_childEvent
func miqt_exec_callback_QMouseEventTransition_childEvent(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_CustomEvent(event *QEvent) {

	C.QMouseEventTransition_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMouseEventTransition) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMouseEventTransition_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_customEvent
func miqt_exec_callback_QMouseEventTransition_customEvent(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QMouseEventTransition_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMouseEventTransition) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMouseEventTransition_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_connectNotify
func miqt_exec_callback_QMouseEventTransition_connectNotify(self *C.QMouseEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QMouseEventTransition_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMouseEventTransition) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMouseEventTransition_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_disconnectNotify
func miqt_exec_callback_QMouseEventTransition_disconnectNotify(self *C.QMouseEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMouseEventTransition) Delete() {
	C.QMouseEventTransition_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMouseEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QMouseEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
