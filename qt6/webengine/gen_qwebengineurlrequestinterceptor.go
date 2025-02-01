package webengine

/*

#include "gen_qwebengineurlrequestinterceptor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineUrlRequestInterceptor struct {
	h *C.QWebEngineUrlRequestInterceptor
	*qt6.QObject
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
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
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
func NewQWebEngineUrlRequestInterceptor2(p *qt6.QObject) *QWebEngineUrlRequestInterceptor {

	return newQWebEngineUrlRequestInterceptor(C.QWebEngineUrlRequestInterceptor_new2((*C.QObject)(p.UnsafePointer())))
}

func (this *QWebEngineUrlRequestInterceptor) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineUrlRequestInterceptor_metaObject(this.h)))
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
func (this *QWebEngineUrlRequestInterceptor) OninterceptRequest(slot func(info *QWebEngineUrlRequestInfo)) {
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

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QWebEngineUrlRequestInterceptor_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineUrlRequestInterceptor) Onevent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_event
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_event(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWebEngineUrlRequestInterceptor_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineUrlRequestInterceptor) OneventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_eventFilter
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_eventFilter(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OntimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_timerEvent
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_timerEvent(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OnchildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_childEvent
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_childEvent(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OncustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_customEvent
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_customEvent(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OnconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_connectNotify
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_connectNotify(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineUrlRequestInterceptor{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebEngineUrlRequestInterceptor) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWebEngineUrlRequestInterceptor_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineUrlRequestInterceptor) OndisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebEngineUrlRequestInterceptor_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlRequestInterceptor_disconnectNotify
func miqt_exec_callback_QWebEngineUrlRequestInterceptor_disconnectNotify(self *C.QWebEngineUrlRequestInterceptor, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

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
