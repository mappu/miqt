package qt

/*

#include "gen_qtextboundaryfinder.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextBoundaryFinder__BoundaryType int

const (
	QTextBoundaryFinder__Grapheme QTextBoundaryFinder__BoundaryType = 0
	QTextBoundaryFinder__Word     QTextBoundaryFinder__BoundaryType = 1
	QTextBoundaryFinder__Sentence QTextBoundaryFinder__BoundaryType = 2
	QTextBoundaryFinder__Line     QTextBoundaryFinder__BoundaryType = 3
)

type QTextBoundaryFinder__BoundaryReason int

const (
	QTextBoundaryFinder__NotAtBoundary    QTextBoundaryFinder__BoundaryReason = 0
	QTextBoundaryFinder__BreakOpportunity QTextBoundaryFinder__BoundaryReason = 31
	QTextBoundaryFinder__StartOfItem      QTextBoundaryFinder__BoundaryReason = 32
	QTextBoundaryFinder__EndOfItem        QTextBoundaryFinder__BoundaryReason = 64
	QTextBoundaryFinder__MandatoryBreak   QTextBoundaryFinder__BoundaryReason = 128
	QTextBoundaryFinder__SoftHyphen       QTextBoundaryFinder__BoundaryReason = 256
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
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	ret := C.QTextBoundaryFinder_new3((C.int)(typeVal), (*C.struct_miqt_string)(stringVal_ms))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder4 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder4(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new4((C.int)(typeVal), chars.cPointer(), (C.int)(length))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder5 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder5(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int, buffer *byte) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new5((C.int)(typeVal), chars.cPointer(), (C.int)(length), (*C.uchar)(unsafe.Pointer(buffer)))
	return newQTextBoundaryFinder(ret)
}

// NewQTextBoundaryFinder6 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder6(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int, buffer *byte, bufferSize int) *QTextBoundaryFinder {
	ret := C.QTextBoundaryFinder_new6((C.int)(typeVal), chars.cPointer(), (C.int)(length), (*C.uchar)(unsafe.Pointer(buffer)), (C.int)(bufferSize))
	return newQTextBoundaryFinder(ret)
}

func (this *QTextBoundaryFinder) OperatorAssign(other *QTextBoundaryFinder) {
	C.QTextBoundaryFinder_OperatorAssign(this.h, other.cPointer())
}

func (this *QTextBoundaryFinder) IsValid() bool {
	return (bool)(C.QTextBoundaryFinder_IsValid(this.h))
}

func (this *QTextBoundaryFinder) Type() QTextBoundaryFinder__BoundaryType {
	return (QTextBoundaryFinder__BoundaryType)(C.QTextBoundaryFinder_Type(this.h))
}

func (this *QTextBoundaryFinder) String() string {
	var _ms *C.struct_miqt_string = C.QTextBoundaryFinder_String(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextBoundaryFinder) ToStart() {
	C.QTextBoundaryFinder_ToStart(this.h)
}

func (this *QTextBoundaryFinder) ToEnd() {
	C.QTextBoundaryFinder_ToEnd(this.h)
}

func (this *QTextBoundaryFinder) Position() int {
	return (int)(C.QTextBoundaryFinder_Position(this.h))
}

func (this *QTextBoundaryFinder) SetPosition(position int) {
	C.QTextBoundaryFinder_SetPosition(this.h, (C.int)(position))
}

func (this *QTextBoundaryFinder) ToNextBoundary() int {
	return (int)(C.QTextBoundaryFinder_ToNextBoundary(this.h))
}

func (this *QTextBoundaryFinder) ToPreviousBoundary() int {
	return (int)(C.QTextBoundaryFinder_ToPreviousBoundary(this.h))
}

func (this *QTextBoundaryFinder) IsAtBoundary() bool {
	return (bool)(C.QTextBoundaryFinder_IsAtBoundary(this.h))
}

func (this *QTextBoundaryFinder) BoundaryReasons() QTextBoundaryFinder__BoundaryReason {
	return (QTextBoundaryFinder__BoundaryReason)(C.QTextBoundaryFinder_BoundaryReasons(this.h))
}

// Delete this object from C++ memory.
func (this *QTextBoundaryFinder) Delete() {
	C.QTextBoundaryFinder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBoundaryFinder) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBoundaryFinder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
