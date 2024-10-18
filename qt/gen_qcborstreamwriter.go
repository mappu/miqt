package qt

/*

#include "gen_qcborstreamwriter.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQCborStreamWriter(h *C.QCborStreamWriter) *QCborStreamWriter {
	if h == nil {
		return nil
	}
	return &QCborStreamWriter{h: h}
}

func UnsafeNewQCborStreamWriter(h unsafe.Pointer) *QCborStreamWriter {
	return newQCborStreamWriter((*C.QCborStreamWriter)(h))
}

// NewQCborStreamWriter constructs a new QCborStreamWriter object.
func NewQCborStreamWriter(device *QIODevice) *QCborStreamWriter {
	ret := C.QCborStreamWriter_new(device.cPointer())
	return newQCborStreamWriter(ret)
}

func (this *QCborStreamWriter) SetDevice(device *QIODevice) {
	C.QCborStreamWriter_SetDevice(this.h, device.cPointer())
}

func (this *QCborStreamWriter) Device() *QIODevice {
	return UnsafeNewQIODevice(unsafe.Pointer(C.QCborStreamWriter_Device(this.h)))
}

func (this *QCborStreamWriter) Append(u uint64) {
	C.QCborStreamWriter_Append(this.h, (C.ulonglong)(u))
}

func (this *QCborStreamWriter) AppendWithQint64(i int64) {
	C.QCborStreamWriter_AppendWithQint64(this.h, (C.longlong)(i))
}

func (this *QCborStreamWriter) AppendWithQCborNegativeInteger(n QCborNegativeInteger) {
	C.QCborStreamWriter_AppendWithQCborNegativeInteger(this.h, (C.uint64_t)(n))
}

func (this *QCborStreamWriter) AppendWithBa(ba []byte) {
	ba_alias := C.struct_miqt_string{}
	ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	ba_alias.len = C.size_t(len(ba))
	C.QCborStreamWriter_AppendWithBa(this.h, ba_alias)
}

func (this *QCborStreamWriter) AppendWithTag(tag QCborTag) {
	C.QCborStreamWriter_AppendWithTag(this.h, (C.uint64_t)(tag))
}

func (this *QCborStreamWriter) Append3(tag QCborKnownTags) {
	C.QCborStreamWriter_Append3(this.h, (C.int)(tag))
}

func (this *QCborStreamWriter) AppendWithSt(st QCborSimpleType) {
	C.QCborStreamWriter_AppendWithSt(this.h, (C.uint8_t)(st))
}

func (this *QCborStreamWriter) AppendWithFloat(f float32) {
	C.QCborStreamWriter_AppendWithFloat(this.h, (C.float)(f))
}

func (this *QCborStreamWriter) AppendWithDouble(d float64) {
	C.QCborStreamWriter_AppendWithDouble(this.h, (C.double)(d))
}

func (this *QCborStreamWriter) AppendByteString(data string, lenVal int64) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCborStreamWriter_AppendByteString(this.h, data_Cstring, (C.ptrdiff_t)(lenVal))
}

func (this *QCborStreamWriter) AppendTextString(utf8 string, lenVal int64) {
	utf8_Cstring := C.CString(utf8)
	defer C.free(unsafe.Pointer(utf8_Cstring))
	C.QCborStreamWriter_AppendTextString(this.h, utf8_Cstring, (C.ptrdiff_t)(lenVal))
}

func (this *QCborStreamWriter) AppendWithBool(b bool) {
	C.QCborStreamWriter_AppendWithBool(this.h, (C.bool)(b))
}

func (this *QCborStreamWriter) AppendNull() {
	C.QCborStreamWriter_AppendNull(this.h)
}

func (this *QCborStreamWriter) AppendUndefined() {
	C.QCborStreamWriter_AppendUndefined(this.h)
}

func (this *QCborStreamWriter) AppendWithInt(i int) {
	C.QCborStreamWriter_AppendWithInt(this.h, (C.int)(i))
}

func (this *QCborStreamWriter) AppendWithUint(u uint) {
	C.QCborStreamWriter_AppendWithUint(this.h, (C.uint)(u))
}

func (this *QCborStreamWriter) Append4(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QCborStreamWriter_Append4(this.h, str_Cstring)
}

func (this *QCborStreamWriter) StartArray() {
	C.QCborStreamWriter_StartArray(this.h)
}

func (this *QCborStreamWriter) StartArrayWithCount(count uint64) {
	C.QCborStreamWriter_StartArrayWithCount(this.h, (C.ulonglong)(count))
}

func (this *QCborStreamWriter) EndArray() bool {
	return (bool)(C.QCborStreamWriter_EndArray(this.h))
}

func (this *QCborStreamWriter) StartMap() {
	C.QCborStreamWriter_StartMap(this.h)
}

func (this *QCborStreamWriter) StartMapWithCount(count uint64) {
	C.QCborStreamWriter_StartMapWithCount(this.h, (C.ulonglong)(count))
}

func (this *QCborStreamWriter) EndMap() bool {
	return (bool)(C.QCborStreamWriter_EndMap(this.h))
}

func (this *QCborStreamWriter) Append22(str string, size int64) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QCborStreamWriter_Append22(this.h, str_Cstring, (C.ptrdiff_t)(size))
}

// Delete this object from C++ memory.
func (this *QCborStreamWriter) Delete() {
	C.QCborStreamWriter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborStreamWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborStreamWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
