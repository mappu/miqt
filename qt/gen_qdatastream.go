package qt

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
	QDataStream__Qt_DefaultCompiledVersion QDataStream__Version = 19
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
	h *C.QDataStream
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
func newQDataStream(h *C.QDataStream) *QDataStream {
	if h == nil {
		return nil
	}

	return &QDataStream{h: h}
}

// UnsafeNewQDataStream constructs the type using only unsafe pointers.
func UnsafeNewQDataStream(h unsafe.Pointer) *QDataStream {
	return newQDataStream((*C.QDataStream)(h))
}

// NewQDataStream constructs a new QDataStream object.
func NewQDataStream() *QDataStream {

	return newQDataStream(C.QDataStream_new())
}

// NewQDataStream2 constructs a new QDataStream object.
func NewQDataStream2(param1 *QIODevice) *QDataStream {

	return newQDataStream(C.QDataStream_new2(param1.cPointer()))
}

// NewQDataStream3 constructs a new QDataStream object.
func NewQDataStream3(param1 []byte) *QDataStream {
	param1_alias := C.struct_miqt_string{}
	if len(param1) > 0 {
		param1_alias.data = (*C.char)(unsafe.Pointer(&param1[0]))
	} else {
		param1_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	param1_alias.len = C.size_t(len(param1))

	return newQDataStream(C.QDataStream_new3(param1_alias))
}

func (this *QDataStream) Device() *QIODevice {
	return newQIODevice(C.QDataStream_device(this.h))
}

func (this *QDataStream) SetDevice(device *QIODevice) {
	C.QDataStream_setDevice(this.h, device.cPointer())
}

func (this *QDataStream) UnsetDevice() {
	C.QDataStream_unsetDevice(this.h)
}

func (this *QDataStream) AtEnd() bool {
	return (bool)(C.QDataStream_atEnd(this.h))
}

func (this *QDataStream) Status() QDataStream__Status {
	return (QDataStream__Status)(C.QDataStream_status(this.h))
}

func (this *QDataStream) SetStatus(status QDataStream__Status) {
	C.QDataStream_setStatus(this.h, (C.int)(status))
}

func (this *QDataStream) ResetStatus() {
	C.QDataStream_resetStatus(this.h)
}

func (this *QDataStream) FloatingPointPrecision() QDataStream__FloatingPointPrecision {
	return (QDataStream__FloatingPointPrecision)(C.QDataStream_floatingPointPrecision(this.h))
}

func (this *QDataStream) SetFloatingPointPrecision(precision QDataStream__FloatingPointPrecision) {
	C.QDataStream_setFloatingPointPrecision(this.h, (C.int)(precision))
}

func (this *QDataStream) ByteOrder() QDataStream__ByteOrder {
	return (QDataStream__ByteOrder)(C.QDataStream_byteOrder(this.h))
}

func (this *QDataStream) SetByteOrder(byteOrder QDataStream__ByteOrder) {
	C.QDataStream_setByteOrder(this.h, (C.int)(byteOrder))
}

func (this *QDataStream) Version() int {
	return (int)(C.QDataStream_version(this.h))
}

func (this *QDataStream) SetVersion(version int) {
	C.QDataStream_setVersion(this.h, (C.int)(version))
}

func (this *QDataStream) OperatorShiftRight(i *int8) {
	C.QDataStream_operatorShiftRight(this.h, (*C.schar)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint8(i *byte) {
	C.QDataStream_operatorShiftRightWithQuint8(this.h, (*C.uchar)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint16(i *int16) {
	C.QDataStream_operatorShiftRightWithQint16(this.h, (*C.short)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint16(i *uint16) {
	C.QDataStream_operatorShiftRightWithQuint16(this.h, (*C.ushort)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint32(i *int) {
	C.QDataStream_operatorShiftRightWithQint32(this.h, (*C.int)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint32(i *uint) {
	C.QDataStream_operatorShiftRightWithQuint32(this.h, (*C.uint)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint64(i *int64) {
	C.QDataStream_operatorShiftRightWithQint64(this.h, (*C.longlong)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint64(i *uint64) {
	C.QDataStream_operatorShiftRightWithQuint64(this.h, (*C.ulonglong)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithBool(i *bool) {
	C.QDataStream_operatorShiftRightWithBool(this.h, (*C.bool)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithFloat(f *float32) {
	C.QDataStream_operatorShiftRightWithFloat(this.h, (*C.float)(unsafe.Pointer(f)))
}

func (this *QDataStream) OperatorShiftRightWithDouble(f *float64) {
	C.QDataStream_operatorShiftRightWithDouble(this.h, (*C.double)(unsafe.Pointer(f)))
}

func (this *QDataStream) OperatorShiftRightWithStr(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QDataStream_operatorShiftRightWithStr(this.h, str_Cstring)
}

func (this *QDataStream) OperatorShiftLeft(i int8) {
	C.QDataStream_operatorShiftLeft(this.h, (C.schar)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint8(i byte) {
	C.QDataStream_operatorShiftLeftWithQuint8(this.h, (C.uchar)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint16(i int16) {
	C.QDataStream_operatorShiftLeftWithQint16(this.h, (C.short)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint16(i uint16) {
	C.QDataStream_operatorShiftLeftWithQuint16(this.h, (C.ushort)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint32(i int) {
	C.QDataStream_operatorShiftLeftWithQint32(this.h, (C.int)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint32(i uint) {
	C.QDataStream_operatorShiftLeftWithQuint32(this.h, (C.uint)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint64(i int64) {
	C.QDataStream_operatorShiftLeftWithQint64(this.h, (C.longlong)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint64(i uint64) {
	C.QDataStream_operatorShiftLeftWithQuint64(this.h, (C.ulonglong)(i))
}

func (this *QDataStream) OperatorShiftLeftWithBool(i bool) {
	C.QDataStream_operatorShiftLeftWithBool(this.h, (C.bool)(i))
}

func (this *QDataStream) OperatorShiftLeftWithFloat(f float32) {
	C.QDataStream_operatorShiftLeftWithFloat(this.h, (C.float)(f))
}

func (this *QDataStream) OperatorShiftLeftWithDouble(f float64) {
	C.QDataStream_operatorShiftLeftWithDouble(this.h, (C.double)(f))
}

func (this *QDataStream) OperatorShiftLeftWithStr(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QDataStream_operatorShiftLeftWithStr(this.h, str_Cstring)
}

func (this *QDataStream) ReadBytes(param1 string, lenVal *uint) *QDataStream {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return newQDataStream(C.QDataStream_readBytes(this.h, param1_Cstring, (*C.uint)(unsafe.Pointer(lenVal))))
}

func (this *QDataStream) ReadRawData(param1 string, lenVal int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (int)(C.QDataStream_readRawData(this.h, param1_Cstring, (C.int)(lenVal)))
}

func (this *QDataStream) WriteBytes(param1 string, lenVal uint) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QDataStream_writeBytes(this.h, param1_Cstring, (C.uint)(lenVal))
}

func (this *QDataStream) WriteRawData(param1 string, lenVal int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (int)(C.QDataStream_writeRawData(this.h, param1_Cstring, (C.int)(lenVal)))
}

func (this *QDataStream) SkipRawData(lenVal int) int {
	return (int)(C.QDataStream_skipRawData(this.h, (C.int)(lenVal)))
}

func (this *QDataStream) StartTransaction() {
	C.QDataStream_startTransaction(this.h)
}

func (this *QDataStream) CommitTransaction() bool {
	return (bool)(C.QDataStream_commitTransaction(this.h))
}

func (this *QDataStream) RollbackTransaction() {
	C.QDataStream_rollbackTransaction(this.h)
}

func (this *QDataStream) AbortTransaction() {
	C.QDataStream_abortTransaction(this.h)
}

// Delete this object from C++ memory.
func (this *QDataStream) Delete() {
	C.QDataStream_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDataStream) GoGC() {
	runtime.SetFinalizer(this, func(this *QDataStream) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
