package websockets

/*

#include "gen_qwebsockethandshakeoptions.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWebSocketHandshakeOptions struct {
	h  *C.QWebSocketHandshakeOptions
	gc *[1]*C.QWebSocketHandshakeOptions
}

func (this *QWebSocketHandshakeOptions) cPointer() *C.QWebSocketHandshakeOptions {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSocketHandshakeOptions) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSocketHandshakeOptions constructs the type using only CGO pointers.
func newQWebSocketHandshakeOptions(h *C.QWebSocketHandshakeOptions) *QWebSocketHandshakeOptions {
	if h == nil {
		return nil
	}

	return &QWebSocketHandshakeOptions{h: h}
}

// UnsafeNewQWebSocketHandshakeOptions constructs the type using only unsafe pointers.
func UnsafeNewQWebSocketHandshakeOptions(h unsafe.Pointer) *QWebSocketHandshakeOptions {
	return newQWebSocketHandshakeOptions((*C.QWebSocketHandshakeOptions)(h))
}

// NewQWebSocketHandshakeOptions constructs a new QWebSocketHandshakeOptions object.
func NewQWebSocketHandshakeOptions() *QWebSocketHandshakeOptions {

	return newQWebSocketHandshakeOptions(C.QWebSocketHandshakeOptions_new())
}

// NewQWebSocketHandshakeOptions2 constructs a new QWebSocketHandshakeOptions object.
func NewQWebSocketHandshakeOptions2(other *QWebSocketHandshakeOptions) *QWebSocketHandshakeOptions {

	return newQWebSocketHandshakeOptions(C.QWebSocketHandshakeOptions_new2(other.cPointer()))
}

func (this *QWebSocketHandshakeOptions) OperatorAssign(other *QWebSocketHandshakeOptions) {
	C.QWebSocketHandshakeOptions_operatorAssign(this.h, other.cPointer())
}

func (this *QWebSocketHandshakeOptions) Swap(other *QWebSocketHandshakeOptions) {
	C.QWebSocketHandshakeOptions_swap(this.h, other.cPointer())
}

func (this *QWebSocketHandshakeOptions) Subprotocols() []string {
	var _ma C.struct_miqt_array = C.QWebSocketHandshakeOptions_subprotocols(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QWebSocketHandshakeOptions) SetSubprotocols(protocols []string) {
	protocols_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(protocols))))
	defer C.free(unsafe.Pointer(protocols_CArray_ptr))
	protocols_CArray := unsafe.Slice(protocols_CArray_ptr, len(protocols))
	for i := range protocols {
		protocols_i_ms := C.struct_miqt_string{}
		protocols_i_ms.data = C.CString(protocols[i])
		protocols_i_ms.len = C.size_t(len(protocols[i]))
		defer C.free(unsafe.Pointer(protocols_i_ms.data))
		protocols_CArray[i] = protocols_i_ms
	}
	protocols_ma := C.struct_miqt_array{len: C.size_t(len(protocols)), data: unsafe.Pointer(protocols_CArray_ptr)}
	C.QWebSocketHandshakeOptions_setSubprotocols(this.h, protocols_ma)
}

// Delete this object from C++ memory.
func (this *QWebSocketHandshakeOptions) Delete() {
	C.QWebSocketHandshakeOptions_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebSocketHandshakeOptions) GoGC() {
	if this.gc != nil {
		return
	}
	this.gc = &[1]*C.QWebSocketHandshakeOptions{this.h}
	runtime.SetFinalizer(this.gc, func(gc *[1]*C.QWebSocketHandshakeOptions) {
		C.QWebSocketHandshakeOptions_delete(gc[0])
	})
}
