package qt6

/*

#include "gen_qdatastream.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDataStream__Version int

const (
	QDataStream__Qt_1_0                    QDataStream__Version = 1
	QDataStream__Qt_2_0                    QDataStream__Version = 2
	QDataStream__Qt_2_1                    QDataStream__Version = 3
	QDataStream__Qt_3_0                    QDataStream__Version = 4
	QDataStream__Qt_3_1                    QDataStream__Version = 5
	QDataStream__Qt_3_3                    QDataStream__Version = 6
	QDataStream__Qt_4_0                    QDataStream__Version = 7
	QDataStream__Qt_4_1                    QDataStream__Version = 7
	QDataStream__Qt_4_2                    QDataStream__Version = 8
	QDataStream__Qt_4_3                    QDataStream__Version = 9
	QDataStream__Qt_4_4                    QDataStream__Version = 10
	QDataStream__Qt_4_5                    QDataStream__Version = 11
	QDataStream__Qt_4_6                    QDataStream__Version = 12
	QDataStream__Qt_4_7                    QDataStream__Version = 12
	QDataStream__Qt_4_8                    QDataStream__Version = 12
	QDataStream__Qt_4_9                    QDataStream__Version = 12
	QDataStream__Qt_5_0                    QDataStream__Version = 13
	QDataStream__Qt_5_1                    QDataStream__Version = 14
	QDataStream__Qt_5_2                    QDataStream__Version = 15
	QDataStream__Qt_5_3                    QDataStream__Version = 15
	QDataStream__Qt_5_4                    QDataStream__Version = 16
	QDataStream__Qt_5_5                    QDataStream__Version = 16
	QDataStream__Qt_5_6                    QDataStream__Version = 17
	QDataStream__Qt_5_7                    QDataStream__Version = 17
	QDataStream__Qt_5_8                    QDataStream__Version = 17
	QDataStream__Qt_5_9                    QDataStream__Version = 17
	QDataStream__Qt_5_10                   QDataStream__Version = 17
	QDataStream__Qt_5_11                   QDataStream__Version = 17
	QDataStream__Qt_5_12                   QDataStream__Version = 18
	QDataStream__Qt_5_13                   QDataStream__Version = 19
	QDataStream__Qt_5_14                   QDataStream__Version = 19
	QDataStream__Qt_5_15                   QDataStream__Version = 19
	QDataStream__Qt_6_0                    QDataStream__Version = 20
	QDataStream__Qt_6_1                    QDataStream__Version = 20
	QDataStream__Qt_6_2                    QDataStream__Version = 20
	QDataStream__Qt_6_3                    QDataStream__Version = 20
	QDataStream__Qt_6_4                    QDataStream__Version = 20
	QDataStream__Qt_DefaultCompiledVersion QDataStream__Version = 20
)

type QDataStream__ByteOrder int

const (
	QDataStream__BigEndian    QDataStream__ByteOrder = 0
	QDataStream__LittleEndian QDataStream__ByteOrder = 1
)

type QDataStream__Status int

const (
	QDataStream__Ok              QDataStream__Status = 0
	QDataStream__ReadPastEnd     QDataStream__Status = 1
	QDataStream__ReadCorruptData QDataStream__Status = 2
	QDataStream__WriteFailed     QDataStream__Status = 3
)

type QDataStream__FloatingPointPrecision int

const (
	QDataStream__SinglePrecision QDataStream__FloatingPointPrecision = 0
	QDataStream__DoublePrecision QDataStream__FloatingPointPrecision = 1
)

type QDataStream struct {
	h          *C.QDataStream
	isSubclass bool
	*QIODeviceBase
}

func (this *QDataStream) cPointer() *C.QDataStream {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDataStream) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDataStream constructs the type using only CGO pointers.
func newQDataStream(h *C.QDataStream, h_QIODeviceBase *C.QIODeviceBase) *QDataStream {
	if h == nil {
		return nil
	}
	return &QDataStream{h: h,
		QIODeviceBase: newQIODeviceBase(h_QIODeviceBase)}
}

// UnsafeNewQDataStream constructs the type using only unsafe pointers.
func UnsafeNewQDataStream(h unsafe.Pointer, h_QIODeviceBase unsafe.Pointer) *QDataStream {
	if h == nil {
		return nil
	}

	return &QDataStream{h: (*C.QDataStream)(h),
		QIODeviceBase: UnsafeNewQIODeviceBase(h_QIODeviceBase)}
}

// NewQDataStream constructs a new QDataStream object.
func NewQDataStream() *QDataStream {
	var outptr_QDataStream *C.QDataStream = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QDataStream_new(&outptr_QDataStream, &outptr_QIODeviceBase)
	ret := newQDataStream(outptr_QDataStream, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

// NewQDataStream2 constructs a new QDataStream object.
func NewQDataStream2(param1 *QIODevice) *QDataStream {
	var outptr_QDataStream *C.QDataStream = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QDataStream_new2(param1.cPointer(), &outptr_QDataStream, &outptr_QIODeviceBase)
	ret := newQDataStream(outptr_QDataStream, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

// NewQDataStream3 constructs a new QDataStream object.
func NewQDataStream3(param1 []byte) *QDataStream {
	param1_alias := C.struct_miqt_string{}
	param1_alias.data = (*C.char)(unsafe.Pointer(&param1[0]))
	param1_alias.len = C.size_t(len(param1))
	var outptr_QDataStream *C.QDataStream = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QDataStream_new3(param1_alias, &outptr_QDataStream, &outptr_QIODeviceBase)
	ret := newQDataStream(outptr_QDataStream, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

func (this *QDataStream) Device() *QIODevice {
	return UnsafeNewQIODevice(unsafe.Pointer(C.QDataStream_Device(this.h)), nil, nil)
}

func (this *QDataStream) SetDevice(device *QIODevice) {
	C.QDataStream_SetDevice(this.h, device.cPointer())
}

func (this *QDataStream) AtEnd() bool {
	return (bool)(C.QDataStream_AtEnd(this.h))
}

func (this *QDataStream) Status() QDataStream__Status {
	return (QDataStream__Status)(C.QDataStream_Status(this.h))
}

func (this *QDataStream) SetStatus(status QDataStream__Status) {
	C.QDataStream_SetStatus(this.h, (C.int)(status))
}

func (this *QDataStream) ResetStatus() {
	C.QDataStream_ResetStatus(this.h)
}

func (this *QDataStream) FloatingPointPrecision() QDataStream__FloatingPointPrecision {
	return (QDataStream__FloatingPointPrecision)(C.QDataStream_FloatingPointPrecision(this.h))
}

func (this *QDataStream) SetFloatingPointPrecision(precision QDataStream__FloatingPointPrecision) {
	C.QDataStream_SetFloatingPointPrecision(this.h, (C.int)(precision))
}

func (this *QDataStream) ByteOrder() QDataStream__ByteOrder {
	return (QDataStream__ByteOrder)(C.QDataStream_ByteOrder(this.h))
}

func (this *QDataStream) SetByteOrder(byteOrder QDataStream__ByteOrder) {
	C.QDataStream_SetByteOrder(this.h, (C.int)(byteOrder))
}

func (this *QDataStream) Version() int {
	return (int)(C.QDataStream_Version(this.h))
}

func (this *QDataStream) SetVersion(version int) {
	C.QDataStream_SetVersion(this.h, (C.int)(version))
}

func (this *QDataStream) OperatorShiftRight(i *int8) {
	C.QDataStream_OperatorShiftRight(this.h, (*C.char)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint8(i *int8) {
	C.QDataStream_OperatorShiftRightWithQint8(this.h, (*C.schar)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint8(i *byte) {
	C.QDataStream_OperatorShiftRightWithQuint8(this.h, (*C.uchar)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint16(i *int16) {
	C.QDataStream_OperatorShiftRightWithQint16(this.h, (*C.int16_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint16(i *uint16) {
	C.QDataStream_OperatorShiftRightWithQuint16(this.h, (*C.uint16_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint32(i *int) {
	C.QDataStream_OperatorShiftRightWithQint32(this.h, (*C.int)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint32(i *uint) {
	C.QDataStream_OperatorShiftRightWithQuint32(this.h, (*C.uint)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint64(i *int64) {
	C.QDataStream_OperatorShiftRightWithQint64(this.h, (*C.longlong)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint64(i *uint64) {
	C.QDataStream_OperatorShiftRightWithQuint64(this.h, (*C.ulonglong)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithBool(i *bool) {
	C.QDataStream_OperatorShiftRightWithBool(this.h, (*C.bool)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithFloat(f *float32) {
	C.QDataStream_OperatorShiftRightWithFloat(this.h, (*C.float)(unsafe.Pointer(f)))
}

func (this *QDataStream) OperatorShiftRightWithDouble(f *float64) {
	C.QDataStream_OperatorShiftRightWithDouble(this.h, (*C.double)(unsafe.Pointer(f)))
}

func (this *QDataStream) OperatorShiftRightWithStr(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QDataStream_OperatorShiftRightWithStr(this.h, str_Cstring)
}

func (this *QDataStream) OperatorShiftLeft(i int8) {
	C.QDataStream_OperatorShiftLeft(this.h, (C.char)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint8(i int8) {
	C.QDataStream_OperatorShiftLeftWithQint8(this.h, (C.schar)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint8(i byte) {
	C.QDataStream_OperatorShiftLeftWithQuint8(this.h, (C.uchar)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint16(i int16) {
	C.QDataStream_OperatorShiftLeftWithQint16(this.h, (C.int16_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint16(i uint16) {
	C.QDataStream_OperatorShiftLeftWithQuint16(this.h, (C.uint16_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint32(i int) {
	C.QDataStream_OperatorShiftLeftWithQint32(this.h, (C.int)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint32(i uint) {
	C.QDataStream_OperatorShiftLeftWithQuint32(this.h, (C.uint)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint64(i int64) {
	C.QDataStream_OperatorShiftLeftWithQint64(this.h, (C.longlong)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint64(i uint64) {
	C.QDataStream_OperatorShiftLeftWithQuint64(this.h, (C.ulonglong)(i))
}

func (this *QDataStream) OperatorShiftLeftWithBool(i bool) {
	C.QDataStream_OperatorShiftLeftWithBool(this.h, (C.bool)(i))
}

func (this *QDataStream) OperatorShiftLeftWithFloat(f float32) {
	C.QDataStream_OperatorShiftLeftWithFloat(this.h, (C.float)(f))
}

func (this *QDataStream) OperatorShiftLeftWithDouble(f float64) {
	C.QDataStream_OperatorShiftLeftWithDouble(this.h, (C.double)(f))
}

func (this *QDataStream) OperatorShiftLeftWithStr(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QDataStream_OperatorShiftLeftWithStr(this.h, str_Cstring)
}

func (this *QDataStream) ReadBytes(param1 string, lenVal *uint) *QDataStream {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return UnsafeNewQDataStream(unsafe.Pointer(C.QDataStream_ReadBytes(this.h, param1_Cstring, (*C.uint)(unsafe.Pointer(lenVal)))), nil)
}

func (this *QDataStream) ReadRawData(param1 string, lenVal int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (int)(C.QDataStream_ReadRawData(this.h, param1_Cstring, (C.int)(lenVal)))
}

func (this *QDataStream) WriteBytes(param1 string, lenVal uint) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QDataStream_WriteBytes(this.h, param1_Cstring, (C.uint)(lenVal))
}

func (this *QDataStream) WriteRawData(param1 string, lenVal int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (int)(C.QDataStream_WriteRawData(this.h, param1_Cstring, (C.int)(lenVal)))
}

func (this *QDataStream) SkipRawData(lenVal int) int {
	return (int)(C.QDataStream_SkipRawData(this.h, (C.int)(lenVal)))
}

func (this *QDataStream) StartTransaction() {
	C.QDataStream_StartTransaction(this.h)
}

func (this *QDataStream) CommitTransaction() bool {
	return (bool)(C.QDataStream_CommitTransaction(this.h))
}

func (this *QDataStream) RollbackTransaction() {
	C.QDataStream_RollbackTransaction(this.h)
}

func (this *QDataStream) AbortTransaction() {
	C.QDataStream_AbortTransaction(this.h)
}

func (this *QDataStream) IsDeviceTransactionStarted() bool {
	return (bool)(C.QDataStream_IsDeviceTransactionStarted(this.h))
}

// Delete this object from C++ memory.
func (this *QDataStream) Delete() {
	C.QDataStream_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDataStream) GoGC() {
	runtime.SetFinalizer(this, func(this *QDataStream) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
