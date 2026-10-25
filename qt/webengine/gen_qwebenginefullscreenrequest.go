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
	h  *C.QWebEngineFullScreenRequest
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebEngineFullScreenRequest) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQWebEngineFullScreenRequest(C.QWebEngineFullScreenRequest_new(param1.cPointer()))
}

func (this *QWebEngineFullScreenRequest) Reject() {
	defer runtime.KeepAlive(this)
	C.QWebEngineFullScreenRequest_reject(this.h)
}

func (this *QWebEngineFullScreenRequest) Accept() {
	defer runtime.KeepAlive(this)
	C.QWebEngineFullScreenRequest_accept(this.h)
}

func (this *QWebEngineFullScreenRequest) ToggleOn() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebEngineFullScreenRequest_toggleOn(this.h))
}

func (this *QWebEngineFullScreenRequest) Origin() *qt.QUrl {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineFullScreenRequest_origin(this.h)))
}

// Delete this object from C++ memory.
func (this *QWebEngineFullScreenRequest) Delete() {
	C.QWebEngineFullScreenRequest_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebEngineFullScreenRequest) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebEngineFullScreenRequest_delete((*C.QWebEngineFullScreenRequest)(gc[0]))
	})
	this.miqtSetGC(gc)
}
