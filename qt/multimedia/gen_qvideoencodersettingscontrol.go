package multimedia

/*

#include "gen_qvideoencodersettingscontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QVideoEncoderSettingsControl struct {
	h          *C.QVideoEncoderSettingsControl
	isSubclass bool
	*QMediaControl
}

func (this *QVideoEncoderSettingsControl) cPointer() *C.QVideoEncoderSettingsControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoEncoderSettingsControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoEncoderSettingsControl constructs the type using only CGO pointers.
func newQVideoEncoderSettingsControl(h *C.QVideoEncoderSettingsControl, h_QMediaControl *C.QMediaControl, h_QObject *C.QObject) *QVideoEncoderSettingsControl {
	if h == nil {
		return nil
	}
	return &QVideoEncoderSettingsControl{h: h,
		QMediaControl: newQMediaControl(h_QMediaControl, h_QObject)}
}

// UnsafeNewQVideoEncoderSettingsControl constructs the type using only unsafe pointers.
func UnsafeNewQVideoEncoderSettingsControl(h unsafe.Pointer, h_QMediaControl unsafe.Pointer, h_QObject unsafe.Pointer) *QVideoEncoderSettingsControl {
	if h == nil {
		return nil
	}

	return &QVideoEncoderSettingsControl{h: (*C.QVideoEncoderSettingsControl)(h),
		QMediaControl: UnsafeNewQMediaControl(h_QMediaControl, h_QObject)}
}

func (this *QVideoEncoderSettingsControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoEncoderSettingsControl_MetaObject(this.h)))
}

func (this *QVideoEncoderSettingsControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoEncoderSettingsControl_Metacast(this.h, param1_Cstring))
}

func QVideoEncoderSettingsControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoEncoderSettingsControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoEncoderSettingsControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoEncoderSettingsControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoEncoderSettingsControl) SupportedResolutions(settings *QVideoEncoderSettings, continuous *bool) []qt.QSize {
	var _ma C.struct_miqt_array = C.QVideoEncoderSettingsControl_SupportedResolutions(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_lv_ret))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QVideoEncoderSettingsControl) SupportedFrameRates(settings *QVideoEncoderSettings, continuous *bool) []float64 {
	var _ma C.struct_miqt_array = C.QVideoEncoderSettingsControl_SupportedFrameRates(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QVideoEncoderSettingsControl) SupportedVideoCodecs() []string {
	var _ma C.struct_miqt_array = C.QVideoEncoderSettingsControl_SupportedVideoCodecs(this.h)
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

func (this *QVideoEncoderSettingsControl) VideoCodecDescription(codec string) string {
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	var _ms C.struct_miqt_string = C.QVideoEncoderSettingsControl_VideoCodecDescription(this.h, codec_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoEncoderSettingsControl) VideoSettings() *QVideoEncoderSettings {
	_ret := C.QVideoEncoderSettingsControl_VideoSettings(this.h)
	_goptr := newQVideoEncoderSettings(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoEncoderSettingsControl) SetVideoSettings(settings *QVideoEncoderSettings) {
	C.QVideoEncoderSettingsControl_SetVideoSettings(this.h, settings.cPointer())
}

func QVideoEncoderSettingsControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoEncoderSettingsControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoEncoderSettingsControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoEncoderSettingsControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoEncoderSettingsControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoEncoderSettingsControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoEncoderSettingsControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoEncoderSettingsControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoEncoderSettingsControl) Delete() {
	C.QVideoEncoderSettingsControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoEncoderSettingsControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoEncoderSettingsControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
