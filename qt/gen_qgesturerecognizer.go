package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgesturerecognizer.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QGestureRecognizer struct {
	h *C.QGestureRecognizer
}

func (this *QGestureRecognizer) cPointer() *C.QGestureRecognizer {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGestureRecognizer(h *C.QGestureRecognizer) *QGestureRecognizer {
	return &QGestureRecognizer{h: h}
}

func newQGestureRecognizer_U(h unsafe.Pointer) *QGestureRecognizer {
	return newQGestureRecognizer((*C.QGestureRecognizer)(h))
}

func (this *QGestureRecognizer) Create(target *QObject) *QGesture {
	ret := C.QGestureRecognizer_Create(this.h, target.cPointer())
	return newQGesture_U(unsafe.Pointer(ret))
}

func (this *QGestureRecognizer) Reset(state *QGesture) {
	C.QGestureRecognizer_Reset(this.h, state.cPointer())
}

func (this *QGestureRecognizer) OperatorAssign(param1 *QGestureRecognizer) {
	C.QGestureRecognizer_OperatorAssign(this.h, param1.cPointer())
}

func (this *QGestureRecognizer) Delete() {
	C.QGestureRecognizer_Delete(this.h)
}
