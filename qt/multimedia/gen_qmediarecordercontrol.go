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

func newQMediaRecorderControl(h *C.QMediaRecorderControl) *QMediaRecorderControl {
	if h == nil {
		return nil
	}
	return &QMediaRecorderControl{h: h, QMediaControl: UnsafeNewQMediaControl(unsafe.Pointer(h))}
}

func UnsafeNewQMediaRecorderControl(h unsafe.Pointer) *QMediaRecorderControl {
	return newQMediaRecorderControl((*C.QMediaRecorderControl)(h))
}

func (this *QMediaRecorderControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaRecorderControl_MetaObject(this.h)))
}

func (this *QMediaRecorderControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaRecorderControl_Metacast(this.h, param1_Cstring))
}

func QMediaRecorderControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorderControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaRecorderControl) OutputLocation() *qt.QUrl {
	_ret := C.QMediaRecorderControl_OutputLocation(this.h)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaRecorderControl) SetOutputLocation(location *qt.QUrl) bool {
	return (bool)(C.QMediaRecorderControl_SetOutputLocation(this.h, (*C.QUrl)(location.UnsafePointer())))
}

func (this *QMediaRecorderControl) State() QMediaRecorder__State {
	return (QMediaRecorder__State)(C.QMediaRecorderControl_State(this.h))
}

func (this *QMediaRecorderControl) Status() QMediaRecorder__Status {
	return (QMediaRecorder__Status)(C.QMediaRecorderControl_Status(this.h))
}

func (this *QMediaRecorderControl) Duration() int64 {
	return (int64)(C.QMediaRecorderControl_Duration(this.h))
}

func (this *QMediaRecorderControl) IsMuted() bool {
	return (bool)(C.QMediaRecorderControl_IsMuted(this.h))
}

func (this *QMediaRecorderControl) Volume() float64 {
	return (float64)(C.QMediaRecorderControl_Volume(this.h))
}

func (this *QMediaRecorderControl) ApplySettings() {
	C.QMediaRecorderControl_ApplySettings(this.h)
}

func (this *QMediaRecorderControl) StateChanged(state QMediaRecorder__State) {
	C.QMediaRecorderControl_StateChanged(this.h, (C.int)(state))
}
func (this *QMediaRecorderControl) OnStateChanged(slot func(state QMediaRecorder__State)) {
	C.QMediaRecorderControl_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_StateChanged
func miqt_exec_callback_QMediaRecorderControl_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QMediaRecorder__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__State)(state)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) StatusChanged(status QMediaRecorder__Status) {
	C.QMediaRecorderControl_StatusChanged(this.h, (C.int)(status))
}
func (this *QMediaRecorderControl) OnStatusChanged(slot func(status QMediaRecorder__Status)) {
	C.QMediaRecorderControl_connect_StatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_StatusChanged
func miqt_exec_callback_QMediaRecorderControl_StatusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QMediaRecorder__Status))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaRecorder__Status)(status)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) DurationChanged(position int64) {
	C.QMediaRecorderControl_DurationChanged(this.h, (C.longlong)(position))
}
func (this *QMediaRecorderControl) OnDurationChanged(slot func(position int64)) {
	C.QMediaRecorderControl_connect_DurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_DurationChanged
func miqt_exec_callback_QMediaRecorderControl_DurationChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) MutedChanged(muted bool) {
	C.QMediaRecorderControl_MutedChanged(this.h, (C.bool)(muted))
}
func (this *QMediaRecorderControl) OnMutedChanged(slot func(muted bool)) {
	C.QMediaRecorderControl_connect_MutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_MutedChanged
func miqt_exec_callback_QMediaRecorderControl_MutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) VolumeChanged(volume float64) {
	C.QMediaRecorderControl_VolumeChanged(this.h, (C.double)(volume))
}
func (this *QMediaRecorderControl) OnVolumeChanged(slot func(volume float64)) {
	C.QMediaRecorderControl_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_VolumeChanged
func miqt_exec_callback_QMediaRecorderControl_VolumeChanged(cb C.intptr_t, volume C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(volume)

	gofunc(slotval1)
}

func (this *QMediaRecorderControl) ActualLocationChanged(location *qt.QUrl) {
	C.QMediaRecorderControl_ActualLocationChanged(this.h, (*C.QUrl)(location.UnsafePointer()))
}
func (this *QMediaRecorderControl) OnActualLocationChanged(slot func(location *qt.QUrl)) {
	C.QMediaRecorderControl_connect_ActualLocationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_ActualLocationChanged
func miqt_exec_callback_QMediaRecorderControl_ActualLocationChanged(cb C.intptr_t, location *C.QUrl) {
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
	C.QMediaRecorderControl_Error(this.h, (C.int)(error), errorString_ms)
}
func (this *QMediaRecorderControl) OnError(slot func(error int, errorString string)) {
	C.QMediaRecorderControl_connect_Error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaRecorderControl_Error
func miqt_exec_callback_QMediaRecorderControl_Error(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
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
	C.QMediaRecorderControl_SetState(this.h, (C.int)(state))
}

func (this *QMediaRecorderControl) SetMuted(muted bool) {
	C.QMediaRecorderControl_SetMuted(this.h, (C.bool)(muted))
}

func (this *QMediaRecorderControl) SetVolume(volume float64) {
	C.QMediaRecorderControl_SetVolume(this.h, (C.double)(volume))
}

func QMediaRecorderControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorderControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorderControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaRecorderControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaRecorderControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaRecorderControl) Delete() {
	C.QMediaRecorderControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaRecorderControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaRecorderControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
