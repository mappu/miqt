package qt

/*

#include "gen_qpictureformatplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPictureFormatPlugin struct {
	h *C.QPictureFormatPlugin
	*QObject
}

func (this *QPictureFormatPlugin) cPointer() *C.QPictureFormatPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPictureFormatPlugin(h *C.QPictureFormatPlugin) *QPictureFormatPlugin {
	if h == nil {
		return nil
	}
	return &QPictureFormatPlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQPictureFormatPlugin_U(h unsafe.Pointer) *QPictureFormatPlugin {
	return newQPictureFormatPlugin((*C.QPictureFormatPlugin)(h))
}

func (this *QPictureFormatPlugin) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QPictureFormatPlugin_MetaObject(this.h)))
}

func (this *QPictureFormatPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QPictureFormatPlugin_Metacast(this.h, param1_Cstring)
}

func QPictureFormatPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPictureFormatPlugin_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPictureFormatPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPictureFormatPlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPictureFormatPlugin) LoadPicture(format string, filename string, pic *QPicture) bool {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	return (bool)(C.QPictureFormatPlugin_LoadPicture(this.h, (*C.struct_miqt_string)(format_ms), (*C.struct_miqt_string)(filename_ms), pic.cPointer()))
}

func (this *QPictureFormatPlugin) SavePicture(format string, filename string, pic *QPicture) bool {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	return (bool)(C.QPictureFormatPlugin_SavePicture(this.h, (*C.struct_miqt_string)(format_ms), (*C.struct_miqt_string)(filename_ms), pic.cPointer()))
}

func (this *QPictureFormatPlugin) InstallIOHandler(format string) bool {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	return (bool)(C.QPictureFormatPlugin_InstallIOHandler(this.h, (*C.struct_miqt_string)(format_ms)))
}

func QPictureFormatPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPictureFormatPlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPictureFormatPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPictureFormatPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPictureFormatPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPictureFormatPlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPictureFormatPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPictureFormatPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPictureFormatPlugin) Delete() {
	C.QPictureFormatPlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPictureFormatPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QPictureFormatPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
