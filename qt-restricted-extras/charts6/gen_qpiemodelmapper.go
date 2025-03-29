package charts6

/*

#include "gen_qpiemodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QPieModelMapper struct {
	h *C.QPieModelMapper
	*qt6.QObject
}

func (this *QPieModelMapper) cPointer() *C.QPieModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPieModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPieModelMapper constructs the type using only CGO pointers.
func newQPieModelMapper(h *C.QPieModelMapper) *QPieModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QPieModelMapper_virtbase(h, &outptr_QObject)

	return &QPieModelMapper{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQPieModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQPieModelMapper(h unsafe.Pointer) *QPieModelMapper {
	return newQPieModelMapper((*C.QPieModelMapper)(h))
}

func (this *QPieModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPieModelMapper_metaObject(this.h)))
}

func (this *QPieModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPieModelMapper_metacast(this.h, param1_Cstring))
}

func QPieModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPieModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPieModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPieModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPieModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPieModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPieModelMapper) Delete() {
	C.QPieModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPieModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QPieModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
