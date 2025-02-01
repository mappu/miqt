package qt6

/*

#include "gen_qimagewriter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QImageWriter__ImageWriterError int

const (
	QImageWriter__UnknownError           QImageWriter__ImageWriterError = 0
	QImageWriter__DeviceError            QImageWriter__ImageWriterError = 1
	QImageWriter__UnsupportedFormatError QImageWriter__ImageWriterError = 2
	QImageWriter__InvalidImageError      QImageWriter__ImageWriterError = 3
)

type QImageWriter struct {
	h *C.QImageWriter
}

func (this *QImageWriter) cPointer() *C.QImageWriter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QImageWriter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQImageWriter constructs the type using only CGO pointers.
func newQImageWriter(h *C.QImageWriter) *QImageWriter {
	if h == nil {
		return nil
	}

	return &QImageWriter{h: h}
}

// UnsafeNewQImageWriter constructs the type using only unsafe pointers.
func UnsafeNewQImageWriter(h unsafe.Pointer) *QImageWriter {
	return newQImageWriter((*C.QImageWriter)(h))
}

// NewQImageWriter constructs a new QImageWriter object.
func NewQImageWriter() *QImageWriter {

	return newQImageWriter(C.QImageWriter_new())
}

// NewQImageWriter2 constructs a new QImageWriter object.
func NewQImageWriter2(device *QIODevice, format []byte) *QImageWriter {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))

	return newQImageWriter(C.QImageWriter_new2(device.cPointer(), format_alias))
}

// NewQImageWriter3 constructs a new QImageWriter object.
func NewQImageWriter3(fileName string) *QImageWriter {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQImageWriter(C.QImageWriter_new3(fileName_ms))
}

// NewQImageWriter4 constructs a new QImageWriter object.
func NewQImageWriter4(fileName string, format []byte) *QImageWriter {
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

	return newQImageWriter(C.QImageWriter_new4(fileName_ms, format_alias))
}

func QImageWriter_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms C.struct_miqt_string = C.QImageWriter_tr(sourceText_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageWriter) SetFormat(format []byte) {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	C.QImageWriter_setFormat(this.h, format_alias)
}

func (this *QImageWriter) Format() []byte {
	var _bytearray C.struct_miqt_string = C.QImageWriter_format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageWriter) SetDevice(device *QIODevice) {
	C.QImageWriter_setDevice(this.h, device.cPointer())
}

func (this *QImageWriter) Device() *QIODevice {
	return newQIODevice(C.QImageWriter_device(this.h))
}

func (this *QImageWriter) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QImageWriter_setFileName(this.h, fileName_ms)
}

func (this *QImageWriter) FileName() string {
	var _ms C.struct_miqt_string = C.QImageWriter_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageWriter) SetQuality(quality int) {
	C.QImageWriter_setQuality(this.h, (C.int)(quality))
}

func (this *QImageWriter) Quality() int {
	return (int)(C.QImageWriter_quality(this.h))
}

func (this *QImageWriter) SetCompression(compression int) {
	C.QImageWriter_setCompression(this.h, (C.int)(compression))
}

func (this *QImageWriter) Compression() int {
	return (int)(C.QImageWriter_compression(this.h))
}

func (this *QImageWriter) SetSubType(typeVal []byte) {
	typeVal_alias := C.struct_miqt_string{}
	if len(typeVal) > 0 {
		typeVal_alias.data = (*C.char)(unsafe.Pointer(&typeVal[0]))
	} else {
		typeVal_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	typeVal_alias.len = C.size_t(len(typeVal))
	C.QImageWriter_setSubType(this.h, typeVal_alias)
}

func (this *QImageWriter) SubType() []byte {
	var _bytearray C.struct_miqt_string = C.QImageWriter_subType(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageWriter) SupportedSubTypes() [][]byte {
	var _ma C.struct_miqt_array = C.QImageWriter_supportedSubTypes(this.h)
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

func (this *QImageWriter) SetOptimizedWrite(optimize bool) {
	C.QImageWriter_setOptimizedWrite(this.h, (C.bool)(optimize))
}

func (this *QImageWriter) OptimizedWrite() bool {
	return (bool)(C.QImageWriter_optimizedWrite(this.h))
}

func (this *QImageWriter) SetProgressiveScanWrite(progressive bool) {
	C.QImageWriter_setProgressiveScanWrite(this.h, (C.bool)(progressive))
}

func (this *QImageWriter) ProgressiveScanWrite() bool {
	return (bool)(C.QImageWriter_progressiveScanWrite(this.h))
}

func (this *QImageWriter) Transformation() QImageIOHandler__Transformation {
	return (QImageIOHandler__Transformation)(C.QImageWriter_transformation(this.h))
}

func (this *QImageWriter) SetTransformation(orientation QImageIOHandler__Transformation) {
	C.QImageWriter_setTransformation(this.h, (C.int)(orientation))
}

func (this *QImageWriter) SetText(key string, text string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QImageWriter_setText(this.h, key_ms, text_ms)
}

func (this *QImageWriter) CanWrite() bool {
	return (bool)(C.QImageWriter_canWrite(this.h))
}

func (this *QImageWriter) Write(image *QImage) bool {
	return (bool)(C.QImageWriter_write(this.h, image.cPointer()))
}

func (this *QImageWriter) Error() QImageWriter__ImageWriterError {
	return (QImageWriter__ImageWriterError)(C.QImageWriter_error(this.h))
}

func (this *QImageWriter) ErrorString() string {
	var _ms C.struct_miqt_string = C.QImageWriter_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageWriter) SupportsOption(option QImageIOHandler__ImageOption) bool {
	return (bool)(C.QImageWriter_supportsOption(this.h, (C.int)(option)))
}

func QImageWriter_SupportedImageFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QImageWriter_supportedImageFormats()
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

func QImageWriter_SupportedMimeTypes() [][]byte {
	var _ma C.struct_miqt_array = C.QImageWriter_supportedMimeTypes()
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

func QImageWriter_ImageFormatsForMimeType(mimeType []byte) [][]byte {
	mimeType_alias := C.struct_miqt_string{}
	if len(mimeType) > 0 {
		mimeType_alias.data = (*C.char)(unsafe.Pointer(&mimeType[0]))
	} else {
		mimeType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	mimeType_alias.len = C.size_t(len(mimeType))
	var _ma C.struct_miqt_array = C.QImageWriter_imageFormatsForMimeType(mimeType_alias)
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

func QImageWriter_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QImageWriter_tr2(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageWriter_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QImageWriter_tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QImageWriter) Delete() {
	C.QImageWriter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImageWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QImageWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
