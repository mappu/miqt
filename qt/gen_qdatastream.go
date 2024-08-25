package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qdatastream.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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

func newQDataStream(h *C.QDataStream) *QDataStream {
	return &QDataStream{h: h}
}

func newQDataStream_U(h unsafe.Pointer) *QDataStream {
	return newQDataStream((*C.QDataStream)(h))
}

// NewQDataStream constructs a new QDataStream object.
func NewQDataStream() *QDataStream {
	ret := C.QDataStream_new()
	return newQDataStream(ret)
}

// NewQDataStream2 constructs a new QDataStream object.
func NewQDataStream2(param1 *QIODevice) *QDataStream {
	ret := C.QDataStream_new2(param1.cPointer())
	return newQDataStream(ret)
}

// NewQDataStream3 constructs a new QDataStream object.
func NewQDataStream3(param1 *QByteArray) *QDataStream {
	ret := C.QDataStream_new3(param1.cPointer())
	return newQDataStream(ret)
}

func (this *QDataStream) Device() *QIODevice {
	ret := C.QDataStream_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QDataStream) SetDevice(device *QIODevice) {
	C.QDataStream_SetDevice(this.h, device.cPointer())
}

func (this *QDataStream) UnsetDevice() {
	C.QDataStream_UnsetDevice(this.h)
}

func (this *QDataStream) AtEnd() bool {
	ret := C.QDataStream_AtEnd(this.h)
	return (bool)(ret)
}

func (this *QDataStream) ResetStatus() {
	C.QDataStream_ResetStatus(this.h)
}

func (this *QDataStream) Version() int {
	ret := C.QDataStream_Version(this.h)
	return (int)(ret)
}

func (this *QDataStream) SetVersion(version int) {
	C.QDataStream_SetVersion(this.h, (C.int)(version))
}

func (this *QDataStream) OperatorShiftRight(i *byte) {
	C.QDataStream_OperatorShiftRight(this.h, (*C.int8_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint8(i *byte) {
	C.QDataStream_OperatorShiftRightWithQuint8(this.h, (*C.uint8_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint16(i *int16) {
	C.QDataStream_OperatorShiftRightWithQint16(this.h, (*C.int16_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint16(i *uint16) {
	C.QDataStream_OperatorShiftRightWithQuint16(this.h, (*C.uint16_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint32(i *int32) {
	C.QDataStream_OperatorShiftRightWithQint32(this.h, (*C.int32_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint32(i *uint32) {
	C.QDataStream_OperatorShiftRightWithQuint32(this.h, (*C.uint32_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQint64(i *int64) {
	C.QDataStream_OperatorShiftRightWithQint64(this.h, (*C.int64_t)(unsafe.Pointer(i)))
}

func (this *QDataStream) OperatorShiftRightWithQuint64(i *uint64) {
	C.QDataStream_OperatorShiftRightWithQuint64(this.h, (*C.uint64_t)(unsafe.Pointer(i)))
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

func (this *QDataStream) OperatorShiftLeft(i byte) {
	C.QDataStream_OperatorShiftLeft(this.h, (C.int8_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint8(i byte) {
	C.QDataStream_OperatorShiftLeftWithQuint8(this.h, (C.uint8_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint16(i int16) {
	C.QDataStream_OperatorShiftLeftWithQint16(this.h, (C.int16_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint16(i uint16) {
	C.QDataStream_OperatorShiftLeftWithQuint16(this.h, (C.uint16_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint32(i int32) {
	C.QDataStream_OperatorShiftLeftWithQint32(this.h, (C.int32_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint32(i uint32) {
	C.QDataStream_OperatorShiftLeftWithQuint32(this.h, (C.uint32_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQint64(i int64) {
	C.QDataStream_OperatorShiftLeftWithQint64(this.h, (C.int64_t)(i))
}

func (this *QDataStream) OperatorShiftLeftWithQuint64(i uint64) {
	C.QDataStream_OperatorShiftLeftWithQuint64(this.h, (C.uint64_t)(i))
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

func (this *QDataStream) ReadRawData(param1 string, lenVal int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QDataStream_ReadRawData(this.h, param1_Cstring, (C.int)(lenVal))
	return (int)(ret)
}

func (this *QDataStream) WriteBytes(param1 string, lenVal uint) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QDataStream_WriteBytes(this.h, param1_Cstring, (C.uint)(lenVal))
}

func (this *QDataStream) WriteRawData(param1 string, lenVal int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QDataStream_WriteRawData(this.h, param1_Cstring, (C.int)(lenVal))
	return (int)(ret)
}

func (this *QDataStream) SkipRawData(lenVal int) int {
	ret := C.QDataStream_SkipRawData(this.h, (C.int)(lenVal))
	return (int)(ret)
}

func (this *QDataStream) StartTransaction() {
	C.QDataStream_StartTransaction(this.h)
}

func (this *QDataStream) CommitTransaction() bool {
	ret := C.QDataStream_CommitTransaction(this.h)
	return (bool)(ret)
}

func (this *QDataStream) RollbackTransaction() {
	C.QDataStream_RollbackTransaction(this.h)
}

func (this *QDataStream) AbortTransaction() {
	C.QDataStream_AbortTransaction(this.h)
}

func (this *QDataStream) Delete() {
	C.QDataStream_Delete(this.h)
}
