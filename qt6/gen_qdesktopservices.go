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
	h  *C.QDesktopServices
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDesktopServices) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(url)
	return (bool)(C.QDesktopServices_openUrl(url.cPointer()))
}

func QDesktopServices_SetUrlHandler(scheme string, receiver *QObject, method string) {
	defer runtime.KeepAlive(receiver)
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	C.QDesktopServices_setUrlHandler(scheme_ms, receiver.cPointer(), method_Cstring)
}

func QDesktopServices_UnsetUrlHandler(scheme string) {
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	C.QDesktopServices_unsetUrlHandler(scheme_ms)
}

// Delete this object from C++ memory.
func (this *QDesktopServices) Delete() {
	C.QDesktopServices_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDesktopServices) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDesktopServices_delete((*C.QDesktopServices)(gc[0]))
	})
	this.miqtSetGC(gc)
}
