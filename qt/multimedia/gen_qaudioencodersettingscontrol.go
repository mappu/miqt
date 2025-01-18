package multimedia

/*

#include "gen_qaudioencodersettingscontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QAudioEncoderSettingsControl struct {
	h *C.QAudioEncoderSettingsControl
	*QMediaControl
}

func (this *QAudioEncoderSettingsControl) cPointer() *C.QAudioEncoderSettingsControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioEncoderSettingsControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioEncoderSettingsControl constructs the type using only CGO pointers.
func newQAudioEncoderSettingsControl(h *C.QAudioEncoderSettingsControl) *QAudioEncoderSettingsControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QAudioEncoderSettingsControl_virtbase(h, &outptr_QMediaControl)

	return &QAudioEncoderSettingsControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQAudioEncoderSettingsControl constructs the type using only unsafe pointers.
func UnsafeNewQAudioEncoderSettingsControl(h unsafe.Pointer) *QAudioEncoderSettingsControl {
	return newQAudioEncoderSettingsControl((*C.QAudioEncoderSettingsControl)(h))
}

func (this *QAudioEncoderSettingsControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioEncoderSettingsControl_MetaObject(this.h)))
}

func (this *QAudioEncoderSettingsControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioEncoderSettingsControl_Metacast(this.h, param1_Cstring))
}

func QAudioEncoderSettingsControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEncoderSettingsControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioEncoderSettingsControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEncoderSettingsControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioEncoderSettingsControl) SupportedAudioCodecs() []string {
	var _ma C.struct_miqt_array = C.QAudioEncoderSettingsControl_SupportedAudioCodecs(this.h)
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

func (this *QAudioEncoderSettingsControl) CodecDescription(codecName string) string {
	codecName_ms := C.struct_miqt_string{}
	codecName_ms.data = C.CString(codecName)
	codecName_ms.len = C.size_t(len(codecName))
	defer C.free(unsafe.Pointer(codecName_ms.data))
	var _ms C.struct_miqt_string = C.QAudioEncoderSettingsControl_CodecDescription(this.h, codecName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioEncoderSettingsControl) SupportedSampleRates(settings *QAudioEncoderSettings, continuous *bool) []int {
	var _ma C.struct_miqt_array = C.QAudioEncoderSettingsControl_SupportedSampleRates(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QAudioEncoderSettingsControl) AudioSettings() *QAudioEncoderSettings {
	_goptr := newQAudioEncoderSettings(C.QAudioEncoderSettingsControl_AudioSettings(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioEncoderSettingsControl) SetAudioSettings(settings *QAudioEncoderSettings) {
	C.QAudioEncoderSettingsControl_SetAudioSettings(this.h, settings.cPointer())
}

func QAudioEncoderSettingsControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEncoderSettingsControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioEncoderSettingsControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEncoderSettingsControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioEncoderSettingsControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEncoderSettingsControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioEncoderSettingsControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioEncoderSettingsControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAudioEncoderSettingsControl) Delete() {
	C.QAudioEncoderSettingsControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioEncoderSettingsControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioEncoderSettingsControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
