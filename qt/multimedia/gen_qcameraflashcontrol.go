package multimedia

/*

#include "gen_qcameraflashcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraFlashControl struct {
	h *C.QCameraFlashControl
	*QMediaControl
}

func (this *QCameraFlashControl) cPointer() *C.QCameraFlashControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraFlashControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCameraFlashControl(h *C.QCameraFlashControl) *QCameraFlashControl {
	if h == nil {
		return nil
	}
	return &QCameraFlashControl{h: h, QMediaControl: UnsafeNewQMediaControl(unsafe.Pointer(h))}
}

func UnsafeNewQCameraFlashControl(h unsafe.Pointer) *QCameraFlashControl {
	return newQCameraFlashControl((*C.QCameraFlashControl)(h))
}

func (this *QCameraFlashControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraFlashControl_MetaObject(this.h)))
}

func (this *QCameraFlashControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraFlashControl_Metacast(this.h, param1_Cstring))
}

func QCameraFlashControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFlashControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraFlashControl) FlashMode() QCameraExposure__FlashMode {
	return (QCameraExposure__FlashMode)(C.QCameraFlashControl_FlashMode(this.h))
}

func (this *QCameraFlashControl) SetFlashMode(mode QCameraExposure__FlashMode) {
	C.QCameraFlashControl_SetFlashMode(this.h, (C.int)(mode))
}

func (this *QCameraFlashControl) IsFlashModeSupported(mode QCameraExposure__FlashMode) bool {
	return (bool)(C.QCameraFlashControl_IsFlashModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraFlashControl) IsFlashReady() bool {
	return (bool)(C.QCameraFlashControl_IsFlashReady(this.h))
}

func (this *QCameraFlashControl) FlashReady(param1 bool) {
	C.QCameraFlashControl_FlashReady(this.h, (C.bool)(param1))
}
func (this *QCameraFlashControl) OnFlashReady(slot func(param1 bool)) {
	C.QCameraFlashControl_connect_FlashReady(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFlashControl_FlashReady
func miqt_exec_callback_QCameraFlashControl_FlashReady(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func QCameraFlashControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFlashControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFlashControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFlashControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraFlashControl) Delete() {
	C.QCameraFlashControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraFlashControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraFlashControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
