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

// newQCameraFlashControl constructs the type using only CGO pointers.
func newQCameraFlashControl(h *C.QCameraFlashControl) *QCameraFlashControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraFlashControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraFlashControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraFlashControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraFlashControl(h unsafe.Pointer) *QCameraFlashControl {
	return newQCameraFlashControl((*C.QCameraFlashControl)(h))
}

func (this *QCameraFlashControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraFlashControl_metaObject(this.h)))
}

func (this *QCameraFlashControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraFlashControl_metacast(this.h, param1_Cstring))
}

func QCameraFlashControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFlashControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraFlashControl) FlashMode() QCameraExposure__FlashMode {
	return (QCameraExposure__FlashMode)(C.QCameraFlashControl_flashMode(this.h))
}

func (this *QCameraFlashControl) SetFlashMode(mode QCameraExposure__FlashMode) {
	C.QCameraFlashControl_setFlashMode(this.h, (C.int)(mode))
}

func (this *QCameraFlashControl) IsFlashModeSupported(mode QCameraExposure__FlashMode) bool {
	return (bool)(C.QCameraFlashControl_isFlashModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraFlashControl) IsFlashReady() bool {
	return (bool)(C.QCameraFlashControl_isFlashReady(this.h))
}

func (this *QCameraFlashControl) FlashReady(param1 bool) {
	C.QCameraFlashControl_flashReady(this.h, (C.bool)(param1))
}
func (this *QCameraFlashControl) OnFlashReady(slot func(param1 bool)) {
	C.QCameraFlashControl_connect_flashReady(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFlashControl_flashReady
func miqt_exec_callback_QCameraFlashControl_flashReady(cb C.intptr_t, param1 C.bool) {
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
	var _ms C.struct_miqt_string = C.QCameraFlashControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFlashControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFlashControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFlashControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFlashControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraFlashControl) Delete() {
	C.QCameraFlashControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraFlashControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraFlashControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
