package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpictureformatplugin.h"
#include <stdlib.h>

*/
import "C"

import (
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
	return &QPictureFormatPlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQPictureFormatPlugin_U(h unsafe.Pointer) *QPictureFormatPlugin {
	return newQPictureFormatPlugin((*C.QPictureFormatPlugin)(h))
}

func (this *QPictureFormatPlugin) MetaObject() *QMetaObject {
	ret := C.QPictureFormatPlugin_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPictureFormatPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPictureFormatPlugin_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPictureFormatPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPictureFormatPlugin_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPictureFormatPlugin) LoadPicture(format string, filename string, pic *QPicture) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QPictureFormatPlugin_LoadPicture(this.h, format_Cstring, C.ulong(len(format)), filename_Cstring, C.ulong(len(filename)), pic.cPointer())
	return (bool)(ret)
}

func (this *QPictureFormatPlugin) SavePicture(format string, filename string, pic *QPicture) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QPictureFormatPlugin_SavePicture(this.h, format_Cstring, C.ulong(len(format)), filename_Cstring, C.ulong(len(filename)), pic.cPointer())
	return (bool)(ret)
}

func (this *QPictureFormatPlugin) InstallIOHandler(format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPictureFormatPlugin_InstallIOHandler(this.h, format_Cstring, C.ulong(len(format)))
	return (bool)(ret)
}

func QPictureFormatPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPictureFormatPlugin_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPictureFormatPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPictureFormatPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPictureFormatPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPictureFormatPlugin_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPictureFormatPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPictureFormatPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPictureFormatPlugin) Delete() {
	C.QPictureFormatPlugin_Delete(this.h)
}
