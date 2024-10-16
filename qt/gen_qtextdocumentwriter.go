package qt

/*

#include "gen_qtextdocumentwriter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QTextDocumentWriter struct {
	h *C.QTextDocumentWriter
}

func (this *QTextDocumentWriter) cPointer() *C.QTextDocumentWriter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextDocumentWriter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextDocumentWriter(h *C.QTextDocumentWriter) *QTextDocumentWriter {
	if h == nil {
		return nil
	}
	return &QTextDocumentWriter{h: h}
}

func UnsafeNewQTextDocumentWriter(h unsafe.Pointer) *QTextDocumentWriter {
	return newQTextDocumentWriter((*C.QTextDocumentWriter)(h))
}

// NewQTextDocumentWriter constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter() *QTextDocumentWriter {
	ret := C.QTextDocumentWriter_new()
	return newQTextDocumentWriter(ret)
}

// NewQTextDocumentWriter2 constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter2(device *QIODevice, format *QByteArray) *QTextDocumentWriter {
	ret := C.QTextDocumentWriter_new2(device.cPointer(), format.cPointer())
	return newQTextDocumentWriter(ret)
}

// NewQTextDocumentWriter3 constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter3(fileName string) *QTextDocumentWriter {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QTextDocumentWriter_new3((*C.struct_miqt_string)(fileName_ms))
	return newQTextDocumentWriter(ret)
}

// NewQTextDocumentWriter4 constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter4(fileName string, format *QByteArray) *QTextDocumentWriter {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QTextDocumentWriter_new4((*C.struct_miqt_string)(fileName_ms), format.cPointer())
	return newQTextDocumentWriter(ret)
}

func (this *QTextDocumentWriter) SetFormat(format *QByteArray) {
	C.QTextDocumentWriter_SetFormat(this.h, format.cPointer())
}

func (this *QTextDocumentWriter) Format() *QByteArray {
	_ret := C.QTextDocumentWriter_Format(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocumentWriter) SetDevice(device *QIODevice) {
	C.QTextDocumentWriter_SetDevice(this.h, device.cPointer())
}

func (this *QTextDocumentWriter) Device() *QIODevice {
	return UnsafeNewQIODevice(unsafe.Pointer(C.QTextDocumentWriter_Device(this.h)))
}

func (this *QTextDocumentWriter) SetFileName(fileName string) {
	fileName_ms := libmiqt.Strdupg(fileName)
	defer C.free(fileName_ms)
	C.QTextDocumentWriter_SetFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
}

func (this *QTextDocumentWriter) FileName() string {
	var _ms *C.struct_miqt_string = C.QTextDocumentWriter_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocumentWriter) Write(document *QTextDocument) bool {
	return (bool)(C.QTextDocumentWriter_Write(this.h, document.cPointer()))
}

func (this *QTextDocumentWriter) WriteWithFragment(fragment *QTextDocumentFragment) bool {
	return (bool)(C.QTextDocumentWriter_WriteWithFragment(this.h, fragment.cPointer()))
}

func (this *QTextDocumentWriter) SetCodec(codec *QTextCodec) {
	C.QTextDocumentWriter_SetCodec(this.h, codec.cPointer())
}

func (this *QTextDocumentWriter) Codec() *QTextCodec {
	return UnsafeNewQTextCodec(unsafe.Pointer(C.QTextDocumentWriter_Codec(this.h)))
}

func QTextDocumentWriter_SupportedDocumentFormats() []QByteArray {
	var _ma *C.struct_miqt_array = C.QTextDocumentWriter_SupportedDocumentFormats()
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

// Delete this object from C++ memory.
func (this *QTextDocumentWriter) Delete() {
	C.QTextDocumentWriter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextDocumentWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextDocumentWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
