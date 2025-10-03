package qml

/*

#include "gen_qqmlinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlInfo struct {
	h *C.QQmlInfo
	*qt6.QDebug
}

func (this *QQmlInfo) cPointer() *C.QQmlInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlInfo constructs the type using only CGO pointers.
func newQQmlInfo(h *C.QQmlInfo) *QQmlInfo {
	if h == nil {
		return nil
	}
	var outptr_QDebug *C.QDebug = nil
	C.QQmlInfo_virtbase(h, &outptr_QDebug)

	return &QQmlInfo{h: h,
		QDebug: qt6.UnsafeNewQDebug(unsafe.Pointer(outptr_QDebug))}
}

// UnsafeNewQQmlInfo constructs the type using only unsafe pointers.
func UnsafeNewQQmlInfo(h unsafe.Pointer) *QQmlInfo {
	return newQQmlInfo((*C.QQmlInfo)(h))
}

// NewQQmlInfo constructs a new QQmlInfo object.
func NewQQmlInfo(param1 *QQmlInfo) *QQmlInfo {

	return newQQmlInfo(C.QQmlInfo_new(param1.cPointer()))
}

func (this *QQmlInfo) OperatorShiftLeft(t qt6.QChar) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeft(this.h, (*C.QChar)(t.UnsafePointer())))
}

func (this *QQmlInfo) OperatorShiftLeftWithBool(t bool) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithBool(this.h, (C.bool)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithChar(t int8) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithChar(this.h, (C.char)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithShort(t int16) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithShort(this.h, (C.short)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithUnsignedshort(t uint16) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithUnsignedshort(this.h, (C.ushort)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithInt(t int) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithInt(this.h, (C.int)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithUnsignedint(t uint) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithUnsignedint(this.h, (C.uint)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithLong(t int64) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithLong(this.h, (C.long)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithUnsignedlong(t uint64) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithUnsignedlong(this.h, (C.ulong)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithQint64(t int64) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQint64(this.h, (C.longlong)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithQuint64(t uint64) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQuint64(this.h, (C.ulonglong)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithFloat(t float32) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithFloat(this.h, (C.float)(t)))
}

func (this *QQmlInfo) OperatorShiftLeftWithDouble(t float64) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithDouble(this.h, (C.double)(t)))
}

func (this *QQmlInfo) OperatorShiftLeft2(t string) *QQmlInfo {
	t_Cstring := C.CString(t)
	defer C.free(unsafe.Pointer(t_Cstring))
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeft2(this.h, t_Cstring))
}

func (this *QQmlInfo) OperatorShiftLeftWithQString(t string) *QQmlInfo {
	t_ms := C.struct_miqt_string{}
	t_ms.data = C.CString(t)
	t_ms.len = C.size_t(len(t))
	defer C.free(unsafe.Pointer(t_ms.data))
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQString(this.h, t_ms))
}

func (this *QQmlInfo) OperatorShiftLeftWithQByteArray(t []byte) *QQmlInfo {
	t_alias := C.struct_miqt_string{}
	if len(t) > 0 {
		t_alias.data = (*C.char)(unsafe.Pointer(&t[0]))
	} else {
		t_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	t_alias.len = C.size_t(len(t))
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQByteArray(this.h, t_alias))
}

func (this *QQmlInfo) OperatorShiftLeftWithVoid(t unsafe.Pointer) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithVoid(this.h, t))
}

func (this *QQmlInfo) OperatorShiftLeftWithQUrl(t *qt6.QUrl) *QQmlInfo {
	return newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQUrl(this.h, (*C.QUrl)(t.UnsafePointer())))
}

func (this *QQmlInfo) OperatorAssign(param1 *QQmlInfo) {
	C.QQmlInfo_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QQmlInfo) Delete() {
	C.QQmlInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
