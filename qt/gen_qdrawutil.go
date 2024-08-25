package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
	return &QTileRules{h: h}
}

func newQTileRules_U(h unsafe.Pointer) *QTileRules {
	return newQTileRules((*C.QTileRules)(h))
}

// NewQTileRules constructs a new QTileRules object.
func NewQTileRules(param1 *QTileRules) *QTileRules {
	ret := C.QTileRules_new(param1.cPointer())
	return newQTileRules(ret)
}

func (this *QTileRules) Delete() {
	C.QTileRules_Delete(this.h)
}
