package cbor

/*

#include "gen_qcborstreamwriter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QCborStreamWriter struct {
	h *C.QCborStreamWriter
}

func (this *QCborStreamWriter) cPointer() *C.QCborStreamWriter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborStreamWriter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborStreamWriter constructs the type using only CGO pointers.
func newQCborStreamWriter(h *C.QCborStreamWriter) *QCborStreamWriter {
	if h == nil {
		return nil
	}

	return &QCborStreamWriter{h: h}
}

// UnsafeNewQCborStreamWriter constructs the type using only unsafe pointers.
func UnsafeNewQCborStreamWriter(h unsafe.Pointer) *QCborStreamWriter {
	return newQCborStreamWriter((*C.QCborStreamWriter)(h))
}

// NewQCborStreamWriter constructs a new QCborStreamWriter object.
func NewQCborStreamWriter(device *qt.QIODevice) *QCborStreamWriter {

	return newQCborStreamWriter(C.QCborStreamWriter_new((*C.QIODevice)(device.UnsafePointer())))
}

func (this *QCborStreamWriter) SetDevice(device *qt.QIODevice) {
	C.QCborStreamWriter_setDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QCborStreamWriter) Device() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QCborStreamWriter_device(this.h)))
}

func (this *QCborStreamWriter) Append(u uint64) {
	C.QCborStreamWriter_append(this.h, (C.ulonglong)(u))
}

func (this *QCborStreamWriter) AppendWithQint64(i int64) {
	C.QCborStreamWriter_appendWithQint64(this.h, (C.longlong)(i))
}

func (this *QCborStreamWriter) AppendWithQCborNegativeInteger(n QCborNegativeInteger) {
	C.QCborStreamWriter_appendWithQCborNegativeInteger(this.h, (C.uint64_t)(n))
}

func (this *QCborStreamWriter) AppendWithBa(ba []byte) {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))
	C.QCborStreamWriter_appendWithBa(this.h, ba_alias)
}

func (this *QCborStreamWriter) AppendWithTag(tag QCborTag) {
	C.QCborStreamWriter_appendWithTag(this.h, (C.uint64_t)(tag))
}

func (this *QCborStreamWriter) Append3(tag QCborKnownTags) {
	C.QCborStreamWriter_append3(this.h, (C.int)(tag))
}

func (this *QCborStreamWriter) AppendWithSt(st QCborSimpleType) {
	C.QCborStreamWriter_appendWithSt(this.h, (C.uint8_t)(st))
}

func (this *QCborStreamWriter) AppendWithFloat(f float32) {
	C.QCborStreamWriter_appendWithFloat(this.h, (C.float)(f))
}

func (this *QCborStreamWriter) AppendWithDouble(d float64) {
	C.QCborStreamWriter_appendWithDouble(this.h, (C.double)(d))
}

func (this *QCborStreamWriter) AppendByteString(data string, lenVal int64) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCborStreamWriter_appendByteString(this.h, data_Cstring, (C.ptrdiff_t)(lenVal))
}

func (this *QCborStreamWriter) AppendTextString(utf8 string, lenVal int64) {
	utf8_Cstring := C.CString(utf8)
	defer C.free(unsafe.Pointer(utf8_Cstring))
	C.QCborStreamWriter_appendTextString(this.h, utf8_Cstring, (C.ptrdiff_t)(lenVal))
}

func (this *QCborStreamWriter) AppendWithBool(b bool) {
	C.QCborStreamWriter_appendWithBool(this.h, (C.bool)(b))
}

func (this *QCborStreamWriter) AppendNull() {
	C.QCborStreamWriter_appendNull(this.h)
}

func (this *QCborStreamWriter) AppendUndefined() {
	C.QCborStreamWriter_appendUndefined(this.h)
}

func (this *QCborStreamWriter) AppendWithInt(i int) {
	C.QCborStreamWriter_appendWithInt(this.h, (C.int)(i))
}

func (this *QCborStreamWriter) AppendWithUint(u uint) {
	C.QCborStreamWriter_appendWithUint(this.h, (C.uint)(u))
}

func (this *QCborStreamWriter) Append4(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QCborStreamWriter_append4(this.h, str_Cstring)
}

func (this *QCborStreamWriter) StartArray() {
	C.QCborStreamWriter_startArray(this.h)
}

func (this *QCborStreamWriter) StartArrayWithCount(count uint64) {
	C.QCborStreamWriter_startArrayWithCount(this.h, (C.ulonglong)(count))
}

func (this *QCborStreamWriter) EndArray() bool {
	return (bool)(C.QCborStreamWriter_endArray(this.h))
}

func (this *QCborStreamWriter) StartMap() {
	C.QCborStreamWriter_startMap(this.h)
}

func (this *QCborStreamWriter) StartMapWithCount(count uint64) {
	C.QCborStreamWriter_startMapWithCount(this.h, (C.ulonglong)(count))
}

func (this *QCborStreamWriter) EndMap() bool {
	return (bool)(C.QCborStreamWriter_endMap(this.h))
}

func (this *QCborStreamWriter) Append22(str string, size int64) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QCborStreamWriter_append22(this.h, str_Cstring, (C.ptrdiff_t)(size))
}

// Delete this object from C++ memory.
func (this *QCborStreamWriter) Delete() {
	C.QCborStreamWriter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborStreamWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborStreamWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
