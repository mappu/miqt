package multimedia

/*

#include "gen_qcameraimageprocessingcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QCameraImageProcessingControl__ProcessingParameter int

const (
	QCameraImageProcessingControl__WhiteBalancePreset   QCameraImageProcessingControl__ProcessingParameter = 0
	QCameraImageProcessingControl__ColorTemperature     QCameraImageProcessingControl__ProcessingParameter = 1
	QCameraImageProcessingControl__Contrast             QCameraImageProcessingControl__ProcessingParameter = 2
	QCameraImageProcessingControl__Saturation           QCameraImageProcessingControl__ProcessingParameter = 3
	QCameraImageProcessingControl__Brightness           QCameraImageProcessingControl__ProcessingParameter = 4
	QCameraImageProcessingControl__Sharpening           QCameraImageProcessingControl__ProcessingParameter = 5
	QCameraImageProcessingControl__Denoising            QCameraImageProcessingControl__ProcessingParameter = 6
	QCameraImageProcessingControl__ContrastAdjustment   QCameraImageProcessingControl__ProcessingParameter = 7
	QCameraImageProcessingControl__SaturationAdjustment QCameraImageProcessingControl__ProcessingParameter = 8
	QCameraImageProcessingControl__BrightnessAdjustment QCameraImageProcessingControl__ProcessingParameter = 9
	QCameraImageProcessingControl__SharpeningAdjustment QCameraImageProcessingControl__ProcessingParameter = 10
	QCameraImageProcessingControl__DenoisingAdjustment  QCameraImageProcessingControl__ProcessingParameter = 11
	QCameraImageProcessingControl__ColorFilter          QCameraImageProcessingControl__ProcessingParameter = 12
	QCameraImageProcessingControl__ExtendedParameter    QCameraImageProcessingControl__ProcessingParameter = 1000
)

type QCameraImageProcessingControl struct {
	h *C.QCameraImageProcessingControl
	*QMediaControl
}

func (this *QCameraImageProcessingControl) cPointer() *C.QCameraImageProcessingControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraImageProcessingControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraImageProcessingControl constructs the type using only CGO pointers.
func newQCameraImageProcessingControl(h *C.QCameraImageProcessingControl) *QCameraImageProcessingControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraImageProcessingControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraImageProcessingControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraImageProcessingControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraImageProcessingControl(h unsafe.Pointer) *QCameraImageProcessingControl {
	return newQCameraImageProcessingControl((*C.QCameraImageProcessingControl)(h))
}

func (this *QCameraImageProcessingControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraImageProcessingControl_MetaObject(this.h)))
}

func (this *QCameraImageProcessingControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraImageProcessingControl_Metacast(this.h, param1_Cstring))
}

func QCameraImageProcessingControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessingControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageProcessingControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessingControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageProcessingControl) IsParameterSupported(param1 QCameraImageProcessingControl__ProcessingParameter) bool {
	return (bool)(C.QCameraImageProcessingControl_IsParameterSupported(this.h, (C.int)(param1)))
}

func (this *QCameraImageProcessingControl) IsParameterValueSupported(parameter QCameraImageProcessingControl__ProcessingParameter, value *qt.QVariant) bool {
	return (bool)(C.QCameraImageProcessingControl_IsParameterValueSupported(this.h, (C.int)(parameter), (*C.QVariant)(value.UnsafePointer())))
}

func (this *QCameraImageProcessingControl) Parameter(parameter QCameraImageProcessingControl__ProcessingParameter) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QCameraImageProcessingControl_Parameter(this.h, (C.int)(parameter))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraImageProcessingControl) SetParameter(parameter QCameraImageProcessingControl__ProcessingParameter, value *qt.QVariant) {
	C.QCameraImageProcessingControl_SetParameter(this.h, (C.int)(parameter), (*C.QVariant)(value.UnsafePointer()))
}

func QCameraImageProcessingControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessingControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageProcessingControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessingControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageProcessingControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessingControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageProcessingControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessingControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraImageProcessingControl) Delete() {
	C.QCameraImageProcessingControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraImageProcessingControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraImageProcessingControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
