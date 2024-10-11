package qt

/*

#include "gen_qiodevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QIODevice__OpenModeFlag int

const (
	QIODevice__NotOpen      QIODevice__OpenModeFlag = 0
	QIODevice__ReadOnly     QIODevice__OpenModeFlag = 1
	QIODevice__WriteOnly    QIODevice__OpenModeFlag = 2
	QIODevice__ReadWrite    QIODevice__OpenModeFlag = 3
	QIODevice__Append       QIODevice__OpenModeFlag = 4
	QIODevice__Truncate     QIODevice__OpenModeFlag = 8
	QIODevice__Text         QIODevice__OpenModeFlag = 16
	QIODevice__Unbuffered   QIODevice__OpenModeFlag = 32
	QIODevice__NewOnly      QIODevice__OpenModeFlag = 64
	QIODevice__ExistingOnly QIODevice__OpenModeFlag = 128
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
	if h == nil {
		return nil
	}
	return &QIODevice{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQIODevice_U(h unsafe.Pointer) *QIODevice {
	return newQIODevice((*C.QIODevice)(h))
}

func (this *QIODevice) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QIODevice_MetaObject(this.h)))
}

func (this *QIODevice) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QIODevice_Metacast(this.h, param1_Cstring)
}

func QIODevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QIODevice_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QIODevice_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QIODevice_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QIODevice) OpenMode() QIODevice__OpenModeFlag {
	return (QIODevice__OpenModeFlag)(C.QIODevice_OpenMode(this.h))
}

func (this *QIODevice) SetTextModeEnabled(enabled bool) {
	C.QIODevice_SetTextModeEnabled(this.h, (C.bool)(enabled))
}

func (this *QIODevice) IsTextModeEnabled() bool {
	return (bool)(C.QIODevice_IsTextModeEnabled(this.h))
}

func (this *QIODevice) IsOpen() bool {
	return (bool)(C.QIODevice_IsOpen(this.h))
}

func (this *QIODevice) IsReadable() bool {
	return (bool)(C.QIODevice_IsReadable(this.h))
}

func (this *QIODevice) IsWritable() bool {
	return (bool)(C.QIODevice_IsWritable(this.h))
}

func (this *QIODevice) IsSequential() bool {
	return (bool)(C.QIODevice_IsSequential(this.h))
}

func (this *QIODevice) ReadChannelCount() int {
	return (int)(C.QIODevice_ReadChannelCount(this.h))
}

func (this *QIODevice) WriteChannelCount() int {
	return (int)(C.QIODevice_WriteChannelCount(this.h))
}

func (this *QIODevice) CurrentReadChannel() int {
	return (int)(C.QIODevice_CurrentReadChannel(this.h))
}

func (this *QIODevice) SetCurrentReadChannel(channel int) {
	C.QIODevice_SetCurrentReadChannel(this.h, (C.int)(channel))
}

func (this *QIODevice) CurrentWriteChannel() int {
	return (int)(C.QIODevice_CurrentWriteChannel(this.h))
}

func (this *QIODevice) SetCurrentWriteChannel(channel int) {
	C.QIODevice_SetCurrentWriteChannel(this.h, (C.int)(channel))
}

func (this *QIODevice) Open(mode QIODevice__OpenModeFlag) bool {
	return (bool)(C.QIODevice_Open(this.h, (C.int)(mode)))
}

func (this *QIODevice) Close() {
	C.QIODevice_Close(this.h)
}

func (this *QIODevice) Pos() int64 {
	return (int64)(C.QIODevice_Pos(this.h))
}

func (this *QIODevice) Size() int64 {
	return (int64)(C.QIODevice_Size(this.h))
}

func (this *QIODevice) Seek(pos int64) bool {
	return (bool)(C.QIODevice_Seek(this.h, (C.longlong)(pos)))
}

func (this *QIODevice) AtEnd() bool {
	return (bool)(C.QIODevice_AtEnd(this.h))
}

func (this *QIODevice) Reset() bool {
	return (bool)(C.QIODevice_Reset(this.h))
}

func (this *QIODevice) BytesAvailable() int64 {
	return (int64)(C.QIODevice_BytesAvailable(this.h))
}

func (this *QIODevice) BytesToWrite() int64 {
	return (int64)(C.QIODevice_BytesToWrite(this.h))
}

func (this *QIODevice) Read(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_Read(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QIODevice) ReadWithMaxlen(maxlen int64) *QByteArray {
	_ret := C.QIODevice_ReadWithMaxlen(this.h, (C.longlong)(maxlen))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIODevice) ReadAll() *QByteArray {
	_ret := C.QIODevice_ReadAll(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIODevice) ReadLine(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_ReadLine(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QIODevice) ReadLine2() *QByteArray {
	_ret := C.QIODevice_ReadLine2(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIODevice) CanReadLine() bool {
	return (bool)(C.QIODevice_CanReadLine(this.h))
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
	return (bool)(C.QIODevice_IsTransactionStarted(this.h))
}

func (this *QIODevice) Write(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_Write(this.h, data_Cstring, (C.longlong)(lenVal)))
}

func (this *QIODevice) WriteWithData(data string) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_WriteWithData(this.h, data_Cstring))
}

func (this *QIODevice) Write2(data *QByteArray) int64 {
	return (int64)(C.QIODevice_Write2(this.h, data.cPointer()))
}

func (this *QIODevice) Peek(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_Peek(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QIODevice) PeekWithMaxlen(maxlen int64) *QByteArray {
	_ret := C.QIODevice_PeekWithMaxlen(this.h, (C.longlong)(maxlen))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIODevice) Skip(maxSize int64) int64 {
	return (int64)(C.QIODevice_Skip(this.h, (C.longlong)(maxSize)))
}

func (this *QIODevice) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QIODevice_WaitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QIODevice) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QIODevice_WaitForBytesWritten(this.h, (C.int)(msecs)))
}

func (this *QIODevice) UngetChar(c int8) {
	C.QIODevice_UngetChar(this.h, (C.char)(c))
}

func (this *QIODevice) PutChar(c int8) bool {
	return (bool)(C.QIODevice_PutChar(this.h, (C.char)(c)))
}

func (this *QIODevice) GetChar(c string) bool {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	return (bool)(C.QIODevice_GetChar(this.h, c_Cstring))
}

func (this *QIODevice) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QIODevice_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QIODevice) ReadyRead() {
	C.QIODevice_ReadyRead(this.h)
}
func (this *QIODevice) OnReadyRead(slot func()) {
	C.QIODevice_connect_ReadyRead(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QIODevice_ReadyRead
func miqt_exec_callback_QIODevice_ReadyRead(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QIODevice) ChannelReadyRead(channel int) {
	C.QIODevice_ChannelReadyRead(this.h, (C.int)(channel))
}
func (this *QIODevice) OnChannelReadyRead(slot func(channel int)) {
	C.QIODevice_connect_ChannelReadyRead(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QIODevice_ChannelReadyRead
func miqt_exec_callback_QIODevice_ChannelReadyRead(cb *C.void, channel C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(channel int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(channel)

	gofunc(slotval1)
}

func (this *QIODevice) BytesWritten(bytes int64) {
	C.QIODevice_BytesWritten(this.h, (C.longlong)(bytes))
}
func (this *QIODevice) OnBytesWritten(slot func(bytes int64)) {
	C.QIODevice_connect_BytesWritten(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QIODevice_BytesWritten
func miqt_exec_callback_QIODevice_BytesWritten(cb *C.void, bytes C.longlong) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(bytes int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(bytes)

	gofunc(slotval1)
}

func (this *QIODevice) ChannelBytesWritten(channel int, bytes int64) {
	C.QIODevice_ChannelBytesWritten(this.h, (C.int)(channel), (C.longlong)(bytes))
}
func (this *QIODevice) OnChannelBytesWritten(slot func(channel int, bytes int64)) {
	C.QIODevice_connect_ChannelBytesWritten(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QIODevice_ChannelBytesWritten
func miqt_exec_callback_QIODevice_ChannelBytesWritten(cb *C.void, channel C.int, bytes C.longlong) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(channel int, bytes int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(channel)

	slotval2 := (int64)(bytes)

	gofunc(slotval1, slotval2)
}

func (this *QIODevice) AboutToClose() {
	C.QIODevice_AboutToClose(this.h)
}
func (this *QIODevice) OnAboutToClose(slot func()) {
	C.QIODevice_connect_AboutToClose(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QIODevice_AboutToClose
func miqt_exec_callback_QIODevice_AboutToClose(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QIODevice) ReadChannelFinished() {
	C.QIODevice_ReadChannelFinished(this.h)
}
func (this *QIODevice) OnReadChannelFinished(slot func()) {
	C.QIODevice_connect_ReadChannelFinished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QIODevice_ReadChannelFinished
func miqt_exec_callback_QIODevice_ReadChannelFinished(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QIODevice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QIODevice_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QIODevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QIODevice_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QIODevice_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QIODevice_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QIODevice_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QIODevice_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QIODevice) ReadLine1(maxlen int64) *QByteArray {
	_ret := C.QIODevice_ReadLine1(this.h, (C.longlong)(maxlen))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QIODevice) Delete() {
	C.QIODevice_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIODevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QIODevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
