package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qabstractnativeeventfilter.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QAbstractNativeEventFilter struct {
	h *C.QAbstractNativeEventFilter
}

func (this *QAbstractNativeEventFilter) cPointer() *C.QAbstractNativeEventFilter {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractNativeEventFilter(h *C.QAbstractNativeEventFilter) *QAbstractNativeEventFilter {
	return &QAbstractNativeEventFilter{h: h}
}

func newQAbstractNativeEventFilter_U(h unsafe.Pointer) *QAbstractNativeEventFilter {
	return newQAbstractNativeEventFilter((*C.QAbstractNativeEventFilter)(h))
}

func (this *QAbstractNativeEventFilter) Delete() {
	C.QAbstractNativeEventFilter_Delete(this.h)
}
