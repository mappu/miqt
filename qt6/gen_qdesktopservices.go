package qt6

/*

#include "gen_qdesktopservices.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDesktopServices struct {
	h          *C.QDesktopServices
	isSubclass bool
}

func (this *QDesktopServices) cPointer() *C.QDesktopServices {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesktopServices) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesktopServices constructs the type using only CGO pointers.
func newQDesktopServices(h *C.QDesktopServices) *QDesktopServices {
	if h == nil {
		return nil
	}

	return &QDesktopServices{h: h}
}

// UnsafeNewQDesktopServices constructs the type using only unsafe pointers.
func UnsafeNewQDesktopServices(h unsafe.Pointer) *QDesktopServices {
	return newQDesktopServices((*C.QDesktopServices)(h))
}

func QDesktopServices_OpenUrl(url *QUrl) bool {
	return (bool)(C.QDesktopServices_OpenUrl(url.cPointer()))
}

func QDesktopServices_SetUrlHandler(scheme string, receiver *QObject, method string) {
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	C.QDesktopServices_SetUrlHandler(scheme_ms, receiver.cPointer(), method_Cstring)
}

func QDesktopServices_UnsetUrlHandler(scheme string) {
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	C.QDesktopServices_UnsetUrlHandler(scheme_ms)
}

// Delete this object from C++ memory.
func (this *QDesktopServices) Delete() {
	C.QDesktopServices_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesktopServices) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesktopServices) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
