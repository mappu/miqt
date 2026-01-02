package designer

/*

#include "gen_extension.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QAbstractExtensionFactory struct {
	h *C.QAbstractExtensionFactory
}

func (this *QAbstractExtensionFactory) cPointer() *C.QAbstractExtensionFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractExtensionFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractExtensionFactory constructs the type using only CGO pointers.
func newQAbstractExtensionFactory(h *C.QAbstractExtensionFactory) *QAbstractExtensionFactory {
	if h == nil {
		return nil
	}

	return &QAbstractExtensionFactory{h: h}
}

// UnsafeNewQAbstractExtensionFactory constructs the type using only unsafe pointers.
func UnsafeNewQAbstractExtensionFactory(h unsafe.Pointer) *QAbstractExtensionFactory {
	return newQAbstractExtensionFactory((*C.QAbstractExtensionFactory)(h))
}

func (this *QAbstractExtensionFactory) Extension(object *qt.QObject, iid string) *qt.QObject {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))
	return qt.UnsafeNewQObject(unsafe.Pointer(C.QAbstractExtensionFactory_extension(this.h, (*C.QObject)(object.UnsafePointer()), iid_ms)))
}

func (this *QAbstractExtensionFactory) OperatorAssign(param1 *QAbstractExtensionFactory) {
	C.QAbstractExtensionFactory_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractExtensionFactory) Delete() {
	C.QAbstractExtensionFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractExtensionFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractExtensionFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractExtensionManager struct {
	h *C.QAbstractExtensionManager
}

func (this *QAbstractExtensionManager) cPointer() *C.QAbstractExtensionManager {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractExtensionManager) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractExtensionManager constructs the type using only CGO pointers.
func newQAbstractExtensionManager(h *C.QAbstractExtensionManager) *QAbstractExtensionManager {
	if h == nil {
		return nil
	}

	return &QAbstractExtensionManager{h: h}
}

// UnsafeNewQAbstractExtensionManager constructs the type using only unsafe pointers.
func UnsafeNewQAbstractExtensionManager(h unsafe.Pointer) *QAbstractExtensionManager {
	return newQAbstractExtensionManager((*C.QAbstractExtensionManager)(h))
}

func (this *QAbstractExtensionManager) RegisterExtensions(factory *QAbstractExtensionFactory, iid string) {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))
	C.QAbstractExtensionManager_registerExtensions(this.h, factory.cPointer(), iid_ms)
}

func (this *QAbstractExtensionManager) UnregisterExtensions(factory *QAbstractExtensionFactory, iid string) {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))
	C.QAbstractExtensionManager_unregisterExtensions(this.h, factory.cPointer(), iid_ms)
}

func (this *QAbstractExtensionManager) Extension(object *qt.QObject, iid string) *qt.QObject {
	iid_ms := C.struct_miqt_string{}
	iid_ms.data = C.CString(iid)
	iid_ms.len = C.size_t(len(iid))
	defer C.free(unsafe.Pointer(iid_ms.data))
	return qt.UnsafeNewQObject(unsafe.Pointer(C.QAbstractExtensionManager_extension(this.h, (*C.QObject)(object.UnsafePointer()), iid_ms)))
}

func (this *QAbstractExtensionManager) OperatorAssign(param1 *QAbstractExtensionManager) {
	C.QAbstractExtensionManager_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractExtensionManager) Delete() {
	C.QAbstractExtensionManager_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractExtensionManager) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractExtensionManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
