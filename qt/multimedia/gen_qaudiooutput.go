package multimedia

/*

#include "gen_qaudiooutput.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioOutput struct {
	h *C.QAudioOutput
	*qt.QObject
}

func (this *QAudioOutput) cPointer() *C.QAudioOutput {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioOutput) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioOutput(h *C.QAudioOutput) *QAudioOutput {
	if h == nil {
		return nil
	}
	return &QAudioOutput{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAudioOutput(h unsafe.Pointer) *QAudioOutput {
	return newQAudioOutput((*C.QAudioOutput)(h))
}

// NewQAudioOutput constructs a new QAudioOutput object.
func NewQAudioOutput() *QAudioOutput {
	ret := C.QAudioOutput_new()
	return newQAudioOutput(ret)
}

// NewQAudioOutput2 constructs a new QAudioOutput object.
func NewQAudioOutput2(audioDeviceInfo *QAudioDeviceInfo) *QAudioOutput {
	ret := C.QAudioOutput_new2(audioDeviceInfo.cPointer())
	return newQAudioOutput(ret)
}

// NewQAudioOutput3 constructs a new QAudioOutput object.
func NewQAudioOutput3(format *QAudioFormat) *QAudioOutput {
	ret := C.QAudioOutput_new3(format.cPointer())
	return newQAudioOutput(ret)
}

// NewQAudioOutput4 constructs a new QAudioOutput object.
func NewQAudioOutput4(format *QAudioFormat, parent *qt.QObject) *QAudioOutput {
	ret := C.QAudioOutput_new4(format.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQAudioOutput(ret)
}

// NewQAudioOutput5 constructs a new QAudioOutput object.
func NewQAudioOutput5(audioDeviceInfo *QAudioDeviceInfo, format *QAudioFormat) *QAudioOutput {
	ret := C.QAudioOutput_new5(audioDeviceInfo.cPointer(), format.cPointer())
	return newQAudioOutput(ret)
}

// NewQAudioOutput6 constructs a new QAudioOutput object.
func NewQAudioOutput6(audioDeviceInfo *QAudioDeviceInfo, format *QAudioFormat, parent *qt.QObject) *QAudioOutput {
	ret := C.QAudioOutput_new6(audioDeviceInfo.cPointer(), format.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQAudioOutput(ret)
}

func (this *QAudioOutput) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioOutput_MetaObject(this.h)))
}

func (this *QAudioOutput) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioOutput_Metacast(this.h, param1_Cstring))
}

func QAudioOutput_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutput_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioOutput) Format() *QAudioFormat {
	_ret := C.QAudioOutput_Format(this.h)
	_goptr := newQAudioFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioOutput) Start(device *qt.QIODevice) {
	C.QAudioOutput_Start(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioOutput) Start2() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioOutput_Start2(this.h)))
}

func (this *QAudioOutput) Stop() {
	C.QAudioOutput_Stop(this.h)
}

func (this *QAudioOutput) Reset() {
	C.QAudioOutput_Reset(this.h)
}

func (this *QAudioOutput) Suspend() {
	C.QAudioOutput_Suspend(this.h)
}

func (this *QAudioOutput) Resume() {
	C.QAudioOutput_Resume(this.h)
}

func (this *QAudioOutput) SetBufferSize(bytes int) {
	C.QAudioOutput_SetBufferSize(this.h, (C.int)(bytes))
}

func (this *QAudioOutput) BufferSize() int {
	return (int)(C.QAudioOutput_BufferSize(this.h))
}

func (this *QAudioOutput) BytesFree() int {
	return (int)(C.QAudioOutput_BytesFree(this.h))
}

func (this *QAudioOutput) PeriodSize() int {
	return (int)(C.QAudioOutput_PeriodSize(this.h))
}

func (this *QAudioOutput) SetNotifyInterval(milliSeconds int) {
	C.QAudioOutput_SetNotifyInterval(this.h, (C.int)(milliSeconds))
}

func (this *QAudioOutput) NotifyInterval() int {
	return (int)(C.QAudioOutput_NotifyInterval(this.h))
}

func (this *QAudioOutput) ProcessedUSecs() int64 {
	return (int64)(C.QAudioOutput_ProcessedUSecs(this.h))
}

func (this *QAudioOutput) ElapsedUSecs() int64 {
	return (int64)(C.QAudioOutput_ElapsedUSecs(this.h))
}

func (this *QAudioOutput) Error() QAudio__Error {
	return (QAudio__Error)(C.QAudioOutput_Error(this.h))
}

func (this *QAudioOutput) State() QAudio__State {
	return (QAudio__State)(C.QAudioOutput_State(this.h))
}

func (this *QAudioOutput) SetVolume(volume float64) {
	C.QAudioOutput_SetVolume(this.h, (C.double)(volume))
}

func (this *QAudioOutput) Volume() float64 {
	return (float64)(C.QAudioOutput_Volume(this.h))
}

func (this *QAudioOutput) Category() string {
	var _ms C.struct_miqt_string = C.QAudioOutput_Category(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioOutput) SetCategory(category string) {
	category_ms := C.struct_miqt_string{}
	category_ms.data = C.CString(category)
	category_ms.len = C.size_t(len(category))
	defer C.free(unsafe.Pointer(category_ms.data))
	C.QAudioOutput_SetCategory(this.h, category_ms)
}

func (this *QAudioOutput) StateChanged(state QAudio__State) {
	C.QAudioOutput_StateChanged(this.h, (C.int)(state))
}
func (this *QAudioOutput) OnStateChanged(slot func(state QAudio__State)) {
	C.QAudioOutput_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_StateChanged
func miqt_exec_callback_QAudioOutput_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QAudio__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudio__State)(state)

	gofunc(slotval1)
}

func (this *QAudioOutput) Notify() {
	C.QAudioOutput_Notify(this.h)
}
func (this *QAudioOutput) OnNotify(slot func()) {
	C.QAudioOutput_connect_Notify(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioOutput_Notify
func miqt_exec_callback_QAudioOutput_Notify(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAudioOutput_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutput_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutput_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioOutput_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioOutput_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioOutput) Delete() {
	C.QAudioOutput_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioOutput) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioOutput) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
