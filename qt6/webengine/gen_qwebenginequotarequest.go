package webengine

/*

#include "gen_qwebenginequotarequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QWebEngineQuotaRequest struct {
	h          *C.QWebEngineQuotaRequest
	isSubclass bool
}

func (this *QWebEngineQuotaRequest) cPointer() *C.QWebEngineQuotaRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineQuotaRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineQuotaRequest constructs the type using only CGO pointers.
func newQWebEngineQuotaRequest(h *C.QWebEngineQuotaRequest) *QWebEngineQuotaRequest {
	if h == nil {
		return nil
	}
	return &QWebEngineQuotaRequest{h: h}
}

// UnsafeNewQWebEngineQuotaRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineQuotaRequest(h unsafe.Pointer) *QWebEngineQuotaRequest {
	if h == nil {
		return nil
	}

	return &QWebEngineQuotaRequest{h: (*C.QWebEngineQuotaRequest)(h)}
}

// NewQWebEngineQuotaRequest constructs a new QWebEngineQuotaRequest object.
func NewQWebEngineQuotaRequest() *QWebEngineQuotaRequest {
	var outptr_QWebEngineQuotaRequest *C.QWebEngineQuotaRequest = nil

	C.QWebEngineQuotaRequest_new(&outptr_QWebEngineQuotaRequest)
	ret := newQWebEngineQuotaRequest(outptr_QWebEngineQuotaRequest)
	ret.isSubclass = true
	return ret
}

// NewQWebEngineQuotaRequest2 constructs a new QWebEngineQuotaRequest object.
func NewQWebEngineQuotaRequest2(param1 *QWebEngineQuotaRequest) *QWebEngineQuotaRequest {
	var outptr_QWebEngineQuotaRequest *C.QWebEngineQuotaRequest = nil

	C.QWebEngineQuotaRequest_new2(param1.cPointer(), &outptr_QWebEngineQuotaRequest)
	ret := newQWebEngineQuotaRequest(outptr_QWebEngineQuotaRequest)
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineQuotaRequest) Accept() {
	C.QWebEngineQuotaRequest_Accept(this.h)
}

func (this *QWebEngineQuotaRequest) Reject() {
	C.QWebEngineQuotaRequest_Reject(this.h)
}

func (this *QWebEngineQuotaRequest) Origin() *qt6.QUrl {
	_ret := C.QWebEngineQuotaRequest_Origin(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineQuotaRequest) RequestedSize() int64 {
	return (int64)(C.QWebEngineQuotaRequest_RequestedSize(this.h))
}

func (this *QWebEngineQuotaRequest) OperatorEqual(that *QWebEngineQuotaRequest) bool {
	return (bool)(C.QWebEngineQuotaRequest_OperatorEqual(this.h, that.cPointer()))
}

func (this *QWebEngineQuotaRequest) OperatorNotEqual(that *QWebEngineQuotaRequest) bool {
	return (bool)(C.QWebEngineQuotaRequest_OperatorNotEqual(this.h, that.cPointer()))
}

// Delete this object from C++ memory.
func (this *QWebEngineQuotaRequest) Delete() {
	C.QWebEngineQuotaRequest_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineQuotaRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineQuotaRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
