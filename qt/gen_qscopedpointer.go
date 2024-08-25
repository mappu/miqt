package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qscopedpointer.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QScopedPointerPodDeleter struct {
	h *C.QScopedPointerPodDeleter
}

func (this *QScopedPointerPodDeleter) cPointer() *C.QScopedPointerPodDeleter {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScopedPointerPodDeleter(h *C.QScopedPointerPodDeleter) *QScopedPointerPodDeleter {
	return &QScopedPointerPodDeleter{h: h}
}

func newQScopedPointerPodDeleter_U(h unsafe.Pointer) *QScopedPointerPodDeleter {
	return newQScopedPointerPodDeleter((*C.QScopedPointerPodDeleter)(h))
}

func (this *QScopedPointerPodDeleter) Delete() {
	C.QScopedPointerPodDeleter_Delete(this.h)
}
