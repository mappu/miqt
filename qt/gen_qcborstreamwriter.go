package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcborstreamwriter.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQCborStreamWriter(h *C.QCborStreamWriter) *QCborStreamWriter {
	return &QCborStreamWriter{h: h}
}

func newQCborStreamWriter_U(h unsafe.Pointer) *QCborStreamWriter {
	return newQCborStreamWriter((*C.QCborStreamWriter)(h))
}

// NewQCborStreamWriter constructs a new QCborStreamWriter object.
func NewQCborStreamWriter(device *QIODevice) *QCborStreamWriter {
	ret := C.QCborStreamWriter_new(device.cPointer())
	return newQCborStreamWriter(ret)
}

// NewQCborStreamWriter2 constructs a new QCborStreamWriter object.
func NewQCborStreamWriter2(data *QByteArray) *QCborStreamWriter {
	ret := C.QCborStreamWriter_new2(data.cPointer())
	return newQCborStreamWriter(ret)
}

func (this *QCborStreamWriter) SetDevice(device *QIODevice) {
	C.QCborStreamWriter_SetDevice(this.h, device.cPointer())
}

func (this *QCborStreamWriter) Device() *QIODevice {
	ret := C.QCborStreamWriter_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QCborStreamWriter) Append(u uint64) {
	C.QCborStreamWriter_Append(this.h, (C.uint64_t)(u))
}

func (this *QCborStreamWriter) AppendWithQint64(i int64) {
	C.QCborStreamWriter_AppendWithQint64(this.h, (C.int64_t)(i))
}

func (this *QCborStreamWriter) AppendWithBa(ba *QByteArray) {
	C.QCborStreamWriter_AppendWithBa(this.h, ba.cPointer())
}

func (this *QCborStreamWriter) AppendWithFloat(f float32) {
	C.QCborStreamWriter_AppendWithFloat(this.h, (C.float)(f))
}

func (this *QCborStreamWriter) AppendWithDouble(d float64) {
	C.QCborStreamWriter_AppendWithDouble(this.h, (C.double)(d))
}

func (this *QCborStreamWriter) AppendByteString(data string, lenVal uint64) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCborStreamWriter_AppendByteString(this.h, data_Cstring, (C.size_t)(lenVal))
}

func (this *QCborStreamWriter) AppendTextString(utf8 string, lenVal uint64) {
	utf8_Cstring := C.CString(utf8)
	defer C.free(unsafe.Pointer(utf8_Cstring))
	C.QCborStreamWriter_AppendTextString(this.h, utf8_Cstring, (C.size_t)(lenVal))
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

func (this *QCborStreamWriter) AppendWithStr(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QCborStreamWriter_AppendWithStr(this.h, str_Cstring)
}

func (this *QCborStreamWriter) StartArray() {
	C.QCborStreamWriter_StartArray(this.h)
}

func (this *QCborStreamWriter) StartArrayWithCount(count uint64) {
	C.QCborStreamWriter_StartArrayWithCount(this.h, (C.uint64_t)(count))
}

func (this *QCborStreamWriter) EndArray() bool {
	ret := C.QCborStreamWriter_EndArray(this.h)
	return (bool)(ret)
}

func (this *QCborStreamWriter) StartMap() {
	C.QCborStreamWriter_StartMap(this.h)
}

func (this *QCborStreamWriter) StartMapWithCount(count uint64) {
	C.QCborStreamWriter_StartMapWithCount(this.h, (C.uint64_t)(count))
}

func (this *QCborStreamWriter) EndMap() bool {
	ret := C.QCborStreamWriter_EndMap(this.h)
	return (bool)(ret)
}

func (this *QCborStreamWriter) Append2(str string, size uint64) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QCborStreamWriter_Append2(this.h, str_Cstring, (C.size_t)(size))
}

func (this *QCborStreamWriter) Delete() {
	C.QCborStreamWriter_Delete(this.h)
}
