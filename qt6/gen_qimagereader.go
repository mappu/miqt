package qt6

/*

#include "gen_qimagereader.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	h  *C.QImageReader
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QImageReader) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(this)
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
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QImageReader_format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageReader) SetAutoDetectImageFormat(enabled bool) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setAutoDetectImageFormat(this.h, (C.bool)(enabled))
}

func (this *QImageReader) AutoDetectImageFormat() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageReader_autoDetectImageFormat(this.h))
}

func (this *QImageReader) SetDecideFormatFromContent(ignored bool) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setDecideFormatFromContent(this.h, (C.bool)(ignored))
}

func (this *QImageReader) DecideFormatFromContent() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageReader_decideFormatFromContent(this.h))
}

func (this *QImageReader) SetDevice(device *QIODevice) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setDevice(this.h, device.cPointer())
}

func (this *QImageReader) Device() *QIODevice {
	defer runtime.KeepAlive(this)
	return newQIODevice(C.QImageReader_device(this.h))
}

func (this *QImageReader) SetFileName(fileName string) {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QImageReader_setFileName(this.h, fileName_ms)
}

func (this *QImageReader) FileName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QImageReader_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageReader) Size() QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QSize](C.QImageReader_size(this.h))
}

func (this *QImageReader) ImageFormat() QImage__Format {
	defer runtime.KeepAlive(this)
	return (QImage__Format)(C.QImageReader_imageFormat(this.h))
}

func (this *QImageReader) TextKeys() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QImageReader_textKeys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QImageReader) Text(key string) string {
	defer runtime.KeepAlive(this)
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	var _ms C.struct_miqt_string = C.QImageReader_text(this.h, key_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageReader) SetClipRect(rect QRect) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setClipRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](rect))
}

func (this *QImageReader) ClipRect() QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QImageReader_clipRect(this.h))
}

func (this *QImageReader) SetScaledSize(size QSize) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setScaledSize(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](size))
}

func (this *QImageReader) ScaledSize() QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QSize](C.QImageReader_scaledSize(this.h))
}

func (this *QImageReader) SetQuality(quality int) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setQuality(this.h, (C.int)(quality))
}

func (this *QImageReader) Quality() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QImageReader_quality(this.h))
}

func (this *QImageReader) SetScaledClipRect(rect QRect) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setScaledClipRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](rect))
}

func (this *QImageReader) ScaledClipRect() QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QImageReader_scaledClipRect(this.h))
}

func (this *QImageReader) SetBackgroundColor(color QColor) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setBackgroundColor(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](color))
}

func (this *QImageReader) BackgroundColor() QColor {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QColor](C.QImageReader_backgroundColor(this.h))
}

func (this *QImageReader) SupportsAnimation() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageReader_supportsAnimation(this.h))
}

func (this *QImageReader) Transformation() QImageIOHandler__Transformation {
	defer runtime.KeepAlive(this)
	return (QImageIOHandler__Transformation)(C.QImageReader_transformation(this.h))
}

func (this *QImageReader) SetAutoTransform(enabled bool) {
	defer runtime.KeepAlive(this)
	C.QImageReader_setAutoTransform(this.h, (C.bool)(enabled))
}

func (this *QImageReader) AutoTransform() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageReader_autoTransform(this.h))
}

func (this *QImageReader) SubType() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QImageReader_subType(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageReader) SupportedSubTypes() [][]byte {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QImageReader_supportedSubTypes(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QImageReader) CanRead() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageReader_canRead(this.h))
}

func (this *QImageReader) Read() *QImage {
	defer runtime.KeepAlive(this)
	_goptr := newQImage(C.QImageReader_read(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageReader) ReadWithImage(image *QImage) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(image)
	return (bool)(C.QImageReader_readWithImage(this.h, image.cPointer()))
}

func (this *QImageReader) JumpToNextImage() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageReader_jumpToNextImage(this.h))
}

func (this *QImageReader) JumpToImage(imageNumber int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageReader_jumpToImage(this.h, (C.int)(imageNumber)))
}

func (this *QImageReader) LoopCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QImageReader_loopCount(this.h))
}

func (this *QImageReader) ImageCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QImageReader_imageCount(this.h))
}

func (this *QImageReader) NextImageDelay() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QImageReader_nextImageDelay(this.h))
}

func (this *QImageReader) CurrentImageNumber() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QImageReader_currentImageNumber(this.h))
}

func (this *QImageReader) CurrentImageRect() QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QImageReader_currentImageRect(this.h))
}

func (this *QImageReader) Error() QImageReader__ImageReaderError {
	defer runtime.KeepAlive(this)
	return (QImageReader__ImageReaderError)(C.QImageReader_error(this.h))
}

func (this *QImageReader) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QImageReader_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageReader) SupportsOption(option QImageIOHandler__ImageOption) bool {
	defer runtime.KeepAlive(this)
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
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
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
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
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
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
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

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QImageReader) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QImageReader_delete((*C.QImageReader)(gc[0]))
	})
	this.miqtSetGC(gc)
}
