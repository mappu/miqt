package charts6

/*

#include "gen_qboxplotmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QBoxPlotModelMapper struct {
	h *C.QBoxPlotModelMapper
	*qt6.QObject
}

func (this *QBoxPlotModelMapper) cPointer() *C.QBoxPlotModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBoxPlotModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBoxPlotModelMapper constructs the type using only CGO pointers.
func newQBoxPlotModelMapper(h *C.QBoxPlotModelMapper) *QBoxPlotModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QBoxPlotModelMapper_virtbase(h, &outptr_QObject)

	return &QBoxPlotModelMapper{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQBoxPlotModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQBoxPlotModelMapper(h unsafe.Pointer) *QBoxPlotModelMapper {
	return newQBoxPlotModelMapper((*C.QBoxPlotModelMapper)(h))
}

func (this *QBoxPlotModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QBoxPlotModelMapper_metaObject(this.h)))
}

func (this *QBoxPlotModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBoxPlotModelMapper_metacast(this.h, param1_Cstring))
}

func QBoxPlotModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxPlotModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxPlotModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QBoxPlotModelMapper) Delete() {
	C.QBoxPlotModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBoxPlotModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QBoxPlotModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
