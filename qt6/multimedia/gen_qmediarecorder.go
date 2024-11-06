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

func newQMediaRecorder(h *C.QMediaRecorder) *QMediaRecorder {
	if h == nil {
		return nil
	}
	return &QMediaRecorder{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQMediaRecorder(h unsafe.Pointer) *QMediaRecorder {
	return newQMediaRecorder((*C.QMediaRecorder)(h))
}

// NewQMediaRecorder constructs a new QMediaRecorder object.
func NewQMediaRecorder() *QMediaRecorder {
	ret := C.QMediaRecorder_new()
	return newQMediaRecorder(ret)
}

// NewQMediaRecorder2 constructs a new QMediaRecorder object.
func NewQMediaRecorder2(parent *qt6.QObject) *QMediaRecorder {
	ret := C.QMediaRecorder_new2((*C.QObject)(parent.UnsafePointer()))
	return newQMediaRecorder(ret)
}

func (this *QMediaRecorder) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaRecorder_MetaObject(this.h)))
}

func (this *QMediaRecorder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaRecorder_Metacast(this.h, param1_Cstring))
}

func QMediaRecorder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorder_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) IsAvailable() bool {
	return (bool)(C.QMediaRecorder_IsAvailable(this.h))
}

func (this *QMediaRecorder) OutputLocation() *qt6.QUrl {
	_ret := C.QMediaRecorder_OutputLocation(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetOutputLocation(location *qt6.QUrl) {
	C.QMediaRecorder_SetOutputLocation(this.h, (*C.QUrl)(location.UnsafePointer()))
}

func (this *QMediaRecorder) ActualLocation() *qt6.QUrl {
	_ret := C.QMediaRecorder_ActualLocation(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) RecorderState() QMediaRecorder__RecorderState {
	return (QMediaRecorder__RecorderState)(C.QMediaRecorder_RecorderState(this.h))
}

func (this *QMediaRecorder) Error() QMediaRecorder__Error {
	return (QMediaRecorder__Error)(C.QMediaRecorder_Error(this.h))
}

func (this *QMediaRecorder) ErrorString() string {
	var _ms C.struct_miqt_string = C.QMediaRecorder_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) Duration() int64 {
	return (int64)(C.QMediaRecorder_Duration(this.h))
}

func (this *QMediaRecorder) MediaFormat() *QMediaFormat {
	_ret := C.QMediaRecorder_MediaFormat(this.h)
	_goptr := newQMediaFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetMediaFormat(format *QMediaFormat) {
	C.QMediaRecorder_SetMediaFormat(this.h, format.cPointer())
}

func (this *QMediaRecorder) EncodingMode() QMediaRecorder__EncodingMode {
	return (QMediaRecorder__EncodingMode)(C.QMediaRecorder_EncodingMode(this.h))
}

func (this *QMediaRecorder) SetEncodingMode(encodingMode QMediaRecorder__EncodingMode) {
	C.QMediaRecorder_SetEncodingMode(this.h, (C.int)(encodingMode))
}

func (this *QMediaRecorder) Quality() QMediaRecorder__Quality {
	return (QMediaRecorder__Quality)(C.QMediaRecorder_Quality(this.h))
}

func (this *QMediaRecorder) SetQuality(quality QMediaRecorder__Quality) {
	C.QMediaRecorder_SetQuality(this.h, (C.int)(quality))
}

func (this *QMediaRecorder) VideoResolution() *qt6.QSize {
	_ret := C.QMediaRecorder_VideoResolution(this.h)
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetVideoResolution(videoResolution *qt6.QSize) {
	C.QMediaRecorder_SetVideoResolution(this.h, (*C.QSize)(videoResolution.UnsafePointer()))
}

func (this *QMediaRecorder) SetVideoResolution2(width int, height int) {
	C.QMediaRecorder_SetVideoResolution2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QMediaRecorder) VideoFrameRate() float64 {
	return (float64)(C.QMediaRecorder_VideoFrameRate(this.h))
}

func (this *QMediaRecorder) SetVideoFrameRate(frameRate float64) {
	C.QMediaRecorder_SetVideoFrameRate(this.h, (C.double)(frameRate))
}

func (this *QMediaRecorder) VideoBitRate() int {
	return (int)(C.QMediaRecorder_VideoBitRate(this.h))
}

func (this *QMediaRecorder) SetVideoBitRate(bitRate int) {
	C.QMediaRecorder_SetVideoBitRate(this.h, (C.int)(bitRate))
}

func (this *QMediaRecorder) AudioBitRate() int {
	return (int)(C.QMediaRecorder_AudioBitRate(this.h))
}

func (this *QMediaRecorder) SetAudioBitRate(bitRate int) {
	C.QMediaRecorder_SetAudioBitRate(this.h, (C.int)(bitRate))
}

func (this *QMediaRecorder) AudioChannelCount() int {
	return (int)(C.QMediaRecorder_AudioChannelCount(this.h))
}

func (this *QMediaRecorder) SetAudioChannelCount(channels int) {
	C.QMediaRecorder_SetAudioChannelCount(this.h, (C.int)(channels))
}

func (this *QMediaRecorder) AudioSampleRate() int {
	return (int)(C.QMediaRecorder_AudioSampleRate(this.h))
}

func (this *QMediaRecorder) SetAudioSampleRate(sampleRate int) {
	C.QMediaRecorder_SetAudioSampleRate(this.h, (C.int)(sampleRate))
}

func (this *QMediaRecorder) MetaData() *QMediaMetaData {
	_ret := C.QMediaRecorder_MetaData(this.h)
	_goptr := newQMediaMetaData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetMetaData(metaData *QMediaMetaData) {
	C.QMediaRecorder_SetMetaData(this.h, metaData.cPointer())
}

func (this *QMediaRecorder) AddMetaData(metaData *QMediaMetaData) {
	C.QMediaRecorder_AddMetaData(this.h, metaData.cPointer())
}

func (this *QMediaRecorder) CaptureSession() *QMediaCaptureSession {
	return UnsafeNewQMediaCaptureSession(unsafe.Pointer(C.QMediaRecorder_CaptureSession(this.h)))
}

func (this *QMediaRecorder) Record() {
	C.QMediaRecorder_Record(this.h)
}

func (this *QMediaRecorder) Pause() {
	C.QMediaRecorder_Pause(this.h)
}

func (this *QMediaRecorder) Stop() {
	C.QMediaRecorder_Stop(this.h)
}

func (this *QMediaRecorder) RecorderStateChanged(state QMediaRecorder__RecorderState) {
	C.QMediaRecorder_RecorderStateChanged(this.h, (C.int)(state))
}
func (this *QMediaRecorder) OnRecorderStateChanged(slot func(state QMediaRecorder__RecorderState)) {
	C.QMediaRecorder_connect_RecorderStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_RecorderStateChanged
func miqt_exec_callback_QMediaRecorder_RecorderStateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QMediaRecorder__RecorderState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__RecorderState)(state)

	gofunc(slotval1)
}

func (this *QMediaRecorder) DurationChanged(duration int64) {
	C.QMediaRecorder_DurationChanged(this.h, (C.longlong)(duration))
}
func (this *QMediaRecorder) OnDurationChanged(slot func(duration int64)) {
	C.QMediaRecorder_connect_DurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_DurationChanged
func miqt_exec_callback_QMediaRecorder_DurationChanged(cb C.intptr_t, duration C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(duration int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(duration)

	gofunc(slotval1)
}

func (this *QMediaRecorder) ActualLocationChanged(location *qt6.QUrl) {
	C.QMediaRecorder_ActualLocationChanged(this.h, (*C.QUrl)(location.UnsafePointer()))
}
func (this *QMediaRecorder) OnActualLocationChanged(slot func(location *qt6.QUrl)) {
	C.QMediaRecorder_connect_ActualLocationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_ActualLocationChanged
func miqt_exec_callback_QMediaRecorder_ActualLocationChanged(cb C.intptr_t, location *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(location *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(location))

	gofunc(slotval1)
}

func (this *QMediaRecorder) EncoderSettingsChanged() {
	C.QMediaRecorder_EncoderSettingsChanged(this.h)
}
func (this *QMediaRecorder) OnEncoderSettingsChanged(slot func()) {
	C.QMediaRecorder_connect_EncoderSettingsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_EncoderSettingsChanged
func miqt_exec_callback_QMediaRecorder_EncoderSettingsChanged(cb C.intptr_t) {
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
	C.QMediaRecorder_ErrorOccurred(this.h, (C.int)(error), errorString_ms)
}
func (this *QMediaRecorder) OnErrorOccurred(slot func(error QMediaRecorder__Error, errorString string)) {
	C.QMediaRecorder_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_ErrorOccurred
func miqt_exec_callback_QMediaRecorder_ErrorOccurred(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
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
	C.QMediaRecorder_ErrorChanged(this.h)
}
func (this *QMediaRecorder) OnErrorChanged(slot func()) {
	C.QMediaRecorder_connect_ErrorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_ErrorChanged
func miqt_exec_callback_QMediaRecorder_ErrorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) MetaDataChanged() {
	C.QMediaRecorder_MetaDataChanged(this.h)
}
func (this *QMediaRecorder) OnMetaDataChanged(slot func()) {
	C.QMediaRecorder_connect_MetaDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_MetaDataChanged
func miqt_exec_callback_QMediaRecorder_MetaDataChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) MediaFormatChanged() {
	C.QMediaRecorder_MediaFormatChanged(this.h)
}
func (this *QMediaRecorder) OnMediaFormatChanged(slot func()) {
	C.QMediaRecorder_connect_MediaFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_MediaFormatChanged
func miqt_exec_callback_QMediaRecorder_MediaFormatChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) EncodingModeChanged() {
	C.QMediaRecorder_EncodingModeChanged(this.h)
}
func (this *QMediaRecorder) OnEncodingModeChanged(slot func()) {
	C.QMediaRecorder_connect_EncodingModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_EncodingModeChanged
func miqt_exec_callback_QMediaRecorder_EncodingModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) QualityChanged() {
	C.QMediaRecorder_QualityChanged(this.h)
}
func (this *QMediaRecorder) OnQualityChanged(slot func()) {
	C.QMediaRecorder_connect_QualityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_QualityChanged
func miqt_exec_callback_QMediaRecorder_QualityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) VideoResolutionChanged() {
	C.QMediaRecorder_VideoResolutionChanged(this.h)
}
func (this *QMediaRecorder) OnVideoResolutionChanged(slot func()) {
	C.QMediaRecorder_connect_VideoResolutionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_VideoResolutionChanged
func miqt_exec_callback_QMediaRecorder_VideoResolutionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) VideoFrameRateChanged() {
	C.QMediaRecorder_VideoFrameRateChanged(this.h)
}
func (this *QMediaRecorder) OnVideoFrameRateChanged(slot func()) {
	C.QMediaRecorder_connect_VideoFrameRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_VideoFrameRateChanged
func miqt_exec_callback_QMediaRecorder_VideoFrameRateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) VideoBitRateChanged() {
	C.QMediaRecorder_VideoBitRateChanged(this.h)
}
func (this *QMediaRecorder) OnVideoBitRateChanged(slot func()) {
	C.QMediaRecorder_connect_VideoBitRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_VideoBitRateChanged
func miqt_exec_callback_QMediaRecorder_VideoBitRateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) AudioBitRateChanged() {
	C.QMediaRecorder_AudioBitRateChanged(this.h)
}
func (this *QMediaRecorder) OnAudioBitRateChanged(slot func()) {
	C.QMediaRecorder_connect_AudioBitRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_AudioBitRateChanged
func miqt_exec_callback_QMediaRecorder_AudioBitRateChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) AudioChannelCountChanged() {
	C.QMediaRecorder_AudioChannelCountChanged(this.h)
}
func (this *QMediaRecorder) OnAudioChannelCountChanged(slot func()) {
	C.QMediaRecorder_connect_AudioChannelCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_AudioChannelCountChanged
func miqt_exec_callback_QMediaRecorder_AudioChannelCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaRecorder) AudioSampleRateChanged() {
	C.QMediaRecorder_AudioSampleRateChanged(this.h)
}
func (this *QMediaRecorder) OnAudioSampleRateChanged(slot func()) {
	C.QMediaRecorder_connect_AudioSampleRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_AudioSampleRateChanged
func miqt_exec_callback_QMediaRecorder_AudioSampleRateChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QMediaRecorder_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorder_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaRecorder) Delete() {
	C.QMediaRecorder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaRecorder) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaRecorder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
