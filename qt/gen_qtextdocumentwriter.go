package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtextdocumentwriter.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQTextDocumentWriter(h *C.QTextDocumentWriter) *QTextDocumentWriter {
	return &QTextDocumentWriter{h: h}
}

func newQTextDocumentWriter_U(h unsafe.Pointer) *QTextDocumentWriter {
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
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QTextDocumentWriter_new3(fileName_Cstring, C.ulong(len(fileName)))
	return newQTextDocumentWriter(ret)
}

// NewQTextDocumentWriter4 constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter4(fileName string, format *QByteArray) *QTextDocumentWriter {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QTextDocumentWriter_new4(fileName_Cstring, C.ulong(len(fileName)), format.cPointer())
	return newQTextDocumentWriter(ret)
}

func (this *QTextDocumentWriter) SetFormat(format *QByteArray) {
	C.QTextDocumentWriter_SetFormat(this.h, format.cPointer())
}

func (this *QTextDocumentWriter) Format() *QByteArray {
	ret := C.QTextDocumentWriter_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocumentWriter) SetDevice(device *QIODevice) {
	C.QTextDocumentWriter_SetDevice(this.h, device.cPointer())
}

func (this *QTextDocumentWriter) Device() *QIODevice {
	ret := C.QTextDocumentWriter_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QTextDocumentWriter) SetFileName(fileName string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QTextDocumentWriter_SetFileName(this.h, fileName_Cstring, C.ulong(len(fileName)))
}

func (this *QTextDocumentWriter) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocumentWriter_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocumentWriter) Write(document *QTextDocument) bool {
	ret := C.QTextDocumentWriter_Write(this.h, document.cPointer())
	return (bool)(ret)
}

func (this *QTextDocumentWriter) WriteWithFragment(fragment *QTextDocumentFragment) bool {
	ret := C.QTextDocumentWriter_WriteWithFragment(this.h, fragment.cPointer())
	return (bool)(ret)
}

func (this *QTextDocumentWriter) SetCodec(codec *QTextCodec) {
	C.QTextDocumentWriter_SetCodec(this.h, codec.cPointer())
}

func (this *QTextDocumentWriter) Codec() *QTextCodec {
	ret := C.QTextDocumentWriter_Codec(this.h)
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QTextDocumentWriter_SupportedDocumentFormats() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QTextDocumentWriter_SupportedDocumentFormats(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocumentWriter) Delete() {
	C.QTextDocumentWriter_Delete(this.h)
}
