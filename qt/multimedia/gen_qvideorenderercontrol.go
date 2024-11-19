package multimedia

/*

#include "gen_qvideorenderercontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QVideoRendererControl struct {
	h          *C.QVideoRendererControl
	isSubclass bool
	*QMediaControl
}

func (this *QVideoRendererControl) cPointer() *C.QVideoRendererControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoRendererControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoRendererControl constructs the type using only CGO pointers.
func newQVideoRendererControl(h *C.QVideoRendererControl, h_QMediaControl *C.QMediaControl, h_QObject *C.QObject) *QVideoRendererControl {
	if h == nil {
		return nil
	}
	return &QVideoRendererControl{h: h,
		QMediaControl: newQMediaControl(h_QMediaControl, h_QObject)}
}

// UnsafeNewQVideoRendererControl constructs the type using only unsafe pointers.
func UnsafeNewQVideoRendererControl(h unsafe.Pointer, h_QMediaControl unsafe.Pointer, h_QObject unsafe.Pointer) *QVideoRendererControl {
	if h == nil {
		return nil
	}

	return &QVideoRendererControl{h: (*C.QVideoRendererControl)(h),
		QMediaControl: UnsafeNewQMediaControl(h_QMediaControl, h_QObject)}
}

func (this *QVideoRendererControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoRendererControl_MetaObject(this.h)))
}

func (this *QVideoRendererControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoRendererControl_Metacast(this.h, param1_Cstring))
}

func QVideoRendererControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoRendererControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoRendererControl) Surface() *QAbstractVideoSurface {
	return UnsafeNewQAbstractVideoSurface(unsafe.Pointer(C.QVideoRendererControl_Surface(this.h)), nil)
}

func (this *QVideoRendererControl) SetSurface(surface *QAbstractVideoSurface) {
	C.QVideoRendererControl_SetSurface(this.h, surface.cPointer())
}

func QVideoRendererControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoRendererControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoRendererControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoRendererControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoRendererControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoRendererControl) Delete() {
	C.QVideoRendererControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoRendererControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoRendererControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
