package multimedia

/*

#include "gen_qcameraexposure.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime/cgo"
	"unsafe"
)

type QCameraExposure__FlashMode int

const (
	QCameraExposure__FlashAuto                 QCameraExposure__FlashMode = 1
	QCameraExposure__FlashOff                  QCameraExposure__FlashMode = 2
	QCameraExposure__FlashOn                   QCameraExposure__FlashMode = 4
	QCameraExposure__FlashRedEyeReduction      QCameraExposure__FlashMode = 8
	QCameraExposure__FlashFill                 QCameraExposure__FlashMode = 16
	QCameraExposure__FlashTorch                QCameraExposure__FlashMode = 32
	QCameraExposure__FlashVideoLight           QCameraExposure__FlashMode = 64
	QCameraExposure__FlashSlowSyncFrontCurtain QCameraExposure__FlashMode = 128
	QCameraExposure__FlashSlowSyncRearCurtain  QCameraExposure__FlashMode = 256
	QCameraExposure__FlashManual               QCameraExposure__FlashMode = 512
)

type QCameraExposure__ExposureMode int

const (
	QCameraExposure__ExposureAuto          QCameraExposure__ExposureMode = 0
	QCameraExposure__ExposureManual        QCameraExposure__ExposureMode = 1
	QCameraExposure__ExposurePortrait      QCameraExposure__ExposureMode = 2
	QCameraExposure__ExposureNight         QCameraExposure__ExposureMode = 3
	QCameraExposure__ExposureBacklight     QCameraExposure__ExposureMode = 4
	QCameraExposure__ExposureSpotlight     QCameraExposure__ExposureMode = 5
	QCameraExposure__ExposureSports        QCameraExposure__ExposureMode = 6
	QCameraExposure__ExposureSnow          QCameraExposure__ExposureMode = 7
	QCameraExposure__ExposureBeach         QCameraExposure__ExposureMode = 8
	QCameraExposure__ExposureLargeAperture QCameraExposure__ExposureMode = 9
	QCameraExposure__ExposureSmallAperture QCameraExposure__ExposureMode = 10
	QCameraExposure__ExposureAction        QCameraExposure__ExposureMode = 11
	QCameraExposure__ExposureLandscape     QCameraExposure__ExposureMode = 12
	QCameraExposure__ExposureNightPortrait QCameraExposure__ExposureMode = 13
	QCameraExposure__ExposureTheatre       QCameraExposure__ExposureMode = 14
	QCameraExposure__ExposureSunset        QCameraExposure__ExposureMode = 15
	QCameraExposure__ExposureSteadyPhoto   QCameraExposure__ExposureMode = 16
	QCameraExposure__ExposureFireworks     QCameraExposure__ExposureMode = 17
	QCameraExposure__ExposureParty         QCameraExposure__ExposureMode = 18
	QCameraExposure__ExposureCandlelight   QCameraExposure__ExposureMode = 19
	QCameraExposure__ExposureBarcode       QCameraExposure__ExposureMode = 20
	QCameraExposure__ExposureModeVendor    QCameraExposure__ExposureMode = 1000
)

type QCameraExposure__MeteringMode int

const (
	QCameraExposure__MeteringMatrix  QCameraExposure__MeteringMode = 1
	QCameraExposure__MeteringAverage QCameraExposure__MeteringMode = 2
	QCameraExposure__MeteringSpot    QCameraExposure__MeteringMode = 3
)

type QCameraExposure struct {
	h *C.QCameraExposure
	*qt.QObject
}

func (this *QCameraExposure) cPointer() *C.QCameraExposure {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraExposure) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraExposure constructs the type using only CGO pointers.
func newQCameraExposure(h *C.QCameraExposure) *QCameraExposure {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QCameraExposure_virtbase(h, &outptr_QObject)

	return &QCameraExposure{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQCameraExposure constructs the type using only unsafe pointers.
func UnsafeNewQCameraExposure(h unsafe.Pointer) *QCameraExposure {
	return newQCameraExposure((*C.QCameraExposure)(h))
}

func (this *QCameraExposure) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraExposure_MetaObject(this.h)))
}

func (this *QCameraExposure) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraExposure_Metacast(this.h, param1_Cstring))
}

func QCameraExposure_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposure_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposure_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposure_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraExposure) IsAvailable() bool {
	return (bool)(C.QCameraExposure_IsAvailable(this.h))
}

func (this *QCameraExposure) FlashMode() QCameraExposure__FlashMode {
	return (QCameraExposure__FlashMode)(C.QCameraExposure_FlashMode(this.h))
}

func (this *QCameraExposure) IsFlashModeSupported(mode QCameraExposure__FlashMode) bool {
	return (bool)(C.QCameraExposure_IsFlashModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraExposure) IsFlashReady() bool {
	return (bool)(C.QCameraExposure_IsFlashReady(this.h))
}

func (this *QCameraExposure) ExposureMode() QCameraExposure__ExposureMode {
	return (QCameraExposure__ExposureMode)(C.QCameraExposure_ExposureMode(this.h))
}

func (this *QCameraExposure) IsExposureModeSupported(mode QCameraExposure__ExposureMode) bool {
	return (bool)(C.QCameraExposure_IsExposureModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraExposure) ExposureCompensation() float64 {
	return (float64)(C.QCameraExposure_ExposureCompensation(this.h))
}

func (this *QCameraExposure) MeteringMode() QCameraExposure__MeteringMode {
	return (QCameraExposure__MeteringMode)(C.QCameraExposure_MeteringMode(this.h))
}

func (this *QCameraExposure) IsMeteringModeSupported(mode QCameraExposure__MeteringMode) bool {
	return (bool)(C.QCameraExposure_IsMeteringModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraExposure) SpotMeteringPoint() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QCameraExposure_SpotMeteringPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraExposure) SetSpotMeteringPoint(point *qt.QPointF) {
	C.QCameraExposure_SetSpotMeteringPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QCameraExposure) IsoSensitivity() int {
	return (int)(C.QCameraExposure_IsoSensitivity(this.h))
}

func (this *QCameraExposure) Aperture() float64 {
	return (float64)(C.QCameraExposure_Aperture(this.h))
}

func (this *QCameraExposure) ShutterSpeed() float64 {
	return (float64)(C.QCameraExposure_ShutterSpeed(this.h))
}

func (this *QCameraExposure) RequestedIsoSensitivity() int {
	return (int)(C.QCameraExposure_RequestedIsoSensitivity(this.h))
}

func (this *QCameraExposure) RequestedAperture() float64 {
	return (float64)(C.QCameraExposure_RequestedAperture(this.h))
}

func (this *QCameraExposure) RequestedShutterSpeed() float64 {
	return (float64)(C.QCameraExposure_RequestedShutterSpeed(this.h))
}

func (this *QCameraExposure) SupportedIsoSensitivities() []int {
	var _ma C.struct_miqt_array = C.QCameraExposure_SupportedIsoSensitivities(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QCameraExposure) SupportedApertures() []float64 {
	var _ma C.struct_miqt_array = C.QCameraExposure_SupportedApertures(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QCameraExposure) SupportedShutterSpeeds() []float64 {
	var _ma C.struct_miqt_array = C.QCameraExposure_SupportedShutterSpeeds(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QCameraExposure) SetFlashMode(mode QCameraExposure__FlashMode) {
	C.QCameraExposure_SetFlashMode(this.h, (C.int)(mode))
}

func (this *QCameraExposure) SetExposureMode(mode QCameraExposure__ExposureMode) {
	C.QCameraExposure_SetExposureMode(this.h, (C.int)(mode))
}

func (this *QCameraExposure) SetMeteringMode(mode QCameraExposure__MeteringMode) {
	C.QCameraExposure_SetMeteringMode(this.h, (C.int)(mode))
}

func (this *QCameraExposure) SetExposureCompensation(ev float64) {
	C.QCameraExposure_SetExposureCompensation(this.h, (C.double)(ev))
}

func (this *QCameraExposure) SetManualIsoSensitivity(iso int) {
	C.QCameraExposure_SetManualIsoSensitivity(this.h, (C.int)(iso))
}

func (this *QCameraExposure) SetAutoIsoSensitivity() {
	C.QCameraExposure_SetAutoIsoSensitivity(this.h)
}

func (this *QCameraExposure) SetManualAperture(aperture float64) {
	C.QCameraExposure_SetManualAperture(this.h, (C.double)(aperture))
}

func (this *QCameraExposure) SetAutoAperture() {
	C.QCameraExposure_SetAutoAperture(this.h)
}

func (this *QCameraExposure) SetManualShutterSpeed(seconds float64) {
	C.QCameraExposure_SetManualShutterSpeed(this.h, (C.double)(seconds))
}

func (this *QCameraExposure) SetAutoShutterSpeed() {
	C.QCameraExposure_SetAutoShutterSpeed(this.h)
}

func (this *QCameraExposure) FlashReady(param1 bool) {
	C.QCameraExposure_FlashReady(this.h, (C.bool)(param1))
}
func (this *QCameraExposure) OnFlashReady(slot func(param1 bool)) {
	C.QCameraExposure_connect_FlashReady(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposure_FlashReady
func miqt_exec_callback_QCameraExposure_FlashReady(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QCameraExposure) ApertureChanged(param1 float64) {
	C.QCameraExposure_ApertureChanged(this.h, (C.double)(param1))
}
func (this *QCameraExposure) OnApertureChanged(slot func(param1 float64)) {
	C.QCameraExposure_connect_ApertureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposure_ApertureChanged
func miqt_exec_callback_QCameraExposure_ApertureChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraExposure) ApertureRangeChanged() {
	C.QCameraExposure_ApertureRangeChanged(this.h)
}
func (this *QCameraExposure) OnApertureRangeChanged(slot func()) {
	C.QCameraExposure_connect_ApertureRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposure_ApertureRangeChanged
func miqt_exec_callback_QCameraExposure_ApertureRangeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCameraExposure) ShutterSpeedChanged(speed float64) {
	C.QCameraExposure_ShutterSpeedChanged(this.h, (C.double)(speed))
}
func (this *QCameraExposure) OnShutterSpeedChanged(slot func(speed float64)) {
	C.QCameraExposure_connect_ShutterSpeedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposure_ShutterSpeedChanged
func miqt_exec_callback_QCameraExposure_ShutterSpeedChanged(cb C.intptr_t, speed C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(speed float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(speed)

	gofunc(slotval1)
}

func (this *QCameraExposure) ShutterSpeedRangeChanged() {
	C.QCameraExposure_ShutterSpeedRangeChanged(this.h)
}
func (this *QCameraExposure) OnShutterSpeedRangeChanged(slot func()) {
	C.QCameraExposure_connect_ShutterSpeedRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposure_ShutterSpeedRangeChanged
func miqt_exec_callback_QCameraExposure_ShutterSpeedRangeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCameraExposure) IsoSensitivityChanged(param1 int) {
	C.QCameraExposure_IsoSensitivityChanged(this.h, (C.int)(param1))
}
func (this *QCameraExposure) OnIsoSensitivityChanged(slot func(param1 int)) {
	C.QCameraExposure_connect_IsoSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposure_IsoSensitivityChanged
func miqt_exec_callback_QCameraExposure_IsoSensitivityChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QCameraExposure) ExposureCompensationChanged(param1 float64) {
	C.QCameraExposure_ExposureCompensationChanged(this.h, (C.double)(param1))
}
func (this *QCameraExposure) OnExposureCompensationChanged(slot func(param1 float64)) {
	C.QCameraExposure_connect_ExposureCompensationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraExposure_ExposureCompensationChanged
func miqt_exec_callback_QCameraExposure_ExposureCompensationChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func QCameraExposure_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposure_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposure_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposure_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposure_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposure_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraExposure_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraExposure_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraExposure) SupportedIsoSensitivities1(continuous *bool) []int {
	var _ma C.struct_miqt_array = C.QCameraExposure_SupportedIsoSensitivities1(this.h, (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QCameraExposure) SupportedApertures1(continuous *bool) []float64 {
	var _ma C.struct_miqt_array = C.QCameraExposure_SupportedApertures1(this.h, (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QCameraExposure) SupportedShutterSpeeds1(continuous *bool) []float64 {
	var _ma C.struct_miqt_array = C.QCameraExposure_SupportedShutterSpeeds1(this.h, (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}
