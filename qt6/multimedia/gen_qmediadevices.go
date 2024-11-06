package multimedia

/*

#include "gen_qmediadevices.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaDevices struct {
	h *C.QMediaDevices
	*qt6.QObject
}

func (this *QMediaDevices) cPointer() *C.QMediaDevices {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaDevices) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaDevices(h *C.QMediaDevices) *QMediaDevices {
	if h == nil {
		return nil
	}
	return &QMediaDevices{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQMediaDevices(h unsafe.Pointer) *QMediaDevices {
	return newQMediaDevices((*C.QMediaDevices)(h))
}

// NewQMediaDevices constructs a new QMediaDevices object.
func NewQMediaDevices() *QMediaDevices {
	ret := C.QMediaDevices_new()
	return newQMediaDevices(ret)
}

// NewQMediaDevices2 constructs a new QMediaDevices object.
func NewQMediaDevices2(parent *qt6.QObject) *QMediaDevices {
	ret := C.QMediaDevices_new2((*C.QObject)(parent.UnsafePointer()))
	return newQMediaDevices(ret)
}

func (this *QMediaDevices) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaDevices_MetaObject(this.h)))
}

func (this *QMediaDevices) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaDevices_Metacast(this.h, param1_Cstring))
}

func QMediaDevices_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaDevices_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaDevices_AudioInputs() []QAudioDevice {
	var _ma C.struct_miqt_array = C.QMediaDevices_AudioInputs()
	_ret := make([]QAudioDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QAudioDevice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQAudioDevice(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QMediaDevices_AudioOutputs() []QAudioDevice {
	var _ma C.struct_miqt_array = C.QMediaDevices_AudioOutputs()
	_ret := make([]QAudioDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QAudioDevice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQAudioDevice(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QMediaDevices_VideoInputs() []QCameraDevice {
	var _ma C.struct_miqt_array = C.QMediaDevices_VideoInputs()
	_ret := make([]QCameraDevice, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraDevice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQCameraDevice(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QMediaDevices_DefaultAudioInput() *QAudioDevice {
	_ret := C.QMediaDevices_DefaultAudioInput()
	_goptr := newQAudioDevice(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QMediaDevices_DefaultAudioOutput() *QAudioDevice {
	_ret := C.QMediaDevices_DefaultAudioOutput()
	_goptr := newQAudioDevice(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QMediaDevices_DefaultVideoInput() *QCameraDevice {
	_ret := C.QMediaDevices_DefaultVideoInput()
	_goptr := newQCameraDevice(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaDevices) AudioInputsChanged() {
	C.QMediaDevices_AudioInputsChanged(this.h)
}
func (this *QMediaDevices) OnAudioInputsChanged(slot func()) {
	C.QMediaDevices_connect_AudioInputsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaDevices_AudioInputsChanged
func miqt_exec_callback_QMediaDevices_AudioInputsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaDevices) AudioOutputsChanged() {
	C.QMediaDevices_AudioOutputsChanged(this.h)
}
func (this *QMediaDevices) OnAudioOutputsChanged(slot func()) {
	C.QMediaDevices_connect_AudioOutputsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaDevices_AudioOutputsChanged
func miqt_exec_callback_QMediaDevices_AudioOutputsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaDevices) VideoInputsChanged() {
	C.QMediaDevices_VideoInputsChanged(this.h)
}
func (this *QMediaDevices) OnVideoInputsChanged(slot func()) {
	C.QMediaDevices_connect_VideoInputsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaDevices_VideoInputsChanged
func miqt_exec_callback_QMediaDevices_VideoInputsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QMediaDevices_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaDevices_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaDevices_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaDevices_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaDevices) Delete() {
	C.QMediaDevices_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaDevices) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaDevices) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
