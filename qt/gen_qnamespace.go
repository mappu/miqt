package qt

/*

#include "gen_qnamespace.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QInternal struct {
	h *C.QInternal
}

func (this *QInternal) cPointer() *C.QInternal {
	if this == nil {
		return nil
	}
	return this.h
}

func newQInternal(h *C.QInternal) *QInternal {
	if h == nil {
		return nil
	}
	return &QInternal{h: h}
}

func newQInternal_U(h unsafe.Pointer) *QInternal {
	return newQInternal((*C.QInternal)(h))
}

func (this *QInternal) Delete() {
	C.QInternal_Delete(this.h)
}
