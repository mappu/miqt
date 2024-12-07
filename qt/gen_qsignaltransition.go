package qt

/*

#include "gen_qsignaltransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSignalTransition struct {
	h          *C.QSignalTransition
	isSubclass bool
	*QAbstractTransition
}

func (this *QSignalTransition) cPointer() *C.QSignalTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSignalTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSignalTransition constructs the type using only CGO pointers.
func newQSignalTransition(h *C.QSignalTransition, h_QAbstractTransition *C.QAbstractTransition, h_QObject *C.QObject) *QSignalTransition {
	if h == nil {
		return nil
	}
	return &QSignalTransition{h: h,
		QAbstractTransition: newQAbstractTransition(h_QAbstractTransition, h_QObject)}
}

// UnsafeNewQSignalTransition constructs the type using only unsafe pointers.
func UnsafeNewQSignalTransition(h unsafe.Pointer, h_QAbstractTransition unsafe.Pointer, h_QObject unsafe.Pointer) *QSignalTransition {
	if h == nil {
		return nil
	}

	return &QSignalTransition{h: (*C.QSignalTransition)(h),
		QAbstractTransition: UnsafeNewQAbstractTransition(h_QAbstractTransition, h_QObject)}
}

// NewQSignalTransition constructs a new QSignalTransition object.
func NewQSignalTransition() *QSignalTransition {
	var outptr_QSignalTransition *C.QSignalTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QSignalTransition_new(&outptr_QSignalTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQSignalTransition(outptr_QSignalTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSignalTransition2 constructs a new QSignalTransition object.
func NewQSignalTransition2(sender *QObject, signal string) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	var outptr_QSignalTransition *C.QSignalTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QSignalTransition_new2(sender.cPointer(), signal_Cstring, &outptr_QSignalTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQSignalTransition(outptr_QSignalTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSignalTransition3 constructs a new QSignalTransition object.
func NewQSignalTransition3(sourceState *QState) *QSignalTransition {
	var outptr_QSignalTransition *C.QSignalTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QSignalTransition_new3(sourceState.cPointer(), &outptr_QSignalTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQSignalTransition(outptr_QSignalTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSignalTransition4 constructs a new QSignalTransition object.
func NewQSignalTransition4(sender *QObject, signal string, sourceState *QState) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	var outptr_QSignalTransition *C.QSignalTransition = nil
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	var outptr_QObject *C.QObject = nil

	C.QSignalTransition_new4(sender.cPointer(), signal_Cstring, sourceState.cPointer(), &outptr_QSignalTransition, &outptr_QAbstractTransition, &outptr_QObject)
	ret := newQSignalTransition(outptr_QSignalTransition, outptr_QAbstractTransition, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QSignalTransition) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSignalTransition_MetaObject(this.h))
}

func (this *QSignalTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSignalTransition_Metacast(this.h, param1_Cstring))
}

func QSignalTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalTransition) SenderObject() *QObject {
	return newQObject(C.QSignalTransition_SenderObject(this.h))
}

func (this *QSignalTransition) SetSenderObject(sender *QObject) {
	C.QSignalTransition_SetSenderObject(this.h, sender.cPointer())
}

func (this *QSignalTransition) Signal() []byte {
	var _bytearray C.struct_miqt_string = C.QSignalTransition_Signal(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSignalTransition) SetSignal(signal []byte) {
	signal_alias := C.struct_miqt_string{}
	signal_alias.data = (*C.char)(unsafe.Pointer(&signal[0]))
	signal_alias.len = C.size_t(len(signal))
	C.QSignalTransition_SetSignal(this.h, signal_alias)
}

func QSignalTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_EventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSignalTransition) OnEventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalTransition_override_virtual_EventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalTransition_EventTest
func miqt_exec_callback_QSignalTransition_EventTest(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_OnTransition(event *QEvent) {

	C.QSignalTransition_virtualbase_OnTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OnOnTransition(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalTransition_override_virtual_OnTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalTransition_OnTransition
func miqt_exec_callback_QSignalTransition_OnTransition(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QSignalTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QSignalTransition) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSignalTransition_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalTransition_Event
func miqt_exec_callback_QSignalTransition_Event(self *C.QSignalTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QSignalTransition) Delete() {
	C.QSignalTransition_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSignalTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QSignalTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
