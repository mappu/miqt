package qt

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

func newQBuffer(h *C.QBuffer) *QBuffer {
	if h == nil {
		return nil
	}
	return &QBuffer{h: h, QIODevice: newQIODevice_U(unsafe.Pointer(h))}
}

func newQBuffer_U(h unsafe.Pointer) *QBuffer {
	return newQBuffer((*C.QBuffer)(h))
}

// NewQBuffer constructs a new QBuffer object.
func NewQBuffer() *QBuffer {
	ret := C.QBuffer_new()
	return newQBuffer(ret)
}

// NewQBuffer2 constructs a new QBuffer object.
func NewQBuffer2(buf *QByteArray) *QBuffer {
	ret := C.QBuffer_new2(buf.cPointer())
	return newQBuffer(ret)
}

// NewQBuffer3 constructs a new QBuffer object.
func NewQBuffer3(parent *QObject) *QBuffer {
	ret := C.QBuffer_new3(parent.cPointer())
	return newQBuffer(ret)
}

// NewQBuffer4 constructs a new QBuffer object.
func NewQBuffer4(buf *QByteArray, parent *QObject) *QBuffer {
	ret := C.QBuffer_new4(buf.cPointer(), parent.cPointer())
	return newQBuffer(ret)
}

func (this *QBuffer) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QBuffer_MetaObject(this.h)))
}

func QBuffer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QBuffer_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QBuffer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QBuffer_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QBuffer) Buffer() *QByteArray {
	return newQByteArray_U(unsafe.Pointer(C.QBuffer_Buffer(this.h)))
}

func (this *QBuffer) Buffer2() *QByteArray {
	return newQByteArray_U(unsafe.Pointer(C.QBuffer_Buffer2(this.h)))
}

func (this *QBuffer) SetBuffer(a *QByteArray) {
	C.QBuffer_SetBuffer(this.h, a.cPointer())
}

func (this *QBuffer) SetData(data *QByteArray) {
	C.QBuffer_SetData(this.h, data.cPointer())
}

func (this *QBuffer) SetData2(data string, lenVal int) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QBuffer_SetData2(this.h, data_Cstring, (C.int)(lenVal))
}

func (this *QBuffer) Data() *QByteArray {
	return newQByteArray_U(unsafe.Pointer(C.QBuffer_Data(this.h)))
}

func (this *QBuffer) Open(openMode int) bool {
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
	var _ms *C.struct_miqt_string = C.QBuffer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QBuffer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QBuffer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QBuffer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QBuffer_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QBuffer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QBuffer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
