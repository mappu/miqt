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
	h *C.QPaintDeviceWindow
	*QWindow
	*QPaintDevice
}

func (this *QPaintDeviceWindow) cPointer() *C.QPaintDeviceWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPaintDeviceWindow(h *C.QPaintDeviceWindow) *QPaintDeviceWindow {
	if h == nil {
		return nil
	}
	return &QPaintDeviceWindow{h: h, QWindow: newQWindow_U(unsafe.Pointer(h)), QPaintDevice: newQPaintDevice_U(unsafe.Pointer(h))}
}

func newQPaintDeviceWindow_U(h unsafe.Pointer) *QPaintDeviceWindow {
	return newQPaintDeviceWindow((*C.QPaintDeviceWindow)(h))
}

func (this *QPaintDeviceWindow) MetaObject() *QMetaObject {
	_ret := C.QPaintDeviceWindow_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QPaintDeviceWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPaintDeviceWindow_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPaintDeviceWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPaintDeviceWindow_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	var _ms *C.struct_miqt_string = C.QPaintDeviceWindow_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPaintDeviceWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPaintDeviceWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPaintDeviceWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPaintDeviceWindow_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPaintDeviceWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPaintDeviceWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPaintDeviceWindow) Delete() {
	C.QPaintDeviceWindow_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintDeviceWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintDeviceWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
