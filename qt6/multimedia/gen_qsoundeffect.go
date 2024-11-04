package multimedia

/*

#include "gen_qsoundeffect.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSoundEffect__Loop int

const (
	QSoundEffect__Infinite QSoundEffect__Loop = -2
)

type QSoundEffect__Status int

const (
	QSoundEffect__Null    QSoundEffect__Status = 0
	QSoundEffect__Loading QSoundEffect__Status = 1
	QSoundEffect__Ready   QSoundEffect__Status = 2
	QSoundEffect__Error   QSoundEffect__Status = 3
)

type QSoundEffect struct {
	h *C.QSoundEffect
	*qt6.QObject
}

func (this *QSoundEffect) cPointer() *C.QSoundEffect {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSoundEffect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSoundEffect(h *C.QSoundEffect) *QSoundEffect {
	if h == nil {
		return nil
	}
	return &QSoundEffect{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQSoundEffect(h unsafe.Pointer) *QSoundEffect {
	return newQSoundEffect((*C.QSoundEffect)(h))
}

// NewQSoundEffect constructs a new QSoundEffect object.
func NewQSoundEffect() *QSoundEffect {
	ret := C.QSoundEffect_new()
	return newQSoundEffect(ret)
}

// NewQSoundEffect2 constructs a new QSoundEffect object.
func NewQSoundEffect2(audioDevice *QAudioDevice) *QSoundEffect {
	ret := C.QSoundEffect_new2(audioDevice.cPointer())
	return newQSoundEffect(ret)
}

// NewQSoundEffect3 constructs a new QSoundEffect object.
func NewQSoundEffect3(parent *qt6.QObject) *QSoundEffect {
	ret := C.QSoundEffect_new3((*C.QObject)(parent.UnsafePointer()))
	return newQSoundEffect(ret)
}

// NewQSoundEffect4 constructs a new QSoundEffect object.
func NewQSoundEffect4(audioDevice *QAudioDevice, parent *qt6.QObject) *QSoundEffect {
	ret := C.QSoundEffect_new4(audioDevice.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQSoundEffect(ret)
}

func (this *QSoundEffect) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSoundEffect_MetaObject(this.h)))
}

func (this *QSoundEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSoundEffect_Metacast(this.h, param1_Cstring))
}

func QSoundEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSoundEffect_SupportedMimeTypes() []string {
	var _ma C.struct_miqt_array = C.QSoundEffect_SupportedMimeTypes()
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

func (this *QSoundEffect) Source() *qt6.QUrl {
	_ret := C.QSoundEffect_Source(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSoundEffect) SetSource(url *qt6.QUrl) {
	C.QSoundEffect_SetSource(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QSoundEffect) LoopCount() int {
	return (int)(C.QSoundEffect_LoopCount(this.h))
}

func (this *QSoundEffect) LoopsRemaining() int {
	return (int)(C.QSoundEffect_LoopsRemaining(this.h))
}

func (this *QSoundEffect) SetLoopCount(loopCount int) {
	C.QSoundEffect_SetLoopCount(this.h, (C.int)(loopCount))
}

func (this *QSoundEffect) AudioDevice() *QAudioDevice {
	_ret := C.QSoundEffect_AudioDevice(this.h)
	_goptr := newQAudioDevice(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSoundEffect) SetAudioDevice(device *QAudioDevice) {
	C.QSoundEffect_SetAudioDevice(this.h, device.cPointer())
}

func (this *QSoundEffect) Volume() float32 {
	return (float32)(C.QSoundEffect_Volume(this.h))
}

func (this *QSoundEffect) SetVolume(volume float32) {
	C.QSoundEffect_SetVolume(this.h, (C.float)(volume))
}

func (this *QSoundEffect) IsMuted() bool {
	return (bool)(C.QSoundEffect_IsMuted(this.h))
}

func (this *QSoundEffect) SetMuted(muted bool) {
	C.QSoundEffect_SetMuted(this.h, (C.bool)(muted))
}

func (this *QSoundEffect) IsLoaded() bool {
	return (bool)(C.QSoundEffect_IsLoaded(this.h))
}

func (this *QSoundEffect) IsPlaying() bool {
	return (bool)(C.QSoundEffect_IsPlaying(this.h))
}

func (this *QSoundEffect) Status() QSoundEffect__Status {
	return (QSoundEffect__Status)(C.QSoundEffect_Status(this.h))
}

func (this *QSoundEffect) SourceChanged() {
	C.QSoundEffect_SourceChanged(this.h)
}
func (this *QSoundEffect) OnSourceChanged(slot func()) {
	C.QSoundEffect_connect_SourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_SourceChanged
func miqt_exec_callback_QSoundEffect_SourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) LoopCountChanged() {
	C.QSoundEffect_LoopCountChanged(this.h)
}
func (this *QSoundEffect) OnLoopCountChanged(slot func()) {
	C.QSoundEffect_connect_LoopCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_LoopCountChanged
func miqt_exec_callback_QSoundEffect_LoopCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) LoopsRemainingChanged() {
	C.QSoundEffect_LoopsRemainingChanged(this.h)
}
func (this *QSoundEffect) OnLoopsRemainingChanged(slot func()) {
	C.QSoundEffect_connect_LoopsRemainingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_LoopsRemainingChanged
func miqt_exec_callback_QSoundEffect_LoopsRemainingChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) VolumeChanged() {
	C.QSoundEffect_VolumeChanged(this.h)
}
func (this *QSoundEffect) OnVolumeChanged(slot func()) {
	C.QSoundEffect_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_VolumeChanged
func miqt_exec_callback_QSoundEffect_VolumeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) MutedChanged() {
	C.QSoundEffect_MutedChanged(this.h)
}
func (this *QSoundEffect) OnMutedChanged(slot func()) {
	C.QSoundEffect_connect_MutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_MutedChanged
func miqt_exec_callback_QSoundEffect_MutedChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) LoadedChanged() {
	C.QSoundEffect_LoadedChanged(this.h)
}
func (this *QSoundEffect) OnLoadedChanged(slot func()) {
	C.QSoundEffect_connect_LoadedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_LoadedChanged
func miqt_exec_callback_QSoundEffect_LoadedChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) PlayingChanged() {
	C.QSoundEffect_PlayingChanged(this.h)
}
func (this *QSoundEffect) OnPlayingChanged(slot func()) {
	C.QSoundEffect_connect_PlayingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_PlayingChanged
func miqt_exec_callback_QSoundEffect_PlayingChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) StatusChanged() {
	C.QSoundEffect_StatusChanged(this.h)
}
func (this *QSoundEffect) OnStatusChanged(slot func()) {
	C.QSoundEffect_connect_StatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_StatusChanged
func miqt_exec_callback_QSoundEffect_StatusChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) AudioDeviceChanged() {
	C.QSoundEffect_AudioDeviceChanged(this.h)
}
func (this *QSoundEffect) OnAudioDeviceChanged(slot func()) {
	C.QSoundEffect_connect_AudioDeviceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_AudioDeviceChanged
func miqt_exec_callback_QSoundEffect_AudioDeviceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) Play() {
	C.QSoundEffect_Play(this.h)
}

func (this *QSoundEffect) Stop() {
	C.QSoundEffect_Stop(this.h)
}

func QSoundEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSoundEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSoundEffect) Delete() {
	C.QSoundEffect_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSoundEffect) GoGC() {
	runtime.SetFinalizer(this, func(this *QSoundEffect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
