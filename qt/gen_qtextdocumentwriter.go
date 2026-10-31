package qt

/*

#include "gen_qtextdocumentwriter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextDocumentWriter struct {
	h  *C.QTextDocumentWriter
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTextDocumentWriter) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQTextDocumentWriter constructs the type using only CGO pointers.
func newQTextDocumentWriter(h *C.QTextDocumentWriter) *QTextDocumentWriter {
	if h == nil {
		return nil
	}

	return &QTextDocumentWriter{h: h}
}

// UnsafeNewQTextDocumentWriter constructs the type using only unsafe pointers.
func UnsafeNewQTextDocumentWriter(h unsafe.Pointer) *QTextDocumentWriter {
	return newQTextDocumentWriter((*C.QTextDocumentWriter)(h))
}

// NewQTextDocumentWriter constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter() *QTextDocumentWriter {

	return newQTextDocumentWriter(C.QTextDocumentWriter_new())
}

// NewQTextDocumentWriter2 constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter2(device *QIODevice, format []byte) *QTextDocumentWriter {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))

	return newQTextDocumentWriter(C.QTextDocumentWriter_new2(device.cPointer(), format_alias))
}

// NewQTextDocumentWriter3 constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter3(fileName string) *QTextDocumentWriter {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQTextDocumentWriter(C.QTextDocumentWriter_new3(fileName_ms))
}

// NewQTextDocumentWriter4 constructs a new QTextDocumentWriter object.
func NewQTextDocumentWriter4(fileName string, format []byte) *QTextDocumentWriter {
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

	return newQTextDocumentWriter(C.QTextDocumentWriter_new4(fileName_ms, format_alias))
}

func (this *QTextDocumentWriter) SetFormat(format []byte) {
	defer runtime.KeepAlive(this)
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	C.QTextDocumentWriter_setFormat(this.h, format_alias)
}

func (this *QTextDocumentWriter) Format() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QTextDocumentWriter_format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTextDocumentWriter) SetDevice(device *QIODevice) {
	defer runtime.KeepAlive(this)
	C.QTextDocumentWriter_setDevice(this.h, device.cPointer())
}

func (this *QTextDocumentWriter) Device() *QIODevice {
	defer runtime.KeepAlive(this)
	return newQIODevice(C.QTextDocumentWriter_device(this.h))
}

func (this *QTextDocumentWriter) SetFileName(fileName string) {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QTextDocumentWriter_setFileName(this.h, fileName_ms)
}

func (this *QTextDocumentWriter) FileName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTextDocumentWriter_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocumentWriter) Write(document *QTextDocument) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextDocumentWriter_write(this.h, document.cPointer()))
}

func (this *QTextDocumentWriter) WriteWithFragment(fragment *QTextDocumentFragment) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(fragment)
	return (bool)(C.QTextDocumentWriter_writeWithFragment(this.h, fragment.cPointer()))
}

func (this *QTextDocumentWriter) SetCodec(codec *QTextCodec) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(codec)
	C.QTextDocumentWriter_setCodec(this.h, codec.cPointer())
}

func (this *QTextDocumentWriter) Codec() *QTextCodec {
	defer runtime.KeepAlive(this)
	return newQTextCodec(C.QTextDocumentWriter_codec(this.h))
}

func QTextDocumentWriter_SupportedDocumentFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QTextDocumentWriter_supportedDocumentFormats()
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

// Delete this object from C++ memory.
func (this *QTextDocumentWriter) Delete() {
	C.QTextDocumentWriter_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTextDocumentWriter) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTextDocumentWriter_delete((*C.QTextDocumentWriter)(gc[0]))
	})
	this.miqtSetGC(gc)
}
