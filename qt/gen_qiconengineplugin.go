package qt

/*

#include "gen_qiconengineplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QIconEnginePlugin struct {
	h *C.QIconEnginePlugin
	*QObject
}

func (this *QIconEnginePlugin) cPointer() *C.QIconEnginePlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIconEnginePlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQIconEnginePlugin(h *C.QIconEnginePlugin) *QIconEnginePlugin {
	if h == nil {
		return nil
	}
	return &QIconEnginePlugin{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQIconEnginePlugin(h unsafe.Pointer) *QIconEnginePlugin {
	return newQIconEnginePlugin((*C.QIconEnginePlugin)(h))
}

func (this *QIconEnginePlugin) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QIconEnginePlugin_MetaObject(this.h)))
}

func (this *QIconEnginePlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QIconEnginePlugin_Metacast(this.h, param1_Cstring)
}

func QIconEnginePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QIconEnginePlugin_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QIconEnginePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QIconEnginePlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QIconEnginePlugin) Create() *QIconEngine {
	return UnsafeNewQIconEngine(unsafe.Pointer(C.QIconEnginePlugin_Create(this.h)))
}

func QIconEnginePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QIconEnginePlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QIconEnginePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QIconEnginePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QIconEnginePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QIconEnginePlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QIconEnginePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QIconEnginePlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QIconEnginePlugin) Create1(filename string) *QIconEngine {
	filename_ms := libmiqt.Strdupg(filename)
	defer C.free(filename_ms)
	return UnsafeNewQIconEngine(unsafe.Pointer(C.QIconEnginePlugin_Create1(this.h, (*C.struct_miqt_string)(filename_ms))))
}

// Delete this object from C++ memory.
func (this *QIconEnginePlugin) Delete() {
	C.QIconEnginePlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIconEnginePlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QIconEnginePlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
