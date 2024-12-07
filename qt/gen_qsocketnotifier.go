package qt

/*

#include "gen_qsocketnotifier.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSocketNotifier__Type int

const (
	QSocketNotifier__Read      QSocketNotifier__Type = 0
	QSocketNotifier__Write     QSocketNotifier__Type = 1
	QSocketNotifier__Exception QSocketNotifier__Type = 2
)

type QSocketNotifier struct {
	h          *C.QSocketNotifier
	isSubclass bool
	*QObject
}

func (this *QSocketNotifier) cPointer() *C.QSocketNotifier {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSocketNotifier) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSocketNotifier constructs the type using only CGO pointers.
func newQSocketNotifier(h *C.QSocketNotifier, h_QObject *C.QObject) *QSocketNotifier {
	if h == nil {
		return nil
	}
	return &QSocketNotifier{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQSocketNotifier constructs the type using only unsafe pointers.
func UnsafeNewQSocketNotifier(h unsafe.Pointer, h_QObject unsafe.Pointer) *QSocketNotifier {
	if h == nil {
		return nil
	}

	return &QSocketNotifier{h: (*C.QSocketNotifier)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQSocketNotifier constructs a new QSocketNotifier object.
func NewQSocketNotifier(socket uintptr, param2 QSocketNotifier__Type) *QSocketNotifier {
	var outptr_QSocketNotifier *C.QSocketNotifier = nil
	var outptr_QObject *C.QObject = nil

	C.QSocketNotifier_new((C.intptr_t)(socket), (C.int)(param2), &outptr_QSocketNotifier, &outptr_QObject)
	ret := newQSocketNotifier(outptr_QSocketNotifier, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSocketNotifier2 constructs a new QSocketNotifier object.
func NewQSocketNotifier2(socket uintptr, param2 QSocketNotifier__Type, parent *QObject) *QSocketNotifier {
	var outptr_QSocketNotifier *C.QSocketNotifier = nil
	var outptr_QObject *C.QObject = nil

	C.QSocketNotifier_new2((C.intptr_t)(socket), (C.int)(param2), parent.cPointer(), &outptr_QSocketNotifier, &outptr_QObject)
	ret := newQSocketNotifier(outptr_QSocketNotifier, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QSocketNotifier) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSocketNotifier_MetaObject(this.h)))
}

func (this *QSocketNotifier) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSocketNotifier_Metacast(this.h, param1_Cstring))
}

func QSocketNotifier_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSocketNotifier_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSocketNotifier) Socket() uintptr {
	return (uintptr)(C.QSocketNotifier_Socket(this.h))
}

func (this *QSocketNotifier) Type() QSocketNotifier__Type {
	return (QSocketNotifier__Type)(C.QSocketNotifier_Type(this.h))
}

func (this *QSocketNotifier) IsEnabled() bool {
	return (bool)(C.QSocketNotifier_IsEnabled(this.h))
}

func (this *QSocketNotifier) SetEnabled(enabled bool) {
	C.QSocketNotifier_SetEnabled(this.h, (C.bool)(enabled))
}

func QSocketNotifier_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSocketNotifier_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSocketNotifier_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSocketNotifier_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSocketNotifier) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QSocketNotifier_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QSocketNotifier) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSocketNotifier_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSocketNotifier_Event
func miqt_exec_callback_QSocketNotifier_Event(self *C.QSocketNotifier, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QSocketNotifier{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSocketNotifier) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSocketNotifier_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSocketNotifier) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSocketNotifier_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSocketNotifier_EventFilter
func miqt_exec_callback_QSocketNotifier_EventFilter(self *C.QSocketNotifier, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSocketNotifier{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSocketNotifier) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSocketNotifier_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSocketNotifier) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSocketNotifier_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSocketNotifier_TimerEvent
func miqt_exec_callback_QSocketNotifier_TimerEvent(self *C.QSocketNotifier, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSocketNotifier) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSocketNotifier_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSocketNotifier) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSocketNotifier_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSocketNotifier_ChildEvent
func miqt_exec_callback_QSocketNotifier_ChildEvent(self *C.QSocketNotifier, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSocketNotifier) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSocketNotifier_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSocketNotifier) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSocketNotifier_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSocketNotifier_CustomEvent
func miqt_exec_callback_QSocketNotifier_CustomEvent(self *C.QSocketNotifier, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSocketNotifier) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSocketNotifier_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSocketNotifier) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSocketNotifier_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSocketNotifier_ConnectNotify
func miqt_exec_callback_QSocketNotifier_ConnectNotify(self *C.QSocketNotifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSocketNotifier) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSocketNotifier_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSocketNotifier) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSocketNotifier_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSocketNotifier_DisconnectNotify
func miqt_exec_callback_QSocketNotifier_DisconnectNotify(self *C.QSocketNotifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSocketNotifier) Delete() {
	C.QSocketNotifier_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSocketNotifier) GoGC() {
	runtime.SetFinalizer(this, func(this *QSocketNotifier) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSocketDescriptor struct {
	h          *C.QSocketDescriptor
	isSubclass bool
}

func (this *QSocketDescriptor) cPointer() *C.QSocketDescriptor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSocketDescriptor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSocketDescriptor constructs the type using only CGO pointers.
func newQSocketDescriptor(h *C.QSocketDescriptor) *QSocketDescriptor {
	if h == nil {
		return nil
	}
	return &QSocketDescriptor{h: h}
}

// UnsafeNewQSocketDescriptor constructs the type using only unsafe pointers.
func UnsafeNewQSocketDescriptor(h unsafe.Pointer) *QSocketDescriptor {
	if h == nil {
		return nil
	}

	return &QSocketDescriptor{h: (*C.QSocketDescriptor)(h)}
}

// NewQSocketDescriptor constructs a new QSocketDescriptor object.
func NewQSocketDescriptor() *QSocketDescriptor {
	var outptr_QSocketDescriptor *C.QSocketDescriptor = nil

	C.QSocketDescriptor_new(&outptr_QSocketDescriptor)
	ret := newQSocketDescriptor(outptr_QSocketDescriptor)
	ret.isSubclass = true
	return ret
}

// NewQSocketDescriptor2 constructs a new QSocketDescriptor object.
func NewQSocketDescriptor2(param1 *QSocketDescriptor) *QSocketDescriptor {
	var outptr_QSocketDescriptor *C.QSocketDescriptor = nil

	C.QSocketDescriptor_new2(param1.cPointer(), &outptr_QSocketDescriptor)
	ret := newQSocketDescriptor(outptr_QSocketDescriptor)
	ret.isSubclass = true
	return ret
}

// NewQSocketDescriptor3 constructs a new QSocketDescriptor object.
func NewQSocketDescriptor3(descriptor int) *QSocketDescriptor {

	if runtime.GOOS != "linux" {
		panic("Unsupported OS")
	}
	var outptr_QSocketDescriptor *C.QSocketDescriptor = nil

	C.QSocketDescriptor_new3((C.int)(descriptor), &outptr_QSocketDescriptor)
	ret := newQSocketDescriptor(outptr_QSocketDescriptor)
	ret.isSubclass = true
	return ret
}

func (this *QSocketDescriptor) IsValid() bool {
	return (bool)(C.QSocketDescriptor_IsValid(this.h))
}

// Delete this object from C++ memory.
func (this *QSocketDescriptor) Delete() {
	C.QSocketDescriptor_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSocketDescriptor) GoGC() {
	runtime.SetFinalizer(this, func(this *QSocketDescriptor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
