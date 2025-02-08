package multimedia

/*

#include "gen_qwavedecoder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWaveDecoder struct {
	h *C.QWaveDecoder
	*qt6.QIODevice
}

func (this *QWaveDecoder) cPointer() *C.QWaveDecoder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWaveDecoder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWaveDecoder constructs the type using only CGO pointers.
func newQWaveDecoder(h *C.QWaveDecoder) *QWaveDecoder {
	if h == nil {
		return nil
	}
	var outptr_QIODevice *C.QIODevice = nil
	C.QWaveDecoder_virtbase(h, &outptr_QIODevice)

	return &QWaveDecoder{h: h,
		QIODevice: qt6.UnsafeNewQIODevice(unsafe.Pointer(outptr_QIODevice))}
}

// UnsafeNewQWaveDecoder constructs the type using only unsafe pointers.
func UnsafeNewQWaveDecoder(h unsafe.Pointer) *QWaveDecoder {
	return newQWaveDecoder((*C.QWaveDecoder)(h))
}

// NewQWaveDecoder constructs a new QWaveDecoder object.
func NewQWaveDecoder(device *qt6.QIODevice) *QWaveDecoder {

	return newQWaveDecoder(C.QWaveDecoder_new((*C.QIODevice)(device.UnsafePointer())))
}

// NewQWaveDecoder2 constructs a new QWaveDecoder object.
func NewQWaveDecoder2(device *qt6.QIODevice, format *QAudioFormat) *QWaveDecoder {

	return newQWaveDecoder(C.QWaveDecoder_new2((*C.QIODevice)(device.UnsafePointer()), format.cPointer()))
}

// NewQWaveDecoder3 constructs a new QWaveDecoder object.
func NewQWaveDecoder3(device *qt6.QIODevice, parent *qt6.QObject) *QWaveDecoder {

	return newQWaveDecoder(C.QWaveDecoder_new3((*C.QIODevice)(device.UnsafePointer()), (*C.QObject)(parent.UnsafePointer())))
}

// NewQWaveDecoder4 constructs a new QWaveDecoder object.
func NewQWaveDecoder4(device *qt6.QIODevice, format *QAudioFormat, parent *qt6.QObject) *QWaveDecoder {

	return newQWaveDecoder(C.QWaveDecoder_new4((*C.QIODevice)(device.UnsafePointer()), format.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QWaveDecoder) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWaveDecoder_metaObject(this.h)))
}

func (this *QWaveDecoder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWaveDecoder_metacast(this.h, param1_Cstring))
}

func QWaveDecoder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWaveDecoder_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWaveDecoder) AudioFormat() *QAudioFormat {
	_goptr := newQAudioFormat(C.QWaveDecoder_audioFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWaveDecoder) GetDevice() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QWaveDecoder_getDevice(this.h)))
}

func (this *QWaveDecoder) Duration() int {
	return (int)(C.QWaveDecoder_duration(this.h))
}

func QWaveDecoder_HeaderLength() int64 {
	return (int64)(C.QWaveDecoder_headerLength())
}

func (this *QWaveDecoder) Open(mode qt6.QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QWaveDecoder_open(this.h, (C.int)(mode)))
}

func (this *QWaveDecoder) Close() {
	C.QWaveDecoder_close(this.h)
}

func (this *QWaveDecoder) Seek(pos int64) bool {
	return (bool)(C.QWaveDecoder_seek(this.h, (C.longlong)(pos)))
}

func (this *QWaveDecoder) Pos() int64 {
	return (int64)(C.QWaveDecoder_pos(this.h))
}

func (this *QWaveDecoder) Size() int64 {
	return (int64)(C.QWaveDecoder_size(this.h))
}

func (this *QWaveDecoder) IsSequential() bool {
	return (bool)(C.QWaveDecoder_isSequential(this.h))
}

func (this *QWaveDecoder) BytesAvailable() int64 {
	return (int64)(C.QWaveDecoder_bytesAvailable(this.h))
}

func (this *QWaveDecoder) FormatKnown() {
	C.QWaveDecoder_formatKnown(this.h)
}
func (this *QWaveDecoder) OnFormatKnown(slot func()) {
	C.QWaveDecoder_connect_formatKnown(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_formatKnown
func miqt_exec_callback_QWaveDecoder_formatKnown(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWaveDecoder) ParsingError() {
	C.QWaveDecoder_parsingError(this.h)
}
func (this *QWaveDecoder) OnParsingError(slot func()) {
	C.QWaveDecoder_connect_parsingError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_parsingError
func miqt_exec_callback_QWaveDecoder_parsingError(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWaveDecoder_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWaveDecoder_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWaveDecoder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWaveDecoder_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetOpenMode can only be called from a QWaveDecoder that was directly constructed.
func (this *QWaveDecoder) SetOpenMode(openMode qt6.QIODeviceBase__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QWaveDecoder_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QWaveDecoder that was directly constructed.
func (this *QWaveDecoder) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QWaveDecoder_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QWaveDecoder that was directly constructed.
func (this *QWaveDecoder) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QWaveDecoder_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWaveDecoder that was directly constructed.
func (this *QWaveDecoder) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWaveDecoder_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWaveDecoder that was directly constructed.
func (this *QWaveDecoder) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWaveDecoder_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWaveDecoder that was directly constructed.
func (this *QWaveDecoder) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWaveDecoder_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWaveDecoder) callVirtualBase_Open(mode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QWaveDecoder_virtualbase_open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QWaveDecoder) OnOpen(slot func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QWaveDecoder_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_open
func miqt_exec_callback_QWaveDecoder_open(self *C.QWaveDecoder, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QIODeviceBase__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_Close() {

	C.QWaveDecoder_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QWaveDecoder) OnClose(slot func(super func())) {
	ok := C.QWaveDecoder_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_close
func miqt_exec_callback_QWaveDecoder_close(self *C.QWaveDecoder, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWaveDecoder{h: self}).callVirtualBase_Close)

}

func (this *QWaveDecoder) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QWaveDecoder_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QWaveDecoder) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QWaveDecoder_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_seek
func miqt_exec_callback_QWaveDecoder_seek(self *C.QWaveDecoder, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_Pos() int64 {

	return (int64)(C.QWaveDecoder_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnPos(slot func(super func() int64) int64) {
	ok := C.QWaveDecoder_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_pos
func miqt_exec_callback_QWaveDecoder_pos(self *C.QWaveDecoder, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_Size() int64 {

	return (int64)(C.QWaveDecoder_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnSize(slot func(super func() int64) int64) {
	ok := C.QWaveDecoder_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_size
func miqt_exec_callback_QWaveDecoder_size(self *C.QWaveDecoder, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_IsSequential() bool {

	return (bool)(C.QWaveDecoder_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QWaveDecoder_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_isSequential
func miqt_exec_callback_QWaveDecoder_isSequential(self *C.QWaveDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QWaveDecoder_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QWaveDecoder_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_bytesAvailable
func miqt_exec_callback_QWaveDecoder_bytesAvailable(self *C.QWaveDecoder, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_AtEnd() bool {

	return (bool)(C.QWaveDecoder_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QWaveDecoder_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_atEnd
func miqt_exec_callback_QWaveDecoder_atEnd(self *C.QWaveDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_Reset() bool {

	return (bool)(C.QWaveDecoder_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnReset(slot func(super func() bool) bool) {
	ok := C.QWaveDecoder_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_reset
func miqt_exec_callback_QWaveDecoder_reset(self *C.QWaveDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QWaveDecoder_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QWaveDecoder_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_bytesToWrite
func miqt_exec_callback_QWaveDecoder_bytesToWrite(self *C.QWaveDecoder, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QWaveDecoder_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QWaveDecoder_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_canReadLine
func miqt_exec_callback_QWaveDecoder_canReadLine(self *C.QWaveDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QWaveDecoder_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QWaveDecoder) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QWaveDecoder_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_waitForReadyRead
func miqt_exec_callback_QWaveDecoder_waitForReadyRead(self *C.QWaveDecoder, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QWaveDecoder_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QWaveDecoder) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QWaveDecoder_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_waitForBytesWritten
func miqt_exec_callback_QWaveDecoder_waitForBytesWritten(self *C.QWaveDecoder, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QWaveDecoder_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QWaveDecoder) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QWaveDecoder_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_readLineData
func miqt_exec_callback_QWaveDecoder_readLineData(self *C.QWaveDecoder, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QWaveDecoder_virtualbase_skipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QWaveDecoder) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QWaveDecoder_override_virtual_skipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_skipData
func miqt_exec_callback_QWaveDecoder_skipData(self *C.QWaveDecoder, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QWaveDecoder_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWaveDecoder) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QWaveDecoder_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_event
func miqt_exec_callback_QWaveDecoder_event(self *C.QWaveDecoder, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWaveDecoder_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWaveDecoder) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QWaveDecoder_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_eventFilter
func miqt_exec_callback_QWaveDecoder_eventFilter(self *C.QWaveDecoder, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWaveDecoder_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWaveDecoder) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QWaveDecoder_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_timerEvent
func miqt_exec_callback_QWaveDecoder_timerEvent(self *C.QWaveDecoder, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWaveDecoder{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWaveDecoder) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWaveDecoder_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWaveDecoder) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QWaveDecoder_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_childEvent
func miqt_exec_callback_QWaveDecoder_childEvent(self *C.QWaveDecoder, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWaveDecoder{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWaveDecoder) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWaveDecoder_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWaveDecoder) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWaveDecoder_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_customEvent
func miqt_exec_callback_QWaveDecoder_customEvent(self *C.QWaveDecoder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWaveDecoder{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWaveDecoder) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWaveDecoder_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWaveDecoder) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWaveDecoder_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_connectNotify
func miqt_exec_callback_QWaveDecoder_connectNotify(self *C.QWaveDecoder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWaveDecoder{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWaveDecoder) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWaveDecoder_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWaveDecoder) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWaveDecoder_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWaveDecoder_disconnectNotify
func miqt_exec_callback_QWaveDecoder_disconnectNotify(self *C.QWaveDecoder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWaveDecoder{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWaveDecoder) Delete() {
	C.QWaveDecoder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWaveDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QWaveDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
