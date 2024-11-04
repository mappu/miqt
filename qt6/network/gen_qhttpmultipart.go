package network

/*

#include "gen_qhttpmultipart.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
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

func newQHttpPart(h *C.QHttpPart) *QHttpPart {
	if h == nil {
		return nil
	}
	return &QHttpPart{h: h}
}

func UnsafeNewQHttpPart(h unsafe.Pointer) *QHttpPart {
	return newQHttpPart((*C.QHttpPart)(h))
}

// NewQHttpPart constructs a new QHttpPart object.
func NewQHttpPart() *QHttpPart {
	ret := C.QHttpPart_new()
	return newQHttpPart(ret)
}

// NewQHttpPart2 constructs a new QHttpPart object.
func NewQHttpPart2(other *QHttpPart) *QHttpPart {
	ret := C.QHttpPart_new2(other.cPointer())
	return newQHttpPart(ret)
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

func (this *QHttpPart) SetHeader(header QNetworkRequest__KnownHeaders, value *qt6.QVariant) {
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

func (this *QHttpPart) SetBodyDevice(device *qt6.QIODevice) {
	C.QHttpPart_SetBodyDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

// Delete this object from C++ memory.
func (this *QHttpPart) Delete() {
	C.QHttpPart_Delete(this.h)
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

func newQHttpMultiPart(h *C.QHttpMultiPart) *QHttpMultiPart {
	if h == nil {
		return nil
	}
	return &QHttpMultiPart{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQHttpMultiPart(h unsafe.Pointer) *QHttpMultiPart {
	return newQHttpMultiPart((*C.QHttpMultiPart)(h))
}

// NewQHttpMultiPart constructs a new QHttpMultiPart object.
func NewQHttpMultiPart() *QHttpMultiPart {
	ret := C.QHttpMultiPart_new()
	return newQHttpMultiPart(ret)
}

// NewQHttpMultiPart2 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart2(contentType QHttpMultiPart__ContentType) *QHttpMultiPart {
	ret := C.QHttpMultiPart_new2((C.int)(contentType))
	return newQHttpMultiPart(ret)
}

// NewQHttpMultiPart3 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart3(parent *qt6.QObject) *QHttpMultiPart {
	ret := C.QHttpMultiPart_new3((*C.QObject)(parent.UnsafePointer()))
	return newQHttpMultiPart(ret)
}

// NewQHttpMultiPart4 constructs a new QHttpMultiPart object.
func NewQHttpMultiPart4(contentType QHttpMultiPart__ContentType, parent *qt6.QObject) *QHttpMultiPart {
	ret := C.QHttpMultiPart_new4((C.int)(contentType), (*C.QObject)(parent.UnsafePointer()))
	return newQHttpMultiPart(ret)
}

func (this *QHttpMultiPart) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHttpMultiPart_MetaObject(this.h)))
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

// Delete this object from C++ memory.
func (this *QHttpMultiPart) Delete() {
	C.QHttpMultiPart_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHttpMultiPart) GoGC() {
	runtime.SetFinalizer(this, func(this *QHttpMultiPart) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
