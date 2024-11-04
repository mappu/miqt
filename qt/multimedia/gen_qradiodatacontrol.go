package multimedia

/*

#include "gen_qradiodatacontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRadioDataControl struct {
	h *C.QRadioDataControl
	*QMediaControl
}

func (this *QRadioDataControl) cPointer() *C.QRadioDataControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRadioDataControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRadioDataControl(h *C.QRadioDataControl) *QRadioDataControl {
	if h == nil {
		return nil
	}
	return &QRadioDataControl{h: h, QMediaControl: UnsafeNewQMediaControl(unsafe.Pointer(h))}
}

func UnsafeNewQRadioDataControl(h unsafe.Pointer) *QRadioDataControl {
	return newQRadioDataControl((*C.QRadioDataControl)(h))
}

func (this *QRadioDataControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QRadioDataControl_MetaObject(this.h)))
}

func (this *QRadioDataControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRadioDataControl_Metacast(this.h, param1_Cstring))
}

func QRadioDataControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioDataControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioDataControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioDataControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioDataControl) StationId() string {
	var _ms C.struct_miqt_string = C.QRadioDataControl_StationId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioDataControl) ProgramType() QRadioData__ProgramType {
	return (QRadioData__ProgramType)(C.QRadioDataControl_ProgramType(this.h))
}

func (this *QRadioDataControl) ProgramTypeName() string {
	var _ms C.struct_miqt_string = C.QRadioDataControl_ProgramTypeName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioDataControl) StationName() string {
	var _ms C.struct_miqt_string = C.QRadioDataControl_StationName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioDataControl) RadioText() string {
	var _ms C.struct_miqt_string = C.QRadioDataControl_RadioText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioDataControl) SetAlternativeFrequenciesEnabled(enabled bool) {
	C.QRadioDataControl_SetAlternativeFrequenciesEnabled(this.h, (C.bool)(enabled))
}

func (this *QRadioDataControl) IsAlternativeFrequenciesEnabled() bool {
	return (bool)(C.QRadioDataControl_IsAlternativeFrequenciesEnabled(this.h))
}

func (this *QRadioDataControl) Error() QRadioData__Error {
	return (QRadioData__Error)(C.QRadioDataControl_Error(this.h))
}

func (this *QRadioDataControl) ErrorString() string {
	var _ms C.struct_miqt_string = C.QRadioDataControl_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioDataControl) StationIdChanged(stationId string) {
	stationId_ms := C.struct_miqt_string{}
	stationId_ms.data = C.CString(stationId)
	stationId_ms.len = C.size_t(len(stationId))
	defer C.free(unsafe.Pointer(stationId_ms.data))
	C.QRadioDataControl_StationIdChanged(this.h, stationId_ms)
}
func (this *QRadioDataControl) OnStationIdChanged(slot func(stationId string)) {
	C.QRadioDataControl_connect_StationIdChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioDataControl_StationIdChanged
func miqt_exec_callback_QRadioDataControl_StationIdChanged(cb C.intptr_t, stationId C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stationId string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var stationId_ms C.struct_miqt_string = stationId
	stationId_ret := C.GoStringN(stationId_ms.data, C.int(int64(stationId_ms.len)))
	C.free(unsafe.Pointer(stationId_ms.data))
	slotval1 := stationId_ret

	gofunc(slotval1)
}

func (this *QRadioDataControl) ProgramTypeChanged(programType QRadioData__ProgramType) {
	C.QRadioDataControl_ProgramTypeChanged(this.h, (C.int)(programType))
}
func (this *QRadioDataControl) OnProgramTypeChanged(slot func(programType QRadioData__ProgramType)) {
	C.QRadioDataControl_connect_ProgramTypeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioDataControl_ProgramTypeChanged
func miqt_exec_callback_QRadioDataControl_ProgramTypeChanged(cb C.intptr_t, programType C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(programType QRadioData__ProgramType))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioData__ProgramType)(programType)

	gofunc(slotval1)
}

func (this *QRadioDataControl) ProgramTypeNameChanged(programTypeName string) {
	programTypeName_ms := C.struct_miqt_string{}
	programTypeName_ms.data = C.CString(programTypeName)
	programTypeName_ms.len = C.size_t(len(programTypeName))
	defer C.free(unsafe.Pointer(programTypeName_ms.data))
	C.QRadioDataControl_ProgramTypeNameChanged(this.h, programTypeName_ms)
}
func (this *QRadioDataControl) OnProgramTypeNameChanged(slot func(programTypeName string)) {
	C.QRadioDataControl_connect_ProgramTypeNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioDataControl_ProgramTypeNameChanged
func miqt_exec_callback_QRadioDataControl_ProgramTypeNameChanged(cb C.intptr_t, programTypeName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(programTypeName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var programTypeName_ms C.struct_miqt_string = programTypeName
	programTypeName_ret := C.GoStringN(programTypeName_ms.data, C.int(int64(programTypeName_ms.len)))
	C.free(unsafe.Pointer(programTypeName_ms.data))
	slotval1 := programTypeName_ret

	gofunc(slotval1)
}

func (this *QRadioDataControl) StationNameChanged(stationName string) {
	stationName_ms := C.struct_miqt_string{}
	stationName_ms.data = C.CString(stationName)
	stationName_ms.len = C.size_t(len(stationName))
	defer C.free(unsafe.Pointer(stationName_ms.data))
	C.QRadioDataControl_StationNameChanged(this.h, stationName_ms)
}
func (this *QRadioDataControl) OnStationNameChanged(slot func(stationName string)) {
	C.QRadioDataControl_connect_StationNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioDataControl_StationNameChanged
func miqt_exec_callback_QRadioDataControl_StationNameChanged(cb C.intptr_t, stationName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stationName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var stationName_ms C.struct_miqt_string = stationName
	stationName_ret := C.GoStringN(stationName_ms.data, C.int(int64(stationName_ms.len)))
	C.free(unsafe.Pointer(stationName_ms.data))
	slotval1 := stationName_ret

	gofunc(slotval1)
}

func (this *QRadioDataControl) RadioTextChanged(radioText string) {
	radioText_ms := C.struct_miqt_string{}
	radioText_ms.data = C.CString(radioText)
	radioText_ms.len = C.size_t(len(radioText))
	defer C.free(unsafe.Pointer(radioText_ms.data))
	C.QRadioDataControl_RadioTextChanged(this.h, radioText_ms)
}
func (this *QRadioDataControl) OnRadioTextChanged(slot func(radioText string)) {
	C.QRadioDataControl_connect_RadioTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioDataControl_RadioTextChanged
func miqt_exec_callback_QRadioDataControl_RadioTextChanged(cb C.intptr_t, radioText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(radioText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var radioText_ms C.struct_miqt_string = radioText
	radioText_ret := C.GoStringN(radioText_ms.data, C.int(int64(radioText_ms.len)))
	C.free(unsafe.Pointer(radioText_ms.data))
	slotval1 := radioText_ret

	gofunc(slotval1)
}

func (this *QRadioDataControl) AlternativeFrequenciesEnabledChanged(enabled bool) {
	C.QRadioDataControl_AlternativeFrequenciesEnabledChanged(this.h, (C.bool)(enabled))
}
func (this *QRadioDataControl) OnAlternativeFrequenciesEnabledChanged(slot func(enabled bool)) {
	C.QRadioDataControl_connect_AlternativeFrequenciesEnabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioDataControl_AlternativeFrequenciesEnabledChanged
func miqt_exec_callback_QRadioDataControl_AlternativeFrequenciesEnabledChanged(cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc(slotval1)
}

func (this *QRadioDataControl) ErrorWithErr(err QRadioData__Error) {
	C.QRadioDataControl_ErrorWithErr(this.h, (C.int)(err))
}
func (this *QRadioDataControl) OnErrorWithErr(slot func(err QRadioData__Error)) {
	C.QRadioDataControl_connect_ErrorWithErr(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioDataControl_ErrorWithErr
func miqt_exec_callback_QRadioDataControl_ErrorWithErr(cb C.intptr_t, err C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(err QRadioData__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioData__Error)(err)

	gofunc(slotval1)
}

func QRadioDataControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioDataControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioDataControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioDataControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioDataControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioDataControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioDataControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioDataControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QRadioDataControl) Delete() {
	C.QRadioDataControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioDataControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioDataControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
