package qt

/*

#include "gen_qgenericplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QGenericPlugin struct {
	h *C.QGenericPlugin
	*QObject
}

func (this *QGenericPlugin) cPointer() *C.QGenericPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGenericPlugin(h *C.QGenericPlugin) *QGenericPlugin {
	if h == nil {
		return nil
	}
	return &QGenericPlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQGenericPlugin_U(h unsafe.Pointer) *QGenericPlugin {
	return newQGenericPlugin((*C.QGenericPlugin)(h))
}

func (this *QGenericPlugin) MetaObject() *QMetaObject {
	ret := C.QGenericPlugin_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGenericPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGenericPlugin_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGenericPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGenericPlugin_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGenericPlugin) Create(name string, spec string) *QObject {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	spec_Cstring := C.CString(spec)
	defer C.free(unsafe.Pointer(spec_Cstring))
	ret := C.QGenericPlugin_Create(this.h, name_Cstring, C.size_t(len(name)), spec_Cstring, C.size_t(len(spec)))
	return newQObject_U(unsafe.Pointer(ret))
}

func QGenericPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGenericPlugin_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGenericPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGenericPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGenericPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGenericPlugin_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGenericPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGenericPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGenericPlugin) Delete() {
	C.QGenericPlugin_Delete(this.h)
}
