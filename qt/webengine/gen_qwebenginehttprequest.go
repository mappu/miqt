package webengine

/*

#include "gen_qwebenginehttprequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebEngineHttpRequest__Method int

const (
	QWebEngineHttpRequest__Get  QWebEngineHttpRequest__Method = 0
	QWebEngineHttpRequest__Post QWebEngineHttpRequest__Method = 1
)

type QWebEngineHttpRequest struct {
	h *C.QWebEngineHttpRequest
}

func (this *QWebEngineHttpRequest) cPointer() *C.QWebEngineHttpRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineHttpRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineHttpRequest constructs the type using only CGO pointers.
func newQWebEngineHttpRequest(h *C.QWebEngineHttpRequest) *QWebEngineHttpRequest {
	if h == nil {
		return nil
	}

	return &QWebEngineHttpRequest{h: h}
}

// UnsafeNewQWebEngineHttpRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineHttpRequest(h unsafe.Pointer) *QWebEngineHttpRequest {
	return newQWebEngineHttpRequest((*C.QWebEngineHttpRequest)(h))
}

// NewQWebEngineHttpRequest constructs a new QWebEngineHttpRequest object.
func NewQWebEngineHttpRequest() *QWebEngineHttpRequest {

	return newQWebEngineHttpRequest(C.QWebEngineHttpRequest_new())
}

// NewQWebEngineHttpRequest2 constructs a new QWebEngineHttpRequest object.
func NewQWebEngineHttpRequest2(other *QWebEngineHttpRequest) *QWebEngineHttpRequest {

	return newQWebEngineHttpRequest(C.QWebEngineHttpRequest_new2(other.cPointer()))
}

// NewQWebEngineHttpRequest3 constructs a new QWebEngineHttpRequest object.
func NewQWebEngineHttpRequest3(url *qt.QUrl) *QWebEngineHttpRequest {

	return newQWebEngineHttpRequest(C.QWebEngineHttpRequest_new3((*C.QUrl)(url.UnsafePointer())))
}

// NewQWebEngineHttpRequest4 constructs a new QWebEngineHttpRequest object.
func NewQWebEngineHttpRequest4(url *qt.QUrl, method *QWebEngineHttpRequest__Method) *QWebEngineHttpRequest {

	return newQWebEngineHttpRequest(C.QWebEngineHttpRequest_new4((*C.QUrl)(url.UnsafePointer()), (*C.int)(unsafe.Pointer(method))))
}

func (this *QWebEngineHttpRequest) OperatorAssign(other *QWebEngineHttpRequest) {
	C.QWebEngineHttpRequest_operatorAssign(this.h, other.cPointer())
}

func QWebEngineHttpRequest_PostRequest(url *qt.QUrl, postData map[string]string) *QWebEngineHttpRequest {
	postData_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(postData))))
	defer C.free(unsafe.Pointer(postData_Keys_CArray))
	postData_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(postData))))
	defer C.free(unsafe.Pointer(postData_Values_CArray))
	postData_ctr := 0
	for postData_k, postData_v := range postData {
		postData_k_ms := C.struct_miqt_string{}
		postData_k_ms.data = C.CString(postData_k)
		postData_k_ms.len = C.size_t(len(postData_k))
		defer C.free(unsafe.Pointer(postData_k_ms.data))
		postData_Keys_CArray[postData_ctr] = postData_k_ms
		postData_v_ms := C.struct_miqt_string{}
		postData_v_ms.data = C.CString(postData_v)
		postData_v_ms.len = C.size_t(len(postData_v))
		defer C.free(unsafe.Pointer(postData_v_ms.data))
		postData_Values_CArray[postData_ctr] = postData_v_ms
		postData_ctr++
	}
	postData_mm := C.struct_miqt_map{
		len:    C.size_t(len(postData)),
		keys:   unsafe.Pointer(postData_Keys_CArray),
		values: unsafe.Pointer(postData_Values_CArray),
	}
	_goptr := newQWebEngineHttpRequest(C.QWebEngineHttpRequest_postRequest((*C.QUrl)(url.UnsafePointer()), postData_mm))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHttpRequest) Swap(other *QWebEngineHttpRequest) {
	C.QWebEngineHttpRequest_swap(this.h, other.cPointer())
}

func (this *QWebEngineHttpRequest) OperatorEqual(other *QWebEngineHttpRequest) bool {
	return (bool)(C.QWebEngineHttpRequest_operatorEqual(this.h, other.cPointer()))
}

func (this *QWebEngineHttpRequest) OperatorNotEqual(other *QWebEngineHttpRequest) bool {
	return (bool)(C.QWebEngineHttpRequest_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QWebEngineHttpRequest) Method() QWebEngineHttpRequest__Method {
	return (QWebEngineHttpRequest__Method)(C.QWebEngineHttpRequest_method(this.h))
}

func (this *QWebEngineHttpRequest) SetMethod(method QWebEngineHttpRequest__Method) {
	C.QWebEngineHttpRequest_setMethod(this.h, (C.int)(method))
}

func (this *QWebEngineHttpRequest) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineHttpRequest_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHttpRequest) SetUrl(url *qt.QUrl) {
	C.QWebEngineHttpRequest_setUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEngineHttpRequest) PostData() []byte {
	var _bytearray C.struct_miqt_string = C.QWebEngineHttpRequest_postData(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QWebEngineHttpRequest) SetPostData(postData []byte) {
	postData_alias := C.struct_miqt_string{}
	if len(postData) > 0 {
		postData_alias.data = (*C.char)(unsafe.Pointer(&postData[0]))
	} else {
		postData_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	postData_alias.len = C.size_t(len(postData))
	C.QWebEngineHttpRequest_setPostData(this.h, postData_alias)
}

func (this *QWebEngineHttpRequest) HasHeader(headerName []byte) bool {
	headerName_alias := C.struct_miqt_string{}
	if len(headerName) > 0 {
		headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	} else {
		headerName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	headerName_alias.len = C.size_t(len(headerName))
	return (bool)(C.QWebEngineHttpRequest_hasHeader(this.h, headerName_alias))
}

func (this *QWebEngineHttpRequest) Headers() [][]byte {
	var _ma C.struct_miqt_array = C.QWebEngineHttpRequest_headers(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _vv_bytearray C.struct_miqt_string = _outCast[i]
		_vv_ret := C.GoBytes(unsafe.Pointer(_vv_bytearray.data), C.int(int64(_vv_bytearray.len)))
		C.free(unsafe.Pointer(_vv_bytearray.data))
		_ret[i] = _vv_ret
	}
	return _ret
}

func (this *QWebEngineHttpRequest) Header(headerName []byte) []byte {
	headerName_alias := C.struct_miqt_string{}
	if len(headerName) > 0 {
		headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	} else {
		headerName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	headerName_alias.len = C.size_t(len(headerName))
	var _bytearray C.struct_miqt_string = C.QWebEngineHttpRequest_header(this.h, headerName_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QWebEngineHttpRequest) SetHeader(headerName []byte, value []byte) {
	headerName_alias := C.struct_miqt_string{}
	if len(headerName) > 0 {
		headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	} else {
		headerName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	headerName_alias.len = C.size_t(len(headerName))
	value_alias := C.struct_miqt_string{}
	if len(value) > 0 {
		value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	} else {
		value_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	value_alias.len = C.size_t(len(value))
	C.QWebEngineHttpRequest_setHeader(this.h, headerName_alias, value_alias)
}

func (this *QWebEngineHttpRequest) UnsetHeader(headerName []byte) {
	headerName_alias := C.struct_miqt_string{}
	if len(headerName) > 0 {
		headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	} else {
		headerName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	headerName_alias.len = C.size_t(len(headerName))
	C.QWebEngineHttpRequest_unsetHeader(this.h, headerName_alias)
}

// Delete this object from C++ memory.
func (this *QWebEngineHttpRequest) Delete() {
	C.QWebEngineHttpRequest_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineHttpRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineHttpRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
