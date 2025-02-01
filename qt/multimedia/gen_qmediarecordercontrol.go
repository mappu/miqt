package multimedia

/*

#include "gen_qmediarecordercontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaRecorderControl struct {
	h *C.QMediaRecorderControl
	*QMediaControl
}

func (this *QMediaRecorderControl) cPointer() *C.QMediaRecorderControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaRecorderControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaRecorderControl constructs the type using only CGO pointers.
func newQMediaRecorderControl(h *C.QMediaRecorderControl) *QMediaRecorderControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QMediaRecorderControl_virtbase(h, &outptr_QMediaControl)

	return &QMediaRecorderControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQMediaRecorderControl constructs the type using only unsafe pointers.
func UnsafeNewQMediaRecorderControl(h unsafe.Pointer) *QMediaRecorderControl {
	return newQMediaRecorderControl((*C.QMediaRecorderControl)(h))
}

func (this *QMediaRecorderControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaRecorderControl_metaObject(this.h)))
}

func (this *QMediaRecorderControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaRecorderControl_metacast(this.h, param1_Cstring))
}

func QMediaRecorderControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorderControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorderControl) OutputLocation() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QMediaRecorderControl_outputLocation(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorderControl) SetOutputLocation(location *qt.QUrl) bool {
	return (bool)(C.QMediaRecorderControl_setOutputLocation(this.h, (*C.QUrl)(location.UnsafePointer())))
}

func (this *QMediaRecorderControl) State() QMediaRecorder__State {
	return (QMediaRecorder__State)(C.QMediaRecorderControl_state(this.h))
}

func (this *QMediaRecorderControl) Status() QMediaRecorder__Status {
	return (QMediaRecorder__Status)(C.QMediaRecorderControl_status(this.h))
}

func (this *QMediaRecorderControl) Duration() int64 {
	return (int64)(C.QMediaRecorderControl_duration(this.h))
}

func (this *QMediaRecorderControl) IsMuted() bool {
	return (bool)(C.QMediaRecorderControl_isMuted(this.h))
}

func (this *QMediaRecorderControl) Volume() float64 {
	return (float64)(C.QMediaRecorderControl_volume(this.h))
}

func (this *QMediaRecorderControl) ApplySettings() {
	C.QMediaRecorderControl_applySettings(this.h)
}

func (this *QMediaRecorderControl) StateChanged(state QMediaRecorder__State) {
	C.QMediaRecorderControl_stateChanged(this.h, (C.int)(state))
}
func (this *QMediaRecorderControl) OnStateChanged(slot func(state QMediaRecorder__State)) {
	C.QMediaRecorderControl_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_stateChanged
func miqt_exec_callback_QMediaRecorderControl_stateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QMediaRecorder__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__State)(state)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) StatusChanged(status QMediaRecorder__Status) {
	C.QMediaRecorderControl_statusChanged(this.h, (C.int)(status))
}
func (this *QMediaRecorderControl) OnStatusChanged(slot func(status QMediaRecorder__Status)) {
	C.QMediaRecorderControl_connect_statusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_statusChanged
func miqt_exec_callback_QMediaRecorderControl_statusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QMediaRecorder__Status))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__Status)(status)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) DurationChanged(position int64) {
	C.QMediaRecorderControl_durationChanged(this.h, (C.longlong)(position))
}
func (this *QMediaRecorderControl) OnDurationChanged(slot func(position int64)) {
	C.QMediaRecorderControl_connect_durationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_durationChanged
func miqt_exec_callback_QMediaRecorderControl_durationChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) MutedChanged(muted bool) {
	C.QMediaRecorderControl_mutedChanged(this.h, (C.bool)(muted))
}
func (this *QMediaRecorderControl) OnMutedChanged(slot func(muted bool)) {
	C.QMediaRecorderControl_connect_mutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_mutedChanged
func miqt_exec_callback_QMediaRecorderControl_mutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) VolumeChanged(volume float64) {
	C.QMediaRecorderControl_volumeChanged(this.h, (C.double)(volume))
}
func (this *QMediaRecorderControl) OnVolumeChanged(slot func(volume float64)) {
	C.QMediaRecorderControl_connect_volumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_volumeChanged
func miqt_exec_callback_QMediaRecorderControl_volumeChanged(cb C.intptr_t, volume C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(volume)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) ActualLocationChanged(location *qt.QUrl) {
	C.QMediaRecorderControl_actualLocationChanged(this.h, (*C.QUrl)(location.UnsafePointer()))
}
func (this *QMediaRecorderControl) OnActualLocationChanged(slot func(location *qt.QUrl)) {
	C.QMediaRecorderControl_connect_actualLocationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_actualLocationChanged
func miqt_exec_callback_QMediaRecorderControl_actualLocationChanged(cb C.intptr_t, location *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(location *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(location))

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) Error(error int, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QMediaRecorderControl_error(this.h, (C.int)(error), errorString_ms)
}
func (this *QMediaRecorderControl) OnError(slot func(error int, errorString string)) {
	C.QMediaRecorderControl_connect_error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_error
func miqt_exec_callback_QMediaRecorderControl_error(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
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

func (this *QMediaRecorderControl) SetState(state QMediaRecorder__State) {
	C.QMediaRecorderControl_setState(this.h, (C.int)(state))
}

func (this *QMediaRecorderControl) SetMuted(muted bool) {
	C.QMediaRecorderControl_setMuted(this.h, (C.bool)(muted))
}

func (this *QMediaRecorderControl) SetVolume(volume float64) {
	C.QMediaRecorderControl_setVolume(this.h, (C.double)(volume))
}

func QMediaRecorderControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorderControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorderControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorderControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaRecorderControl) Delete() {
	C.QMediaRecorderControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaRecorderControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaRecorderControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
