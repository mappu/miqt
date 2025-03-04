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

func (this *QTextBoundaryFinder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextBoundaryFinder constructs the type using only CGO pointers.
func newQTextBoundaryFinder(h *C.QTextBoundaryFinder) *QTextBoundaryFinder {
	if h == nil {
		return nil
	}

	return &QTextBoundaryFinder{h: h}
}

// UnsafeNewQTextBoundaryFinder constructs the type using only unsafe pointers.
func UnsafeNewQTextBoundaryFinder(h unsafe.Pointer) *QTextBoundaryFinder {
	return newQTextBoundaryFinder((*C.QTextBoundaryFinder)(h))
}

// NewQTextBoundaryFinder constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder() *QTextBoundaryFinder {

	return newQTextBoundaryFinder(C.QTextBoundaryFinder_new())
}

// NewQTextBoundaryFinder2 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder2(other *QTextBoundaryFinder) *QTextBoundaryFinder {

	return newQTextBoundaryFinder(C.QTextBoundaryFinder_new2(other.cPointer()))
}

// NewQTextBoundaryFinder3 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder3(typeVal QTextBoundaryFinder__BoundaryType, stringVal string) *QTextBoundaryFinder {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))

	return newQTextBoundaryFinder(C.QTextBoundaryFinder_new3((C.int)(typeVal), stringVal_ms))
}

// NewQTextBoundaryFinder4 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder4(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int) *QTextBoundaryFinder {

	return newQTextBoundaryFinder(C.QTextBoundaryFinder_new4((C.int)(typeVal), chars.cPointer(), (C.int)(length)))
}

// NewQTextBoundaryFinder5 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder5(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int, buffer *byte) *QTextBoundaryFinder {

	return newQTextBoundaryFinder(C.QTextBoundaryFinder_new5((C.int)(typeVal), chars.cPointer(), (C.int)(length), (*C.uchar)(unsafe.Pointer(buffer))))
}

// NewQTextBoundaryFinder6 constructs a new QTextBoundaryFinder object.
func NewQTextBoundaryFinder6(typeVal QTextBoundaryFinder__BoundaryType, chars *QChar, length int, buffer *byte, bufferSize int) *QTextBoundaryFinder {

	return newQTextBoundaryFinder(C.QTextBoundaryFinder_new6((C.int)(typeVal), chars.cPointer(), (C.int)(length), (*C.uchar)(unsafe.Pointer(buffer)), (C.int)(bufferSize)))
}

func (this *QTextBoundaryFinder) OperatorAssign(other *QTextBoundaryFinder) {
	C.QTextBoundaryFinder_operatorAssign(this.h, other.cPointer())
}

func (this *QTextBoundaryFinder) IsValid() bool {
	return (bool)(C.QTextBoundaryFinder_isValid(this.h))
}

func (this *QTextBoundaryFinder) Type() QTextBoundaryFinder__BoundaryType {
	return (QTextBoundaryFinder__BoundaryType)(C.QTextBoundaryFinder_type(this.h))
}

func (this *QTextBoundaryFinder) String() string {
	var _ms C.struct_miqt_string = C.QTextBoundaryFinder_string(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextBoundaryFinder) ToStart() {
	C.QTextBoundaryFinder_toStart(this.h)
}

func (this *QTextBoundaryFinder) ToEnd() {
	C.QTextBoundaryFinder_toEnd(this.h)
}

func (this *QTextBoundaryFinder) Position() int {
	return (int)(C.QTextBoundaryFinder_position(this.h))
}

func (this *QTextBoundaryFinder) SetPosition(position int) {
	C.QTextBoundaryFinder_setPosition(this.h, (C.int)(position))
}

func (this *QTextBoundaryFinder) ToNextBoundary() int {
	return (int)(C.QTextBoundaryFinder_toNextBoundary(this.h))
}

func (this *QTextBoundaryFinder) ToPreviousBoundary() int {
	return (int)(C.QTextBoundaryFinder_toPreviousBoundary(this.h))
}

func (this *QTextBoundaryFinder) IsAtBoundary() bool {
	return (bool)(C.QTextBoundaryFinder_isAtBoundary(this.h))
}

func (this *QTextBoundaryFinder) BoundaryReasons() QTextBoundaryFinder__BoundaryReason {
	return (QTextBoundaryFinder__BoundaryReason)(C.QTextBoundaryFinder_boundaryReasons(this.h))
}

// Delete this object from C++ memory.
func (this *QTextBoundaryFinder) Delete() {
	C.QTextBoundaryFinder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBoundaryFinder) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBoundaryFinder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
