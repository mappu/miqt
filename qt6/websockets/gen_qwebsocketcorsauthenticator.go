package websockets

/*

#include "gen_qwebsocketcorsauthenticator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWebSocketCorsAuthenticator struct {
	h *C.QWebSocketCorsAuthenticator
}

func (this *QWebSocketCorsAuthenticator) cPointer() *C.QWebSocketCorsAuthenticator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSocketCorsAuthenticator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSocketCorsAuthenticator constructs the type using only CGO pointers.
func newQWebSocketCorsAuthenticator(h *C.QWebSocketCorsAuthenticator) *QWebSocketCorsAuthenticator {
	if h == nil {
		return nil
	}

	return &QWebSocketCorsAuthenticator{h: h}
}

// UnsafeNewQWebSocketCorsAuthenticator constructs the type using only unsafe pointers.
func UnsafeNewQWebSocketCorsAuthenticator(h unsafe.Pointer) *QWebSocketCorsAuthenticator {
	return newQWebSocketCorsAuthenticator((*C.QWebSocketCorsAuthenticator)(h))
}

// NewQWebSocketCorsAuthenticator constructs a new QWebSocketCorsAuthenticator object.
func NewQWebSocketCorsAuthenticator(origin string) *QWebSocketCorsAuthenticator {
	origin_ms := C.struct_miqt_string{}
	origin_ms.data = C.CString(origin)
	origin_ms.len = C.size_t(len(origin))
	defer C.free(unsafe.Pointer(origin_ms.data))

	return newQWebSocketCorsAuthenticator(C.QWebSocketCorsAuthenticator_new(origin_ms))
}

// NewQWebSocketCorsAuthenticator2 constructs a new QWebSocketCorsAuthenticator object.
func NewQWebSocketCorsAuthenticator2(other *QWebSocketCorsAuthenticator) *QWebSocketCorsAuthenticator {

	return newQWebSocketCorsAuthenticator(C.QWebSocketCorsAuthenticator_new2(other.cPointer()))
}

func (this *QWebSocketCorsAuthenticator) Swap(other *QWebSocketCorsAuthenticator) {
	C.QWebSocketCorsAuthenticator_swap(this.h, other.cPointer())
}

func (this *QWebSocketCorsAuthenticator) OperatorAssign(other *QWebSocketCorsAuthenticator) {
	C.QWebSocketCorsAuthenticator_operatorAssign(this.h, other.cPointer())
}

func (this *QWebSocketCorsAuthenticator) Origin() string {
	var _ms C.struct_miqt_string = C.QWebSocketCorsAuthenticator_origin(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocketCorsAuthenticator) SetAllowed(allowed bool) {
	C.QWebSocketCorsAuthenticator_setAllowed(this.h, (C.bool)(allowed))
}

func (this *QWebSocketCorsAuthenticator) Allowed() bool {
	return (bool)(C.QWebSocketCorsAuthenticator_allowed(this.h))
}

// Delete this object from C++ memory.
func (this *QWebSocketCorsAuthenticator) Delete() {
	C.QWebSocketCorsAuthenticator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebSocketCorsAuthenticator) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebSocketCorsAuthenticator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
