package qt6

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
	QImageReader__UnknownError           QImageReader__ImageReaderError = 0
	QImageReader__FileNotFoundError      QImageReader__ImageReaderError = 1
	QImageReader__DeviceError            QImageReader__ImageReaderError = 2
	QImageReader__UnsupportedFormatError QImageReader__ImageReaderError = 3
	QImageReader__InvalidDataError       QImageReader__ImageReaderError = 4
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

func (this *QImageReader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQImageReader constructs the type using only CGO pointers.
func newQImageReader(h *C.QImageReader) *QImageReader {
	if h == nil {
		return nil
	}

	return &QImageReader{h: h}
}

// UnsafeNewQImageReader constructs the type using only unsafe pointers.
func UnsafeNewQImageReader(h unsafe.Pointer) *QImageReader {
	return newQImageReader((*C.QImageReader)(h))
}

// NewQImageReader constructs a new QImageReader object.
func NewQImageReader() *QImageReader {

	return newQImageReader(C.QImageReader_new())
}

// NewQImageReader2 constructs a new QImageReader object.
func NewQImageReader2(device *QIODevice) *QImageReader {

	return newQImageReader(C.QImageReader_new2(device.cPointer()))
}

// NewQImageReader3 constructs a new QImageReader object.
func NewQImageReader3(fileName string) *QImageReader {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQImageReader(C.QImageReader_new3(fileName_ms))
}

// NewQImageReader4 constructs a new QImageReader object.
func NewQImageReader4(device *QIODevice, format []byte) *QImageReader {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))

	return newQImageReader(C.QImageReader_new4(device.cPointer(), format_alias))
}

// NewQImageReader5 constructs a new QImageReader object.
func NewQImageReader5(fileName string, format []byte) *QImageReader {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))

	return newQImageReader(C.QImageReader_new5(fileName_ms, format_alias))
}

func QImageReader_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms C.struct_miqt_string = C.QImageReader_tr(sourceText_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageReader) SetFormat(format []byte) {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	C.QImageReader_setFormat(this.h, format_alias)
}

func (this *QImageReader) Format() []byte {
	var _bytearray C.struct_miqt_string = C.QImageReader_format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageReader) SetAutoDetectImageFormat(enabled bool) {
	C.QImageReader_setAutoDetectImageFormat(this.h, (C.bool)(enabled))
}

func (this *QImageReader) AutoDetectImageFormat() bool {
	return (bool)(C.QImageReader_autoDetectImageFormat(this.h))
}

func (this *QImageReader) SetDecideFormatFromContent(ignored bool) {
	C.QImageReader_setDecideFormatFromContent(this.h, (C.bool)(ignored))
}

func (this *QImageReader) DecideFormatFromContent() bool {
	return (bool)(C.QImageReader_decideFormatFromContent(this.h))
}

func (this *QImageReader) SetDevice(device *QIODevice) {
	C.QImageReader_setDevice(this.h, device.cPointer())
}

func (this *QImageReader) Device() *QIODevice {
	return newQIODevice(C.QImageReader_device(this.h))
}

func (this *QImageReader) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QImageReader_setFileName(this.h, fileName_ms)
}

func (this *QImageReader) FileName() string {
	var _ms C.struct_miqt_string = C.QImageReader_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageReader) Size() *QSize {
	_goptr := newQSize(C.QImageReader_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) ImageFormat() QImage__Format {
	return (QImage__Format)(C.QImageReader_imageFormat(this.h))
}

func (this *QImageReader) TextKeys() []string {
	var _ma C.struct_miqt_array = C.QImageReader_textKeys(this.h)
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

func (this *QImageReader) Text(key string) string {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	var _ms C.struct_miqt_string = C.QImageReader_text(this.h, key_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageReader) SetClipRect(rect *QRect) {
	C.QImageReader_setClipRect(this.h, rect.cPointer())
}

func (this *QImageReader) ClipRect() *QRect {
	_goptr := newQRect(C.QImageReader_clipRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SetScaledSize(size *QSize) {
	C.QImageReader_setScaledSize(this.h, size.cPointer())
}

func (this *QImageReader) ScaledSize() *QSize {
	_goptr := newQSize(C.QImageReader_scaledSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SetQuality(quality int) {
	C.QImageReader_setQuality(this.h, (C.int)(quality))
}

func (this *QImageReader) Quality() int {
	return (int)(C.QImageReader_quality(this.h))
}

func (this *QImageReader) SetScaledClipRect(rect *QRect) {
	C.QImageReader_setScaledClipRect(this.h, rect.cPointer())
}

func (this *QImageReader) ScaledClipRect() *QRect {
	_goptr := newQRect(C.QImageReader_scaledClipRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SetBackgroundColor(color *QColor) {
	C.QImageReader_setBackgroundColor(this.h, color.cPointer())
}

func (this *QImageReader) BackgroundColor() *QColor {
	_goptr := newQColor(C.QImageReader_backgroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) SupportsAnimation() bool {
	return (bool)(C.QImageReader_supportsAnimation(this.h))
}

func (this *QImageReader) Transformation() QImageIOHandler__Transformation {
	return (QImageIOHandler__Transformation)(C.QImageReader_transformation(this.h))
}

func (this *QImageReader) SetAutoTransform(enabled bool) {
	C.QImageReader_setAutoTransform(this.h, (C.bool)(enabled))
}

func (this *QImageReader) AutoTransform() bool {
	return (bool)(C.QImageReader_autoTransform(this.h))
}

func (this *QImageReader) SubType() []byte {
	var _bytearray C.struct_miqt_string = C.QImageReader_subType(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageReader) SupportedSubTypes() [][]byte {
	var _ma C.struct_miqt_array = C.QImageReader_supportedSubTypes(this.h)
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

func (this *QImageReader) CanRead() bool {
	return (bool)(C.QImageReader_canRead(this.h))
}

func (this *QImageReader) Read() *QImage {
	_goptr := newQImage(C.QImageReader_read(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) ReadWithImage(image *QImage) bool {
	return (bool)(C.QImageReader_readWithImage(this.h, image.cPointer()))
}

func (this *QImageReader) JumpToNextImage() bool {
	return (bool)(C.QImageReader_jumpToNextImage(this.h))
}

func (this *QImageReader) JumpToImage(imageNumber int) bool {
	return (bool)(C.QImageReader_jumpToImage(this.h, (C.int)(imageNumber)))
}

func (this *QImageReader) LoopCount() int {
	return (int)(C.QImageReader_loopCount(this.h))
}

func (this *QImageReader) ImageCount() int {
	return (int)(C.QImageReader_imageCount(this.h))
}

func (this *QImageReader) NextImageDelay() int {
	return (int)(C.QImageReader_nextImageDelay(this.h))
}

func (this *QImageReader) CurrentImageNumber() int {
	return (int)(C.QImageReader_currentImageNumber(this.h))
}

func (this *QImageReader) CurrentImageRect() *QRect {
	_goptr := newQRect(C.QImageReader_currentImageRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) Error() QImageReader__ImageReaderError {
	return (QImageReader__ImageReaderError)(C.QImageReader_error(this.h))
}

func (this *QImageReader) ErrorString() string {
	var _ms C.struct_miqt_string = C.QImageReader_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageReader) SupportsOption(option QImageIOHandler__ImageOption) bool {
	return (bool)(C.QImageReader_supportsOption(this.h, (C.int)(option)))
}

func QImageReader_ImageFormatWithFileName(fileName string) []byte {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _bytearray C.struct_miqt_string = C.QImageReader_imageFormatWithFileName(fileName_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QImageReader_ImageFormatWithDevice(device *QIODevice) []byte {
	var _bytearray C.struct_miqt_string = C.QImageReader_imageFormatWithDevice(device.cPointer())
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QImageReader_SupportedImageFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QImageReader_supportedImageFormats()
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

func QImageReader_SupportedMimeTypes() [][]byte {
	var _ma C.struct_miqt_array = C.QImageReader_supportedMimeTypes()
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

func QImageReader_ImageFormatsForMimeType(mimeType []byte) [][]byte {
	mimeType_alias := C.struct_miqt_string{}
	if len(mimeType) > 0 {
		mimeType_alias.data = (*C.char)(unsafe.Pointer(&mimeType[0]))
	} else {
		mimeType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	mimeType_alias.len = C.size_t(len(mimeType))
	var _ma C.struct_miqt_array = C.QImageReader_imageFormatsForMimeType(mimeType_alias)
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

func QImageReader_AllocationLimit() int {
	return (int)(C.QImageReader_allocationLimit())
}

func QImageReader_SetAllocationLimit(mbLimit int) {
	C.QImageReader_setAllocationLimit((C.int)(mbLimit))
}

func QImageReader_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QImageReader_tr2(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageReader_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QImageReader_tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QImageReader) Delete() {
	C.QImageReader_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImageReader) GoGC() {
	runtime.SetFinalizer(this, func(this *QImageReader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
