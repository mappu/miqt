package qml

/*

#include "gen_qqmlnetworkaccessmanagerfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QQmlNetworkAccessManagerFactory struct {
	h  *C.QQmlNetworkAccessManagerFactory
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QQmlNetworkAccessManagerFactory) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QQmlNetworkAccessManagerFactory) cPointer() *C.QQmlNetworkAccessManagerFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlNetworkAccessManagerFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlNetworkAccessManagerFactory constructs the type using only CGO pointers.
func newQQmlNetworkAccessManagerFactory(h *C.QQmlNetworkAccessManagerFactory) *QQmlNetworkAccessManagerFactory {
	if h == nil {
		return nil
	}

	return &QQmlNetworkAccessManagerFactory{h: h}
}

// UnsafeNewQQmlNetworkAccessManagerFactory constructs the type using only unsafe pointers.
func UnsafeNewQQmlNetworkAccessManagerFactory(h unsafe.Pointer) *QQmlNetworkAccessManagerFactory {
	return newQQmlNetworkAccessManagerFactory((*C.QQmlNetworkAccessManagerFactory)(h))
}

func (this *QQmlNetworkAccessManagerFactory) OperatorAssign(param1 *QQmlNetworkAccessManagerFactory) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QQmlNetworkAccessManagerFactory_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QQmlNetworkAccessManagerFactory) Delete() {
	C.QQmlNetworkAccessManagerFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QQmlNetworkAccessManagerFactory) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QQmlNetworkAccessManagerFactory_delete((*C.QQmlNetworkAccessManagerFactory)(gc[0]))
	})
	this.miqtSetGC(gc)
}
