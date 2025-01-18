package multimedia

/*

#include "gen_qcameracapturebufferformatcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraCaptureBufferFormatControl struct {
	h *C.QCameraCaptureBufferFormatControl
	*QMediaControl
}

func (this *QCameraCaptureBufferFormatControl) cPointer() *C.QCameraCaptureBufferFormatControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraCaptureBufferFormatControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraCaptureBufferFormatControl constructs the type using only CGO pointers.
func newQCameraCaptureBufferFormatControl(h *C.QCameraCaptureBufferFormatControl) *QCameraCaptureBufferFormatControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraCaptureBufferFormatControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraCaptureBufferFormatControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraCaptureBufferFormatControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraCaptureBufferFormatControl(h unsafe.Pointer) *QCameraCaptureBufferFormatControl {
	return newQCameraCaptureBufferFormatControl((*C.QCameraCaptureBufferFormatControl)(h))
}

func (this *QCameraCaptureBufferFormatControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraCaptureBufferFormatControl_MetaObject(this.h)))
}

func (this *QCameraCaptureBufferFormatControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraCaptureBufferFormatControl_Metacast(this.h, param1_Cstring))
}

func QCameraCaptureBufferFormatControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureBufferFormatControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraCaptureBufferFormatControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureBufferFormatControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraCaptureBufferFormatControl) SupportedBufferFormats() []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QCameraCaptureBufferFormatControl_SupportedBufferFormats(this.h)
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

func (this *QCameraCaptureBufferFormatControl) BufferFormat() QVideoFrame__PixelFormat {
	return (QVideoFrame__PixelFormat)(C.QCameraCaptureBufferFormatControl_BufferFormat(this.h))
}

func (this *QCameraCaptureBufferFormatControl) SetBufferFormat(format QVideoFrame__PixelFormat) {
	C.QCameraCaptureBufferFormatControl_SetBufferFormat(this.h, (C.int)(format))
}

func (this *QCameraCaptureBufferFormatControl) BufferFormatChanged(format QVideoFrame__PixelFormat) {
	C.QCameraCaptureBufferFormatControl_BufferFormatChanged(this.h, (C.int)(format))
}
func (this *QCameraCaptureBufferFormatControl) OnBufferFormatChanged(slot func(format QVideoFrame__PixelFormat)) {
	C.QCameraCaptureBufferFormatControl_connect_BufferFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraCaptureBufferFormatControl_BufferFormatChanged
func miqt_exec_callback_QCameraCaptureBufferFormatControl_BufferFormatChanged(cb C.intptr_t, format C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format QVideoFrame__PixelFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QVideoFrame__PixelFormat)(format)

	gofunc(slotval1)
}

func QCameraCaptureBufferFormatControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureBufferFormatControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraCaptureBufferFormatControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureBufferFormatControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraCaptureBufferFormatControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureBufferFormatControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraCaptureBufferFormatControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraCaptureBufferFormatControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraCaptureBufferFormatControl) Delete() {
	C.QCameraCaptureBufferFormatControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraCaptureBufferFormatControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraCaptureBufferFormatControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
