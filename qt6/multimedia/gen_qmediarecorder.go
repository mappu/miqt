package multimedia

/*

#include "gen_qmediarecorder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaRecorder__Quality int

const (
	QMediaRecorder__VeryLowQuality  QMediaRecorder__Quality = 0
	QMediaRecorder__LowQuality      QMediaRecorder__Quality = 1
	QMediaRecorder__NormalQuality   QMediaRecorder__Quality = 2
	QMediaRecorder__HighQuality     QMediaRecorder__Quality = 3
	QMediaRecorder__VeryHighQuality QMediaRecorder__Quality = 4
)

type QMediaRecorder__EncodingMode int

const (
	QMediaRecorder__ConstantQualityEncoding QMediaRecorder__EncodingMode = 0
	QMediaRecorder__ConstantBitRateEncoding QMediaRecorder__EncodingMode = 1
	QMediaRecorder__AverageBitRateEncoding  QMediaRecorder__EncodingMode = 2
	QMediaRecorder__TwoPassEncoding         QMediaRecorder__EncodingMode = 3
)

type QMediaRecorder__RecorderState int

const (
	QMediaRecorder__StoppedState   QMediaRecorder__RecorderState = 0
	QMediaRecorder__RecordingState QMediaRecorder__RecorderState = 1
	QMediaRecorder__PausedState    QMediaRecorder__RecorderState = 2
)

type QMediaRecorder__Error int

const (
	QMediaRecorder__NoError             QMediaRecorder__Error = 0
	QMediaRecorder__ResourceError       QMediaRecorder__Error = 1
	QMediaRecorder__FormatError         QMediaRecorder__Error = 2
	QMediaRecorder__OutOfSpaceError     QMediaRecorder__Error = 3
	QMediaRecorder__LocationNotWritable QMediaRecorder__Error = 4
)

type QMediaRecorder struct {
	h *C.QMediaRecorder
	*qt6.QObject
}

func (this *QMediaRecorder) cPointer() *C.QMediaRecorder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaRecorder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaRecorder constructs the type using only CGO pointers.
func newQMediaRecorder(h *C.QMediaRecorder) *QMediaRecorder {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QMediaRecorder_virtbase(h, &outptr_QObject)

	return &QMediaRecorder{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQMediaRecorder constructs the type using only unsafe pointers.
func UnsafeNewQMediaRecorder(h unsafe.Pointer) *QMediaRecorder {
	return newQMediaRecorder((*C.QMediaRecorder)(h))
}

// NewQMediaRecorder constructs a new QMediaRecorder object.
func NewQMediaRecorder() *QMediaRecorder {

	return newQMediaRecorder(C.QMediaRecorder_new())
}

// NewQMediaRecorder2 constructs a new QMediaRecorder object.
func NewQMediaRecorder2(parent *qt6.QObject) *QMediaRecorder {

	return newQMediaRecorder(C.QMediaRecorder_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QMediaRecorder) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaRecorder_metaObject(this.h)))
}

func (this *QMediaRecorder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaRecorder_metacast(this.h, param1_Cstring))
}

func QMediaRecorder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorder_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) IsAvailable() bool {
	return (bool)(C.QMediaRecorder_isAvailable(this.h))
}

func (this *QMediaRecorder) OutputLocation() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QMediaRecorder_outputLocation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetOutputLocation(location *qt6.QUrl) {
	C.QMediaRecorder_setOutputLocation(this.h, (*C.QUrl)(location.UnsafePointer()))
}

func (this *QMediaRecorder) ActualLocation() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QMediaRecorder_actualLocation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) RecorderState() QMediaRecorder__RecorderState {
	return (QMediaRecorder__RecorderState)(C.QMediaRecorder_recorderState(this.h))
}

func (this *QMediaRecorder) Error() QMediaRecorder__Error {
	return (QMediaRecorder__Error)(C.QMediaRecorder_error(this.h))
}

func (this *QMediaRecorder) ErrorString() string {
	var _ms C.struct_miqt_string = C.QMediaRecorder_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) Duration() int64 {
	return (int64)(C.QMediaRecorder_duration(this.h))
}

func (this *QMediaRecorder) MediaFormat() *QMediaFormat {
	_goptr := newQMediaFormat(C.QMediaRecorder_mediaFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetMediaFormat(format *QMediaFormat) {
	C.QMediaRecorder_setMediaFormat(this.h, format.cPointer())
}

func (this *QMediaRecorder) EncodingMode() QMediaRecorder__EncodingMode {
	return (QMediaRecorder__EncodingMode)(C.QMediaRecorder_encodingMode(this.h))
}

func (this *QMediaRecorder) SetEncodingMode(encodingMode QMediaRecorder__EncodingMode) {
	C.QMediaRecorder_setEncodingMode(this.h, (C.int)(encodingMode))
}

func (this *QMediaRecorder) Quality() QMediaRecorder__Quality {
	return (QMediaRecorder__Quality)(C.QMediaRecorder_quality(this.h))
}

func (this *QMediaRecorder) SetQuality(quality QMediaRecorder__Quality) {
	C.QMediaRecorder_setQuality(this.h, (C.int)(quality))
}

func (this *QMediaRecorder) VideoResolution() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QMediaRecorder_videoResolution(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetVideoResolution(videoResolution *qt6.QSize) {
	C.QMediaRecorder_setVideoResolution(this.h, (*C.QSize)(videoResolution.UnsafePointer()))
}

func (this *QMediaRecorder) SetVideoResolution2(width int, height int) {
	C.QMediaRecorder_setVideoResolution2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QMediaRecorder) VideoFrameRate() float64 {
	return (float64)(C.QMediaRecorder_videoFrameRate(this.h))
}

func (this *QMediaRecorder) SetVideoFrameRate(frameRate float64) {
	C.QMediaRecorder_setVideoFrameRate(this.h, (C.double)(frameRate))
}

func (this *QMediaRecorder) VideoBitRate() int {
	return (int)(C.QMediaRecorder_videoBitRate(this.h))
}

func (this *QMediaRecorder) SetVideoBitRate(bitRate int) {
	C.QMediaRecorder_setVideoBitRate(this.h, (C.int)(bitRate))
}

func (this *QMediaRecorder) AudioBitRate() int {
	return (int)(C.QMediaRecorder_audioBitRate(this.h))
}

func (this *QMediaRecorder) SetAudioBitRate(bitRate int) {
	C.QMediaRecorder_setAudioBitRate(this.h, (C.int)(bitRate))
}

func (this *QMediaRecorder) AudioChannelCount() int {
	return (int)(C.QMediaRecorder_audioChannelCount(this.h))
}

func (this *QMediaRecorder) SetAudioChannelCount(channels int) {
	C.QMediaRecorder_setAudioChannelCount(this.h, (C.int)(channels))
}

func (this *QMediaRecorder) AudioSampleRate() int {
	return (int)(C.QMediaRecorder_audioSampleRate(this.h))
}

func (this *QMediaRecorder) SetAudioSampleRate(sampleRate int) {
	C.QMediaRecorder_setAudioSampleRate(this.h, (C.int)(sampleRate))
}

func (this *QMediaRecorder) MetaData() *QMediaMetaData {
	_goptr := newQMediaMetaData(C.QMediaRecorder_metaData(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetMetaData(metaData *QMediaMetaData) {
	C.QMediaRecorder_setMetaData(this.h, metaData.cPointer())
}

func (this *QMediaRecorder) AddMetaData(metaData *QMediaMetaData) {
	C.QMediaRecorder_addMetaData(this.h, metaData.cPointer())
}

func (this *QMediaRecorder) CaptureSession() *QMediaCaptureSession {
	return newQMediaCaptureSession(C.QMediaRecorder_captureSession(this.h))
}

func (this *QMediaRecorder) Record() {
	C.QMediaRecorder_record(this.h)
}

func (this *QMediaRecorder) Pause() {
	C.QMediaRecorder_pause(this.h)
}

func (this *QMediaRecorder) Stop() {
	C.QMediaRecorder_stop(this.h)
}

func (this *QMediaRecorder) RecorderStateChanged(state QMediaRecorder__RecorderState) {
	C.QMediaRecorder_recorderStateChanged(this.h, (C.int)(state))
}
func (this *QMediaRecorder) OnRecorderStateChanged(slot func(state QMediaRecorder__RecorderState)) {
	C.QMediaRecorder_connect_recorderStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_recorderStateChanged
func miqt_exec_callback_QMediaRecorder_recorderStateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QMediaRecorder__RecorderState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__RecorderState)(state)

	gofunc(slotval1)
}

func (this *QMediaRecorder) DurationChanged(duration int64) {
	C.QMediaRecorder_durationChanged(this.h, (C.longlong)(duration))
}
func (this *QMediaRecorder) OnDurationChanged(slot func(duration int64)) {
	C.QMediaRecorder_connect_durationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_durationChanged
func miqt_exec_callback_QMediaRecorder_durationChanged(cb C.intptr_t, duration C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(duration int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(duration)

	gofunc(slotval1)
}

func (this *QMediaRecorder) ActualLocationChanged(location *qt6.QUrl) {
	C.QMediaRecorder_actualLocationChanged(this.h, (*C.QUrl)(location.UnsafePointer()))
}
func (this *QMediaRecorder) OnActualLocationChanged(slot func(location *qt6.QUrl)) {
	C.QMediaRecorder_connect_actualLocationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_actualLocationChanged
func miqt_exec_callback_QMediaRecorder_actualLocationChanged(cb C.intptr_t, location *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(location *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(location))

	gofunc(slotval1)
}

func (this *QMediaRecorder) EncoderSettingsChanged() {
	C.QMediaRecorder_encoderSettingsChanged(this.h)
}
func (this *QMediaRecorder) OnEncoderSettingsChanged(slot func()) {
	C.QMediaRecorder_connect_encoderSettingsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_encoderSettingsChanged
func miqt_exec_callback_QMediaRecorder_encoderSettingsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) ErrorOccurred(error QMediaRecorder__Error, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QMediaRecorder_errorOccurred(this.h, (C.int)(error), errorString_ms)
}
func (this *QMediaRecorder) OnErrorOccurred(slot func(error QMediaRecorder__Error, errorString string)) {
	C.QMediaRecorder_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_errorOccurred
func miqt_exec_callback_QMediaRecorder_errorOccurred(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QMediaRecorder__Error, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__Error)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval2 := errorString_ret

	gofunc(slotval1, slotval2)
}

func (this *QMediaRecorder) ErrorChanged() {
	C.QMediaRecorder_errorChanged(this.h)
}
func (this *QMediaRecorder) OnErrorChanged(slot func()) {
	C.QMediaRecorder_connect_errorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_errorChanged
func miqt_exec_callback_QMediaRecorder_errorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) MetaDataChanged() {
	C.QMediaRecorder_metaDataChanged(this.h)
}
func (this *QMediaRecorder) OnMetaDataChanged(slot func()) {
	C.QMediaRecorder_connect_metaDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_metaDataChanged
func miqt_exec_callback_QMediaRecorder_metaDataChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) MediaFormatChanged() {
	C.QMediaRecorder_mediaFormatChanged(this.h)
}
func (this *QMediaRecorder) OnMediaFormatChanged(slot func()) {
	C.QMediaRecorder_connect_mediaFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_mediaFormatChanged
func miqt_exec_callback_QMediaRecorder_mediaFormatChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) EncodingModeChanged() {
	C.QMediaRecorder_encodingModeChanged(this.h)
}
func (this *QMediaRecorder) OnEncodingModeChanged(slot func()) {
	C.QMediaRecorder_connect_encodingModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_encodingModeChanged
func miqt_exec_callback_QMediaRecorder_encodingModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) QualityChanged() {
	C.QMediaRecorder_qualityChanged(this.h)
}
func (this *QMediaRecorder) OnQualityChanged(slot func()) {
	C.QMediaRecorder_connect_qualityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_qualityChanged
func miqt_exec_callback_QMediaRecorder_qualityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) VideoResolutionChanged() {
	C.QMediaRecorder_videoResolutionChanged(this.h)
}
func (this *QMediaRecorder) OnVideoResolutionChanged(slot func()) {
	C.QMediaRecorder_connect_videoResolutionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_videoResolutionChanged
func miqt_exec_callback_QMediaRecorder_videoResolutionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) VideoFrameRateChanged() {
	C.QMediaRecorder_videoFrameRateChanged(this.h)
}
func (this *QMediaRecorder) OnVideoFrameRateChanged(slot func()) {
	C.QMediaRecorder_connect_videoFrameRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_videoFrameRateChanged
func miqt_exec_callback_QMediaRecorder_videoFrameRateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) VideoBitRateChanged() {
	C.QMediaRecorder_videoBitRateChanged(this.h)
}
func (this *QMediaRecorder) OnVideoBitRateChanged(slot func()) {
	C.QMediaRecorder_connect_videoBitRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_videoBitRateChanged
func miqt_exec_callback_QMediaRecorder_videoBitRateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) AudioBitRateChanged() {
	C.QMediaRecorder_audioBitRateChanged(this.h)
}
func (this *QMediaRecorder) OnAudioBitRateChanged(slot func()) {
	C.QMediaRecorder_connect_audioBitRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_audioBitRateChanged
func miqt_exec_callback_QMediaRecorder_audioBitRateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) AudioChannelCountChanged() {
	C.QMediaRecorder_audioChannelCountChanged(this.h)
}
func (this *QMediaRecorder) OnAudioChannelCountChanged(slot func()) {
	C.QMediaRecorder_connect_audioChannelCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_audioChannelCountChanged
func miqt_exec_callback_QMediaRecorder_audioChannelCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) AudioSampleRateChanged() {
	C.QMediaRecorder_audioSampleRateChanged(this.h)
}
func (this *QMediaRecorder) OnAudioSampleRateChanged(slot func()) {
	C.QMediaRecorder_connect_audioSampleRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_audioSampleRateChanged
func miqt_exec_callback_QMediaRecorder_audioSampleRateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QMediaRecorder_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorder_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorder_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QMediaRecorder that was directly constructed.
func (this *QMediaRecorder) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QMediaRecorder_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMediaRecorder that was directly constructed.
func (this *QMediaRecorder) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMediaRecorder_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMediaRecorder that was directly constructed.
func (this *QMediaRecorder) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMediaRecorder_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMediaRecorder that was directly constructed.
func (this *QMediaRecorder) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMediaRecorder_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMediaRecorder) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QMediaRecorder_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaRecorder) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QMediaRecorder_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_event
func miqt_exec_callback_QMediaRecorder_event(self *C.QMediaRecorder, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaRecorder{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMediaRecorder) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QMediaRecorder_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaRecorder) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QMediaRecorder_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_eventFilter
func miqt_exec_callback_QMediaRecorder_eventFilter(self *C.QMediaRecorder, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaRecorder{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMediaRecorder) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QMediaRecorder_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QMediaRecorder) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QMediaRecorder_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_timerEvent
func miqt_exec_callback_QMediaRecorder_timerEvent(self *C.QMediaRecorder, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMediaRecorder) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QMediaRecorder_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QMediaRecorder) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QMediaRecorder_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_childEvent
func miqt_exec_callback_QMediaRecorder_childEvent(self *C.QMediaRecorder, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMediaRecorder) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QMediaRecorder_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMediaRecorder) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QMediaRecorder_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_customEvent
func miqt_exec_callback_QMediaRecorder_customEvent(self *C.QMediaRecorder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMediaRecorder) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaRecorder_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaRecorder) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMediaRecorder_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_connectNotify
func miqt_exec_callback_QMediaRecorder_connectNotify(self *C.QMediaRecorder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMediaRecorder) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaRecorder_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaRecorder) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMediaRecorder_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_disconnectNotify
func miqt_exec_callback_QMediaRecorder_disconnectNotify(self *C.QMediaRecorder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMediaRecorder) Delete() {
	C.QMediaRecorder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaRecorder) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaRecorder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
