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
	deviceName_alias.data = (*C.char)(unsafe.Pointer(&deviceName[0]))
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
	deviceName_alias.data = (*C.char)(unsafe.Pointer(&deviceName[0]))
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
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCamera_MetaObject(this.h)))
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

func QCamera_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCamera_AvailableDevices() [][]byte {
	var _ma C.struct_miqt_array = C.QCamera_AvailableDevices()
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
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	var _ms C.struct_miqt_string = C.QCamera_DeviceDescription(device_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QCamera_Availability(this.h))
}

func (this *QCamera) State() QCamera__State {
	return (QCamera__State)(C.QCamera_State(this.h))
}

func (this *QCamera) Status() QCamera__Status {
	return (QCamera__Status)(C.QCamera_Status(this.h))
}

func (this *QCamera) CaptureMode() QCamera__CaptureMode {
	return (QCamera__CaptureMode)(C.QCamera_CaptureMode(this.h))
}

func (this *QCamera) IsCaptureModeSupported(mode QCamera__CaptureMode) bool {
	return (bool)(C.QCamera_IsCaptureModeSupported(this.h, (C.int)(mode)))
}

func (this *QCamera) Exposure() *QCameraExposure {
	return newQCameraExposure(C.QCamera_Exposure(this.h))
}

func (this *QCamera) Focus() *QCameraFocus {
	return newQCameraFocus(C.QCamera_Focus(this.h))
}

func (this *QCamera) ImageProcessing() *QCameraImageProcessing {
	return newQCameraImageProcessing(C.QCamera_ImageProcessing(this.h))
}

func (this *QCamera) SetViewfinder(viewfinder *QVideoWidget) {
	C.QCamera_SetViewfinder(this.h, viewfinder.cPointer())
}

func (this *QCamera) SetViewfinderWithViewfinder(viewfinder *QGraphicsVideoItem) {
	C.QCamera_SetViewfinderWithViewfinder(this.h, viewfinder.cPointer())
}

func (this *QCamera) SetViewfinderWithSurface(surface *QAbstractVideoSurface) {
	C.QCamera_SetViewfinderWithSurface(this.h, surface.cPointer())
}

func (this *QCamera) ViewfinderSettings() *QCameraViewfinderSettings {
	_goptr := newQCameraViewfinderSettings(C.QCamera_ViewfinderSettings(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCamera) SetViewfinderSettings(settings *QCameraViewfinderSettings) {
	C.QCamera_SetViewfinderSettings(this.h, settings.cPointer())
}

func (this *QCamera) SupportedViewfinderSettings() []QCameraViewfinderSettings {
	var _ma C.struct_miqt_array = C.QCamera_SupportedViewfinderSettings(this.h)
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
	var _ma C.struct_miqt_array = C.QCamera_SupportedViewfinderResolutions(this.h)
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
	var _ma C.struct_miqt_array = C.QCamera_SupportedViewfinderFrameRateRanges(this.h)
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
	var _ma C.struct_miqt_array = C.QCamera_SupportedViewfinderPixelFormats(this.h)
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
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

func (this *QCamera) SupportedLocks() QCamera__LockType {
	return (QCamera__LockType)(C.QCamera_SupportedLocks(this.h))
}

func (this *QCamera) RequestedLocks() QCamera__LockType {
	return (QCamera__LockType)(C.QCamera_RequestedLocks(this.h))
}

func (this *QCamera) LockStatus() QCamera__LockStatus {
	return (QCamera__LockStatus)(C.QCamera_LockStatus(this.h))
}

func (this *QCamera) LockStatusWithLock(lock QCamera__LockType) QCamera__LockStatus {
	return (QCamera__LockStatus)(C.QCamera_LockStatusWithLock(this.h, (C.int)(lock)))
}

func (this *QCamera) SetCaptureMode(mode QCamera__CaptureMode) {
	C.QCamera_SetCaptureMode(this.h, (C.int)(mode))
}

func (this *QCamera) Load() {
	C.QCamera_Load(this.h)
}

func (this *QCamera) Unload() {
	C.QCamera_Unload(this.h)
}

func (this *QCamera) Start() {
	C.QCamera_Start(this.h)
}

func (this *QCamera) Stop() {
	C.QCamera_Stop(this.h)
}

func (this *QCamera) SearchAndLock() {
	C.QCamera_SearchAndLock(this.h)
}

func (this *QCamera) Unlock() {
	C.QCamera_Unlock(this.h)
}

func (this *QCamera) SearchAndLockWithLocks(locks QCamera__LockType) {
	C.QCamera_SearchAndLockWithLocks(this.h, (C.int)(locks))
}

func (this *QCamera) UnlockWithLocks(locks QCamera__LockType) {
	C.QCamera_UnlockWithLocks(this.h, (C.int)(locks))
}

func (this *QCamera) StateChanged(state QCamera__State) {
	C.QCamera_StateChanged(this.h, (C.int)(state))
}
func (this *QCamera) OnStateChanged(slot func(state QCamera__State)) {
	C.QCamera_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_StateChanged
func miqt_exec_callback_QCamera_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QCamera__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__State)(state)

	gofunc(slotval1)
}

func (this *QCamera) CaptureModeChanged(param1 QCamera__CaptureMode) {
	C.QCamera_CaptureModeChanged(this.h, (C.int)(param1))
}
func (this *QCamera) OnCaptureModeChanged(slot func(param1 QCamera__CaptureMode)) {
	C.QCamera_connect_CaptureModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_CaptureModeChanged
func miqt_exec_callback_QCamera_CaptureModeChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QCamera__CaptureMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__CaptureMode)(param1)

	gofunc(slotval1)
}

func (this *QCamera) StatusChanged(status QCamera__Status) {
	C.QCamera_StatusChanged(this.h, (C.int)(status))
}
func (this *QCamera) OnStatusChanged(slot func(status QCamera__Status)) {
	C.QCamera_connect_StatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_StatusChanged
func miqt_exec_callback_QCamera_StatusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QCamera__Status))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__Status)(status)

	gofunc(slotval1)
}

func (this *QCamera) Locked() {
	C.QCamera_Locked(this.h)
}
func (this *QCamera) OnLocked(slot func()) {
	C.QCamera_connect_Locked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_Locked
func miqt_exec_callback_QCamera_Locked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) LockFailed() {
	C.QCamera_LockFailed(this.h)
}
func (this *QCamera) OnLockFailed(slot func()) {
	C.QCamera_connect_LockFailed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_LockFailed
func miqt_exec_callback_QCamera_LockFailed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCamera) LockStatusChanged(status QCamera__LockStatus, reason QCamera__LockChangeReason) {
	C.QCamera_LockStatusChanged(this.h, (C.int)(status), (C.int)(reason))
}
func (this *QCamera) OnLockStatusChanged(slot func(status QCamera__LockStatus, reason QCamera__LockChangeReason)) {
	C.QCamera_connect_LockStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_LockStatusChanged
func miqt_exec_callback_QCamera_LockStatusChanged(cb C.intptr_t, status C.int, reason C.int) {
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
	C.QCamera_LockStatusChanged2(this.h, (C.int)(lock), (C.int)(status), (C.int)(reason))
}
func (this *QCamera) OnLockStatusChanged2(slot func(lock QCamera__LockType, status QCamera__LockStatus, reason QCamera__LockChangeReason)) {
	C.QCamera_connect_LockStatusChanged2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_LockStatusChanged2
func miqt_exec_callback_QCamera_LockStatusChanged2(cb C.intptr_t, lock C.int, status C.int, reason C.int) {
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
	C.QCamera_ErrorWithQCameraError(this.h, (C.int)(param1))
}
func (this *QCamera) OnErrorWithQCameraError(slot func(param1 QCamera__Error)) {
	C.QCamera_connect_ErrorWithQCameraError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ErrorWithQCameraError
func miqt_exec_callback_QCamera_ErrorWithQCameraError(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QCamera__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCamera__Error)(param1)

	gofunc(slotval1)
}

func (this *QCamera) ErrorOccurred(param1 QCamera__Error) {
	C.QCamera_ErrorOccurred(this.h, (C.int)(param1))
}
func (this *QCamera) OnErrorOccurred(slot func(param1 QCamera__Error)) {
	C.QCamera_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCamera_ErrorOccurred
func miqt_exec_callback_QCamera_ErrorOccurred(cb C.intptr_t, param1 C.int) {
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

func QCamera_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCamera_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCamera_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCamera) SupportedViewfinderSettings1(settings *QCameraViewfinderSettings) []QCameraViewfinderSettings {
	var _ma C.struct_miqt_array = C.QCamera_SupportedViewfinderSettings1(this.h, settings.cPointer())
	_ret := make([]QCameraViewfinderSettings, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraViewfinderSettings)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraViewfinderSettings(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderResolutions1(settings *QCameraViewfinderSettings) []qt.QSize {
	var _ma C.struct_miqt_array = C.QCamera_SupportedViewfinderResolutions1(this.h, settings.cPointer())
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderFrameRateRanges1(settings *QCameraViewfinderSettings) []QCamera__FrameRateRange {
	var _ma C.struct_miqt_array = C.QCamera_SupportedViewfinderFrameRateRanges1(this.h, settings.cPointer())
	_ret := make([]QCamera__FrameRateRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QCamera__FrameRateRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCamera__FrameRateRange(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCamera) SupportedViewfinderPixelFormats1(settings *QCameraViewfinderSettings) []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QCamera_SupportedViewfinderPixelFormats1(this.h, settings.cPointer())
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

func (this *QCamera) callVirtualBase_Availability() QMultimedia__AvailabilityStatus {

	return (QMultimedia__AvailabilityStatus)(C.QCamera_virtualbase_Availability(unsafe.Pointer(this.h)))

}
func (this *QCamera) OnAvailability(slot func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus) {
	ok := C.QCamera_override_virtual_Availability(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_Availability
func miqt_exec_callback_QCamera_Availability(self *C.QCamera, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_Availability)

	return (C.int)(virtualReturn)

}

func (this *QCamera) callVirtualBase_IsAvailable() bool {

	return (bool)(C.QCamera_virtualbase_IsAvailable(unsafe.Pointer(this.h)))

}
func (this *QCamera) OnIsAvailable(slot func(super func() bool) bool) {
	ok := C.QCamera_override_virtual_IsAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_IsAvailable
func miqt_exec_callback_QCamera_IsAvailable(self *C.QCamera, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_IsAvailable)

	return (C.bool)(virtualReturn)

}

func (this *QCamera) callVirtualBase_Service() *QMediaService {

	return newQMediaService(C.QCamera_virtualbase_Service(unsafe.Pointer(this.h)))

}
func (this *QCamera) OnService(slot func(super func() *QMediaService) *QMediaService) {
	ok := C.QCamera_override_virtual_Service(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_Service
func miqt_exec_callback_QCamera_Service(self *C.QCamera, cb C.intptr_t) *C.QMediaService {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaService) *QMediaService)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCamera{h: self}).callVirtualBase_Service)

	return virtualReturn.cPointer()

}

func (this *QCamera) callVirtualBase_Bind(param1 *qt.QObject) bool {

	return (bool)(C.QCamera_virtualbase_Bind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer())))

}
func (this *QCamera) OnBind(slot func(super func(param1 *qt.QObject) bool, param1 *qt.QObject) bool) {
	ok := C.QCamera_override_virtual_Bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_Bind
func miqt_exec_callback_QCamera_Bind(self *C.QCamera, cb C.intptr_t, param1 *C.QObject) C.bool {
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

	C.QCamera_virtualbase_Unbind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()))

}
func (this *QCamera) OnUnbind(slot func(super func(param1 *qt.QObject), param1 *qt.QObject)) {
	ok := C.QCamera_override_virtual_Unbind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCamera_Unbind
func miqt_exec_callback_QCamera_Unbind(self *C.QCamera, cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject), param1 *qt.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	gofunc((&QCamera{h: self}).callVirtualBase_Unbind, slotval1)

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
	C.QCamera__FrameRateRange_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCamera__FrameRateRange) GoGC() {
	runtime.SetFinalizer(this, func(this *QCamera__FrameRateRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
