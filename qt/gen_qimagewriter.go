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
	QImageWriter__ImageWriterError__UnknownError           QImageWriter__ImageWriterError = 0
	QImageWriter__ImageWriterError__DeviceError            QImageWriter__ImageWriterError = 1
	QImageWriter__ImageWriterError__UnsupportedFormatError QImageWriter__ImageWriterError = 2
	QImageWriter__ImageWriterError__InvalidImageError      QImageWriter__ImageWriterError = 3
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

func newQImageWriter(h *C.QImageWriter) *QImageWriter {
	if h == nil {
		return nil
	}
	return &QImageWriter{h: h}
}

func newQImageWriter_U(h unsafe.Pointer) *QImageWriter {
	return newQImageWriter((*C.QImageWriter)(h))
}

// NewQImageWriter constructs a new QImageWriter object.
func NewQImageWriter() *QImageWriter {
	ret := C.QImageWriter_new()
	return newQImageWriter(ret)
}

// NewQImageWriter2 constructs a new QImageWriter object.
func NewQImageWriter2(device *QIODevice, format *QByteArray) *QImageWriter {
	ret := C.QImageWriter_new2(device.cPointer(), format.cPointer())
	return newQImageWriter(ret)
}

// NewQImageWriter3 constructs a new QImageWriter object.
func NewQImageWriter3(fileName string) *QImageWriter {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QImageWriter_new3((*C.struct_miqt_string)(fileName_ms))
	return newQImageWriter(ret)
}

// NewQImageWriter4 constructs a new QImageWriter object.
func NewQImageWriter4(fileName string, format *QByteArray) *QImageWriter {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QImageWriter_new4((*C.struct_miqt_string)(fileName_ms), format.cPointer())
	return newQImageWriter(ret)
}

func QImageWriter_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms *C.struct_miqt_string = C.QImageWriter_Tr(sourceText_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageWriter_TrUtf8(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms *C.struct_miqt_string = C.QImageWriter_TrUtf8(sourceText_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageWriter) SetFormat(format *QByteArray) {
	C.QImageWriter_SetFormat(this.h, format.cPointer())
}

func (this *QImageWriter) Format() *QByteArray {
	_ret := C.QImageWriter_Format(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageWriter) SetDevice(device *QIODevice) {
	C.QImageWriter_SetDevice(this.h, device.cPointer())
}

func (this *QImageWriter) Device() *QIODevice {
	return newQIODevice_U(unsafe.Pointer(C.QImageWriter_Device(this.h)))
}

func (this *QImageWriter) SetFileName(fileName string) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QImageWriter_SetFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
}

func (this *QImageWriter) FileName() string {
	var _ms *C.struct_miqt_string = C.QImageWriter_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageWriter) SetQuality(quality int) {
	C.QImageWriter_SetQuality(this.h, (C.int)(quality))
}

func (this *QImageWriter) Quality() int {
	return (int)(C.QImageWriter_Quality(this.h))
}

func (this *QImageWriter) SetCompression(compression int) {
	C.QImageWriter_SetCompression(this.h, (C.int)(compression))
}

func (this *QImageWriter) Compression() int {
	return (int)(C.QImageWriter_Compression(this.h))
}

func (this *QImageWriter) SetGamma(gamma float32) {
	C.QImageWriter_SetGamma(this.h, (C.float)(gamma))
}

func (this *QImageWriter) Gamma() float32 {
	return (float32)(C.QImageWriter_Gamma(this.h))
}

func (this *QImageWriter) SetSubType(typeVal *QByteArray) {
	C.QImageWriter_SetSubType(this.h, typeVal.cPointer())
}

func (this *QImageWriter) SubType() *QByteArray {
	_ret := C.QImageWriter_SubType(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageWriter) SupportedSubTypes() []QByteArray {
	var _ma *C.struct_miqt_array = C.QImageWriter_SupportedSubTypes(this.h)
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

func (this *QImageWriter) SetOptimizedWrite(optimize bool) {
	C.QImageWriter_SetOptimizedWrite(this.h, (C.bool)(optimize))
}

func (this *QImageWriter) OptimizedWrite() bool {
	return (bool)(C.QImageWriter_OptimizedWrite(this.h))
}

func (this *QImageWriter) SetProgressiveScanWrite(progressive bool) {
	C.QImageWriter_SetProgressiveScanWrite(this.h, (C.bool)(progressive))
}

func (this *QImageWriter) ProgressiveScanWrite() bool {
	return (bool)(C.QImageWriter_ProgressiveScanWrite(this.h))
}

func (this *QImageWriter) Transformation() QImageIOHandler__Transformation {
	return (QImageIOHandler__Transformation)(C.QImageWriter_Transformation(this.h))
}

func (this *QImageWriter) SetTransformation(orientation QImageIOHandler__Transformation) {
	C.QImageWriter_SetTransformation(this.h, (C.int)(orientation))
}

func (this *QImageWriter) SetDescription(description string) {
	description_ms := miqt_strdupg(description)
	defer C.free(description_ms)
	C.QImageWriter_SetDescription(this.h, (*C.struct_miqt_string)(description_ms))
}

func (this *QImageWriter) Description() string {
	var _ms *C.struct_miqt_string = C.QImageWriter_Description(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageWriter) SetText(key string, text string) {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QImageWriter_SetText(this.h, (*C.struct_miqt_string)(key_ms), (*C.struct_miqt_string)(text_ms))
}

func (this *QImageWriter) CanWrite() bool {
	return (bool)(C.QImageWriter_CanWrite(this.h))
}

func (this *QImageWriter) Write(image *QImage) bool {
	return (bool)(C.QImageWriter_Write(this.h, image.cPointer()))
}

func (this *QImageWriter) Error() QImageWriter__ImageWriterError {
	return (QImageWriter__ImageWriterError)(C.QImageWriter_Error(this.h))
}

func (this *QImageWriter) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QImageWriter_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageWriter) SupportsOption(option QImageIOHandler__ImageOption) bool {
	return (bool)(C.QImageWriter_SupportsOption(this.h, (C.int)(option)))
}

func QImageWriter_SupportedImageFormats() []QByteArray {
	var _ma *C.struct_miqt_array = C.QImageWriter_SupportedImageFormats()
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

func QImageWriter_SupportedMimeTypes() []QByteArray {
	var _ma *C.struct_miqt_array = C.QImageWriter_SupportedMimeTypes()
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

func QImageWriter_ImageFormatsForMimeType(mimeType *QByteArray) []QByteArray {
	var _ma *C.struct_miqt_array = C.QImageWriter_ImageFormatsForMimeType(mimeType.cPointer())
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

func QImageWriter_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QImageWriter_Tr2(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageWriter_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QImageWriter_Tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageWriter_TrUtf82(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QImageWriter_TrUtf82(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageWriter_TrUtf83(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QImageWriter_TrUtf83(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QImageWriter) Delete() {
	C.QImageWriter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImageWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QImageWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
