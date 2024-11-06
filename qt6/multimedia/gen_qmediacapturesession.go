package multimedia

/*

#include "gen_qmediacapturesession.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaCaptureSession struct {
	h *C.QMediaCaptureSession
	*qt6.QObject
}

func (this *QMediaCaptureSession) cPointer() *C.QMediaCaptureSession {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaCaptureSession) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaCaptureSession(h *C.QMediaCaptureSession) *QMediaCaptureSession {
	if h == nil {
		return nil
	}
	return &QMediaCaptureSession{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQMediaCaptureSession(h unsafe.Pointer) *QMediaCaptureSession {
	return newQMediaCaptureSession((*C.QMediaCaptureSession)(h))
}

// NewQMediaCaptureSession constructs a new QMediaCaptureSession object.
func NewQMediaCaptureSession() *QMediaCaptureSession {
	ret := C.QMediaCaptureSession_new()
	return newQMediaCaptureSession(ret)
}

// NewQMediaCaptureSession2 constructs a new QMediaCaptureSession object.
func NewQMediaCaptureSession2(parent *qt6.QObject) *QMediaCaptureSession {
	ret := C.QMediaCaptureSession_new2((*C.QObject)(parent.UnsafePointer()))
	return newQMediaCaptureSession(ret)
}

func (this *QMediaCaptureSession) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaCaptureSession_MetaObject(this.h)))
}

func (this *QMediaCaptureSession) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaCaptureSession_Metacast(this.h, param1_Cstring))
}

func QMediaCaptureSession_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaCaptureSession_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaCaptureSession) AudioInput() *QAudioInput {
	return UnsafeNewQAudioInput(unsafe.Pointer(C.QMediaCaptureSession_AudioInput(this.h)))
}

func (this *QMediaCaptureSession) SetAudioInput(input *QAudioInput) {
	C.QMediaCaptureSession_SetAudioInput(this.h, input.cPointer())
}

func (this *QMediaCaptureSession) Camera() *QCamera {
	return UnsafeNewQCamera(unsafe.Pointer(C.QMediaCaptureSession_Camera(this.h)))
}

func (this *QMediaCaptureSession) SetCamera(camera *QCamera) {
	C.QMediaCaptureSession_SetCamera(this.h, camera.cPointer())
}

func (this *QMediaCaptureSession) ImageCapture() *QImageCapture {
	return UnsafeNewQImageCapture(unsafe.Pointer(C.QMediaCaptureSession_ImageCapture(this.h)))
}

func (this *QMediaCaptureSession) SetImageCapture(imageCapture *QImageCapture) {
	C.QMediaCaptureSession_SetImageCapture(this.h, imageCapture.cPointer())
}

func (this *QMediaCaptureSession) Recorder() *QMediaRecorder {
	return UnsafeNewQMediaRecorder(unsafe.Pointer(C.QMediaCaptureSession_Recorder(this.h)))
}

func (this *QMediaCaptureSession) SetRecorder(recorder *QMediaRecorder) {
	C.QMediaCaptureSession_SetRecorder(this.h, recorder.cPointer())
}

func (this *QMediaCaptureSession) SetVideoOutput(output *qt6.QObject) {
	C.QMediaCaptureSession_SetVideoOutput(this.h, (*C.QObject)(output.UnsafePointer()))
}

func (this *QMediaCaptureSession) VideoOutput() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QMediaCaptureSession_VideoOutput(this.h)))
}

func (this *QMediaCaptureSession) SetVideoSink(sink *QVideoSink) {
	C.QMediaCaptureSession_SetVideoSink(this.h, sink.cPointer())
}

func (this *QMediaCaptureSession) VideoSink() *QVideoSink {
	return UnsafeNewQVideoSink(unsafe.Pointer(C.QMediaCaptureSession_VideoSink(this.h)))
}

func (this *QMediaCaptureSession) SetAudioOutput(output *QAudioOutput) {
	C.QMediaCaptureSession_SetAudioOutput(this.h, output.cPointer())
}

func (this *QMediaCaptureSession) AudioOutput() *QAudioOutput {
	return UnsafeNewQAudioOutput(unsafe.Pointer(C.QMediaCaptureSession_AudioOutput(this.h)))
}

func (this *QMediaCaptureSession) AudioInputChanged() {
	C.QMediaCaptureSession_AudioInputChanged(this.h)
}
func (this *QMediaCaptureSession) OnAudioInputChanged(slot func()) {
	C.QMediaCaptureSession_connect_AudioInputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_AudioInputChanged
func miqt_exec_callback_QMediaCaptureSession_AudioInputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) CameraChanged() {
	C.QMediaCaptureSession_CameraChanged(this.h)
}
func (this *QMediaCaptureSession) OnCameraChanged(slot func()) {
	C.QMediaCaptureSession_connect_CameraChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_CameraChanged
func miqt_exec_callback_QMediaCaptureSession_CameraChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) ImageCaptureChanged() {
	C.QMediaCaptureSession_ImageCaptureChanged(this.h)
}
func (this *QMediaCaptureSession) OnImageCaptureChanged(slot func()) {
	C.QMediaCaptureSession_connect_ImageCaptureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_ImageCaptureChanged
func miqt_exec_callback_QMediaCaptureSession_ImageCaptureChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) RecorderChanged() {
	C.QMediaCaptureSession_RecorderChanged(this.h)
}
func (this *QMediaCaptureSession) OnRecorderChanged(slot func()) {
	C.QMediaCaptureSession_connect_RecorderChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_RecorderChanged
func miqt_exec_callback_QMediaCaptureSession_RecorderChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) VideoOutputChanged() {
	C.QMediaCaptureSession_VideoOutputChanged(this.h)
}
func (this *QMediaCaptureSession) OnVideoOutputChanged(slot func()) {
	C.QMediaCaptureSession_connect_VideoOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_VideoOutputChanged
func miqt_exec_callback_QMediaCaptureSession_VideoOutputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) AudioOutputChanged() {
	C.QMediaCaptureSession_AudioOutputChanged(this.h)
}
func (this *QMediaCaptureSession) OnAudioOutputChanged(slot func()) {
	C.QMediaCaptureSession_connect_AudioOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_AudioOutputChanged
func miqt_exec_callback_QMediaCaptureSession_AudioOutputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QMediaCaptureSession_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaCaptureSession_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaCaptureSession_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaCaptureSession_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaCaptureSession) Delete() {
	C.QMediaCaptureSession_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaCaptureSession) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaCaptureSession) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
