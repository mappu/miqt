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
	h *C.QSocketNotifier
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
func newQSocketNotifier(h *C.QSocketNotifier) *QSocketNotifier {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSocketNotifier_virtbase(h, &outptr_QObject)

	return &QSocketNotifier{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQSocketNotifier constructs the type using only unsafe pointers.
func UnsafeNewQSocketNotifier(h unsafe.Pointer) *QSocketNotifier {
	return newQSocketNotifier((*C.QSocketNotifier)(h))
}

// NewQSocketNotifier constructs a new QSocketNotifier object.
func NewQSocketNotifier(socket uintptr, param2 QSocketNotifier__Type) *QSocketNotifier {

	return newQSocketNotifier(C.QSocketNotifier_new((C.intptr_t)(socket), (C.int)(param2)))
}

// NewQSocketNotifier2 constructs a new QSocketNotifier object.
func NewQSocketNotifier2(socket uintptr, param2 QSocketNotifier__Type, parent *QObject) *QSocketNotifier {

	return newQSocketNotifier(C.QSocketNotifier_new2((C.intptr_t)(socket), (C.int)(param2), parent.cPointer()))
}

func (this *QSocketNotifier) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSocketNotifier_metaObject(this.h))
}

func (this *QSocketNotifier) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSocketNotifier_metacast(this.h, param1_Cstring))
}

func QSocketNotifier_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSocketNotifier_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSocketNotifier) Socket() uintptr {
	return (uintptr)(C.QSocketNotifier_socket(this.h))
}

func (this *QSocketNotifier) Type() QSocketNotifier__Type {
	return (QSocketNotifier__Type)(C.QSocketNotifier_type(this.h))
}

func (this *QSocketNotifier) IsEnabled() bool {
	return (bool)(C.QSocketNotifier_isEnabled(this.h))
}

func (this *QSocketNotifier) SetEnabled(enabled bool) {
	C.QSocketNotifier_setEnabled(this.h, (C.bool)(enabled))
}

func QSocketNotifier_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSocketNotifier_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSocketNotifier_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSocketNotifier_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSocketNotifier_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSocketNotifier) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QSocketNotifier_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QSocketNotifier) Onevent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QSocketNotifier_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSocketNotifier_event
func miqt_exec_callback_QSocketNotifier_event(self *C.QSocketNotifier, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QSocketNotifier{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSocketNotifier) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSocketNotifier_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSocketNotifier) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSocketNotifier_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSocketNotifier_eventFilter
func miqt_exec_callback_QSocketNotifier_eventFilter(self *C.QSocketNotifier, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSocketNotifier{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSocketNotifier) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSocketNotifier_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSocketNotifier) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSocketNotifier_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSocketNotifier_timerEvent
func miqt_exec_callback_QSocketNotifier_timerEvent(self *C.QSocketNotifier, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSocketNotifier) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSocketNotifier_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSocketNotifier) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSocketNotifier_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSocketNotifier_childEvent
func miqt_exec_callback_QSocketNotifier_childEvent(self *C.QSocketNotifier, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSocketNotifier) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSocketNotifier_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSocketNotifier) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSocketNotifier_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSocketNotifier_customEvent
func miqt_exec_callback_QSocketNotifier_customEvent(self *C.QSocketNotifier, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSocketNotifier) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSocketNotifier_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSocketNotifier) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSocketNotifier_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSocketNotifier_connectNotify
func miqt_exec_callback_QSocketNotifier_connectNotify(self *C.QSocketNotifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSocketNotifier) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSocketNotifier_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSocketNotifier) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSocketNotifier_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSocketNotifier_disconnectNotify
func miqt_exec_callback_QSocketNotifier_disconnectNotify(self *C.QSocketNotifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSocketNotifier{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSocketNotifier) Delete() {
	C.QSocketNotifier_delete(this.h)
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
	h *C.QSocketDescriptor
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
	return newQSocketDescriptor((*C.QSocketDescriptor)(h))
}

// NewQSocketDescriptor constructs a new QSocketDescriptor object.
func NewQSocketDescriptor() *QSocketDescriptor {

	return newQSocketDescriptor(C.QSocketDescriptor_new())
}

// NewQSocketDescriptor2 constructs a new QSocketDescriptor object.
func NewQSocketDescriptor2(param1 *QSocketDescriptor) *QSocketDescriptor {

	return newQSocketDescriptor(C.QSocketDescriptor_new2(param1.cPointer()))
}

// NewQSocketDescriptor3 constructs a new QSocketDescriptor object.
func NewQSocketDescriptor3(descriptor int) *QSocketDescriptor {

	if runtime.GOOS != "linux" {
		panic("Unsupported OS")
	}

	return newQSocketDescriptor(C.QSocketDescriptor_new3((C.int)(descriptor)))
}

func (this *QSocketDescriptor) ToInt() int {
	if runtime.GOOS != "linux" {
		panic("Unsupported OS")
	}

	return (int)(C.QSocketDescriptor_ToInt(this.h))
}

func (this *QSocketDescriptor) IsValid() bool {
	return (bool)(C.QSocketDescriptor_isValid(this.h))
}

// Delete this object from C++ memory.
func (this *QSocketDescriptor) Delete() {
	C.QSocketDescriptor_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSocketDescriptor) GoGC() {
	runtime.SetFinalizer(this, func(this *QSocketDescriptor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
