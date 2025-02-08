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

// newQMediaCaptureSession constructs the type using only CGO pointers.
func newQMediaCaptureSession(h *C.QMediaCaptureSession) *QMediaCaptureSession {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QMediaCaptureSession_virtbase(h, &outptr_QObject)

	return &QMediaCaptureSession{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQMediaCaptureSession constructs the type using only unsafe pointers.
func UnsafeNewQMediaCaptureSession(h unsafe.Pointer) *QMediaCaptureSession {
	return newQMediaCaptureSession((*C.QMediaCaptureSession)(h))
}

// NewQMediaCaptureSession constructs a new QMediaCaptureSession object.
func NewQMediaCaptureSession() *QMediaCaptureSession {

	return newQMediaCaptureSession(C.QMediaCaptureSession_new())
}

// NewQMediaCaptureSession2 constructs a new QMediaCaptureSession object.
func NewQMediaCaptureSession2(parent *qt6.QObject) *QMediaCaptureSession {

	return newQMediaCaptureSession(C.QMediaCaptureSession_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QMediaCaptureSession) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaCaptureSession_metaObject(this.h)))
}

func (this *QMediaCaptureSession) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaCaptureSession_metacast(this.h, param1_Cstring))
}

func QMediaCaptureSession_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaCaptureSession_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaCaptureSession) AudioInput() *QAudioInput {
	return newQAudioInput(C.QMediaCaptureSession_audioInput(this.h))
}

func (this *QMediaCaptureSession) SetAudioInput(input *QAudioInput) {
	C.QMediaCaptureSession_setAudioInput(this.h, input.cPointer())
}

func (this *QMediaCaptureSession) Camera() *QCamera {
	return newQCamera(C.QMediaCaptureSession_camera(this.h))
}

func (this *QMediaCaptureSession) SetCamera(camera *QCamera) {
	C.QMediaCaptureSession_setCamera(this.h, camera.cPointer())
}

func (this *QMediaCaptureSession) ImageCapture() *QImageCapture {
	return newQImageCapture(C.QMediaCaptureSession_imageCapture(this.h))
}

func (this *QMediaCaptureSession) SetImageCapture(imageCapture *QImageCapture) {
	C.QMediaCaptureSession_setImageCapture(this.h, imageCapture.cPointer())
}

func (this *QMediaCaptureSession) Recorder() *QMediaRecorder {
	return newQMediaRecorder(C.QMediaCaptureSession_recorder(this.h))
}

func (this *QMediaCaptureSession) SetRecorder(recorder *QMediaRecorder) {
	C.QMediaCaptureSession_setRecorder(this.h, recorder.cPointer())
}

func (this *QMediaCaptureSession) SetVideoOutput(output *qt6.QObject) {
	C.QMediaCaptureSession_setVideoOutput(this.h, (*C.QObject)(output.UnsafePointer()))
}

func (this *QMediaCaptureSession) VideoOutput() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QMediaCaptureSession_videoOutput(this.h)))
}

func (this *QMediaCaptureSession) SetVideoSink(sink *QVideoSink) {
	C.QMediaCaptureSession_setVideoSink(this.h, sink.cPointer())
}

func (this *QMediaCaptureSession) VideoSink() *QVideoSink {
	return newQVideoSink(C.QMediaCaptureSession_videoSink(this.h))
}

func (this *QMediaCaptureSession) SetAudioOutput(output *QAudioOutput) {
	C.QMediaCaptureSession_setAudioOutput(this.h, output.cPointer())
}

func (this *QMediaCaptureSession) AudioOutput() *QAudioOutput {
	return newQAudioOutput(C.QMediaCaptureSession_audioOutput(this.h))
}

func (this *QMediaCaptureSession) AudioInputChanged() {
	C.QMediaCaptureSession_audioInputChanged(this.h)
}
func (this *QMediaCaptureSession) OnAudioInputChanged(slot func()) {
	C.QMediaCaptureSession_connect_audioInputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_audioInputChanged
func miqt_exec_callback_QMediaCaptureSession_audioInputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) CameraChanged() {
	C.QMediaCaptureSession_cameraChanged(this.h)
}
func (this *QMediaCaptureSession) OnCameraChanged(slot func()) {
	C.QMediaCaptureSession_connect_cameraChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_cameraChanged
func miqt_exec_callback_QMediaCaptureSession_cameraChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) ImageCaptureChanged() {
	C.QMediaCaptureSession_imageCaptureChanged(this.h)
}
func (this *QMediaCaptureSession) OnImageCaptureChanged(slot func()) {
	C.QMediaCaptureSession_connect_imageCaptureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_imageCaptureChanged
func miqt_exec_callback_QMediaCaptureSession_imageCaptureChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) RecorderChanged() {
	C.QMediaCaptureSession_recorderChanged(this.h)
}
func (this *QMediaCaptureSession) OnRecorderChanged(slot func()) {
	C.QMediaCaptureSession_connect_recorderChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_recorderChanged
func miqt_exec_callback_QMediaCaptureSession_recorderChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) VideoOutputChanged() {
	C.QMediaCaptureSession_videoOutputChanged(this.h)
}
func (this *QMediaCaptureSession) OnVideoOutputChanged(slot func()) {
	C.QMediaCaptureSession_connect_videoOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_videoOutputChanged
func miqt_exec_callback_QMediaCaptureSession_videoOutputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaCaptureSession) AudioOutputChanged() {
	C.QMediaCaptureSession_audioOutputChanged(this.h)
}
func (this *QMediaCaptureSession) OnAudioOutputChanged(slot func()) {
	C.QMediaCaptureSession_connect_audioOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_audioOutputChanged
func miqt_exec_callback_QMediaCaptureSession_audioOutputChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QMediaCaptureSession_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaCaptureSession_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaCaptureSession_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QMediaCaptureSession that was directly constructed.
func (this *QMediaCaptureSession) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QMediaCaptureSession_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMediaCaptureSession that was directly constructed.
func (this *QMediaCaptureSession) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMediaCaptureSession_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMediaCaptureSession that was directly constructed.
func (this *QMediaCaptureSession) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMediaCaptureSession_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMediaCaptureSession that was directly constructed.
func (this *QMediaCaptureSession) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMediaCaptureSession_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMediaCaptureSession) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QMediaCaptureSession_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaCaptureSession) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QMediaCaptureSession_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaCaptureSession_event
func miqt_exec_callback_QMediaCaptureSession_event(self *C.QMediaCaptureSession, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMediaCaptureSession) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QMediaCaptureSession_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaCaptureSession) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QMediaCaptureSession_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaCaptureSession_eventFilter
func miqt_exec_callback_QMediaCaptureSession_eventFilter(self *C.QMediaCaptureSession, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMediaCaptureSession) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QMediaCaptureSession_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QMediaCaptureSession_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaCaptureSession_timerEvent
func miqt_exec_callback_QMediaCaptureSession_timerEvent(self *C.QMediaCaptureSession, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMediaCaptureSession) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QMediaCaptureSession_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QMediaCaptureSession_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaCaptureSession_childEvent
func miqt_exec_callback_QMediaCaptureSession_childEvent(self *C.QMediaCaptureSession, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMediaCaptureSession) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QMediaCaptureSession_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QMediaCaptureSession_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaCaptureSession_customEvent
func miqt_exec_callback_QMediaCaptureSession_customEvent(self *C.QMediaCaptureSession, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMediaCaptureSession) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaCaptureSession_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMediaCaptureSession_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaCaptureSession_connectNotify
func miqt_exec_callback_QMediaCaptureSession_connectNotify(self *C.QMediaCaptureSession, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMediaCaptureSession) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaCaptureSession_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMediaCaptureSession_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaCaptureSession_disconnectNotify
func miqt_exec_callback_QMediaCaptureSession_disconnectNotify(self *C.QMediaCaptureSession, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMediaCaptureSession) Delete() {
	C.QMediaCaptureSession_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaCaptureSession) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaCaptureSession) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
