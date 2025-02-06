package network

/*

#include "gen_qhttpmultipart.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHttpMultiPart__ContentType int

const (
	QHttpMultiPart__MixedType       QHttpMultiPart__ContentType = 0
	QHttpMultiPart__RelatedType     QHttpMultiPart__ContentType = 1
	QHttpMultiPart__FormDataType    QHttpMultiPart__ContentType = 2
	QHttpMultiPart__AlternativeType QHttpMultiPart__ContentType = 3
)

type QHttpPart struct {
	h *C.QHttpPart
}

func (this *QHttpPart) cPointer() *C.QHttpPart {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHttpPart) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHttpPart constructs the type using only CGO pointers.
func newQHttpPart(h *C.QHttpPart) *QHttpPart {
	if h == nil {
		return nil
	}

	return &QHttpPart{h: h}
}

// UnsafeNewQHttpPart constructs the type using only unsafe pointers.
func UnsafeNewQHttpPart(h unsafe.Pointer) *QHttpPart {
	return newQHttpPart((*C.QHttpPart)(h))
}

// NewQHttpPart constructs a new QHttpPart object.
func NewQHttpPart() *QHttpPart {

	return newQHttpPart(C.QHttpPart_new())
}

// NewQHttpPart2 constructs a new QHttpPart object.
func NewQHttpPart2(other *QHttpPart) *QHttpPart {

	return newQHttpPart(C.QHttpPart_new2(other.cPointer()))
}

func (this *QHttpPart) OperatorAssign(other *QHttpPart) {
	C.QHttpPart_operatorAssign(this.h, other.cPointer())
}

func (this *QHttpPart) Swap(other *QHttpPart) {
	C.QHttpPart_swap(this.h, other.cPointer())
}

func (this *QHttpPart) OperatorEqual(other *QHttpPart) bool {
	return (bool)(C.QHttpPart_operatorEqual(this.h, other.cPointer()))
}

func (this *QHttpPart) OperatorNotEqual(other *QHttpPart) bool {
	return (bool)(C.QHttpPart_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QHttpPart) SetHeader(header QNetworkRequest__KnownHeaders, value *qt6.QVariant) {
	C.QHttpPart_setHeader(this.h, (C.int)(header), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QHttpPart) SetRawHeader(headerName []byte, headerValue []byte) {
	headerName_alias := C.struct_miqt_string{}
	if len(headerName) > 0 {
		headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	} else {
		headerName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	headerName_alias.len = C.size_t(len(headerName))
	headerValue_alias := C.struct_miqt_string{}
	if len(headerValue) > 0 {
		headerValue_alias.data = (*C.char)(unsafe.Pointer(&headerValue[0]))
	} else {
		headerValue_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	headerValue_alias.len = C.size_t(len(headerValue))
	C.QHttpPart_setRawHeader(this.h, headerName_alias, headerValue_alias)
}

func (this *QHttpPart) SetBody(body []byte) {
	body_alias := C.struct_miqt_string{}
	if len(body) > 0 {
		body_alias.data = (*C.char)(unsafe.Pointer(&body[0]))
	} else {
		body_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	body_alias.len = C.size_t(len(body))
	C.QHttpPart_setBody(this.h, body_alias)
}

func (this *QHttpPart) SetBodyDevice(device *qt6.QIODevice) {
	C.QHttpPart_setBodyDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

// Delete this object from C++ memory.
func (this *QHttpPart) Delete() {
	C.QHttpPart_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHttpPart) GoGC() {
	runtime.SetFinalizer(this, func(this *QHttpPart) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHttpMultiPart struct {
	h *C.QHttpMultiPart
	*qt6.QObject
}

func (this *QHttpMultiPart) cPointer() *C.QHttpMultiPart {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHttpMultiPart) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHttpMultiPart constructs the type using only CGO pointers.
func newQHttpMultiPart(h *C.QHttpMultiPart) *QHttpMultiPart {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QHttpMultiPart_virtbase(h, &outptr_QObject)

	return &QHttpMultiPart{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQHttpMultiPart constructs the type using only unsafe pointers.
func UnsafeNewQHttpMultiPart(h unsafe.Pointer) *QHttpMultiPart {
	return newQHttpMultiPart((*C.QHttpMultiPart)(h))
}

// NewQHttpMultiPart constructs a new QHttpMultiPart object.
func NewQHttpMultiPart() *QHttpMultiPart {

	return newQHttpMultiPart(C.QHttpMultiPart_new())
}

// NewQHttpMultiPart2 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart2(contentType QHttpMultiPart__ContentType) *QHttpMultiPart {

	return newQHttpMultiPart(C.QHttpMultiPart_new2((C.int)(contentType)))
}

// NewQHttpMultiPart3 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart3(parent *qt6.QObject) *QHttpMultiPart {

	return newQHttpMultiPart(C.QHttpMultiPart_new3((*C.QObject)(parent.UnsafePointer())))
}

// NewQHttpMultiPart4 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart4(contentType QHttpMultiPart__ContentType, parent *qt6.QObject) *QHttpMultiPart {

	return newQHttpMultiPart(C.QHttpMultiPart_new4((C.int)(contentType), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QHttpMultiPart) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHttpMultiPart_metaObject(this.h)))
}

func (this *QHttpMultiPart) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHttpMultiPart_metacast(this.h, param1_Cstring))
}

func QHttpMultiPart_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHttpMultiPart) Append(httpPart *QHttpPart) {
	C.QHttpMultiPart_append(this.h, httpPart.cPointer())
}

func (this *QHttpMultiPart) SetContentType(contentType QHttpMultiPart__ContentType) {
	C.QHttpMultiPart_setContentType(this.h, (C.int)(contentType))
}

func (this *QHttpMultiPart) Boundary() []byte {
	var _bytearray C.struct_miqt_string = C.QHttpMultiPart_boundary(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QHttpMultiPart) SetBoundary(boundary []byte) {
	boundary_alias := C.struct_miqt_string{}
	if len(boundary) > 0 {
		boundary_alias.data = (*C.char)(unsafe.Pointer(&boundary[0]))
	} else {
		boundary_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	boundary_alias.len = C.size_t(len(boundary))
	C.QHttpMultiPart_setBoundary(this.h, boundary_alias)
}

func QHttpMultiPart_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHttpMultiPart_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QHttpMultiPart that was directly constructed.
func (this *QHttpMultiPart) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QHttpMultiPart_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHttpMultiPart that was directly constructed.
func (this *QHttpMultiPart) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHttpMultiPart_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHttpMultiPart that was directly constructed.
func (this *QHttpMultiPart) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHttpMultiPart_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHttpMultiPart that was directly constructed.
func (this *QHttpMultiPart) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHttpMultiPart_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHttpMultiPart) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QHttpMultiPart_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHttpMultiPart) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QHttpMultiPart_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHttpMultiPart_event
func miqt_exec_callback_QHttpMultiPart_event(self *C.QHttpMultiPart, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHttpMultiPart{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHttpMultiPart) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QHttpMultiPart_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHttpMultiPart) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QHttpMultiPart_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHttpMultiPart_eventFilter
func miqt_exec_callback_QHttpMultiPart_eventFilter(self *C.QHttpMultiPart, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHttpMultiPart{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHttpMultiPart) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QHttpMultiPart_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHttpMultiPart) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QHttpMultiPart_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHttpMultiPart_timerEvent
func miqt_exec_callback_QHttpMultiPart_timerEvent(self *C.QHttpMultiPart, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHttpMultiPart) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QHttpMultiPart_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHttpMultiPart) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QHttpMultiPart_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHttpMultiPart_childEvent
func miqt_exec_callback_QHttpMultiPart_childEvent(self *C.QHttpMultiPart, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHttpMultiPart) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QHttpMultiPart_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHttpMultiPart) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHttpMultiPart_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHttpMultiPart_customEvent
func miqt_exec_callback_QHttpMultiPart_customEvent(self *C.QHttpMultiPart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHttpMultiPart) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QHttpMultiPart_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHttpMultiPart) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHttpMultiPart_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHttpMultiPart_connectNotify
func miqt_exec_callback_QHttpMultiPart_connectNotify(self *C.QHttpMultiPart, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHttpMultiPart) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QHttpMultiPart_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHttpMultiPart) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHttpMultiPart_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHttpMultiPart_disconnectNotify
func miqt_exec_callback_QHttpMultiPart_disconnectNotify(self *C.QHttpMultiPart, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHttpMultiPart) Delete() {
	C.QHttpMultiPart_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHttpMultiPart) GoGC() {
	runtime.SetFinalizer(this, func(this *QHttpMultiPart) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
