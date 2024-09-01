package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qshareddata.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QSharedData struct {
	h *C.QSharedData
}

func (this *QSharedData) cPointer() *C.QSharedData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSharedData(h *C.QSharedData) *QSharedData {
	if h == nil {
		return nil
	}
	return &QSharedData{h: h}
}

func newQSharedData_U(h unsafe.Pointer) *QSharedData {
	return newQSharedData((*C.QSharedData)(h))
}

// NewQSharedData constructs a new QSharedData object.
func NewQSharedData() *QSharedData {
	ret := C.QSharedData_new()
	return newQSharedData(ret)
}

// NewQSharedData2 constructs a new QSharedData object.
func NewQSharedData2(param1 *QSharedData) *QSharedData {
	ret := C.QSharedData_new2(param1.cPointer())
	return newQSharedData(ret)
}

func (this *QSharedData) Delete() {
	C.QSharedData_Delete(this.h)
}
