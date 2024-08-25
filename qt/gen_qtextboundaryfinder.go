package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtextboundaryfinder.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QTextBoundaryFinder struct {
	h *C.QTextBoundaryFinder
}

func (this *QTextBoundaryFinder) cPointer() *C.QTextBoundaryFinder {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextBoundaryFinder(h *C.QTextBoundaryFinder) *QTextBoundaryFinder {
	return &QTextBoundaryFinder{h: h}
}

func newQTextBoundaryFinder_U(h unsafe.Pointer) *QTextBoundaryFinder {
	return newQTextBoundaryFinder((*C.QTextBoundaryFinder)(h))
}

// NewQTextBoundaryFinder constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder() *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new()
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder2 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder2(other *QTextBoundaryFinder) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new2(other.cPointer())
	return newQTextBoundaryFinder(ret)
}

func (this *QTextBoundaryFinder) OperatorAssign(other *QTextBoundaryFinder) {
	C.QTextBoundaryFinder_OperatorAssign(this.h, other.cPointer())
}

func (this *QTextBoundaryFinder) IsValid() bool {
	ret := C.QTextBoundaryFinder_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextBoundaryFinder) String() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBoundaryFinder_String(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextBoundaryFinder) ToStart() {
	C.QTextBoundaryFinder_ToStart(this.h)
}

func (this *QTextBoundaryFinder) ToEnd() {
	C.QTextBoundaryFinder_ToEnd(this.h)
}

func (this *QTextBoundaryFinder) Position() int {
	ret := C.QTextBoundaryFinder_Position(this.h)
	return (int)(ret)
}

func (this *QTextBoundaryFinder) SetPosition(position int) {
	C.QTextBoundaryFinder_SetPosition(this.h, (C.int)(position))
}

func (this *QTextBoundaryFinder) ToNextBoundary() int {
	ret := C.QTextBoundaryFinder_ToNextBoundary(this.h)
	return (int)(ret)
}

func (this *QTextBoundaryFinder) ToPreviousBoundary() int {
	ret := C.QTextBoundaryFinder_ToPreviousBoundary(this.h)
	return (int)(ret)
}

func (this *QTextBoundaryFinder) IsAtBoundary() bool {
	ret := C.QTextBoundaryFinder_IsAtBoundary(this.h)
	return (bool)(ret)
}

func (this *QTextBoundaryFinder) Delete() {
	C.QTextBoundaryFinder_Delete(this.h)
}
