package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qarraydata.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QArrayData struct {
	h *C.QArrayData
}

func (this *QArrayData) cPointer() *C.QArrayData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQArrayData(h *C.QArrayData) *QArrayData {
	return &QArrayData{h: h}
}

func newQArrayData_U(h unsafe.Pointer) *QArrayData {
	return newQArrayData((*C.QArrayData)(h))
}

func (this *QArrayData) IsMutable() bool {
	ret := C.QArrayData_IsMutable(this.h)
	return (bool)(ret)
}

func (this *QArrayData) DetachCapacity(newSize uint64) uint64 {
	ret := C.QArrayData_DetachCapacity(this.h, (C.size_t)(newSize))
	return (uint64)(ret)
}

func QArrayData_Deallocate(data *QArrayData, objectSize uint64, alignment uint64) {
	C.QArrayData_Deallocate(data.cPointer(), (C.size_t)(objectSize), (C.size_t)(alignment))
}

func QArrayData_SharedNull() *QArrayData {
	ret := C.QArrayData_SharedNull()
	return newQArrayData_U(unsafe.Pointer(ret))
}

func (this *QArrayData) Delete() {
	C.QArrayData_Delete(this.h)
}
