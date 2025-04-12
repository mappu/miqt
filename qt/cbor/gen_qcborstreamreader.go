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

// newQCborStreamReader constructs the type using only CGO pointers.
func newQCborStreamReader(h *C.QCborStreamReader) *QCborStreamReader {
	if h == nil {
		return nil
	}

	return &QCborStreamReader{h: h}
}

// UnsafeNewQCborStreamReader constructs the type using only unsafe pointers.
func UnsafeNewQCborStreamReader(h unsafe.Pointer) *QCborStreamReader {
	return newQCborStreamReader((*C.QCborStreamReader)(h))
}

// NewQCborStreamReader constructs a new QCborStreamReader object.
func NewQCborStreamReader() *QCborStreamReader {

	return newQCborStreamReader(C.QCborStreamReader_new())
}

// NewQCborStreamReader2 constructs a new QCborStreamReader object.
func NewQCborStreamReader2(data string, lenVal int64) *QCborStreamReader {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return newQCborStreamReader(C.QCborStreamReader_new2(data_Cstring, (C.ptrdiff_t)(lenVal)))
}

// NewQCborStreamReader3 constructs a new QCborStreamReader object.
func NewQCborStreamReader3(data *byte, lenVal int64) *QCborStreamReader {

	return newQCborStreamReader(C.QCborStreamReader_new3((*C.uchar)(unsafe.Pointer(data)), (C.ptrdiff_t)(lenVal)))
}

// NewQCborStreamReader4 constructs a new QCborStreamReader object.
func NewQCborStreamReader4(data []byte) *QCborStreamReader {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQCborStreamReader(C.QCborStreamReader_new4(data_alias))
}

// NewQCborStreamReader5 constructs a new QCborStreamReader object.
func NewQCborStreamReader5(device *qt.QIODevice) *QCborStreamReader {

	return newQCborStreamReader(C.QCborStreamReader_new5((*C.QIODevice)(device.UnsafePointer())))
}

func (this *QCborStreamReader) SetDevice(device *qt.QIODevice) {
	C.QCborStreamReader_setDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QCborStreamReader) Device() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QCborStreamReader_device(this.h)))
}

func (this *QCborStreamReader) AddData(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QCborStreamReader_addData(this.h, data_alias)
}

func (this *QCborStreamReader) AddData2(data string, lenVal int64) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCborStreamReader_addData2(this.h, data_Cstring, (C.ptrdiff_t)(lenVal))
}

func (this *QCborStreamReader) AddData3(data *byte, lenVal int64) {
	C.QCborStreamReader_addData3(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.ptrdiff_t)(lenVal))
}

func (this *QCborStreamReader) Reparse() {
	C.QCborStreamReader_reparse(this.h)
}

func (this *QCborStreamReader) Clear() {
	C.QCborStreamReader_clear(this.h)
}

func (this *QCborStreamReader) Reset() {
	C.QCborStreamReader_reset(this.h)
}

func (this *QCborStreamReader) LastError() *QCborError {
	_goptr := newQCborError(C.QCborStreamReader_lastError(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborStreamReader) CurrentOffset() int64 {
	return (int64)(C.QCborStreamReader_currentOffset(this.h))
}

func (this *QCborStreamReader) IsValid() bool {
	return (bool)(C.QCborStreamReader_isValid(this.h))
}

func (this *QCborStreamReader) ContainerDepth() int {
	return (int)(C.QCborStreamReader_containerDepth(this.h))
}

func (this *QCborStreamReader) ParentContainerType() QCborStreamReader__Type {
	return (QCborStreamReader__Type)(C.QCborStreamReader_parentContainerType(this.h))
}

func (this *QCborStreamReader) HasNext() bool {
	return (bool)(C.QCborStreamReader_hasNext(this.h))
}

func (this *QCborStreamReader) Next() bool {
	return (bool)(C.QCborStreamReader_next(this.h))
}

func (this *QCborStreamReader) Type() QCborStreamReader__Type {
	return (QCborStreamReader__Type)(C.QCborStreamReader_type(this.h))
}

func (this *QCborStreamReader) IsUnsignedInteger() bool {
	return (bool)(C.QCborStreamReader_isUnsignedInteger(this.h))
}

func (this *QCborStreamReader) IsNegativeInteger() bool {
	return (bool)(C.QCborStreamReader_isNegativeInteger(this.h))
}

func (this *QCborStreamReader) IsInteger() bool {
	return (bool)(C.QCborStreamReader_isInteger(this.h))
}

func (this *QCborStreamReader) IsByteArray() bool {
	return (bool)(C.QCborStreamReader_isByteArray(this.h))
}

func (this *QCborStreamReader) IsString() bool {
	return (bool)(C.QCborStreamReader_isString(this.h))
}

func (this *QCborStreamReader) IsArray() bool {
	return (bool)(C.QCborStreamReader_isArray(this.h))
}

func (this *QCborStreamReader) IsMap() bool {
	return (bool)(C.QCborStreamReader_isMap(this.h))
}

func (this *QCborStreamReader) IsTag() bool {
	return (bool)(C.QCborStreamReader_isTag(this.h))
}

func (this *QCborStreamReader) IsSimpleType() bool {
	return (bool)(C.QCborStreamReader_isSimpleType(this.h))
}

func (this *QCborStreamReader) IsFloat16() bool {
	return (bool)(C.QCborStreamReader_isFloat16(this.h))
}

func (this *QCborStreamReader) IsFloat() bool {
	return (bool)(C.QCborStreamReader_isFloat(this.h))
}

func (this *QCborStreamReader) IsDouble() bool {
	return (bool)(C.QCborStreamReader_isDouble(this.h))
}

func (this *QCborStreamReader) IsInvalid() bool {
	return (bool)(C.QCborStreamReader_isInvalid(this.h))
}

func (this *QCborStreamReader) IsSimpleTypeWithSt(st QCborSimpleType) bool {
	return (bool)(C.QCborStreamReader_isSimpleTypeWithSt(this.h, (C.uint8_t)(st)))
}

func (this *QCborStreamReader) IsFalse() bool {
	return (bool)(C.QCborStreamReader_isFalse(this.h))
}

func (this *QCborStreamReader) IsTrue() bool {
	return (bool)(C.QCborStreamReader_isTrue(this.h))
}

func (this *QCborStreamReader) IsBool() bool {
	return (bool)(C.QCborStreamReader_isBool(this.h))
}

func (this *QCborStreamReader) IsNull() bool {
	return (bool)(C.QCborStreamReader_isNull(this.h))
}

func (this *QCborStreamReader) IsUndefined() bool {
	return (bool)(C.QCborStreamReader_isUndefined(this.h))
}

func (this *QCborStreamReader) IsLengthKnown() bool {
	return (bool)(C.QCborStreamReader_isLengthKnown(this.h))
}

func (this *QCborStreamReader) Length() uint64 {
	return (uint64)(C.QCborStreamReader_length(this.h))
}

func (this *QCborStreamReader) IsContainer() bool {
	return (bool)(C.QCborStreamReader_isContainer(this.h))
}

func (this *QCborStreamReader) EnterContainer() bool {
	return (bool)(C.QCborStreamReader_enterContainer(this.h))
}

func (this *QCborStreamReader) LeaveContainer() bool {
	return (bool)(C.QCborStreamReader_leaveContainer(this.h))
}

func (this *QCborStreamReader) CurrentStringChunkSize() int64 {
	return (int64)(C.QCborStreamReader_currentStringChunkSize(this.h))
}

func (this *QCborStreamReader) ToBool() bool {
	return (bool)(C.QCborStreamReader_toBool(this.h))
}

func (this *QCborStreamReader) ToTag() QCborTag {
	return (QCborTag)(C.QCborStreamReader_toTag(this.h))
}

func (this *QCborStreamReader) ToUnsignedInteger() uint64 {
	return (uint64)(C.QCborStreamReader_toUnsignedInteger(this.h))
}

func (this *QCborStreamReader) ToNegativeInteger() QCborNegativeInteger {
	return (QCborNegativeInteger)(C.QCborStreamReader_toNegativeInteger(this.h))
}

func (this *QCborStreamReader) ToSimpleType() QCborSimpleType {
	return (QCborSimpleType)(C.QCborStreamReader_toSimpleType(this.h))
}

func (this *QCborStreamReader) ToFloat() float32 {
	return (float32)(C.QCborStreamReader_toFloat(this.h))
}

func (this *QCborStreamReader) ToDouble() float64 {
	return (float64)(C.QCborStreamReader_toDouble(this.h))
}

func (this *QCborStreamReader) ToInteger() int64 {
	return (int64)(C.QCborStreamReader_toInteger(this.h))
}

func (this *QCborStreamReader) NextWithMaxRecursion(maxRecursion int) bool {
	return (bool)(C.QCborStreamReader_nextWithMaxRecursion(this.h, (C.int)(maxRecursion)))
}

// Delete this object from C++ memory.
func (this *QCborStreamReader) Delete() {
	C.QCborStreamReader_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborStreamReader) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborStreamReader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
