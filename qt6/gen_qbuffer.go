package qt6

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
	return newQMetaObject(C.QBuffer_metaObject(this.h))
}

func (this *QBuffer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBuffer_metacast(this.h, param1_Cstring))
}

func QBuffer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBuffer) Buffer() []byte {
	var _bytearray C.struct_miqt_string = C.QBuffer_buffer(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QBuffer) Buffer2() []byte {
	var _bytearray C.struct_miqt_string = C.QBuffer_buffer2(this.h)
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
	C.QBuffer_setData(this.h, data_alias)
}

func (this *QBuffer) SetData2(data string, lenVal int) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QBuffer_setData2(this.h, data_Cstring, (C.int)(lenVal))
}

func (this *QBuffer) Data() []byte {
	var _bytearray C.struct_miqt_string = C.QBuffer_data(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QBuffer) Open(openMode QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QBuffer_open(this.h, (C.int)(openMode)))
}

func (this *QBuffer) Close() {
	C.QBuffer_close(this.h)
}

func (this *QBuffer) Size() int64 {
	return (int64)(C.QBuffer_size(this.h))
}

func (this *QBuffer) Pos() int64 {
	return (int64)(C.QBuffer_pos(this.h))
}

func (this *QBuffer) Seek(off int64) bool {
	return (bool)(C.QBuffer_seek(this.h, (C.longlong)(off)))
}

func (this *QBuffer) AtEnd() bool {
	return (bool)(C.QBuffer_atEnd(this.h))
}

func (this *QBuffer) CanReadLine() bool {
	return (bool)(C.QBuffer_canReadLine(this.h))
}

func QBuffer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBuffer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBuffer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBuffer) callVirtualBase_Open(openMode QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QBuffer_virtualbase_open(unsafe.Pointer(this.h), (C.int)(openMode)))

}
func (this *QBuffer) Onopen(slot func(super func(openMode QIODeviceBase__OpenModeFlag) bool, openMode QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QBuffer_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_open
func miqt_exec_callback_QBuffer_open(self *C.QBuffer, cb C.intptr_t, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(openMode QIODeviceBase__OpenModeFlag) bool, openMode QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODeviceBase__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Close() {

	C.QBuffer_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QBuffer) Onclose(slot func(super func())) {
	ok := C.QBuffer_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_close
func miqt_exec_callback_QBuffer_close(self *C.QBuffer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QBuffer{h: self}).callVirtualBase_Close)

}

func (this *QBuffer) callVirtualBase_Size() int64 {

	return (int64)(C.QBuffer_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QBuffer) Onsize(slot func(super func() int64) int64) {
	ok := C.QBuffer_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_size
func miqt_exec_callback_QBuffer_size(self *C.QBuffer, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Pos() int64 {

	return (int64)(C.QBuffer_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QBuffer) Onpos(slot func(super func() int64) int64) {
	ok := C.QBuffer_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_pos
func miqt_exec_callback_QBuffer_pos(self *C.QBuffer, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Seek(off int64) bool {

	return (bool)(C.QBuffer_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(off)))

}
func (this *QBuffer) Onseek(slot func(super func(off int64) bool, off int64) bool) {
	ok := C.QBuffer_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_seek
func miqt_exec_callback_QBuffer_seek(self *C.QBuffer, cb C.intptr_t, off C.longlong) C.bool {
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

	return (bool)(C.QBuffer_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnatEnd(slot func(super func() bool) bool) {
	ok := C.QBuffer_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_atEnd
func miqt_exec_callback_QBuffer_atEnd(self *C.QBuffer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QBuffer_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OncanReadLine(slot func(super func() bool) bool) {
	ok := C.QBuffer_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_canReadLine
func miqt_exec_callback_QBuffer_canReadLine(self *C.QBuffer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_ConnectNotify(param1 *QMetaMethod) {

	C.QBuffer_virtualbase_connectNotify(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QBuffer) OnconnectNotify(slot func(super func(param1 *QMetaMethod), param1 *QMetaMethod)) {
	ok := C.QBuffer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_connectNotify
func miqt_exec_callback_QBuffer_connectNotify(self *C.QBuffer, cb C.intptr_t, param1 *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMetaMethod), param1 *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(param1)

	gofunc((&QBuffer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBuffer) callVirtualBase_DisconnectNotify(param1 *QMetaMethod) {

	C.QBuffer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QBuffer) OndisconnectNotify(slot func(super func(param1 *QMetaMethod), param1 *QMetaMethod)) {
	ok := C.QBuffer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_disconnectNotify
func miqt_exec_callback_QBuffer_disconnectNotify(self *C.QBuffer, cb C.intptr_t, param1 *C.QMetaMethod) {
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

	return (int64)(C.QBuffer_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QBuffer) OnreadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QBuffer_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_readData
func miqt_exec_callback_QBuffer_readData(self *C.QBuffer, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QBuffer_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QBuffer) OnwriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QBuffer_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_writeData
func miqt_exec_callback_QBuffer_writeData(self *C.QBuffer, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
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

	return (bool)(C.QBuffer_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnisSequential(slot func(super func() bool) bool) {
	ok := C.QBuffer_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_isSequential
func miqt_exec_callback_QBuffer_isSequential(self *C.QBuffer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Reset() bool {

	return (bool)(C.QBuffer_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QBuffer) Onreset(slot func(super func() bool) bool) {
	ok := C.QBuffer_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_reset
func miqt_exec_callback_QBuffer_reset(self *C.QBuffer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QBuffer_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnbytesAvailable(slot func(super func() int64) int64) {
	ok := C.QBuffer_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_bytesAvailable
func miqt_exec_callback_QBuffer_bytesAvailable(self *C.QBuffer, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QBuffer_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QBuffer) OnbytesToWrite(slot func(super func() int64) int64) {
	ok := C.QBuffer_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_bytesToWrite
func miqt_exec_callback_QBuffer_bytesToWrite(self *C.QBuffer, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QBuffer_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QBuffer) OnwaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QBuffer_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_waitForReadyRead
func miqt_exec_callback_QBuffer_waitForReadyRead(self *C.QBuffer, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QBuffer_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QBuffer) OnwaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QBuffer_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_waitForBytesWritten
func miqt_exec_callback_QBuffer_waitForBytesWritten(self *C.QBuffer, cb C.intptr_t, msecs C.int) C.bool {
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

	return (int64)(C.QBuffer_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QBuffer) OnreadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QBuffer_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_readLineData
func miqt_exec_callback_QBuffer_readLineData(self *C.QBuffer, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

func (this *QBuffer) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QBuffer_virtualbase_skipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QBuffer) OnskipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QBuffer_override_virtual_skipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_skipData
func miqt_exec_callback_QBuffer_skipData(self *C.QBuffer, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QBuffer{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QBuffer) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QBuffer_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QBuffer) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QBuffer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_event
func miqt_exec_callback_QBuffer_event(self *C.QBuffer, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QBuffer_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QBuffer) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QBuffer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_eventFilter
func miqt_exec_callback_QBuffer_eventFilter(self *C.QBuffer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QBuffer_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QBuffer) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QBuffer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_timerEvent
func miqt_exec_callback_QBuffer_timerEvent(self *C.QBuffer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QBuffer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBuffer) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QBuffer_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QBuffer) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QBuffer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_childEvent
func miqt_exec_callback_QBuffer_childEvent(self *C.QBuffer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QBuffer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBuffer) callVirtualBase_CustomEvent(event *QEvent) {

	C.QBuffer_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QBuffer) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QBuffer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBuffer_customEvent
func miqt_exec_callback_QBuffer_customEvent(self *C.QBuffer, cb C.intptr_t, event *C.QEvent) {
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
	C.QBuffer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBuffer) GoGC() {
	runtime.SetFinalizer(this, func(this *QBuffer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
