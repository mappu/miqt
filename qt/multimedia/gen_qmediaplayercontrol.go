package multimedia

/*

#include "gen_qmediaplayercontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaPlayerControl struct {
	h *C.QMediaPlayerControl
	*QMediaControl
}

func (this *QMediaPlayerControl) cPointer() *C.QMediaPlayerControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaPlayerControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaPlayerControl constructs the type using only CGO pointers.
func newQMediaPlayerControl(h *C.QMediaPlayerControl) *QMediaPlayerControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QMediaPlayerControl_virtbase(h, &outptr_QMediaControl)

	return &QMediaPlayerControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQMediaPlayerControl constructs the type using only unsafe pointers.
func UnsafeNewQMediaPlayerControl(h unsafe.Pointer) *QMediaPlayerControl {
	return newQMediaPlayerControl((*C.QMediaPlayerControl)(h))
}

func (this *QMediaPlayerControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaPlayerControl_metaObject(this.h)))
}

func (this *QMediaPlayerControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaPlayerControl_metacast(this.h, param1_Cstring))
}

func QMediaPlayerControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayerControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayerControl) State() QMediaPlayer__State {
	return (QMediaPlayer__State)(C.QMediaPlayerControl_state(this.h))
}

func (this *QMediaPlayerControl) MediaStatus() QMediaPlayer__MediaStatus {
	return (QMediaPlayer__MediaStatus)(C.QMediaPlayerControl_mediaStatus(this.h))
}

func (this *QMediaPlayerControl) Duration() int64 {
	return (int64)(C.QMediaPlayerControl_duration(this.h))
}

func (this *QMediaPlayerControl) Position() int64 {
	return (int64)(C.QMediaPlayerControl_position(this.h))
}

func (this *QMediaPlayerControl) SetPosition(position int64) {
	C.QMediaPlayerControl_setPosition(this.h, (C.longlong)(position))
}

func (this *QMediaPlayerControl) Volume() int {
	return (int)(C.QMediaPlayerControl_volume(this.h))
}

func (this *QMediaPlayerControl) SetVolume(volume int) {
	C.QMediaPlayerControl_setVolume(this.h, (C.int)(volume))
}

func (this *QMediaPlayerControl) IsMuted() bool {
	return (bool)(C.QMediaPlayerControl_isMuted(this.h))
}

func (this *QMediaPlayerControl) SetMuted(mute bool) {
	C.QMediaPlayerControl_setMuted(this.h, (C.bool)(mute))
}

func (this *QMediaPlayerControl) BufferStatus() int {
	return (int)(C.QMediaPlayerControl_bufferStatus(this.h))
}

func (this *QMediaPlayerControl) IsAudioAvailable() bool {
	return (bool)(C.QMediaPlayerControl_isAudioAvailable(this.h))
}

func (this *QMediaPlayerControl) IsVideoAvailable() bool {
	return (bool)(C.QMediaPlayerControl_isVideoAvailable(this.h))
}

func (this *QMediaPlayerControl) IsSeekable() bool {
	return (bool)(C.QMediaPlayerControl_isSeekable(this.h))
}

func (this *QMediaPlayerControl) AvailablePlaybackRanges() *QMediaTimeRange {
	_goptr := newQMediaTimeRange(C.QMediaPlayerControl_availablePlaybackRanges(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayerControl) PlaybackRate() float64 {
	return (float64)(C.QMediaPlayerControl_playbackRate(this.h))
}

func (this *QMediaPlayerControl) SetPlaybackRate(rate float64) {
	C.QMediaPlayerControl_setPlaybackRate(this.h, (C.double)(rate))
}

func (this *QMediaPlayerControl) Media() *QMediaContent {
	_goptr := newQMediaContent(C.QMediaPlayerControl_media(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayerControl) MediaStream() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QMediaPlayerControl_mediaStream(this.h)))
}

func (this *QMediaPlayerControl) SetMedia(media *QMediaContent, stream *qt.QIODevice) {
	C.QMediaPlayerControl_setMedia(this.h, media.cPointer(), (*C.QIODevice)(stream.UnsafePointer()))
}

func (this *QMediaPlayerControl) Play() {
	C.QMediaPlayerControl_play(this.h)
}

func (this *QMediaPlayerControl) Pause() {
	C.QMediaPlayerControl_pause(this.h)
}

func (this *QMediaPlayerControl) Stop() {
	C.QMediaPlayerControl_stop(this.h)
}

func (this *QMediaPlayerControl) MediaChanged(content *QMediaContent) {
	C.QMediaPlayerControl_mediaChanged(this.h, content.cPointer())
}
func (this *QMediaPlayerControl) OnMediaChanged(slot func(content *QMediaContent)) {
	C.QMediaPlayerControl_connect_mediaChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_mediaChanged
func miqt_exec_callback_QMediaPlayerControl_mediaChanged(cb C.intptr_t, content *C.QMediaContent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(content *QMediaContent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaContent(content)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) DurationChanged(duration int64) {
	C.QMediaPlayerControl_durationChanged(this.h, (C.longlong)(duration))
}
func (this *QMediaPlayerControl) OnDurationChanged(slot func(duration int64)) {
	C.QMediaPlayerControl_connect_durationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_durationChanged
func miqt_exec_callback_QMediaPlayerControl_durationChanged(cb C.intptr_t, duration C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(duration int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(duration)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) PositionChanged(position int64) {
	C.QMediaPlayerControl_positionChanged(this.h, (C.longlong)(position))
}
func (this *QMediaPlayerControl) OnPositionChanged(slot func(position int64)) {
	C.QMediaPlayerControl_connect_positionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_positionChanged
func miqt_exec_callback_QMediaPlayerControl_positionChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) StateChanged(newState QMediaPlayer__State) {
	C.QMediaPlayerControl_stateChanged(this.h, (C.int)(newState))
}
func (this *QMediaPlayerControl) OnStateChanged(slot func(newState QMediaPlayer__State)) {
	C.QMediaPlayerControl_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_stateChanged
func miqt_exec_callback_QMediaPlayerControl_stateChanged(cb C.intptr_t, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QMediaPlayer__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__State)(newState)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) MediaStatusChanged(status QMediaPlayer__MediaStatus) {
	C.QMediaPlayerControl_mediaStatusChanged(this.h, (C.int)(status))
}
func (this *QMediaPlayerControl) OnMediaStatusChanged(slot func(status QMediaPlayer__MediaStatus)) {
	C.QMediaPlayerControl_connect_mediaStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_mediaStatusChanged
func miqt_exec_callback_QMediaPlayerControl_mediaStatusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QMediaPlayer__MediaStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__MediaStatus)(status)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) VolumeChanged(volume int) {
	C.QMediaPlayerControl_volumeChanged(this.h, (C.int)(volume))
}
func (this *QMediaPlayerControl) OnVolumeChanged(slot func(volume int)) {
	C.QMediaPlayerControl_connect_volumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_volumeChanged
func miqt_exec_callback_QMediaPlayerControl_volumeChanged(cb C.intptr_t, volume C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(volume)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) MutedChanged(mute bool) {
	C.QMediaPlayerControl_mutedChanged(this.h, (C.bool)(mute))
}
func (this *QMediaPlayerControl) OnMutedChanged(slot func(mute bool)) {
	C.QMediaPlayerControl_connect_mutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_mutedChanged
func miqt_exec_callback_QMediaPlayerControl_mutedChanged(cb C.intptr_t, mute C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mute bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(mute)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) AudioAvailableChanged(audioAvailable bool) {
	C.QMediaPlayerControl_audioAvailableChanged(this.h, (C.bool)(audioAvailable))
}
func (this *QMediaPlayerControl) OnAudioAvailableChanged(slot func(audioAvailable bool)) {
	C.QMediaPlayerControl_connect_audioAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_audioAvailableChanged
func miqt_exec_callback_QMediaPlayerControl_audioAvailableChanged(cb C.intptr_t, audioAvailable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(audioAvailable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(audioAvailable)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) VideoAvailableChanged(videoAvailable bool) {
	C.QMediaPlayerControl_videoAvailableChanged(this.h, (C.bool)(videoAvailable))
}
func (this *QMediaPlayerControl) OnVideoAvailableChanged(slot func(videoAvailable bool)) {
	C.QMediaPlayerControl_connect_videoAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_videoAvailableChanged
func miqt_exec_callback_QMediaPlayerControl_videoAvailableChanged(cb C.intptr_t, videoAvailable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(videoAvailable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(videoAvailable)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) BufferStatusChanged(percentFilled int) {
	C.QMediaPlayerControl_bufferStatusChanged(this.h, (C.int)(percentFilled))
}
func (this *QMediaPlayerControl) OnBufferStatusChanged(slot func(percentFilled int)) {
	C.QMediaPlayerControl_connect_bufferStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_bufferStatusChanged
func miqt_exec_callback_QMediaPlayerControl_bufferStatusChanged(cb C.intptr_t, percentFilled C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(percentFilled int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(percentFilled)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) SeekableChanged(seekable bool) {
	C.QMediaPlayerControl_seekableChanged(this.h, (C.bool)(seekable))
}
func (this *QMediaPlayerControl) OnSeekableChanged(slot func(seekable bool)) {
	C.QMediaPlayerControl_connect_seekableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_seekableChanged
func miqt_exec_callback_QMediaPlayerControl_seekableChanged(cb C.intptr_t, seekable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(seekable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(seekable)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) AvailablePlaybackRangesChanged(ranges *QMediaTimeRange) {
	C.QMediaPlayerControl_availablePlaybackRangesChanged(this.h, ranges.cPointer())
}
func (this *QMediaPlayerControl) OnAvailablePlaybackRangesChanged(slot func(ranges *QMediaTimeRange)) {
	C.QMediaPlayerControl_connect_availablePlaybackRangesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_availablePlaybackRangesChanged
func miqt_exec_callback_QMediaPlayerControl_availablePlaybackRangesChanged(cb C.intptr_t, ranges *C.QMediaTimeRange) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ranges *QMediaTimeRange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaTimeRange(ranges)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) PlaybackRateChanged(rate float64) {
	C.QMediaPlayerControl_playbackRateChanged(this.h, (C.double)(rate))
}
func (this *QMediaPlayerControl) OnPlaybackRateChanged(slot func(rate float64)) {
	C.QMediaPlayerControl_connect_playbackRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_playbackRateChanged
func miqt_exec_callback_QMediaPlayerControl_playbackRateChanged(cb C.intptr_t, rate C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rate float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(rate)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) Error(error int, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QMediaPlayerControl_error(this.h, (C.int)(error), errorString_ms)
}
func (this *QMediaPlayerControl) OnError(slot func(error int, errorString string)) {
	C.QMediaPlayerControl_connect_error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_error
func miqt_exec_callback_QMediaPlayerControl_error(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error int, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval2 := errorString_ret

	gofunc(slotval1, slotval2)
}

func QMediaPlayerControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayerControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayerControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayerControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaPlayerControl) Delete() {
	C.QMediaPlayerControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaPlayerControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaPlayerControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
