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
	h *C.QCameraExposureControl
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
func newQCameraExposureControl(h *C.QCameraExposureControl) *QCameraExposureControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QCameraExposureControl_virtbase(h, &outptr_QMediaControl)

	return &QCameraExposureControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQCameraExposureControl constructs the type using only unsafe pointers.
func UnsafeNewQCameraExposureControl(h unsafe.Pointer) *QCameraExposureControl {
	return newQCameraExposureControl((*C.QCameraExposureControl)(h))
}

func (this *QCameraExposureControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraExposureControl_metaObject(this.h)))
}

func (this *QCameraExposureControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraExposureControl_metacast(this.h, param1_Cstring))
}

func QCameraExposureControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposureControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraExposureControl) IsParameterSupported(parameter QCameraExposureControl__ExposureParameter) bool {
	return (bool)(C.QCameraExposureControl_isParameterSupported(this.h, (C.int)(parameter)))
}

func (this *QCameraExposureControl) SupportedParameterRange(parameter QCameraExposureControl__ExposureParameter, continuous *bool) []qt.QVariant {
	var _ma C.struct_miqt_array = C.QCameraExposureControl_supportedParameterRange(this.h, (C.int)(parameter), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]qt.QVariant, int(_ma.len))
	_outCast := (*[0xffff]*C.QVariant)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraExposureControl) RequestedValue(parameter QCameraExposureControl__ExposureParameter) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QCameraExposureControl_requestedValue(this.h, (C.int)(parameter))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraExposureControl) ActualValue(parameter QCameraExposureControl__ExposureParameter) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QCameraExposureControl_actualValue(this.h, (C.int)(parameter))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraExposureControl) SetValue(parameter QCameraExposureControl__ExposureParameter, value *qt.QVariant) bool {
	return (bool)(C.QCameraExposureControl_setValue(this.h, (C.int)(parameter), (*C.QVariant)(value.UnsafePointer())))
}

func (this *QCameraExposureControl) RequestedValueChanged(parameter int) {
	C.QCameraExposureControl_requestedValueChanged(this.h, (C.int)(parameter))
}
func (this *QCameraExposureControl) OnRequestedValueChanged(slot func(parameter int)) {
	C.QCameraExposureControl_connect_requestedValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposureControl_requestedValueChanged
func miqt_exec_callback_QCameraExposureControl_requestedValueChanged(cb C.intptr_t, parameter C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parameter int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(parameter)

	gofunc(slotval1)
}

func (this *QCameraExposureControl) ActualValueChanged(parameter int) {
	C.QCameraExposureControl_actualValueChanged(this.h, (C.int)(parameter))
}
func (this *QCameraExposureControl) OnActualValueChanged(slot func(parameter int)) {
	C.QCameraExposureControl_connect_actualValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposureControl_actualValueChanged
func miqt_exec_callback_QCameraExposureControl_actualValueChanged(cb C.intptr_t, parameter C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parameter int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(parameter)

	gofunc(slotval1)
}

func (this *QCameraExposureControl) ParameterRangeChanged(parameter int) {
	C.QCameraExposureControl_parameterRangeChanged(this.h, (C.int)(parameter))
}
func (this *QCameraExposureControl) OnParameterRangeChanged(slot func(parameter int)) {
	C.QCameraExposureControl_connect_parameterRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposureControl_parameterRangeChanged
func miqt_exec_callback_QCameraExposureControl_parameterRangeChanged(cb C.intptr_t, parameter C.int) {
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
	var _ms C.struct_miqt_string = C.QCameraExposureControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposureControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposureControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposureControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposureControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraExposureControl) Delete() {
	C.QCameraExposureControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraExposureControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraExposureControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
