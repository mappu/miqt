package multimedia

/*

#include "gen_qaudiodecodercontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioDecoderControl struct {
	h *C.QAudioDecoderControl
	*QMediaControl
}

func (this *QAudioDecoderControl) cPointer() *C.QAudioDecoderControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioDecoderControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioDecoderControl constructs the type using only CGO pointers.
func newQAudioDecoderControl(h *C.QAudioDecoderControl) *QAudioDecoderControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QAudioDecoderControl_virtbase(h, &outptr_QMediaControl)

	return &QAudioDecoderControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQAudioDecoderControl constructs the type using only unsafe pointers.
func UnsafeNewQAudioDecoderControl(h unsafe.Pointer) *QAudioDecoderControl {
	return newQAudioDecoderControl((*C.QAudioDecoderControl)(h))
}

func (this *QAudioDecoderControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioDecoderControl_metaObject(this.h)))
}

func (this *QAudioDecoderControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioDecoderControl_metacast(this.h, param1_Cstring))
}

func QAudioDecoderControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoderControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoderControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoderControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoderControl) State() QAudioDecoder__State {
	return (QAudioDecoder__State)(C.QAudioDecoderControl_state(this.h))
}

func (this *QAudioDecoderControl) SourceFilename() string {
	var _ms C.struct_miqt_string = C.QAudioDecoderControl_sourceFilename(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoderControl) SetSourceFilename(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QAudioDecoderControl_setSourceFilename(this.h, fileName_ms)
}

func (this *QAudioDecoderControl) SourceDevice() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioDecoderControl_sourceDevice(this.h)))
}

func (this *QAudioDecoderControl) SetSourceDevice(device *qt.QIODevice) {
	C.QAudioDecoderControl_setSourceDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioDecoderControl) Start() {
	C.QAudioDecoderControl_start(this.h)
}

func (this *QAudioDecoderControl) Stop() {
	C.QAudioDecoderControl_stop(this.h)
}

func (this *QAudioDecoderControl) AudioFormat() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioDecoderControl_audioFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoderControl) SetAudioFormat(format *QAudioFormat) {
	C.QAudioDecoderControl_setAudioFormat(this.h, format.cPointer())
}

func (this *QAudioDecoderControl) Read() *QAudioBuffer {
	_goptr := newQAudioBuffer(C.QAudioDecoderControl_read(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoderControl) BufferAvailable() bool {
	return (bool)(C.QAudioDecoderControl_bufferAvailable(this.h))
}

func (this *QAudioDecoderControl) Position() int64 {
	return (int64)(C.QAudioDecoderControl_position(this.h))
}

func (this *QAudioDecoderControl) Duration() int64 {
	return (int64)(C.QAudioDecoderControl_duration(this.h))
}

func (this *QAudioDecoderControl) StateChanged(newState QAudioDecoder__State) {
	C.QAudioDecoderControl_stateChanged(this.h, (C.int)(newState))
}
func (this *QAudioDecoderControl) OnStateChanged(slot func(newState QAudioDecoder__State)) {
	C.QAudioDecoderControl_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_stateChanged
func miqt_exec_callback_QAudioDecoderControl_stateChanged(cb C.intptr_t, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QAudioDecoder__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudioDecoder__State)(newState)

	gofunc(slotval1)
}

func (this *QAudioDecoderControl) FormatChanged(format *QAudioFormat) {
	C.QAudioDecoderControl_formatChanged(this.h, format.cPointer())
}
func (this *QAudioDecoderControl) OnFormatChanged(slot func(format *QAudioFormat)) {
	C.QAudioDecoderControl_connect_formatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_formatChanged
func miqt_exec_callback_QAudioDecoderControl_formatChanged(cb C.intptr_t, format *C.QAudioFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format *QAudioFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAudioFormat(format)

	gofunc(slotval1)
}

func (this *QAudioDecoderControl) SourceChanged() {
	C.QAudioDecoderControl_sourceChanged(this.h)
}
func (this *QAudioDecoderControl) OnSourceChanged(slot func()) {
	C.QAudioDecoderControl_connect_sourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_sourceChanged
func miqt_exec_callback_QAudioDecoderControl_sourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoderControl) Error(error int, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QAudioDecoderControl_error(this.h, (C.int)(error), errorString_ms)
}
func (this *QAudioDecoderControl) OnError(slot func(error int, errorString string)) {
	C.QAudioDecoderControl_connect_error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_error
func miqt_exec_callback_QAudioDecoderControl_error(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
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

func (this *QAudioDecoderControl) BufferReady() {
	C.QAudioDecoderControl_bufferReady(this.h)
}
func (this *QAudioDecoderControl) OnBufferReady(slot func()) {
	C.QAudioDecoderControl_connect_bufferReady(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_bufferReady
func miqt_exec_callback_QAudioDecoderControl_bufferReady(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoderControl) BufferAvailableChanged(available bool) {
	C.QAudioDecoderControl_bufferAvailableChanged(this.h, (C.bool)(available))
}
func (this *QAudioDecoderControl) OnBufferAvailableChanged(slot func(available bool)) {
	C.QAudioDecoderControl_connect_bufferAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_bufferAvailableChanged
func miqt_exec_callback_QAudioDecoderControl_bufferAvailableChanged(cb C.intptr_t, available C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(available bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(available)

	gofunc(slotval1)
}

func (this *QAudioDecoderControl) Finished() {
	C.QAudioDecoderControl_finished(this.h)
}
func (this *QAudioDecoderControl) OnFinished(slot func()) {
	C.QAudioDecoderControl_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_finished
func miqt_exec_callback_QAudioDecoderControl_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoderControl) PositionChanged(position int64) {
	C.QAudioDecoderControl_positionChanged(this.h, (C.longlong)(position))
}
func (this *QAudioDecoderControl) OnPositionChanged(slot func(position int64)) {
	C.QAudioDecoderControl_connect_positionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_positionChanged
func miqt_exec_callback_QAudioDecoderControl_positionChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QAudioDecoderControl) DurationChanged(duration int64) {
	C.QAudioDecoderControl_durationChanged(this.h, (C.longlong)(duration))
}
func (this *QAudioDecoderControl) OnDurationChanged(slot func(duration int64)) {
	C.QAudioDecoderControl_connect_durationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoderControl_durationChanged
func miqt_exec_callback_QAudioDecoderControl_durationChanged(cb C.intptr_t, duration C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(duration int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(duration)

	gofunc(slotval1)
}

func QAudioDecoderControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoderControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoderControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoderControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoderControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoderControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoderControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoderControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioDecoderControl) Delete() {
	C.QAudioDecoderControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioDecoderControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioDecoderControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
