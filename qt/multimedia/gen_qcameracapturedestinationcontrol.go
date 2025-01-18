package multimedia

/*

#include "gen_qcameracapturedestinationcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraCaptureDestinationControl struct {
	h *C.QCameraCaptureDestinationControl
	*QMediaControl
}

func (this *QCameraCaptureDestinationControl) cPointer() *C.QCameraCaptureDestinationControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraCaptureDestinationControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraCaptureDestinationControl constructs the type using only CGO pointers.
func newQCameraCaptureDestinationControl(h *C.QCameraCaptureDestinationControl) *QCameraCaptureDestinationControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraCaptureDestinationControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraCaptureDestinationControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraCaptureDestinationControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraCaptureDestinationControl(h unsafe.Pointer) *QCameraCaptureDestinationControl {
	return newQCameraCaptureDestinationControl((*C.QCameraCaptureDestinationControl)(h))
}

func (this *QCameraCaptureDestinationControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraCaptureDestinationControl_MetaObject(this.h)))
}

func (this *QCameraCaptureDestinationControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraCaptureDestinationControl_Metacast(this.h, param1_Cstring))
}

func QCameraCaptureDestinationControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureDestinationControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraCaptureDestinationControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureDestinationControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraCaptureDestinationControl) IsCaptureDestinationSupported(destination QCameraImageCapture__CaptureDestination) bool {
	return (bool)(C.QCameraCaptureDestinationControl_IsCaptureDestinationSupported(this.h, (C.int)(destination)))
}

func (this *QCameraCaptureDestinationControl) CaptureDestination() QCameraImageCapture__CaptureDestination {
	return (QCameraImageCapture__CaptureDestination)(C.QCameraCaptureDestinationControl_CaptureDestination(this.h))
}

func (this *QCameraCaptureDestinationControl) SetCaptureDestination(destination QCameraImageCapture__CaptureDestination) {
	C.QCameraCaptureDestinationControl_SetCaptureDestination(this.h, (C.int)(destination))
}

func (this *QCameraCaptureDestinationControl) CaptureDestinationChanged(destination QCameraImageCapture__CaptureDestination) {
	C.QCameraCaptureDestinationControl_CaptureDestinationChanged(this.h, (C.int)(destination))
}
func (this *QCameraCaptureDestinationControl) OnCaptureDestinationChanged(slot func(destination QCameraImageCapture__CaptureDestination)) {
	C.QCameraCaptureDestinationControl_connect_CaptureDestinationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraCaptureDestinationControl_CaptureDestinationChanged
func miqt_exec_callback_QCameraCaptureDestinationControl_CaptureDestinationChanged(cb C.intptr_t, destination C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(destination QCameraImageCapture__CaptureDestination))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCameraImageCapture__CaptureDestination)(destination)

	gofunc(slotval1)
}

func QCameraCaptureDestinationControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureDestinationControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraCaptureDestinationControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureDestinationControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraCaptureDestinationControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureDestinationControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraCaptureDestinationControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureDestinationControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraCaptureDestinationControl) Delete() {
	C.QCameraCaptureDestinationControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraCaptureDestinationControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraCaptureDestinationControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
