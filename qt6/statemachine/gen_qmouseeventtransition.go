package statemachine

/*

#include "gen_qmouseeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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
func NewQMouseEventTransition2(object *qt6.QObject, typeVal qt6.QEvent__Type, button qt6.MouseButton) *QMouseEventTransition {

	return newQMouseEventTransition(C.QMouseEventTransition_new2((*C.QObject)(object.UnsafePointer()), (C.int)(typeVal), (C.int)(button)))
}

// NewQMouseEventTransition3 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition3(sourceState *QState) *QMouseEventTransition {

	return newQMouseEventTransition(C.QMouseEventTransition_new3(sourceState.cPointer()))
}

// NewQMouseEventTransition4 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition4(object *qt6.QObject, typeVal qt6.QEvent__Type, button qt6.MouseButton, sourceState *QState) *QMouseEventTransition {

	return newQMouseEventTransition(C.QMouseEventTransition_new4((*C.QObject)(object.UnsafePointer()), (C.int)(typeVal), (C.int)(button), sourceState.cPointer()))
}

func (this *QMouseEventTransition) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMouseEventTransition_metaObject(this.h)))
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

func (this *QMouseEventTransition) Button() qt6.MouseButton {
	return (qt6.MouseButton)(C.QMouseEventTransition_button(this.h))
}

func (this *QMouseEventTransition) SetButton(button qt6.MouseButton) {
	C.QMouseEventTransition_setButton(this.h, (C.int)(button))
}

func (this *QMouseEventTransition) ModifierMask() qt6.KeyboardModifier {
	return (qt6.KeyboardModifier)(C.QMouseEventTransition_modifierMask(this.h))
}

func (this *QMouseEventTransition) SetModifierMask(modifiers qt6.KeyboardModifier) {
	C.QMouseEventTransition_setModifierMask(this.h, (C.int)(modifiers))
}

func (this *QMouseEventTransition) HitTestPath() *qt6.QPainterPath {
	_goptr := qt6.UnsafeNewQPainterPath(unsafe.Pointer(C.QMouseEventTransition_hitTestPath(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEventTransition) SetHitTestPath(path *qt6.QPainterPath) {
	C.QMouseEventTransition_setHitTestPath(this.h, (*C.QPainterPath)(path.UnsafePointer()))
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

// Sender can only be called from a QMouseEventTransition that was directly constructed.
func (this *QMouseEventTransition) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QMouseEventTransition_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMouseEventTransition that was directly constructed.
func (this *QMouseEventTransition) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMouseEventTransition_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMouseEventTransition that was directly constructed.
func (this *QMouseEventTransition) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMouseEventTransition_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMouseEventTransition that was directly constructed.
func (this *QMouseEventTransition) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMouseEventTransition_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMouseEventTransition) callVirtualBase_OnTransition(event *qt6.QEvent) {

	C.QMouseEventTransition_virtualbase_onTransition(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMouseEventTransition) OnOnTransition(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QMouseEventTransition_override_virtual_onTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_onTransition
func miqt_exec_callback_QMouseEventTransition_onTransition(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_EventTest(event *qt6.QEvent) bool {

	return (bool)(C.QMouseEventTransition_virtualbase_eventTest(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMouseEventTransition) OnEventTest(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QMouseEventTransition_override_virtual_eventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_eventTest
func miqt_exec_callback_QMouseEventTransition_eventTest(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMouseEventTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEventTransition) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.QMouseEventTransition_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QMouseEventTransition) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QMouseEventTransition_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_event
func miqt_exec_callback_QMouseEventTransition_event(self *C.QMouseEventTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QMouseEventTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEventTransition) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QMouseEventTransition_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMouseEventTransition) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QMouseEventTransition_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_eventFilter
func miqt_exec_callback_QMouseEventTransition_eventFilter(self *C.QMouseEventTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMouseEventTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEventTransition) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QMouseEventTransition_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QMouseEventTransition) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QMouseEventTransition_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_timerEvent
func miqt_exec_callback_QMouseEventTransition_timerEvent(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QMouseEventTransition_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QMouseEventTransition) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QMouseEventTransition_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_childEvent
func miqt_exec_callback_QMouseEventTransition_childEvent(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QMouseEventTransition_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMouseEventTransition) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QMouseEventTransition_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_customEvent
func miqt_exec_callback_QMouseEventTransition_customEvent(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QMouseEventTransition_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMouseEventTransition) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMouseEventTransition_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_connectNotify
func miqt_exec_callback_QMouseEventTransition_connectNotify(self *C.QMouseEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QMouseEventTransition_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMouseEventTransition) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMouseEventTransition_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMouseEventTransition_disconnectNotify
func miqt_exec_callback_QMouseEventTransition_disconnectNotify(self *C.QMouseEventTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

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
