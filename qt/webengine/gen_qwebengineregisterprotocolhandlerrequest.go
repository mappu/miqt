package webengine

/*

#include "gen_qwebengineregisterprotocolhandlerrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebEngineRegisterProtocolHandlerRequest struct {
	h  *C.QWebEngineRegisterProtocolHandlerRequest
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebEngineRegisterProtocolHandlerRequest) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWebEngineRegisterProtocolHandlerRequest) cPointer() *C.QWebEngineRegisterProtocolHandlerRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineRegisterProtocolHandlerRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineRegisterProtocolHandlerRequest constructs the type using only CGO pointers.
func newQWebEngineRegisterProtocolHandlerRequest(h *C.QWebEngineRegisterProtocolHandlerRequest) *QWebEngineRegisterProtocolHandlerRequest {
	if h == nil {
		return nil
	}

	return &QWebEngineRegisterProtocolHandlerRequest{h: h}
}

// UnsafeNewQWebEngineRegisterProtocolHandlerRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineRegisterProtocolHandlerRequest(h unsafe.Pointer) *QWebEngineRegisterProtocolHandlerRequest {
	return newQWebEngineRegisterProtocolHandlerRequest((*C.QWebEngineRegisterProtocolHandlerRequest)(h))
}

// NewQWebEngineRegisterProtocolHandlerRequest constructs a new QWebEngineRegisterProtocolHandlerRequest object.
func NewQWebEngineRegisterProtocolHandlerRequest() *QWebEngineRegisterProtocolHandlerRequest {

	return newQWebEngineRegisterProtocolHandlerRequest(C.QWebEngineRegisterProtocolHandlerRequest_new())
}

// NewQWebEngineRegisterProtocolHandlerRequest2 constructs a new QWebEngineRegisterProtocolHandlerRequest object.
func NewQWebEngineRegisterProtocolHandlerRequest2(param1 *QWebEngineRegisterProtocolHandlerRequest) *QWebEngineRegisterProtocolHandlerRequest {
	defer runtime.KeepAlive(param1)

	return newQWebEngineRegisterProtocolHandlerRequest(C.QWebEngineRegisterProtocolHandlerRequest_new2(param1.cPointer()))
}

func (this *QWebEngineRegisterProtocolHandlerRequest) Accept() {
	defer runtime.KeepAlive(this)
	C.QWebEngineRegisterProtocolHandlerRequest_accept(this.h)
}

func (this *QWebEngineRegisterProtocolHandlerRequest) Reject() {
	defer runtime.KeepAlive(this)
	C.QWebEngineRegisterProtocolHandlerRequest_reject(this.h)
}

func (this *QWebEngineRegisterProtocolHandlerRequest) Origin() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineRegisterProtocolHandlerRequest_origin(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineRegisterProtocolHandlerRequest) Scheme() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QWebEngineRegisterProtocolHandlerRequest_scheme(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineRegisterProtocolHandlerRequest) OperatorEqual(that *QWebEngineRegisterProtocolHandlerRequest) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(that)
	return (bool)(C.QWebEngineRegisterProtocolHandlerRequest_operatorEqual(this.h, that.cPointer()))
}

func (this *QWebEngineRegisterProtocolHandlerRequest) OperatorNotEqual(that *QWebEngineRegisterProtocolHandlerRequest) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(that)
	return (bool)(C.QWebEngineRegisterProtocolHandlerRequest_operatorNotEqual(this.h, that.cPointer()))
}

func (this *QWebEngineRegisterProtocolHandlerRequest) OperatorAssign(param1 *QWebEngineRegisterProtocolHandlerRequest) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QWebEngineRegisterProtocolHandlerRequest_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebEngineRegisterProtocolHandlerRequest) Delete() {
	C.QWebEngineRegisterProtocolHandlerRequest_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebEngineRegisterProtocolHandlerRequest) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebEngineRegisterProtocolHandlerRequest_delete((*C.QWebEngineRegisterProtocolHandlerRequest)(gc[0]))
	})
	this.miqtSetGC(gc)
}
