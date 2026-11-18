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
	h  *C.QQmlInfo
	gc *[1]unsafe.Pointer
	*qt6.QDebug
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QQmlInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQQmlInfo(C.QQmlInfo_new(param1.cPointer()))
}

func (this *QQmlInfo) OperatorShiftLeft(t qt6.QChar) *QQmlInfo {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(t)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeft(this.h, (*C.QChar)(t.UnsafePointer())))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithBool(t bool) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithBool(this.h, (C.bool)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithChar(t int8) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithChar(this.h, (C.char)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithShort(t int16) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithShort(this.h, (C.short)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithUnsignedshort(t uint16) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithUnsignedshort(this.h, (C.ushort)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithInt(t int) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithInt(this.h, (C.int)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithUnsignedint(t uint) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithUnsignedint(this.h, (C.uint)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithLong(t int64) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithLong(this.h, (C.long)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithUnsignedlong(t uint64) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithUnsignedlong(this.h, (C.ulong)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithQint64(t int64) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQint64(this.h, (C.longlong)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithQuint64(t uint64) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQuint64(this.h, (C.ulonglong)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithFloat(t float32) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithFloat(this.h, (C.float)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithDouble(t float64) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithDouble(this.h, (C.double)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeft2(t string) *QQmlInfo {
	defer runtime.KeepAlive(this)
	t_Cstring := C.CString(t)
	defer C.free(unsafe.Pointer(t_Cstring))
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeft2(this.h, t_Cstring))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithQString(t string) *QQmlInfo {
	defer runtime.KeepAlive(this)
	t_ms := C.struct_miqt_string{}
	t_ms.data = C.CString(t)
	t_ms.len = C.size_t(len(t))
	defer C.free(unsafe.Pointer(t_ms.data))
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQString(this.h, t_ms))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithQByteArray(t []byte) *QQmlInfo {
	defer runtime.KeepAlive(this)
	t_alias := C.struct_miqt_string{}
	if len(t) > 0 {
		t_alias.data = (*C.char)(unsafe.Pointer(&t[0]))
	} else {
		t_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	t_alias.len = C.size_t(len(t))
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQByteArray(this.h, t_alias))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithVoid(t unsafe.Pointer) *QQmlInfo {
	defer runtime.KeepAlive(this)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithVoid(this.h, t))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorShiftLeftWithQUrl(t *qt6.QUrl) *QQmlInfo {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(t)
	_ret := newQQmlInfo(C.QQmlInfo_operatorShiftLeftWithQUrl(this.h, (*C.QUrl)(t.UnsafePointer())))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQmlInfo) OperatorAssign(param1 *QQmlInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QQmlInfo_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QQmlInfo) Delete() {
	C.QQmlInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QQmlInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QQmlInfo_delete((*C.QQmlInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QmlDebugWithMe(me *qt6.QObject) *QQmlInfo {
	defer runtime.KeepAlive(me)
	_goptr := newQQmlInfo(C.miqt_QmlDebugWithMe((*C.QObject)(me.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QmlDebug2(me *qt6.QObject, error *QQmlError) *QQmlInfo {
	defer runtime.KeepAlive(me)
	defer runtime.KeepAlive(error)
	_goptr := newQQmlInfo(C.miqt_QmlDebug2((*C.QObject)(me.UnsafePointer()), error.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QmlDebug3(me *qt6.QObject, errors []QQmlError) *QQmlInfo {
	defer runtime.KeepAlive(me)
	defer runtime.KeepAlive(errors)
	errors_CArray_ptr := (**C.QQmlError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray_ptr))
	errors_CArray := unsafe.Slice(errors_CArray_ptr, len(errors))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray_ptr)}
	_goptr := newQQmlInfo(C.miqt_QmlDebug3((*C.QObject)(me.UnsafePointer()), errors_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QmlInfoWithMe(me *qt6.QObject) *QQmlInfo {
	defer runtime.KeepAlive(me)
	_goptr := newQQmlInfo(C.miqt_QmlInfoWithMe((*C.QObject)(me.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QmlInfo2(me *qt6.QObject, error *QQmlError) *QQmlInfo {
	defer runtime.KeepAlive(me)
	defer runtime.KeepAlive(error)
	_goptr := newQQmlInfo(C.miqt_QmlInfo2((*C.QObject)(me.UnsafePointer()), error.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QmlInfo3(me *qt6.QObject, errors []QQmlError) *QQmlInfo {
	defer runtime.KeepAlive(me)
	defer runtime.KeepAlive(errors)
	errors_CArray_ptr := (**C.QQmlError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray_ptr))
	errors_CArray := unsafe.Slice(errors_CArray_ptr, len(errors))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray_ptr)}
	_goptr := newQQmlInfo(C.miqt_QmlInfo3((*C.QObject)(me.UnsafePointer()), errors_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QmlWarningWithMe(me *qt6.QObject) *QQmlInfo {
	defer runtime.KeepAlive(me)
	_goptr := newQQmlInfo(C.miqt_QmlWarningWithMe((*C.QObject)(me.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QmlWarning2(me *qt6.QObject, error *QQmlError) *QQmlInfo {
	defer runtime.KeepAlive(me)
	defer runtime.KeepAlive(error)
	_goptr := newQQmlInfo(C.miqt_QmlWarning2((*C.QObject)(me.UnsafePointer()), error.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QmlWarning3(me *qt6.QObject, errors []QQmlError) *QQmlInfo {
	defer runtime.KeepAlive(me)
	defer runtime.KeepAlive(errors)
	errors_CArray_ptr := (**C.QQmlError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray_ptr))
	errors_CArray := unsafe.Slice(errors_CArray_ptr, len(errors))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray_ptr)}
	_goptr := newQQmlInfo(C.miqt_QmlWarning3((*C.QObject)(me.UnsafePointer()), errors_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}
