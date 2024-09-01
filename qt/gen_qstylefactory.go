package qt

/*

#include "gen_qstylefactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QStyleFactory struct {
	h *C.QStyleFactory
}

func (this *QStyleFactory) cPointer() *C.QStyleFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleFactory(h *C.QStyleFactory) *QStyleFactory {
	if h == nil {
		return nil
	}
	return &QStyleFactory{h: h}
}

func newQStyleFactory_U(h unsafe.Pointer) *QStyleFactory {
	return newQStyleFactory((*C.QStyleFactory)(h))
}

func QStyleFactory_Keys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QStyleFactory_Keys(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyleFactory_Create(param1 string) *QStyle {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QStyleFactory_Create(param1_Cstring, C.size_t(len(param1)))
	return newQStyle_U(unsafe.Pointer(ret))
}

func (this *QStyleFactory) Delete() {
	C.QStyleFactory_Delete(this.h)
}
