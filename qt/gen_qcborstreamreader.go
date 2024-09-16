package qt

/*

#include "gen_qcborstreamreader.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCborStreamReader__Type byte

const (
	QCborStreamReader__Type__UnsignedInteger QCborStreamReader__Type = 0
	QCborStreamReader__Type__NegativeInteger QCborStreamReader__Type = 32
	QCborStreamReader__Type__ByteString      QCborStreamReader__Type = 64
	QCborStreamReader__Type__ByteArray       QCborStreamReader__Type = 64
	QCborStreamReader__Type__TextString      QCborStreamReader__Type = 96
	QCborStreamReader__Type__String          QCborStreamReader__Type = 96
	QCborStreamReader__Type__Array           QCborStreamReader__Type = 128
	QCborStreamReader__Type__Map             QCborStreamReader__Type = 160
	QCborStreamReader__Type__Tag             QCborStreamReader__Type = 192
	QCborStreamReader__Type__SimpleType      QCborStreamReader__Type = 224
	QCborStreamReader__Type__HalfFloat       QCborStreamReader__Type = 249
	QCborStreamReader__Type__Float16         QCborStreamReader__Type = 249
	QCborStreamReader__Type__Float           QCborStreamReader__Type = 250
	QCborStreamReader__Type__Double          QCborStreamReader__Type = 251
	QCborStreamReader__Type__Invalid         QCborStreamReader__Type = 255
)

type QCborStreamReader__StringResultCode int

const (
	QCborStreamReader__StringResultCode__EndOfString QCborStreamReader__StringResultCode = 0
	QCborStreamReader__StringResultCode__Ok          QCborStreamReader__StringResultCode = 1
	QCborStreamReader__StringResultCode__Error       QCborStreamReader__StringResultCode = -1
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
	if h == nil {
		return nil
	}
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
	ret := C.QCborStreamReader_new3((*C.uchar)(unsafe.Pointer(data)), (C.size_t)(lenVal))
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
	_ret := C.QCborStreamReader_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(_ret))
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
	C.QCborStreamReader_AddData3(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.size_t)(lenVal))
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
	_ret := C.QCborStreamReader_LastError(this.h)
	_goptr := newQCborError(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborStreamReader) CurrentOffset() int64 {
	_ret := C.QCborStreamReader_CurrentOffset(this.h)
	return (int64)(_ret)
}

func (this *QCborStreamReader) IsValid() bool {
	_ret := C.QCborStreamReader_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) ContainerDepth() int {
	_ret := C.QCborStreamReader_ContainerDepth(this.h)
	return (int)(_ret)
}

func (this *QCborStreamReader) ParentContainerType() QCborStreamReader__Type {
	_ret := C.QCborStreamReader_ParentContainerType(this.h)
	return (QCborStreamReader__Type)(_ret)
}

func (this *QCborStreamReader) HasNext() bool {
	_ret := C.QCborStreamReader_HasNext(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) Next() bool {
	_ret := C.QCborStreamReader_Next(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) Type() QCborStreamReader__Type {
	_ret := C.QCborStreamReader_Type(this.h)
	return (QCborStreamReader__Type)(_ret)
}

func (this *QCborStreamReader) IsUnsignedInteger() bool {
	_ret := C.QCborStreamReader_IsUnsignedInteger(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsNegativeInteger() bool {
	_ret := C.QCborStreamReader_IsNegativeInteger(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsInteger() bool {
	_ret := C.QCborStreamReader_IsInteger(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsByteArray() bool {
	_ret := C.QCborStreamReader_IsByteArray(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsString() bool {
	_ret := C.QCborStreamReader_IsString(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsArray() bool {
	_ret := C.QCborStreamReader_IsArray(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsMap() bool {
	_ret := C.QCborStreamReader_IsMap(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsTag() bool {
	_ret := C.QCborStreamReader_IsTag(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsSimpleType() bool {
	_ret := C.QCborStreamReader_IsSimpleType(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsFloat16() bool {
	_ret := C.QCborStreamReader_IsFloat16(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsFloat() bool {
	_ret := C.QCborStreamReader_IsFloat(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsDouble() bool {
	_ret := C.QCborStreamReader_IsDouble(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsInvalid() bool {
	_ret := C.QCborStreamReader_IsInvalid(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsSimpleTypeWithSt(st QCborSimpleType) bool {
	_ret := C.QCborStreamReader_IsSimpleTypeWithSt(this.h, st)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsFalse() bool {
	_ret := C.QCborStreamReader_IsFalse(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsTrue() bool {
	_ret := C.QCborStreamReader_IsTrue(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsBool() bool {
	_ret := C.QCborStreamReader_IsBool(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsNull() bool {
	_ret := C.QCborStreamReader_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsUndefined() bool {
	_ret := C.QCborStreamReader_IsUndefined(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) IsLengthKnown() bool {
	_ret := C.QCborStreamReader_IsLengthKnown(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) Length() uint64 {
	_ret := C.QCborStreamReader_Length(this.h)
	return (uint64)(_ret)
}

func (this *QCborStreamReader) IsContainer() bool {
	_ret := C.QCborStreamReader_IsContainer(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) EnterContainer() bool {
	_ret := C.QCborStreamReader_EnterContainer(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) LeaveContainer() bool {
	_ret := C.QCborStreamReader_LeaveContainer(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) CurrentStringChunkSize() uint64 {
	_ret := C.QCborStreamReader_CurrentStringChunkSize(this.h)
	return (uint64)(_ret)
}

func (this *QCborStreamReader) ToBool() bool {
	_ret := C.QCborStreamReader_ToBool(this.h)
	return (bool)(_ret)
}

func (this *QCborStreamReader) ToTag() QCborTag {
	return C.QCborStreamReader_ToTag(this.h)
}

func (this *QCborStreamReader) ToUnsignedInteger() uint64 {
	_ret := C.QCborStreamReader_ToUnsignedInteger(this.h)
	return (uint64)(_ret)
}

func (this *QCborStreamReader) ToNegativeInteger() QCborNegativeInteger {
	return C.QCborStreamReader_ToNegativeInteger(this.h)
}

func (this *QCborStreamReader) ToSimpleType() QCborSimpleType {
	return C.QCborStreamReader_ToSimpleType(this.h)
}

func (this *QCborStreamReader) ToFloat() float32 {
	_ret := C.QCborStreamReader_ToFloat(this.h)
	return (float32)(_ret)
}

func (this *QCborStreamReader) ToDouble() float64 {
	_ret := C.QCborStreamReader_ToDouble(this.h)
	return (float64)(_ret)
}

func (this *QCborStreamReader) ToInteger() int64 {
	_ret := C.QCborStreamReader_ToInteger(this.h)
	return (int64)(_ret)
}

func (this *QCborStreamReader) Next1(maxRecursion int) bool {
	_ret := C.QCborStreamReader_Next1(this.h, (C.int)(maxRecursion))
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QCborStreamReader) Delete() {
	C.QCborStreamReader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborStreamReader) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborStreamReader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
