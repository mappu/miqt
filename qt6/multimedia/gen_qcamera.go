package multimedia

/*

#include "gen_qcamera.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCamera__Error int

const (
	QCamera__NoError     QCamera__Error = 0
	QCamera__CameraError QCamera__Error = 1
)

type QCamera__FocusMode int

const (
	QCamera__FocusModeAuto       QCamera__FocusMode = 0
	QCamera__FocusModeAutoNear   QCamera__FocusMode = 1
	QCamera__FocusModeAutoFar    QCamera__FocusMode = 2
	QCamera__FocusModeHyperfocal QCamera__FocusMode = 3
	QCamera__FocusModeInfinity   QCamera__FocusMode = 4
	QCamera__FocusModeManual     QCamera__FocusMode = 5
)

type QCamera__FlashMode int

const (
	QCamera__FlashOff  QCamera__FlashMode = 0
	QCamera__FlashOn   QCamera__FlashMode = 1
	QCamera__FlashAuto QCamera__FlashMode = 2
)

type QCamera__TorchMode int

const (
	QCamera__TorchOff  QCamera__TorchMode = 0
	QCamera__TorchOn   QCamera__TorchMode = 1
	QCamera__TorchAuto QCamera__TorchMode = 2
)

type QCamera__ExposureMode int

const (
	QCamera__ExposureAuto          QCamera__ExposureMode = 0
	QCamera__ExposureManual        QCamera__ExposureMode = 1
	QCamera__ExposurePortrait      QCamera__ExposureMode = 2
	QCamera__ExposureNight         QCamera__ExposureMode = 3
	QCamera__ExposureSports        QCamera__ExposureMode = 4
	QCamera__ExposureSnow          QCamera__ExposureMode = 5
	QCamera__ExposureBeach         QCamera__ExposureMode = 6
	QCamera__ExposureAction        QCamera__ExposureMode = 7
	QCamera__ExposureLandscape     QCamera__ExposureMode = 8
	QCamera__ExposureNightPortrait QCamera__ExposureMode = 9
	QCamera__ExposureTheatre       QCamera__ExposureMode = 10
	QCamera__ExposureSunset        QCamera__ExposureMode = 11
	QCamera__ExposureSteadyPhoto   QCamera__ExposureMode = 12
	QCamera__ExposureFireworks     QCamera__ExposureMode = 13
	QCamera__ExposureParty         QCamera__ExposureMode = 14
	QCamera__ExposureCandlelight   QCamera__ExposureMode = 15
	QCamera__ExposureBarcode       QCamera__ExposureMode = 16
)

type QCamera__WhiteBalanceMode int

const (
	QCamera__WhiteBalanceAuto        QCamera__WhiteBalanceMode = 0
	QCamera__WhiteBalanceManual      QCamera__WhiteBalanceMode = 1
	QCamera__WhiteBalanceSunlight    QCamera__WhiteBalanceMode = 2
	QCamera__WhiteBalanceCloudy      QCamera__WhiteBalanceMode = 3
	QCamera__WhiteBalanceShade       QCamera__WhiteBalanceMode = 4
	QCamera__WhiteBalanceTungsten    QCamera__WhiteBalanceMode = 5
	QCamera__WhiteBalanceFluorescent QCamera__WhiteBalanceMode = 6
	QCamera__WhiteBalanceFlash       QCamera__WhiteBalanceMode = 7
	QCamera__WhiteBalanceSunset      QCamera__WhiteBalanceMode = 8
)

type QCamera__Feature int

const (
	QCamera__ColorTemperature     QCamera__Feature = 1
	QCamera__ExposureCompensation QCamera__Feature = 2
	QCamera__IsoSensitivity       QCamera__Feature = 4
	QCamera__ManualExposureTime   QCamera__Feature = 8
	QCamera__CustomFocusPoint     QCamera__Feature = 16
	QCamera__FocusDistance        QCamera__Feature = 32
)

type QCamera struct {
	h          *C.QCamera
	isSubclass bool
	*qt6.QObject
}

func (this *QCamera) cPointer() *C.QCamera {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCamera) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCamera constructs the type using only CGO pointers.
func newQCamera(h *C.QCamera) *QCamera {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QCamera_virtbase(h, &outptr_QObject)

	return &QCamera{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQCamera constructs the type using only unsafe pointers.
func UnsafeNewQCamera(h unsafe.Pointer) *QCamera {
	return newQCamera((*C.QCamera)(h))
}

// NewQCamera constructs a new QCamera object.
func NewQCamera() *QCamera {

	ret := newQCamera(C.QCamera_new())
	ret.isSubclass = true
	return ret
}

// NewQCamera2 constructs a new QCamera object.
func NewQCamera2(cameraDevice *QCameraDevice) *QCamera {

	ret := newQCamera(C.QCamera_new2(cameraDevice.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQCamera3 constructs a new QCamera object.
func NewQCamera3(position QCameraDevice__Position) *QCamera {

	ret := newQCamera(C.QCamera_new3((C.int)(position)))
	ret.isSubclass = true
	return ret
}

// NewQCamera4 constructs a new QCamera object.
func NewQCamera4(parent *qt6.QObject) *QCamera {

	ret := newQCamera(C.QCamera_new4((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQCamera5 constructs a new QCamera object.
func NewQCamera5(cameraDevice *QCameraDevice, parent *qt6.QObject) *QCamera {

	ret := newQCamera(C.QCamera_new5(cameraDevice.cPointer(), (*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQCamera6 constructs a new QCamera object.
func NewQCamera6(position QCameraDevice__Position, parent *qt6.QObject) *QCamera {

	ret := newQCamera(C.QCamera_new6((C.int)(position), (*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QCamera) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QCamera_MetaObject(this.h)))
}

func (this *QCamera) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCamera_Metacast(this.h, param1_Cstring))
}

func QCamera_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) IsAvailable() bool {
	return (bool)(C.QCamera_IsAvailable(this.h))
}

func (this *QCamera) IsActive() bool {
	return (bool)(C.QCamera_IsActive(this.h))
}

func (this *QCamera) CaptureSession() *QMediaCaptureSession {
	return newQMediaCaptureSession(C.QCamera_CaptureSession(this.h))
}

func (this *QCamera) CameraDevice() *QCameraDevice {
	_goptr := newQCameraDevice(C.QCamera_CameraDevice(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) SetCameraDevice(cameraDevice *QCameraDevice) {
	C.QCamera_SetCameraDevice(this.h, cameraDevice.cPointer())
}

func (this *QCamera) CameraFormat() *QCameraFormat {
	_goptr := newQCameraFormat(C.QCamera_CameraFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) SetCameraFormat(format *QCameraFormat) {
	C.QCamera_SetCameraFormat(this.h, format.cPointer())
}

func (this *QCamera) Error() QCamera__Error {
	return (QCamera__Error)(C.QCamera_Error(this.h))
}

func (this *QCamera) ErrorString() string {
	var _ms C.struct_miqt_string = C.QCamera_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) SupportedFeatures() QCamera__Feature {
	return (QCamera__Feature)(C.QCamera_SupportedFeatures(this.h))
}

func (this *QCamera) FocusMode() QCamera__FocusMode {
	return (QCamera__FocusMode)(C.QCamera_FocusMode(this.h))
}

func (this *QCamera) SetFocusMode(mode QCamera__FocusMode) {
	C.QCamera_SetFocusMode(this.h, (C.int)(mode))
}

func (this *QCamera) IsFocusModeSupported(mode QCamera__FocusMode) bool {
	return (bool)(C.QCamera_IsFocusModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) FocusPoint() *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QCamera_FocusPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) CustomFocusPoint() *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QCamera_CustomFocusPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) SetCustomFocusPoint(point *qt6.QPointF) {
	C.QCamera_SetCustomFocusPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QCamera) SetFocusDistance(d float32) {
	C.QCamera_SetFocusDistance(this.h, (C.float)(d))
}

func (this *QCamera) FocusDistance() float32 {
	return (float32)(C.QCamera_FocusDistance(this.h))
}

func (this *QCamera) MinimumZoomFactor() float32 {
	return (float32)(C.QCamera_MinimumZoomFactor(this.h))
}

func (this *QCamera) MaximumZoomFactor() float32 {
	return (float32)(C.QCamera_MaximumZoomFactor(this.h))
}

func (this *QCamera) ZoomFactor() float32 {
	return (float32)(C.QCamera_ZoomFactor(this.h))
}

func (this *QCamera) SetZoomFactor(factor float32) {
	C.QCamera_SetZoomFactor(this.h, (C.float)(factor))
}

func (this *QCamera) FlashMode() QCamera__FlashMode {
	return (QCamera__FlashMode)(C.QCamera_FlashMode(this.h))
}

func (this *QCamera) IsFlashModeSupported(mode QCamera__FlashMode) bool {
	return (bool)(C.QCamera_IsFlashModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) IsFlashReady() bool {
	return (bool)(C.QCamera_IsFlashReady(this.h))
}

func (this *QCamera) TorchMode() QCamera__TorchMode {
	return (QCamera__TorchMode)(C.QCamera_TorchMode(this.h))
}

func (this *QCamera) IsTorchModeSupported(mode QCamera__TorchMode) bool {
	return (bool)(C.QCamera_IsTorchModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) ExposureMode() QCamera__ExposureMode {
	return (QCamera__ExposureMode)(C.QCamera_ExposureMode(this.h))
}

func (this *QCamera) IsExposureModeSupported(mode QCamera__ExposureMode) bool {
	return (bool)(C.QCamera_IsExposureModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) ExposureCompensation() float32 {
	return (float32)(C.QCamera_ExposureCompensation(this.h))
}

func (this *QCamera) IsoSensitivity() int {
	return (int)(C.QCamera_IsoSensitivity(this.h))
}

func (this *QCamera) ManualIsoSensitivity() int {
	return (int)(C.QCamera_ManualIsoSensitivity(this.h))
}

func (this *QCamera) ExposureTime() float32 {
	return (float32)(C.QCamera_ExposureTime(this.h))
}

func (this *QCamera) ManualExposureTime() float32 {
	return (float32)(C.QCamera_ManualExposureTime(this.h))
}

func (this *QCamera) MinimumIsoSensitivity() int {
	return (int)(C.QCamera_MinimumIsoSensitivity(this.h))
}

func (this *QCamera) MaximumIsoSensitivity() int {
	return (int)(C.QCamera_MaximumIsoSensitivity(this.h))
}

func (this *QCamera) MinimumExposureTime() float32 {
	return (float32)(C.QCamera_MinimumExposureTime(this.h))
}

func (this *QCamera) MaximumExposureTime() float32 {
	return (float32)(C.QCamera_MaximumExposureTime(this.h))
}

func (this *QCamera) WhiteBalanceMode() QCamera__WhiteBalanceMode {
	return (QCamera__WhiteBalanceMode)(C.QCamera_WhiteBalanceMode(this.h))
}

func (this *QCamera) IsWhiteBalanceModeSupported(mode QCamera__WhiteBalanceMode) bool {
	return (bool)(C.QCamera_IsWhiteBalanceModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) ColorTemperature() int {
	return (int)(C.QCamera_ColorTemperature(this.h))
}

func (this *QCamera) SetActive(active bool) {
	C.QCamera_SetActive(this.h, (C.bool)(active))
}

func (this *QCamera) Start() {
	C.QCamera_Start(this.h)
}

func (this *QCamera) Stop() {
	C.QCamera_Stop(this.h)
}

func (this *QCamera) ZoomTo(zoom float32, rate float32) {
	C.QCamera_ZoomTo(this.h, (C.float)(zoom), (C.float)(rate))
}

func (this *QCamera) SetFlashMode(mode QCamera__FlashMode) {
	C.QCamera_SetFlashMode(this.h, (C.int)(mode))
}

func (this *QCamera) SetTorchMode(mode QCamera__TorchMode) {
	C.QCamera_SetTorchMode(this.h, (C.int)(mode))
}

func (this *QCamera) SetExposureMode(mode QCamera__ExposureMode) {
	C.QCamera_SetExposureMode(this.h, (C.int)(mode))
}

func (this *QCamera) SetExposureCompensation(ev float32) {
	C.QCamera_SetExposureCompensation(this.h, (C.float)(ev))
}

func (this *QCamera) SetManualIsoSensitivity(iso int) {
	C.QCamera_SetManualIsoSensitivity(this.h, (C.int)(iso))
}

func (this *QCamera) SetAutoIsoSensitivity() {
	C.QCamera_SetAutoIsoSensitivity(this.h)
}

func (this *QCamera) SetManualExposureTime(seconds float32) {
	C.QCamera_SetManualExposureTime(this.h, (C.float)(seconds))
}

func (this *QCamera) SetAutoExposureTime() {
	C.QCamera_SetAutoExposureTime(this.h)
}

func (this *QCamera) SetWhiteBalanceMode(mode QCamera__WhiteBalanceMode) {
	C.QCamera_SetWhiteBalanceMode(this.h, (C.int)(mode))
}

func (this *QCamera) SetColorTemperature(colorTemperature int) {
	C.QCamera_SetColorTemperature(this.h, (C.int)(colorTemperature))
}

func (this *QCamera) ActiveChanged(param1 bool) {
	C.QCamera_ActiveChanged(this.h, (C.bool)(param1))
}
func (this *QCamera) OnActiveChanged(slot func(param1 bool)) {
	C.QCamera_connect_ActiveChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ActiveChanged
func miqt_exec_callback_QCamera_ActiveChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ErrorChanged() {
	C.QCamera_ErrorChanged(this.h)
}
func (this *QCamera) OnErrorChanged(slot func()) {
	C.QCamera_connect_ErrorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ErrorChanged
func miqt_exec_callback_QCamera_ErrorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ErrorOccurred(error QCamera__Error, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QCamera_ErrorOccurred(this.h, (C.int)(error), errorString_ms)
}
func (this *QCamera) OnErrorOccurred(slot func(error QCamera__Error, errorString string)) {
	C.QCamera_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ErrorOccurred
func miqt_exec_callback_QCamera_ErrorOccurred(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QCamera__Error, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__Error)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval2 := errorString_ret

	gofunc(slotval1, slotval2)
}

func (this *QCamera) CameraDeviceChanged() {
	C.QCamera_CameraDeviceChanged(this.h)
}
func (this *QCamera) OnCameraDeviceChanged(slot func()) {
	C.QCamera_connect_CameraDeviceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_CameraDeviceChanged
func miqt_exec_callback_QCamera_CameraDeviceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) CameraFormatChanged() {
	C.QCamera_CameraFormatChanged(this.h)
}
func (this *QCamera) OnCameraFormatChanged(slot func()) {
	C.QCamera_connect_CameraFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_CameraFormatChanged
func miqt_exec_callback_QCamera_CameraFormatChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) SupportedFeaturesChanged() {
	C.QCamera_SupportedFeaturesChanged(this.h)
}
func (this *QCamera) OnSupportedFeaturesChanged(slot func()) {
	C.QCamera_connect_SupportedFeaturesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_SupportedFeaturesChanged
func miqt_exec_callback_QCamera_SupportedFeaturesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) FocusModeChanged() {
	C.QCamera_FocusModeChanged(this.h)
}
func (this *QCamera) OnFocusModeChanged(slot func()) {
	C.QCamera_connect_FocusModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_FocusModeChanged
func miqt_exec_callback_QCamera_FocusModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ZoomFactorChanged(param1 float32) {
	C.QCamera_ZoomFactorChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnZoomFactorChanged(slot func(param1 float32)) {
	C.QCamera_connect_ZoomFactorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ZoomFactorChanged
func miqt_exec_callback_QCamera_ZoomFactorChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) MinimumZoomFactorChanged(param1 float32) {
	C.QCamera_MinimumZoomFactorChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnMinimumZoomFactorChanged(slot func(param1 float32)) {
	C.QCamera_connect_MinimumZoomFactorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_MinimumZoomFactorChanged
func miqt_exec_callback_QCamera_MinimumZoomFactorChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) MaximumZoomFactorChanged(param1 float32) {
	C.QCamera_MaximumZoomFactorChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnMaximumZoomFactorChanged(slot func(param1 float32)) {
	C.QCamera_connect_MaximumZoomFactorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_MaximumZoomFactorChanged
func miqt_exec_callback_QCamera_MaximumZoomFactorChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) FocusDistanceChanged(param1 float32) {
	C.QCamera_FocusDistanceChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnFocusDistanceChanged(slot func(param1 float32)) {
	C.QCamera_connect_FocusDistanceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_FocusDistanceChanged
func miqt_exec_callback_QCamera_FocusDistanceChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) FocusPointChanged() {
	C.QCamera_FocusPointChanged(this.h)
}
func (this *QCamera) OnFocusPointChanged(slot func()) {
	C.QCamera_connect_FocusPointChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_FocusPointChanged
func miqt_exec_callback_QCamera_FocusPointChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) CustomFocusPointChanged() {
	C.QCamera_CustomFocusPointChanged(this.h)
}
func (this *QCamera) OnCustomFocusPointChanged(slot func()) {
	C.QCamera_connect_CustomFocusPointChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_CustomFocusPointChanged
func miqt_exec_callback_QCamera_CustomFocusPointChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) FlashReady(param1 bool) {
	C.QCamera_FlashReady(this.h, (C.bool)(param1))
}
func (this *QCamera) OnFlashReady(slot func(param1 bool)) {
	C.QCamera_connect_FlashReady(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_FlashReady
func miqt_exec_callback_QCamera_FlashReady(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QCamera) FlashModeChanged() {
	C.QCamera_FlashModeChanged(this.h)
}
func (this *QCamera) OnFlashModeChanged(slot func()) {
	C.QCamera_connect_FlashModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_FlashModeChanged
func miqt_exec_callback_QCamera_FlashModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) TorchModeChanged() {
	C.QCamera_TorchModeChanged(this.h)
}
func (this *QCamera) OnTorchModeChanged(slot func()) {
	C.QCamera_connect_TorchModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_TorchModeChanged
func miqt_exec_callback_QCamera_TorchModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ExposureTimeChanged(speed float32) {
	C.QCamera_ExposureTimeChanged(this.h, (C.float)(speed))
}
func (this *QCamera) OnExposureTimeChanged(slot func(speed float32)) {
	C.QCamera_connect_ExposureTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ExposureTimeChanged
func miqt_exec_callback_QCamera_ExposureTimeChanged(cb C.intptr_t, speed C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(speed float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(speed)

	gofunc(slotval1)
}

func (this *QCamera) ManualExposureTimeChanged(speed float32) {
	C.QCamera_ManualExposureTimeChanged(this.h, (C.float)(speed))
}
func (this *QCamera) OnManualExposureTimeChanged(slot func(speed float32)) {
	C.QCamera_connect_ManualExposureTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ManualExposureTimeChanged
func miqt_exec_callback_QCamera_ManualExposureTimeChanged(cb C.intptr_t, speed C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(speed float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(speed)

	gofunc(slotval1)
}

func (this *QCamera) IsoSensitivityChanged(param1 int) {
	C.QCamera_IsoSensitivityChanged(this.h, (C.int)(param1))
}
func (this *QCamera) OnIsoSensitivityChanged(slot func(param1 int)) {
	C.QCamera_connect_IsoSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_IsoSensitivityChanged
func miqt_exec_callback_QCamera_IsoSensitivityChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ManualIsoSensitivityChanged(param1 int) {
	C.QCamera_ManualIsoSensitivityChanged(this.h, (C.int)(param1))
}
func (this *QCamera) OnManualIsoSensitivityChanged(slot func(param1 int)) {
	C.QCamera_connect_ManualIsoSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ManualIsoSensitivityChanged
func miqt_exec_callback_QCamera_ManualIsoSensitivityChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ExposureCompensationChanged(param1 float32) {
	C.QCamera_ExposureCompensationChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnExposureCompensationChanged(slot func(param1 float32)) {
	C.QCamera_connect_ExposureCompensationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ExposureCompensationChanged
func miqt_exec_callback_QCamera_ExposureCompensationChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ExposureModeChanged() {
	C.QCamera_ExposureModeChanged(this.h)
}
func (this *QCamera) OnExposureModeChanged(slot func()) {
	C.QCamera_connect_ExposureModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ExposureModeChanged
func miqt_exec_callback_QCamera_ExposureModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) WhiteBalanceModeChanged() {
	C.QCamera_WhiteBalanceModeChanged(this.h)
}
func (this *QCamera) OnWhiteBalanceModeChanged(slot func()) {
	C.QCamera_connect_WhiteBalanceModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_WhiteBalanceModeChanged
func miqt_exec_callback_QCamera_WhiteBalanceModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ColorTemperatureChanged() {
	C.QCamera_ColorTemperatureChanged(this.h)
}
func (this *QCamera) OnColorTemperatureChanged(slot func()) {
	C.QCamera_connect_ColorTemperatureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ColorTemperatureChanged
func miqt_exec_callback_QCamera_ColorTemperatureChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) BrightnessChanged() {
	C.QCamera_BrightnessChanged(this.h)
}
func (this *QCamera) OnBrightnessChanged(slot func()) {
	C.QCamera_connect_BrightnessChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_BrightnessChanged
func miqt_exec_callback_QCamera_BrightnessChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ContrastChanged() {
	C.QCamera_ContrastChanged(this.h)
}
func (this *QCamera) OnContrastChanged(slot func()) {
	C.QCamera_connect_ContrastChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ContrastChanged
func miqt_exec_callback_QCamera_ContrastChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) SaturationChanged() {
	C.QCamera_SaturationChanged(this.h)
}
func (this *QCamera) OnSaturationChanged(slot func()) {
	C.QCamera_connect_SaturationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_SaturationChanged
func miqt_exec_callback_QCamera_SaturationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) HueChanged() {
	C.QCamera_HueChanged(this.h)
}
func (this *QCamera) OnHueChanged(slot func()) {
	C.QCamera_connect_HueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_HueChanged
func miqt_exec_callback_QCamera_HueChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QCamera_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCamera_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QCamera_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCamera) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCamera_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_Event
func miqt_exec_callback_QCamera_Event(self *C.QCamera, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCamera) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QCamera_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCamera) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCamera_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_EventFilter
func miqt_exec_callback_QCamera_EventFilter(self *C.QCamera, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCamera) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QCamera_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCamera_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_TimerEvent
func miqt_exec_callback_QCamera_TimerEvent(self *C.QCamera, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCamera) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QCamera_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCamera_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ChildEvent
func miqt_exec_callback_QCamera_ChildEvent(self *C.QCamera, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCamera) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QCamera_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCamera_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_CustomEvent
func miqt_exec_callback_QCamera_CustomEvent(self *C.QCamera, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCamera) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QCamera_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCamera) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCamera_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ConnectNotify
func miqt_exec_callback_QCamera_ConnectNotify(self *C.QCamera, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCamera{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCamera) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QCamera_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCamera) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCamera_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_DisconnectNotify
func miqt_exec_callback_QCamera_DisconnectNotify(self *C.QCamera, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCamera{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCamera) Delete() {
	C.QCamera_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCamera) GoGC() {
	runtime.SetFinalizer(this, func(this *QCamera) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
