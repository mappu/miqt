package qt

/*

#include "gen_qrunnable.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QRunnable struct {
	h *C.QRunnable
}

func (this *QRunnable) cPointer() *C.QRunnable {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRunnable(h *C.QRunnable) *QRunnable {
	if h == nil {
		return nil
	}
	return &QRunnable{h: h}
}

func newQRunnable_U(h unsafe.Pointer) *QRunnable {
	return newQRunnable((*C.QRunnable)(h))
}

func (this *QRunnable) Run() {
	C.QRunnable_Run(this.h)
}

func (this *QRunnable) AutoDelete() bool {
	ret := C.QRunnable_AutoDelete(this.h)
	return (bool)(ret)
}

func (this *QRunnable) SetAutoDelete(_autoDelete bool) {
	C.QRunnable_SetAutoDelete(this.h, (C.bool)(_autoDelete))
}

func (this *QRunnable) OperatorAssign(param1 *QRunnable) {
	C.QRunnable_OperatorAssign(this.h, param1.cPointer())
}

func (this *QRunnable) Delete() {
	C.QRunnable_Delete(this.h)
}
