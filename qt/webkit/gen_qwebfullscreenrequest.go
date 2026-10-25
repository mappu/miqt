package webkit

/*

#include "gen_qwebfullscreenrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebFullScreenRequest struct {
	h  *C.QWebFullScreenRequest
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebFullScreenRequest) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWebFullScreenRequest) cPointer() *C.QWebFullScreenRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebFullScreenRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebFullScreenRequest constructs the type using only CGO pointers.
func newQWebFullScreenRequest(h *C.QWebFullScreenRequest) *QWebFullScreenRequest {
	if h == nil {
		return nil
	}

	return &QWebFullScreenRequest{h: h}
}

// UnsafeNewQWebFullScreenRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebFullScreenRequest(h unsafe.Pointer) *QWebFullScreenRequest {
	return newQWebFullScreenRequest((*C.QWebFullScreenRequest)(h))
}

// NewQWebFullScreenRequest constructs a new QWebFullScreenRequest object.
func NewQWebFullScreenRequest() *QWebFullScreenRequest {

	return newQWebFullScreenRequest(C.QWebFullScreenRequest_new())
}

// NewQWebFullScreenRequest2 constructs a new QWebFullScreenRequest object.
func NewQWebFullScreenRequest2(param1 *QWebFullScreenRequest) *QWebFullScreenRequest {
	defer runtime.KeepAlive(param1)

	return newQWebFullScreenRequest(C.QWebFullScreenRequest_new2(param1.cPointer()))
}

func (this *QWebFullScreenRequest) Accept() {
	defer runtime.KeepAlive(this)
	C.QWebFullScreenRequest_accept(this.h)
}

func (this *QWebFullScreenRequest) Reject() {
	defer runtime.KeepAlive(this)
	C.QWebFullScreenRequest_reject(this.h)
}

func (this *QWebFullScreenRequest) ToggleOn() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebFullScreenRequest_toggleOn(this.h))
}

func (this *QWebFullScreenRequest) Origin() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebFullScreenRequest_origin(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFullScreenRequest) Element() *QWebElement {
	defer runtime.KeepAlive(this)
	_ret := newQWebElement(C.QWebFullScreenRequest_element(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebFullScreenRequest) Delete() {
	C.QWebFullScreenRequest_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebFullScreenRequest) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebFullScreenRequest_delete((*C.QWebFullScreenRequest)(gc[0]))
	})
	this.miqtSetGC(gc)
}
