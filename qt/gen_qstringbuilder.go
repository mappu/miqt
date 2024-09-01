package qt

/*

#include "gen_qstringbuilder.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QAbstractConcatenable struct {
	h *C.QAbstractConcatenable
}

func (this *QAbstractConcatenable) cPointer() *C.QAbstractConcatenable {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractConcatenable(h *C.QAbstractConcatenable) *QAbstractConcatenable {
	if h == nil {
		return nil
	}
	return &QAbstractConcatenable{h: h}
}

func newQAbstractConcatenable_U(h unsafe.Pointer) *QAbstractConcatenable {
	return newQAbstractConcatenable((*C.QAbstractConcatenable)(h))
}

func (this *QAbstractConcatenable) Delete() {
	C.QAbstractConcatenable_Delete(this.h)
}
