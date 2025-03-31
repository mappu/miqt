package charts6

/*

#include "gen_qxymodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QXYModelMapper struct {
	h *C.QXYModelMapper
	*qt6.QObject
}

func (this *QXYModelMapper) cPointer() *C.QXYModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QXYModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXYModelMapper constructs the type using only CGO pointers.
func newQXYModelMapper(h *C.QXYModelMapper) *QXYModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QXYModelMapper_virtbase(h, &outptr_QObject)

	return &QXYModelMapper{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQXYModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQXYModelMapper(h unsafe.Pointer) *QXYModelMapper {
	return newQXYModelMapper((*C.QXYModelMapper)(h))
}

func (this *QXYModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QXYModelMapper_metaObject(this.h)))
}

func (this *QXYModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QXYModelMapper_metacast(this.h, param1_Cstring))
}

func QXYModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QXYModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QXYModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QXYModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QXYModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QXYModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QXYModelMapper) Delete() {
	C.QXYModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXYModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QXYModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
