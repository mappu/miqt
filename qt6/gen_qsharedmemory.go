package qt6

/*

#include "gen_qsharedmemory.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSharedMemory__AccessMode int

const (
	QSharedMemory__ReadOnly  QSharedMemory__AccessMode = 0
	QSharedMemory__ReadWrite QSharedMemory__AccessMode = 1
)

type QSharedMemory__SharedMemoryError int

const (
	QSharedMemory__NoError          QSharedMemory__SharedMemoryError = 0
	QSharedMemory__PermissionDenied QSharedMemory__SharedMemoryError = 1
	QSharedMemory__InvalidSize      QSharedMemory__SharedMemoryError = 2
	QSharedMemory__KeyError         QSharedMemory__SharedMemoryError = 3
	QSharedMemory__AlreadyExists    QSharedMemory__SharedMemoryError = 4
	QSharedMemory__NotFound         QSharedMemory__SharedMemoryError = 5
	QSharedMemory__LockError        QSharedMemory__SharedMemoryError = 6
	QSharedMemory__OutOfResources   QSharedMemory__SharedMemoryError = 7
	QSharedMemory__UnknownError     QSharedMemory__SharedMemoryError = 8
)

type QSharedMemory struct {
	h          *C.QSharedMemory
	isSubclass bool
	*QObject
}

func (this *QSharedMemory) cPointer() *C.QSharedMemory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSharedMemory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSharedMemory constructs the type using only CGO pointers.
func newQSharedMemory(h *C.QSharedMemory) *QSharedMemory {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSharedMemory_virtbase(h, &outptr_QObject)

	return &QSharedMemory{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQSharedMemory constructs the type using only unsafe pointers.
func UnsafeNewQSharedMemory(h unsafe.Pointer) *QSharedMemory {
	return newQSharedMemory((*C.QSharedMemory)(h))
}

// NewQSharedMemory constructs a new QSharedMemory object.
func NewQSharedMemory() *QSharedMemory {

	ret := newQSharedMemory(C.QSharedMemory_new())
	ret.isSubclass = true
	return ret
}

// NewQSharedMemory2 constructs a new QSharedMemory object.
func NewQSharedMemory2(key string) *QSharedMemory {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	ret := newQSharedMemory(C.QSharedMemory_new2(key_ms))
	ret.isSubclass = true
	return ret
}

// NewQSharedMemory3 constructs a new QSharedMemory object.
func NewQSharedMemory3(parent *QObject) *QSharedMemory {

	ret := newQSharedMemory(C.QSharedMemory_new3(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQSharedMemory4 constructs a new QSharedMemory object.
func NewQSharedMemory4(key string, parent *QObject) *QSharedMemory {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	ret := newQSharedMemory(C.QSharedMemory_new4(key_ms, parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QSharedMemory) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSharedMemory_MetaObject(this.h))
}

func (this *QSharedMemory) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSharedMemory_Metacast(this.h, param1_Cstring))
}

func QSharedMemory_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSharedMemory_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSharedMemory) SetKey(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSharedMemory_SetKey(this.h, key_ms)
}

func (this *QSharedMemory) Key() string {
	var _ms C.struct_miqt_string = C.QSharedMemory_Key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSharedMemory) SetNativeKey(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSharedMemory_SetNativeKey(this.h, key_ms)
}

func (this *QSharedMemory) NativeKey() string {
	var _ms C.struct_miqt_string = C.QSharedMemory_NativeKey(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSharedMemory) Create(size int64) bool {
	return (bool)(C.QSharedMemory_Create(this.h, (C.ptrdiff_t)(size)))
}

func (this *QSharedMemory) Size() int64 {
	return (int64)(C.QSharedMemory_Size(this.h))
}

func (this *QSharedMemory) Attach() bool {
	return (bool)(C.QSharedMemory_Attach(this.h))
}

func (this *QSharedMemory) IsAttached() bool {
	return (bool)(C.QSharedMemory_IsAttached(this.h))
}

func (this *QSharedMemory) Detach() bool {
	return (bool)(C.QSharedMemory_Detach(this.h))
}

func (this *QSharedMemory) Data() unsafe.Pointer {
	return (unsafe.Pointer)(C.QSharedMemory_Data(this.h))
}

func (this *QSharedMemory) ConstData() unsafe.Pointer {
	return (unsafe.Pointer)(C.QSharedMemory_ConstData(this.h))
}

func (this *QSharedMemory) Data2() unsafe.Pointer {
	return (unsafe.Pointer)(C.QSharedMemory_Data2(this.h))
}

func (this *QSharedMemory) Lock() bool {
	return (bool)(C.QSharedMemory_Lock(this.h))
}

func (this *QSharedMemory) Unlock() bool {
	return (bool)(C.QSharedMemory_Unlock(this.h))
}

func (this *QSharedMemory) Error() QSharedMemory__SharedMemoryError {
	return (QSharedMemory__SharedMemoryError)(C.QSharedMemory_Error(this.h))
}

func (this *QSharedMemory) ErrorString() string {
	var _ms C.struct_miqt_string = C.QSharedMemory_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSharedMemory_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSharedMemory_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSharedMemory_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSharedMemory_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSharedMemory) Create2(size int64, mode QSharedMemory__AccessMode) bool {
	return (bool)(C.QSharedMemory_Create2(this.h, (C.ptrdiff_t)(size), (C.int)(mode)))
}

func (this *QSharedMemory) Attach1(mode QSharedMemory__AccessMode) bool {
	return (bool)(C.QSharedMemory_Attach1(this.h, (C.int)(mode)))
}

func (this *QSharedMemory) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSharedMemory_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSharedMemory) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSharedMemory_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSharedMemory_Event
func miqt_exec_callback_QSharedMemory_Event(self *C.QSharedMemory, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSharedMemory{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSharedMemory) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSharedMemory_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSharedMemory) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSharedMemory_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSharedMemory_EventFilter
func miqt_exec_callback_QSharedMemory_EventFilter(self *C.QSharedMemory, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSharedMemory{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSharedMemory) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSharedMemory_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSharedMemory) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSharedMemory_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSharedMemory_TimerEvent
func miqt_exec_callback_QSharedMemory_TimerEvent(self *C.QSharedMemory, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSharedMemory{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSharedMemory) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSharedMemory_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSharedMemory) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSharedMemory_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSharedMemory_ChildEvent
func miqt_exec_callback_QSharedMemory_ChildEvent(self *C.QSharedMemory, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSharedMemory{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSharedMemory) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSharedMemory_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSharedMemory) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSharedMemory_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSharedMemory_CustomEvent
func miqt_exec_callback_QSharedMemory_CustomEvent(self *C.QSharedMemory, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSharedMemory{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSharedMemory) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSharedMemory_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSharedMemory) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSharedMemory_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSharedMemory_ConnectNotify
func miqt_exec_callback_QSharedMemory_ConnectNotify(self *C.QSharedMemory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSharedMemory{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSharedMemory) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSharedMemory_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSharedMemory) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSharedMemory_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSharedMemory_DisconnectNotify
func miqt_exec_callback_QSharedMemory_DisconnectNotify(self *C.QSharedMemory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSharedMemory{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSharedMemory) Delete() {
	C.QSharedMemory_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSharedMemory) GoGC() {
	runtime.SetFinalizer(this, func(this *QSharedMemory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
