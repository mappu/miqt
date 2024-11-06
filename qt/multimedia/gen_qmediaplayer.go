package multimedia

/*

#include "gen_qmediaplayer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaPlayer__State int

const (
	QMediaPlayer__StoppedState QMediaPlayer__State = 0
	QMediaPlayer__PlayingState QMediaPlayer__State = 1
	QMediaPlayer__PausedState  QMediaPlayer__State = 2
)

type QMediaPlayer__MediaStatus int

const (
	QMediaPlayer__UnknownMediaStatus QMediaPlayer__MediaStatus = 0
	QMediaPlayer__NoMedia            QMediaPlayer__MediaStatus = 1
	QMediaPlayer__LoadingMedia       QMediaPlayer__MediaStatus = 2
	QMediaPlayer__LoadedMedia        QMediaPlayer__MediaStatus = 3
	QMediaPlayer__StalledMedia       QMediaPlayer__MediaStatus = 4
	QMediaPlayer__BufferingMedia     QMediaPlayer__MediaStatus = 5
	QMediaPlayer__BufferedMedia      QMediaPlayer__MediaStatus = 6
	QMediaPlayer__EndOfMedia         QMediaPlayer__MediaStatus = 7
	QMediaPlayer__InvalidMedia       QMediaPlayer__MediaStatus = 8
)

type QMediaPlayer__Flag int

const (
	QMediaPlayer__LowLatency     QMediaPlayer__Flag = 1
	QMediaPlayer__StreamPlayback QMediaPlayer__Flag = 2
	QMediaPlayer__VideoSurface   QMediaPlayer__Flag = 4
)

type QMediaPlayer__Error int

const (
	QMediaPlayer__NoError             QMediaPlayer__Error = 0
	QMediaPlayer__ResourceError       QMediaPlayer__Error = 1
	QMediaPlayer__FormatError         QMediaPlayer__Error = 2
	QMediaPlayer__NetworkError        QMediaPlayer__Error = 3
	QMediaPlayer__AccessDeniedError   QMediaPlayer__Error = 4
	QMediaPlayer__ServiceMissingError QMediaPlayer__Error = 5
	QMediaPlayer__MediaIsPlaylist     QMediaPlayer__Error = 6
)

type QMediaPlayer struct {
	h *C.QMediaPlayer
	*QMediaObject
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
	return &QMediaPlayer{h: h, QMediaObject: UnsafeNewQMediaObject(unsafe.Pointer(h))}
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
func NewQMediaPlayer2(parent *qt.QObject) *QMediaPlayer {
	ret := C.QMediaPlayer_new2((*C.QObject)(parent.UnsafePointer()))
	return newQMediaPlayer(ret)
}

// NewQMediaPlayer3 constructs a new QMediaPlayer object.
func NewQMediaPlayer3(parent *qt.QObject, flags QMediaPlayer__Flag) *QMediaPlayer {
	ret := C.QMediaPlayer_new3((*C.QObject)(parent.UnsafePointer()), (C.int)(flags))
	return newQMediaPlayer(ret)
}

func (this *QMediaPlayer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaPlayer_MetaObject(this.h)))
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

func QMediaPlayer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayer_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayer_HasSupport(mimeType string) QMultimedia__SupportEstimate {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	return (QMultimedia__SupportEstimate)(C.QMediaPlayer_HasSupport(mimeType_ms))
}

func QMediaPlayer_SupportedMimeTypes() []string {
	var _ma C.struct_miqt_array = C.QMediaPlayer_SupportedMimeTypes()
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

func (this *QMediaPlayer) SetVideoOutput(videoOutput *QVideoWidget) {
	C.QMediaPlayer_SetVideoOutput(this.h, videoOutput.cPointer())
}

func (this *QMediaPlayer) SetVideoOutputWithVideoOutput(videoOutput *QGraphicsVideoItem) {
	C.QMediaPlayer_SetVideoOutputWithVideoOutput(this.h, videoOutput.cPointer())
}

func (this *QMediaPlayer) SetVideoOutputWithSurface(surface *QAbstractVideoSurface) {
	C.QMediaPlayer_SetVideoOutputWithSurface(this.h, surface.cPointer())
}

func (this *QMediaPlayer) SetVideoOutputWithSurfaces(surfaces []*QAbstractVideoSurface) {
	surfaces_CArray := (*[0xffff]*C.QAbstractVideoSurface)(C.malloc(C.size_t(8 * len(surfaces))))
	defer C.free(unsafe.Pointer(surfaces_CArray))
	for i := range surfaces {
		surfaces_CArray[i] = surfaces[i].cPointer()
	}
	surfaces_ma := C.struct_miqt_array{len: C.size_t(len(surfaces)), data: unsafe.Pointer(surfaces_CArray)}
	C.QMediaPlayer_SetVideoOutputWithSurfaces(this.h, surfaces_ma)
}

func (this *QMediaPlayer) Media() *QMediaContent {
	_ret := C.QMediaPlayer_Media(this.h)
	_goptr := newQMediaContent(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) MediaStream() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QMediaPlayer_MediaStream(this.h)))
}

func (this *QMediaPlayer) Playlist() *QMediaPlaylist {
	return UnsafeNewQMediaPlaylist(unsafe.Pointer(C.QMediaPlayer_Playlist(this.h)))
}

func (this *QMediaPlayer) CurrentMedia() *QMediaContent {
	_ret := C.QMediaPlayer_CurrentMedia(this.h)
	_goptr := newQMediaContent(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) State() QMediaPlayer__State {
	return (QMediaPlayer__State)(C.QMediaPlayer_State(this.h))
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

func (this *QMediaPlayer) Volume() int {
	return (int)(C.QMediaPlayer_Volume(this.h))
}

func (this *QMediaPlayer) IsMuted() bool {
	return (bool)(C.QMediaPlayer_IsMuted(this.h))
}

func (this *QMediaPlayer) IsAudioAvailable() bool {
	return (bool)(C.QMediaPlayer_IsAudioAvailable(this.h))
}

func (this *QMediaPlayer) IsVideoAvailable() bool {
	return (bool)(C.QMediaPlayer_IsVideoAvailable(this.h))
}

func (this *QMediaPlayer) BufferStatus() int {
	return (int)(C.QMediaPlayer_BufferStatus(this.h))
}

func (this *QMediaPlayer) IsSeekable() bool {
	return (bool)(C.QMediaPlayer_IsSeekable(this.h))
}

func (this *QMediaPlayer) PlaybackRate() float64 {
	return (float64)(C.QMediaPlayer_PlaybackRate(this.h))
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

func (this *QMediaPlayer) CurrentNetworkConfiguration() *network.QNetworkConfiguration {
	_ret := C.QMediaPlayer_CurrentNetworkConfiguration(this.h)
	_goptr := network.UnsafeNewQNetworkConfiguration(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlayer) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QMediaPlayer_Availability(this.h))
}

func (this *QMediaPlayer) AudioRole() QAudio__Role {
	return (QAudio__Role)(C.QMediaPlayer_AudioRole(this.h))
}

func (this *QMediaPlayer) SetAudioRole(audioRole QAudio__Role) {
	C.QMediaPlayer_SetAudioRole(this.h, (C.int)(audioRole))
}

func (this *QMediaPlayer) SupportedAudioRoles() []QAudio__Role {
	var _ma C.struct_miqt_array = C.QMediaPlayer_SupportedAudioRoles(this.h)
	_ret := make([]QAudio__Role, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QAudio__Role)(_outCast[i])
	}
	return _ret
}

func (this *QMediaPlayer) CustomAudioRole() string {
	var _ms C.struct_miqt_string = C.QMediaPlayer_CustomAudioRole(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlayer) SetCustomAudioRole(audioRole string) {
	audioRole_ms := C.struct_miqt_string{}
	audioRole_ms.data = C.CString(audioRole)
	audioRole_ms.len = C.size_t(len(audioRole))
	defer C.free(unsafe.Pointer(audioRole_ms.data))
	C.QMediaPlayer_SetCustomAudioRole(this.h, audioRole_ms)
}

func (this *QMediaPlayer) SupportedCustomAudioRoles() []string {
	var _ma C.struct_miqt_array = C.QMediaPlayer_SupportedCustomAudioRoles(this.h)
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

func (this *QMediaPlayer) SetVolume(volume int) {
	C.QMediaPlayer_SetVolume(this.h, (C.int)(volume))
}

func (this *QMediaPlayer) SetMuted(muted bool) {
	C.QMediaPlayer_SetMuted(this.h, (C.bool)(muted))
}

func (this *QMediaPlayer) SetPlaybackRate(rate float64) {
	C.QMediaPlayer_SetPlaybackRate(this.h, (C.double)(rate))
}

func (this *QMediaPlayer) SetMedia(media *QMediaContent) {
	C.QMediaPlayer_SetMedia(this.h, media.cPointer())
}

func (this *QMediaPlayer) SetPlaylist(playlist *QMediaPlaylist) {
	C.QMediaPlayer_SetPlaylist(this.h, playlist.cPointer())
}

func (this *QMediaPlayer) SetNetworkConfigurations(configurations []network.QNetworkConfiguration) {
	configurations_CArray := (*[0xffff]*C.QNetworkConfiguration)(C.malloc(C.size_t(8 * len(configurations))))
	defer C.free(unsafe.Pointer(configurations_CArray))
	for i := range configurations {
		configurations_CArray[i] = (*C.QNetworkConfiguration)(configurations[i].UnsafePointer())
	}
	configurations_ma := C.struct_miqt_array{len: C.size_t(len(configurations)), data: unsafe.Pointer(configurations_CArray)}
	C.QMediaPlayer_SetNetworkConfigurations(this.h, configurations_ma)
}

func (this *QMediaPlayer) MediaChanged(media *QMediaContent) {
	C.QMediaPlayer_MediaChanged(this.h, media.cPointer())
}
func (this *QMediaPlayer) OnMediaChanged(slot func(media *QMediaContent)) {
	C.QMediaPlayer_connect_MediaChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_MediaChanged
func miqt_exec_callback_QMediaPlayer_MediaChanged(cb C.intptr_t, media *C.QMediaContent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(media *QMediaContent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMediaContent(unsafe.Pointer(media))

	gofunc(slotval1)
}

func (this *QMediaPlayer) CurrentMediaChanged(media *QMediaContent) {
	C.QMediaPlayer_CurrentMediaChanged(this.h, media.cPointer())
}
func (this *QMediaPlayer) OnCurrentMediaChanged(slot func(media *QMediaContent)) {
	C.QMediaPlayer_connect_CurrentMediaChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_CurrentMediaChanged
func miqt_exec_callback_QMediaPlayer_CurrentMediaChanged(cb C.intptr_t, media *C.QMediaContent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(media *QMediaContent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMediaContent(unsafe.Pointer(media))

	gofunc(slotval1)
}

func (this *QMediaPlayer) StateChanged(newState QMediaPlayer__State) {
	C.QMediaPlayer_StateChanged(this.h, (C.int)(newState))
}
func (this *QMediaPlayer) OnStateChanged(slot func(newState QMediaPlayer__State)) {
	C.QMediaPlayer_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_StateChanged
func miqt_exec_callback_QMediaPlayer_StateChanged(cb C.intptr_t, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QMediaPlayer__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__State)(newState)

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

func (this *QMediaPlayer) VolumeChanged(volume int) {
	C.QMediaPlayer_VolumeChanged(this.h, (C.int)(volume))
}
func (this *QMediaPlayer) OnVolumeChanged(slot func(volume int)) {
	C.QMediaPlayer_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_VolumeChanged
func miqt_exec_callback_QMediaPlayer_VolumeChanged(cb C.intptr_t, volume C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(volume)

	gofunc(slotval1)
}

func (this *QMediaPlayer) MutedChanged(muted bool) {
	C.QMediaPlayer_MutedChanged(this.h, (C.bool)(muted))
}
func (this *QMediaPlayer) OnMutedChanged(slot func(muted bool)) {
	C.QMediaPlayer_connect_MutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_MutedChanged
func miqt_exec_callback_QMediaPlayer_MutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func (this *QMediaPlayer) AudioAvailableChanged(available bool) {
	C.QMediaPlayer_AudioAvailableChanged(this.h, (C.bool)(available))
}
func (this *QMediaPlayer) OnAudioAvailableChanged(slot func(available bool)) {
	C.QMediaPlayer_connect_AudioAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_AudioAvailableChanged
func miqt_exec_callback_QMediaPlayer_AudioAvailableChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QMediaPlayer) VideoAvailableChanged(videoAvailable bool) {
	C.QMediaPlayer_VideoAvailableChanged(this.h, (C.bool)(videoAvailable))
}
func (this *QMediaPlayer) OnVideoAvailableChanged(slot func(videoAvailable bool)) {
	C.QMediaPlayer_connect_VideoAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_VideoAvailableChanged
func miqt_exec_callback_QMediaPlayer_VideoAvailableChanged(cb C.intptr_t, videoAvailable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(videoAvailable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(videoAvailable)

	gofunc(slotval1)
}

func (this *QMediaPlayer) BufferStatusChanged(percentFilled int) {
	C.QMediaPlayer_BufferStatusChanged(this.h, (C.int)(percentFilled))
}
func (this *QMediaPlayer) OnBufferStatusChanged(slot func(percentFilled int)) {
	C.QMediaPlayer_connect_BufferStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_BufferStatusChanged
func miqt_exec_callback_QMediaPlayer_BufferStatusChanged(cb C.intptr_t, percentFilled C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(percentFilled int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(percentFilled)

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

func (this *QMediaPlayer) AudioRoleChanged(role QAudio__Role) {
	C.QMediaPlayer_AudioRoleChanged(this.h, (C.int)(role))
}
func (this *QMediaPlayer) OnAudioRoleChanged(slot func(role QAudio__Role)) {
	C.QMediaPlayer_connect_AudioRoleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_AudioRoleChanged
func miqt_exec_callback_QMediaPlayer_AudioRoleChanged(cb C.intptr_t, role C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(role QAudio__Role))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudio__Role)(role)

	gofunc(slotval1)
}

func (this *QMediaPlayer) CustomAudioRoleChanged(role string) {
	role_ms := C.struct_miqt_string{}
	role_ms.data = C.CString(role)
	role_ms.len = C.size_t(len(role))
	defer C.free(unsafe.Pointer(role_ms.data))
	C.QMediaPlayer_CustomAudioRoleChanged(this.h, role_ms)
}
func (this *QMediaPlayer) OnCustomAudioRoleChanged(slot func(role string)) {
	C.QMediaPlayer_connect_CustomAudioRoleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_CustomAudioRoleChanged
func miqt_exec_callback_QMediaPlayer_CustomAudioRoleChanged(cb C.intptr_t, role C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(role string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var role_ms C.struct_miqt_string = role
	role_ret := C.GoStringN(role_ms.data, C.int(int64(role_ms.len)))
	C.free(unsafe.Pointer(role_ms.data))
	slotval1 := role_ret

	gofunc(slotval1)
}

func (this *QMediaPlayer) ErrorWithError(error QMediaPlayer__Error) {
	C.QMediaPlayer_ErrorWithError(this.h, (C.int)(error))
}
func (this *QMediaPlayer) OnErrorWithError(slot func(error QMediaPlayer__Error)) {
	C.QMediaPlayer_connect_ErrorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_ErrorWithError
func miqt_exec_callback_QMediaPlayer_ErrorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QMediaPlayer__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlayer__Error)(error)

	gofunc(slotval1)
}

func (this *QMediaPlayer) NetworkConfigurationChanged(configuration *network.QNetworkConfiguration) {
	C.QMediaPlayer_NetworkConfigurationChanged(this.h, (*C.QNetworkConfiguration)(configuration.UnsafePointer()))
}
func (this *QMediaPlayer) OnNetworkConfigurationChanged(slot func(configuration *network.QNetworkConfiguration)) {
	C.QMediaPlayer_connect_NetworkConfigurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlayer_NetworkConfigurationChanged
func miqt_exec_callback_QMediaPlayer_NetworkConfigurationChanged(cb C.intptr_t, configuration *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(configuration *network.QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQNetworkConfiguration(unsafe.Pointer(configuration))

	gofunc(slotval1)
}

func (this *QMediaPlayer) Bind(param1 *qt.QObject) bool {
	return (bool)(C.QMediaPlayer_Bind(this.h, (*C.QObject)(param1.UnsafePointer())))
}

func (this *QMediaPlayer) Unbind(param1 *qt.QObject) {
	C.QMediaPlayer_Unbind(this.h, (*C.QObject)(param1.UnsafePointer()))
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

func QMediaPlayer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayer_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlayer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlayer_HasSupport2(mimeType string, codecs []string) QMultimedia__SupportEstimate {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	codecs_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(codecs))))
	defer C.free(unsafe.Pointer(codecs_CArray))
	for i := range codecs {
		codecs_i_ms := C.struct_miqt_string{}
		codecs_i_ms.data = C.CString(codecs[i])
		codecs_i_ms.len = C.size_t(len(codecs[i]))
		defer C.free(unsafe.Pointer(codecs_i_ms.data))
		codecs_CArray[i] = codecs_i_ms
	}
	codecs_ma := C.struct_miqt_array{len: C.size_t(len(codecs)), data: unsafe.Pointer(codecs_CArray)}
	return (QMultimedia__SupportEstimate)(C.QMediaPlayer_HasSupport2(mimeType_ms, codecs_ma))
}

func QMediaPlayer_HasSupport3(mimeType string, codecs []string, flags QMediaPlayer__Flag) QMultimedia__SupportEstimate {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	codecs_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(codecs))))
	defer C.free(unsafe.Pointer(codecs_CArray))
	for i := range codecs {
		codecs_i_ms := C.struct_miqt_string{}
		codecs_i_ms.data = C.CString(codecs[i])
		codecs_i_ms.len = C.size_t(len(codecs[i]))
		defer C.free(unsafe.Pointer(codecs_i_ms.data))
		codecs_CArray[i] = codecs_i_ms
	}
	codecs_ma := C.struct_miqt_array{len: C.size_t(len(codecs)), data: unsafe.Pointer(codecs_CArray)}
	return (QMultimedia__SupportEstimate)(C.QMediaPlayer_HasSupport3(mimeType_ms, codecs_ma, (C.int)(flags)))
}

func QMediaPlayer_SupportedMimeTypes1(flags QMediaPlayer__Flag) []string {
	var _ma C.struct_miqt_array = C.QMediaPlayer_SupportedMimeTypes1((C.int)(flags))
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

func (this *QMediaPlayer) SetMedia2(media *QMediaContent, stream *qt.QIODevice) {
	C.QMediaPlayer_SetMedia2(this.h, media.cPointer(), (*C.QIODevice)(stream.UnsafePointer()))
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
