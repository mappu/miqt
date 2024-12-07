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
	h          *C.QMediaPlayerControl
	isSubclass bool
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
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaPlayerControl_MetaObject(this.h)))
}

func (this *QMediaPlayerControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaPlayerControl_Metacast(this.h, param1_Cstring))
}

func QMediaPlayerControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayerControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayerControl) State() QMediaPlayer__State {
	return (QMediaPlayer__State)(C.QMediaPlayerControl_State(this.h))
}

func (this *QMediaPlayerControl) MediaStatus() QMediaPlayer__MediaStatus {
	return (QMediaPlayer__MediaStatus)(C.QMediaPlayerControl_MediaStatus(this.h))
}

func (this *QMediaPlayerControl) Duration() int64 {
	return (int64)(C.QMediaPlayerControl_Duration(this.h))
}

func (this *QMediaPlayerControl) Position() int64 {
	return (int64)(C.QMediaPlayerControl_Position(this.h))
}

func (this *QMediaPlayerControl) SetPosition(position int64) {
	C.QMediaPlayerControl_SetPosition(this.h, (C.longlong)(position))
}

func (this *QMediaPlayerControl) Volume() int {
	return (int)(C.QMediaPlayerControl_Volume(this.h))
}

func (this *QMediaPlayerControl) SetVolume(volume int) {
	C.QMediaPlayerControl_SetVolume(this.h, (C.int)(volume))
}

func (this *QMediaPlayerControl) IsMuted() bool {
	return (bool)(C.QMediaPlayerControl_IsMuted(this.h))
}

func (this *QMediaPlayerControl) SetMuted(mute bool) {
	C.QMediaPlayerControl_SetMuted(this.h, (C.bool)(mute))
}

func (this *QMediaPlayerControl) BufferStatus() int {
	return (int)(C.QMediaPlayerControl_BufferStatus(this.h))
}

func (this *QMediaPlayerControl) IsAudioAvailable() bool {
	return (bool)(C.QMediaPlayerControl_IsAudioAvailable(this.h))
}

func (this *QMediaPlayerControl) IsVideoAvailable() bool {
	return (bool)(C.QMediaPlayerControl_IsVideoAvailable(this.h))
}

func (this *QMediaPlayerControl) IsSeekable() bool {
	return (bool)(C.QMediaPlayerControl_IsSeekable(this.h))
}

func (this *QMediaPlayerControl) AvailablePlaybackRanges() *QMediaTimeRange {
	_goptr := newQMediaTimeRange(C.QMediaPlayerControl_AvailablePlaybackRanges(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayerControl) PlaybackRate() float64 {
	return (float64)(C.QMediaPlayerControl_PlaybackRate(this.h))
}

func (this *QMediaPlayerControl) SetPlaybackRate(rate float64) {
	C.QMediaPlayerControl_SetPlaybackRate(this.h, (C.double)(rate))
}

func (this *QMediaPlayerControl) Media() *QMediaContent {
	_goptr := newQMediaContent(C.QMediaPlayerControl_Media(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayerControl) MediaStream() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QMediaPlayerControl_MediaStream(this.h)))
}

func (this *QMediaPlayerControl) SetMedia(media *QMediaContent, stream *qt.QIODevice) {
	C.QMediaPlayerControl_SetMedia(this.h, media.cPointer(), (*C.QIODevice)(stream.UnsafePointer()))
}

func (this *QMediaPlayerControl) Play() {
	C.QMediaPlayerControl_Play(this.h)
}

func (this *QMediaPlayerControl) Pause() {
	C.QMediaPlayerControl_Pause(this.h)
}

func (this *QMediaPlayerControl) Stop() {
	C.QMediaPlayerControl_Stop(this.h)
}

func (this *QMediaPlayerControl) MediaChanged(content *QMediaContent) {
	C.QMediaPlayerControl_MediaChanged(this.h, content.cPointer())
}
func (this *QMediaPlayerControl) OnMediaChanged(slot func(content *QMediaContent)) {
	C.QMediaPlayerControl_connect_MediaChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_MediaChanged
func miqt_exec_callback_QMediaPlayerControl_MediaChanged(cb C.intptr_t, content *C.QMediaContent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(content *QMediaContent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaContent(content)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) DurationChanged(duration int64) {
	C.QMediaPlayerControl_DurationChanged(this.h, (C.longlong)(duration))
}
func (this *QMediaPlayerControl) OnDurationChanged(slot func(duration int64)) {
	C.QMediaPlayerControl_connect_DurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_DurationChanged
func miqt_exec_callback_QMediaPlayerControl_DurationChanged(cb C.intptr_t, duration C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(duration int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(duration)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) PositionChanged(position int64) {
	C.QMediaPlayerControl_PositionChanged(this.h, (C.longlong)(position))
}
func (this *QMediaPlayerControl) OnPositionChanged(slot func(position int64)) {
	C.QMediaPlayerControl_connect_PositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_PositionChanged
func miqt_exec_callback_QMediaPlayerControl_PositionChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) StateChanged(newState QMediaPlayer__State) {
	C.QMediaPlayerControl_StateChanged(this.h, (C.int)(newState))
}
func (this *QMediaPlayerControl) OnStateChanged(slot func(newState QMediaPlayer__State)) {
	C.QMediaPlayerControl_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_StateChanged
func miqt_exec_callback_QMediaPlayerControl_StateChanged(cb C.intptr_t, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QMediaPlayer__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__State)(newState)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) MediaStatusChanged(status QMediaPlayer__MediaStatus) {
	C.QMediaPlayerControl_MediaStatusChanged(this.h, (C.int)(status))
}
func (this *QMediaPlayerControl) OnMediaStatusChanged(slot func(status QMediaPlayer__MediaStatus)) {
	C.QMediaPlayerControl_connect_MediaStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_MediaStatusChanged
func miqt_exec_callback_QMediaPlayerControl_MediaStatusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QMediaPlayer__MediaStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__MediaStatus)(status)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) VolumeChanged(volume int) {
	C.QMediaPlayerControl_VolumeChanged(this.h, (C.int)(volume))
}
func (this *QMediaPlayerControl) OnVolumeChanged(slot func(volume int)) {
	C.QMediaPlayerControl_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_VolumeChanged
func miqt_exec_callback_QMediaPlayerControl_VolumeChanged(cb C.intptr_t, volume C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(volume)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) MutedChanged(mute bool) {
	C.QMediaPlayerControl_MutedChanged(this.h, (C.bool)(mute))
}
func (this *QMediaPlayerControl) OnMutedChanged(slot func(mute bool)) {
	C.QMediaPlayerControl_connect_MutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_MutedChanged
func miqt_exec_callback_QMediaPlayerControl_MutedChanged(cb C.intptr_t, mute C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mute bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(mute)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) AudioAvailableChanged(audioAvailable bool) {
	C.QMediaPlayerControl_AudioAvailableChanged(this.h, (C.bool)(audioAvailable))
}
func (this *QMediaPlayerControl) OnAudioAvailableChanged(slot func(audioAvailable bool)) {
	C.QMediaPlayerControl_connect_AudioAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_AudioAvailableChanged
func miqt_exec_callback_QMediaPlayerControl_AudioAvailableChanged(cb C.intptr_t, audioAvailable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(audioAvailable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(audioAvailable)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) VideoAvailableChanged(videoAvailable bool) {
	C.QMediaPlayerControl_VideoAvailableChanged(this.h, (C.bool)(videoAvailable))
}
func (this *QMediaPlayerControl) OnVideoAvailableChanged(slot func(videoAvailable bool)) {
	C.QMediaPlayerControl_connect_VideoAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_VideoAvailableChanged
func miqt_exec_callback_QMediaPlayerControl_VideoAvailableChanged(cb C.intptr_t, videoAvailable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(videoAvailable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(videoAvailable)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) BufferStatusChanged(percentFilled int) {
	C.QMediaPlayerControl_BufferStatusChanged(this.h, (C.int)(percentFilled))
}
func (this *QMediaPlayerControl) OnBufferStatusChanged(slot func(percentFilled int)) {
	C.QMediaPlayerControl_connect_BufferStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_BufferStatusChanged
func miqt_exec_callback_QMediaPlayerControl_BufferStatusChanged(cb C.intptr_t, percentFilled C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(percentFilled int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(percentFilled)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) SeekableChanged(seekable bool) {
	C.QMediaPlayerControl_SeekableChanged(this.h, (C.bool)(seekable))
}
func (this *QMediaPlayerControl) OnSeekableChanged(slot func(seekable bool)) {
	C.QMediaPlayerControl_connect_SeekableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_SeekableChanged
func miqt_exec_callback_QMediaPlayerControl_SeekableChanged(cb C.intptr_t, seekable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(seekable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(seekable)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) AvailablePlaybackRangesChanged(ranges *QMediaTimeRange) {
	C.QMediaPlayerControl_AvailablePlaybackRangesChanged(this.h, ranges.cPointer())
}
func (this *QMediaPlayerControl) OnAvailablePlaybackRangesChanged(slot func(ranges *QMediaTimeRange)) {
	C.QMediaPlayerControl_connect_AvailablePlaybackRangesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_AvailablePlaybackRangesChanged
func miqt_exec_callback_QMediaPlayerControl_AvailablePlaybackRangesChanged(cb C.intptr_t, ranges *C.QMediaTimeRange) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ranges *QMediaTimeRange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaTimeRange(ranges)

	gofunc(slotval1)
}

func (this *QMediaPlayerControl) PlaybackRateChanged(rate float64) {
	C.QMediaPlayerControl_PlaybackRateChanged(this.h, (C.double)(rate))
}
func (this *QMediaPlayerControl) OnPlaybackRateChanged(slot func(rate float64)) {
	C.QMediaPlayerControl_connect_PlaybackRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_PlaybackRateChanged
func miqt_exec_callback_QMediaPlayerControl_PlaybackRateChanged(cb C.intptr_t, rate C.double) {
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
	C.QMediaPlayerControl_Error(this.h, (C.int)(error), errorString_ms)
}
func (this *QMediaPlayerControl) OnError(slot func(error int, errorString string)) {
	C.QMediaPlayerControl_connect_Error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayerControl_Error
func miqt_exec_callback_QMediaPlayerControl_Error(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayerControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayerControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayerControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayerControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaPlayerControl) Delete() {
	C.QMediaPlayerControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaPlayerControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaPlayerControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
