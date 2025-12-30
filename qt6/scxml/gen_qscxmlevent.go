package scxml

/*

#include "gen_qscxmlevent.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QScxmlEvent__EventType int

const (
	QScxmlEvent__PlatformEvent QScxmlEvent__EventType = 0
	QScxmlEvent__InternalEvent QScxmlEvent__EventType = 1
	QScxmlEvent__ExternalEvent QScxmlEvent__EventType = 2
)

type QScxmlEvent struct {
	h *C.QScxmlEvent
}

func (this *QScxmlEvent) cPointer() *C.QScxmlEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlEvent constructs the type using only CGO pointers.
func newQScxmlEvent(h *C.QScxmlEvent) *QScxmlEvent {
	if h == nil {
		return nil
	}

	return &QScxmlEvent{h: h}
}

// UnsafeNewQScxmlEvent constructs the type using only unsafe pointers.
func UnsafeNewQScxmlEvent(h unsafe.Pointer) *QScxmlEvent {
	return newQScxmlEvent((*C.QScxmlEvent)(h))
}

// NewQScxmlEvent constructs a new QScxmlEvent object.
func NewQScxmlEvent() *QScxmlEvent {

	return newQScxmlEvent(C.QScxmlEvent_new())
}

// NewQScxmlEvent2 constructs a new QScxmlEvent object.
func NewQScxmlEvent2(other *QScxmlEvent) *QScxmlEvent {

	return newQScxmlEvent(C.QScxmlEvent_new2(other.cPointer()))
}

func (this *QScxmlEvent) OperatorAssign(other *QScxmlEvent) {
	C.QScxmlEvent_operatorAssign(this.h, other.cPointer())
}

func (this *QScxmlEvent) Name() string {
	var _ms C.struct_miqt_string = C.QScxmlEvent_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlEvent) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QScxmlEvent_setName(this.h, name_ms)
}

func (this *QScxmlEvent) EventType() QScxmlEvent__EventType {
	return (QScxmlEvent__EventType)(C.QScxmlEvent_eventType(this.h))
}

func (this *QScxmlEvent) SetEventType(typeVal *QScxmlEvent__EventType) {
	C.QScxmlEvent_setEventType(this.h, (*C.int)(unsafe.Pointer(typeVal)))
}

func (this *QScxmlEvent) ScxmlType() string {
	var _ms C.struct_miqt_string = C.QScxmlEvent_scxmlType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlEvent) SendId() string {
	var _ms C.struct_miqt_string = C.QScxmlEvent_sendId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlEvent) SetSendId(sendId string) {
	sendId_ms := C.struct_miqt_string{}
	sendId_ms.data = C.CString(sendId)
	sendId_ms.len = C.size_t(len(sendId))
	defer C.free(unsafe.Pointer(sendId_ms.data))
	C.QScxmlEvent_setSendId(this.h, sendId_ms)
}

func (this *QScxmlEvent) Origin() string {
	var _ms C.struct_miqt_string = C.QScxmlEvent_origin(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlEvent) SetOrigin(origin string) {
	origin_ms := C.struct_miqt_string{}
	origin_ms.data = C.CString(origin)
	origin_ms.len = C.size_t(len(origin))
	defer C.free(unsafe.Pointer(origin_ms.data))
	C.QScxmlEvent_setOrigin(this.h, origin_ms)
}

func (this *QScxmlEvent) OriginType() string {
	var _ms C.struct_miqt_string = C.QScxmlEvent_originType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlEvent) SetOriginType(originType string) {
	originType_ms := C.struct_miqt_string{}
	originType_ms.data = C.CString(originType)
	originType_ms.len = C.size_t(len(originType))
	defer C.free(unsafe.Pointer(originType_ms.data))
	C.QScxmlEvent_setOriginType(this.h, originType_ms)
}

func (this *QScxmlEvent) InvokeId() string {
	var _ms C.struct_miqt_string = C.QScxmlEvent_invokeId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlEvent) SetInvokeId(invokeId string) {
	invokeId_ms := C.struct_miqt_string{}
	invokeId_ms.data = C.CString(invokeId)
	invokeId_ms.len = C.size_t(len(invokeId))
	defer C.free(unsafe.Pointer(invokeId_ms.data))
	C.QScxmlEvent_setInvokeId(this.h, invokeId_ms)
}

func (this *QScxmlEvent) Delay() int {
	return (int)(C.QScxmlEvent_delay(this.h))
}

func (this *QScxmlEvent) SetDelay(delayInMiliSecs int) {
	C.QScxmlEvent_setDelay(this.h, (C.int)(delayInMiliSecs))
}

func (this *QScxmlEvent) Clear() {
	C.QScxmlEvent_clear(this.h)
}

func (this *QScxmlEvent) Data() *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QScxmlEvent_data(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlEvent) SetData(data *qt6.QVariant) {
	C.QScxmlEvent_setData(this.h, (*C.QVariant)(data.UnsafePointer()))
}

func (this *QScxmlEvent) IsErrorEvent() bool {
	return (bool)(C.QScxmlEvent_isErrorEvent(this.h))
}

func (this *QScxmlEvent) ErrorMessage() string {
	var _ms C.struct_miqt_string = C.QScxmlEvent_errorMessage(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlEvent) SetErrorMessage(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QScxmlEvent_setErrorMessage(this.h, message_ms)
}

// Delete this object from C++ memory.
func (this *QScxmlEvent) Delete() {
	C.QScxmlEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
