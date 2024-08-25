package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qiodevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QIODevice struct {
	h *C.QIODevice
	*QObject
}

func (this *QIODevice) cPointer() *C.QIODevice {
	if this == nil {
		return nil
	}
	return this.h
}

func newQIODevice(h *C.QIODevice) *QIODevice {
	return &QIODevice{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQIODevice_U(h unsafe.Pointer) *QIODevice {
	return newQIODevice((*C.QIODevice)(h))
}

func (this *QIODevice) MetaObject() *QMetaObject {
	ret := C.QIODevice_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QIODevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIODevice_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIODevice_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIODevice_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIODevice) SetTextModeEnabled(enabled bool) {
	C.QIODevice_SetTextModeEnabled(this.h, (C.bool)(enabled))
}

func (this *QIODevice) IsTextModeEnabled() bool {
	ret := C.QIODevice_IsTextModeEnabled(this.h)
	return (bool)(ret)
}

func (this *QIODevice) IsOpen() bool {
	ret := C.QIODevice_IsOpen(this.h)
	return (bool)(ret)
}

func (this *QIODevice) IsReadable() bool {
	ret := C.QIODevice_IsReadable(this.h)
	return (bool)(ret)
}

func (this *QIODevice) IsWritable() bool {
	ret := C.QIODevice_IsWritable(this.h)
	return (bool)(ret)
}

func (this *QIODevice) IsSequential() bool {
	ret := C.QIODevice_IsSequential(this.h)
	return (bool)(ret)
}

func (this *QIODevice) ReadChannelCount() int {
	ret := C.QIODevice_ReadChannelCount(this.h)
	return (int)(ret)
}

func (this *QIODevice) WriteChannelCount() int {
	ret := C.QIODevice_WriteChannelCount(this.h)
	return (int)(ret)
}

func (this *QIODevice) CurrentReadChannel() int {
	ret := C.QIODevice_CurrentReadChannel(this.h)
	return (int)(ret)
}

func (this *QIODevice) SetCurrentReadChannel(channel int) {
	C.QIODevice_SetCurrentReadChannel(this.h, (C.int)(channel))
}

func (this *QIODevice) CurrentWriteChannel() int {
	ret := C.QIODevice_CurrentWriteChannel(this.h)
	return (int)(ret)
}

func (this *QIODevice) SetCurrentWriteChannel(channel int) {
	C.QIODevice_SetCurrentWriteChannel(this.h, (C.int)(channel))
}

func (this *QIODevice) Close() {
	C.QIODevice_Close(this.h)
}

func (this *QIODevice) Pos() int64 {
	ret := C.QIODevice_Pos(this.h)
	return (int64)(ret)
}

func (this *QIODevice) Size() int64 {
	ret := C.QIODevice_Size(this.h)
	return (int64)(ret)
}

func (this *QIODevice) Seek(pos int64) bool {
	ret := C.QIODevice_Seek(this.h, (C.int64_t)(pos))
	return (bool)(ret)
}

func (this *QIODevice) AtEnd() bool {
	ret := C.QIODevice_AtEnd(this.h)
	return (bool)(ret)
}

func (this *QIODevice) Reset() bool {
	ret := C.QIODevice_Reset(this.h)
	return (bool)(ret)
}

func (this *QIODevice) BytesAvailable() int64 {
	ret := C.QIODevice_BytesAvailable(this.h)
	return (int64)(ret)
}

func (this *QIODevice) BytesToWrite() int64 {
	ret := C.QIODevice_BytesToWrite(this.h)
	return (int64)(ret)
}

func (this *QIODevice) Read(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QIODevice_Read(this.h, data_Cstring, (C.int64_t)(maxlen))
	return (int64)(ret)
}

func (this *QIODevice) ReadWithMaxlen(maxlen int64) *QByteArray {
	ret := C.QIODevice_ReadWithMaxlen(this.h, (C.int64_t)(maxlen))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIODevice) ReadAll() *QByteArray {
	ret := C.QIODevice_ReadAll(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIODevice) ReadLine(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QIODevice_ReadLine(this.h, data_Cstring, (C.int64_t)(maxlen))
	return (int64)(ret)
}

func (this *QIODevice) ReadLine2() *QByteArray {
	ret := C.QIODevice_ReadLine2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIODevice) CanReadLine() bool {
	ret := C.QIODevice_CanReadLine(this.h)
	return (bool)(ret)
}

func (this *QIODevice) StartTransaction() {
	C.QIODevice_StartTransaction(this.h)
}

func (this *QIODevice) CommitTransaction() {
	C.QIODevice_CommitTransaction(this.h)
}

func (this *QIODevice) RollbackTransaction() {
	C.QIODevice_RollbackTransaction(this.h)
}

func (this *QIODevice) IsTransactionStarted() bool {
	ret := C.QIODevice_IsTransactionStarted(this.h)
	return (bool)(ret)
}

func (this *QIODevice) Write(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QIODevice_Write(this.h, data_Cstring, (C.int64_t)(lenVal))
	return (int64)(ret)
}

func (this *QIODevice) WriteWithData(data string) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QIODevice_WriteWithData(this.h, data_Cstring)
	return (int64)(ret)
}

func (this *QIODevice) Write2(data *QByteArray) int64 {
	ret := C.QIODevice_Write2(this.h, data.cPointer())
	return (int64)(ret)
}

func (this *QIODevice) Peek(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QIODevice_Peek(this.h, data_Cstring, (C.int64_t)(maxlen))
	return (int64)(ret)
}

func (this *QIODevice) PeekWithMaxlen(maxlen int64) *QByteArray {
	ret := C.QIODevice_PeekWithMaxlen(this.h, (C.int64_t)(maxlen))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIODevice) Skip(maxSize int64) int64 {
	ret := C.QIODevice_Skip(this.h, (C.int64_t)(maxSize))
	return (int64)(ret)
}

func (this *QIODevice) WaitForReadyRead(msecs int) bool {
	ret := C.QIODevice_WaitForReadyRead(this.h, (C.int)(msecs))
	return (bool)(ret)
}

func (this *QIODevice) WaitForBytesWritten(msecs int) bool {
	ret := C.QIODevice_WaitForBytesWritten(this.h, (C.int)(msecs))
	return (bool)(ret)
}

func (this *QIODevice) UngetChar(c byte) {
	C.QIODevice_UngetChar(this.h, (C.char)(c))
}

func (this *QIODevice) PutChar(c byte) bool {
	ret := C.QIODevice_PutChar(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QIODevice) GetChar(c string) bool {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QIODevice_GetChar(this.h, c_Cstring)
	return (bool)(ret)
}

func (this *QIODevice) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIODevice_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIODevice) ReadyRead() {
	C.QIODevice_ReadyRead(this.h)
}

func (this *QIODevice) OnReadyRead(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QIODevice_connect_ReadyRead(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QIODevice) ChannelReadyRead(channel int) {
	C.QIODevice_ChannelReadyRead(this.h, (C.int)(channel))
}

func (this *QIODevice) OnChannelReadyRead(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QIODevice_connect_ChannelReadyRead(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QIODevice) BytesWritten(bytes int64) {
	C.QIODevice_BytesWritten(this.h, (C.int64_t)(bytes))
}

func (this *QIODevice) OnBytesWritten(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QIODevice_connect_BytesWritten(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QIODevice) ChannelBytesWritten(channel int, bytes int64) {
	C.QIODevice_ChannelBytesWritten(this.h, (C.int)(channel), (C.int64_t)(bytes))
}

func (this *QIODevice) OnChannelBytesWritten(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QIODevice_connect_ChannelBytesWritten(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QIODevice) AboutToClose() {
	C.QIODevice_AboutToClose(this.h)
}

func (this *QIODevice) OnAboutToClose(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QIODevice_connect_AboutToClose(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QIODevice) ReadChannelFinished() {
	C.QIODevice_ReadChannelFinished(this.h)
}

func (this *QIODevice) OnReadChannelFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QIODevice_connect_ReadChannelFinished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QIODevice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIODevice_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIODevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIODevice_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIODevice_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIODevice_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIODevice_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIODevice_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIODevice) ReadLine1(maxlen int64) *QByteArray {
	ret := C.QIODevice_ReadLine1(this.h, (C.int64_t)(maxlen))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIODevice) Delete() {
	C.QIODevice_Delete(this.h)
}
