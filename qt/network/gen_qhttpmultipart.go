package network

/*

#include "gen_qhttpmultipart.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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
	h          *C.QHttpPart
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QHttpPart{h: (*C.QHttpPart)(h)}
}

// NewQHttpPart constructs a new QHttpPart object.
func NewQHttpPart() *QHttpPart {
	var outptr_QHttpPart *C.QHttpPart = nil

	C.QHttpPart_new(&outptr_QHttpPart)
	ret := newQHttpPart(outptr_QHttpPart)
	ret.isSubclass = true
	return ret
}

// NewQHttpPart2 constructs a new QHttpPart object.
func NewQHttpPart2(other *QHttpPart) *QHttpPart {
	var outptr_QHttpPart *C.QHttpPart = nil

	C.QHttpPart_new2(other.cPointer(), &outptr_QHttpPart)
	ret := newQHttpPart(outptr_QHttpPart)
	ret.isSubclass = true
	return ret
}

func (this *QHttpPart) OperatorAssign(other *QHttpPart) {
	C.QHttpPart_OperatorAssign(this.h, other.cPointer())
}

func (this *QHttpPart) Swap(other *QHttpPart) {
	C.QHttpPart_Swap(this.h, other.cPointer())
}

func (this *QHttpPart) OperatorEqual(other *QHttpPart) bool {
	return (bool)(C.QHttpPart_OperatorEqual(this.h, other.cPointer()))
}

func (this *QHttpPart) OperatorNotEqual(other *QHttpPart) bool {
	return (bool)(C.QHttpPart_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QHttpPart) SetHeader(header QNetworkRequest__KnownHeaders, value *qt.QVariant) {
	C.QHttpPart_SetHeader(this.h, (C.int)(header), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QHttpPart) SetRawHeader(headerName []byte, headerValue []byte) {
	headerName_alias := C.struct_miqt_string{}
	headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	headerName_alias.len = C.size_t(len(headerName))
	headerValue_alias := C.struct_miqt_string{}
	headerValue_alias.data = (*C.char)(unsafe.Pointer(&headerValue[0]))
	headerValue_alias.len = C.size_t(len(headerValue))
	C.QHttpPart_SetRawHeader(this.h, headerName_alias, headerValue_alias)
}

func (this *QHttpPart) SetBody(body []byte) {
	body_alias := C.struct_miqt_string{}
	body_alias.data = (*C.char)(unsafe.Pointer(&body[0]))
	body_alias.len = C.size_t(len(body))
	C.QHttpPart_SetBody(this.h, body_alias)
}

func (this *QHttpPart) SetBodyDevice(device *qt.QIODevice) {
	C.QHttpPart_SetBodyDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

// Delete this object from C++ memory.
func (this *QHttpPart) Delete() {
	C.QHttpPart_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QHttpMultiPart
	isSubclass bool
	*qt.QObject
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
func newQHttpMultiPart(h *C.QHttpMultiPart, h_QObject *C.QObject) *QHttpMultiPart {
	if h == nil {
		return nil
	}
	return &QHttpMultiPart{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQHttpMultiPart constructs the type using only unsafe pointers.
func UnsafeNewQHttpMultiPart(h unsafe.Pointer, h_QObject unsafe.Pointer) *QHttpMultiPart {
	if h == nil {
		return nil
	}

	return &QHttpMultiPart{h: (*C.QHttpMultiPart)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQHttpMultiPart constructs a new QHttpMultiPart object.
func NewQHttpMultiPart() *QHttpMultiPart {
	var outptr_QHttpMultiPart *C.QHttpMultiPart = nil
	var outptr_QObject *C.QObject = nil

	C.QHttpMultiPart_new(&outptr_QHttpMultiPart, &outptr_QObject)
	ret := newQHttpMultiPart(outptr_QHttpMultiPart, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQHttpMultiPart2 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart2(contentType QHttpMultiPart__ContentType) *QHttpMultiPart {
	var outptr_QHttpMultiPart *C.QHttpMultiPart = nil
	var outptr_QObject *C.QObject = nil

	C.QHttpMultiPart_new2((C.int)(contentType), &outptr_QHttpMultiPart, &outptr_QObject)
	ret := newQHttpMultiPart(outptr_QHttpMultiPart, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQHttpMultiPart3 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart3(parent *qt.QObject) *QHttpMultiPart {
	var outptr_QHttpMultiPart *C.QHttpMultiPart = nil
	var outptr_QObject *C.QObject = nil

	C.QHttpMultiPart_new3((*C.QObject)(parent.UnsafePointer()), &outptr_QHttpMultiPart, &outptr_QObject)
	ret := newQHttpMultiPart(outptr_QHttpMultiPart, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQHttpMultiPart4 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart4(contentType QHttpMultiPart__ContentType, parent *qt.QObject) *QHttpMultiPart {
	var outptr_QHttpMultiPart *C.QHttpMultiPart = nil
	var outptr_QObject *C.QObject = nil

	C.QHttpMultiPart_new4((C.int)(contentType), (*C.QObject)(parent.UnsafePointer()), &outptr_QHttpMultiPart, &outptr_QObject)
	ret := newQHttpMultiPart(outptr_QHttpMultiPart, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QHttpMultiPart) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QHttpMultiPart_MetaObject(this.h)))
}

func (this *QHttpMultiPart) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHttpMultiPart_Metacast(this.h, param1_Cstring))
}

func QHttpMultiPart_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHttpMultiPart_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHttpMultiPart) Append(httpPart *QHttpPart) {
	C.QHttpMultiPart_Append(this.h, httpPart.cPointer())
}

func (this *QHttpMultiPart) SetContentType(contentType QHttpMultiPart__ContentType) {
	C.QHttpMultiPart_SetContentType(this.h, (C.int)(contentType))
}

func (this *QHttpMultiPart) Boundary() []byte {
	var _bytearray C.struct_miqt_string = C.QHttpMultiPart_Boundary(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QHttpMultiPart) SetBoundary(boundary []byte) {
	boundary_alias := C.struct_miqt_string{}
	boundary_alias.data = (*C.char)(unsafe.Pointer(&boundary[0]))
	boundary_alias.len = C.size_t(len(boundary))
	C.QHttpMultiPart_SetBoundary(this.h, boundary_alias)
}

func QHttpMultiPart_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHttpMultiPart_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHttpMultiPart_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHttpMultiPart_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHttpMultiPart_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHttpMultiPart) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QHttpMultiPart_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHttpMultiPart) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHttpMultiPart_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHttpMultiPart_Event
func miqt_exec_callback_QHttpMultiPart_Event(self *C.QHttpMultiPart, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHttpMultiPart{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHttpMultiPart) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QHttpMultiPart_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHttpMultiPart) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHttpMultiPart_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHttpMultiPart_EventFilter
func miqt_exec_callback_QHttpMultiPart_EventFilter(self *C.QHttpMultiPart, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHttpMultiPart{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHttpMultiPart) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QHttpMultiPart_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHttpMultiPart) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHttpMultiPart_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHttpMultiPart_TimerEvent
func miqt_exec_callback_QHttpMultiPart_TimerEvent(self *C.QHttpMultiPart, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHttpMultiPart) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QHttpMultiPart_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHttpMultiPart) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHttpMultiPart_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHttpMultiPart_ChildEvent
func miqt_exec_callback_QHttpMultiPart_ChildEvent(self *C.QHttpMultiPart, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHttpMultiPart) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QHttpMultiPart_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHttpMultiPart) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHttpMultiPart_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHttpMultiPart_CustomEvent
func miqt_exec_callback_QHttpMultiPart_CustomEvent(self *C.QHttpMultiPart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHttpMultiPart) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QHttpMultiPart_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHttpMultiPart) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHttpMultiPart_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHttpMultiPart_ConnectNotify
func miqt_exec_callback_QHttpMultiPart_ConnectNotify(self *C.QHttpMultiPart, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHttpMultiPart) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QHttpMultiPart_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHttpMultiPart) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QHttpMultiPart_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHttpMultiPart_DisconnectNotify
func miqt_exec_callback_QHttpMultiPart_DisconnectNotify(self *C.QHttpMultiPart, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHttpMultiPart{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHttpMultiPart) Delete() {
	C.QHttpMultiPart_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHttpMultiPart) GoGC() {
	runtime.SetFinalizer(this, func(this *QHttpMultiPart) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
