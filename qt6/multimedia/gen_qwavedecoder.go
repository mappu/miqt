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

func newQWaveDecoder(h *C.QWaveDecoder) *QWaveDecoder {
	if h == nil {
		return nil
	}
	return &QWaveDecoder{h: h, QIODevice: qt6.UnsafeNewQIODevice(unsafe.Pointer(h))}
}

func UnsafeNewQWaveDecoder(h unsafe.Pointer) *QWaveDecoder {
	return newQWaveDecoder((*C.QWaveDecoder)(h))
}

// NewQWaveDecoder constructs a new QWaveDecoder object.
func NewQWaveDecoder(device *qt6.QIODevice) *QWaveDecoder {
	ret := C.QWaveDecoder_new((*C.QIODevice)(device.UnsafePointer()))
	return newQWaveDecoder(ret)
}

// NewQWaveDecoder2 constructs a new QWaveDecoder object.
func NewQWaveDecoder2(device *qt6.QIODevice, format *QAudioFormat) *QWaveDecoder {
	ret := C.QWaveDecoder_new2((*C.QIODevice)(device.UnsafePointer()), format.cPointer())
	return newQWaveDecoder(ret)
}

// NewQWaveDecoder3 constructs a new QWaveDecoder object.
func NewQWaveDecoder3(device *qt6.QIODevice, parent *qt6.QObject) *QWaveDecoder {
	ret := C.QWaveDecoder_new3((*C.QIODevice)(device.UnsafePointer()), (*C.QObject)(parent.UnsafePointer()))
	return newQWaveDecoder(ret)
}

// NewQWaveDecoder4 constructs a new QWaveDecoder object.
func NewQWaveDecoder4(device *qt6.QIODevice, format *QAudioFormat, parent *qt6.QObject) *QWaveDecoder {
	ret := C.QWaveDecoder_new4((*C.QIODevice)(device.UnsafePointer()), format.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQWaveDecoder(ret)
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
	_ret := C.QWaveDecoder_AudioFormat(this.h)
	_goptr := newQAudioFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWaveDecoder) GetDevice() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QWaveDecoder_GetDevice(this.h)))
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

// Delete this object from C++ memory.
func (this *QWaveDecoder) Delete() {
	C.QWaveDecoder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWaveDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QWaveDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
