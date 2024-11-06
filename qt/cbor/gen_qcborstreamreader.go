package cbor

/*

#include "gen_qcborstreamreader.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QCborStreamReader__Type byte

const (
	QCborStreamReader__UnsignedInteger QCborStreamReader__Type = 0
	QCborStreamReader__NegativeInteger QCborStreamReader__Type = 32
	QCborStreamReader__ByteString      QCborStreamReader__Type = 64
	QCborStreamReader__ByteArray       QCborStreamReader__Type = 64
	QCborStreamReader__TextString      QCborStreamReader__Type = 96
	QCborStreamReader__String          QCborStreamReader__Type = 96
	QCborStreamReader__Array           QCborStreamReader__Type = 128
	QCborStreamReader__Map             QCborStreamReader__Type = 160
	QCborStreamReader__Tag             QCborStreamReader__Type = 192
	QCborStreamReader__SimpleType      QCborStreamReader__Type = 224
	QCborStreamReader__HalfFloat       QCborStreamReader__Type = 249
	QCborStreamReader__Float16         QCborStreamReader__Type = 249
	QCborStreamReader__Float           QCborStreamReader__Type = 250
	QCborStreamReader__Double          QCborStreamReader__Type = 251
	QCborStreamReader__Invalid         QCborStreamReader__Type = 255
)

type QCborStreamReader__StringResultCode int

const (
	QCborStreamReader__EndOfString QCborStreamReader__StringResultCode = 0
	QCborStreamReader__Ok          QCborStreamReader__StringResultCode = 1
	QCborStreamReader__Error       QCborStreamReader__StringResultCode = -1
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

func (this *QCborStreamReader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCborStreamReader(h *C.QCborStreamReader) *QCborStreamReader {
	if h == nil {
		return nil
	}
	return &QCborStreamReader{h: h}
}

func UnsafeNewQCborStreamReader(h unsafe.Pointer) *QCborStreamReader {
	return newQCborStreamReader((*C.QCborStreamReader)(h))
}

// NewQCborStreamReader constructs a new QCborStreamReader object.
func NewQCborStreamReader() *QCborStreamReader {
	ret := C.QCborStreamReader_new()
	return newQCborStreamReader(ret)
}

// NewQCborStreamReader2 constructs a new QCborStreamReader object.
func NewQCborStreamReader2(data string, lenVal int64) *QCborStreamReader {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QCborStreamReader_new2(data_Cstring, (C.ptrdiff_t)(lenVal))
	return newQCborStreamReader(ret)
}

// NewQCborStreamReader3 constructs a new QCborStreamReader object.
func NewQCborStreamReader3(data *byte, lenVal int64) *QCborStreamReader {
	ret := C.QCborStreamReader_new3((*C.uchar)(unsafe.Pointer(data)), (C.ptrdiff_t)(lenVal))
	return newQCborStreamReader(ret)
}

// NewQCborStreamReader4 constructs a new QCborStreamReader object.
func NewQCborStreamReader4(data []byte) *QCborStreamReader {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	ret := C.QCborStreamReader_new4(data_alias)
	return newQCborStreamReader(ret)
}

// NewQCborStreamReader5 constructs a new QCborStreamReader object.
func NewQCborStreamReader5(device *qt.QIODevice) *QCborStreamReader {
	ret := C.QCborStreamReader_new5((*C.QIODevice)(device.UnsafePointer()))
	return newQCborStreamReader(ret)
}

func (this *QCborStreamReader) SetDevice(device *qt.QIODevice) {
	C.QCborStreamReader_SetDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QCborStreamReader) Device() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QCborStreamReader_Device(this.h)))
}

func (this *QCborStreamReader) AddData(data []byte) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QCborStreamReader_AddData(this.h, data_alias)
}

func (this *QCborStreamReader) AddData2(data string, lenVal int64) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCborStreamReader_AddData2(this.h, data_Cstring, (C.ptrdiff_t)(lenVal))
}

func (this *QCborStreamReader) AddData3(data *byte, lenVal int64) {
	C.QCborStreamReader_AddData3(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.ptrdiff_t)(lenVal))
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
	return (int64)(C.QCborStreamReader_CurrentOffset(this.h))
}

func (this *QCborStreamReader) IsValid() bool {
	return (bool)(C.QCborStreamReader_IsValid(this.h))
}

func (this *QCborStreamReader) ContainerDepth() int {
	return (int)(C.QCborStreamReader_ContainerDepth(this.h))
}

func (this *QCborStreamReader) ParentContainerType() QCborStreamReader__Type {
	return (QCborStreamReader__Type)(C.QCborStreamReader_ParentContainerType(this.h))
}

func (this *QCborStreamReader) HasNext() bool {
	return (bool)(C.QCborStreamReader_HasNext(this.h))
}

func (this *QCborStreamReader) Next() bool {
	return (bool)(C.QCborStreamReader_Next(this.h))
}

func (this *QCborStreamReader) Type() QCborStreamReader__Type {
	return (QCborStreamReader__Type)(C.QCborStreamReader_Type(this.h))
}

func (this *QCborStreamReader) IsUnsignedInteger() bool {
	return (bool)(C.QCborStreamReader_IsUnsignedInteger(this.h))
}

func (this *QCborStreamReader) IsNegativeInteger() bool {
	return (bool)(C.QCborStreamReader_IsNegativeInteger(this.h))
}

func (this *QCborStreamReader) IsInteger() bool {
	return (bool)(C.QCborStreamReader_IsInteger(this.h))
}

func (this *QCborStreamReader) IsByteArray() bool {
	return (bool)(C.QCborStreamReader_IsByteArray(this.h))
}

func (this *QCborStreamReader) IsString() bool {
	return (bool)(C.QCborStreamReader_IsString(this.h))
}

func (this *QCborStreamReader) IsArray() bool {
	return (bool)(C.QCborStreamReader_IsArray(this.h))
}

func (this *QCborStreamReader) IsMap() bool {
	return (bool)(C.QCborStreamReader_IsMap(this.h))
}

func (this *QCborStreamReader) IsTag() bool {
	return (bool)(C.QCborStreamReader_IsTag(this.h))
}

func (this *QCborStreamReader) IsSimpleType() bool {
	return (bool)(C.QCborStreamReader_IsSimpleType(this.h))
}

func (this *QCborStreamReader) IsFloat16() bool {
	return (bool)(C.QCborStreamReader_IsFloat16(this.h))
}

func (this *QCborStreamReader) IsFloat() bool {
	return (bool)(C.QCborStreamReader_IsFloat(this.h))
}

func (this *QCborStreamReader) IsDouble() bool {
	return (bool)(C.QCborStreamReader_IsDouble(this.h))
}

func (this *QCborStreamReader) IsInvalid() bool {
	return (bool)(C.QCborStreamReader_IsInvalid(this.h))
}

func (this *QCborStreamReader) IsSimpleTypeWithSt(st QCborSimpleType) bool {
	return (bool)(C.QCborStreamReader_IsSimpleTypeWithSt(this.h, (C.uint8_t)(st)))
}

func (this *QCborStreamReader) IsFalse() bool {
	return (bool)(C.QCborStreamReader_IsFalse(this.h))
}

func (this *QCborStreamReader) IsTrue() bool {
	return (bool)(C.QCborStreamReader_IsTrue(this.h))
}

func (this *QCborStreamReader) IsBool() bool {
	return (bool)(C.QCborStreamReader_IsBool(this.h))
}

func (this *QCborStreamReader) IsNull() bool {
	return (bool)(C.QCborStreamReader_IsNull(this.h))
}

func (this *QCborStreamReader) IsUndefined() bool {
	return (bool)(C.QCborStreamReader_IsUndefined(this.h))
}

func (this *QCborStreamReader) IsLengthKnown() bool {
	return (bool)(C.QCborStreamReader_IsLengthKnown(this.h))
}

func (this *QCborStreamReader) Length() uint64 {
	return (uint64)(C.QCborStreamReader_Length(this.h))
}

func (this *QCborStreamReader) IsContainer() bool {
	return (bool)(C.QCborStreamReader_IsContainer(this.h))
}

func (this *QCborStreamReader) EnterContainer() bool {
	return (bool)(C.QCborStreamReader_EnterContainer(this.h))
}

func (this *QCborStreamReader) LeaveContainer() bool {
	return (bool)(C.QCborStreamReader_LeaveContainer(this.h))
}

func (this *QCborStreamReader) CurrentStringChunkSize() int64 {
	return (int64)(C.QCborStreamReader_CurrentStringChunkSize(this.h))
}

func (this *QCborStreamReader) ToBool() bool {
	return (bool)(C.QCborStreamReader_ToBool(this.h))
}

func (this *QCborStreamReader) ToTag() QCborTag {
	return (QCborTag)(C.QCborStreamReader_ToTag(this.h))
}

func (this *QCborStreamReader) ToUnsignedInteger() uint64 {
	return (uint64)(C.QCborStreamReader_ToUnsignedInteger(this.h))
}

func (this *QCborStreamReader) ToNegativeInteger() QCborNegativeInteger {
	return (QCborNegativeInteger)(C.QCborStreamReader_ToNegativeInteger(this.h))
}

func (this *QCborStreamReader) ToSimpleType() QCborSimpleType {
	return (QCborSimpleType)(C.QCborStreamReader_ToSimpleType(this.h))
}

func (this *QCborStreamReader) ToFloat() float32 {
	return (float32)(C.QCborStreamReader_ToFloat(this.h))
}

func (this *QCborStreamReader) ToDouble() float64 {
	return (float64)(C.QCborStreamReader_ToDouble(this.h))
}

func (this *QCborStreamReader) ToInteger() int64 {
	return (int64)(C.QCborStreamReader_ToInteger(this.h))
}

func (this *QCborStreamReader) Next1(maxRecursion int) bool {
	return (bool)(C.QCborStreamReader_Next1(this.h, (C.int)(maxRecursion)))
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
