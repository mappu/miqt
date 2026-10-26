package qt

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
	h  *C.QImageWriter
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QImageWriter) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(device)
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

func QImageWriter_TrUtf8(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms C.struct_miqt_string = C.QImageWriter_trUtf8(sourceText_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageWriter) SetFormat(format []byte) {
	defer runtime.KeepAlive(this)
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
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QImageWriter_format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageWriter) SetDevice(device *QIODevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(device)
	C.QImageWriter_setDevice(this.h, device.cPointer())
}

func (this *QImageWriter) Device() *QIODevice {
	defer runtime.KeepAlive(this)
	return newQIODevice(C.QImageWriter_device(this.h))
}

func (this *QImageWriter) SetFileName(fileName string) {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QImageWriter_setFileName(this.h, fileName_ms)
}

func (this *QImageWriter) FileName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QImageWriter_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageWriter) SetQuality(quality int) {
	defer runtime.KeepAlive(this)
	C.QImageWriter_setQuality(this.h, (C.int)(quality))
}

func (this *QImageWriter) Quality() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QImageWriter_quality(this.h))
}

func (this *QImageWriter) SetCompression(compression int) {
	defer runtime.KeepAlive(this)
	C.QImageWriter_setCompression(this.h, (C.int)(compression))
}

func (this *QImageWriter) Compression() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QImageWriter_compression(this.h))
}

func (this *QImageWriter) SetGamma(gamma float32) {
	defer runtime.KeepAlive(this)
	C.QImageWriter_setGamma(this.h, (C.float)(gamma))
}

func (this *QImageWriter) Gamma() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QImageWriter_gamma(this.h))
}

func (this *QImageWriter) SetSubType(typeVal []byte) {
	defer runtime.KeepAlive(this)
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
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QImageWriter_subType(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageWriter) SupportedSubTypes() [][]byte {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QImageWriter_supportedSubTypes(this.h)
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

func (this *QImageWriter) SetOptimizedWrite(optimize bool) {
	defer runtime.KeepAlive(this)
	C.QImageWriter_setOptimizedWrite(this.h, (C.bool)(optimize))
}

func (this *QImageWriter) OptimizedWrite() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageWriter_optimizedWrite(this.h))
}

func (this *QImageWriter) SetProgressiveScanWrite(progressive bool) {
	defer runtime.KeepAlive(this)
	C.QImageWriter_setProgressiveScanWrite(this.h, (C.bool)(progressive))
}

func (this *QImageWriter) ProgressiveScanWrite() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageWriter_progressiveScanWrite(this.h))
}

func (this *QImageWriter) Transformation() QImageIOHandler__Transformation {
	defer runtime.KeepAlive(this)
	return (QImageIOHandler__Transformation)(C.QImageWriter_transformation(this.h))
}

func (this *QImageWriter) SetTransformation(orientation QImageIOHandler__Transformation) {
	defer runtime.KeepAlive(this)
	C.QImageWriter_setTransformation(this.h, (C.int)(orientation))
}

func (this *QImageWriter) SetDescription(description string) {
	defer runtime.KeepAlive(this)
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QImageWriter_setDescription(this.h, description_ms)
}

func (this *QImageWriter) Description() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QImageWriter_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageWriter) SetText(key string, text string) {
	defer runtime.KeepAlive(this)
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
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageWriter_canWrite(this.h))
}

func (this *QImageWriter) Write(image *QImage) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(image)
	return (bool)(C.QImageWriter_write(this.h, image.cPointer()))
}

func (this *QImageWriter) Error() QImageWriter__ImageWriterError {
	defer runtime.KeepAlive(this)
	return (QImageWriter__ImageWriterError)(C.QImageWriter_error(this.h))
}

func (this *QImageWriter) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QImageWriter_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageWriter) SupportsOption(option QImageIOHandler__ImageOption) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageWriter_supportsOption(this.h, (C.int)(option)))
}

func QImageWriter_SupportedImageFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QImageWriter_supportedImageFormats()
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

func QImageWriter_SupportedMimeTypes() [][]byte {
	var _ma C.struct_miqt_array = C.QImageWriter_supportedMimeTypes()
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
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
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

func QImageWriter_TrUtf82(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QImageWriter_trUtf82(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageWriter_TrUtf83(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QImageWriter_trUtf83(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QImageWriter) Delete() {
	C.QImageWriter_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QImageWriter) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QImageWriter_delete((*C.QImageWriter)(gc[0]))
	})
	this.miqtSetGC(gc)
}
