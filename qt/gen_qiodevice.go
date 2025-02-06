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

func (this *QIODevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIODevice constructs the type using only CGO pointers.
func newQIODevice(h *C.QIODevice) *QIODevice {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QIODevice_virtbase(h, &outptr_QObject)

	return &QIODevice{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQIODevice constructs the type using only unsafe pointers.
func UnsafeNewQIODevice(h unsafe.Pointer) *QIODevice {
	return newQIODevice((*C.QIODevice)(h))
}

// NewQIODevice constructs a new QIODevice object.
func NewQIODevice() *QIODevice {

	return newQIODevice(C.QIODevice_new())
}

// NewQIODevice2 constructs a new QIODevice object.
func NewQIODevice2(parent *QObject) *QIODevice {

	return newQIODevice(C.QIODevice_new2(parent.cPointer()))
}

func (this *QIODevice) MetaObject() *QMetaObject {
	return newQMetaObject(C.QIODevice_metaObject(this.h))
}

func (this *QIODevice) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QIODevice_metacast(this.h, param1_Cstring))
}

func QIODevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIODevice_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIODevice_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIODevice_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIODevice) OpenMode() QIODevice__OpenModeFlag {
	return (QIODevice__OpenModeFlag)(C.QIODevice_openMode(this.h))
}

func (this *QIODevice) SetTextModeEnabled(enabled bool) {
	C.QIODevice_setTextModeEnabled(this.h, (C.bool)(enabled))
}

func (this *QIODevice) IsTextModeEnabled() bool {
	return (bool)(C.QIODevice_isTextModeEnabled(this.h))
}

func (this *QIODevice) IsOpen() bool {
	return (bool)(C.QIODevice_isOpen(this.h))
}

func (this *QIODevice) IsReadable() bool {
	return (bool)(C.QIODevice_isReadable(this.h))
}

func (this *QIODevice) IsWritable() bool {
	return (bool)(C.QIODevice_isWritable(this.h))
}

func (this *QIODevice) IsSequential() bool {
	return (bool)(C.QIODevice_isSequential(this.h))
}

func (this *QIODevice) ReadChannelCount() int {
	return (int)(C.QIODevice_readChannelCount(this.h))
}

func (this *QIODevice) WriteChannelCount() int {
	return (int)(C.QIODevice_writeChannelCount(this.h))
}

func (this *QIODevice) CurrentReadChannel() int {
	return (int)(C.QIODevice_currentReadChannel(this.h))
}

func (this *QIODevice) SetCurrentReadChannel(channel int) {
	C.QIODevice_setCurrentReadChannel(this.h, (C.int)(channel))
}

func (this *QIODevice) CurrentWriteChannel() int {
	return (int)(C.QIODevice_currentWriteChannel(this.h))
}

func (this *QIODevice) SetCurrentWriteChannel(channel int) {
	C.QIODevice_setCurrentWriteChannel(this.h, (C.int)(channel))
}

func (this *QIODevice) Open(mode QIODevice__OpenModeFlag) bool {
	return (bool)(C.QIODevice_open(this.h, (C.int)(mode)))
}

func (this *QIODevice) Close() {
	C.QIODevice_close(this.h)
}

func (this *QIODevice) Pos() int64 {
	return (int64)(C.QIODevice_pos(this.h))
}

func (this *QIODevice) Size() int64 {
	return (int64)(C.QIODevice_size(this.h))
}

func (this *QIODevice) Seek(pos int64) bool {
	return (bool)(C.QIODevice_seek(this.h, (C.longlong)(pos)))
}

func (this *QIODevice) AtEnd() bool {
	return (bool)(C.QIODevice_atEnd(this.h))
}

func (this *QIODevice) Reset() bool {
	return (bool)(C.QIODevice_reset(this.h))
}

func (this *QIODevice) BytesAvailable() int64 {
	return (int64)(C.QIODevice_bytesAvailable(this.h))
}

func (this *QIODevice) BytesToWrite() int64 {
	return (int64)(C.QIODevice_bytesToWrite(this.h))
}

func (this *QIODevice) Read(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_read(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QIODevice) ReadWithMaxlen(maxlen int64) []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_readWithMaxlen(this.h, (C.longlong)(maxlen))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QIODevice) ReadAll() []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_readAll(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QIODevice) ReadLine(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_readLine(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QIODevice) ReadLine2() []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_readLine2(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QIODevice) CanReadLine() bool {
	return (bool)(C.QIODevice_canReadLine(this.h))
}

func (this *QIODevice) StartTransaction() {
	C.QIODevice_startTransaction(this.h)
}

func (this *QIODevice) CommitTransaction() {
	C.QIODevice_commitTransaction(this.h)
}

func (this *QIODevice) RollbackTransaction() {
	C.QIODevice_rollbackTransaction(this.h)
}

func (this *QIODevice) IsTransactionStarted() bool {
	return (bool)(C.QIODevice_isTransactionStarted(this.h))
}

func (this *QIODevice) Write(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_write(this.h, data_Cstring, (C.longlong)(lenVal)))
}

func (this *QIODevice) WriteWithData(data string) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_writeWithData(this.h, data_Cstring))
}

func (this *QIODevice) Write2(data []byte) int64 {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return (int64)(C.QIODevice_write2(this.h, data_alias))
}

func (this *QIODevice) Peek(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_peek(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QIODevice) PeekWithMaxlen(maxlen int64) []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_peekWithMaxlen(this.h, (C.longlong)(maxlen))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QIODevice) Skip(maxSize int64) int64 {
	return (int64)(C.QIODevice_skip(this.h, (C.longlong)(maxSize)))
}

func (this *QIODevice) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QIODevice_waitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QIODevice) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QIODevice_waitForBytesWritten(this.h, (C.int)(msecs)))
}

func (this *QIODevice) UngetChar(c int8) {
	C.QIODevice_ungetChar(this.h, (C.char)(c))
}

func (this *QIODevice) PutChar(c int8) bool {
	return (bool)(C.QIODevice_putChar(this.h, (C.char)(c)))
}

func (this *QIODevice) GetChar(c string) bool {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	return (bool)(C.QIODevice_getChar(this.h, c_Cstring))
}

func (this *QIODevice) ErrorString() string {
	var _ms C.struct_miqt_string = C.QIODevice_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIODevice) ReadyRead() {
	C.QIODevice_readyRead(this.h)
}
func (this *QIODevice) OnReadyRead(slot func()) {
	C.QIODevice_connect_readyRead(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_readyRead
func miqt_exec_callback_QIODevice_readyRead(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QIODevice) ChannelReadyRead(channel int) {
	C.QIODevice_channelReadyRead(this.h, (C.int)(channel))
}
func (this *QIODevice) OnChannelReadyRead(slot func(channel int)) {
	C.QIODevice_connect_channelReadyRead(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_channelReadyRead
func miqt_exec_callback_QIODevice_channelReadyRead(cb C.intptr_t, channel C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(channel int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(channel)

	gofunc(slotval1)
}

func (this *QIODevice) BytesWritten(bytes int64) {
	C.QIODevice_bytesWritten(this.h, (C.longlong)(bytes))
}
func (this *QIODevice) OnBytesWritten(slot func(bytes int64)) {
	C.QIODevice_connect_bytesWritten(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_bytesWritten
func miqt_exec_callback_QIODevice_bytesWritten(cb C.intptr_t, bytes C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bytes int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(bytes)

	gofunc(slotval1)
}

func (this *QIODevice) ChannelBytesWritten(channel int, bytes int64) {
	C.QIODevice_channelBytesWritten(this.h, (C.int)(channel), (C.longlong)(bytes))
}
func (this *QIODevice) OnChannelBytesWritten(slot func(channel int, bytes int64)) {
	C.QIODevice_connect_channelBytesWritten(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_channelBytesWritten
func miqt_exec_callback_QIODevice_channelBytesWritten(cb C.intptr_t, channel C.int, bytes C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(channel int, bytes int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(channel)

	slotval2 := (int64)(bytes)

	gofunc(slotval1, slotval2)
}

func (this *QIODevice) AboutToClose() {
	C.QIODevice_aboutToClose(this.h)
}
func (this *QIODevice) OnAboutToClose(slot func()) {
	C.QIODevice_connect_aboutToClose(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_aboutToClose
func miqt_exec_callback_QIODevice_aboutToClose(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QIODevice) ReadChannelFinished() {
	C.QIODevice_readChannelFinished(this.h)
}
func (this *QIODevice) OnReadChannelFinished(slot func()) {
	C.QIODevice_connect_readChannelFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_readChannelFinished
func miqt_exec_callback_QIODevice_readChannelFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
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
	var _ms C.struct_miqt_string = C.QIODevice_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIODevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIODevice_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIODevice_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIODevice_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIODevice_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIODevice_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIODevice) ReadLine1(maxlen int64) []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_readLine1(this.h, (C.longlong)(maxlen))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

// SetOpenMode can only be called from a QIODevice that was directly constructed.
func (this *QIODevice) SetOpenMode(openMode QIODevice__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QIODevice_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QIODevice that was directly constructed.
func (this *QIODevice) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QIODevice_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QIODevice that was directly constructed.
func (this *QIODevice) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QIODevice_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QIODevice that was directly constructed.
func (this *QIODevice) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QIODevice_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QIODevice that was directly constructed.
func (this *QIODevice) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QIODevice_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QIODevice that was directly constructed.
func (this *QIODevice) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QIODevice_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QIODevice) callVirtualBase_IsSequential() bool {

	return (bool)(C.QIODevice_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QIODevice_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_isSequential
func miqt_exec_callback_QIODevice_isSequential(self *C.QIODevice, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Open(mode QIODevice__OpenModeFlag) bool {

	return (bool)(C.QIODevice_virtualbase_open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QIODevice) OnOpen(slot func(super func(mode QIODevice__OpenModeFlag) bool, mode QIODevice__OpenModeFlag) bool) {
	ok := C.QIODevice_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_open
func miqt_exec_callback_QIODevice_open(self *C.QIODevice, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QIODevice__OpenModeFlag) bool, mode QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODevice__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Close() {

	C.QIODevice_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QIODevice) OnClose(slot func(super func())) {
	ok := C.QIODevice_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_close
func miqt_exec_callback_QIODevice_close(self *C.QIODevice, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QIODevice{h: self}).callVirtualBase_Close)

}

func (this *QIODevice) callVirtualBase_Pos() int64 {

	return (int64)(C.QIODevice_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnPos(slot func(super func() int64) int64) {
	ok := C.QIODevice_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_pos
func miqt_exec_callback_QIODevice_pos(self *C.QIODevice, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Size() int64 {

	return (int64)(C.QIODevice_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnSize(slot func(super func() int64) int64) {
	ok := C.QIODevice_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_size
func miqt_exec_callback_QIODevice_size(self *C.QIODevice, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QIODevice_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QIODevice) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QIODevice_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_seek
func miqt_exec_callback_QIODevice_seek(self *C.QIODevice, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_AtEnd() bool {

	return (bool)(C.QIODevice_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QIODevice_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_atEnd
func miqt_exec_callback_QIODevice_atEnd(self *C.QIODevice, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Reset() bool {

	return (bool)(C.QIODevice_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnReset(slot func(super func() bool) bool) {
	ok := C.QIODevice_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_reset
func miqt_exec_callback_QIODevice_reset(self *C.QIODevice, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QIODevice_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QIODevice_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_bytesAvailable
func miqt_exec_callback_QIODevice_bytesAvailable(self *C.QIODevice, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QIODevice_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QIODevice_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_bytesToWrite
func miqt_exec_callback_QIODevice_bytesToWrite(self *C.QIODevice, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QIODevice_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QIODevice_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_canReadLine
func miqt_exec_callback_QIODevice_canReadLine(self *C.QIODevice, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QIODevice_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QIODevice) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QIODevice_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_waitForReadyRead
func miqt_exec_callback_QIODevice_waitForReadyRead(self *C.QIODevice, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QIODevice_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QIODevice) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QIODevice_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_waitForBytesWritten
func miqt_exec_callback_QIODevice_waitForBytesWritten(self *C.QIODevice, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QIODevice) OnReadData(slot func(data string, maxlen int64) int64) {
	ok := C.QIODevice_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_readData
func miqt_exec_callback_QIODevice_readData(self *C.QIODevice, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QIODevice_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QIODevice) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QIODevice_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_readLineData
func miqt_exec_callback_QIODevice_readLineData(self *C.QIODevice, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}
func (this *QIODevice) OnWriteData(slot func(data string, lenVal int64) int64) {
	ok := C.QIODevice_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_writeData
func miqt_exec_callback_QIODevice_writeData(self *C.QIODevice, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QIODevice_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QIODevice) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QIODevice_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_event
func miqt_exec_callback_QIODevice_event(self *C.QIODevice, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QIODevice_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QIODevice) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QIODevice_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_eventFilter
func miqt_exec_callback_QIODevice_eventFilter(self *C.QIODevice, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QIODevice_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIODevice) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QIODevice_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_timerEvent
func miqt_exec_callback_QIODevice_timerEvent(self *C.QIODevice, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QIODevice{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QIODevice) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QIODevice_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIODevice) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QIODevice_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_childEvent
func miqt_exec_callback_QIODevice_childEvent(self *C.QIODevice, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QIODevice{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QIODevice) callVirtualBase_CustomEvent(event *QEvent) {

	C.QIODevice_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIODevice) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QIODevice_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_customEvent
func miqt_exec_callback_QIODevice_customEvent(self *C.QIODevice, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QIODevice{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QIODevice) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QIODevice_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIODevice) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QIODevice_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_connectNotify
func miqt_exec_callback_QIODevice_connectNotify(self *C.QIODevice, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QIODevice{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QIODevice) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QIODevice_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIODevice) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QIODevice_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QIODevice_disconnectNotify
func miqt_exec_callback_QIODevice_disconnectNotify(self *C.QIODevice, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QIODevice{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QIODevice) Delete() {
	C.QIODevice_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIODevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QIODevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
