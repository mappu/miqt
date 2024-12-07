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
	h          *C.QWaveDecoder
	isSubclass bool
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
func newQWaveDecoder(h *C.QWaveDecoder, h_QIODevice *C.QIODevice, h_QObject *C.QObject, h_QIODeviceBase *C.QIODeviceBase) *QWaveDecoder {
	if h == nil {
		return nil
	}
	return &QWaveDecoder{h: h,
		QIODevice: qt6.UnsafeNewQIODevice(unsafe.Pointer(h_QIODevice), unsafe.Pointer(h_QObject), unsafe.Pointer(h_QIODeviceBase))}
}

// UnsafeNewQWaveDecoder constructs the type using only unsafe pointers.
func UnsafeNewQWaveDecoder(h unsafe.Pointer, h_QIODevice unsafe.Pointer, h_QObject unsafe.Pointer, h_QIODeviceBase unsafe.Pointer) *QWaveDecoder {
	if h == nil {
		return nil
	}

	return &QWaveDecoder{h: (*C.QWaveDecoder)(h),
		QIODevice: qt6.UnsafeNewQIODevice(h_QIODevice, h_QObject, h_QIODeviceBase)}
}

// NewQWaveDecoder constructs a new QWaveDecoder object.
func NewQWaveDecoder(device *qt6.QIODevice) *QWaveDecoder {
	var outptr_QWaveDecoder *C.QWaveDecoder = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QWaveDecoder_new((*C.QIODevice)(device.UnsafePointer()), &outptr_QWaveDecoder, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQWaveDecoder(outptr_QWaveDecoder, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

// NewQWaveDecoder2 constructs a new QWaveDecoder object.
func NewQWaveDecoder2(device *qt6.QIODevice, format *QAudioFormat) *QWaveDecoder {
	var outptr_QWaveDecoder *C.QWaveDecoder = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QWaveDecoder_new2((*C.QIODevice)(device.UnsafePointer()), format.cPointer(), &outptr_QWaveDecoder, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQWaveDecoder(outptr_QWaveDecoder, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

// NewQWaveDecoder3 constructs a new QWaveDecoder object.
func NewQWaveDecoder3(device *qt6.QIODevice, parent *qt6.QObject) *QWaveDecoder {
	var outptr_QWaveDecoder *C.QWaveDecoder = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QWaveDecoder_new3((*C.QIODevice)(device.UnsafePointer()), (*C.QObject)(parent.UnsafePointer()), &outptr_QWaveDecoder, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQWaveDecoder(outptr_QWaveDecoder, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

// NewQWaveDecoder4 constructs a new QWaveDecoder object.
func NewQWaveDecoder4(device *qt6.QIODevice, format *QAudioFormat, parent *qt6.QObject) *QWaveDecoder {
	var outptr_QWaveDecoder *C.QWaveDecoder = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QWaveDecoder_new4((*C.QIODevice)(device.UnsafePointer()), format.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QWaveDecoder, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQWaveDecoder(outptr_QWaveDecoder, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

func (this *QWaveDecoder) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWaveDecoder_MetaObject(this.h)))
}

func (this *QWaveDecoder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWaveDecoder_Metacast(this.h, param1_Cstring))
}

func QWaveDecoder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWaveDecoder_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWaveDecoder) AudioFormat() *QAudioFormat {
	_goptr := newQAudioFormat(C.QWaveDecoder_AudioFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWaveDecoder) GetDevice() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QWaveDecoder_GetDevice(this.h)), nil, nil)
}

func (this *QWaveDecoder) Duration() int {
	return (int)(C.QWaveDecoder_Duration(this.h))
}

func QWaveDecoder_HeaderLength() int64 {
	return (int64)(C.QWaveDecoder_HeaderLength())
}

func (this *QWaveDecoder) Open(mode qt6.QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QWaveDecoder_Open(this.h, (C.int)(mode)))
}

func (this *QWaveDecoder) Close() {
	C.QWaveDecoder_Close(this.h)
}

func (this *QWaveDecoder) Seek(pos int64) bool {
	return (bool)(C.QWaveDecoder_Seek(this.h, (C.longlong)(pos)))
}

func (this *QWaveDecoder) Pos() int64 {
	return (int64)(C.QWaveDecoder_Pos(this.h))
}

func (this *QWaveDecoder) Size() int64 {
	return (int64)(C.QWaveDecoder_Size(this.h))
}

func (this *QWaveDecoder) IsSequential() bool {
	return (bool)(C.QWaveDecoder_IsSequential(this.h))
}

func (this *QWaveDecoder) BytesAvailable() int64 {
	return (int64)(C.QWaveDecoder_BytesAvailable(this.h))
}

func (this *QWaveDecoder) FormatKnown() {
	C.QWaveDecoder_FormatKnown(this.h)
}
func (this *QWaveDecoder) OnFormatKnown(slot func()) {
	C.QWaveDecoder_connect_FormatKnown(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_FormatKnown
func miqt_exec_callback_QWaveDecoder_FormatKnown(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWaveDecoder) ParsingError() {
	C.QWaveDecoder_ParsingError(this.h)
}
func (this *QWaveDecoder) OnParsingError(slot func()) {
	C.QWaveDecoder_connect_ParsingError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_ParsingError
func miqt_exec_callback_QWaveDecoder_ParsingError(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QWaveDecoder_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWaveDecoder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWaveDecoder_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWaveDecoder) callVirtualBase_Open(mode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QWaveDecoder_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QWaveDecoder) OnOpen(slot func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_Open
func miqt_exec_callback_QWaveDecoder_Open(self *C.QWaveDecoder, cb C.intptr_t, mode C.int) C.bool {
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

	C.QWaveDecoder_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QWaveDecoder) OnClose(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_Close
func miqt_exec_callback_QWaveDecoder_Close(self *C.QWaveDecoder, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWaveDecoder{h: self}).callVirtualBase_Close)

}

func (this *QWaveDecoder) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QWaveDecoder_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QWaveDecoder) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_Seek
func miqt_exec_callback_QWaveDecoder_Seek(self *C.QWaveDecoder, cb C.intptr_t, pos C.longlong) C.bool {
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

	return (int64)(C.QWaveDecoder_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnPos(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_Pos
func miqt_exec_callback_QWaveDecoder_Pos(self *C.QWaveDecoder, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_Size() int64 {

	return (int64)(C.QWaveDecoder_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnSize(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_Size
func miqt_exec_callback_QWaveDecoder_Size(self *C.QWaveDecoder, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_IsSequential() bool {

	return (bool)(C.QWaveDecoder_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnIsSequential(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_IsSequential
func miqt_exec_callback_QWaveDecoder_IsSequential(self *C.QWaveDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QWaveDecoder_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnBytesAvailable(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_BytesAvailable
func miqt_exec_callback_QWaveDecoder_BytesAvailable(self *C.QWaveDecoder, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_AtEnd() bool {

	return (bool)(C.QWaveDecoder_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnAtEnd(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_AtEnd
func miqt_exec_callback_QWaveDecoder_AtEnd(self *C.QWaveDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_Reset() bool {

	return (bool)(C.QWaveDecoder_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnReset(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_Reset
func miqt_exec_callback_QWaveDecoder_Reset(self *C.QWaveDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QWaveDecoder_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnBytesToWrite(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_BytesToWrite
func miqt_exec_callback_QWaveDecoder_BytesToWrite(self *C.QWaveDecoder, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QWaveDecoder_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QWaveDecoder) OnCanReadLine(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_CanReadLine
func miqt_exec_callback_QWaveDecoder_CanReadLine(self *C.QWaveDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QWaveDecoder) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QWaveDecoder_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QWaveDecoder) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_WaitForReadyRead
func miqt_exec_callback_QWaveDecoder_WaitForReadyRead(self *C.QWaveDecoder, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QWaveDecoder_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QWaveDecoder) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_WaitForBytesWritten
func miqt_exec_callback_QWaveDecoder_WaitForBytesWritten(self *C.QWaveDecoder, cb C.intptr_t, msecs C.int) C.bool {
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

	return (int64)(C.QWaveDecoder_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QWaveDecoder) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_ReadLineData
func miqt_exec_callback_QWaveDecoder_ReadLineData(self *C.QWaveDecoder, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QWaveDecoder_virtualbase_SkipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QWaveDecoder) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWaveDecoder_override_virtual_SkipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWaveDecoder_SkipData
func miqt_exec_callback_QWaveDecoder_SkipData(self *C.QWaveDecoder, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QWaveDecoder{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QWaveDecoder) Delete() {
	C.QWaveDecoder_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWaveDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QWaveDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
