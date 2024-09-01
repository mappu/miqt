package qt

/*

#include "gen_qiconengineplugin.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQIconEnginePlugin(h *C.QIconEnginePlugin) *QIconEnginePlugin {
	if h == nil {
		return nil
	}
	return &QIconEnginePlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQIconEnginePlugin_U(h unsafe.Pointer) *QIconEnginePlugin {
	return newQIconEnginePlugin((*C.QIconEnginePlugin)(h))
}

func (this *QIconEnginePlugin) MetaObject() *QMetaObject {
	ret := C.QIconEnginePlugin_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QIconEnginePlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIconEnginePlugin_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIconEnginePlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIconEnginePlugin_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIconEnginePlugin) Create() *QIconEngine {
	ret := C.QIconEnginePlugin_Create(this.h)
	return newQIconEngine_U(unsafe.Pointer(ret))
}

func QIconEnginePlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIconEnginePlugin_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIconEnginePlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIconEnginePlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIconEnginePlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIconEnginePlugin_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIconEnginePlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIconEnginePlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIconEnginePlugin) Create1(filename string) *QIconEngine {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QIconEnginePlugin_Create1(this.h, filename_Cstring, C.size_t(len(filename)))
	return newQIconEngine_U(unsafe.Pointer(ret))
}

func (this *QIconEnginePlugin) Delete() {
	C.QIconEnginePlugin_Delete(this.h)
}
