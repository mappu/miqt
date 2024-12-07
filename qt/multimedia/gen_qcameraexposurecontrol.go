package multimedia

/*

#include "gen_qcameraexposurecontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraExposureControl__ExposureParameter int

const (
	QCameraExposureControl__ISO                       QCameraExposureControl__ExposureParameter = 0
	QCameraExposureControl__Aperture                  QCameraExposureControl__ExposureParameter = 1
	QCameraExposureControl__ShutterSpeed              QCameraExposureControl__ExposureParameter = 2
	QCameraExposureControl__ExposureCompensation      QCameraExposureControl__ExposureParameter = 3
	QCameraExposureControl__FlashPower                QCameraExposureControl__ExposureParameter = 4
	QCameraExposureControl__FlashCompensation         QCameraExposureControl__ExposureParameter = 5
	QCameraExposureControl__TorchPower                QCameraExposureControl__ExposureParameter = 6
	QCameraExposureControl__SpotMeteringPoint         QCameraExposureControl__ExposureParameter = 7
	QCameraExposureControl__ExposureMode              QCameraExposureControl__ExposureParameter = 8
	QCameraExposureControl__MeteringMode              QCameraExposureControl__ExposureParameter = 9
	QCameraExposureControl__ExtendedExposureParameter QCameraExposureControl__ExposureParameter = 1000
)

type QCameraExposureControl struct {
	h          *C.QCameraExposureControl
	isSubclass bool
	*QMediaControl
}

func (this *QCameraExposureControl) cPointer() *C.QCameraExposureControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraExposureControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraExposureControl constructs the type using only CGO pointers.
func newQCameraExposureControl(h *C.QCameraExposureControl, h_QMediaControl *C.QMediaControl, h_QObject *C.QObject) *QCameraExposureControl {
	if h == nil {
		return nil
	}
	return &QCameraExposureControl{h: h,
		QMediaControl: newQMediaControl(h_QMediaControl, h_QObject)}
}

// UnsafeNewQCameraExposureControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraExposureControl(h unsafe.Pointer, h_QMediaControl unsafe.Pointer, h_QObject unsafe.Pointer) *QCameraExposureControl {
	if h == nil {
		return nil
	}

	return &QCameraExposureControl{h: (*C.QCameraExposureControl)(h),
		QMediaControl: UnsafeNewQMediaControl(h_QMediaControl, h_QObject)}
}

func (this *QCameraExposureControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraExposureControl_MetaObject(this.h)))
}

func (this *QCameraExposureControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraExposureControl_Metacast(this.h, param1_Cstring))
}

func QCameraExposureControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposureControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraExposureControl) IsParameterSupported(parameter QCameraExposureControl__ExposureParameter) bool {
	return (bool)(C.QCameraExposureControl_IsParameterSupported(this.h, (C.int)(parameter)))
}

func (this *QCameraExposureControl) RequestedValue(parameter QCameraExposureControl__ExposureParameter) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QCameraExposureControl_RequestedValue(this.h, (C.int)(parameter))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraExposureControl) ActualValue(parameter QCameraExposureControl__ExposureParameter) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QCameraExposureControl_ActualValue(this.h, (C.int)(parameter))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraExposureControl) SetValue(parameter QCameraExposureControl__ExposureParameter, value *qt.QVariant) bool {
	return (bool)(C.QCameraExposureControl_SetValue(this.h, (C.int)(parameter), (*C.QVariant)(value.UnsafePointer())))
}

func (this *QCameraExposureControl) RequestedValueChanged(parameter int) {
	C.QCameraExposureControl_RequestedValueChanged(this.h, (C.int)(parameter))
}
func (this *QCameraExposureControl) OnRequestedValueChanged(slot func(parameter int)) {
	C.QCameraExposureControl_connect_RequestedValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposureControl_RequestedValueChanged
func miqt_exec_callback_QCameraExposureControl_RequestedValueChanged(cb C.intptr_t, parameter C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parameter int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(parameter)

	gofunc(slotval1)
}

func (this *QCameraExposureControl) ActualValueChanged(parameter int) {
	C.QCameraExposureControl_ActualValueChanged(this.h, (C.int)(parameter))
}
func (this *QCameraExposureControl) OnActualValueChanged(slot func(parameter int)) {
	C.QCameraExposureControl_connect_ActualValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposureControl_ActualValueChanged
func miqt_exec_callback_QCameraExposureControl_ActualValueChanged(cb C.intptr_t, parameter C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parameter int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(parameter)

	gofunc(slotval1)
}

func (this *QCameraExposureControl) ParameterRangeChanged(parameter int) {
	C.QCameraExposureControl_ParameterRangeChanged(this.h, (C.int)(parameter))
}
func (this *QCameraExposureControl) OnParameterRangeChanged(slot func(parameter int)) {
	C.QCameraExposureControl_connect_ParameterRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposureControl_ParameterRangeChanged
func miqt_exec_callback_QCameraExposureControl_ParameterRangeChanged(cb C.intptr_t, parameter C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parameter int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(parameter)

	gofunc(slotval1)
}

func QCameraExposureControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposureControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposureControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposureControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraExposureControl) Delete() {
	C.QCameraExposureControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraExposureControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraExposureControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
