package multimedia

/*

#include "gen_qcamerainfocontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QCameraInfoControl struct {
	h *C.QCameraInfoControl
	*QMediaControl
}

func (this *QCameraInfoControl) cPointer() *C.QCameraInfoControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraInfoControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraInfoControl constructs the type using only CGO pointers.
func newQCameraInfoControl(h *C.QCameraInfoControl) *QCameraInfoControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraInfoControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraInfoControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraInfoControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraInfoControl(h unsafe.Pointer) *QCameraInfoControl {
	return newQCameraInfoControl((*C.QCameraInfoControl)(h))
}

func (this *QCameraInfoControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraInfoControl_metaObject(this.h)))
}

func (this *QCameraInfoControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraInfoControl_metacast(this.h, param1_Cstring))
}

func QCameraInfoControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraInfoControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraInfoControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraInfoControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraInfoControl) CameraPosition(deviceName string) QCamera__Position {
	deviceName_ms := C.struct_miqt_string{}
	deviceName_ms.data = C.CString(deviceName)
	deviceName_ms.len = C.size_t(len(deviceName))
	defer C.free(unsafe.Pointer(deviceName_ms.data))
	return (QCamera__Position)(C.QCameraInfoControl_cameraPosition(this.h, deviceName_ms))
}

func (this *QCameraInfoControl) CameraOrientation(deviceName string) int {
	deviceName_ms := C.struct_miqt_string{}
	deviceName_ms.data = C.CString(deviceName)
	deviceName_ms.len = C.size_t(len(deviceName))
	defer C.free(unsafe.Pointer(deviceName_ms.data))
	return (int)(C.QCameraInfoControl_cameraOrientation(this.h, deviceName_ms))
}

func QCameraInfoControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraInfoControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraInfoControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraInfoControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraInfoControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraInfoControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraInfoControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraInfoControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraInfoControl) Delete() {
	C.QCameraInfoControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraInfoControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraInfoControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
