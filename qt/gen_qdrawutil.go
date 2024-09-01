package qt

/*

#include "gen_qdrawutil.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QTileRules struct {
	h *C.QTileRules
}

func (this *QTileRules) cPointer() *C.QTileRules {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTileRules(h *C.QTileRules) *QTileRules {
	if h == nil {
		return nil
	}
	return &QTileRules{h: h}
}

func newQTileRules_U(h unsafe.Pointer) *QTileRules {
	return newQTileRules((*C.QTileRules)(h))
}

// NewQTileRules constructs a new QTileRules object.
func NewQTileRules(horizontalRule uintptr, verticalRule uintptr) *QTileRules {
	ret := C.QTileRules_new((C.uintptr_t)(horizontalRule), (C.uintptr_t)(verticalRule))
	return newQTileRules(ret)
}

// NewQTileRules2 constructs a new QTileRules object.
func NewQTileRules2() *QTileRules {
	ret := C.QTileRules_new2()
	return newQTileRules(ret)
}

// NewQTileRules3 constructs a new QTileRules object.
func NewQTileRules3(param1 *QTileRules) *QTileRules {
	ret := C.QTileRules_new3(param1.cPointer())
	return newQTileRules(ret)
}

// NewQTileRules4 constructs a new QTileRules object.
func NewQTileRules4(rule uintptr) *QTileRules {
	ret := C.QTileRules_new4((C.uintptr_t)(rule))
	return newQTileRules(ret)
}

func (this *QTileRules) Delete() {
	C.QTileRules_Delete(this.h)
}
