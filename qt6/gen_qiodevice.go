package qt6

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

type QIODevice struct {
	h          *C.QIODevice
	isSubclass bool
	*QObject
	*QIODeviceBase
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
	var outptr_QIODeviceBase *C.QIODeviceBase = nil
	C.QIODevice_virtbase(h, &outptr_QObject, &outptr_QIODeviceBase)

	return &QIODevice{h: h,
		QObject:       newQObject(outptr_QObject),
		QIODeviceBase: newQIODeviceBase(outptr_QIODeviceBase)}
}

// UnsafeNewQIODevice constructs the type using only unsafe pointers.
func UnsafeNewQIODevice(h unsafe.Pointer) *QIODevice {
	return newQIODevice((*C.QIODevice)(h))
}

// NewQIODevice constructs a new QIODevice object.
func NewQIODevice() *QIODevice {

	ret := newQIODevice(C.QIODevice_new())
	ret.isSubclass = true
	return ret
}

// NewQIODevice2 constructs a new QIODevice object.
func NewQIODevice2(parent *QObject) *QIODevice {

	ret := newQIODevice(C.QIODevice_new2(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QIODevice) MetaObject() *QMetaObject {
	return newQMetaObject(C.QIODevice_MetaObject(this.h))
}

func (this *QIODevice) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QIODevice_Metacast(this.h, param1_Cstring))
}

func QIODevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIODevice_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIODevice) OpenMode() QIODeviceBase__OpenModeFlag {
	return (QIODeviceBase__OpenModeFlag)(C.QIODevice_OpenMode(this.h))
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

func (this *QIODevice) Open(mode QIODeviceBase__OpenModeFlag) bool {
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

func (this *QIODevice) ReadWithMaxlen(maxlen int64) []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_ReadWithMaxlen(this.h, (C.longlong)(maxlen))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QIODevice) ReadAll() []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_ReadAll(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QIODevice) ReadLine(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_ReadLine(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QIODevice) ReadLine2() []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_ReadLine2(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
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

func (this *QIODevice) Write2(data []byte) int64 {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	return (int64)(C.QIODevice_Write2(this.h, data_alias))
}

func (this *QIODevice) Peek(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QIODevice_Peek(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QIODevice) PeekWithMaxlen(maxlen int64) []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_PeekWithMaxlen(this.h, (C.longlong)(maxlen))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
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
	var _ms C.struct_miqt_string = C.QIODevice_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIODevice) ReadyRead() {
	C.QIODevice_ReadyRead(this.h)
}
func (this *QIODevice) OnReadyRead(slot func()) {
	C.QIODevice_connect_ReadyRead(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_ReadyRead
func miqt_exec_callback_QIODevice_ReadyRead(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QIODevice) ChannelReadyRead(channel int) {
	C.QIODevice_ChannelReadyRead(this.h, (C.int)(channel))
}
func (this *QIODevice) OnChannelReadyRead(slot func(channel int)) {
	C.QIODevice_connect_ChannelReadyRead(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_ChannelReadyRead
func miqt_exec_callback_QIODevice_ChannelReadyRead(cb C.intptr_t, channel C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(channel int))
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
	C.QIODevice_connect_BytesWritten(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_BytesWritten
func miqt_exec_callback_QIODevice_BytesWritten(cb C.intptr_t, bytes C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bytes int64))
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
	C.QIODevice_connect_ChannelBytesWritten(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_ChannelBytesWritten
func miqt_exec_callback_QIODevice_ChannelBytesWritten(cb C.intptr_t, channel C.int, bytes C.longlong) {
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
	C.QIODevice_AboutToClose(this.h)
}
func (this *QIODevice) OnAboutToClose(slot func()) {
	C.QIODevice_connect_AboutToClose(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_AboutToClose
func miqt_exec_callback_QIODevice_AboutToClose(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QIODevice) ReadChannelFinished() {
	C.QIODevice_ReadChannelFinished(this.h)
}
func (this *QIODevice) OnReadChannelFinished(slot func()) {
	C.QIODevice_connect_ReadChannelFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_ReadChannelFinished
func miqt_exec_callback_QIODevice_ReadChannelFinished(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QIODevice_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIODevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIODevice_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIODevice) ReadLine1(maxlen int64) []byte {
	var _bytearray C.struct_miqt_string = C.QIODevice_ReadLine1(this.h, (C.longlong)(maxlen))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QIODevice) callVirtualBase_IsSequential() bool {

	return (bool)(C.QIODevice_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnIsSequential(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_IsSequential
func miqt_exec_callback_QIODevice_IsSequential(self *C.QIODevice, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Open(mode QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QIODevice_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QIODevice) OnOpen(slot func(super func(mode QIODeviceBase__OpenModeFlag) bool, mode QIODeviceBase__OpenModeFlag) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_Open
func miqt_exec_callback_QIODevice_Open(self *C.QIODevice, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QIODeviceBase__OpenModeFlag) bool, mode QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODeviceBase__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Close() {

	C.QIODevice_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QIODevice) OnClose(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_Close
func miqt_exec_callback_QIODevice_Close(self *C.QIODevice, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QIODevice{h: self}).callVirtualBase_Close)

}

func (this *QIODevice) callVirtualBase_Pos() int64 {

	return (int64)(C.QIODevice_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnPos(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_Pos
func miqt_exec_callback_QIODevice_Pos(self *C.QIODevice, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Size() int64 {

	return (int64)(C.QIODevice_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnSize(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_Size
func miqt_exec_callback_QIODevice_Size(self *C.QIODevice, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QIODevice_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QIODevice) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_Seek
func miqt_exec_callback_QIODevice_Seek(self *C.QIODevice, cb C.intptr_t, pos C.longlong) C.bool {
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

	return (bool)(C.QIODevice_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnAtEnd(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_AtEnd
func miqt_exec_callback_QIODevice_AtEnd(self *C.QIODevice, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_Reset() bool {

	return (bool)(C.QIODevice_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnReset(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_Reset
func miqt_exec_callback_QIODevice_Reset(self *C.QIODevice, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QIODevice_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnBytesAvailable(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_BytesAvailable
func miqt_exec_callback_QIODevice_BytesAvailable(self *C.QIODevice, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QIODevice_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnBytesToWrite(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_BytesToWrite
func miqt_exec_callback_QIODevice_BytesToWrite(self *C.QIODevice, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QIODevice_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QIODevice) OnCanReadLine(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_CanReadLine
func miqt_exec_callback_QIODevice_CanReadLine(self *C.QIODevice, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QIODevice) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QIODevice_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QIODevice) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_WaitForReadyRead
func miqt_exec_callback_QIODevice_WaitForReadyRead(self *C.QIODevice, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QIODevice_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QIODevice) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_WaitForBytesWritten
func miqt_exec_callback_QIODevice_WaitForBytesWritten(self *C.QIODevice, cb C.intptr_t, msecs C.int) C.bool {
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_ReadData
func miqt_exec_callback_QIODevice_ReadData(self *C.QIODevice, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QIODevice_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QIODevice) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_ReadLineData
func miqt_exec_callback_QIODevice_ReadLineData(self *C.QIODevice, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

func (this *QIODevice) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QIODevice_virtualbase_SkipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QIODevice) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_SkipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_SkipData
func miqt_exec_callback_QIODevice_SkipData(self *C.QIODevice, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QIODevice{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}
func (this *QIODevice) OnWriteData(slot func(data string, lenVal int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_WriteData
func miqt_exec_callback_QIODevice_WriteData(self *C.QIODevice, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
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

	return (bool)(C.QIODevice_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QIODevice) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_Event
func miqt_exec_callback_QIODevice_Event(self *C.QIODevice, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QIODevice_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QIODevice) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_EventFilter
func miqt_exec_callback_QIODevice_EventFilter(self *C.QIODevice, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QIODevice_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIODevice) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_TimerEvent
func miqt_exec_callback_QIODevice_TimerEvent(self *C.QIODevice, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QIODevice{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QIODevice) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QIODevice_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIODevice) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_ChildEvent
func miqt_exec_callback_QIODevice_ChildEvent(self *C.QIODevice, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QIODevice{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QIODevice) callVirtualBase_CustomEvent(event *QEvent) {

	C.QIODevice_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QIODevice) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_CustomEvent
func miqt_exec_callback_QIODevice_CustomEvent(self *C.QIODevice, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QIODevice{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QIODevice) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QIODevice_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIODevice) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_ConnectNotify
func miqt_exec_callback_QIODevice_ConnectNotify(self *C.QIODevice, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QIODevice{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QIODevice) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QIODevice_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QIODevice) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QIODevice_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIODevice_DisconnectNotify
func miqt_exec_callback_QIODevice_DisconnectNotify(self *C.QIODevice, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QIODevice_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIODevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QIODevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
