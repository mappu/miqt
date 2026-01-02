package designer

/*

#include "gen_qextensionmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QExtensionManager struct {
	h *C.QExtensionManager
	*qt.QObject
	*QAbstractExtensionManager
}

func (this *QExtensionManager) cPointer() *C.QExtensionManager {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QExtensionManager) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQExtensionManager constructs the type using only CGO pointers.
func newQExtensionManager(h *C.QExtensionManager) *QExtensionManager {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QAbstractExtensionManager *C.QAbstractExtensionManager = nil
	C.QExtensionManager_virtbase(h, &outptr_QObject, &outptr_QAbstractExtensionManager)

	return &QExtensionManager{h: h,
		QObject:                   qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QAbstractExtensionManager: newQAbstractExtensionManager(outptr_QAbstractExtensionManager)}
}

// UnsafeNewQExtensionManager constructs the type using only unsafe pointers.
func UnsafeNewQExtensionManager(h unsafe.Pointer) *QExtensionManager {
	return newQExtensionManager((*C.QExtensionManager)(h))
}

// NewQExtensionManager constructs a new QExtensionManager object.
func NewQExtensionManager() *QExtensionManager {

	return newQExtensionManager(C.QExtensionManager_new())
}

// NewQExtensionManager2 constructs a new QExtensionManager object.
func NewQExtensionManager2(parent *qt.QObject) *QExtensionManager {

	return newQExtensionManager(C.QExtensionManager_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QExtensionManager) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QExtensionManager_metaObject(this.h)))
}

func (this *QExtensionManager) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QExtensionManager_metacast(this.h, param1_Cstring))
}

func QExtensionManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionManager_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QExtensionManager_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionManager_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QExtensionManager) RegisterExtensions(factory *QAbstractExtensionFactory, iid string) {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))
	C.QExtensionManager_registerExtensions(this.h, factory.cPointer(), iid_ms)
}

func (this *QExtensionManager) UnregisterExtensions(factory *QAbstractExtensionFactory, iid string) {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))
	C.QExtensionManager_unregisterExtensions(this.h, factory.cPointer(), iid_ms)
}

func (this *QExtensionManager) Extension(object *qt.QObject, iid string) *qt.QObject {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))
	return qt.UnsafeNewQObject(unsafe.Pointer(C.QExtensionManager_extension(this.h, (*C.QObject)(object.UnsafePointer()), iid_ms)))
}

func QExtensionManager_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionManager_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QExtensionManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionManager_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QExtensionManager_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionManager_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QExtensionManager_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionManager_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QExtensionManager that was directly constructed.
func (this *QExtensionManager) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QExtensionManager_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QExtensionManager that was directly constructed.
func (this *QExtensionManager) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QExtensionManager_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QExtensionManager that was directly constructed.
func (this *QExtensionManager) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QExtensionManager_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QExtensionManager that was directly constructed.
func (this *QExtensionManager) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QExtensionManager_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QExtensionManager) callVirtualBase_RegisterExtensions(factory *QAbstractExtensionFactory, iid string) {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))

	C.QExtensionManager_virtualbase_registerExtensions(unsafe.Pointer(this.h), factory.cPointer(), iid_ms)

}
func (this *QExtensionManager) OnRegisterExtensions(slot func(super func(factory *QAbstractExtensionFactory, iid string), factory *QAbstractExtensionFactory, iid string)) {
	ok := C.QExtensionManager_override_virtual_registerExtensions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_registerExtensions
func miqt_exec_callback_QExtensionManager_registerExtensions(self *C.QExtensionManager, cb C.intptr_t, factory *C.QAbstractExtensionFactory, iid C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(factory *QAbstractExtensionFactory, iid string), factory *QAbstractExtensionFactory, iid string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractExtensionFactory(factory)

	var iid_ms C.struct_miqt_string = iid
	iid_ret := C.GoStringN(iid_ms.data, C.int(int64(iid_ms.len)))
	C.free(unsafe.Pointer(iid_ms.data))
	slotval2 := iid_ret

	gofunc((&QExtensionManager{h: self}).callVirtualBase_RegisterExtensions, slotval1, slotval2)

}

func (this *QExtensionManager) callVirtualBase_UnregisterExtensions(factory *QAbstractExtensionFactory, iid string) {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))

	C.QExtensionManager_virtualbase_unregisterExtensions(unsafe.Pointer(this.h), factory.cPointer(), iid_ms)

}
func (this *QExtensionManager) OnUnregisterExtensions(slot func(super func(factory *QAbstractExtensionFactory, iid string), factory *QAbstractExtensionFactory, iid string)) {
	ok := C.QExtensionManager_override_virtual_unregisterExtensions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_unregisterExtensions
func miqt_exec_callback_QExtensionManager_unregisterExtensions(self *C.QExtensionManager, cb C.intptr_t, factory *C.QAbstractExtensionFactory, iid C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(factory *QAbstractExtensionFactory, iid string), factory *QAbstractExtensionFactory, iid string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractExtensionFactory(factory)

	var iid_ms C.struct_miqt_string = iid
	iid_ret := C.GoStringN(iid_ms.data, C.int(int64(iid_ms.len)))
	C.free(unsafe.Pointer(iid_ms.data))
	slotval2 := iid_ret

	gofunc((&QExtensionManager{h: self}).callVirtualBase_UnregisterExtensions, slotval1, slotval2)

}

func (this *QExtensionManager) callVirtualBase_Extension(object *qt.QObject, iid string) *qt.QObject {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))

	return qt.UnsafeNewQObject(unsafe.Pointer(C.QExtensionManager_virtualbase_extension(unsafe.Pointer(this.h), (*C.QObject)(object.UnsafePointer()), iid_ms)))

}
func (this *QExtensionManager) OnExtension(slot func(super func(object *qt.QObject, iid string) *qt.QObject, object *qt.QObject, iid string) *qt.QObject) {
	ok := C.QExtensionManager_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_extension
func miqt_exec_callback_QExtensionManager_extension(self *C.QExtensionManager, cb C.intptr_t, object *C.QObject, iid C.struct_miqt_string) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *qt.QObject, iid string) *qt.QObject, object *qt.QObject, iid string) *qt.QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(object))

	var iid_ms C.struct_miqt_string = iid
	iid_ret := C.GoStringN(iid_ms.data, C.int(int64(iid_ms.len)))
	C.free(unsafe.Pointer(iid_ms.data))
	slotval2 := iid_ret

	virtualReturn := gofunc((&QExtensionManager{h: self}).callVirtualBase_Extension, slotval1, slotval2)

	return (*C.QObject)(virtualReturn.UnsafePointer())

}

func (this *QExtensionManager) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QExtensionManager_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QExtensionManager) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QExtensionManager_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_event
func miqt_exec_callback_QExtensionManager_event(self *C.QExtensionManager, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QExtensionManager{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QExtensionManager) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QExtensionManager_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QExtensionManager) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QExtensionManager_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_eventFilter
func miqt_exec_callback_QExtensionManager_eventFilter(self *C.QExtensionManager, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QExtensionManager{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QExtensionManager) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QExtensionManager_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QExtensionManager) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QExtensionManager_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_timerEvent
func miqt_exec_callback_QExtensionManager_timerEvent(self *C.QExtensionManager, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QExtensionManager{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QExtensionManager) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QExtensionManager_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QExtensionManager) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QExtensionManager_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_childEvent
func miqt_exec_callback_QExtensionManager_childEvent(self *C.QExtensionManager, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QExtensionManager{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QExtensionManager) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QExtensionManager_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QExtensionManager) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QExtensionManager_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_customEvent
func miqt_exec_callback_QExtensionManager_customEvent(self *C.QExtensionManager, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QExtensionManager{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QExtensionManager) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QExtensionManager_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QExtensionManager) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QExtensionManager_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_connectNotify
func miqt_exec_callback_QExtensionManager_connectNotify(self *C.QExtensionManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QExtensionManager{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QExtensionManager) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QExtensionManager_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QExtensionManager) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QExtensionManager_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionManager_disconnectNotify
func miqt_exec_callback_QExtensionManager_disconnectNotify(self *C.QExtensionManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QExtensionManager{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QExtensionManager) Delete() {
	C.QExtensionManager_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QExtensionManager) GoGC() {
	runtime.SetFinalizer(this, func(this *QExtensionManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
