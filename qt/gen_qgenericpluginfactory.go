package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgenericpluginfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QGenericPluginFactory struct {
	h *C.QGenericPluginFactory
}

func (this *QGenericPluginFactory) cPointer() *C.QGenericPluginFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGenericPluginFactory(h *C.QGenericPluginFactory) *QGenericPluginFactory {
	if h == nil {
		return nil
	}
	return &QGenericPluginFactory{h: h}
}

func newQGenericPluginFactory_U(h unsafe.Pointer) *QGenericPluginFactory {
	return newQGenericPluginFactory((*C.QGenericPluginFactory)(h))
}

func QGenericPluginFactory_Keys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QGenericPluginFactory_Keys(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGenericPluginFactory_Create(param1 string, param2 string) *QObject {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	param2_Cstring := C.CString(param2)
	defer C.free(unsafe.Pointer(param2_Cstring))
	ret := C.QGenericPluginFactory_Create(param1_Cstring, C.ulong(len(param1)), param2_Cstring, C.ulong(len(param2)))
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QGenericPluginFactory) Delete() {
	C.QGenericPluginFactory_Delete(this.h)
}
