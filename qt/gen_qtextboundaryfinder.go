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
	if h == nil {
		return nil
	}
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

// NewQTextBoundaryFinder3 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder3(typeVal uintptr, stringVal string) *QTextBoundaryFinder {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QTextBoundaryFinder_new3((C.uintptr_t)(typeVal), stringVal_Cstring, C.ulong(len(stringVal)))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder4 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder4(typeVal uintptr, chars *QChar, length int) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new4((C.uintptr_t)(typeVal), chars.cPointer(), (C.int)(length))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder5 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder5(typeVal uintptr, chars *QChar, length int, buffer *byte) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new5((C.uintptr_t)(typeVal), chars.cPointer(), (C.int)(length), (*C.uchar)(unsafe.Pointer(buffer)))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder6 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder6(typeVal uintptr, chars *QChar, length int, buffer *byte, bufferSize int) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new6((C.uintptr_t)(typeVal), chars.cPointer(), (C.int)(length), (*C.uchar)(unsafe.Pointer(buffer)), (C.int)(bufferSize))
	return newQTextBoundaryFinder(ret)
}

func (this *QTextBoundaryFinder) OperatorAssign(other *QTextBoundaryFinder) {
	C.QTextBoundaryFinder_OperatorAssign(this.h, other.cPointer())
}

func (this *QTextBoundaryFinder) IsValid() bool {
	ret := C.QTextBoundaryFinder_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextBoundaryFinder) Type() uintptr {
	ret := C.QTextBoundaryFinder_Type(this.h)
	return (uintptr)(ret)
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

func (this *QTextBoundaryFinder) BoundaryReasons() int {
	ret := C.QTextBoundaryFinder_BoundaryReasons(this.h)
	return (int)(ret)
}

func (this *QTextBoundaryFinder) Delete() {
	C.QTextBoundaryFinder_Delete(this.h)
}
