package qt6

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
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	C.QTextDocumentWriter_SetFormat(this.h, format_alias)
}

func (this *QTextDocumentWriter) Format() []byte {
	var _bytearray C.struct_miqt_string = C.QTextDocumentWriter_Format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTextDocumentWriter) SetDevice(device *QIODevice) {
	C.QTextDocumentWriter_SetDevice(this.h, device.cPointer())
}

func (this *QTextDocumentWriter) Device() *QIODevice {
	return newQIODevice(C.QTextDocumentWriter_Device(this.h))
}

func (this *QTextDocumentWriter) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QTextDocumentWriter_SetFileName(this.h, fileName_ms)
}

func (this *QTextDocumentWriter) FileName() string {
	var _ms C.struct_miqt_string = C.QTextDocumentWriter_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocumentWriter) Write(document *QTextDocument) bool {
	return (bool)(C.QTextDocumentWriter_Write(this.h, document.cPointer()))
}

func (this *QTextDocumentWriter) WriteWithFragment(fragment *QTextDocumentFragment) bool {
	return (bool)(C.QTextDocumentWriter_WriteWithFragment(this.h, fragment.cPointer()))
}

func QTextDocumentWriter_SupportedDocumentFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QTextDocumentWriter_SupportedDocumentFormats()
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
