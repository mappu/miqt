package multimedia

/*

#include "gen_qvideosink.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoSink struct {
	h *C.QVideoSink
	*qt6.QObject
}

func (this *QVideoSink) cPointer() *C.QVideoSink {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoSink) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVideoSink(h *C.QVideoSink) *QVideoSink {
	if h == nil {
		return nil
	}
	return &QVideoSink{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQVideoSink(h unsafe.Pointer) *QVideoSink {
	return newQVideoSink((*C.QVideoSink)(h))
}

// NewQVideoSink constructs a new QVideoSink object.
func NewQVideoSink() *QVideoSink {
	ret := C.QVideoSink_new()
	return newQVideoSink(ret)
}

// NewQVideoSink2 constructs a new QVideoSink object.
func NewQVideoSink2(parent *qt6.QObject) *QVideoSink {
	ret := C.QVideoSink_new2((*C.QObject)(parent.UnsafePointer()))
	return newQVideoSink(ret)
}

func (this *QVideoSink) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoSink_MetaObject(this.h)))
}

func (this *QVideoSink) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoSink_Metacast(this.h, param1_Cstring))
}

func QVideoSink_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoSink_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoSink) VideoSize() *qt6.QSize {
	_ret := C.QVideoSink_VideoSize(this.h)
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoSink) SubtitleText() string {
	var _ms C.struct_miqt_string = C.QVideoSink_SubtitleText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoSink) SetSubtitleText(subtitle string) {
	subtitle_ms := C.struct_miqt_string{}
	subtitle_ms.data = C.CString(subtitle)
	subtitle_ms.len = C.size_t(len(subtitle))
	defer C.free(unsafe.Pointer(subtitle_ms.data))
	C.QVideoSink_SetSubtitleText(this.h, subtitle_ms)
}

func (this *QVideoSink) SetVideoFrame(frame *QVideoFrame) {
	C.QVideoSink_SetVideoFrame(this.h, frame.cPointer())
}

func (this *QVideoSink) VideoFrame() *QVideoFrame {
	_ret := C.QVideoSink_VideoFrame(this.h)
	_goptr := newQVideoFrame(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoSink) VideoFrameChanged(frame *QVideoFrame) {
	C.QVideoSink_VideoFrameChanged(this.h, frame.cPointer())
}
func (this *QVideoSink) OnVideoFrameChanged(slot func(frame *QVideoFrame)) {
	C.QVideoSink_connect_VideoFrameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoSink_VideoFrameChanged
func miqt_exec_callback_QVideoSink_VideoFrameChanged(cb C.intptr_t, frame *C.QVideoFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QVideoFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoFrame(unsafe.Pointer(frame))

	gofunc(slotval1)
}

func (this *QVideoSink) SubtitleTextChanged(subtitleText string) {
	subtitleText_ms := C.struct_miqt_string{}
	subtitleText_ms.data = C.CString(subtitleText)
	subtitleText_ms.len = C.size_t(len(subtitleText))
	defer C.free(unsafe.Pointer(subtitleText_ms.data))
	C.QVideoSink_SubtitleTextChanged(this.h, subtitleText_ms)
}
func (this *QVideoSink) OnSubtitleTextChanged(slot func(subtitleText string)) {
	C.QVideoSink_connect_SubtitleTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoSink_SubtitleTextChanged
func miqt_exec_callback_QVideoSink_SubtitleTextChanged(cb C.intptr_t, subtitleText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(subtitleText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var subtitleText_ms C.struct_miqt_string = subtitleText
	subtitleText_ret := C.GoStringN(subtitleText_ms.data, C.int(int64(subtitleText_ms.len)))
	C.free(unsafe.Pointer(subtitleText_ms.data))
	slotval1 := subtitleText_ret

	gofunc(slotval1)
}

func (this *QVideoSink) VideoSizeChanged() {
	C.QVideoSink_VideoSizeChanged(this.h)
}
func (this *QVideoSink) OnVideoSizeChanged(slot func()) {
	C.QVideoSink_connect_VideoSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoSink_VideoSizeChanged
func miqt_exec_callback_QVideoSink_VideoSizeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVideoSink_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoSink_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoSink_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoSink_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoSink) Delete() {
	C.QVideoSink_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoSink) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoSink) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
