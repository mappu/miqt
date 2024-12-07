package qt

/*

#include "gen_qkeyeventtransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QKeyEventTransition struct {
	h          *C.QKeyEventTransition
	isSubclass bool
	*QEventTransition
}

func (this *QKeyEventTransition) cPointer() *C.QKeyEventTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeyEventTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQKeyEventTransition constructs the type using only CGO pointers.
func newQKeyEventTransition(h *C.QKeyEventTransition, h_QEventTransition *C.QEventTransition, h_QAbstractTransition *C.QAbstractTransition, h_QObject *C.QObject) *QKeyEventTransition {
	if h == nil {
		return nil
	}
	return &QKeyEventTransition{h: h,
		QEventTransition: newQEventTransition(h_QEventTransition, h_QAbstractTransition, h_QObject)}
}

// UnsafeNewQKeyEventTransition constructs the type using only unsafe pointers.
func UnsafeNewQKeyEventTransition(h unsafe.Pointer, h_QEventTransition unsafe.Pointer, h_QAbstractTransition unsafe.Pointer, h_QObject unsafe.Pointer) *QKeyEventTransition {
	if h == nil {
		return nil
	}

	return &QKeyEventTransition{h: (*C.QKeyEventTransition)(h),
		QEventTransition: UnsafeNewQEventTransition(h_QEventTransition, h_QAbstractTransition, h_QObject)}
}

// NewQKeyEventTransition constructs a new QKeyEventTransition object.
func NewQKeyEventTransition() *QKeyEventTransition {
	var outptr_QKeyEventTransition *C.QKeyEventTransition = nil
	var outptr_QEventTransition *C.QEventTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QKeyEventTransition_new(&outptr_QKeyEventTransition, &outptr_QEventTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQKeyEventTransition(outptr_QKeyEventTransition, outptr_QEventTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQKeyEventTransition2 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition2(object *QObject, typeVal QEvent__Type, key int) *QKeyEventTransition {
	var outptr_QKeyEventTransition *C.QKeyEventTransition = nil
	var outptr_QEventTransition *C.QEventTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QKeyEventTransition_new2(object.cPointer(), (C.int)(typeVal), (C.int)(key), &outptr_QKeyEventTransition, &outptr_QEventTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQKeyEventTransition(outptr_QKeyEventTransition, outptr_QEventTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQKeyEventTransition3 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition3(sourceState *QState) *QKeyEventTransition {
	var outptr_QKeyEventTransition *C.QKeyEventTransition = nil
	var outptr_QEventTransition *C.QEventTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QKeyEventTransition_new3(sourceState.cPointer(), &outptr_QKeyEventTransition, &outptr_QEventTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQKeyEventTransition(outptr_QKeyEventTransition, outptr_QEventTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQKeyEventTransition4 constructs a new QKeyEventTransition object.
func NewQKeyEventTransition4(object *QObject, typeVal QEvent__Type, key int, sourceState *QState) *QKeyEventTransition {
	var outptr_QKeyEventTransition *C.QKeyEventTransition = nil
	var outptr_QEventTransition *C.QEventTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QKeyEventTransition_new4(object.cPointer(), (C.int)(typeVal), (C.int)(key), sourceState.cPointer(), &outptr_QKeyEventTransition, &outptr_QEventTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQKeyEventTransition(outptr_QKeyEventTransition, outptr_QEventTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QKeyEventTransition) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QKeyEventTransition_MetaObject(this.h)))
}

func (this *QKeyEventTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QKeyEventTransition_Metacast(this.h, param1_Cstring))
}

func QKeyEventTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeyEventTransition) Key() int {
	return (int)(C.QKeyEventTransition_Key(this.h))
}

func (this *QKeyEventTransition) SetKey(key int) {
	C.QKeyEventTransition_SetKey(this.h, (C.int)(key))
}

func (this *QKeyEventTransition) ModifierMask() KeyboardModifier {
	return (KeyboardModifier)(C.QKeyEventTransition_ModifierMask(this.h))
}

func (this *QKeyEventTransition) SetModifierMask(modifiers KeyboardModifier) {
	C.QKeyEventTransition_SetModifierMask(this.h, (C.int)(modifiers))
}

func QKeyEventTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeyEventTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeyEventTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeyEventTransition) callVirtualBase_OnTransition(event *QEvent) {

	C.QKeyEventTransition_virtualbase_OnTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeyEventTransition) OnOnTransition(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeyEventTransition_override_virtual_OnTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeyEventTransition_OnTransition
func miqt_exec_callback_QKeyEventTransition_OnTransition(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QKeyEventTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QKeyEventTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QKeyEventTransition_virtualbase_EventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QKeyEventTransition) OnEventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeyEventTransition_override_virtual_EventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeyEventTransition_EventTest
func miqt_exec_callback_QKeyEventTransition_EventTest(self *C.QKeyEventTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QKeyEventTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QKeyEventTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QKeyEventTransition_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QKeyEventTransition) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeyEventTransition_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeyEventTransition_Event
func miqt_exec_callback_QKeyEventTransition_Event(self *C.QKeyEventTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QKeyEventTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QKeyEventTransition) Delete() {
	C.QKeyEventTransition_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeyEventTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeyEventTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
