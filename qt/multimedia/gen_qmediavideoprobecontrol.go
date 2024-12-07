package multimedia

/*

#include "gen_qmediavideoprobecontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaVideoProbeControl struct {
	h          *C.QMediaVideoProbeControl
	isSubclass bool
	*QMediaControl
}

func (this *QMediaVideoProbeControl) cPointer() *C.QMediaVideoProbeControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaVideoProbeControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaVideoProbeControl constructs the type using only CGO pointers.
func newQMediaVideoProbeControl(h *C.QMediaVideoProbeControl) *QMediaVideoProbeControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QMediaVideoProbeControl_virtbase(h, &outptr_QMediaControl)

	return &QMediaVideoProbeControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQMediaVideoProbeControl constructs the type using only unsafe pointers.
func UnsafeNewQMediaVideoProbeControl(h unsafe.Pointer) *QMediaVideoProbeControl {
	return newQMediaVideoProbeControl((*C.QMediaVideoProbeControl)(h))
}

func (this *QMediaVideoProbeControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaVideoProbeControl_MetaObject(this.h)))
}

func (this *QMediaVideoProbeControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaVideoProbeControl_Metacast(this.h, param1_Cstring))
}

func QMediaVideoProbeControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaVideoProbeControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaVideoProbeControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaVideoProbeControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaVideoProbeControl) VideoFrameProbed(frame *QVideoFrame) {
	C.QMediaVideoProbeControl_VideoFrameProbed(this.h, frame.cPointer())
}
func (this *QMediaVideoProbeControl) OnVideoFrameProbed(slot func(frame *QVideoFrame)) {
	C.QMediaVideoProbeControl_connect_VideoFrameProbed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaVideoProbeControl_VideoFrameProbed
func miqt_exec_callback_QMediaVideoProbeControl_VideoFrameProbed(cb C.intptr_t, frame *C.QVideoFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QVideoFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVideoFrame(frame)

	gofunc(slotval1)
}

func (this *QMediaVideoProbeControl) Flush() {
	C.QMediaVideoProbeControl_Flush(this.h)
}
func (this *QMediaVideoProbeControl) OnFlush(slot func()) {
	C.QMediaVideoProbeControl_connect_Flush(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaVideoProbeControl_Flush
func miqt_exec_callback_QMediaVideoProbeControl_Flush(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QMediaVideoProbeControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaVideoProbeControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaVideoProbeControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaVideoProbeControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaVideoProbeControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaVideoProbeControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaVideoProbeControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaVideoProbeControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaVideoProbeControl) Delete() {
	C.QMediaVideoProbeControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaVideoProbeControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaVideoProbeControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
