package designer

/*

#include "gen_default_extensionfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QExtensionFactory struct {
	h *C.QExtensionFactory
	*qt6.QObject
	*QAbstractExtensionFactory
}

func (this *QExtensionFactory) cPointer() *C.QExtensionFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QExtensionFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQExtensionFactory constructs the type using only CGO pointers.
func newQExtensionFactory(h *C.QExtensionFactory) *QExtensionFactory {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QAbstractExtensionFactory *C.QAbstractExtensionFactory = nil
	C.QExtensionFactory_virtbase(h, &outptr_QObject, &outptr_QAbstractExtensionFactory)

	return &QExtensionFactory{h: h,
		QObject:                   qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QAbstractExtensionFactory: newQAbstractExtensionFactory(outptr_QAbstractExtensionFactory)}
}

// UnsafeNewQExtensionFactory constructs the type using only unsafe pointers.
func UnsafeNewQExtensionFactory(h unsafe.Pointer) *QExtensionFactory {
	return newQExtensionFactory((*C.QExtensionFactory)(h))
}

// NewQExtensionFactory constructs a new QExtensionFactory object.
func NewQExtensionFactory() *QExtensionFactory {

	return newQExtensionFactory(C.QExtensionFactory_new())
}

// NewQExtensionFactory2 constructs a new QExtensionFactory object.
func NewQExtensionFactory2(parent *QExtensionManager) *QExtensionFactory {

	return newQExtensionFactory(C.QExtensionFactory_new2(parent.cPointer()))
}

func (this *QExtensionFactory) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QExtensionFactory_metaObject(this.h)))
}

func (this *QExtensionFactory) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QExtensionFactory_metacast(this.h, param1_Cstring))
}

func QExtensionFactory_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionFactory_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QExtensionFactory) Extension(object *qt6.QObject, iid string) *qt6.QObject {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QExtensionFactory_extension(this.h, (*C.QObject)(object.UnsafePointer()), iid_ms)))
}

func (this *QExtensionFactory) ExtensionManager() *QExtensionManager {
	return newQExtensionManager(C.QExtensionFactory_extensionManager(this.h))
}

func QExtensionFactory_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionFactory_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QExtensionFactory_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QExtensionFactory_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QExtensionFactory that was directly constructed.
func (this *QExtensionFactory) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QExtensionFactory_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QExtensionFactory that was directly constructed.
func (this *QExtensionFactory) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QExtensionFactory_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QExtensionFactory that was directly constructed.
func (this *QExtensionFactory) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QExtensionFactory_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QExtensionFactory that was directly constructed.
func (this *QExtensionFactory) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QExtensionFactory_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QExtensionFactory) callVirtualBase_Extension(object *qt6.QObject, iid string) *qt6.QObject {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))

	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QExtensionFactory_virtualbase_extension(unsafe.Pointer(this.h), (*C.QObject)(object.UnsafePointer()), iid_ms)))

}
func (this *QExtensionFactory) OnExtension(slot func(super func(object *qt6.QObject, iid string) *qt6.QObject, object *qt6.QObject, iid string) *qt6.QObject) {
	ok := C.QExtensionFactory_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_extension
func miqt_exec_callback_QExtensionFactory_extension(self *C.QExtensionFactory, cb C.intptr_t, object *C.QObject, iid C.struct_miqt_string) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *qt6.QObject, iid string) *qt6.QObject, object *qt6.QObject, iid string) *qt6.QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

	var iid_ms C.struct_miqt_string = iid
	iid_ret := C.GoStringN(iid_ms.data, C.int(int64(iid_ms.len)))
	C.free(unsafe.Pointer(iid_ms.data))
	slotval2 := iid_ret

	virtualReturn := gofunc((&QExtensionFactory{h: self}).callVirtualBase_Extension, slotval1, slotval2)

	return (*C.QObject)(virtualReturn.UnsafePointer())

}

func (this *QExtensionFactory) callVirtualBase_CreateExtension(object *qt6.QObject, iid string, parent *qt6.QObject) *qt6.QObject {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))

	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QExtensionFactory_virtualbase_createExtension(unsafe.Pointer(this.h), (*C.QObject)(object.UnsafePointer()), iid_ms, (*C.QObject)(parent.UnsafePointer()))))

}
func (this *QExtensionFactory) OnCreateExtension(slot func(super func(object *qt6.QObject, iid string, parent *qt6.QObject) *qt6.QObject, object *qt6.QObject, iid string, parent *qt6.QObject) *qt6.QObject) {
	ok := C.QExtensionFactory_override_virtual_createExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_createExtension
func miqt_exec_callback_QExtensionFactory_createExtension(self *C.QExtensionFactory, cb C.intptr_t, object *C.QObject, iid C.struct_miqt_string, parent *C.QObject) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *qt6.QObject, iid string, parent *qt6.QObject) *qt6.QObject, object *qt6.QObject, iid string, parent *qt6.QObject) *qt6.QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

	var iid_ms C.struct_miqt_string = iid
	iid_ret := C.GoStringN(iid_ms.data, C.int(int64(iid_ms.len)))
	C.free(unsafe.Pointer(iid_ms.data))
	slotval2 := iid_ret
	slotval3 := qt6.UnsafeNewQObject(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QExtensionFactory{h: self}).callVirtualBase_CreateExtension, slotval1, slotval2, slotval3)

	return (*C.QObject)(virtualReturn.UnsafePointer())

}

func (this *QExtensionFactory) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QExtensionFactory_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QExtensionFactory) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QExtensionFactory_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_event
func miqt_exec_callback_QExtensionFactory_event(self *C.QExtensionFactory, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QExtensionFactory{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QExtensionFactory) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QExtensionFactory_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QExtensionFactory) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QExtensionFactory_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_eventFilter
func miqt_exec_callback_QExtensionFactory_eventFilter(self *C.QExtensionFactory, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QExtensionFactory{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QExtensionFactory) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QExtensionFactory_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QExtensionFactory) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QExtensionFactory_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_timerEvent
func miqt_exec_callback_QExtensionFactory_timerEvent(self *C.QExtensionFactory, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QExtensionFactory{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QExtensionFactory) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QExtensionFactory_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QExtensionFactory) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QExtensionFactory_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_childEvent
func miqt_exec_callback_QExtensionFactory_childEvent(self *C.QExtensionFactory, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QExtensionFactory{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QExtensionFactory) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QExtensionFactory_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QExtensionFactory) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QExtensionFactory_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_customEvent
func miqt_exec_callback_QExtensionFactory_customEvent(self *C.QExtensionFactory, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QExtensionFactory{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QExtensionFactory) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QExtensionFactory_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QExtensionFactory) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QExtensionFactory_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_connectNotify
func miqt_exec_callback_QExtensionFactory_connectNotify(self *C.QExtensionFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QExtensionFactory{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QExtensionFactory) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QExtensionFactory_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QExtensionFactory) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QExtensionFactory_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QExtensionFactory_disconnectNotify
func miqt_exec_callback_QExtensionFactory_disconnectNotify(self *C.QExtensionFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QExtensionFactory{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QExtensionFactory) Delete() {
	C.QExtensionFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QExtensionFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QExtensionFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
