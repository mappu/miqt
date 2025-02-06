package webengine

/*

#include "gen_qwebengineurlrequestinterceptor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineUrlRequestInterceptor struct {
	h *C.QWebEngineUrlRequestInterceptor
	*qt.QObject
}

func (this *QWebEngineUrlRequestInterceptor) cPointer() *C.QWebEngineUrlRequestInterceptor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineUrlRequestInterceptor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineUrlRequestInterceptor constructs the type using only CGO pointers.
func newQWebEngineUrlRequestInterceptor(h *C.QWebEngineUrlRequestInterceptor) *QWebEngineUrlRequestInterceptor {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineUrlRequestInterceptor_virtbase(h, &outptr_QObject)

	return &QWebEngineUrlRequestInterceptor{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineUrlRequestInterceptor constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineUrlRequestInterceptor(h unsafe.Pointer) *QWebEngineUrlRequestInterceptor {
	return newQWebEngineUrlRequestInterceptor((*C.QWebEngineUrlRequestInterceptor)(h))
}

// NewQWebEngineUrlRequestInterceptor constructs a new QWebEngineUrlRequestInterceptor object.
func NewQWebEngineUrlRequestInterceptor() *QWebEngineUrlRequestInterceptor {

	return newQWebEngineUrlRequestInterceptor(C.QWebEngineUrlRequestInterceptor_new())
}

// NewQWebEngineUrlRequestInterceptor2 constructs a new QWebEngineUrlRequestInterceptor object.
func NewQWebEngineUrlRequestInterceptor2(p *qt.QObject) *QWebEngineUrlRequestInterceptor {

	return newQWebEngineUrlRequestInterceptor(C.QWebEngineUrlRequestInterceptor_new2((*C.QObject)(p.UnsafePointer())))
}

func (this *QWebEngineUrlRequestInterceptor) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineUrlRequestInterceptor_metaObject(this.h)))
}

func (this *QWebEngineUrlRequestInterceptor) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineUrlRequestInterceptor_metacast(this.h, param1_Cstring))
}

func QWebEngineUrlRequestInterceptor_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlRequestInterceptor_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineUrlRequestInterceptor_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlRequestInterceptor_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineUrlRequestInterceptor) InterceptRequest(info *QWebEngineUrlRequestInfo) {
	C.QWebEngineUrlRequestInterceptor_interceptRequest(this.h, info.cPointer())
}

func QWebEngineUrlRequestInterceptor_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlRequestInterceptor_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineUrlRequestInterceptor_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlRequestInterceptor_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineUrlRequestInterceptor_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlRequestInterceptor_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineUrlRequestInterceptor_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlRequestInterceptor_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QWebEngineUrlRequestInterceptor that was directly constructed.
func (this *QWebEngineUrlRequestInterceptor) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QWebEngineUrlRequestInterceptor_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWebEngineUrlRequestInterceptor that was directly constructed.
func (this *QWebEngineUrlRequestInterceptor) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebEngineUrlRequestInterceptor_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWebEngineUrlRequestInterceptor that was directly constructed.
func (this *QWebEngineUrlRequestInterceptor) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebEngineUrlRequestInterceptor_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWebEngineUrlRequestInterceptor that was directly constructed.
func (this *QWebEngineUrlRequestInterceptor) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebEngineUrlRequestInterceptor_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QWebEngineUrlRequestInterceptor) OnInterceptRequest(slot func(info *QWebEngineUrlRequestInfo)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_interceptRequest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_interceptRequest
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_interceptRequest(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, info *C.QWebEngineUrlRequestInfo) {
	gofunc, ok := cgo.Handle(cb).Value().(func(info *QWebEngineUrlRequestInfo))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebEngineUrlRequestInfo(info)

	gofunc(slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QWebEngineUrlRequestInterceptor_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineUrlRequestInterceptor) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_event
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_event(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebEngineUrlRequestInterceptor_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineUrlRequestInterceptor) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_eventFilter
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_eventFilter(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_timerEvent
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_timerEvent(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_childEvent
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_childEvent(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_customEvent
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_customEvent(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_connectNotify
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_connectNotify(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_disconnectNotify
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_disconnectNotify(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebEngineUrlRequestInterceptor) Delete() {
	C.QWebEngineUrlRequestInterceptor_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineUrlRequestInterceptor) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineUrlRequestInterceptor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
