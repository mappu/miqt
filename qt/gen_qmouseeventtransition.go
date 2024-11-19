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
	h          *C.QMouseEventTransition
	isSubclass bool
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
func newQMouseEventTransition(h *C.QMouseEventTransition, h_QEventTransition *C.QEventTransition, h_QAbstractTransition *C.QAbstractTransition, h_QObject *C.QObject) *QMouseEventTransition {
	if h == nil {
		return nil
	}
	return &QMouseEventTransition{h: h,
		QEventTransition: newQEventTransition(h_QEventTransition, h_QAbstractTransition, h_QObject)}
}

// UnsafeNewQMouseEventTransition constructs the type using only unsafe pointers.
func UnsafeNewQMouseEventTransition(h unsafe.Pointer, h_QEventTransition unsafe.Pointer, h_QAbstractTransition unsafe.Pointer, h_QObject unsafe.Pointer) *QMouseEventTransition {
	if h == nil {
		return nil
	}

	return &QMouseEventTransition{h: (*C.QMouseEventTransition)(h),
		QEventTransition: UnsafeNewQEventTransition(h_QEventTransition, h_QAbstractTransition, h_QObject)}
}

// NewQMouseEventTransition constructs a new QMouseEventTransition object.
func NewQMouseEventTransition() *QMouseEventTransition {
	var outptr_QMouseEventTransition *C.QMouseEventTransition = nil
	var outptr_QEventTransition *C.QEventTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QMouseEventTransition_new(&outptr_QMouseEventTransition, &outptr_QEventTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQMouseEventTransition(outptr_QMouseEventTransition, outptr_QEventTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQMouseEventTransition2 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition2(object *QObject, typeVal QEvent__Type, button MouseButton) *QMouseEventTransition {
	var outptr_QMouseEventTransition *C.QMouseEventTransition = nil
	var outptr_QEventTransition *C.QEventTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QMouseEventTransition_new2(object.cPointer(), (C.int)(typeVal), (C.int)(button), &outptr_QMouseEventTransition, &outptr_QEventTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQMouseEventTransition(outptr_QMouseEventTransition, outptr_QEventTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQMouseEventTransition3 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition3(sourceState *QState) *QMouseEventTransition {
	var outptr_QMouseEventTransition *C.QMouseEventTransition = nil
	var outptr_QEventTransition *C.QEventTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QMouseEventTransition_new3(sourceState.cPointer(), &outptr_QMouseEventTransition, &outptr_QEventTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQMouseEventTransition(outptr_QMouseEventTransition, outptr_QEventTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQMouseEventTransition4 constructs a new QMouseEventTransition object.
func NewQMouseEventTransition4(object *QObject, typeVal QEvent__Type, button MouseButton, sourceState *QState) *QMouseEventTransition {
	var outptr_QMouseEventTransition *C.QMouseEventTransition = nil
	var outptr_QEventTransition *C.QEventTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QMouseEventTransition_new4(object.cPointer(), (C.int)(typeVal), (C.int)(button), sourceState.cPointer(), &outptr_QMouseEventTransition, &outptr_QEventTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQMouseEventTransition(outptr_QMouseEventTransition, outptr_QEventTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QMouseEventTransition) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMouseEventTransition_MetaObject(this.h)))
}

func (this *QMouseEventTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMouseEventTransition_Metacast(this.h, param1_Cstring))
}

func QMouseEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMouseEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMouseEventTransition) Button() MouseButton {
	return (MouseButton)(C.QMouseEventTransition_Button(this.h))
}

func (this *QMouseEventTransition) SetButton(button MouseButton) {
	C.QMouseEventTransition_SetButton(this.h, (C.int)(button))
}

func (this *QMouseEventTransition) ModifierMask() KeyboardModifier {
	return (KeyboardModifier)(C.QMouseEventTransition_ModifierMask(this.h))
}

func (this *QMouseEventTransition) SetModifierMask(modifiers KeyboardModifier) {
	C.QMouseEventTransition_SetModifierMask(this.h, (C.int)(modifiers))
}

func (this *QMouseEventTransition) HitTestPath() *QPainterPath {
	_ret := C.QMouseEventTransition_HitTestPath(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEventTransition) SetHitTestPath(path *QPainterPath) {
	C.QMouseEventTransition_SetHitTestPath(this.h, path.cPointer())
}

func QMouseEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMouseEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMouseEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMouseEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMouseEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMouseEventTransition) callVirtualBase_OnTransition(event *QEvent) {

	C.QMouseEventTransition_virtualbase_OnTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMouseEventTransition) OnOnTransition(slot func(super func(event *QEvent), event *QEvent)) {
	C.QMouseEventTransition_override_virtual_OnTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMouseEventTransition_OnTransition
func miqt_exec_callback_QMouseEventTransition_OnTransition(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMouseEventTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QMouseEventTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QMouseEventTransition_virtualbase_EventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMouseEventTransition) OnEventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QMouseEventTransition_override_virtual_EventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMouseEventTransition_EventTest
func miqt_exec_callback_QMouseEventTransition_EventTest(self *C.QMouseEventTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMouseEventTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMouseEventTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QMouseEventTransition_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QMouseEventTransition) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	C.QMouseEventTransition_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMouseEventTransition_Event
func miqt_exec_callback_QMouseEventTransition_Event(self *C.QMouseEventTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QMouseEventTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QMouseEventTransition) Delete() {
	C.QMouseEventTransition_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMouseEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QMouseEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
