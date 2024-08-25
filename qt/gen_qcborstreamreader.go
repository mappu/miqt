package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcborstreamreader.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCborStreamReader struct {
	h *C.QCborStreamReader
}

func (this *QCborStreamReader) cPointer() *C.QCborStreamReader {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCborStreamReader(h *C.QCborStreamReader) *QCborStreamReader {
	return &QCborStreamReader{h: h}
}

func newQCborStreamReader_U(h unsafe.Pointer) *QCborStreamReader {
	return newQCborStreamReader((*C.QCborStreamReader)(h))
}

// NewQCborStreamReader constructs a new QCborStreamReader object.
func NewQCborStreamReader() *QCborStreamReader {
	ret := C.QCborStreamReader_new()
	return newQCborStreamReader(ret)
}

// NewQCborStreamReader2 constructs a new QCborStreamReader object.
func NewQCborStreamReader2(data string, lenVal uint64) *QCborStreamReader {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QCborStreamReader_new2(data_Cstring, (C.size_t)(lenVal))
	return newQCborStreamReader(ret)
}

// NewQCborStreamReader3 constructs a new QCborStreamReader object.
func NewQCborStreamReader3(data *byte, lenVal uint64) *QCborStreamReader {
	ret := C.QCborStreamReader_new3((*C.uint8_t)(unsafe.Pointer(data)), (C.size_t)(lenVal))
	return newQCborStreamReader(ret)
}

// NewQCborStreamReader4 constructs a new QCborStreamReader object.
func NewQCborStreamReader4(data *QByteArray) *QCborStreamReader {
	ret := C.QCborStreamReader_new4(data.cPointer())
	return newQCborStreamReader(ret)
}

// NewQCborStreamReader5 constructs a new QCborStreamReader object.
func NewQCborStreamReader5(device *QIODevice) *QCborStreamReader {
	ret := C.QCborStreamReader_new5(device.cPointer())
	return newQCborStreamReader(ret)
}

func (this *QCborStreamReader) SetDevice(device *QIODevice) {
	C.QCborStreamReader_SetDevice(this.h, device.cPointer())
}

func (this *QCborStreamReader) Device() *QIODevice {
	ret := C.QCborStreamReader_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QCborStreamReader) AddData(data *QByteArray) {
	C.QCborStreamReader_AddData(this.h, data.cPointer())
}

func (this *QCborStreamReader) AddData2(data string, lenVal uint64) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCborStreamReader_AddData2(this.h, data_Cstring, (C.size_t)(lenVal))
}

func (this *QCborStreamReader) AddData3(data *byte, lenVal uint64) {
	C.QCborStreamReader_AddData3(this.h, (*C.uint8_t)(unsafe.Pointer(data)), (C.size_t)(lenVal))
}

func (this *QCborStreamReader) Reparse() {
	C.QCborStreamReader_Reparse(this.h)
}

func (this *QCborStreamReader) Clear() {
	C.QCborStreamReader_Clear(this.h)
}

func (this *QCborStreamReader) Reset() {
	C.QCborStreamReader_Reset(this.h)
}

func (this *QCborStreamReader) LastError() *QCborError {
	ret := C.QCborStreamReader_LastError(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborError(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborError) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborStreamReader) CurrentOffset() int64 {
	ret := C.QCborStreamReader_CurrentOffset(this.h)
	return (int64)(ret)
}

func (this *QCborStreamReader) IsValid() bool {
	ret := C.QCborStreamReader_IsValid(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) ContainerDepth() int {
	ret := C.QCborStreamReader_ContainerDepth(this.h)
	return (int)(ret)
}

func (this *QCborStreamReader) HasNext() bool {
	ret := C.QCborStreamReader_HasNext(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) Next() bool {
	ret := C.QCborStreamReader_Next(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsUnsignedInteger() bool {
	ret := C.QCborStreamReader_IsUnsignedInteger(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsNegativeInteger() bool {
	ret := C.QCborStreamReader_IsNegativeInteger(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsInteger() bool {
	ret := C.QCborStreamReader_IsInteger(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsByteArray() bool {
	ret := C.QCborStreamReader_IsByteArray(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsString() bool {
	ret := C.QCborStreamReader_IsString(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsArray() bool {
	ret := C.QCborStreamReader_IsArray(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsMap() bool {
	ret := C.QCborStreamReader_IsMap(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsTag() bool {
	ret := C.QCborStreamReader_IsTag(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsSimpleType() bool {
	ret := C.QCborStreamReader_IsSimpleType(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsFloat16() bool {
	ret := C.QCborStreamReader_IsFloat16(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsFloat() bool {
	ret := C.QCborStreamReader_IsFloat(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsDouble() bool {
	ret := C.QCborStreamReader_IsDouble(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsInvalid() bool {
	ret := C.QCborStreamReader_IsInvalid(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsFalse() bool {
	ret := C.QCborStreamReader_IsFalse(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsTrue() bool {
	ret := C.QCborStreamReader_IsTrue(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsBool() bool {
	ret := C.QCborStreamReader_IsBool(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsNull() bool {
	ret := C.QCborStreamReader_IsNull(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsUndefined() bool {
	ret := C.QCborStreamReader_IsUndefined(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) IsLengthKnown() bool {
	ret := C.QCborStreamReader_IsLengthKnown(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) Length() uint64 {
	ret := C.QCborStreamReader_Length(this.h)
	return (uint64)(ret)
}

func (this *QCborStreamReader) IsContainer() bool {
	ret := C.QCborStreamReader_IsContainer(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) EnterContainer() bool {
	ret := C.QCborStreamReader_EnterContainer(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) LeaveContainer() bool {
	ret := C.QCborStreamReader_LeaveContainer(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) CurrentStringChunkSize() uint64 {
	ret := C.QCborStreamReader_CurrentStringChunkSize(this.h)
	return (uint64)(ret)
}

func (this *QCborStreamReader) ToBool() bool {
	ret := C.QCborStreamReader_ToBool(this.h)
	return (bool)(ret)
}

func (this *QCborStreamReader) ToUnsignedInteger() uint64 {
	ret := C.QCborStreamReader_ToUnsignedInteger(this.h)
	return (uint64)(ret)
}

func (this *QCborStreamReader) ToFloat() float32 {
	ret := C.QCborStreamReader_ToFloat(this.h)
	return (float32)(ret)
}

func (this *QCborStreamReader) ToDouble() float64 {
	ret := C.QCborStreamReader_ToDouble(this.h)
	return (float64)(ret)
}

func (this *QCborStreamReader) ToInteger() int64 {
	ret := C.QCborStreamReader_ToInteger(this.h)
	return (int64)(ret)
}

func (this *QCborStreamReader) Next1(maxRecursion int) bool {
	ret := C.QCborStreamReader_Next1(this.h, (C.int)(maxRecursion))
	return (bool)(ret)
}

func (this *QCborStreamReader) Delete() {
	C.QCborStreamReader_Delete(this.h)
}
