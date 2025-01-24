package qt

/*

#include "gen_qbuffer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBuffer struct {
	h *C.QBuffer
	*QIODevice
}

func (this *QBuffer) cPointer() *C.QBuffer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBuffer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBuffer constructs the type using only CGO pointers.
func newQBuffer(h *C.QBuffer) *QBuffer {
	if h == nil {
		return nil
	}
	var outptr_QIODevice *C.QIODevice = nil
	C.QBuffer_virtbase(h, &outptr_QIODevice)

	return &QBuffer{h: h,
		QIODevice: newQIODevice(outptr_QIODevice)}
}

// UnsafeNewQBuffer constructs the type using only unsafe pointers.
func UnsafeNewQBuffer(h unsafe.Pointer) *QBuffer {
	return newQBuffer((*C.QBuffer)(h))
}

// NewQBuffer constructs a new QBuffer object.
func NewQBuffer() *QBuffer {

	return newQBuffer(C.QBuffer_new())
}

// NewQBuffer2 constructs a new QBuffer object.
func NewQBuffer2(parent *QObject) *QBuffer {

	return newQBuffer(C.QBuffer_new2(parent.cPointer()))
}

func (this *QBuffer) MetaObject() *QMetaObject {
	return newQMetaObject(C.QBuffer_MetaObject(this.h))
}

func (this *QBuffer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBuffer_Metacast(this.h, param1_Cstring))
}

func QBuffer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBuffer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBuffer) Buffer() []byte {
	var _bytearray C.struct_miqt_string = C.QBuffer_Buffer(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QBuffer) Buffer2() []byte {
	var _bytearray C.struct_miqt_string = C.QBuffer_Buffer2(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QBuffer) SetData(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QBuffer_SetData(this.h, data_alias)
}

func (this *QBuffer) SetData2(data string, lenVal int) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QBuffer_SetData2(this.h, data_Cstring, (C.int)(lenVal))
}

func (this *QBuffer) Data() []byte {
	var _bytearray C.struct_miqt_string = C.QBuffer_Data(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QBuffer) Open(openMode QIODevice__OpenModeFlag) bool {
	return (bool)(C.QBuffer_Open(this.h, (C.int)(openMode)))
}

func (this *QBuffer) Close() {
	C.QBuffer_Close(this.h)
}

func (this *QBuffer) Size() int64 {
	return (int64)(C.QBuffer_Size(this.h))
}

func (this *QBuffer) Pos() int64 {
	return (int64)(C.QBuffer_Pos(this.h))
}

func (this *QBuffer) Seek(off int64) bool {
	return (bool)(C.QBuffer_Seek(this.h, (C.longlong)(off)))
}

func (this *QBuffer) AtEnd() bool {
	return (bool)(C.QBuffer_AtEnd(this.h))
}

func (this *QBuffer) CanReadLine() bool {
	return (bool)(C.QBuffer_CanReadLine(this.h))
}

func QBuffer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBuffer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBuffer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBuffer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBuffer) callVirtualBase_Open(openMode QIODevice__OpenModeFlag) bool {

	return (bool)(C.QBuffer_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(openMode)))

}
func (this *QBuffer) OnOpen(slot func(super func(openMode QIODevice__OpenModeFlag) bool, openMode QIODevice__OpenModeFlag) bool) {
	ok := C.QBuffer_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_Open
func miqt_exec_callback_QBuffer_Open(self *C.QBuffer, cb C.intptr_t, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(openMode QIODevice__OpenModeFlag) bool, openMode QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODevice__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Close() {

	C.QBuffer_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QBuffer) OnClose(slot func(super func())) {
	ok := C.QBuffer_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_Close
func miqt_exec_callback_QBuffer_Close(self *C.QBuffer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QBuffer{h: self}).callVirtualBase_Close)

}

func (this *QBuffer) callVirtualBase_Size() int64 {

	return (int64)(C.QBuffer_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnSize(slot func(super func() int64) int64) {
	ok := C.QBuffer_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_Size
func miqt_exec_callback_QBuffer_Size(self *C.QBuffer, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Pos() int64 {

	return (int64)(C.QBuffer_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnPos(slot func(super func() int64) int64) {
	ok := C.QBuffer_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_Pos
func miqt_exec_callback_QBuffer_Pos(self *C.QBuffer, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Seek(off int64) bool {

	return (bool)(C.QBuffer_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(off)))

}
func (this *QBuffer) OnSeek(slot func(super func(off int64) bool, off int64) bool) {
	ok := C.QBuffer_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_Seek
func miqt_exec_callback_QBuffer_Seek(self *C.QBuffer, cb C.intptr_t, off C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(off int64) bool, off int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(off)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_AtEnd() bool {

	return (bool)(C.QBuffer_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QBuffer_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_AtEnd
func miqt_exec_callback_QBuffer_AtEnd(self *C.QBuffer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QBuffer_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QBuffer_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_CanReadLine
func miqt_exec_callback_QBuffer_CanReadLine(self *C.QBuffer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_ConnectNotify(param1 *QMetaMethod) {

	C.QBuffer_virtualbase_ConnectNotify(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QBuffer) OnConnectNotify(slot func(super func(param1 *QMetaMethod), param1 *QMetaMethod)) {
	ok := C.QBuffer_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_ConnectNotify
func miqt_exec_callback_QBuffer_ConnectNotify(self *C.QBuffer, cb C.intptr_t, param1 *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMetaMethod), param1 *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(param1)

	gofunc((&QBuffer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBuffer) callVirtualBase_DisconnectNotify(param1 *QMetaMethod) {

	C.QBuffer_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QBuffer) OnDisconnectNotify(slot func(super func(param1 *QMetaMethod), param1 *QMetaMethod)) {
	ok := C.QBuffer_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_DisconnectNotify
func miqt_exec_callback_QBuffer_DisconnectNotify(self *C.QBuffer, cb C.intptr_t, param1 *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMetaMethod), param1 *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(param1)

	gofunc((&QBuffer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QBuffer) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QBuffer_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QBuffer) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QBuffer_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_ReadData
func miqt_exec_callback_QBuffer_ReadData(self *C.QBuffer, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QBuffer_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QBuffer) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QBuffer_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_WriteData
func miqt_exec_callback_QBuffer_WriteData(self *C.QBuffer, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_IsSequential() bool {

	return (bool)(C.QBuffer_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QBuffer_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_IsSequential
func miqt_exec_callback_QBuffer_IsSequential(self *C.QBuffer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Reset() bool {

	return (bool)(C.QBuffer_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnReset(slot func(super func() bool) bool) {
	ok := C.QBuffer_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_Reset
func miqt_exec_callback_QBuffer_Reset(self *C.QBuffer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QBuffer_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QBuffer_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_BytesAvailable
func miqt_exec_callback_QBuffer_BytesAvailable(self *C.QBuffer, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QBuffer_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QBuffer_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_BytesToWrite
func miqt_exec_callback_QBuffer_BytesToWrite(self *C.QBuffer, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QBuffer_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QBuffer) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QBuffer_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_WaitForReadyRead
func miqt_exec_callback_QBuffer_WaitForReadyRead(self *C.QBuffer, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QBuffer_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QBuffer) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QBuffer_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_WaitForBytesWritten
func miqt_exec_callback_QBuffer_WaitForBytesWritten(self *C.QBuffer, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QBuffer_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QBuffer) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QBuffer_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_ReadLineData
func miqt_exec_callback_QBuffer_ReadLineData(self *C.QBuffer, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QBuffer_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QBuffer) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QBuffer_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_Event
func miqt_exec_callback_QBuffer_Event(self *C.QBuffer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QBuffer_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QBuffer) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QBuffer_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_EventFilter
func miqt_exec_callback_QBuffer_EventFilter(self *C.QBuffer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QBuffer_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QBuffer) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QBuffer_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_TimerEvent
func miqt_exec_callback_QBuffer_TimerEvent(self *C.QBuffer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QBuffer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBuffer) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QBuffer_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QBuffer) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QBuffer_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_ChildEvent
func miqt_exec_callback_QBuffer_ChildEvent(self *C.QBuffer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QBuffer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBuffer) callVirtualBase_CustomEvent(event *QEvent) {

	C.QBuffer_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QBuffer) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QBuffer_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_CustomEvent
func miqt_exec_callback_QBuffer_CustomEvent(self *C.QBuffer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QBuffer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QBuffer) Delete() {
	C.QBuffer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBuffer) GoGC() {
	runtime.SetFinalizer(this, func(this *QBuffer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
