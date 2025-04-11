package multimedia

/*

#include "gen_qcameraimagecapture.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraImageCapture__Error int

const (
	QCameraImageCapture__NoError                  QCameraImageCapture__Error = 0
	QCameraImageCapture__NotReadyError            QCameraImageCapture__Error = 1
	QCameraImageCapture__ResourceError            QCameraImageCapture__Error = 2
	QCameraImageCapture__OutOfSpaceError          QCameraImageCapture__Error = 3
	QCameraImageCapture__NotSupportedFeatureError QCameraImageCapture__Error = 4
	QCameraImageCapture__FormatError              QCameraImageCapture__Error = 5
)

type QCameraImageCapture__DriveMode int

const (
	QCameraImageCapture__SingleImageCapture QCameraImageCapture__DriveMode = 0
)

type QCameraImageCapture__CaptureDestination int

const (
	QCameraImageCapture__CaptureToFile   QCameraImageCapture__CaptureDestination = 1
	QCameraImageCapture__CaptureToBuffer QCameraImageCapture__CaptureDestination = 2
)

type QCameraImageCapture struct {
	h *C.QCameraImageCapture
	*qt.QObject
	*QMediaBindableInterface
}

func (this *QCameraImageCapture) cPointer() *C.QCameraImageCapture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraImageCapture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraImageCapture constructs the type using only CGO pointers.
func newQCameraImageCapture(h *C.QCameraImageCapture) *QCameraImageCapture {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QMediaBindableInterface *C.QMediaBindableInterface = nil
	C.QCameraImageCapture_virtbase(h, &outptr_QObject, &outptr_QMediaBindableInterface)

	return &QCameraImageCapture{h: h,
		QObject:                 qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QMediaBindableInterface: newQMediaBindableInterface(outptr_QMediaBindableInterface)}
}

// UnsafeNewQCameraImageCapture constructs the type using only unsafe pointers.
func UnsafeNewQCameraImageCapture(h unsafe.Pointer) *QCameraImageCapture {
	return newQCameraImageCapture((*C.QCameraImageCapture)(h))
}

// NewQCameraImageCapture constructs a new QCameraImageCapture object.
func NewQCameraImageCapture(mediaObject *QMediaObject) *QCameraImageCapture {

	return newQCameraImageCapture(C.QCameraImageCapture_new(mediaObject.cPointer()))
}

// NewQCameraImageCapture2 constructs a new QCameraImageCapture object.
func NewQCameraImageCapture2(mediaObject *QMediaObject, parent *qt.QObject) *QCameraImageCapture {

	return newQCameraImageCapture(C.QCameraImageCapture_new2(mediaObject.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QCameraImageCapture) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraImageCapture_metaObject(this.h)))
}

func (this *QCameraImageCapture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraImageCapture_metacast(this.h, param1_Cstring))
}

func QCameraImageCapture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCapture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCapture) IsAvailable() bool {
	return (bool)(C.QCameraImageCapture_isAvailable(this.h))
}

func (this *QCameraImageCapture) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QCameraImageCapture_availability(this.h))
}

func (this *QCameraImageCapture) MediaObject() *QMediaObject {
	return newQMediaObject(C.QCameraImageCapture_mediaObject(this.h))
}

func (this *QCameraImageCapture) Error() QCameraImageCapture__Error {
	return (QCameraImageCapture__Error)(C.QCameraImageCapture_error(this.h))
}

func (this *QCameraImageCapture) ErrorString() string {
	var _ms C.struct_miqt_string = C.QCameraImageCapture_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCapture) IsReadyForCapture() bool {
	return (bool)(C.QCameraImageCapture_isReadyForCapture(this.h))
}

func (this *QCameraImageCapture) SupportedImageCodecs() []string {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_supportedImageCodecs(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QCameraImageCapture) ImageCodecDescription(codecName string) string {
	codecName_ms := C.struct_miqt_string{}
	codecName_ms.data = C.CString(codecName)
	codecName_ms.len = C.size_t(len(codecName))
	defer C.free(unsafe.Pointer(codecName_ms.data))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_imageCodecDescription(this.h, codecName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCapture) SupportedResolutions() []qt.QSize {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_supportedResolutions(this.h)
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraImageCapture) EncodingSettings() *QImageEncoderSettings {
	_goptr := newQImageEncoderSettings(C.QCameraImageCapture_encodingSettings(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraImageCapture) SetEncodingSettings(settings *QImageEncoderSettings) {
	C.QCameraImageCapture_setEncodingSettings(this.h, settings.cPointer())
}

func (this *QCameraImageCapture) SupportedBufferFormats() []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_supportedBufferFormats(this.h)
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

func (this *QCameraImageCapture) BufferFormat() QVideoFrame__PixelFormat {
	return (QVideoFrame__PixelFormat)(C.QCameraImageCapture_bufferFormat(this.h))
}

func (this *QCameraImageCapture) SetBufferFormat(format QVideoFrame__PixelFormat) {
	C.QCameraImageCapture_setBufferFormat(this.h, (C.int)(format))
}

func (this *QCameraImageCapture) IsCaptureDestinationSupported(destination QCameraImageCapture__CaptureDestination) bool {
	return (bool)(C.QCameraImageCapture_isCaptureDestinationSupported(this.h, (C.int)(destination)))
}

func (this *QCameraImageCapture) CaptureDestination() QCameraImageCapture__CaptureDestination {
	return (QCameraImageCapture__CaptureDestination)(C.QCameraImageCapture_captureDestination(this.h))
}

func (this *QCameraImageCapture) SetCaptureDestination(destination QCameraImageCapture__CaptureDestination) {
	C.QCameraImageCapture_setCaptureDestination(this.h, (C.int)(destination))
}

func (this *QCameraImageCapture) Capture() int {
	return (int)(C.QCameraImageCapture_capture(this.h))
}

func (this *QCameraImageCapture) CancelCapture() {
	C.QCameraImageCapture_cancelCapture(this.h)
}

func (this *QCameraImageCapture) Error2(id int, error QCameraImageCapture__Error, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QCameraImageCapture_error2(this.h, (C.int)(id), (C.int)(error), errorString_ms)
}
func (this *QCameraImageCapture) OnError2(slot func(id int, error QCameraImageCapture__Error, errorString string)) {
	C.QCameraImageCapture_connect_error2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_error2
func miqt_exec_callback_QCameraImageCapture_error2(cb C.intptr_t, id C.int, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, error QCameraImageCapture__Error, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (QCameraImageCapture__Error)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval3 := errorString_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QCameraImageCapture) ReadyForCaptureChanged(ready bool) {
	C.QCameraImageCapture_readyForCaptureChanged(this.h, (C.bool)(ready))
}
func (this *QCameraImageCapture) OnReadyForCaptureChanged(slot func(ready bool)) {
	C.QCameraImageCapture_connect_readyForCaptureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_readyForCaptureChanged
func miqt_exec_callback_QCameraImageCapture_readyForCaptureChanged(cb C.intptr_t, ready C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ready bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ready)

	gofunc(slotval1)
}

func (this *QCameraImageCapture) BufferFormatChanged(format QVideoFrame__PixelFormat) {
	C.QCameraImageCapture_bufferFormatChanged(this.h, (C.int)(format))
}
func (this *QCameraImageCapture) OnBufferFormatChanged(slot func(format QVideoFrame__PixelFormat)) {
	C.QCameraImageCapture_connect_bufferFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_bufferFormatChanged
func miqt_exec_callback_QCameraImageCapture_bufferFormatChanged(cb C.intptr_t, format C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format QVideoFrame__PixelFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QVideoFrame__PixelFormat)(format)

	gofunc(slotval1)
}

func (this *QCameraImageCapture) CaptureDestinationChanged(destination QCameraImageCapture__CaptureDestination) {
	C.QCameraImageCapture_captureDestinationChanged(this.h, (C.int)(destination))
}
func (this *QCameraImageCapture) OnCaptureDestinationChanged(slot func(destination QCameraImageCapture__CaptureDestination)) {
	C.QCameraImageCapture_connect_captureDestinationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_captureDestinationChanged
func miqt_exec_callback_QCameraImageCapture_captureDestinationChanged(cb C.intptr_t, destination C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(destination QCameraImageCapture__CaptureDestination))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCameraImageCapture__CaptureDestination)(destination)

	gofunc(slotval1)
}

func (this *QCameraImageCapture) ImageExposed(id int) {
	C.QCameraImageCapture_imageExposed(this.h, (C.int)(id))
}
func (this *QCameraImageCapture) OnImageExposed(slot func(id int)) {
	C.QCameraImageCapture_connect_imageExposed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_imageExposed
func miqt_exec_callback_QCameraImageCapture_imageExposed(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func (this *QCameraImageCapture) ImageCaptured(id int, preview *qt.QImage) {
	C.QCameraImageCapture_imageCaptured(this.h, (C.int)(id), (*C.QImage)(preview.UnsafePointer()))
}
func (this *QCameraImageCapture) OnImageCaptured(slot func(id int, preview *qt.QImage)) {
	C.QCameraImageCapture_connect_imageCaptured(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_imageCaptured
func miqt_exec_callback_QCameraImageCapture_imageCaptured(cb C.intptr_t, id C.int, preview *C.QImage) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, preview *qt.QImage))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := qt.UnsafeNewQImage(unsafe.Pointer(preview))

	gofunc(slotval1, slotval2)
}

func (this *QCameraImageCapture) ImageMetadataAvailable(id int, key string, value *qt.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QCameraImageCapture_imageMetadataAvailable(this.h, (C.int)(id), key_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QCameraImageCapture) OnImageMetadataAvailable(slot func(id int, key string, value *qt.QVariant)) {
	C.QCameraImageCapture_connect_imageMetadataAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_imageMetadataAvailable
func miqt_exec_callback_QCameraImageCapture_imageMetadataAvailable(cb C.intptr_t, id C.int, key C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, key string, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval2 := key_ret
	slotval3 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QCameraImageCapture) ImageAvailable(id int, frame *QVideoFrame) {
	C.QCameraImageCapture_imageAvailable(this.h, (C.int)(id), frame.cPointer())
}
func (this *QCameraImageCapture) OnImageAvailable(slot func(id int, frame *QVideoFrame)) {
	C.QCameraImageCapture_connect_imageAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_imageAvailable
func miqt_exec_callback_QCameraImageCapture_imageAvailable(cb C.intptr_t, id C.int, frame *C.QVideoFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, frame *QVideoFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := newQVideoFrame(frame)

	gofunc(slotval1, slotval2)
}

func (this *QCameraImageCapture) ImageSaved(id int, fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QCameraImageCapture_imageSaved(this.h, (C.int)(id), fileName_ms)
}
func (this *QCameraImageCapture) OnImageSaved(slot func(id int, fileName string)) {
	C.QCameraImageCapture_connect_imageSaved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_imageSaved
func miqt_exec_callback_QCameraImageCapture_imageSaved(cb C.intptr_t, id C.int, fileName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, fileName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	var fileName_ms C.struct_miqt_string = fileName
	fileName_ret := C.GoStringN(fileName_ms.data, C.int(int64(fileName_ms.len)))
	C.free(unsafe.Pointer(fileName_ms.data))
	slotval2 := fileName_ret

	gofunc(slotval1, slotval2)
}

func QCameraImageCapture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCapture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCapture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCapture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCapture) SupportedResolutionsWithSettings(settings *QImageEncoderSettings) []qt.QSize {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_supportedResolutionsWithSettings(this.h, settings.cPointer())
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraImageCapture) SupportedResolutions2(settings *QImageEncoderSettings, continuous *bool) []qt.QSize {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_supportedResolutions2(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraImageCapture) CaptureWithLocation(location string) int {
	location_ms := C.struct_miqt_string{}
	location_ms.data = C.CString(location)
	location_ms.len = C.size_t(len(location))
	defer C.free(unsafe.Pointer(location_ms.data))
	return (int)(C.QCameraImageCapture_captureWithLocation(this.h, location_ms))
}

// Sender can only be called from a QCameraImageCapture that was directly constructed.
func (this *QCameraImageCapture) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QCameraImageCapture_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCameraImageCapture that was directly constructed.
func (this *QCameraImageCapture) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCameraImageCapture_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCameraImageCapture that was directly constructed.
func (this *QCameraImageCapture) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCameraImageCapture_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCameraImageCapture that was directly constructed.
func (this *QCameraImageCapture) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCameraImageCapture_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QCameraImageCapture) callVirtualBase_MediaObject() *QMediaObject {

	return newQMediaObject(C.QCameraImageCapture_virtualbase_mediaObject(unsafe.Pointer(this.h)))

}
func (this *QCameraImageCapture) OnMediaObject(slot func(super func() *QMediaObject) *QMediaObject) {
	ok := C.QCameraImageCapture_override_virtual_mediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_mediaObject
func miqt_exec_callback_QCameraImageCapture_mediaObject(self *C.QCameraImageCapture, cb C.intptr_t) *C.QMediaObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaObject) *QMediaObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraImageCapture{h: self}).callVirtualBase_MediaObject)

	return virtualReturn.cPointer()

}

func (this *QCameraImageCapture) callVirtualBase_SetMediaObject(mediaObject *QMediaObject) bool {

	return (bool)(C.QCameraImageCapture_virtualbase_setMediaObject(unsafe.Pointer(this.h), mediaObject.cPointer()))

}
func (this *QCameraImageCapture) OnSetMediaObject(slot func(super func(mediaObject *QMediaObject) bool, mediaObject *QMediaObject) bool) {
	ok := C.QCameraImageCapture_override_virtual_setMediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_setMediaObject
func miqt_exec_callback_QCameraImageCapture_setMediaObject(self *C.QCameraImageCapture, cb C.intptr_t, mediaObject *C.QMediaObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mediaObject *QMediaObject) bool, mediaObject *QMediaObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaObject(mediaObject)

	virtualReturn := gofunc((&QCameraImageCapture{h: self}).callVirtualBase_SetMediaObject, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCameraImageCapture) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QCameraImageCapture_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCameraImageCapture) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QCameraImageCapture_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_event
func miqt_exec_callback_QCameraImageCapture_event(self *C.QCameraImageCapture, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCameraImageCapture{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCameraImageCapture) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QCameraImageCapture_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCameraImageCapture) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QCameraImageCapture_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_eventFilter
func miqt_exec_callback_QCameraImageCapture_eventFilter(self *C.QCameraImageCapture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCameraImageCapture{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCameraImageCapture) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QCameraImageCapture_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCameraImageCapture) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QCameraImageCapture_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_timerEvent
func miqt_exec_callback_QCameraImageCapture_timerEvent(self *C.QCameraImageCapture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCameraImageCapture) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QCameraImageCapture_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCameraImageCapture) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QCameraImageCapture_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_childEvent
func miqt_exec_callback_QCameraImageCapture_childEvent(self *C.QCameraImageCapture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCameraImageCapture) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QCameraImageCapture_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCameraImageCapture) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QCameraImageCapture_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_customEvent
func miqt_exec_callback_QCameraImageCapture_customEvent(self *C.QCameraImageCapture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCameraImageCapture) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QCameraImageCapture_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCameraImageCapture) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QCameraImageCapture_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_connectNotify
func miqt_exec_callback_QCameraImageCapture_connectNotify(self *C.QCameraImageCapture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCameraImageCapture) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QCameraImageCapture_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCameraImageCapture) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QCameraImageCapture_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraImageCapture_disconnectNotify
func miqt_exec_callback_QCameraImageCapture_disconnectNotify(self *C.QCameraImageCapture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCameraImageCapture) Delete() {
	C.QCameraImageCapture_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraImageCapture) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraImageCapture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
