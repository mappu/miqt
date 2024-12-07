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
	h          *C.QCameraImageCapture
	isSubclass bool
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
func newQCameraImageCapture(h *C.QCameraImageCapture, h_QObject *C.QObject, h_QMediaBindableInterface *C.QMediaBindableInterface) *QCameraImageCapture {
	if h == nil {
		return nil
	}
	return &QCameraImageCapture{h: h,
		QObject:                 qt.UnsafeNewQObject(unsafe.Pointer(h_QObject)),
		QMediaBindableInterface: newQMediaBindableInterface(h_QMediaBindableInterface)}
}

// UnsafeNewQCameraImageCapture constructs the type using only unsafe pointers.
func UnsafeNewQCameraImageCapture(h unsafe.Pointer, h_QObject unsafe.Pointer, h_QMediaBindableInterface unsafe.Pointer) *QCameraImageCapture {
	if h == nil {
		return nil
	}

	return &QCameraImageCapture{h: (*C.QCameraImageCapture)(h),
		QObject:                 qt.UnsafeNewQObject(h_QObject),
		QMediaBindableInterface: UnsafeNewQMediaBindableInterface(h_QMediaBindableInterface)}
}

// NewQCameraImageCapture constructs a new QCameraImageCapture object.
func NewQCameraImageCapture(mediaObject *QMediaObject) *QCameraImageCapture {
	var outptr_QCameraImageCapture *C.QCameraImageCapture = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QMediaBindableInterface *C.QMediaBindableInterface = nil

	C.QCameraImageCapture_new(mediaObject.cPointer(), &outptr_QCameraImageCapture, &outptr_QObject, &outptr_QMediaBindableInterface)
	ret := newQCameraImageCapture(outptr_QCameraImageCapture, outptr_QObject, outptr_QMediaBindableInterface)
	ret.isSubclass = true
	return ret
}

// NewQCameraImageCapture2 constructs a new QCameraImageCapture object.
func NewQCameraImageCapture2(mediaObject *QMediaObject, parent *qt.QObject) *QCameraImageCapture {
	var outptr_QCameraImageCapture *C.QCameraImageCapture = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QMediaBindableInterface *C.QMediaBindableInterface = nil

	C.QCameraImageCapture_new2(mediaObject.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QCameraImageCapture, &outptr_QObject, &outptr_QMediaBindableInterface)
	ret := newQCameraImageCapture(outptr_QCameraImageCapture, outptr_QObject, outptr_QMediaBindableInterface)
	ret.isSubclass = true
	return ret
}

func (this *QCameraImageCapture) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraImageCapture_MetaObject(this.h)))
}

func (this *QCameraImageCapture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraImageCapture_Metacast(this.h, param1_Cstring))
}

func QCameraImageCapture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCapture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCapture) IsAvailable() bool {
	return (bool)(C.QCameraImageCapture_IsAvailable(this.h))
}

func (this *QCameraImageCapture) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QCameraImageCapture_Availability(this.h))
}

func (this *QCameraImageCapture) MediaObject() *QMediaObject {
	return UnsafeNewQMediaObject(unsafe.Pointer(C.QCameraImageCapture_MediaObject(this.h)), nil)
}

func (this *QCameraImageCapture) Error() QCameraImageCapture__Error {
	return (QCameraImageCapture__Error)(C.QCameraImageCapture_Error(this.h))
}

func (this *QCameraImageCapture) ErrorString() string {
	var _ms C.struct_miqt_string = C.QCameraImageCapture_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCapture) IsReadyForCapture() bool {
	return (bool)(C.QCameraImageCapture_IsReadyForCapture(this.h))
}

func (this *QCameraImageCapture) SupportedImageCodecs() []string {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_SupportedImageCodecs(this.h)
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
	var _ms C.struct_miqt_string = C.QCameraImageCapture_ImageCodecDescription(this.h, codecName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCapture) SupportedResolutions() []qt.QSize {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_SupportedResolutions(this.h)
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_lv_ret))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraImageCapture) EncodingSettings() *QImageEncoderSettings {
	_ret := C.QCameraImageCapture_EncodingSettings(this.h)
	_goptr := newQImageEncoderSettings(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraImageCapture) SetEncodingSettings(settings *QImageEncoderSettings) {
	C.QCameraImageCapture_SetEncodingSettings(this.h, settings.cPointer())
}

func (this *QCameraImageCapture) SupportedBufferFormats() []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_SupportedBufferFormats(this.h)
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

func (this *QCameraImageCapture) BufferFormat() QVideoFrame__PixelFormat {
	return (QVideoFrame__PixelFormat)(C.QCameraImageCapture_BufferFormat(this.h))
}

func (this *QCameraImageCapture) SetBufferFormat(format QVideoFrame__PixelFormat) {
	C.QCameraImageCapture_SetBufferFormat(this.h, (C.int)(format))
}

func (this *QCameraImageCapture) IsCaptureDestinationSupported(destination QCameraImageCapture__CaptureDestination) bool {
	return (bool)(C.QCameraImageCapture_IsCaptureDestinationSupported(this.h, (C.int)(destination)))
}

func (this *QCameraImageCapture) CaptureDestination() QCameraImageCapture__CaptureDestination {
	return (QCameraImageCapture__CaptureDestination)(C.QCameraImageCapture_CaptureDestination(this.h))
}

func (this *QCameraImageCapture) SetCaptureDestination(destination QCameraImageCapture__CaptureDestination) {
	C.QCameraImageCapture_SetCaptureDestination(this.h, (C.int)(destination))
}

func (this *QCameraImageCapture) Capture() int {
	return (int)(C.QCameraImageCapture_Capture(this.h))
}

func (this *QCameraImageCapture) CancelCapture() {
	C.QCameraImageCapture_CancelCapture(this.h)
}

func (this *QCameraImageCapture) Error2(id int, error QCameraImageCapture__Error, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QCameraImageCapture_Error2(this.h, (C.int)(id), (C.int)(error), errorString_ms)
}
func (this *QCameraImageCapture) OnError2(slot func(id int, error QCameraImageCapture__Error, errorString string)) {
	C.QCameraImageCapture_connect_Error2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_Error2
func miqt_exec_callback_QCameraImageCapture_Error2(cb C.intptr_t, id C.int, error C.int, errorString C.struct_miqt_string) {
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
	C.QCameraImageCapture_ReadyForCaptureChanged(this.h, (C.bool)(ready))
}
func (this *QCameraImageCapture) OnReadyForCaptureChanged(slot func(ready bool)) {
	C.QCameraImageCapture_connect_ReadyForCaptureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_ReadyForCaptureChanged
func miqt_exec_callback_QCameraImageCapture_ReadyForCaptureChanged(cb C.intptr_t, ready C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ready bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ready)

	gofunc(slotval1)
}

func (this *QCameraImageCapture) BufferFormatChanged(format QVideoFrame__PixelFormat) {
	C.QCameraImageCapture_BufferFormatChanged(this.h, (C.int)(format))
}
func (this *QCameraImageCapture) OnBufferFormatChanged(slot func(format QVideoFrame__PixelFormat)) {
	C.QCameraImageCapture_connect_BufferFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_BufferFormatChanged
func miqt_exec_callback_QCameraImageCapture_BufferFormatChanged(cb C.intptr_t, format C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format QVideoFrame__PixelFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QVideoFrame__PixelFormat)(format)

	gofunc(slotval1)
}

func (this *QCameraImageCapture) CaptureDestinationChanged(destination QCameraImageCapture__CaptureDestination) {
	C.QCameraImageCapture_CaptureDestinationChanged(this.h, (C.int)(destination))
}
func (this *QCameraImageCapture) OnCaptureDestinationChanged(slot func(destination QCameraImageCapture__CaptureDestination)) {
	C.QCameraImageCapture_connect_CaptureDestinationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_CaptureDestinationChanged
func miqt_exec_callback_QCameraImageCapture_CaptureDestinationChanged(cb C.intptr_t, destination C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(destination QCameraImageCapture__CaptureDestination))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCameraImageCapture__CaptureDestination)(destination)

	gofunc(slotval1)
}

func (this *QCameraImageCapture) ImageExposed(id int) {
	C.QCameraImageCapture_ImageExposed(this.h, (C.int)(id))
}
func (this *QCameraImageCapture) OnImageExposed(slot func(id int)) {
	C.QCameraImageCapture_connect_ImageExposed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_ImageExposed
func miqt_exec_callback_QCameraImageCapture_ImageExposed(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func (this *QCameraImageCapture) ImageCaptured(id int, preview *qt.QImage) {
	C.QCameraImageCapture_ImageCaptured(this.h, (C.int)(id), (*C.QImage)(preview.UnsafePointer()))
}
func (this *QCameraImageCapture) OnImageCaptured(slot func(id int, preview *qt.QImage)) {
	C.QCameraImageCapture_connect_ImageCaptured(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_ImageCaptured
func miqt_exec_callback_QCameraImageCapture_ImageCaptured(cb C.intptr_t, id C.int, preview *C.QImage) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, preview *qt.QImage))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := qt.UnsafeNewQImage(unsafe.Pointer(preview), nil)

	gofunc(slotval1, slotval2)
}

func (this *QCameraImageCapture) ImageMetadataAvailable(id int, key string, value *qt.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QCameraImageCapture_ImageMetadataAvailable(this.h, (C.int)(id), key_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QCameraImageCapture) OnImageMetadataAvailable(slot func(id int, key string, value *qt.QVariant)) {
	C.QCameraImageCapture_connect_ImageMetadataAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_ImageMetadataAvailable
func miqt_exec_callback_QCameraImageCapture_ImageMetadataAvailable(cb C.intptr_t, id C.int, key C.struct_miqt_string, value *C.QVariant) {
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
	C.QCameraImageCapture_ImageAvailable(this.h, (C.int)(id), frame.cPointer())
}
func (this *QCameraImageCapture) OnImageAvailable(slot func(id int, frame *QVideoFrame)) {
	C.QCameraImageCapture_connect_ImageAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_ImageAvailable
func miqt_exec_callback_QCameraImageCapture_ImageAvailable(cb C.intptr_t, id C.int, frame *C.QVideoFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, frame *QVideoFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := UnsafeNewQVideoFrame(unsafe.Pointer(frame))

	gofunc(slotval1, slotval2)
}

func (this *QCameraImageCapture) ImageSaved(id int, fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QCameraImageCapture_ImageSaved(this.h, (C.int)(id), fileName_ms)
}
func (this *QCameraImageCapture) OnImageSaved(slot func(id int, fileName string)) {
	C.QCameraImageCapture_connect_ImageSaved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_ImageSaved
func miqt_exec_callback_QCameraImageCapture_ImageSaved(cb C.intptr_t, id C.int, fileName C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QCameraImageCapture_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCapture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCapture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCapture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCapture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCapture) SupportedResolutions1(settings *QImageEncoderSettings) []qt.QSize {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_SupportedResolutions1(this.h, settings.cPointer())
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_lv_ret))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraImageCapture) SupportedResolutions2(settings *QImageEncoderSettings, continuous *bool) []qt.QSize {
	var _ma C.struct_miqt_array = C.QCameraImageCapture_SupportedResolutions2(this.h, settings.cPointer(), (*C.bool)(unsafe.Pointer(continuous)))
	_ret := make([]qt.QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_lv_ret))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraImageCapture) Capture1(location string) int {
	location_ms := C.struct_miqt_string{}
	location_ms.data = C.CString(location)
	location_ms.len = C.size_t(len(location))
	defer C.free(unsafe.Pointer(location_ms.data))
	return (int)(C.QCameraImageCapture_Capture1(this.h, location_ms))
}

func (this *QCameraImageCapture) callVirtualBase_MediaObject() *QMediaObject {

	return UnsafeNewQMediaObject(unsafe.Pointer(C.QCameraImageCapture_virtualbase_MediaObject(unsafe.Pointer(this.h))), nil)
}
func (this *QCameraImageCapture) OnMediaObject(slot func(super func() *QMediaObject) *QMediaObject) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_MediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_MediaObject
func miqt_exec_callback_QCameraImageCapture_MediaObject(self *C.QCameraImageCapture, cb C.intptr_t) *C.QMediaObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaObject) *QMediaObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraImageCapture{h: self}).callVirtualBase_MediaObject)

	return virtualReturn.cPointer()

}

func (this *QCameraImageCapture) callVirtualBase_SetMediaObject(mediaObject *QMediaObject) bool {

	return (bool)(C.QCameraImageCapture_virtualbase_SetMediaObject(unsafe.Pointer(this.h), mediaObject.cPointer()))

}
func (this *QCameraImageCapture) OnSetMediaObject(slot func(super func(mediaObject *QMediaObject) bool, mediaObject *QMediaObject) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_SetMediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_SetMediaObject
func miqt_exec_callback_QCameraImageCapture_SetMediaObject(self *C.QCameraImageCapture, cb C.intptr_t, mediaObject *C.QMediaObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mediaObject *QMediaObject) bool, mediaObject *QMediaObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMediaObject(unsafe.Pointer(mediaObject), nil)

	virtualReturn := gofunc((&QCameraImageCapture{h: self}).callVirtualBase_SetMediaObject, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCameraImageCapture) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QCameraImageCapture_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCameraImageCapture) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_Event
func miqt_exec_callback_QCameraImageCapture_Event(self *C.QCameraImageCapture, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QCameraImageCapture_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCameraImageCapture) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_EventFilter
func miqt_exec_callback_QCameraImageCapture_EventFilter(self *C.QCameraImageCapture, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QCameraImageCapture_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCameraImageCapture) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_TimerEvent
func miqt_exec_callback_QCameraImageCapture_TimerEvent(self *C.QCameraImageCapture, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCameraImageCapture) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QCameraImageCapture_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCameraImageCapture) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_ChildEvent
func miqt_exec_callback_QCameraImageCapture_ChildEvent(self *C.QCameraImageCapture, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCameraImageCapture) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QCameraImageCapture_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCameraImageCapture) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_CustomEvent
func miqt_exec_callback_QCameraImageCapture_CustomEvent(self *C.QCameraImageCapture, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCameraImageCapture) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QCameraImageCapture_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCameraImageCapture) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_ConnectNotify
func miqt_exec_callback_QCameraImageCapture_ConnectNotify(self *C.QCameraImageCapture, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCameraImageCapture{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCameraImageCapture) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QCameraImageCapture_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCameraImageCapture) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraImageCapture_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCapture_DisconnectNotify
func miqt_exec_callback_QCameraImageCapture_DisconnectNotify(self *C.QCameraImageCapture, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QCameraImageCapture_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraImageCapture) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraImageCapture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
