package qt

/*

#include "gen_qstringliteral.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QStringDataPtr struct {
	h *C.QStringDataPtr
}

func (this *QStringDataPtr) cPointer() *C.QStringDataPtr {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStringDataPtr(h *C.QStringDataPtr) *QStringDataPtr {
	if h == nil {
		return nil
	}
	return &QStringDataPtr{h: h}
}

func newQStringDataPtr_U(h unsafe.Pointer) *QStringDataPtr {
	return newQStringDataPtr((*C.QStringDataPtr)(h))
}

func (this *QStringDataPtr) Delete() {
	C.QStringDataPtr_Delete(this.h)
}
