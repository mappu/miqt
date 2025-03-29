package charts6

/*

#include "gen_qbarmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QBarModelMapper struct {
	h *C.QBarModelMapper
	*qt6.QObject
}

func (this *QBarModelMapper) cPointer() *C.QBarModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBarModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBarModelMapper constructs the type using only CGO pointers.
func newQBarModelMapper(h *C.QBarModelMapper) *QBarModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QBarModelMapper_virtbase(h, &outptr_QObject)

	return &QBarModelMapper{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQBarModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQBarModelMapper(h unsafe.Pointer) *QBarModelMapper {
	return newQBarModelMapper((*C.QBarModelMapper)(h))
}

func (this *QBarModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QBarModelMapper_metaObject(this.h)))
}

func (this *QBarModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBarModelMapper_metacast(this.h, param1_Cstring))
}

func QBarModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBarModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBarModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBarModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBarModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBarModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QBarModelMapper) Delete() {
	C.QBarModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBarModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QBarModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
