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
	h *C.QCamera
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

	return newQCamera(C.QCamera_new())
}

// NewQCamera2 constructs a new QCamera object.
func NewQCamera2(cameraDevice *QCameraDevice) *QCamera {

	return newQCamera(C.QCamera_new2(cameraDevice.cPointer()))
}

// NewQCamera3 constructs a new QCamera object.
func NewQCamera3(position QCameraDevice__Position) *QCamera {

	return newQCamera(C.QCamera_new3((C.int)(position)))
}

// NewQCamera4 constructs a new QCamera object.
func NewQCamera4(parent *qt6.QObject) *QCamera {

	return newQCamera(C.QCamera_new4((*C.QObject)(parent.UnsafePointer())))
}

// NewQCamera5 constructs a new QCamera object.
func NewQCamera5(cameraDevice *QCameraDevice, parent *qt6.QObject) *QCamera {

	return newQCamera(C.QCamera_new5(cameraDevice.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

// NewQCamera6 constructs a new QCamera object.
func NewQCamera6(position QCameraDevice__Position, parent *qt6.QObject) *QCamera {

	return newQCamera(C.QCamera_new6((C.int)(position), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QCamera) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QCamera_metaObject(this.h)))
}

func (this *QCamera) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCamera_metacast(this.h, param1_Cstring))
}

func QCamera_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) IsAvailable() bool {
	return (bool)(C.QCamera_isAvailable(this.h))
}

func (this *QCamera) IsActive() bool {
	return (bool)(C.QCamera_isActive(this.h))
}

func (this *QCamera) CaptureSession() *QMediaCaptureSession {
	return newQMediaCaptureSession(C.QCamera_captureSession(this.h))
}

func (this *QCamera) CameraDevice() *QCameraDevice {
	_goptr := newQCameraDevice(C.QCamera_cameraDevice(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) SetCameraDevice(cameraDevice *QCameraDevice) {
	C.QCamera_setCameraDevice(this.h, cameraDevice.cPointer())
}

func (this *QCamera) CameraFormat() *QCameraFormat {
	_goptr := newQCameraFormat(C.QCamera_cameraFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) SetCameraFormat(format *QCameraFormat) {
	C.QCamera_setCameraFormat(this.h, format.cPointer())
}

func (this *QCamera) Error() QCamera__Error {
	return (QCamera__Error)(C.QCamera_error(this.h))
}

func (this *QCamera) ErrorString() string {
	var _ms C.struct_miqt_string = C.QCamera_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) SupportedFeatures() QCamera__Feature {
	return (QCamera__Feature)(C.QCamera_supportedFeatures(this.h))
}

func (this *QCamera) FocusMode() QCamera__FocusMode {
	return (QCamera__FocusMode)(C.QCamera_focusMode(this.h))
}

func (this *QCamera) SetFocusMode(mode QCamera__FocusMode) {
	C.QCamera_setFocusMode(this.h, (C.int)(mode))
}

func (this *QCamera) IsFocusModeSupported(mode QCamera__FocusMode) bool {
	return (bool)(C.QCamera_isFocusModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) FocusPoint() *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QCamera_focusPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) CustomFocusPoint() *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QCamera_customFocusPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) SetCustomFocusPoint(point *qt6.QPointF) {
	C.QCamera_setCustomFocusPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QCamera) SetFocusDistance(d float32) {
	C.QCamera_setFocusDistance(this.h, (C.float)(d))
}

func (this *QCamera) FocusDistance() float32 {
	return (float32)(C.QCamera_focusDistance(this.h))
}

func (this *QCamera) MinimumZoomFactor() float32 {
	return (float32)(C.QCamera_minimumZoomFactor(this.h))
}

func (this *QCamera) MaximumZoomFactor() float32 {
	return (float32)(C.QCamera_maximumZoomFactor(this.h))
}

func (this *QCamera) ZoomFactor() float32 {
	return (float32)(C.QCamera_zoomFactor(this.h))
}

func (this *QCamera) SetZoomFactor(factor float32) {
	C.QCamera_setZoomFactor(this.h, (C.float)(factor))
}

func (this *QCamera) FlashMode() QCamera__FlashMode {
	return (QCamera__FlashMode)(C.QCamera_flashMode(this.h))
}

func (this *QCamera) IsFlashModeSupported(mode QCamera__FlashMode) bool {
	return (bool)(C.QCamera_isFlashModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) IsFlashReady() bool {
	return (bool)(C.QCamera_isFlashReady(this.h))
}

func (this *QCamera) TorchMode() QCamera__TorchMode {
	return (QCamera__TorchMode)(C.QCamera_torchMode(this.h))
}

func (this *QCamera) IsTorchModeSupported(mode QCamera__TorchMode) bool {
	return (bool)(C.QCamera_isTorchModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) ExposureMode() QCamera__ExposureMode {
	return (QCamera__ExposureMode)(C.QCamera_exposureMode(this.h))
}

func (this *QCamera) IsExposureModeSupported(mode QCamera__ExposureMode) bool {
	return (bool)(C.QCamera_isExposureModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) ExposureCompensation() float32 {
	return (float32)(C.QCamera_exposureCompensation(this.h))
}

func (this *QCamera) IsoSensitivity() int {
	return (int)(C.QCamera_isoSensitivity(this.h))
}

func (this *QCamera) ManualIsoSensitivity() int {
	return (int)(C.QCamera_manualIsoSensitivity(this.h))
}

func (this *QCamera) ExposureTime() float32 {
	return (float32)(C.QCamera_exposureTime(this.h))
}

func (this *QCamera) ManualExposureTime() float32 {
	return (float32)(C.QCamera_manualExposureTime(this.h))
}

func (this *QCamera) MinimumIsoSensitivity() int {
	return (int)(C.QCamera_minimumIsoSensitivity(this.h))
}

func (this *QCamera) MaximumIsoSensitivity() int {
	return (int)(C.QCamera_maximumIsoSensitivity(this.h))
}

func (this *QCamera) MinimumExposureTime() float32 {
	return (float32)(C.QCamera_minimumExposureTime(this.h))
}

func (this *QCamera) MaximumExposureTime() float32 {
	return (float32)(C.QCamera_maximumExposureTime(this.h))
}

func (this *QCamera) WhiteBalanceMode() QCamera__WhiteBalanceMode {
	return (QCamera__WhiteBalanceMode)(C.QCamera_whiteBalanceMode(this.h))
}

func (this *QCamera) IsWhiteBalanceModeSupported(mode QCamera__WhiteBalanceMode) bool {
	return (bool)(C.QCamera_isWhiteBalanceModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) ColorTemperature() int {
	return (int)(C.QCamera_colorTemperature(this.h))
}

func (this *QCamera) SetActive(active bool) {
	C.QCamera_setActive(this.h, (C.bool)(active))
}

func (this *QCamera) Start() {
	C.QCamera_start(this.h)
}

func (this *QCamera) Stop() {
	C.QCamera_stop(this.h)
}

func (this *QCamera) ZoomTo(zoom float32, rate float32) {
	C.QCamera_zoomTo(this.h, (C.float)(zoom), (C.float)(rate))
}

func (this *QCamera) SetFlashMode(mode QCamera__FlashMode) {
	C.QCamera_setFlashMode(this.h, (C.int)(mode))
}

func (this *QCamera) SetTorchMode(mode QCamera__TorchMode) {
	C.QCamera_setTorchMode(this.h, (C.int)(mode))
}

func (this *QCamera) SetExposureMode(mode QCamera__ExposureMode) {
	C.QCamera_setExposureMode(this.h, (C.int)(mode))
}

func (this *QCamera) SetExposureCompensation(ev float32) {
	C.QCamera_setExposureCompensation(this.h, (C.float)(ev))
}

func (this *QCamera) SetManualIsoSensitivity(iso int) {
	C.QCamera_setManualIsoSensitivity(this.h, (C.int)(iso))
}

func (this *QCamera) SetAutoIsoSensitivity() {
	C.QCamera_setAutoIsoSensitivity(this.h)
}

func (this *QCamera) SetManualExposureTime(seconds float32) {
	C.QCamera_setManualExposureTime(this.h, (C.float)(seconds))
}

func (this *QCamera) SetAutoExposureTime() {
	C.QCamera_setAutoExposureTime(this.h)
}

func (this *QCamera) SetWhiteBalanceMode(mode QCamera__WhiteBalanceMode) {
	C.QCamera_setWhiteBalanceMode(this.h, (C.int)(mode))
}

func (this *QCamera) SetColorTemperature(colorTemperature int) {
	C.QCamera_setColorTemperature(this.h, (C.int)(colorTemperature))
}

func (this *QCamera) ActiveChanged(param1 bool) {
	C.QCamera_activeChanged(this.h, (C.bool)(param1))
}
func (this *QCamera) OnActiveChanged(slot func(param1 bool)) {
	C.QCamera_connect_activeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_activeChanged
func miqt_exec_callback_QCamera_activeChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ErrorChanged() {
	C.QCamera_errorChanged(this.h)
}
func (this *QCamera) OnErrorChanged(slot func()) {
	C.QCamera_connect_errorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_errorChanged
func miqt_exec_callback_QCamera_errorChanged(cb C.intptr_t) {
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
	C.QCamera_errorOccurred(this.h, (C.int)(error), errorString_ms)
}
func (this *QCamera) OnErrorOccurred(slot func(error QCamera__Error, errorString string)) {
	C.QCamera_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_errorOccurred
func miqt_exec_callback_QCamera_errorOccurred(cb C.intptr_t, error C.int, errorString C.struct_miqt_string) {
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
	C.QCamera_cameraDeviceChanged(this.h)
}
func (this *QCamera) OnCameraDeviceChanged(slot func()) {
	C.QCamera_connect_cameraDeviceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_cameraDeviceChanged
func miqt_exec_callback_QCamera_cameraDeviceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) CameraFormatChanged() {
	C.QCamera_cameraFormatChanged(this.h)
}
func (this *QCamera) OnCameraFormatChanged(slot func()) {
	C.QCamera_connect_cameraFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_cameraFormatChanged
func miqt_exec_callback_QCamera_cameraFormatChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) SupportedFeaturesChanged() {
	C.QCamera_supportedFeaturesChanged(this.h)
}
func (this *QCamera) OnSupportedFeaturesChanged(slot func()) {
	C.QCamera_connect_supportedFeaturesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_supportedFeaturesChanged
func miqt_exec_callback_QCamera_supportedFeaturesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) FocusModeChanged() {
	C.QCamera_focusModeChanged(this.h)
}
func (this *QCamera) OnFocusModeChanged(slot func()) {
	C.QCamera_connect_focusModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_focusModeChanged
func miqt_exec_callback_QCamera_focusModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ZoomFactorChanged(param1 float32) {
	C.QCamera_zoomFactorChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnZoomFactorChanged(slot func(param1 float32)) {
	C.QCamera_connect_zoomFactorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_zoomFactorChanged
func miqt_exec_callback_QCamera_zoomFactorChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) MinimumZoomFactorChanged(param1 float32) {
	C.QCamera_minimumZoomFactorChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnMinimumZoomFactorChanged(slot func(param1 float32)) {
	C.QCamera_connect_minimumZoomFactorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_minimumZoomFactorChanged
func miqt_exec_callback_QCamera_minimumZoomFactorChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) MaximumZoomFactorChanged(param1 float32) {
	C.QCamera_maximumZoomFactorChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnMaximumZoomFactorChanged(slot func(param1 float32)) {
	C.QCamera_connect_maximumZoomFactorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_maximumZoomFactorChanged
func miqt_exec_callback_QCamera_maximumZoomFactorChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) FocusDistanceChanged(param1 float32) {
	C.QCamera_focusDistanceChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnFocusDistanceChanged(slot func(param1 float32)) {
	C.QCamera_connect_focusDistanceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_focusDistanceChanged
func miqt_exec_callback_QCamera_focusDistanceChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) FocusPointChanged() {
	C.QCamera_focusPointChanged(this.h)
}
func (this *QCamera) OnFocusPointChanged(slot func()) {
	C.QCamera_connect_focusPointChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_focusPointChanged
func miqt_exec_callback_QCamera_focusPointChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) CustomFocusPointChanged() {
	C.QCamera_customFocusPointChanged(this.h)
}
func (this *QCamera) OnCustomFocusPointChanged(slot func()) {
	C.QCamera_connect_customFocusPointChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_customFocusPointChanged
func miqt_exec_callback_QCamera_customFocusPointChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) FlashReady(param1 bool) {
	C.QCamera_flashReady(this.h, (C.bool)(param1))
}
func (this *QCamera) OnFlashReady(slot func(param1 bool)) {
	C.QCamera_connect_flashReady(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_flashReady
func miqt_exec_callback_QCamera_flashReady(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QCamera) FlashModeChanged() {
	C.QCamera_flashModeChanged(this.h)
}
func (this *QCamera) OnFlashModeChanged(slot func()) {
	C.QCamera_connect_flashModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_flashModeChanged
func miqt_exec_callback_QCamera_flashModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) TorchModeChanged() {
	C.QCamera_torchModeChanged(this.h)
}
func (this *QCamera) OnTorchModeChanged(slot func()) {
	C.QCamera_connect_torchModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_torchModeChanged
func miqt_exec_callback_QCamera_torchModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ExposureTimeChanged(speed float32) {
	C.QCamera_exposureTimeChanged(this.h, (C.float)(speed))
}
func (this *QCamera) OnExposureTimeChanged(slot func(speed float32)) {
	C.QCamera_connect_exposureTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_exposureTimeChanged
func miqt_exec_callback_QCamera_exposureTimeChanged(cb C.intptr_t, speed C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(speed float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(speed)

	gofunc(slotval1)
}

func (this *QCamera) ManualExposureTimeChanged(speed float32) {
	C.QCamera_manualExposureTimeChanged(this.h, (C.float)(speed))
}
func (this *QCamera) OnManualExposureTimeChanged(slot func(speed float32)) {
	C.QCamera_connect_manualExposureTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_manualExposureTimeChanged
func miqt_exec_callback_QCamera_manualExposureTimeChanged(cb C.intptr_t, speed C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(speed float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(speed)

	gofunc(slotval1)
}

func (this *QCamera) IsoSensitivityChanged(param1 int) {
	C.QCamera_isoSensitivityChanged(this.h, (C.int)(param1))
}
func (this *QCamera) OnIsoSensitivityChanged(slot func(param1 int)) {
	C.QCamera_connect_isoSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_isoSensitivityChanged
func miqt_exec_callback_QCamera_isoSensitivityChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ManualIsoSensitivityChanged(param1 int) {
	C.QCamera_manualIsoSensitivityChanged(this.h, (C.int)(param1))
}
func (this *QCamera) OnManualIsoSensitivityChanged(slot func(param1 int)) {
	C.QCamera_connect_manualIsoSensitivityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_manualIsoSensitivityChanged
func miqt_exec_callback_QCamera_manualIsoSensitivityChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ExposureCompensationChanged(param1 float32) {
	C.QCamera_exposureCompensationChanged(this.h, (C.float)(param1))
}
func (this *QCamera) OnExposureCompensationChanged(slot func(param1 float32)) {
	C.QCamera_connect_exposureCompensationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_exposureCompensationChanged
func miqt_exec_callback_QCamera_exposureCompensationChanged(cb C.intptr_t, param1 C.float) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float32))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float32)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ExposureModeChanged() {
	C.QCamera_exposureModeChanged(this.h)
}
func (this *QCamera) OnExposureModeChanged(slot func()) {
	C.QCamera_connect_exposureModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_exposureModeChanged
func miqt_exec_callback_QCamera_exposureModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) WhiteBalanceModeChanged() {
	C.QCamera_whiteBalanceModeChanged(this.h)
}
func (this *QCamera) OnWhiteBalanceModeChanged(slot func()) {
	C.QCamera_connect_whiteBalanceModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_whiteBalanceModeChanged
func miqt_exec_callback_QCamera_whiteBalanceModeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ColorTemperatureChanged() {
	C.QCamera_colorTemperatureChanged(this.h)
}
func (this *QCamera) OnColorTemperatureChanged(slot func()) {
	C.QCamera_connect_colorTemperatureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_colorTemperatureChanged
func miqt_exec_callback_QCamera_colorTemperatureChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) BrightnessChanged() {
	C.QCamera_brightnessChanged(this.h)
}
func (this *QCamera) OnBrightnessChanged(slot func()) {
	C.QCamera_connect_brightnessChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_brightnessChanged
func miqt_exec_callback_QCamera_brightnessChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) ContrastChanged() {
	C.QCamera_contrastChanged(this.h)
}
func (this *QCamera) OnContrastChanged(slot func()) {
	C.QCamera_connect_contrastChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_contrastChanged
func miqt_exec_callback_QCamera_contrastChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) SaturationChanged() {
	C.QCamera_saturationChanged(this.h)
}
func (this *QCamera) OnSaturationChanged(slot func()) {
	C.QCamera_connect_saturationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_saturationChanged
func miqt_exec_callback_QCamera_saturationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) HueChanged() {
	C.QCamera_hueChanged(this.h)
}
func (this *QCamera) OnHueChanged(slot func()) {
	C.QCamera_connect_hueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_hueChanged
func miqt_exec_callback_QCamera_hueChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QCamera_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCamera_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QCamera_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCamera) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QCamera_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_event
func miqt_exec_callback_QCamera_event(self *C.QCamera, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QCamera_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCamera) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QCamera_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_eventFilter
func miqt_exec_callback_QCamera_eventFilter(self *C.QCamera, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QCamera_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QCamera_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_timerEvent
func miqt_exec_callback_QCamera_timerEvent(self *C.QCamera, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCamera) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QCamera_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QCamera_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_childEvent
func miqt_exec_callback_QCamera_childEvent(self *C.QCamera, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCamera) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QCamera_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QCamera_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_customEvent
func miqt_exec_callback_QCamera_customEvent(self *C.QCamera, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCamera) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QCamera_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCamera) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCamera_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_connectNotify
func miqt_exec_callback_QCamera_connectNotify(self *C.QCamera, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCamera{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCamera) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QCamera_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCamera) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCamera_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_disconnectNotify
func miqt_exec_callback_QCamera_disconnectNotify(self *C.QCamera, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QCamera_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCamera) GoGC() {
	runtime.SetFinalizer(this, func(this *QCamera) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
