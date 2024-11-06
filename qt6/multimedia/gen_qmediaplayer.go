package multimedia

/*

#include "gen_qmediaplayer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaPlayer__PlaybackState int

const (
	QMediaPlayer__StoppedState QMediaPlayer__PlaybackState = 0
	QMediaPlayer__PlayingState QMediaPlayer__PlaybackState = 1
	QMediaPlayer__PausedState  QMediaPlayer__PlaybackState = 2
)

type QMediaPlayer__MediaStatus int

const (
	QMediaPlayer__NoMedia        QMediaPlayer__MediaStatus = 0
	QMediaPlayer__LoadingMedia   QMediaPlayer__MediaStatus = 1
	QMediaPlayer__LoadedMedia    QMediaPlayer__MediaStatus = 2
	QMediaPlayer__StalledMedia   QMediaPlayer__MediaStatus = 3
	QMediaPlayer__BufferingMedia QMediaPlayer__MediaStatus = 4
	QMediaPlayer__BufferedMedia  QMediaPlayer__MediaStatus = 5
	QMediaPlayer__EndOfMedia     QMediaPlayer__MediaStatus = 6
	QMediaPlayer__InvalidMedia   QMediaPlayer__MediaStatus = 7
)

type QMediaPlayer__Error int

const (
	QMediaPlayer__NoError           QMediaPlayer__Error = 0
	QMediaPlayer__ResourceError     QMediaPlayer__Error = 1
	QMediaPlayer__FormatError       QMediaPlayer__Error = 2
	QMediaPlayer__NetworkError      QMediaPlayer__Error = 3
	QMediaPlayer__AccessDeniedError QMediaPlayer__Error = 4
)

type QMediaPlayer__Loops int

const (
	QMediaPlayer__Infinite QMediaPlayer__Loops = -1
	QMediaPlayer__Once     QMediaPlayer__Loops = 1
)

type QMediaPlayer struct {
	h *C.QMediaPlayer
	*qt6.QObject
}

func (this *QMediaPlayer) cPointer() *C.QMediaPlayer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaPlayer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaPlayer(h *C.QMediaPlayer) *QMediaPlayer {
	if h == nil {
		return nil
	}
	return &QMediaPlayer{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQMediaPlayer(h unsafe.Pointer) *QMediaPlayer {
	return newQMediaPlayer((*C.QMediaPlayer)(h))
}

// NewQMediaPlayer constructs a new QMediaPlayer object.
func NewQMediaPlayer() *QMediaPlayer {
	ret := C.QMediaPlayer_new()
	return newQMediaPlayer(ret)
}

// NewQMediaPlayer2 constructs a new QMediaPlayer object.
func NewQMediaPlayer2(parent *qt6.QObject) *QMediaPlayer {
	ret := C.QMediaPlayer_new2((*C.QObject)(parent.UnsafePointer()))
	return newQMediaPlayer(ret)
}

func (this *QMediaPlayer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaPlayer_MetaObject(this.h)))
}

func (this *QMediaPlayer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaPlayer_Metacast(this.h, param1_Cstring))
}

func QMediaPlayer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayer) AudioTracks() []QMediaMetaData {
	var _ma C.struct_miqt_array = C.QMediaPlayer_AudioTracks(this.h)
	_ret := make([]QMediaMetaData, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaMetaData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQMediaMetaData(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaPlayer) VideoTracks() []QMediaMetaData {
	var _ma C.struct_miqt_array = C.QMediaPlayer_VideoTracks(this.h)
	_ret := make([]QMediaMetaData, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaMetaData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQMediaMetaData(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaPlayer) SubtitleTracks() []QMediaMetaData {
	var _ma C.struct_miqt_array = C.QMediaPlayer_SubtitleTracks(this.h)
	_ret := make([]QMediaMetaData, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaMetaData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQMediaMetaData(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaPlayer) ActiveAudioTrack() int {
	return (int)(C.QMediaPlayer_ActiveAudioTrack(this.h))
}

func (this *QMediaPlayer) ActiveVideoTrack() int {
	return (int)(C.QMediaPlayer_ActiveVideoTrack(this.h))
}

func (this *QMediaPlayer) ActiveSubtitleTrack() int {
	return (int)(C.QMediaPlayer_ActiveSubtitleTrack(this.h))
}

func (this *QMediaPlayer) SetActiveAudioTrack(index int) {
	C.QMediaPlayer_SetActiveAudioTrack(this.h, (C.int)(index))
}

func (this *QMediaPlayer) SetActiveVideoTrack(index int) {
	C.QMediaPlayer_SetActiveVideoTrack(this.h, (C.int)(index))
}

func (this *QMediaPlayer) SetActiveSubtitleTrack(index int) {
	C.QMediaPlayer_SetActiveSubtitleTrack(this.h, (C.int)(index))
}

func (this *QMediaPlayer) SetAudioOutput(output *QAudioOutput) {
	C.QMediaPlayer_SetAudioOutput(this.h, output.cPointer())
}

func (this *QMediaPlayer) AudioOutput() *QAudioOutput {
	return UnsafeNewQAudioOutput(unsafe.Pointer(C.QMediaPlayer_AudioOutput(this.h)))
}

func (this *QMediaPlayer) SetVideoOutput(videoOutput *qt6.QObject) {
	C.QMediaPlayer_SetVideoOutput(this.h, (*C.QObject)(videoOutput.UnsafePointer()))
}

func (this *QMediaPlayer) VideoOutput() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QMediaPlayer_VideoOutput(this.h)))
}

func (this *QMediaPlayer) SetVideoSink(sink *QVideoSink) {
	C.QMediaPlayer_SetVideoSink(this.h, sink.cPointer())
}

func (this *QMediaPlayer) VideoSink() *QVideoSink {
	return UnsafeNewQVideoSink(unsafe.Pointer(C.QMediaPlayer_VideoSink(this.h)))
}

func (this *QMediaPlayer) Source() *qt6.QUrl {
	_ret := C.QMediaPlayer_Source(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) SourceDevice() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QMediaPlayer_SourceDevice(this.h)))
}

func (this *QMediaPlayer) PlaybackState() QMediaPlayer__PlaybackState {
	return (QMediaPlayer__PlaybackState)(C.QMediaPlayer_PlaybackState(this.h))
}

func (this *QMediaPlayer) MediaStatus() QMediaPlayer__MediaStatus {
	return (QMediaPlayer__MediaStatus)(C.QMediaPlayer_MediaStatus(this.h))
}

func (this *QMediaPlayer) Duration() int64 {
	return (int64)(C.QMediaPlayer_Duration(this.h))
}

func (this *QMediaPlayer) Position() int64 {
	return (int64)(C.QMediaPlayer_Position(this.h))
}

func (this *QMediaPlayer) HasAudio() bool {
	return (bool)(C.QMediaPlayer_HasAudio(this.h))
}

func (this *QMediaPlayer) HasVideo() bool {
	return (bool)(C.QMediaPlayer_HasVideo(this.h))
}

func (this *QMediaPlayer) BufferProgress() float32 {
	return (float32)(C.QMediaPlayer_BufferProgress(this.h))
}

func (this *QMediaPlayer) BufferedTimeRange() *QMediaTimeRange {
	_ret := C.QMediaPlayer_BufferedTimeRange(this.h)
	_goptr := newQMediaTimeRange(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) IsSeekable() bool {
	return (bool)(C.QMediaPlayer_IsSeekable(this.h))
}

func (this *QMediaPlayer) PlaybackRate() float64 {
	return (float64)(C.QMediaPlayer_PlaybackRate(this.h))
}

func (this *QMediaPlayer) Loops() int {
	return (int)(C.QMediaPlayer_Loops(this.h))
}

func (this *QMediaPlayer) SetLoops(loops int) {
	C.QMediaPlayer_SetLoops(this.h, (C.int)(loops))
}

func (this *QMediaPlayer) Error() QMediaPlayer__Error {
	return (QMediaPlayer__Error)(C.QMediaPlayer_Error(this.h))
}

func (this *QMediaPlayer) ErrorString() string {
	var _ms C.struct_miqt_string = C.QMediaPlayer_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayer) IsAvailable() bool {
	return (bool)(C.QMediaPlayer_IsAvailable(this.h))
}

func (this *QMediaPlayer) MetaData() *QMediaMetaData {
	_ret := C.QMediaPlayer_MetaData(this.h)
	_goptr := newQMediaMetaData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) Play() {
	C.QMediaPlayer_Play(this.h)
}

func (this *QMediaPlayer) Pause() {
	C.QMediaPlayer_Pause(this.h)
}

func (this *QMediaPlayer) Stop() {
	C.QMediaPlayer_Stop(this.h)
}

func (this *QMediaPlayer) SetPosition(position int64) {
	C.QMediaPlayer_SetPosition(this.h, (C.longlong)(position))
}

func (this *QMediaPlayer) SetPlaybackRate(rate float64) {
	C.QMediaPlayer_SetPlaybackRate(this.h, (C.double)(rate))
}

func (this *QMediaPlayer) SetSource(source *qt6.QUrl) {
	C.QMediaPlayer_SetSource(this.h, (*C.QUrl)(source.UnsafePointer()))
}

func (this *QMediaPlayer) SetSourceDevice(device *qt6.QIODevice) {
	C.QMediaPlayer_SetSourceDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QMediaPlayer) SourceChanged(media *qt6.QUrl) {
	C.QMediaPlayer_SourceChanged(this.h, (*C.QUrl)(media.UnsafePointer()))
}
func (this *QMediaPlayer) OnSourceChanged(slot func(media *qt6.QUrl)) {
	C.QMediaPlayer_connect_SourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_SourceChanged
func miqt_exec_callback_QMediaPlayer_SourceChanged(cb C.intptr_t, media *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(media *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(media))

	gofunc(slotval1)
}

func (this *QMediaPlayer) PlaybackStateChanged(newState QMediaPlayer__PlaybackState) {
	C.QMediaPlayer_PlaybackStateChanged(this.h, (C.int)(newState))
}
func (this *QMediaPlayer) OnPlaybackStateChanged(slot func(newState QMediaPlayer__PlaybackState)) {
	C.QMediaPlayer_connect_PlaybackStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_PlaybackStateChanged
func miqt_exec_callback_QMediaPlayer_PlaybackStateChanged(cb C.intptr_t, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QMediaPlayer__PlaybackState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__PlaybackState)(newState)

	gofunc(slotval1)
}

func (this *QMediaPlayer) MediaStatusChanged(status QMediaPlayer__MediaStatus) {
	C.QMediaPlayer_MediaStatusChanged(this.h, (C.int)(status))
}
func (this *QMediaPlayer) OnMediaStatusChanged(slot func(status QMediaPlayer__MediaStatus)) {
	C.QMediaPlayer_connect_MediaStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_MediaStatusChanged
func miqt_exec_callback_QMediaPlayer_MediaStatusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QMediaPlayer__MediaStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__MediaStatus)(status)

	gofunc(slotval1)
}

func (this *QMediaPlayer) DurationChanged(duration int64) {
	C.QMediaPlayer_DurationChanged(this.h, (C.longlong)(duration))
}
func (this *QMediaPlayer) OnDurationChanged(slot func(duration int64)) {
	C.QMediaPlayer_connect_DurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_DurationChanged
func miqt_exec_callback_QMediaPlayer_DurationChanged(cb C.intptr_t, duration C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(duration int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(duration)

	gofunc(slotval1)
}

func (this *QMediaPlayer) PositionChanged(position int64) {
	C.QMediaPlayer_PositionChanged(this.h, (C.longlong)(position))
}
func (this *QMediaPlayer) OnPositionChanged(slot func(position int64)) {
	C.QMediaPlayer_connect_PositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_PositionChanged
func miqt_exec_callback_QMediaPlayer_PositionChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QMediaPlayer) HasAudioChanged(available bool) {
	C.QMediaPlayer_HasAudioChanged(this.h, (C.bool)(available))
}
func (this *QMediaPlayer) OnHasAudioChanged(slot func(available bool)) {
	C.QMediaPlayer_connect_HasAudioChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_HasAudioChanged
func miqt_exec_callback_QMediaPlayer_HasAudioChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaPlayer) HasVideoChanged(videoAvailable bool) {
	C.QMediaPlayer_HasVideoChanged(this.h, (C.bool)(videoAvailable))
}
func (this *QMediaPlayer) OnHasVideoChanged(slot func(videoAvailable bool)) {
	C.QMediaPlayer_connect_HasVideoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_HasVideoChanged
func miqt_exec_callback_QMediaPlayer_HasVideoChanged(cb C.intptr_t, videoAvailable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(videoAvailable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(videoAvailable)

	gofunc(slotval1)
}

func (this *QMediaPlayer) BufferProgressChanged(progress float32) {
	C.QMediaPlayer_BufferProgressChanged(this.h, (C.float)(progress))
}
func (this *QMediaPlayer) OnBufferProgressChanged(slot func(progress float32)) {
	C.QMediaPlayer_connect_BufferProgressChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_BufferProgressChanged
func miqt_exec_callback_QMediaPlayer_BufferProgressChanged(cb C.intptr_t, progress C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(progress)

	gofunc(slotval1)
}

func (this *QMediaPlayer) SeekableChanged(seekable bool) {
	C.QMediaPlayer_SeekableChanged(this.h, (C.bool)(seekable))
}
func (this *QMediaPlayer) OnSeekableChanged(slot func(seekable bool)) {
	C.QMediaPlayer_connect_SeekableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_SeekableChanged
func miqt_exec_callback_QMediaPlayer_SeekableChanged(cb C.intptr_t, seekable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(seekable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(seekable)

	gofunc(slotval1)
}

func (this *QMediaPlayer) PlaybackRateChanged(rate float64) {
	C.QMediaPlayer_PlaybackRateChanged(this.h, (C.double)(rate))
}
func (this *QMediaPlayer) OnPlaybackRateChanged(slot func(rate float64)) {
	C.QMediaPlayer_connect_PlaybackRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_PlaybackRateChanged
func miqt_exec_callback_QMediaPlayer_PlaybackRateChanged(cb C.intptr_t, rate C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rate float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(rate)

	gofunc(slotval1)
}

func (this *QMediaPlayer) LoopsChanged() {
	C.QMediaPlayer_LoopsChanged(this.h)
}
func (this *QMediaPlayer) OnLoopsChanged(slot func()) {
	C.QMediaPlayer_connect_LoopsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_LoopsChanged
func miqt_exec_callback_QMediaPlayer_LoopsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) MetaDataChanged() {
	C.QMediaPlayer_MetaDataChanged(this.h)
}
func (this *QMediaPlayer) OnMetaDataChanged(slot func()) {
	C.QMediaPlayer_connect_MetaDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_MetaDataChanged
func miqt_exec_callback_QMediaPlayer_MetaDataChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) VideoOutputChanged() {
	C.QMediaPlayer_VideoOutputChanged(this.h)
}
func (this *QMediaPlayer) OnVideoOutputChanged(slot func()) {
	C.QMediaPlayer_connect_VideoOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_VideoOutputChanged
func miqt_exec_callback_QMediaPlayer_VideoOutputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) AudioOutputChanged() {
	C.QMediaPlayer_AudioOutputChanged(this.h)
}
func (this *QMediaPlayer) OnAudioOutputChanged(slot func()) {
	C.QMediaPlayer_connect_AudioOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_AudioOutputChanged
func miqt_exec_callback_QMediaPlayer_AudioOutputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) TracksChanged() {
	C.QMediaPlayer_TracksChanged(this.h)
}
func (this *QMediaPlayer) OnTracksChanged(slot func()) {
	C.QMediaPlayer_connect_TracksChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_TracksChanged
func miqt_exec_callback_QMediaPlayer_TracksChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) ActiveTracksChanged() {
	C.QMediaPlayer_ActiveTracksChanged(this.h)
}
func (this *QMediaPlayer) OnActiveTracksChanged(slot func()) {
	C.QMediaPlayer_connect_ActiveTracksChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_ActiveTracksChanged
func miqt_exec_callback_QMediaPlayer_ActiveTracksChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) ErrorChanged() {
	C.QMediaPlayer_ErrorChanged(this.h)
}
func (this *QMediaPlayer) OnErrorChanged(slot func()) {
	C.QMediaPlayer_connect_ErrorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_ErrorChanged
func miqt_exec_callback_QMediaPlayer_ErrorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) ErrorOccurred(error QMediaPlayer__Error, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QMediaPlayer_ErrorOccurred(this.h, (C.int)(error), errorString_ms)
}
func (this *QMediaPlayer) OnErrorOccurred(slot func(error QMediaPlayer__Error, errorString string)) {
	C.QMediaPlayer_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_ErrorOccurred
func miqt_exec_callback_QMediaPlayer_ErrorOccurred(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QMediaPlayer__Error, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__Error)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval2 := errorString_ret

	gofunc(slotval1, slotval2)
}

func QMediaPlayer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayer) SetSourceDevice2(device *qt6.QIODevice, sourceUrl *qt6.QUrl) {
	C.QMediaPlayer_SetSourceDevice2(this.h, (*C.QIODevice)(device.UnsafePointer()), (*C.QUrl)(sourceUrl.UnsafePointer()))
}

// Delete this object from C++ memory.
func (this *QMediaPlayer) Delete() {
	C.QMediaPlayer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaPlayer) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaPlayer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
