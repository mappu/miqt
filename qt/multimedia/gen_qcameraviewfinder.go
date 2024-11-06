package multimedia

/*

#include "gen_qcameraviewfinder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QCameraViewfinder struct {
	h *C.QCameraViewfinder
	*QVideoWidget
}

func (this *QCameraViewfinder) cPointer() *C.QCameraViewfinder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraViewfinder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCameraViewfinder(h *C.QCameraViewfinder) *QCameraViewfinder {
	if h == nil {
		return nil
	}
	return &QCameraViewfinder{h: h, QVideoWidget: UnsafeNewQVideoWidget(unsafe.Pointer(h))}
}

func UnsafeNewQCameraViewfinder(h unsafe.Pointer) *QCameraViewfinder {
	return newQCameraViewfinder((*C.QCameraViewfinder)(h))
}

// NewQCameraViewfinder constructs a new QCameraViewfinder object.
func NewQCameraViewfinder(parent *qt.QWidget) *QCameraViewfinder {
	ret := C.QCameraViewfinder_new((*C.QWidget)(parent.UnsafePointer()))
	return newQCameraViewfinder(ret)
}

// NewQCameraViewfinder2 constructs a new QCameraViewfinder object.
func NewQCameraViewfinder2() *QCameraViewfinder {
	ret := C.QCameraViewfinder_new2()
	return newQCameraViewfinder(ret)
}

func (this *QCameraViewfinder) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraViewfinder_MetaObject(this.h)))
}

func (this *QCameraViewfinder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraViewfinder_Metacast(this.h, param1_Cstring))
}

func QCameraViewfinder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraViewfinder) MediaObject() *QMediaObject {
	return UnsafeNewQMediaObject(unsafe.Pointer(C.QCameraViewfinder_MediaObject(this.h)))
}

func QCameraViewfinder_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraViewfinder) Delete() {
	C.QCameraViewfinder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraViewfinder) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraViewfinder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
