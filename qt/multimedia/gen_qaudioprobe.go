package multimedia

/*

#include "gen_qaudioprobe.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioProbe struct {
	h *C.QAudioProbe
	*qt.QObject
}

func (this *QAudioProbe) cPointer() *C.QAudioProbe {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioProbe) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioProbe(h *C.QAudioProbe) *QAudioProbe {
	if h == nil {
		return nil
	}
	return &QAudioProbe{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAudioProbe(h unsafe.Pointer) *QAudioProbe {
	return newQAudioProbe((*C.QAudioProbe)(h))
}

// NewQAudioProbe constructs a new QAudioProbe object.
func NewQAudioProbe() *QAudioProbe {
	ret := C.QAudioProbe_new()
	return newQAudioProbe(ret)
}

// NewQAudioProbe2 constructs a new QAudioProbe object.
func NewQAudioProbe2(parent *qt.QObject) *QAudioProbe {
	ret := C.QAudioProbe_new2((*C.QObject)(parent.UnsafePointer()))
	return newQAudioProbe(ret)
}

func (this *QAudioProbe) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioProbe_MetaObject(this.h)))
}

func (this *QAudioProbe) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioProbe_Metacast(this.h, param1_Cstring))
}

func QAudioProbe_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioProbe_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioProbe) SetSource(source *QMediaObject) bool {
	return (bool)(C.QAudioProbe_SetSource(this.h, source.cPointer()))
}

func (this *QAudioProbe) SetSourceWithSource(source *QMediaRecorder) bool {
	return (bool)(C.QAudioProbe_SetSourceWithSource(this.h, source.cPointer()))
}

func (this *QAudioProbe) IsActive() bool {
	return (bool)(C.QAudioProbe_IsActive(this.h))
}

func (this *QAudioProbe) AudioBufferProbed(buffer *QAudioBuffer) {
	C.QAudioProbe_AudioBufferProbed(this.h, buffer.cPointer())
}
func (this *QAudioProbe) OnAudioBufferProbed(slot func(buffer *QAudioBuffer)) {
	C.QAudioProbe_connect_AudioBufferProbed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_AudioBufferProbed
func miqt_exec_callback_QAudioProbe_AudioBufferProbed(cb C.intptr_t, buffer *C.QAudioBuffer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(buffer *QAudioBuffer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAudioBuffer(unsafe.Pointer(buffer))

	gofunc(slotval1)
}

func (this *QAudioProbe) Flush() {
	C.QAudioProbe_Flush(this.h)
}
func (this *QAudioProbe) OnFlush(slot func()) {
	C.QAudioProbe_connect_Flush(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_Flush
func miqt_exec_callback_QAudioProbe_Flush(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAudioProbe_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioProbe_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioProbe_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioProbe_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioProbe) Delete() {
	C.QAudioProbe_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioProbe) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioProbe) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
