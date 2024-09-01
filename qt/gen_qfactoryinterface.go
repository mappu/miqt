package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfactoryinterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QFactoryInterface struct {
	h *C.QFactoryInterface
}

func (this *QFactoryInterface) cPointer() *C.QFactoryInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFactoryInterface(h *C.QFactoryInterface) *QFactoryInterface {
	if h == nil {
		return nil
	}
	return &QFactoryInterface{h: h}
}

func newQFactoryInterface_U(h unsafe.Pointer) *QFactoryInterface {
	return newQFactoryInterface((*C.QFactoryInterface)(h))
}

func (this *QFactoryInterface) Keys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFactoryInterface_Keys(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFactoryInterface) Delete() {
	C.QFactoryInterface_Delete(this.h)
}
