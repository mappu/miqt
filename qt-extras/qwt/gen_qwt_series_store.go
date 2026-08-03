package qwt

/*

#include "gen_qwt_series_store.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QwtAbstractSeriesStore struct {
	h *C.QwtAbstractSeriesStore
}

func (this *QwtAbstractSeriesStore) cPointer() *C.QwtAbstractSeriesStore {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtAbstractSeriesStore) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtAbstractSeriesStore constructs the type using only CGO pointers.
func newQwtAbstractSeriesStore(h *C.QwtAbstractSeriesStore) *QwtAbstractSeriesStore {
	if h == nil {
		return nil
	}

	return &QwtAbstractSeriesStore{h: h}
}

// UnsafeNewQwtAbstractSeriesStore constructs the type using only unsafe pointers.
func UnsafeNewQwtAbstractSeriesStore(h unsafe.Pointer) *QwtAbstractSeriesStore {
	return newQwtAbstractSeriesStore((*C.QwtAbstractSeriesStore)(h))
}

func (this *QwtAbstractSeriesStore) OperatorAssign(param1 *QwtAbstractSeriesStore) {
	C.QwtAbstractSeriesStore_operatorAssign(this.h, param1.cPointer())
}
