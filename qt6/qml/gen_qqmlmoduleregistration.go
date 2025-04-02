package qml

/*

#include "gen_qqmlmoduleregistration.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QQmlModuleRegistration struct {
	h *C.QQmlModuleRegistration
}

func (this *QQmlModuleRegistration) cPointer() *C.QQmlModuleRegistration {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlModuleRegistration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlModuleRegistration constructs the type using only CGO pointers.
func newQQmlModuleRegistration(h *C.QQmlModuleRegistration) *QQmlModuleRegistration {
	if h == nil {
		return nil
	}

	return &QQmlModuleRegistration{h: h}
}

// UnsafeNewQQmlModuleRegistration constructs the type using only unsafe pointers.
func UnsafeNewQQmlModuleRegistration(h unsafe.Pointer) *QQmlModuleRegistration {
	return newQQmlModuleRegistration((*C.QQmlModuleRegistration)(h))
}

// Delete this object from C++ memory.
func (this *QQmlModuleRegistration) Delete() {
	C.QQmlModuleRegistration_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlModuleRegistration) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlModuleRegistration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
