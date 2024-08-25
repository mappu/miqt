package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qthreadstorage.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QThreadStorageData struct {
	h *C.QThreadStorageData
}

func (this *QThreadStorageData) cPointer() *C.QThreadStorageData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQThreadStorageData(h *C.QThreadStorageData) *QThreadStorageData {
	return &QThreadStorageData{h: h}
}

func newQThreadStorageData_U(h unsafe.Pointer) *QThreadStorageData {
	return newQThreadStorageData((*C.QThreadStorageData)(h))
}

// NewQThreadStorageData constructs a new QThreadStorageData object.
func NewQThreadStorageData(param1 *QThreadStorageData) *QThreadStorageData {
	ret := C.QThreadStorageData_new(param1.cPointer())
	return newQThreadStorageData(ret)
}

func (this *QThreadStorageData) Delete() {
	C.QThreadStorageData_Delete(this.h)
}
