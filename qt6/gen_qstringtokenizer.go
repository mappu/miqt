package qt6

/*

#include "gen_qstringtokenizer.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QStringTokenizerBaseBase struct {
	h *C.QStringTokenizerBaseBase
}

func (this *QStringTokenizerBaseBase) cPointer() *C.QStringTokenizerBaseBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringTokenizerBaseBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQStringTokenizerBaseBase(h *C.QStringTokenizerBaseBase) *QStringTokenizerBaseBase {
	if h == nil {
		return nil
	}
	return &QStringTokenizerBaseBase{h: h}
}

func UnsafeNewQStringTokenizerBaseBase(h unsafe.Pointer) *QStringTokenizerBaseBase {
	return newQStringTokenizerBaseBase((*C.QStringTokenizerBaseBase)(h))
}

// NewQStringTokenizerBaseBase constructs a new QStringTokenizerBaseBase object.
func NewQStringTokenizerBaseBase(param1 *QStringTokenizerBaseBase) *QStringTokenizerBaseBase {
	ret := C.QStringTokenizerBaseBase_new(param1.cPointer())
	return newQStringTokenizerBaseBase(ret)
}
