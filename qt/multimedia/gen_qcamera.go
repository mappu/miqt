package multimedia

/*

#include "gen_qcamera.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCamera__Status int

const (
	QCamera__UnavailableStatus QCamera__Status = 0
	QCamera__UnloadedStatus    QCamera__Status = 1
	QCamera__LoadingStatus     QCamera__Status = 2
	QCamera__UnloadingStatus   QCamera__Status = 3
	QCamera__LoadedStatus      QCamera__Status = 4
	QCamera__StandbyStatus     QCamera__Status = 5
	QCamera__StartingStatus    QCamera__Status = 6
	QCamera__StoppingStatus    QCamera__Status = 7
	QCamera__ActiveStatus      QCamera__Status = 8
)

type QCamera__State int

const (
	QCamera__UnloadedState QCamera__State = 0
	QCamera__LoadedState   QCamera__State = 1
	QCamera__ActiveState   QCamera__State = 2
)

type QCamera__CaptureMode int

const (
	QCamera__CaptureViewfinder QCamera__CaptureMode = 0
	QCamera__CaptureStillImage QCamera__CaptureMode = 1
	QCamera__CaptureVideo      QCamera__CaptureMode = 2
)

type QCamera__Error int

const (
	QCamera__NoError                  QCamera__Error = 0
	QCamera__CameraError              QCamera__Error = 1
	QCamera__InvalidRequestError      QCamera__Error = 2
	QCamera__ServiceMissingError      QCamera__Error = 3
	QCamera__NotSupportedFeatureError QCamera__Error = 4
)

type QCamera__LockStatus int

const (
	QCamera__Unlocked  QCamera__LockStatus = 0
	QCamera__Searching QCamera__LockStatus = 1
	QCamera__Locked    QCamera__LockStatus = 2
)

type QCamera__LockChangeReason int

const (
	QCamera__UserRequest       QCamera__LockChangeReason = 0
	QCamera__LockAcquired      QCamera__LockChangeReason = 1
	QCamera__LockFailed        QCamera__LockChangeReason = 2
	QCamera__LockLost          QCamera__LockChangeReason = 3
	QCamera__LockTemporaryLost QCamera__LockChangeReason = 4
)

type QCamera__LockType int

const (
	QCamera__NoLock           QCamera__LockType = 0
	QCamera__LockExposure     QCamera__LockType = 1
	QCamera__LockWhiteBalance QCamera__LockType = 2
	QCamera__LockFocus        QCamera__LockType = 4
)

type QCamera__Position int

const (
	QCamera__UnspecifiedPosition QCamera__Position = 0
	QCamera__BackFace            QCamera__Position = 1
	QCamera__FrontFace           QCamera__Position = 2
)

type QCamera struct {
	h *C.QCamera
	*QMediaObject
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
	var outptr_QMediaObject *C.QMediaObject = nil
	C.QCamera_virtbase(h, &outptr_QMediaObject)

	return &QCamera{h: h,
		QMediaObject: newQMediaObject(outptr_QMediaObject)}
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
func NewQCamera2(deviceName []byte) *QCamera {
	deviceName_alias := C.struct_miqt_string{}
	if len(deviceName) > 0 {
		deviceName_alias.data = (*C.char)(unsafe.Pointer(&deviceName[0]))
	} else {
		deviceName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	deviceName_alias.len = C.size_t(len(deviceName))

	return newQCamera(C.QCamera_new2(deviceName_alias))
}

// NewQCamera3 constructs a new QCamera object.
func NewQCamera3(cameraInfo *QCameraInfo) *QCamera {

	return newQCamera(C.QCamera_new3(cameraInfo.cPointer()))
}

// NewQCamera4 constructs a new QCamera object.
func NewQCamera4(position QCamera__Position) *QCamera {

	return newQCamera(C.QCamera_new4((C.int)(position)))
}

// NewQCamera5 constructs a new QCamera object.
func NewQCamera5(parent *qt.QObject) *QCamera {

	return newQCamera(C.QCamera_new5((*C.QObject)(parent.UnsafePointer())))
}

// NewQCamera6 constructs a new QCamera object.
func NewQCamera6(deviceName []byte, parent *qt.QObject) *QCamera {
	deviceName_alias := C.struct_miqt_string{}
	if len(deviceName) > 0 {
		deviceName_alias.data = (*C.char)(unsafe.Pointer(&deviceName[0]))
	} else {
		deviceName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	deviceName_alias.len = C.size_t(len(deviceName))

	return newQCamera(C.QCamera_new6(deviceName_alias, (*C.QObject)(parent.UnsafePointer())))
}

// NewQCamera7 constructs a new QCamera object.
func NewQCamera7(cameraInfo *QCameraInfo, parent *qt.QObject) *QCamera {

	return newQCamera(C.QCamera_new7(cameraInfo.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

// NewQCamera8 constructs a new QCamera object.
func NewQCamera8(position QCamera__Position, parent *qt.QObject) *QCamera {

	return newQCamera(C.QCamera_new8((C.int)(position), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QCamera) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCamera_metaObject(this.h)))
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

func QCamera_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCamera_AvailableDevices() [][]byte {
	var _ma C.struct_miqt_array = C.QCamera_availableDevices()
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QCamera_DeviceDescription(device []byte) string {
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	var _ms C.struct_miqt_string = C.QCamera_deviceDescription(device_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QCamera_availability(this.h))
}

func (this *QCamera) State() QCamera__State {
	return (QCamera__State)(C.QCamera_state(this.h))
}

func (this *QCamera) Status() QCamera__Status {
	return (QCamera__Status)(C.QCamera_status(this.h))
}

func (this *QCamera) CaptureMode() QCamera__CaptureMode {
	return (QCamera__CaptureMode)(C.QCamera_captureMode(this.h))
}

func (this *QCamera) IsCaptureModeSupported(mode QCamera__CaptureMode) bool {
	return (bool)(C.QCamera_isCaptureModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) Exposure() *QCameraExposure {
	return newQCameraExposure(C.QCamera_exposure(this.h))
}

func (this *QCamera) Focus() *QCameraFocus {
	return newQCameraFocus(C.QCamera_focus(this.h))
}

func (this *QCamera) ImageProcessing() *QCameraImageProcessing {
	return newQCameraImageProcessing(C.QCamera_imageProcessing(this.h))
}

func (this *QCamera) SetViewfinder(viewfinder *QVideoWidget) {
	C.QCamera_setViewfinder(this.h, viewfinder.cPointer())
}

func (this *QCamera) SetViewfinderWithViewfinder(viewfinder *QGraphicsVideoItem) {
	C.QCamera_setViewfinderWithViewfinder(this.h, viewfinder.cPointer())
}

func (this *QCamera) SetViewfinderWithSurface(surface *QAbstractVideoSurface) {
	C.QCamera_setViewfinderWithSurface(this.h, surface.cPointer())
}

func (this *QCamera) ViewfinderSettings() *QCameraViewfinderSettings {
	_goptr := newQCameraViewfinderSettings(C.QCamera_viewfinderSettings(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) SetViewfinderSettings(settings *QCameraViewfinderSettings) {
	C.QCamera_setViewfinderSettings(this.h, settings.cPointer())
}

func (this *QCamera) SupportedViewfinderSettings() []QCameraViewfinderSettings {
	var _ma C.struct_miqt_array = C.QCamera_supportedViewfinderSettings(this.h)
	_ret := make([]QCameraViewfinderSettings, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraViewfinderSettings)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraViewfinderSettings(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderResolutions() []qt.QSize {
	var _ma C.struct_miqt_array = C.QCamera_supportedViewfinderResolutions(this.h)
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderFrameRateRanges() []QCamera__FrameRateRange {
	var _ma C.struct_miqt_array = C.QCamera_supportedViewfinderFrameRateRanges(this.h)
	_ret := make([]QCamera__FrameRateRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QCamera__FrameRateRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCamera__FrameRateRange(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderPixelFormats() []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QCamera_supportedViewfinderPixelFormats(this.h)
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
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

func (this *QCamera) SupportedLocks() QCamera__LockType {
	return (QCamera__LockType)(C.QCamera_supportedLocks(this.h))
}

func (this *QCamera) RequestedLocks() QCamera__LockType {
	return (QCamera__LockType)(C.QCamera_requestedLocks(this.h))
}

func (this *QCamera) LockStatus() QCamera__LockStatus {
	return (QCamera__LockStatus)(C.QCamera_lockStatus(this.h))
}

func (this *QCamera) LockStatusWithLock(lock QCamera__LockType) QCamera__LockStatus {
	return (QCamera__LockStatus)(C.QCamera_lockStatusWithLock(this.h, (C.int)(lock)))
}

func (this *QCamera) SetCaptureMode(mode QCamera__CaptureMode) {
	C.QCamera_setCaptureMode(this.h, (C.int)(mode))
}

func (this *QCamera) Load() {
	C.QCamera_load(this.h)
}

func (this *QCamera) Unload() {
	C.QCamera_unload(this.h)
}

func (this *QCamera) Start() {
	C.QCamera_start(this.h)
}

func (this *QCamera) Stop() {
	C.QCamera_stop(this.h)
}

func (this *QCamera) SearchAndLock() {
	C.QCamera_searchAndLock(this.h)
}

func (this *QCamera) Unlock() {
	C.QCamera_unlock(this.h)
}

func (this *QCamera) SearchAndLockWithLocks(locks QCamera__LockType) {
	C.QCamera_searchAndLockWithLocks(this.h, (C.int)(locks))
}

func (this *QCamera) UnlockWithLocks(locks QCamera__LockType) {
	C.QCamera_unlockWithLocks(this.h, (C.int)(locks))
}

func (this *QCamera) StateChanged(state QCamera__State) {
	C.QCamera_stateChanged(this.h, (C.int)(state))
}
func (this *QCamera) OnStateChanged(slot func(state QCamera__State)) {
	C.QCamera_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_stateChanged
func miqt_exec_callback_QCamera_stateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QCamera__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__State)(state)

	gofunc(slotval1)
}

func (this *QCamera) CaptureModeChanged(param1 QCamera__CaptureMode) {
	C.QCamera_captureModeChanged(this.h, (C.int)(param1))
}
func (this *QCamera) OnCaptureModeChanged(slot func(param1 QCamera__CaptureMode)) {
	C.QCamera_connect_captureModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_captureModeChanged
func miqt_exec_callback_QCamera_captureModeChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QCamera__CaptureMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__CaptureMode)(param1)

	gofunc(slotval1)
}

func (this *QCamera) StatusChanged(status QCamera__Status) {
	C.QCamera_statusChanged(this.h, (C.int)(status))
}
func (this *QCamera) OnStatusChanged(slot func(status QCamera__Status)) {
	C.QCamera_connect_statusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_statusChanged
func miqt_exec_callback_QCamera_statusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QCamera__Status))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__Status)(status)

	gofunc(slotval1)
}

func (this *QCamera) Locked() {
	C.QCamera_locked(this.h)
}
func (this *QCamera) OnLocked(slot func()) {
	C.QCamera_connect_locked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_locked
func miqt_exec_callback_QCamera_locked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) LockFailed() {
	C.QCamera_lockFailed(this.h)
}
func (this *QCamera) OnLockFailed(slot func()) {
	C.QCamera_connect_lockFailed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_lockFailed
func miqt_exec_callback_QCamera_lockFailed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) LockStatusChanged(status QCamera__LockStatus, reason QCamera__LockChangeReason) {
	C.QCamera_lockStatusChanged(this.h, (C.int)(status), (C.int)(reason))
}
func (this *QCamera) OnLockStatusChanged(slot func(status QCamera__LockStatus, reason QCamera__LockChangeReason)) {
	C.QCamera_connect_lockStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_lockStatusChanged
func miqt_exec_callback_QCamera_lockStatusChanged(cb C.intptr_t, status C.int, reason C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QCamera__LockStatus, reason QCamera__LockChangeReason))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__LockStatus)(status)

	slotval2 := (QCamera__LockChangeReason)(reason)

	gofunc(slotval1, slotval2)
}

func (this *QCamera) LockStatusChanged2(lock QCamera__LockType, status QCamera__LockStatus, reason QCamera__LockChangeReason) {
	C.QCamera_lockStatusChanged2(this.h, (C.int)(lock), (C.int)(status), (C.int)(reason))
}
func (this *QCamera) OnLockStatusChanged2(slot func(lock QCamera__LockType, status QCamera__LockStatus, reason QCamera__LockChangeReason)) {
	C.QCamera_connect_lockStatusChanged2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_lockStatusChanged2
func miqt_exec_callback_QCamera_lockStatusChanged2(cb C.intptr_t, lock C.int, status C.int, reason C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(lock QCamera__LockType, status QCamera__LockStatus, reason QCamera__LockChangeReason))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__LockType)(lock)

	slotval2 := (QCamera__LockStatus)(status)

	slotval3 := (QCamera__LockChangeReason)(reason)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QCamera) ErrorWithQCameraError(param1 QCamera__Error) {
	C.QCamera_errorWithQCameraError(this.h, (C.int)(param1))
}
func (this *QCamera) OnErrorWithQCameraError(slot func(param1 QCamera__Error)) {
	C.QCamera_connect_errorWithQCameraError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_errorWithQCameraError
func miqt_exec_callback_QCamera_errorWithQCameraError(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QCamera__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__Error)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ErrorOccurred(param1 QCamera__Error) {
	C.QCamera_errorOccurred(this.h, (C.int)(param1))
}
func (this *QCamera) OnErrorOccurred(slot func(param1 QCamera__Error)) {
	C.QCamera_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_errorOccurred
func miqt_exec_callback_QCamera_errorOccurred(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QCamera__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__Error)(param1)

	gofunc(slotval1)
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

func QCamera_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCamera_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) SupportedViewfinderSettingsWithSettings(settings *QCameraViewfinderSettings) []QCameraViewfinderSettings {
	var _ma C.struct_miqt_array = C.QCamera_supportedViewfinderSettingsWithSettings(this.h, settings.cPointer())
	_ret := make([]QCameraViewfinderSettings, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraViewfinderSettings)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraViewfinderSettings(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderResolutionsWithSettings(settings *QCameraViewfinderSettings) []qt.QSize {
	var _ma C.struct_miqt_array = C.QCamera_supportedViewfinderResolutionsWithSettings(this.h, settings.cPointer())
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderFrameRateRangesWithSettings(settings *QCameraViewfinderSettings) []QCamera__FrameRateRange {
	var _ma C.struct_miqt_array = C.QCamera_supportedViewfinderFrameRateRangesWithSettings(this.h, settings.cPointer())
	_ret := make([]QCamera__FrameRateRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QCamera__FrameRateRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCamera__FrameRateRange(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderPixelFormatsWithSettings(settings *QCameraViewfinderSettings) []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QCamera_supportedViewfinderPixelFormatsWithSettings(this.h, settings.cPointer())
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

// AddPropertyWatch can only be called from a QCamera that was directly constructed.
func (this *QCamera) AddPropertyWatch(name []byte) {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	var _dynamic_cast_ok C.bool = false
	C.QCamera_protectedbase_addPropertyWatch(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_alias)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemovePropertyWatch can only be called from a QCamera that was directly constructed.
func (this *QCamera) RemovePropertyWatch(name []byte) {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	var _dynamic_cast_ok C.bool = false
	C.QCamera_protectedbase_removePropertyWatch(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_alias)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QCamera that was directly constructed.
func (this *QCamera) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QCamera_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCamera that was directly constructed.
func (this *QCamera) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCamera_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCamera that was directly constructed.
func (this *QCamera) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCamera_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCamera that was directly constructed.
func (this *QCamera) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCamera_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QCamera) callVirtualBase_Availability() QMultimedia__AvailabilityStatus {

	return (QMultimedia__AvailabilityStatus)(C.QCamera_virtualbase_availability(unsafe.Pointer(this.h)))

}
func (this *QCamera) OnAvailability(slot func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus) {
	ok := C.QCamera_override_virtual_availability(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_availability
func miqt_exec_callback_QCamera_availability(self *C.QCamera, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_Availability)

	return (C.int)(virtualReturn)

}

func (this *QCamera) callVirtualBase_IsAvailable() bool {

	return (bool)(C.QCamera_virtualbase_isAvailable(unsafe.Pointer(this.h)))

}
func (this *QCamera) OnIsAvailable(slot func(super func() bool) bool) {
	ok := C.QCamera_override_virtual_isAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_isAvailable
func miqt_exec_callback_QCamera_isAvailable(self *C.QCamera, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_IsAvailable)

	return (C.bool)(virtualReturn)

}

func (this *QCamera) callVirtualBase_Service() *QMediaService {

	return newQMediaService(C.QCamera_virtualbase_service(unsafe.Pointer(this.h)))

}
func (this *QCamera) OnService(slot func(super func() *QMediaService) *QMediaService) {
	ok := C.QCamera_override_virtual_service(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_service
func miqt_exec_callback_QCamera_service(self *C.QCamera, cb C.intptr_t) *C.QMediaService {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaService) *QMediaService)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_Service)

	return virtualReturn.cPointer()

}

func (this *QCamera) callVirtualBase_Bind(param1 *qt.QObject) bool {

	return (bool)(C.QCamera_virtualbase_bind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer())))

}
func (this *QCamera) OnBind(slot func(super func(param1 *qt.QObject) bool, param1 *qt.QObject) bool) {
	ok := C.QCamera_override_virtual_bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_bind
func miqt_exec_callback_QCamera_bind(self *C.QCamera, cb C.intptr_t, param1 *C.QObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject) bool, param1 *qt.QObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_Bind, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCamera) callVirtualBase_Unbind(param1 *qt.QObject) {

	C.QCamera_virtualbase_unbind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()))

}
func (this *QCamera) OnUnbind(slot func(super func(param1 *qt.QObject), param1 *qt.QObject)) {
	ok := C.QCamera_override_virtual_unbind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_unbind
func miqt_exec_callback_QCamera_unbind(self *C.QCamera, cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject), param1 *qt.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	gofunc((&QCamera{h: self}).callVirtualBase_Unbind, slotval1)

}

func (this *QCamera) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QCamera_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCamera) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QCamera_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_event
func miqt_exec_callback_QCamera_event(self *C.QCamera, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCamera) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QCamera_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCamera) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QCamera_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_eventFilter
func miqt_exec_callback_QCamera_eventFilter(self *C.QCamera, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCamera) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QCamera_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QCamera_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_timerEvent
func miqt_exec_callback_QCamera_timerEvent(self *C.QCamera, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCamera) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QCamera_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QCamera_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_childEvent
func miqt_exec_callback_QCamera_childEvent(self *C.QCamera, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCamera) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QCamera_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCamera) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QCamera_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_customEvent
func miqt_exec_callback_QCamera_customEvent(self *C.QCamera, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCamera{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCamera) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QCamera_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCamera) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QCamera_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_connectNotify
func miqt_exec_callback_QCamera_connectNotify(self *C.QCamera, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCamera{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCamera) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QCamera_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCamera) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QCamera_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_disconnectNotify
func miqt_exec_callback_QCamera_disconnectNotify(self *C.QCamera, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

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

type QCamera__FrameRateRange struct {
	h *C.QCamera__FrameRateRange
}

func (this *QCamera__FrameRateRange) cPointer() *C.QCamera__FrameRateRange {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCamera__FrameRateRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCamera__FrameRateRange constructs the type using only CGO pointers.
func newQCamera__FrameRateRange(h *C.QCamera__FrameRateRange) *QCamera__FrameRateRange {
	if h == nil {
		return nil
	}

	return &QCamera__FrameRateRange{h: h}
}

// UnsafeNewQCamera__FrameRateRange constructs the type using only unsafe pointers.
func UnsafeNewQCamera__FrameRateRange(h unsafe.Pointer) *QCamera__FrameRateRange {
	return newQCamera__FrameRateRange((*C.QCamera__FrameRateRange)(h))
}

// NewQCamera__FrameRateRange constructs a new QCamera::FrameRateRange object.
func NewQCamera__FrameRateRange() *QCamera__FrameRateRange {

	return newQCamera__FrameRateRange(C.QCamera__FrameRateRange_new())
}

// NewQCamera__FrameRateRange2 constructs a new QCamera::FrameRateRange object.
func NewQCamera__FrameRateRange2(minimum float64, maximum float64) *QCamera__FrameRateRange {

	return newQCamera__FrameRateRange(C.QCamera__FrameRateRange_new2((C.double)(minimum), (C.double)(maximum)))
}

// NewQCamera__FrameRateRange3 constructs a new QCamera::FrameRateRange object.
func NewQCamera__FrameRateRange3(param1 *QCamera__FrameRateRange) *QCamera__FrameRateRange {

	return newQCamera__FrameRateRange(C.QCamera__FrameRateRange_new3(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCamera__FrameRateRange) Delete() {
	C.QCamera__FrameRateRange_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCamera__FrameRateRange) GoGC() {
	runtime.SetFinalizer(this, func(this *QCamera__FrameRateRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
