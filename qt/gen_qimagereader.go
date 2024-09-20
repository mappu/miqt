package qt

/*

#include "gen_qimagereader.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QImageReader__ImageReaderError int

const (
	QImageReader__ImageReaderError__UnknownError           QImageReader__ImageReaderError = 0
	QImageReader__ImageReaderError__FileNotFoundError      QImageReader__ImageReaderError = 1
	QImageReader__ImageReaderError__DeviceError            QImageReader__ImageReaderError = 2
	QImageReader__ImageReaderError__UnsupportedFormatError QImageReader__ImageReaderError = 3
	QImageReader__ImageReaderError__InvalidDataError       QImageReader__ImageReaderError = 4
)

type QImageReader struct {
	h *C.QImageReader
}

func (this *QImageReader) cPointer() *C.QImageReader {
	if this == nil {
		return nil
	}
	return this.h
}

func newQImageReader(h *C.QImageReader) *QImageReader {
	if h == nil {
		return nil
	}
	return &QImageReader{h: h}
}

func newQImageReader_U(h unsafe.Pointer) *QImageReader {
	return newQImageReader((*C.QImageReader)(h))
}

// NewQImageReader constructs a new QImageReader object.
func NewQImageReader() *QImageReader {
	ret := C.QImageReader_new()
	return newQImageReader(ret)
}

// NewQImageReader2 constructs a new QImageReader object.
func NewQImageReader2(device *QIODevice) *QImageReader {
	ret := C.QImageReader_new2(device.cPointer())
	return newQImageReader(ret)
}

// NewQImageReader3 constructs a new QImageReader object.
func NewQImageReader3(fileName string) *QImageReader {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QImageReader_new3((*C.struct_miqt_string)(fileName_ms))
	return newQImageReader(ret)
}

// NewQImageReader4 constructs a new QImageReader object.
func NewQImageReader4(device *QIODevice, format *QByteArray) *QImageReader {
	ret := C.QImageReader_new4(device.cPointer(), format.cPointer())
	return newQImageReader(ret)
}

// NewQImageReader5 constructs a new QImageReader object.
func NewQImageReader5(fileName string, format *QByteArray) *QImageReader {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QImageReader_new5((*C.struct_miqt_string)(fileName_ms), format.cPointer())
	return newQImageReader(ret)
}

func QImageReader_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms *C.struct_miqt_string = C.QImageReader_Tr(sourceText_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageReader_TrUtf8(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms *C.struct_miqt_string = C.QImageReader_TrUtf8(sourceText_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageReader) SetFormat(format *QByteArray) {
	C.QImageReader_SetFormat(this.h, format.cPointer())
}

func (this *QImageReader) Format() *QByteArray {
	_ret := C.QImageReader_Format(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SetAutoDetectImageFormat(enabled bool) {
	C.QImageReader_SetAutoDetectImageFormat(this.h, (C.bool)(enabled))
}

func (this *QImageReader) AutoDetectImageFormat() bool {
	return (bool)(C.QImageReader_AutoDetectImageFormat(this.h))
}

func (this *QImageReader) SetDecideFormatFromContent(ignored bool) {
	C.QImageReader_SetDecideFormatFromContent(this.h, (C.bool)(ignored))
}

func (this *QImageReader) DecideFormatFromContent() bool {
	return (bool)(C.QImageReader_DecideFormatFromContent(this.h))
}

func (this *QImageReader) SetDevice(device *QIODevice) {
	C.QImageReader_SetDevice(this.h, device.cPointer())
}

func (this *QImageReader) Device() *QIODevice {
	return newQIODevice_U(unsafe.Pointer(C.QImageReader_Device(this.h)))
}

func (this *QImageReader) SetFileName(fileName string) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QImageReader_SetFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
}

func (this *QImageReader) FileName() string {
	var _ms *C.struct_miqt_string = C.QImageReader_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageReader) Size() *QSize {
	_ret := C.QImageReader_Size(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) ImageFormat() QImage__Format {
	return (QImage__Format)(C.QImageReader_ImageFormat(this.h))
}

func (this *QImageReader) TextKeys() []string {
	var _ma *C.struct_miqt_array = C.QImageReader_TextKeys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QImageReader) Text(key string) string {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	var _ms *C.struct_miqt_string = C.QImageReader_Text(this.h, (*C.struct_miqt_string)(key_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageReader) SetClipRect(rect *QRect) {
	C.QImageReader_SetClipRect(this.h, rect.cPointer())
}

func (this *QImageReader) ClipRect() *QRect {
	_ret := C.QImageReader_ClipRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SetScaledSize(size *QSize) {
	C.QImageReader_SetScaledSize(this.h, size.cPointer())
}

func (this *QImageReader) ScaledSize() *QSize {
	_ret := C.QImageReader_ScaledSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SetQuality(quality int) {
	C.QImageReader_SetQuality(this.h, (C.int)(quality))
}

func (this *QImageReader) Quality() int {
	return (int)(C.QImageReader_Quality(this.h))
}

func (this *QImageReader) SetScaledClipRect(rect *QRect) {
	C.QImageReader_SetScaledClipRect(this.h, rect.cPointer())
}

func (this *QImageReader) ScaledClipRect() *QRect {
	_ret := C.QImageReader_ScaledClipRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SetBackgroundColor(color *QColor) {
	C.QImageReader_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QImageReader) BackgroundColor() *QColor {
	_ret := C.QImageReader_BackgroundColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SupportsAnimation() bool {
	return (bool)(C.QImageReader_SupportsAnimation(this.h))
}

func (this *QImageReader) Transformation() QImageIOHandler__Transformation {
	return (QImageIOHandler__Transformation)(C.QImageReader_Transformation(this.h))
}

func (this *QImageReader) SetAutoTransform(enabled bool) {
	C.QImageReader_SetAutoTransform(this.h, (C.bool)(enabled))
}

func (this *QImageReader) AutoTransform() bool {
	return (bool)(C.QImageReader_AutoTransform(this.h))
}

func (this *QImageReader) SetGamma(gamma float32) {
	C.QImageReader_SetGamma(this.h, (C.float)(gamma))
}

func (this *QImageReader) Gamma() float32 {
	return (float32)(C.QImageReader_Gamma(this.h))
}

func (this *QImageReader) SubType() *QByteArray {
	_ret := C.QImageReader_SubType(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SupportedSubTypes() []QByteArray {
	var _ma *C.struct_miqt_array = C.QImageReader_SupportedSubTypes(this.h)
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QImageReader) CanRead() bool {
	return (bool)(C.QImageReader_CanRead(this.h))
}

func (this *QImageReader) Read() *QImage {
	_ret := C.QImageReader_Read(this.h)
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) ReadWithImage(image *QImage) bool {
	return (bool)(C.QImageReader_ReadWithImage(this.h, image.cPointer()))
}

func (this *QImageReader) JumpToNextImage() bool {
	return (bool)(C.QImageReader_JumpToNextImage(this.h))
}

func (this *QImageReader) JumpToImage(imageNumber int) bool {
	return (bool)(C.QImageReader_JumpToImage(this.h, (C.int)(imageNumber)))
}

func (this *QImageReader) LoopCount() int {
	return (int)(C.QImageReader_LoopCount(this.h))
}

func (this *QImageReader) ImageCount() int {
	return (int)(C.QImageReader_ImageCount(this.h))
}

func (this *QImageReader) NextImageDelay() int {
	return (int)(C.QImageReader_NextImageDelay(this.h))
}

func (this *QImageReader) CurrentImageNumber() int {
	return (int)(C.QImageReader_CurrentImageNumber(this.h))
}

func (this *QImageReader) CurrentImageRect() *QRect {
	_ret := C.QImageReader_CurrentImageRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) Error() QImageReader__ImageReaderError {
	return (QImageReader__ImageReaderError)(C.QImageReader_Error(this.h))
}

func (this *QImageReader) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QImageReader_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageReader) SupportsOption(option QImageIOHandler__ImageOption) bool {
	return (bool)(C.QImageReader_SupportsOption(this.h, (C.int)(option)))
}

func QImageReader_ImageFormatWithFileName(fileName string) *QByteArray {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QImageReader_ImageFormatWithFileName((*C.struct_miqt_string)(fileName_ms))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImageReader_ImageFormatWithDevice(device *QIODevice) *QByteArray {
	_ret := C.QImageReader_ImageFormatWithDevice(device.cPointer())
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImageReader_SupportedImageFormats() []QByteArray {
	var _ma *C.struct_miqt_array = C.QImageReader_SupportedImageFormats()
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QImageReader_SupportedMimeTypes() []QByteArray {
	var _ma *C.struct_miqt_array = C.QImageReader_SupportedMimeTypes()
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QImageReader_ImageFormatsForMimeType(mimeType *QByteArray) []QByteArray {
	var _ma *C.struct_miqt_array = C.QImageReader_ImageFormatsForMimeType(mimeType.cPointer())
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QImageReader_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QImageReader_Tr2(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageReader_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QImageReader_Tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageReader_TrUtf82(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QImageReader_TrUtf82(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageReader_TrUtf83(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QImageReader_TrUtf83(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QImageReader) Delete() {
	C.QImageReader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImageReader) GoGC() {
	runtime.SetFinalizer(this, func(this *QImageReader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
