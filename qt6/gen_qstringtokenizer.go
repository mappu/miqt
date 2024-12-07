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
	h          *C.QStringTokenizerBaseBase
	isSubclass bool
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

// newQStringTokenizerBaseBase constructs the type using only CGO pointers.
func newQStringTokenizerBaseBase(h *C.QStringTokenizerBaseBase) *QStringTokenizerBaseBase {
	if h == nil {
		return nil
	}

	return &QStringTokenizerBaseBase{h: h}
}

// UnsafeNewQStringTokenizerBaseBase constructs the type using only unsafe pointers.
func UnsafeNewQStringTokenizerBaseBase(h unsafe.Pointer) *QStringTokenizerBaseBase {
	return newQStringTokenizerBaseBase((*C.QStringTokenizerBaseBase)(h))
}

// NewQStringTokenizerBaseBase constructs a new QStringTokenizerBaseBase object.
func NewQStringTokenizerBaseBase(param1 *QStringTokenizerBaseBase) *QStringTokenizerBaseBase {

	ret := newQStringTokenizerBaseBase(C.QStringTokenizerBaseBase_new(param1.cPointer()))
	ret.isSubclass = true
	return ret
}
