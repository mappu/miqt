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

func newQAmbientSound(h *C.QAmbientSound) *QAmbientSound {
	if h == nil {
		return nil
	}
	return &QAmbientSound{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAmbientSound(h unsafe.Pointer) *QAmbientSound {
	return newQAmbientSound((*C.QAmbientSound)(h))
}

// NewQAmbientSound constructs a new QAmbientSound object.
func NewQAmbientSound(engine *QAudioEngine) *QAmbientSound {
	ret := C.QAmbientSound_new(engine.cPointer())
	return newQAmbientSound(ret)
}

func (this *QAmbientSound) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAmbientSound_MetaObject(this.h)))
}

func (this *QAmbientSound) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAmbientSound_Metacast(this.h, param1_Cstring))
}

func QAmbientSound_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAmbientSound_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAmbientSound) SetSource(url *qt6.QUrl) {
	C.QAmbientSound_SetSource(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QAmbientSound) Source() *qt6.QUrl {
	_ret := C.QAmbientSound_Source(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAmbientSound) Loops() int {
	return (int)(C.QAmbientSound_Loops(this.h))
}

func (this *QAmbientSound) SetLoops(loops int) {
	C.QAmbientSound_SetLoops(this.h, (C.int)(loops))
}

func (this *QAmbientSound) AutoPlay() bool {
	return (bool)(C.QAmbientSound_AutoPlay(this.h))
}

func (this *QAmbientSound) SetAutoPlay(autoPlay bool) {
	C.QAmbientSound_SetAutoPlay(this.h, (C.bool)(autoPlay))
}

func (this *QAmbientSound) SetVolume(volume float32) {
	C.QAmbientSound_SetVolume(this.h, (C.float)(volume))
}

func (this *QAmbientSound) Volume() float32 {
	return (float32)(C.QAmbientSound_Volume(this.h))
}

func (this *QAmbientSound) Engine() *QAudioEngine {
	return UnsafeNewQAudioEngine(unsafe.Pointer(C.QAmbientSound_Engine(this.h)))
}

func (this *QAmbientSound) SourceChanged() {
	C.QAmbientSound_SourceChanged(this.h)
}
func (this *QAmbientSound) OnSourceChanged(slot func()) {
	C.QAmbientSound_connect_SourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAmbientSound_SourceChanged
func miqt_exec_callback_QAmbientSound_SourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAmbientSound) LoopsChanged() {
	C.QAmbientSound_LoopsChanged(this.h)
}
func (this *QAmbientSound) OnLoopsChanged(slot func()) {
	C.QAmbientSound_connect_LoopsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAmbientSound_LoopsChanged
func miqt_exec_callback_QAmbientSound_LoopsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAmbientSound) AutoPlayChanged() {
	C.QAmbientSound_AutoPlayChanged(this.h)
}
func (this *QAmbientSound) OnAutoPlayChanged(slot func()) {
	C.QAmbientSound_connect_AutoPlayChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAmbientSound_AutoPlayChanged
func miqt_exec_callback_QAmbientSound_AutoPlayChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAmbientSound) VolumeChanged() {
	C.QAmbientSound_VolumeChanged(this.h)
}
func (this *QAmbientSound) OnVolumeChanged(slot func()) {
	C.QAmbientSound_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAmbientSound_VolumeChanged
func miqt_exec_callback_QAmbientSound_VolumeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAmbientSound) Play() {
	C.QAmbientSound_Play(this.h)
}

func (this *QAmbientSound) Pause() {
	C.QAmbientSound_Pause(this.h)
}

func (this *QAmbientSound) Stop() {
	C.QAmbientSound_Stop(this.h)
}

func QAmbientSound_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAmbientSound_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAmbientSound_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAmbientSound_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAmbientSound) Delete() {
	C.QAmbientSound_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAmbientSound) GoGC() {
	runtime.SetFinalizer(this, func(this *QAmbientSound) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
