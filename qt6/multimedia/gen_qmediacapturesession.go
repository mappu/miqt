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
	h          *C.QMediaCaptureSession
	isSubclass bool
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
func newQMediaCaptureSession(h *C.QMediaCaptureSession, h_QObject *C.QObject) *QMediaCaptureSession {
	if h == nil {
		return nil
	}
	return &QMediaCaptureSession{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQMediaCaptureSession constructs the type using only unsafe pointers.
func UnsafeNewQMediaCaptureSession(h unsafe.Pointer, h_QObject unsafe.Pointer) *QMediaCaptureSession {
	if h == nil {
		return nil
	}

	return &QMediaCaptureSession{h: (*C.QMediaCaptureSession)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

// NewQMediaCaptureSession constructs a new QMediaCaptureSession object.
func NewQMediaCaptureSession() *QMediaCaptureSession {
	var outptr_QMediaCaptureSession *C.QMediaCaptureSession = nil
	var outptr_QObject *C.QObject = nil

	C.QMediaCaptureSession_new(&outptr_QMediaCaptureSession, &outptr_QObject)
	ret := newQMediaCaptureSession(outptr_QMediaCaptureSession, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQMediaCaptureSession2 constructs a new QMediaCaptureSession object.
func NewQMediaCaptureSession2(parent *qt6.QObject) *QMediaCaptureSession {
	var outptr_QMediaCaptureSession *C.QMediaCaptureSession = nil
	var outptr_QObject *C.QObject = nil

	C.QMediaCaptureSession_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QMediaCaptureSession, &outptr_QObject)
	ret := newQMediaCaptureSession(outptr_QMediaCaptureSession, outptr_QObject)
	ret.isSubclass = true
	return ret
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
	return UnsafeNewQAudioInput(unsafe.Pointer(C.QMediaCaptureSession_AudioInput(this.h)), nil)
}

func (this *QMediaCaptureSession) SetAudioInput(input *QAudioInput) {
	C.QMediaCaptureSession_SetAudioInput(this.h, input.cPointer())
}

func (this *QMediaCaptureSession) Camera() *QCamera {
	return UnsafeNewQCamera(unsafe.Pointer(C.QMediaCaptureSession_Camera(this.h)), nil)
}

func (this *QMediaCaptureSession) SetCamera(camera *QCamera) {
	C.QMediaCaptureSession_SetCamera(this.h, camera.cPointer())
}

func (this *QMediaCaptureSession) ImageCapture() *QImageCapture {
	return UnsafeNewQImageCapture(unsafe.Pointer(C.QMediaCaptureSession_ImageCapture(this.h)), nil)
}

func (this *QMediaCaptureSession) SetImageCapture(imageCapture *QImageCapture) {
	C.QMediaCaptureSession_SetImageCapture(this.h, imageCapture.cPointer())
}

func (this *QMediaCaptureSession) Recorder() *QMediaRecorder {
	return UnsafeNewQMediaRecorder(unsafe.Pointer(C.QMediaCaptureSession_Recorder(this.h)), nil)
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
	return UnsafeNewQVideoSink(unsafe.Pointer(C.QMediaCaptureSession_VideoSink(this.h)), nil)
}

func (this *QMediaCaptureSession) SetAudioOutput(output *QAudioOutput) {
	C.QMediaCaptureSession_SetAudioOutput(this.h, output.cPointer())
}

func (this *QMediaCaptureSession) AudioOutput() *QAudioOutput {
	return UnsafeNewQAudioOutput(unsafe.Pointer(C.QMediaCaptureSession_AudioOutput(this.h)), nil)
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

func (this *QMediaCaptureSession) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QMediaCaptureSession_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaCaptureSession) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMediaCaptureSession_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_Event
func miqt_exec_callback_QMediaCaptureSession_Event(self *C.QMediaCaptureSession, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QMediaCaptureSession_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaCaptureSession) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMediaCaptureSession_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_EventFilter
func miqt_exec_callback_QMediaCaptureSession_EventFilter(self *C.QMediaCaptureSession, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QMediaCaptureSession_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMediaCaptureSession_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_TimerEvent
func miqt_exec_callback_QMediaCaptureSession_TimerEvent(self *C.QMediaCaptureSession, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMediaCaptureSession) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QMediaCaptureSession_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMediaCaptureSession_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_ChildEvent
func miqt_exec_callback_QMediaCaptureSession_ChildEvent(self *C.QMediaCaptureSession, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMediaCaptureSession) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QMediaCaptureSession_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMediaCaptureSession_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_CustomEvent
func miqt_exec_callback_QMediaCaptureSession_CustomEvent(self *C.QMediaCaptureSession, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMediaCaptureSession) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaCaptureSession_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMediaCaptureSession_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_ConnectNotify
func miqt_exec_callback_QMediaCaptureSession_ConnectNotify(self *C.QMediaCaptureSession, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaCaptureSession{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMediaCaptureSession) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaCaptureSession_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaCaptureSession) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMediaCaptureSession_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaCaptureSession_DisconnectNotify
func miqt_exec_callback_QMediaCaptureSession_DisconnectNotify(self *C.QMediaCaptureSession, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QMediaCaptureSession_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaCaptureSession) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaCaptureSession) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
