package webkit

/*

#include "gen_qwebhistoryinterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebHistoryInterface struct {
	h *C.QWebHistoryInterface
	*qt.QObject
}

func (this *QWebHistoryInterface) cPointer() *C.QWebHistoryInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebHistoryInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebHistoryInterface constructs the type using only CGO pointers.
func newQWebHistoryInterface(h *C.QWebHistoryInterface) *QWebHistoryInterface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebHistoryInterface_virtbase(h, &outptr_QObject)

	return &QWebHistoryInterface{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebHistoryInterface constructs the type using only unsafe pointers.
func UnsafeNewQWebHistoryInterface(h unsafe.Pointer) *QWebHistoryInterface {
	return newQWebHistoryInterface((*C.QWebHistoryInterface)(h))
}

// NewQWebHistoryInterface constructs a new QWebHistoryInterface object.
func NewQWebHistoryInterface() *QWebHistoryInterface {

	return newQWebHistoryInterface(C.QWebHistoryInterface_new())
}

// NewQWebHistoryInterface2 constructs a new QWebHistoryInterface object.
func NewQWebHistoryInterface2(parent *qt.QObject) *QWebHistoryInterface {

	return newQWebHistoryInterface(C.QWebHistoryInterface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QWebHistoryInterface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebHistoryInterface_MetaObject(this.h)))
}

func (this *QWebHistoryInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebHistoryInterface_Metacast(this.h, param1_Cstring))
}

func QWebHistoryInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebHistoryInterface_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHistoryInterface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebHistoryInterface_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHistoryInterface_SetDefaultInterface(defaultInterface *QWebHistoryInterface) {
	C.QWebHistoryInterface_SetDefaultInterface(defaultInterface.cPointer())
}

func QWebHistoryInterface_DefaultInterface() *QWebHistoryInterface {
	return newQWebHistoryInterface(C.QWebHistoryInterface_DefaultInterface())
}

func (this *QWebHistoryInterface) HistoryContains(url string) bool {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	return (bool)(C.QWebHistoryInterface_HistoryContains(this.h, url_ms))
}

func (this *QWebHistoryInterface) AddHistoryEntry(url string) {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	C.QWebHistoryInterface_AddHistoryEntry(this.h, url_ms)
}

func QWebHistoryInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebHistoryInterface_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHistoryInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebHistoryInterface_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHistoryInterface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebHistoryInterface_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHistoryInterface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebHistoryInterface_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QWebHistoryInterface) OnHistoryContains(slot func(url string) bool) {
	ok := C.QWebHistoryInterface_override_virtual_HistoryContains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_HistoryContains
func miqt_exec_callback_QWebHistoryInterface_HistoryContains(self *C.QWebHistoryInterface, cb C.intptr_t, url C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(url string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var url_ms C.struct_miqt_string = url
	url_ret := C.GoStringN(url_ms.data, C.int(int64(url_ms.len)))
	C.free(unsafe.Pointer(url_ms.data))
	slotval1 := url_ret

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QWebHistoryInterface) OnAddHistoryEntry(slot func(url string)) {
	ok := C.QWebHistoryInterface_override_virtual_AddHistoryEntry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_AddHistoryEntry
func miqt_exec_callback_QWebHistoryInterface_AddHistoryEntry(self *C.QWebHistoryInterface, cb C.intptr_t, url C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var url_ms C.struct_miqt_string = url
	url_ret := C.GoStringN(url_ms.data, C.int(int64(url_ms.len)))
	C.free(unsafe.Pointer(url_ms.data))
	slotval1 := url_ret

	gofunc(slotval1)

}

func (this *QWebHistoryInterface) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QWebHistoryInterface_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebHistoryInterface) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QWebHistoryInterface_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_Event
func miqt_exec_callback_QWebHistoryInterface_Event(self *C.QWebHistoryInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebHistoryInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebHistoryInterface) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebHistoryInterface_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebHistoryInterface) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QWebHistoryInterface_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_EventFilter
func miqt_exec_callback_QWebHistoryInterface_EventFilter(self *C.QWebHistoryInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebHistoryInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebHistoryInterface) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebHistoryInterface_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebHistoryInterface) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QWebHistoryInterface_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_TimerEvent
func miqt_exec_callback_QWebHistoryInterface_TimerEvent(self *C.QWebHistoryInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebHistoryInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebHistoryInterface) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebHistoryInterface_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebHistoryInterface) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QWebHistoryInterface_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_ChildEvent
func miqt_exec_callback_QWebHistoryInterface_ChildEvent(self *C.QWebHistoryInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebHistoryInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebHistoryInterface) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebHistoryInterface_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebHistoryInterface) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebHistoryInterface_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_CustomEvent
func miqt_exec_callback_QWebHistoryInterface_CustomEvent(self *C.QWebHistoryInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebHistoryInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebHistoryInterface) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebHistoryInterface_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebHistoryInterface) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebHistoryInterface_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_ConnectNotify
func miqt_exec_callback_QWebHistoryInterface_ConnectNotify(self *C.QWebHistoryInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebHistoryInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebHistoryInterface) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebHistoryInterface_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebHistoryInterface) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebHistoryInterface_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebHistoryInterface_DisconnectNotify
func miqt_exec_callback_QWebHistoryInterface_DisconnectNotify(self *C.QWebHistoryInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebHistoryInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebHistoryInterface) Delete() {
	C.QWebHistoryInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebHistoryInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebHistoryInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
