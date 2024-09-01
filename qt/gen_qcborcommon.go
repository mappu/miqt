package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcborcommon.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QCborError struct {
	h *C.QCborError
}

func (this *QCborError) cPointer() *C.QCborError {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCborError(h *C.QCborError) *QCborError {
	if h == nil {
		return nil
	}
	return &QCborError{h: h}
}

func newQCborError_U(h unsafe.Pointer) *QCborError {
	return newQCborError((*C.QCborError)(h))
}

func (this *QCborError) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborError_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborError) Delete() {
	C.QCborError_Delete(this.h)
}
