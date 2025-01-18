package webengine

/*

#include "gen_qwebenginefullscreenrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebEngineFullScreenRequest struct {
	h          *C.QWebEngineFullScreenRequest
	isSubclass bool
}

func (this *QWebEngineFullScreenRequest) cPointer() *C.QWebEngineFullScreenRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineFullScreenRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineFullScreenRequest constructs the type using only CGO pointers.
func newQWebEngineFullScreenRequest(h *C.QWebEngineFullScreenRequest) *QWebEngineFullScreenRequest {
	if h == nil {
		return nil
	}

	return &QWebEngineFullScreenRequest{h: h}
}

// UnsafeNewQWebEngineFullScreenRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineFullScreenRequest(h unsafe.Pointer) *QWebEngineFullScreenRequest {
	return newQWebEngineFullScreenRequest((*C.QWebEngineFullScreenRequest)(h))
}

// NewQWebEngineFullScreenRequest constructs a new QWebEngineFullScreenRequest object.
func NewQWebEngineFullScreenRequest(param1 *QWebEngineFullScreenRequest) *QWebEngineFullScreenRequest {

	ret := newQWebEngineFullScreenRequest(C.QWebEngineFullScreenRequest_new(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineFullScreenRequest) Reject() {
	C.QWebEngineFullScreenRequest_Reject(this.h)
}

func (this *QWebEngineFullScreenRequest) Accept() {
	C.QWebEngineFullScreenRequest_Accept(this.h)
}

func (this *QWebEngineFullScreenRequest) ToggleOn() bool {
	return (bool)(C.QWebEngineFullScreenRequest_ToggleOn(this.h))
}

func (this *QWebEngineFullScreenRequest) Origin() *qt.QUrl {
	return qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineFullScreenRequest_Origin(this.h)))
}

// Delete this object from C++ memory.
func (this *QWebEngineFullScreenRequest) Delete() {
	C.QWebEngineFullScreenRequest_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineFullScreenRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineFullScreenRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
