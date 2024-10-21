package qt6

/*

#include "gen_qbuffer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQBuffer(h *C.QBuffer) *QBuffer {
	if h == nil {
		return nil
	}
	return &QBuffer{h: h, QIODevice: UnsafeNewQIODevice(unsafe.Pointer(h))}
}

func UnsafeNewQBuffer(h unsafe.Pointer) *QBuffer {
	return newQBuffer((*C.QBuffer)(h))
}

// NewQBuffer constructs a new QBuffer object.
func NewQBuffer() *QBuffer {
	ret := C.QBuffer_new()
	return newQBuffer(ret)
}

// NewQBuffer2 constructs a new QBuffer object.
func NewQBuffer2(parent *QObject) *QBuffer {
	ret := C.QBuffer_new2(parent.cPointer())
	return newQBuffer(ret)
}

func (this *QBuffer) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QBuffer_MetaObject(this.h)))
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
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
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

func (this *QBuffer) Open(openMode QIODeviceBase__OpenModeFlag) bool {
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
