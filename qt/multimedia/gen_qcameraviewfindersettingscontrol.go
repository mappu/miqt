package multimedia

/*

#include "gen_qcameraviewfindersettingscontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QCameraViewfinderSettingsControl__ViewfinderParameter int

const (
	QCameraViewfinderSettingsControl__Resolution       QCameraViewfinderSettingsControl__ViewfinderParameter = 0
	QCameraViewfinderSettingsControl__PixelAspectRatio QCameraViewfinderSettingsControl__ViewfinderParameter = 1
	QCameraViewfinderSettingsControl__MinimumFrameRate QCameraViewfinderSettingsControl__ViewfinderParameter = 2
	QCameraViewfinderSettingsControl__MaximumFrameRate QCameraViewfinderSettingsControl__ViewfinderParameter = 3
	QCameraViewfinderSettingsControl__PixelFormat      QCameraViewfinderSettingsControl__ViewfinderParameter = 4
	QCameraViewfinderSettingsControl__UserParameter    QCameraViewfinderSettingsControl__ViewfinderParameter = 1000
)

type QCameraViewfinderSettingsControl struct {
	h *C.QCameraViewfinderSettingsControl
	*QMediaControl
}

func (this *QCameraViewfinderSettingsControl) cPointer() *C.QCameraViewfinderSettingsControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraViewfinderSettingsControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraViewfinderSettingsControl constructs the type using only CGO pointers.
func newQCameraViewfinderSettingsControl(h *C.QCameraViewfinderSettingsControl) *QCameraViewfinderSettingsControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraViewfinderSettingsControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraViewfinderSettingsControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraViewfinderSettingsControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraViewfinderSettingsControl(h unsafe.Pointer) *QCameraViewfinderSettingsControl {
	return newQCameraViewfinderSettingsControl((*C.QCameraViewfinderSettingsControl)(h))
}

func (this *QCameraViewfinderSettingsControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraViewfinderSettingsControl_MetaObject(this.h)))
}

func (this *QCameraViewfinderSettingsControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraViewfinderSettingsControl_Metacast(this.h, param1_Cstring))
}

func QCameraViewfinderSettingsControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinderSettingsControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraViewfinderSettingsControl) IsViewfinderParameterSupported(parameter QCameraViewfinderSettingsControl__ViewfinderParameter) bool {
	return (bool)(C.QCameraViewfinderSettingsControl_IsViewfinderParameterSupported(this.h, (C.int)(parameter)))
}

func (this *QCameraViewfinderSettingsControl) ViewfinderParameter(parameter QCameraViewfinderSettingsControl__ViewfinderParameter) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QCameraViewfinderSettingsControl_ViewfinderParameter(this.h, (C.int)(parameter))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraViewfinderSettingsControl) SetViewfinderParameter(parameter QCameraViewfinderSettingsControl__ViewfinderParameter, value *qt.QVariant) {
	C.QCameraViewfinderSettingsControl_SetViewfinderParameter(this.h, (C.int)(parameter), (*C.QVariant)(value.UnsafePointer()))
}

func QCameraViewfinderSettingsControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinderSettingsControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinderSettingsControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinderSettingsControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraViewfinderSettingsControl) Delete() {
	C.QCameraViewfinderSettingsControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraViewfinderSettingsControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraViewfinderSettingsControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCameraViewfinderSettingsControl2 struct {
	h *C.QCameraViewfinderSettingsControl2
	*QMediaControl
}

func (this *QCameraViewfinderSettingsControl2) cPointer() *C.QCameraViewfinderSettingsControl2 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraViewfinderSettingsControl2) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraViewfinderSettingsControl2 constructs the type using only CGO pointers.
func newQCameraViewfinderSettingsControl2(h *C.QCameraViewfinderSettingsControl2) *QCameraViewfinderSettingsControl2 {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraViewfinderSettingsControl2_virtbase(h, &outptr_QMediaControl)

	return &QCameraViewfinderSettingsControl2{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraViewfinderSettingsControl2 constructs the type using only unsafe pointers.
func UnsafeNewQCameraViewfinderSettingsControl2(h unsafe.Pointer) *QCameraViewfinderSettingsControl2 {
	return newQCameraViewfinderSettingsControl2((*C.QCameraViewfinderSettingsControl2)(h))
}

func (this *QCameraViewfinderSettingsControl2) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraViewfinderSettingsControl2_MetaObject(this.h)))
}

func (this *QCameraViewfinderSettingsControl2) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraViewfinderSettingsControl2_Metacast(this.h, param1_Cstring))
}

func QCameraViewfinderSettingsControl2_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl2_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinderSettingsControl2_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl2_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraViewfinderSettingsControl2) SupportedViewfinderSettings() []QCameraViewfinderSettings {
	var _ma C.struct_miqt_array = C.QCameraViewfinderSettingsControl2_SupportedViewfinderSettings(this.h)
	_ret := make([]QCameraViewfinderSettings, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraViewfinderSettings)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraViewfinderSettings(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraViewfinderSettingsControl2) ViewfinderSettings() *QCameraViewfinderSettings {
	_goptr := newQCameraViewfinderSettings(C.QCameraViewfinderSettingsControl2_ViewfinderSettings(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraViewfinderSettingsControl2) SetViewfinderSettings(settings *QCameraViewfinderSettings) {
	C.QCameraViewfinderSettingsControl2_SetViewfinderSettings(this.h, settings.cPointer())
}

func QCameraViewfinderSettingsControl2_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl2_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinderSettingsControl2_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl2_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinderSettingsControl2_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl2_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinderSettingsControl2_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinderSettingsControl2_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraViewfinderSettingsControl2) Delete() {
	C.QCameraViewfinderSettingsControl2_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraViewfinderSettingsControl2) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraViewfinderSettingsControl2) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
