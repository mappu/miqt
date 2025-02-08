package multimedia

/*

#include "gen_qsoundeffect.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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
	*qt.QObject
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

// newQSoundEffect constructs the type using only CGO pointers.
func newQSoundEffect(h *C.QSoundEffect) *QSoundEffect {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSoundEffect_virtbase(h, &outptr_QObject)

	return &QSoundEffect{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQSoundEffect constructs the type using only unsafe pointers.
func UnsafeNewQSoundEffect(h unsafe.Pointer) *QSoundEffect {
	return newQSoundEffect((*C.QSoundEffect)(h))
}

// NewQSoundEffect constructs a new QSoundEffect object.
func NewQSoundEffect() *QSoundEffect {

	return newQSoundEffect(C.QSoundEffect_new())
}

// NewQSoundEffect2 constructs a new QSoundEffect object.
func NewQSoundEffect2(audioDevice *QAudioDeviceInfo) *QSoundEffect {

	return newQSoundEffect(C.QSoundEffect_new2(audioDevice.cPointer()))
}

// NewQSoundEffect3 constructs a new QSoundEffect object.
func NewQSoundEffect3(parent *qt.QObject) *QSoundEffect {

	return newQSoundEffect(C.QSoundEffect_new3((*C.QObject)(parent.UnsafePointer())))
}

// NewQSoundEffect4 constructs a new QSoundEffect object.
func NewQSoundEffect4(audioDevice *QAudioDeviceInfo, parent *qt.QObject) *QSoundEffect {

	return newQSoundEffect(C.QSoundEffect_new4(audioDevice.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QSoundEffect) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSoundEffect_metaObject(this.h)))
}

func (this *QSoundEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSoundEffect_metacast(this.h, param1_Cstring))
}

func QSoundEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSoundEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSoundEffect_SupportedMimeTypes() []string {
	var _ma C.struct_miqt_array = C.QSoundEffect_supportedMimeTypes()
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

func (this *QSoundEffect) Source() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QSoundEffect_source(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSoundEffect) SetSource(url *qt.QUrl) {
	C.QSoundEffect_setSource(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QSoundEffect) LoopCount() int {
	return (int)(C.QSoundEffect_loopCount(this.h))
}

func (this *QSoundEffect) LoopsRemaining() int {
	return (int)(C.QSoundEffect_loopsRemaining(this.h))
}

func (this *QSoundEffect) SetLoopCount(loopCount int) {
	C.QSoundEffect_setLoopCount(this.h, (C.int)(loopCount))
}

func (this *QSoundEffect) Volume() float64 {
	return (float64)(C.QSoundEffect_volume(this.h))
}

func (this *QSoundEffect) SetVolume(volume float64) {
	C.QSoundEffect_setVolume(this.h, (C.double)(volume))
}

func (this *QSoundEffect) IsMuted() bool {
	return (bool)(C.QSoundEffect_isMuted(this.h))
}

func (this *QSoundEffect) SetMuted(muted bool) {
	C.QSoundEffect_setMuted(this.h, (C.bool)(muted))
}

func (this *QSoundEffect) IsLoaded() bool {
	return (bool)(C.QSoundEffect_isLoaded(this.h))
}

func (this *QSoundEffect) IsPlaying() bool {
	return (bool)(C.QSoundEffect_isPlaying(this.h))
}

func (this *QSoundEffect) Status() QSoundEffect__Status {
	return (QSoundEffect__Status)(C.QSoundEffect_status(this.h))
}

func (this *QSoundEffect) Category() string {
	var _ms C.struct_miqt_string = C.QSoundEffect_category(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSoundEffect) SetCategory(category string) {
	category_ms := C.struct_miqt_string{}
	category_ms.data = C.CString(category)
	category_ms.len = C.size_t(len(category))
	defer C.free(unsafe.Pointer(category_ms.data))
	C.QSoundEffect_setCategory(this.h, category_ms)
}

func (this *QSoundEffect) SourceChanged() {
	C.QSoundEffect_sourceChanged(this.h)
}
func (this *QSoundEffect) OnSourceChanged(slot func()) {
	C.QSoundEffect_connect_sourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_sourceChanged
func miqt_exec_callback_QSoundEffect_sourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) LoopCountChanged() {
	C.QSoundEffect_loopCountChanged(this.h)
}
func (this *QSoundEffect) OnLoopCountChanged(slot func()) {
	C.QSoundEffect_connect_loopCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_loopCountChanged
func miqt_exec_callback_QSoundEffect_loopCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) LoopsRemainingChanged() {
	C.QSoundEffect_loopsRemainingChanged(this.h)
}
func (this *QSoundEffect) OnLoopsRemainingChanged(slot func()) {
	C.QSoundEffect_connect_loopsRemainingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_loopsRemainingChanged
func miqt_exec_callback_QSoundEffect_loopsRemainingChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) VolumeChanged() {
	C.QSoundEffect_volumeChanged(this.h)
}
func (this *QSoundEffect) OnVolumeChanged(slot func()) {
	C.QSoundEffect_connect_volumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_volumeChanged
func miqt_exec_callback_QSoundEffect_volumeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) MutedChanged() {
	C.QSoundEffect_mutedChanged(this.h)
}
func (this *QSoundEffect) OnMutedChanged(slot func()) {
	C.QSoundEffect_connect_mutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_mutedChanged
func miqt_exec_callback_QSoundEffect_mutedChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) LoadedChanged() {
	C.QSoundEffect_loadedChanged(this.h)
}
func (this *QSoundEffect) OnLoadedChanged(slot func()) {
	C.QSoundEffect_connect_loadedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_loadedChanged
func miqt_exec_callback_QSoundEffect_loadedChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) PlayingChanged() {
	C.QSoundEffect_playingChanged(this.h)
}
func (this *QSoundEffect) OnPlayingChanged(slot func()) {
	C.QSoundEffect_connect_playingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_playingChanged
func miqt_exec_callback_QSoundEffect_playingChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) StatusChanged() {
	C.QSoundEffect_statusChanged(this.h)
}
func (this *QSoundEffect) OnStatusChanged(slot func()) {
	C.QSoundEffect_connect_statusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_statusChanged
func miqt_exec_callback_QSoundEffect_statusChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) CategoryChanged() {
	C.QSoundEffect_categoryChanged(this.h)
}
func (this *QSoundEffect) OnCategoryChanged(slot func()) {
	C.QSoundEffect_connect_categoryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSoundEffect_categoryChanged
func miqt_exec_callback_QSoundEffect_categoryChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSoundEffect) Play() {
	C.QSoundEffect_play(this.h)
}

func (this *QSoundEffect) Stop() {
	C.QSoundEffect_stop(this.h)
}

func QSoundEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSoundEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSoundEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSoundEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSoundEffect_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QSoundEffect that was directly constructed.
func (this *QSoundEffect) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QSoundEffect_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSoundEffect that was directly constructed.
func (this *QSoundEffect) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSoundEffect_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSoundEffect that was directly constructed.
func (this *QSoundEffect) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSoundEffect_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSoundEffect that was directly constructed.
func (this *QSoundEffect) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSoundEffect_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSoundEffect) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QSoundEffect_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSoundEffect) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QSoundEffect_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSoundEffect_event
func miqt_exec_callback_QSoundEffect_event(self *C.QSoundEffect, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSoundEffect{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSoundEffect) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QSoundEffect_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSoundEffect) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QSoundEffect_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSoundEffect_eventFilter
func miqt_exec_callback_QSoundEffect_eventFilter(self *C.QSoundEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSoundEffect{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSoundEffect) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QSoundEffect_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSoundEffect) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QSoundEffect_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSoundEffect_timerEvent
func miqt_exec_callback_QSoundEffect_timerEvent(self *C.QSoundEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSoundEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSoundEffect) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QSoundEffect_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSoundEffect) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QSoundEffect_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSoundEffect_childEvent
func miqt_exec_callback_QSoundEffect_childEvent(self *C.QSoundEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSoundEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSoundEffect) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QSoundEffect_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSoundEffect) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSoundEffect_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSoundEffect_customEvent
func miqt_exec_callback_QSoundEffect_customEvent(self *C.QSoundEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSoundEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSoundEffect) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QSoundEffect_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSoundEffect) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSoundEffect_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSoundEffect_connectNotify
func miqt_exec_callback_QSoundEffect_connectNotify(self *C.QSoundEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSoundEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSoundEffect) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QSoundEffect_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSoundEffect) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSoundEffect_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSoundEffect_disconnectNotify
func miqt_exec_callback_QSoundEffect_disconnectNotify(self *C.QSoundEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSoundEffect{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSoundEffect) Delete() {
	C.QSoundEffect_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSoundEffect) GoGC() {
	runtime.SetFinalizer(this, func(this *QSoundEffect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
