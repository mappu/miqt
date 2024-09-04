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
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QImageReader_new3(fileName_Cstring, C.size_t(len(fileName)))
	return newQImageReader(ret)
}

// NewQImageReader4 constructs a new QImageReader object.
func NewQImageReader4(device *QIODevice, format *QByteArray) *QImageReader {
	ret := C.QImageReader_new4(device.cPointer(), format.cPointer())
	return newQImageReader(ret)
}

// NewQImageReader5 constructs a new QImageReader object.
func NewQImageReader5(fileName string, format *QByteArray) *QImageReader {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QImageReader_new5(fileName_Cstring, C.size_t(len(fileName)), format.cPointer())
	return newQImageReader(ret)
}

func QImageReader_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_Tr(sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageReader_TrUtf8(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_TrUtf8(sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageReader) SetFormat(format *QByteArray) {
	C.QImageReader_SetFormat(this.h, format.cPointer())
}

func (this *QImageReader) Format() *QByteArray {
	ret := C.QImageReader_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) SetAutoDetectImageFormat(enabled bool) {
	C.QImageReader_SetAutoDetectImageFormat(this.h, (C.bool)(enabled))
}

func (this *QImageReader) AutoDetectImageFormat() bool {
	ret := C.QImageReader_AutoDetectImageFormat(this.h)
	return (bool)(ret)
}

func (this *QImageReader) SetDecideFormatFromContent(ignored bool) {
	C.QImageReader_SetDecideFormatFromContent(this.h, (C.bool)(ignored))
}

func (this *QImageReader) DecideFormatFromContent() bool {
	ret := C.QImageReader_DecideFormatFromContent(this.h)
	return (bool)(ret)
}

func (this *QImageReader) SetDevice(device *QIODevice) {
	C.QImageReader_SetDevice(this.h, device.cPointer())
}

func (this *QImageReader) Device() *QIODevice {
	ret := C.QImageReader_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QImageReader) SetFileName(fileName string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QImageReader_SetFileName(this.h, fileName_Cstring, C.size_t(len(fileName)))
}

func (this *QImageReader) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageReader) Size() *QSize {
	ret := C.QImageReader_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) ImageFormat() QImage__Format {
	ret := C.QImageReader_ImageFormat(this.h)
	return (QImage__Format)(ret)
}

func (this *QImageReader) TextKeys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QImageReader_TextKeys(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageReader) Text(key string) string {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_Text(this.h, key_Cstring, C.size_t(len(key)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageReader) SetClipRect(rect *QRect) {
	C.QImageReader_SetClipRect(this.h, rect.cPointer())
}

func (this *QImageReader) ClipRect() *QRect {
	ret := C.QImageReader_ClipRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) SetScaledSize(size *QSize) {
	C.QImageReader_SetScaledSize(this.h, size.cPointer())
}

func (this *QImageReader) ScaledSize() *QSize {
	ret := C.QImageReader_ScaledSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) SetQuality(quality int) {
	C.QImageReader_SetQuality(this.h, (C.int)(quality))
}

func (this *QImageReader) Quality() int {
	ret := C.QImageReader_Quality(this.h)
	return (int)(ret)
}

func (this *QImageReader) SetScaledClipRect(rect *QRect) {
	C.QImageReader_SetScaledClipRect(this.h, rect.cPointer())
}

func (this *QImageReader) ScaledClipRect() *QRect {
	ret := C.QImageReader_ScaledClipRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) SetBackgroundColor(color *QColor) {
	C.QImageReader_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QImageReader) BackgroundColor() *QColor {
	ret := C.QImageReader_BackgroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) SupportsAnimation() bool {
	ret := C.QImageReader_SupportsAnimation(this.h)
	return (bool)(ret)
}

func (this *QImageReader) Transformation() int {
	ret := C.QImageReader_Transformation(this.h)
	return (int)(ret)
}

func (this *QImageReader) SetAutoTransform(enabled bool) {
	C.QImageReader_SetAutoTransform(this.h, (C.bool)(enabled))
}

func (this *QImageReader) AutoTransform() bool {
	ret := C.QImageReader_AutoTransform(this.h)
	return (bool)(ret)
}

func (this *QImageReader) SetGamma(gamma float32) {
	C.QImageReader_SetGamma(this.h, (C.float)(gamma))
}

func (this *QImageReader) Gamma() float32 {
	ret := C.QImageReader_Gamma(this.h)
	return (float32)(ret)
}

func (this *QImageReader) SubType() *QByteArray {
	ret := C.QImageReader_SubType(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) SupportedSubTypes() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QImageReader_SupportedSubTypes(this.h, &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageReader) CanRead() bool {
	ret := C.QImageReader_CanRead(this.h)
	return (bool)(ret)
}

func (this *QImageReader) Read() *QImage {
	ret := C.QImageReader_Read(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) ReadWithImage(image *QImage) bool {
	ret := C.QImageReader_ReadWithImage(this.h, image.cPointer())
	return (bool)(ret)
}

func (this *QImageReader) JumpToNextImage() bool {
	ret := C.QImageReader_JumpToNextImage(this.h)
	return (bool)(ret)
}

func (this *QImageReader) JumpToImage(imageNumber int) bool {
	ret := C.QImageReader_JumpToImage(this.h, (C.int)(imageNumber))
	return (bool)(ret)
}

func (this *QImageReader) LoopCount() int {
	ret := C.QImageReader_LoopCount(this.h)
	return (int)(ret)
}

func (this *QImageReader) ImageCount() int {
	ret := C.QImageReader_ImageCount(this.h)
	return (int)(ret)
}

func (this *QImageReader) NextImageDelay() int {
	ret := C.QImageReader_NextImageDelay(this.h)
	return (int)(ret)
}

func (this *QImageReader) CurrentImageNumber() int {
	ret := C.QImageReader_CurrentImageNumber(this.h)
	return (int)(ret)
}

func (this *QImageReader) CurrentImageRect() *QRect {
	ret := C.QImageReader_CurrentImageRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageReader) Error() QImageReader__ImageReaderError {
	ret := C.QImageReader_Error(this.h)
	return (QImageReader__ImageReaderError)(ret)
}

func (this *QImageReader) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageReader) SupportsOption(option QImageIOHandler__ImageOption) bool {
	ret := C.QImageReader_SupportsOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func QImageReader_ImageFormatWithFileName(fileName string) *QByteArray {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QImageReader_ImageFormatWithFileName(fileName_Cstring, C.size_t(len(fileName)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QImageReader_ImageFormatWithDevice(device *QIODevice) *QByteArray {
	ret := C.QImageReader_ImageFormatWithDevice(device.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QImageReader_SupportedImageFormats() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QImageReader_SupportedImageFormats(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageReader_SupportedMimeTypes() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QImageReader_SupportedMimeTypes(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageReader_ImageFormatsForMimeType(mimeType *QByteArray) []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QImageReader_ImageFormatsForMimeType(mimeType.cPointer(), &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageReader_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_Tr2(sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageReader_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_Tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageReader_TrUtf82(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_TrUtf82(sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageReader_TrUtf83(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageReader_TrUtf83(sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageReader) Delete() {
	C.QImageReader_Delete(this.h)
}
