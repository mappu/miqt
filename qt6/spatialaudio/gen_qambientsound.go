package spatialaudio

/*

#include "gen_qambientsound.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAmbientSound__Loops int

const (
	QAmbientSound__Infinite QAmbientSound__Loops = -1
	QAmbientSound__Once     QAmbientSound__Loops = 1
)

type QAmbientSound struct {
	h *C.QAmbientSound
	*qt6.QObject
}

func (this *QAmbientSound) cPointer() *C.QAmbientSound {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAmbientSound) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAmbientSound constructs the type using only CGO pointers.
func newQAmbientSound(h *C.QAmbientSound) *QAmbientSound {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAmbientSound_virtbase(h, &outptr_QObject)

	return &QAmbientSound{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAmbientSound constructs the type using only unsafe pointers.
func UnsafeNewQAmbientSound(h unsafe.Pointer) *QAmbientSound {
	return newQAmbientSound((*C.QAmbientSound)(h))
}

// NewQAmbientSound constructs a new QAmbientSound object.
func NewQAmbientSound(engine *QAudioEngine) *QAmbientSound {

	return newQAmbientSound(C.QAmbientSound_new(engine.cPointer()))
}

func (this *QAmbientSound) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAmbientSound_metaObject(this.h)))
}

func (this *QAmbientSound) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAmbientSound_metacast(this.h, param1_Cstring))
}

func QAmbientSound_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAmbientSound_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAmbientSound) SetSource(url *qt6.QUrl) {
	C.QAmbientSound_setSource(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QAmbientSound) Source() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QAmbientSound_source(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAmbientSound) Loops() int {
	return (int)(C.QAmbientSound_loops(this.h))
}

func (this *QAmbientSound) SetLoops(loops int) {
	C.QAmbientSound_setLoops(this.h, (C.int)(loops))
}

func (this *QAmbientSound) AutoPlay() bool {
	return (bool)(C.QAmbientSound_autoPlay(this.h))
}

func (this *QAmbientSound) SetAutoPlay(autoPlay bool) {
	C.QAmbientSound_setAutoPlay(this.h, (C.bool)(autoPlay))
}

func (this *QAmbientSound) SetVolume(volume float32) {
	C.QAmbientSound_setVolume(this.h, (C.float)(volume))
}

func (this *QAmbientSound) Volume() float32 {
	return (float32)(C.QAmbientSound_volume(this.h))
}

func (this *QAmbientSound) Engine() *QAudioEngine {
	return newQAudioEngine(C.QAmbientSound_engine(this.h))
}

func (this *QAmbientSound) SourceChanged() {
	C.QAmbientSound_sourceChanged(this.h)
}
func (this *QAmbientSound) OnSourceChanged(slot func()) {
	C.QAmbientSound_connect_sourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAmbientSound_sourceChanged
func miqt_exec_callback_QAmbientSound_sourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAmbientSound) LoopsChanged() {
	C.QAmbientSound_loopsChanged(this.h)
}
func (this *QAmbientSound) OnLoopsChanged(slot func()) {
	C.QAmbientSound_connect_loopsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAmbientSound_loopsChanged
func miqt_exec_callback_QAmbientSound_loopsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAmbientSound) AutoPlayChanged() {
	C.QAmbientSound_autoPlayChanged(this.h)
}
func (this *QAmbientSound) OnAutoPlayChanged(slot func()) {
	C.QAmbientSound_connect_autoPlayChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAmbientSound_autoPlayChanged
func miqt_exec_callback_QAmbientSound_autoPlayChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAmbientSound) VolumeChanged() {
	C.QAmbientSound_volumeChanged(this.h)
}
func (this *QAmbientSound) OnVolumeChanged(slot func()) {
	C.QAmbientSound_connect_volumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAmbientSound_volumeChanged
func miqt_exec_callback_QAmbientSound_volumeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAmbientSound) Play() {
	C.QAmbientSound_play(this.h)
}

func (this *QAmbientSound) Pause() {
	C.QAmbientSound_pause(this.h)
}

func (this *QAmbientSound) Stop() {
	C.QAmbientSound_stop(this.h)
}

func QAmbientSound_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAmbientSound_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAmbientSound_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAmbientSound_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QAmbientSound that was directly constructed.
func (this *QAmbientSound) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QAmbientSound_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAmbientSound that was directly constructed.
func (this *QAmbientSound) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAmbientSound_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAmbientSound that was directly constructed.
func (this *QAmbientSound) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAmbientSound_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAmbientSound that was directly constructed.
func (this *QAmbientSound) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAmbientSound_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAmbientSound) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAmbientSound_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAmbientSound) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAmbientSound_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAmbientSound_event
func miqt_exec_callback_QAmbientSound_event(self *C.QAmbientSound, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAmbientSound{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAmbientSound) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QAmbientSound_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAmbientSound) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAmbientSound_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAmbientSound_eventFilter
func miqt_exec_callback_QAmbientSound_eventFilter(self *C.QAmbientSound, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAmbientSound{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAmbientSound) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QAmbientSound_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAmbientSound) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAmbientSound_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAmbientSound_timerEvent
func miqt_exec_callback_QAmbientSound_timerEvent(self *C.QAmbientSound, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAmbientSound{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAmbientSound) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAmbientSound_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAmbientSound) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAmbientSound_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAmbientSound_childEvent
func miqt_exec_callback_QAmbientSound_childEvent(self *C.QAmbientSound, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAmbientSound{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAmbientSound) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAmbientSound_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAmbientSound) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAmbientSound_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAmbientSound_customEvent
func miqt_exec_callback_QAmbientSound_customEvent(self *C.QAmbientSound, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAmbientSound{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAmbientSound) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAmbientSound_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAmbientSound) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAmbientSound_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAmbientSound_connectNotify
func miqt_exec_callback_QAmbientSound_connectNotify(self *C.QAmbientSound, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAmbientSound{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAmbientSound) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAmbientSound_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAmbientSound) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAmbientSound_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAmbientSound_disconnectNotify
func miqt_exec_callback_QAmbientSound_disconnectNotify(self *C.QAmbientSound, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAmbientSound{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAmbientSound) Delete() {
	C.QAmbientSound_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAmbientSound) GoGC() {
	runtime.SetFinalizer(this, func(this *QAmbientSound) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
