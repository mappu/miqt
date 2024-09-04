package qt

/*

#include "gen_qtextboundaryfinder.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QTextBoundaryFinder__BoundaryType int

const (
	QTextBoundaryFinder__BoundaryType__Grapheme QTextBoundaryFinder__BoundaryType = 0
	QTextBoundaryFinder__BoundaryType__Word     QTextBoundaryFinder__BoundaryType = 1
	QTextBoundaryFinder__BoundaryType__Sentence QTextBoundaryFinder__BoundaryType = 2
	QTextBoundaryFinder__BoundaryType__Line     QTextBoundaryFinder__BoundaryType = 3
)

type QTextBoundaryFinder__BoundaryReason int

const (
	QTextBoundaryFinder__BoundaryReason__NotAtBoundary    QTextBoundaryFinder__BoundaryReason = 0
	QTextBoundaryFinder__BoundaryReason__BreakOpportunity QTextBoundaryFinder__BoundaryReason = 31
	QTextBoundaryFinder__BoundaryReason__StartOfItem      QTextBoundaryFinder__BoundaryReason = 32
	QTextBoundaryFinder__BoundaryReason__EndOfItem        QTextBoundaryFinder__BoundaryReason = 64
	QTextBoundaryFinder__BoundaryReason__MandatoryBreak   QTextBoundaryFinder__BoundaryReason = 128
	QTextBoundaryFinder__BoundaryReason__SoftHyphen       QTextBoundaryFinder__BoundaryReason = 256
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
func NewQTextBoundaryFinder3(typeVal QTextBoundaryFinder__BoundaryType, stringVal string) *QTextBoundaryFinder {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QTextBoundaryFinder_new3((C.uintptr_t)(typeVal), stringVal_Cstring, C.size_t(len(stringVal)))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder4 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder4(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new4((C.uintptr_t)(typeVal), chars.cPointer(), (C.int)(length))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder5 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder5(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int, buffer *byte) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new5((C.uintptr_t)(typeVal), chars.cPointer(), (C.int)(length), (*C.uchar)(unsafe.Pointer(buffer)))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder6 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder6(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int, buffer *byte, bufferSize int) *QTextBoundaryFinder {
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

func (this *QTextBoundaryFinder) Type() QTextBoundaryFinder__BoundaryType {
	ret := C.QTextBoundaryFinder_Type(this.h)
	return (QTextBoundaryFinder__BoundaryType)(ret)
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
