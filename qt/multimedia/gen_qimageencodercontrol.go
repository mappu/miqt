package multimedia

/*

#include "gen_qimageencodercontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QImageEncoderControl struct {
	h  *C.QImageEncoderControl
	gc *[1]unsafe.Pointer
	*QMediaControl
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QImageEncoderControl) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QMediaControl.miqtSetGC(gc)
}

func (this *QImageEncoderControl) cPointer() *C.QImageEncoderControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QImageEncoderControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQImageEncoderControl constructs the type using only CGO pointers.
func newQImageEncoderControl(h *C.QImageEncoderControl) *QImageEncoderControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QImageEncoderControl_virtbase(h, &outptr_QMediaControl)

	return &QImageEncoderControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQImageEncoderControl constructs the type using only unsafe pointers.
func UnsafeNewQImageEncoderControl(h unsafe.Pointer) *QImageEncoderControl {
	return newQImageEncoderControl((*C.QImageEncoderControl)(h))
}

func (this *QImageEncoderControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QImageEncoderControl_metaObject(this.h)))
}

func (this *QImageEncoderControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QImageEncoderControl_metacast(this.h, param1_Cstring))
}

func QImageEncoderControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QImageEncoderControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageEncoderControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QImageEncoderControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageEncoderControl) SupportedImageCodecs() []string {
	var _ma C.struct_miqt_array = C.QImageEncoderControl_supportedImageCodecs(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QImageEncoderControl) ImageCodecDescription(codec string) string {
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	var _ms C.struct_miqt_string = C.QImageEncoderControl_imageCodecDescription(this.h, codec_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageEncoderControl) SupportedResolutions(settings *QImageEncoderSettings, continuous *bool) []qt.QSize {
	defer runtime.KeepAlive(settings)
	var _ma C.struct_miqt_array = C.QImageEncoderControl_supportedResolutions(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := unsafe.Slice((**C.QSize)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QImageEncoderControl) ImageSettings() *QImageEncoderSettings {
	_goptr := newQImageEncoderSettings(C.QImageEncoderControl_imageSettings(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageEncoderControl) SetImageSettings(settings *QImageEncoderSettings) {
	defer runtime.KeepAlive(settings)
	C.QImageEncoderControl_setImageSettings(this.h, settings.cPointer())
}

func QImageEncoderControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QImageEncoderControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageEncoderControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QImageEncoderControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageEncoderControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QImageEncoderControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageEncoderControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QImageEncoderControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QImageEncoderControl) Delete() {
	C.QImageEncoderControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QImageEncoderControl) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QImageEncoderControl_delete((*C.QImageEncoderControl)(gc[0]))
	})
	this.miqtSetGC(gc)
}
