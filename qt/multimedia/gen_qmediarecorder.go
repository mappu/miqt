package multimedia

/*

#include "gen_qmediarecorder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaRecorder__State int

const (
	QMediaRecorder__StoppedState   QMediaRecorder__State = 0
	QMediaRecorder__RecordingState QMediaRecorder__State = 1
	QMediaRecorder__PausedState    QMediaRecorder__State = 2
)

type QMediaRecorder__Status int

const (
	QMediaRecorder__UnavailableStatus QMediaRecorder__Status = 0
	QMediaRecorder__UnloadedStatus    QMediaRecorder__Status = 1
	QMediaRecorder__LoadingStatus     QMediaRecorder__Status = 2
	QMediaRecorder__LoadedStatus      QMediaRecorder__Status = 3
	QMediaRecorder__StartingStatus    QMediaRecorder__Status = 4
	QMediaRecorder__RecordingStatus   QMediaRecorder__Status = 5
	QMediaRecorder__PausedStatus      QMediaRecorder__Status = 6
	QMediaRecorder__FinalizingStatus  QMediaRecorder__Status = 7
)

type QMediaRecorder__Error int

const (
	QMediaRecorder__NoError         QMediaRecorder__Error = 0
	QMediaRecorder__ResourceError   QMediaRecorder__Error = 1
	QMediaRecorder__FormatError     QMediaRecorder__Error = 2
	QMediaRecorder__OutOfSpaceError QMediaRecorder__Error = 3
)

type QMediaRecorder struct {
	h *C.QMediaRecorder
	*qt.QObject
	*QMediaBindableInterface
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
	var outptr_QMediaBindableInterface *C.QMediaBindableInterface = nil
	C.QMediaRecorder_virtbase(h, &outptr_QObject, &outptr_QMediaBindableInterface)

	return &QMediaRecorder{h: h,
		QObject:                 qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QMediaBindableInterface: newQMediaBindableInterface(outptr_QMediaBindableInterface)}
}

// UnsafeNewQMediaRecorder constructs the type using only unsafe pointers.
func UnsafeNewQMediaRecorder(h unsafe.Pointer) *QMediaRecorder {
	return newQMediaRecorder((*C.QMediaRecorder)(h))
}

// NewQMediaRecorder constructs a new QMediaRecorder object.
func NewQMediaRecorder(mediaObject *QMediaObject) *QMediaRecorder {

	return newQMediaRecorder(C.QMediaRecorder_new(mediaObject.cPointer()))
}

// NewQMediaRecorder2 constructs a new QMediaRecorder object.
func NewQMediaRecorder2(mediaObject *QMediaObject, parent *qt.QObject) *QMediaRecorder {

	return newQMediaRecorder(C.QMediaRecorder_new2(mediaObject.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QMediaRecorder) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaRecorder_metaObject(this.h)))
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

func QMediaRecorder_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorder_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) MediaObject() *QMediaObject {
	return newQMediaObject(C.QMediaRecorder_mediaObject(this.h))
}

func (this *QMediaRecorder) IsAvailable() bool {
	return (bool)(C.QMediaRecorder_isAvailable(this.h))
}

func (this *QMediaRecorder) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QMediaRecorder_availability(this.h))
}

func (this *QMediaRecorder) OutputLocation() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QMediaRecorder_outputLocation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetOutputLocation(location *qt.QUrl) bool {
	return (bool)(C.QMediaRecorder_setOutputLocation(this.h, (*C.QUrl)(location.UnsafePointer())))
}

func (this *QMediaRecorder) ActualLocation() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QMediaRecorder_actualLocation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) State() QMediaRecorder__State {
	return (QMediaRecorder__State)(C.QMediaRecorder_state(this.h))
}

func (this *QMediaRecorder) Status() QMediaRecorder__Status {
	return (QMediaRecorder__Status)(C.QMediaRecorder_status(this.h))
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

func (this *QMediaRecorder) IsMuted() bool {
	return (bool)(C.QMediaRecorder_isMuted(this.h))
}

func (this *QMediaRecorder) Volume() float64 {
	return (float64)(C.QMediaRecorder_volume(this.h))
}

func (this *QMediaRecorder) SupportedContainers() []string {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedContainers(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMediaRecorder) ContainerDescription(format string) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QMediaRecorder_containerDescription(this.h, format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) SupportedAudioCodecs() []string {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedAudioCodecs(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMediaRecorder) AudioCodecDescription(codecName string) string {
	codecName_ms := C.struct_miqt_string{}
	codecName_ms.data = C.CString(codecName)
	codecName_ms.len = C.size_t(len(codecName))
	defer C.free(unsafe.Pointer(codecName_ms.data))
	var _ms C.struct_miqt_string = C.QMediaRecorder_audioCodecDescription(this.h, codecName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) SupportedAudioSampleRates() []int {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedAudioSampleRates(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QMediaRecorder) SupportedVideoCodecs() []string {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedVideoCodecs(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMediaRecorder) VideoCodecDescription(codecName string) string {
	codecName_ms := C.struct_miqt_string{}
	codecName_ms.data = C.CString(codecName)
	codecName_ms.len = C.size_t(len(codecName))
	defer C.free(unsafe.Pointer(codecName_ms.data))
	var _ms C.struct_miqt_string = C.QMediaRecorder_videoCodecDescription(this.h, codecName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) SupportedResolutions() []qt.QSize {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedResolutions(this.h)
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaRecorder) SupportedFrameRates() []float64 {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedFrameRates(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QMediaRecorder) AudioSettings() *QAudioEncoderSettings {
	_goptr := newQAudioEncoderSettings(C.QMediaRecorder_audioSettings(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) VideoSettings() *QVideoEncoderSettings {
	_goptr := newQVideoEncoderSettings(C.QMediaRecorder_videoSettings(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) ContainerFormat() string {
	var _ms C.struct_miqt_string = C.QMediaRecorder_containerFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) SetAudioSettings(audioSettings *QAudioEncoderSettings) {
	C.QMediaRecorder_setAudioSettings(this.h, audioSettings.cPointer())
}

func (this *QMediaRecorder) SetVideoSettings(videoSettings *QVideoEncoderSettings) {
	C.QMediaRecorder_setVideoSettings(this.h, videoSettings.cPointer())
}

func (this *QMediaRecorder) SetContainerFormat(container string) {
	container_ms := C.struct_miqt_string{}
	container_ms.data = C.CString(container)
	container_ms.len = C.size_t(len(container))
	defer C.free(unsafe.Pointer(container_ms.data))
	C.QMediaRecorder_setContainerFormat(this.h, container_ms)
}

func (this *QMediaRecorder) SetEncodingSettings(audioSettings *QAudioEncoderSettings) {
	C.QMediaRecorder_setEncodingSettings(this.h, audioSettings.cPointer())
}

func (this *QMediaRecorder) IsMetaDataAvailable() bool {
	return (bool)(C.QMediaRecorder_isMetaDataAvailable(this.h))
}

func (this *QMediaRecorder) IsMetaDataWritable() bool {
	return (bool)(C.QMediaRecorder_isMetaDataWritable(this.h))
}

func (this *QMediaRecorder) MetaData(key string) *qt.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QMediaRecorder_metaData(this.h, key_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorder) SetMetaData(key string, value *qt.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QMediaRecorder_setMetaData(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QMediaRecorder) AvailableMetaData() []string {
	var _ma C.struct_miqt_array = C.QMediaRecorder_availableMetaData(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
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

func (this *QMediaRecorder) SetMuted(muted bool) {
	C.QMediaRecorder_setMuted(this.h, (C.bool)(muted))
}

func (this *QMediaRecorder) SetVolume(volume float64) {
	C.QMediaRecorder_setVolume(this.h, (C.double)(volume))
}

func (this *QMediaRecorder) StateChanged(state QMediaRecorder__State) {
	C.QMediaRecorder_stateChanged(this.h, (C.int)(state))
}
func (this *QMediaRecorder) OnStateChanged(slot func(state QMediaRecorder__State)) {
	C.QMediaRecorder_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_stateChanged
func miqt_exec_callback_QMediaRecorder_stateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QMediaRecorder__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__State)(state)

	gofunc(slotval1)
}

func (this *QMediaRecorder) StatusChanged(status QMediaRecorder__Status) {
	C.QMediaRecorder_statusChanged(this.h, (C.int)(status))
}
func (this *QMediaRecorder) OnStatusChanged(slot func(status QMediaRecorder__Status)) {
	C.QMediaRecorder_connect_statusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_statusChanged
func miqt_exec_callback_QMediaRecorder_statusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QMediaRecorder__Status))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__Status)(status)

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

func (this *QMediaRecorder) MutedChanged(muted bool) {
	C.QMediaRecorder_mutedChanged(this.h, (C.bool)(muted))
}
func (this *QMediaRecorder) OnMutedChanged(slot func(muted bool)) {
	C.QMediaRecorder_connect_mutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_mutedChanged
func miqt_exec_callback_QMediaRecorder_mutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func (this *QMediaRecorder) VolumeChanged(volume float64) {
	C.QMediaRecorder_volumeChanged(this.h, (C.double)(volume))
}
func (this *QMediaRecorder) OnVolumeChanged(slot func(volume float64)) {
	C.QMediaRecorder_connect_volumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_volumeChanged
func miqt_exec_callback_QMediaRecorder_volumeChanged(cb C.intptr_t, volume C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(volume)

	gofunc(slotval1)
}

func (this *QMediaRecorder) ActualLocationChanged(location *qt.QUrl) {
	C.QMediaRecorder_actualLocationChanged(this.h, (*C.QUrl)(location.UnsafePointer()))
}
func (this *QMediaRecorder) OnActualLocationChanged(slot func(location *qt.QUrl)) {
	C.QMediaRecorder_connect_actualLocationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_actualLocationChanged
func miqt_exec_callback_QMediaRecorder_actualLocationChanged(cb C.intptr_t, location *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(location *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(location))

	gofunc(slotval1)
}

func (this *QMediaRecorder) ErrorWithError(error QMediaRecorder__Error) {
	C.QMediaRecorder_errorWithError(this.h, (C.int)(error))
}
func (this *QMediaRecorder) OnErrorWithError(slot func(error QMediaRecorder__Error)) {
	C.QMediaRecorder_connect_errorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_errorWithError
func miqt_exec_callback_QMediaRecorder_errorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QMediaRecorder__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__Error)(error)

	gofunc(slotval1)
}

func (this *QMediaRecorder) MetaDataAvailableChanged(available bool) {
	C.QMediaRecorder_metaDataAvailableChanged(this.h, (C.bool)(available))
}
func (this *QMediaRecorder) OnMetaDataAvailableChanged(slot func(available bool)) {
	C.QMediaRecorder_connect_metaDataAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_metaDataAvailableChanged
func miqt_exec_callback_QMediaRecorder_metaDataAvailableChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaRecorder) MetaDataWritableChanged(writable bool) {
	C.QMediaRecorder_metaDataWritableChanged(this.h, (C.bool)(writable))
}
func (this *QMediaRecorder) OnMetaDataWritableChanged(slot func(writable bool)) {
	C.QMediaRecorder_connect_metaDataWritableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_metaDataWritableChanged
func miqt_exec_callback_QMediaRecorder_metaDataWritableChanged(cb C.intptr_t, writable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(writable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(writable)

	gofunc(slotval1)
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

func (this *QMediaRecorder) MetaDataChanged2(key string, value *qt.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QMediaRecorder_metaDataChanged2(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QMediaRecorder) OnMetaDataChanged2(slot func(key string, value *qt.QVariant)) {
	C.QMediaRecorder_connect_metaDataChanged2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_metaDataChanged2
func miqt_exec_callback_QMediaRecorder_metaDataChanged2(cb C.intptr_t, key C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)
}

func (this *QMediaRecorder) AvailabilityChanged(available bool) {
	C.QMediaRecorder_availabilityChanged(this.h, (C.bool)(available))
}
func (this *QMediaRecorder) OnAvailabilityChanged(slot func(available bool)) {
	C.QMediaRecorder_connect_availabilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_availabilityChanged
func miqt_exec_callback_QMediaRecorder_availabilityChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaRecorder) AvailabilityChangedWithAvailability(availability QMultimedia__AvailabilityStatus) {
	C.QMediaRecorder_availabilityChangedWithAvailability(this.h, (C.int)(availability))
}
func (this *QMediaRecorder) OnAvailabilityChangedWithAvailability(slot func(availability QMultimedia__AvailabilityStatus)) {
	C.QMediaRecorder_connect_availabilityChangedWithAvailability(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorder_availabilityChangedWithAvailability
func miqt_exec_callback_QMediaRecorder_availabilityChangedWithAvailability(cb C.intptr_t, availability C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(availability QMultimedia__AvailabilityStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMultimedia__AvailabilityStatus)(availability)

	gofunc(slotval1)
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

func QMediaRecorder_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorder_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorder_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorder_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorder) SupportedAudioSampleRates1(settings *QAudioEncoderSettings) []int {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedAudioSampleRates1(this.h, settings.cPointer())
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QMediaRecorder) SupportedAudioSampleRates2(settings *QAudioEncoderSettings, continuous *bool) []int {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedAudioSampleRates2(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QMediaRecorder) SupportedResolutions1(settings *QVideoEncoderSettings) []qt.QSize {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedResolutions1(this.h, settings.cPointer())
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaRecorder) SupportedResolutions2(settings *QVideoEncoderSettings, continuous *bool) []qt.QSize {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedResolutions2(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaRecorder) SupportedFrameRates1(settings *QVideoEncoderSettings) []float64 {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedFrameRates1(this.h, settings.cPointer())
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QMediaRecorder) SupportedFrameRates2(settings *QVideoEncoderSettings, continuous *bool) []float64 {
	var _ma C.struct_miqt_array = C.QMediaRecorder_supportedFrameRates2(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QMediaRecorder) SetEncodingSettings2(audioSettings *QAudioEncoderSettings, videoSettings *QVideoEncoderSettings) {
	C.QMediaRecorder_setEncodingSettings2(this.h, audioSettings.cPointer(), videoSettings.cPointer())
}

func (this *QMediaRecorder) SetEncodingSettings3(audioSettings *QAudioEncoderSettings, videoSettings *QVideoEncoderSettings, containerMimeType string) {
	containerMimeType_ms := C.struct_miqt_string{}
	containerMimeType_ms.data = C.CString(containerMimeType)
	containerMimeType_ms.len = C.size_t(len(containerMimeType))
	defer C.free(unsafe.Pointer(containerMimeType_ms.data))
	C.QMediaRecorder_setEncodingSettings3(this.h, audioSettings.cPointer(), videoSettings.cPointer(), containerMimeType_ms)
}

// Sender can only be called from a QMediaRecorder that was directly constructed.
func (this *QMediaRecorder) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QMediaRecorder_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

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
func (this *QMediaRecorder) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMediaRecorder_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMediaRecorder) callVirtualBase_MediaObject() *QMediaObject {

	return newQMediaObject(C.QMediaRecorder_virtualbase_mediaObject(unsafe.Pointer(this.h)))

}
func (this *QMediaRecorder) OnMediaObject(slot func(super func() *QMediaObject) *QMediaObject) {
	ok := C.QMediaRecorder_override_virtual_mediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_mediaObject
func miqt_exec_callback_QMediaRecorder_mediaObject(self *C.QMediaRecorder, cb C.intptr_t) *C.QMediaObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaObject) *QMediaObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMediaRecorder{h: self}).callVirtualBase_MediaObject)

	return virtualReturn.cPointer()

}

func (this *QMediaRecorder) callVirtualBase_SetMediaObject(object *QMediaObject) bool {

	return (bool)(C.QMediaRecorder_virtualbase_setMediaObject(unsafe.Pointer(this.h), object.cPointer()))

}
func (this *QMediaRecorder) OnSetMediaObject(slot func(super func(object *QMediaObject) bool, object *QMediaObject) bool) {
	ok := C.QMediaRecorder_override_virtual_setMediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_setMediaObject
func miqt_exec_callback_QMediaRecorder_setMediaObject(self *C.QMediaRecorder, cb C.intptr_t, object *C.QMediaObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QMediaObject) bool, object *QMediaObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaObject(object)

	virtualReturn := gofunc((&QMediaRecorder{h: self}).callVirtualBase_SetMediaObject, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMediaRecorder) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QMediaRecorder_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaRecorder) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QMediaRecorder_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_event
func miqt_exec_callback_QMediaRecorder_event(self *C.QMediaRecorder, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaRecorder{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMediaRecorder) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QMediaRecorder_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaRecorder) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QMediaRecorder_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_eventFilter
func miqt_exec_callback_QMediaRecorder_eventFilter(self *C.QMediaRecorder, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaRecorder{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMediaRecorder) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QMediaRecorder_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QMediaRecorder) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QMediaRecorder_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_timerEvent
func miqt_exec_callback_QMediaRecorder_timerEvent(self *C.QMediaRecorder, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMediaRecorder) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QMediaRecorder_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QMediaRecorder) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QMediaRecorder_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_childEvent
func miqt_exec_callback_QMediaRecorder_childEvent(self *C.QMediaRecorder, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMediaRecorder) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QMediaRecorder_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMediaRecorder) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QMediaRecorder_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_customEvent
func miqt_exec_callback_QMediaRecorder_customEvent(self *C.QMediaRecorder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMediaRecorder) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QMediaRecorder_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaRecorder) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QMediaRecorder_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_connectNotify
func miqt_exec_callback_QMediaRecorder_connectNotify(self *C.QMediaRecorder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaRecorder{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMediaRecorder) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QMediaRecorder_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaRecorder) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QMediaRecorder_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaRecorder_disconnectNotify
func miqt_exec_callback_QMediaRecorder_disconnectNotify(self *C.QMediaRecorder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

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
