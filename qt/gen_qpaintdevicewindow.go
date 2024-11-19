package qt

/*

#include "gen_qpaintdevicewindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPaintDeviceWindow struct {
	h          *C.QPaintDeviceWindow
	isSubclass bool
	*QWindow
	*QPaintDevice
}

func (this *QPaintDeviceWindow) cPointer() *C.QPaintDeviceWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPaintDeviceWindow) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPaintDeviceWindow constructs the type using only CGO pointers.
func newQPaintDeviceWindow(h *C.QPaintDeviceWindow, h_QWindow *C.QWindow, h_QObject *C.QObject, h_QSurface *C.QSurface, h_QPaintDevice *C.QPaintDevice) *QPaintDeviceWindow {
	if h == nil {
		return nil
	}
	return &QPaintDeviceWindow{h: h,
		QWindow:      newQWindow(h_QWindow, h_QObject, h_QSurface),
		QPaintDevice: newQPaintDevice(h_QPaintDevice)}
}

// UnsafeNewQPaintDeviceWindow constructs the type using only unsafe pointers.
func UnsafeNewQPaintDeviceWindow(h unsafe.Pointer, h_QWindow unsafe.Pointer, h_QObject unsafe.Pointer, h_QSurface unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QPaintDeviceWindow {
	if h == nil {
		return nil
	}

	return &QPaintDeviceWindow{h: (*C.QPaintDeviceWindow)(h),
		QWindow:      UnsafeNewQWindow(h_QWindow, h_QObject, h_QSurface),
		QPaintDevice: UnsafeNewQPaintDevice(h_QPaintDevice)}
}

func (this *QPaintDeviceWindow) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QPaintDeviceWindow_MetaObject(this.h)))
}

func (this *QPaintDeviceWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPaintDeviceWindow_Metacast(this.h, param1_Cstring))
}

func QPaintDeviceWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPaintDeviceWindow_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPaintDeviceWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPaintDeviceWindow_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPaintDeviceWindow) Update(rect *QRect) {
	C.QPaintDeviceWindow_Update(this.h, rect.cPointer())
}

func (this *QPaintDeviceWindow) UpdateWithRegion(region *QRegion) {
	C.QPaintDeviceWindow_UpdateWithRegion(this.h, region.cPointer())
}

func (this *QPaintDeviceWindow) Update2() {
	C.QPaintDeviceWindow_Update2(this.h)
}

func QPaintDeviceWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPaintDeviceWindow_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPaintDeviceWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPaintDeviceWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPaintDeviceWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPaintDeviceWindow_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPaintDeviceWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPaintDeviceWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPaintDeviceWindow) Delete() {
	C.QPaintDeviceWindow_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintDeviceWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintDeviceWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
