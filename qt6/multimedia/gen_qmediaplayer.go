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

// newQMediaPlayer constructs the type using only CGO pointers.
func newQMediaPlayer(h *C.QMediaPlayer) *QMediaPlayer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QMediaPlayer_virtbase(h, &outptr_QObject)

	return &QMediaPlayer{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQMediaPlayer constructs the type using only unsafe pointers.
func UnsafeNewQMediaPlayer(h unsafe.Pointer) *QMediaPlayer {
	return newQMediaPlayer((*C.QMediaPlayer)(h))
}

// NewQMediaPlayer constructs a new QMediaPlayer object.
func NewQMediaPlayer() *QMediaPlayer {

	return newQMediaPlayer(C.QMediaPlayer_new())
}

// NewQMediaPlayer2 constructs a new QMediaPlayer object.
func NewQMediaPlayer2(parent *qt6.QObject) *QMediaPlayer {

	return newQMediaPlayer(C.QMediaPlayer_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QMediaPlayer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaPlayer_metaObject(this.h)))
}

func (this *QMediaPlayer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaPlayer_metacast(this.h, param1_Cstring))
}

func QMediaPlayer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayer) AudioTracks() []QMediaMetaData {
	var _ma C.struct_miqt_array = C.QMediaPlayer_audioTracks(this.h)
	_ret := make([]QMediaMetaData, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaMetaData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMediaMetaData(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaPlayer) VideoTracks() []QMediaMetaData {
	var _ma C.struct_miqt_array = C.QMediaPlayer_videoTracks(this.h)
	_ret := make([]QMediaMetaData, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaMetaData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMediaMetaData(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaPlayer) SubtitleTracks() []QMediaMetaData {
	var _ma C.struct_miqt_array = C.QMediaPlayer_subtitleTracks(this.h)
	_ret := make([]QMediaMetaData, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaMetaData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMediaMetaData(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaPlayer) ActiveAudioTrack() int {
	return (int)(C.QMediaPlayer_activeAudioTrack(this.h))
}

func (this *QMediaPlayer) ActiveVideoTrack() int {
	return (int)(C.QMediaPlayer_activeVideoTrack(this.h))
}

func (this *QMediaPlayer) ActiveSubtitleTrack() int {
	return (int)(C.QMediaPlayer_activeSubtitleTrack(this.h))
}

func (this *QMediaPlayer) SetActiveAudioTrack(index int) {
	C.QMediaPlayer_setActiveAudioTrack(this.h, (C.int)(index))
}

func (this *QMediaPlayer) SetActiveVideoTrack(index int) {
	C.QMediaPlayer_setActiveVideoTrack(this.h, (C.int)(index))
}

func (this *QMediaPlayer) SetActiveSubtitleTrack(index int) {
	C.QMediaPlayer_setActiveSubtitleTrack(this.h, (C.int)(index))
}

func (this *QMediaPlayer) SetAudioOutput(output *QAudioOutput) {
	C.QMediaPlayer_setAudioOutput(this.h, output.cPointer())
}

func (this *QMediaPlayer) AudioOutput() *QAudioOutput {
	return newQAudioOutput(C.QMediaPlayer_audioOutput(this.h))
}

func (this *QMediaPlayer) SetVideoOutput(videoOutput *qt6.QObject) {
	C.QMediaPlayer_setVideoOutput(this.h, (*C.QObject)(videoOutput.UnsafePointer()))
}

func (this *QMediaPlayer) VideoOutput() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QMediaPlayer_videoOutput(this.h)))
}

func (this *QMediaPlayer) SetVideoSink(sink *QVideoSink) {
	C.QMediaPlayer_setVideoSink(this.h, sink.cPointer())
}

func (this *QMediaPlayer) VideoSink() *QVideoSink {
	return newQVideoSink(C.QMediaPlayer_videoSink(this.h))
}

func (this *QMediaPlayer) Source() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QMediaPlayer_source(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) SourceDevice() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QMediaPlayer_sourceDevice(this.h)))
}

func (this *QMediaPlayer) PlaybackState() QMediaPlayer__PlaybackState {
	return (QMediaPlayer__PlaybackState)(C.QMediaPlayer_playbackState(this.h))
}

func (this *QMediaPlayer) MediaStatus() QMediaPlayer__MediaStatus {
	return (QMediaPlayer__MediaStatus)(C.QMediaPlayer_mediaStatus(this.h))
}

func (this *QMediaPlayer) Duration() int64 {
	return (int64)(C.QMediaPlayer_duration(this.h))
}

func (this *QMediaPlayer) Position() int64 {
	return (int64)(C.QMediaPlayer_position(this.h))
}

func (this *QMediaPlayer) HasAudio() bool {
	return (bool)(C.QMediaPlayer_hasAudio(this.h))
}

func (this *QMediaPlayer) HasVideo() bool {
	return (bool)(C.QMediaPlayer_hasVideo(this.h))
}

func (this *QMediaPlayer) BufferProgress() float32 {
	return (float32)(C.QMediaPlayer_bufferProgress(this.h))
}

func (this *QMediaPlayer) BufferedTimeRange() *QMediaTimeRange {
	_goptr := newQMediaTimeRange(C.QMediaPlayer_bufferedTimeRange(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) IsSeekable() bool {
	return (bool)(C.QMediaPlayer_isSeekable(this.h))
}

func (this *QMediaPlayer) PlaybackRate() float64 {
	return (float64)(C.QMediaPlayer_playbackRate(this.h))
}

func (this *QMediaPlayer) Loops() int {
	return (int)(C.QMediaPlayer_loops(this.h))
}

func (this *QMediaPlayer) SetLoops(loops int) {
	C.QMediaPlayer_setLoops(this.h, (C.int)(loops))
}

func (this *QMediaPlayer) Error() QMediaPlayer__Error {
	return (QMediaPlayer__Error)(C.QMediaPlayer_error(this.h))
}

func (this *QMediaPlayer) ErrorString() string {
	var _ms C.struct_miqt_string = C.QMediaPlayer_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayer) IsAvailable() bool {
	return (bool)(C.QMediaPlayer_isAvailable(this.h))
}

func (this *QMediaPlayer) MetaData() *QMediaMetaData {
	_goptr := newQMediaMetaData(C.QMediaPlayer_metaData(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) Play() {
	C.QMediaPlayer_play(this.h)
}

func (this *QMediaPlayer) Pause() {
	C.QMediaPlayer_pause(this.h)
}

func (this *QMediaPlayer) Stop() {
	C.QMediaPlayer_stop(this.h)
}

func (this *QMediaPlayer) SetPosition(position int64) {
	C.QMediaPlayer_setPosition(this.h, (C.longlong)(position))
}

func (this *QMediaPlayer) SetPlaybackRate(rate float64) {
	C.QMediaPlayer_setPlaybackRate(this.h, (C.double)(rate))
}

func (this *QMediaPlayer) SetSource(source *qt6.QUrl) {
	C.QMediaPlayer_setSource(this.h, (*C.QUrl)(source.UnsafePointer()))
}

func (this *QMediaPlayer) SetSourceDevice(device *qt6.QIODevice) {
	C.QMediaPlayer_setSourceDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QMediaPlayer) SourceChanged(media *qt6.QUrl) {
	C.QMediaPlayer_sourceChanged(this.h, (*C.QUrl)(media.UnsafePointer()))
}
func (this *QMediaPlayer) OnSourceChanged(slot func(media *qt6.QUrl)) {
	C.QMediaPlayer_connect_sourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_sourceChanged
func miqt_exec_callback_QMediaPlayer_sourceChanged(cb C.intptr_t, media *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(media *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(media))

	gofunc(slotval1)
}

func (this *QMediaPlayer) PlaybackStateChanged(newState QMediaPlayer__PlaybackState) {
	C.QMediaPlayer_playbackStateChanged(this.h, (C.int)(newState))
}
func (this *QMediaPlayer) OnPlaybackStateChanged(slot func(newState QMediaPlayer__PlaybackState)) {
	C.QMediaPlayer_connect_playbackStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_playbackStateChanged
func miqt_exec_callback_QMediaPlayer_playbackStateChanged(cb C.intptr_t, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QMediaPlayer__PlaybackState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__PlaybackState)(newState)

	gofunc(slotval1)
}

func (this *QMediaPlayer) MediaStatusChanged(status QMediaPlayer__MediaStatus) {
	C.QMediaPlayer_mediaStatusChanged(this.h, (C.int)(status))
}
func (this *QMediaPlayer) OnMediaStatusChanged(slot func(status QMediaPlayer__MediaStatus)) {
	C.QMediaPlayer_connect_mediaStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_mediaStatusChanged
func miqt_exec_callback_QMediaPlayer_mediaStatusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QMediaPlayer__MediaStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__MediaStatus)(status)

	gofunc(slotval1)
}

func (this *QMediaPlayer) DurationChanged(duration int64) {
	C.QMediaPlayer_durationChanged(this.h, (C.longlong)(duration))
}
func (this *QMediaPlayer) OnDurationChanged(slot func(duration int64)) {
	C.QMediaPlayer_connect_durationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_durationChanged
func miqt_exec_callback_QMediaPlayer_durationChanged(cb C.intptr_t, duration C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(duration int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(duration)

	gofunc(slotval1)
}

func (this *QMediaPlayer) PositionChanged(position int64) {
	C.QMediaPlayer_positionChanged(this.h, (C.longlong)(position))
}
func (this *QMediaPlayer) OnPositionChanged(slot func(position int64)) {
	C.QMediaPlayer_connect_positionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_positionChanged
func miqt_exec_callback_QMediaPlayer_positionChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QMediaPlayer) HasAudioChanged(available bool) {
	C.QMediaPlayer_hasAudioChanged(this.h, (C.bool)(available))
}
func (this *QMediaPlayer) OnHasAudioChanged(slot func(available bool)) {
	C.QMediaPlayer_connect_hasAudioChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_hasAudioChanged
func miqt_exec_callback_QMediaPlayer_hasAudioChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaPlayer) HasVideoChanged(videoAvailable bool) {
	C.QMediaPlayer_hasVideoChanged(this.h, (C.bool)(videoAvailable))
}
func (this *QMediaPlayer) OnHasVideoChanged(slot func(videoAvailable bool)) {
	C.QMediaPlayer_connect_hasVideoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_hasVideoChanged
func miqt_exec_callback_QMediaPlayer_hasVideoChanged(cb C.intptr_t, videoAvailable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(videoAvailable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(videoAvailable)

	gofunc(slotval1)
}

func (this *QMediaPlayer) BufferProgressChanged(progress float32) {
	C.QMediaPlayer_bufferProgressChanged(this.h, (C.float)(progress))
}
func (this *QMediaPlayer) OnBufferProgressChanged(slot func(progress float32)) {
	C.QMediaPlayer_connect_bufferProgressChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_bufferProgressChanged
func miqt_exec_callback_QMediaPlayer_bufferProgressChanged(cb C.intptr_t, progress C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(progress)

	gofunc(slotval1)
}

func (this *QMediaPlayer) SeekableChanged(seekable bool) {
	C.QMediaPlayer_seekableChanged(this.h, (C.bool)(seekable))
}
func (this *QMediaPlayer) OnSeekableChanged(slot func(seekable bool)) {
	C.QMediaPlayer_connect_seekableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_seekableChanged
func miqt_exec_callback_QMediaPlayer_seekableChanged(cb C.intptr_t, seekable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(seekable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(seekable)

	gofunc(slotval1)
}

func (this *QMediaPlayer) PlaybackRateChanged(rate float64) {
	C.QMediaPlayer_playbackRateChanged(this.h, (C.double)(rate))
}
func (this *QMediaPlayer) OnPlaybackRateChanged(slot func(rate float64)) {
	C.QMediaPlayer_connect_playbackRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_playbackRateChanged
func miqt_exec_callback_QMediaPlayer_playbackRateChanged(cb C.intptr_t, rate C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rate float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(rate)

	gofunc(slotval1)
}

func (this *QMediaPlayer) LoopsChanged() {
	C.QMediaPlayer_loopsChanged(this.h)
}
func (this *QMediaPlayer) OnLoopsChanged(slot func()) {
	C.QMediaPlayer_connect_loopsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_loopsChanged
func miqt_exec_callback_QMediaPlayer_loopsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) MetaDataChanged() {
	C.QMediaPlayer_metaDataChanged(this.h)
}
func (this *QMediaPlayer) OnMetaDataChanged(slot func()) {
	C.QMediaPlayer_connect_metaDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_metaDataChanged
func miqt_exec_callback_QMediaPlayer_metaDataChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) VideoOutputChanged() {
	C.QMediaPlayer_videoOutputChanged(this.h)
}
func (this *QMediaPlayer) OnVideoOutputChanged(slot func()) {
	C.QMediaPlayer_connect_videoOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_videoOutputChanged
func miqt_exec_callback_QMediaPlayer_videoOutputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) AudioOutputChanged() {
	C.QMediaPlayer_audioOutputChanged(this.h)
}
func (this *QMediaPlayer) OnAudioOutputChanged(slot func()) {
	C.QMediaPlayer_connect_audioOutputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_audioOutputChanged
func miqt_exec_callback_QMediaPlayer_audioOutputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) TracksChanged() {
	C.QMediaPlayer_tracksChanged(this.h)
}
func (this *QMediaPlayer) OnTracksChanged(slot func()) {
	C.QMediaPlayer_connect_tracksChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_tracksChanged
func miqt_exec_callback_QMediaPlayer_tracksChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) ActiveTracksChanged() {
	C.QMediaPlayer_activeTracksChanged(this.h)
}
func (this *QMediaPlayer) OnActiveTracksChanged(slot func()) {
	C.QMediaPlayer_connect_activeTracksChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_activeTracksChanged
func miqt_exec_callback_QMediaPlayer_activeTracksChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlayer) ErrorChanged() {
	C.QMediaPlayer_errorChanged(this.h)
}
func (this *QMediaPlayer) OnErrorChanged(slot func()) {
	C.QMediaPlayer_connect_errorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_errorChanged
func miqt_exec_callback_QMediaPlayer_errorChanged(cb C.intptr_t) {
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
	C.QMediaPlayer_errorOccurred(this.h, (C.int)(error), errorString_ms)
}
func (this *QMediaPlayer) OnErrorOccurred(slot func(error QMediaPlayer__Error, errorString string)) {
	C.QMediaPlayer_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_errorOccurred
func miqt_exec_callback_QMediaPlayer_errorOccurred(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QMediaPlayer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayer) SetSourceDevice2(device *qt6.QIODevice, sourceUrl *qt6.QUrl) {
	C.QMediaPlayer_setSourceDevice2(this.h, (*C.QIODevice)(device.UnsafePointer()), (*C.QUrl)(sourceUrl.UnsafePointer()))
}

func (this *QMediaPlayer) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QMediaPlayer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaPlayer) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QMediaPlayer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaPlayer_event
func miqt_exec_callback_QMediaPlayer_event(self *C.QMediaPlayer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaPlayer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMediaPlayer) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QMediaPlayer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QMediaPlayer) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QMediaPlayer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaPlayer_eventFilter
func miqt_exec_callback_QMediaPlayer_eventFilter(self *C.QMediaPlayer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QMediaPlayer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMediaPlayer) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QMediaPlayer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QMediaPlayer) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QMediaPlayer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaPlayer_timerEvent
func miqt_exec_callback_QMediaPlayer_timerEvent(self *C.QMediaPlayer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QMediaPlayer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMediaPlayer) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QMediaPlayer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QMediaPlayer) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QMediaPlayer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaPlayer_childEvent
func miqt_exec_callback_QMediaPlayer_childEvent(self *C.QMediaPlayer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QMediaPlayer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMediaPlayer) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QMediaPlayer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QMediaPlayer) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QMediaPlayer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaPlayer_customEvent
func miqt_exec_callback_QMediaPlayer_customEvent(self *C.QMediaPlayer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QMediaPlayer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMediaPlayer) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaPlayer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaPlayer) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMediaPlayer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaPlayer_connectNotify
func miqt_exec_callback_QMediaPlayer_connectNotify(self *C.QMediaPlayer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaPlayer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMediaPlayer) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QMediaPlayer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QMediaPlayer) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QMediaPlayer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMediaPlayer_disconnectNotify
func miqt_exec_callback_QMediaPlayer_disconnectNotify(self *C.QMediaPlayer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QMediaPlayer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMediaPlayer) Delete() {
	C.QMediaPlayer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaPlayer) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaPlayer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
