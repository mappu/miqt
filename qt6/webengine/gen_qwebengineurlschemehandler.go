package webengine

/*

#include "gen_qwebengineurlschemehandler.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineUrlSchemeHandler struct {
	h *C.QWebEngineUrlSchemeHandler
	*qt6.QObject
}

func (this *QWebEngineUrlSchemeHandler) cPointer() *C.QWebEngineUrlSchemeHandler {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineUrlSchemeHandler) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineUrlSchemeHandler constructs the type using only CGO pointers.
func newQWebEngineUrlSchemeHandler(h *C.QWebEngineUrlSchemeHandler) *QWebEngineUrlSchemeHandler {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineUrlSchemeHandler_virtbase(h, &outptr_QObject)

	return &QWebEngineUrlSchemeHandler{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineUrlSchemeHandler constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineUrlSchemeHandler(h unsafe.Pointer) *QWebEngineUrlSchemeHandler {
	return newQWebEngineUrlSchemeHandler((*C.QWebEngineUrlSchemeHandler)(h))
}

// NewQWebEngineUrlSchemeHandler constructs a new QWebEngineUrlSchemeHandler object.
func NewQWebEngineUrlSchemeHandler() *QWebEngineUrlSchemeHandler {

	return newQWebEngineUrlSchemeHandler(C.QWebEngineUrlSchemeHandler_new())
}

// NewQWebEngineUrlSchemeHandler2 constructs a new QWebEngineUrlSchemeHandler object.
func NewQWebEngineUrlSchemeHandler2(parent *qt6.QObject) *QWebEngineUrlSchemeHandler {

	return newQWebEngineUrlSchemeHandler(C.QWebEngineUrlSchemeHandler_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QWebEngineUrlSchemeHandler) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineUrlSchemeHandler_metaObject(this.h)))
}

func (this *QWebEngineUrlSchemeHandler) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineUrlSchemeHandler_metacast(this.h, param1_Cstring))
}

func QWebEngineUrlSchemeHandler_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlSchemeHandler_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineUrlSchemeHandler) RequestStarted(param1 *QWebEngineUrlRequestJob) {
	C.QWebEngineUrlSchemeHandler_requestStarted(this.h, param1.cPointer())
}

func QWebEngineUrlSchemeHandler_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlSchemeHandler_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineUrlSchemeHandler_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineUrlSchemeHandler_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QWebEngineUrlSchemeHandler) OnrequestStarted(slot func(param1 *QWebEngineUrlRequestJob)) {
	ok := C.QWebEngineUrlSchemeHandler_override_virtual_requestStarted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlSchemeHandler_requestStarted
func miqt_exec_callback_QWebEngineUrlSchemeHandler_requestStarted(self *C.QWebEngineUrlSchemeHandler, cb C.intptr_t, param1 *C.QWebEngineUrlRequestJob) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QWebEngineUrlRequestJob))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebEngineUrlRequestJob(param1)

	gofunc(slotval1)

}

func (this *QWebEngineUrlSchemeHandler) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QWebEngineUrlSchemeHandler_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineUrlSchemeHandler) Onevent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QWebEngineUrlSchemeHandler_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlSchemeHandler_event
func miqt_exec_callback_QWebEngineUrlSchemeHandler_event(self *C.QWebEngineUrlSchemeHandler, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineUrlSchemeHandler{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineUrlSchemeHandler) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWebEngineUrlSchemeHandler_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineUrlSchemeHandler) OneventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QWebEngineUrlSchemeHandler_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlSchemeHandler_eventFilter
func miqt_exec_callback_QWebEngineUrlSchemeHandler_eventFilter(self *C.QWebEngineUrlSchemeHandler, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineUrlSchemeHandler{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineUrlSchemeHandler) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWebEngineUrlSchemeHandler_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlSchemeHandler) OntimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QWebEngineUrlSchemeHandler_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlSchemeHandler_timerEvent
func miqt_exec_callback_QWebEngineUrlSchemeHandler_timerEvent(self *C.QWebEngineUrlSchemeHandler, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlSchemeHandler{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebEngineUrlSchemeHandler) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWebEngineUrlSchemeHandler_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlSchemeHandler) OnchildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QWebEngineUrlSchemeHandler_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlSchemeHandler_childEvent
func miqt_exec_callback_QWebEngineUrlSchemeHandler_childEvent(self *C.QWebEngineUrlSchemeHandler, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlSchemeHandler{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebEngineUrlSchemeHandler) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWebEngineUrlSchemeHandler_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEngineUrlSchemeHandler) OncustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWebEngineUrlSchemeHandler_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlSchemeHandler_customEvent
func miqt_exec_callback_QWebEngineUrlSchemeHandler_customEvent(self *C.QWebEngineUrlSchemeHandler, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineUrlSchemeHandler{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebEngineUrlSchemeHandler) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWebEngineUrlSchemeHandler_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineUrlSchemeHandler) OnconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebEngineUrlSchemeHandler_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlSchemeHandler_connectNotify
func miqt_exec_callback_QWebEngineUrlSchemeHandler_connectNotify(self *C.QWebEngineUrlSchemeHandler, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineUrlSchemeHandler{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebEngineUrlSchemeHandler) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWebEngineUrlSchemeHandler_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineUrlSchemeHandler) OndisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebEngineUrlSchemeHandler_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineUrlSchemeHandler_disconnectNotify
func miqt_exec_callback_QWebEngineUrlSchemeHandler_disconnectNotify(self *C.QWebEngineUrlSchemeHandler, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineUrlSchemeHandler{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebEngineUrlSchemeHandler) Delete() {
	C.QWebEngineUrlSchemeHandler_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineUrlSchemeHandler) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineUrlSchemeHandler) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
