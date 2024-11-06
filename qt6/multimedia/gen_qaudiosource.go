package multimedia

/*

#include "gen_qaudiosource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioSource struct {
	h *C.QAudioSource
	*qt6.QObject
}

func (this *QAudioSource) cPointer() *C.QAudioSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAudioSource(h *C.QAudioSource) *QAudioSource {
	if h == nil {
		return nil
	}
	return &QAudioSource{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAudioSource(h unsafe.Pointer) *QAudioSource {
	return newQAudioSource((*C.QAudioSource)(h))
}

// NewQAudioSource constructs a new QAudioSource object.
func NewQAudioSource() *QAudioSource {
	ret := C.QAudioSource_new()
	return newQAudioSource(ret)
}

// NewQAudioSource2 constructs a new QAudioSource object.
func NewQAudioSource2(audioDeviceInfo *QAudioDevice) *QAudioSource {
	ret := C.QAudioSource_new2(audioDeviceInfo.cPointer())
	return newQAudioSource(ret)
}

// NewQAudioSource3 constructs a new QAudioSource object.
func NewQAudioSource3(format *QAudioFormat) *QAudioSource {
	ret := C.QAudioSource_new3(format.cPointer())
	return newQAudioSource(ret)
}

// NewQAudioSource4 constructs a new QAudioSource object.
func NewQAudioSource4(format *QAudioFormat, parent *qt6.QObject) *QAudioSource {
	ret := C.QAudioSource_new4(format.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQAudioSource(ret)
}

// NewQAudioSource5 constructs a new QAudioSource object.
func NewQAudioSource5(audioDeviceInfo *QAudioDevice, format *QAudioFormat) *QAudioSource {
	ret := C.QAudioSource_new5(audioDeviceInfo.cPointer(), format.cPointer())
	return newQAudioSource(ret)
}

// NewQAudioSource6 constructs a new QAudioSource object.
func NewQAudioSource6(audioDeviceInfo *QAudioDevice, format *QAudioFormat, parent *qt6.QObject) *QAudioSource {
	ret := C.QAudioSource_new6(audioDeviceInfo.cPointer(), format.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQAudioSource(ret)
}

func (this *QAudioSource) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioSource_MetaObject(this.h)))
}

func (this *QAudioSource) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioSource_Metacast(this.h, param1_Cstring))
}

func QAudioSource_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSource_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSource) IsNull() bool {
	return (bool)(C.QAudioSource_IsNull(this.h))
}

func (this *QAudioSource) Format() *QAudioFormat {
	_ret := C.QAudioSource_Format(this.h)
	_goptr := newQAudioFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioSource) Start(device *qt6.QIODevice) {
	C.QAudioSource_Start(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioSource) Start2() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioSource_Start2(this.h)))
}

func (this *QAudioSource) Stop() {
	C.QAudioSource_Stop(this.h)
}

func (this *QAudioSource) Reset() {
	C.QAudioSource_Reset(this.h)
}

func (this *QAudioSource) Suspend() {
	C.QAudioSource_Suspend(this.h)
}

func (this *QAudioSource) Resume() {
	C.QAudioSource_Resume(this.h)
}

func (this *QAudioSource) SetBufferSize(bytes int64) {
	C.QAudioSource_SetBufferSize(this.h, (C.ptrdiff_t)(bytes))
}

func (this *QAudioSource) BufferSize() int64 {
	return (int64)(C.QAudioSource_BufferSize(this.h))
}

func (this *QAudioSource) BytesAvailable() int64 {
	return (int64)(C.QAudioSource_BytesAvailable(this.h))
}

func (this *QAudioSource) SetVolume(volume float64) {
	C.QAudioSource_SetVolume(this.h, (C.double)(volume))
}

func (this *QAudioSource) Volume() float64 {
	return (float64)(C.QAudioSource_Volume(this.h))
}

func (this *QAudioSource) ProcessedUSecs() int64 {
	return (int64)(C.QAudioSource_ProcessedUSecs(this.h))
}

func (this *QAudioSource) ElapsedUSecs() int64 {
	return (int64)(C.QAudioSource_ElapsedUSecs(this.h))
}

func (this *QAudioSource) Error() QAudio__Error {
	return (QAudio__Error)(C.QAudioSource_Error(this.h))
}

func (this *QAudioSource) State() QAudio__State {
	return (QAudio__State)(C.QAudioSource_State(this.h))
}

func (this *QAudioSource) StateChanged(state QAudio__State) {
	C.QAudioSource_StateChanged(this.h, (C.int)(state))
}
func (this *QAudioSource) OnStateChanged(slot func(state QAudio__State)) {
	C.QAudioSource_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSource_StateChanged
func miqt_exec_callback_QAudioSource_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QAudio__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudio__State)(state)

	gofunc(slotval1)
}

func QAudioSource_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSource_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSource_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSource_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioSource) Delete() {
	C.QAudioSource_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
