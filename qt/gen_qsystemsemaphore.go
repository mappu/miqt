package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsystemsemaphore.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QSystemSemaphore struct {
	h *C.QSystemSemaphore
}

func (this *QSystemSemaphore) cPointer() *C.QSystemSemaphore {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSystemSemaphore(h *C.QSystemSemaphore) *QSystemSemaphore {
	return &QSystemSemaphore{h: h}
}

func newQSystemSemaphore_U(h unsafe.Pointer) *QSystemSemaphore {
	return newQSystemSemaphore((*C.QSystemSemaphore)(h))
}

func (this *QSystemSemaphore) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemSemaphore_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSystemSemaphore) Acquire() bool {
	ret := C.QSystemSemaphore_Acquire(this.h)
	return (bool)(ret)
}

func (this *QSystemSemaphore) Release() bool {
	ret := C.QSystemSemaphore_Release(this.h)
	return (bool)(ret)
}

func (this *QSystemSemaphore) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemSemaphore_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSystemSemaphore) Release1(n int) bool {
	ret := C.QSystemSemaphore_Release1(this.h, (C.int)(n))
	return (bool)(ret)
}

func (this *QSystemSemaphore) Delete() {
	C.QSystemSemaphore_Delete(this.h)
}
