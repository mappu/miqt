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
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QImageWriter_new3(fileName_Cstring, C.size_t(len(fileName)))
	return newQImageWriter(ret)
}

// NewQImageWriter4 constructs a new QImageWriter object.
func NewQImageWriter4(fileName string, format *QByteArray) *QImageWriter {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QImageWriter_new4(fileName_Cstring, C.size_t(len(fileName)), format.cPointer())
	return newQImageWriter(ret)
}

func QImageWriter_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_Tr(sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageWriter_TrUtf8(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_TrUtf8(sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageWriter) SetFormat(format *QByteArray) {
	C.QImageWriter_SetFormat(this.h, format.cPointer())
}

func (this *QImageWriter) Format() *QByteArray {
	ret := C.QImageWriter_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageWriter) SetDevice(device *QIODevice) {
	C.QImageWriter_SetDevice(this.h, device.cPointer())
}

func (this *QImageWriter) Device() *QIODevice {
	ret := C.QImageWriter_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QImageWriter) SetFileName(fileName string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QImageWriter_SetFileName(this.h, fileName_Cstring, C.size_t(len(fileName)))
}

func (this *QImageWriter) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageWriter) SetQuality(quality int) {
	C.QImageWriter_SetQuality(this.h, (C.int)(quality))
}

func (this *QImageWriter) Quality() int {
	ret := C.QImageWriter_Quality(this.h)
	return (int)(ret)
}

func (this *QImageWriter) SetCompression(compression int) {
	C.QImageWriter_SetCompression(this.h, (C.int)(compression))
}

func (this *QImageWriter) Compression() int {
	ret := C.QImageWriter_Compression(this.h)
	return (int)(ret)
}

func (this *QImageWriter) SetGamma(gamma float32) {
	C.QImageWriter_SetGamma(this.h, (C.float)(gamma))
}

func (this *QImageWriter) Gamma() float32 {
	ret := C.QImageWriter_Gamma(this.h)
	return (float32)(ret)
}

func (this *QImageWriter) SetSubType(typeVal *QByteArray) {
	C.QImageWriter_SetSubType(this.h, typeVal.cPointer())
}

func (this *QImageWriter) SubType() *QByteArray {
	ret := C.QImageWriter_SubType(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageWriter) SupportedSubTypes() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QImageWriter_SupportedSubTypes(this.h, &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageWriter) SetOptimizedWrite(optimize bool) {
	C.QImageWriter_SetOptimizedWrite(this.h, (C.bool)(optimize))
}

func (this *QImageWriter) OptimizedWrite() bool {
	ret := C.QImageWriter_OptimizedWrite(this.h)
	return (bool)(ret)
}

func (this *QImageWriter) SetProgressiveScanWrite(progressive bool) {
	C.QImageWriter_SetProgressiveScanWrite(this.h, (C.bool)(progressive))
}

func (this *QImageWriter) ProgressiveScanWrite() bool {
	ret := C.QImageWriter_ProgressiveScanWrite(this.h)
	return (bool)(ret)
}

func (this *QImageWriter) Transformation() int {
	ret := C.QImageWriter_Transformation(this.h)
	return (int)(ret)
}

func (this *QImageWriter) SetTransformation(orientation int) {
	C.QImageWriter_SetTransformation(this.h, (C.int)(orientation))
}

func (this *QImageWriter) SetDescription(description string) {
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	C.QImageWriter_SetDescription(this.h, description_Cstring, C.size_t(len(description)))
}

func (this *QImageWriter) Description() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_Description(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageWriter) SetText(key string, text string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QImageWriter_SetText(this.h, key_Cstring, C.size_t(len(key)), text_Cstring, C.size_t(len(text)))
}

func (this *QImageWriter) CanWrite() bool {
	ret := C.QImageWriter_CanWrite(this.h)
	return (bool)(ret)
}

func (this *QImageWriter) Write(image *QImage) bool {
	ret := C.QImageWriter_Write(this.h, image.cPointer())
	return (bool)(ret)
}

func (this *QImageWriter) Error() QImageWriter__ImageWriterError {
	ret := C.QImageWriter_Error(this.h)
	return (QImageWriter__ImageWriterError)(ret)
}

func (this *QImageWriter) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageWriter) SupportsOption(option QImageIOHandler__ImageOption) bool {
	ret := C.QImageWriter_SupportsOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func QImageWriter_SupportedImageFormats() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QImageWriter_SupportedImageFormats(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageWriter_SupportedMimeTypes() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QImageWriter_SupportedMimeTypes(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageWriter_ImageFormatsForMimeType(mimeType *QByteArray) []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QImageWriter_ImageFormatsForMimeType(mimeType.cPointer(), &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageWriter_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_Tr2(sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageWriter_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_Tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageWriter_TrUtf82(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_TrUtf82(sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageWriter_TrUtf83(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageWriter_TrUtf83(sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageWriter) Delete() {
	C.QImageWriter_Delete(this.h)
}
