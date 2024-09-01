package qt

/*

#include "gen_qcontiguouscache.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QContiguousCacheData struct {
	h *C.QContiguousCacheData
}

func (this *QContiguousCacheData) cPointer() *C.QContiguousCacheData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQContiguousCacheData(h *C.QContiguousCacheData) *QContiguousCacheData {
	if h == nil {
		return nil
	}
	return &QContiguousCacheData{h: h}
}

func newQContiguousCacheData_U(h unsafe.Pointer) *QContiguousCacheData {
	return newQContiguousCacheData((*C.QContiguousCacheData)(h))
}

func QContiguousCacheData_AllocateData(size int, alignment int) *QContiguousCacheData {
	ret := C.QContiguousCacheData_AllocateData((C.int)(size), (C.int)(alignment))
	return newQContiguousCacheData_U(unsafe.Pointer(ret))
}

func QContiguousCacheData_FreeData(data *QContiguousCacheData) {
	C.QContiguousCacheData_FreeData(data.cPointer())
}

func (this *QContiguousCacheData) Delete() {
	C.QContiguousCacheData_Delete(this.h)
}
