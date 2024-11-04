package multimedia

/*

#include "gen_qvideoprobe.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoProbe struct {
	h *C.QVideoProbe
	*qt.QObject
}

func (this *QVideoProbe) cPointer() *C.QVideoProbe {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoProbe) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVideoProbe(h *C.QVideoProbe) *QVideoProbe {
	if h == nil {
		return nil
	}
	return &QVideoProbe{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQVideoProbe(h unsafe.Pointer) *QVideoProbe {
	return newQVideoProbe((*C.QVideoProbe)(h))
}

// NewQVideoProbe constructs a new QVideoProbe object.
func NewQVideoProbe() *QVideoProbe {
	ret := C.QVideoProbe_new()
	return newQVideoProbe(ret)
}

// NewQVideoProbe2 constructs a new QVideoProbe object.
func NewQVideoProbe2(parent *qt.QObject) *QVideoProbe {
	ret := C.QVideoProbe_new2((*C.QObject)(parent.UnsafePointer()))
	return newQVideoProbe(ret)
}

func (this *QVideoProbe) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoProbe_MetaObject(this.h)))
}

func (this *QVideoProbe) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoProbe_Metacast(this.h, param1_Cstring))
}

func QVideoProbe_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoProbe) SetSource(source *QMediaObject) bool {
	return (bool)(C.QVideoProbe_SetSource(this.h, source.cPointer()))
}

func (this *QVideoProbe) SetSourceWithSource(source *QMediaRecorder) bool {
	return (bool)(C.QVideoProbe_SetSourceWithSource(this.h, source.cPointer()))
}

func (this *QVideoProbe) IsActive() bool {
	return (bool)(C.QVideoProbe_IsActive(this.h))
}

func (this *QVideoProbe) VideoFrameProbed(frame *QVideoFrame) {
	C.QVideoProbe_VideoFrameProbed(this.h, frame.cPointer())
}
func (this *QVideoProbe) OnVideoFrameProbed(slot func(frame *QVideoFrame)) {
	C.QVideoProbe_connect_VideoFrameProbed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_VideoFrameProbed
func miqt_exec_callback_QVideoProbe_VideoFrameProbed(cb C.intptr_t, frame *C.QVideoFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QVideoFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoFrame(unsafe.Pointer(frame))

	gofunc(slotval1)
}

func (this *QVideoProbe) Flush() {
	C.QVideoProbe_Flush(this.h)
}
func (this *QVideoProbe) OnFlush(slot func()) {
	C.QVideoProbe_connect_Flush(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_Flush
func miqt_exec_callback_QVideoProbe_Flush(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVideoProbe_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoProbe) Delete() {
	C.QVideoProbe_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoProbe) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoProbe) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
