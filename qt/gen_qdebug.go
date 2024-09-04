package qt

/*

#include "gen_qdebug.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QDebug__VerbosityLevel int

const (
	QDebug__VerbosityLevel__MinimumVerbosity QDebug__VerbosityLevel = 0
	QDebug__VerbosityLevel__DefaultVerbosity QDebug__VerbosityLevel = 2
	QDebug__VerbosityLevel__MaximumVerbosity QDebug__VerbosityLevel = 7
)

type QDebug struct {
	h *C.QDebug
}

func (this *QDebug) cPointer() *C.QDebug {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDebug(h *C.QDebug) *QDebug {
	if h == nil {
		return nil
	}
	return &QDebug{h: h}
}

func newQDebug_U(h unsafe.Pointer) *QDebug {
	return newQDebug((*C.QDebug)(h))
}

// NewQDebug constructs a new QDebug object.
func NewQDebug(device *QIODevice) *QDebug {
	ret := C.QDebug_new(device.cPointer())
	return newQDebug(ret)
}

// NewQDebug2 constructs a new QDebug object.
func NewQDebug2(o *QDebug) *QDebug {
	ret := C.QDebug_new2(o.cPointer())
	return newQDebug(ret)
}

func (this *QDebug) OperatorAssign(other *QDebug) {
	C.QDebug_OperatorAssign(this.h, other.cPointer())
}

func (this *QDebug) Swap(other *QDebug) {
	C.QDebug_Swap(this.h, other.cPointer())
}

func (this *QDebug) ResetFormat() *QDebug {
	ret := C.QDebug_ResetFormat(this.h)
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) Space() *QDebug {
	ret := C.QDebug_Space(this.h)
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) Nospace() *QDebug {
	ret := C.QDebug_Nospace(this.h)
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) MaybeSpace() *QDebug {
	ret := C.QDebug_MaybeSpace(this.h)
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) Verbosity(verbosityLevel int) *QDebug {
	ret := C.QDebug_Verbosity(this.h, (C.int)(verbosityLevel))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) Verbosity2() int {
	ret := C.QDebug_Verbosity2(this.h)
	return (int)(ret)
}

func (this *QDebug) SetVerbosity(verbosityLevel int) {
	C.QDebug_SetVerbosity(this.h, (C.int)(verbosityLevel))
}

func (this *QDebug) AutoInsertSpaces() bool {
	ret := C.QDebug_AutoInsertSpaces(this.h)
	return (bool)(ret)
}

func (this *QDebug) SetAutoInsertSpaces(b bool) {
	C.QDebug_SetAutoInsertSpaces(this.h, (C.bool)(b))
}

func (this *QDebug) Quote() *QDebug {
	ret := C.QDebug_Quote(this.h)
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) Noquote() *QDebug {
	ret := C.QDebug_Noquote(this.h)
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) MaybeQuote() *QDebug {
	ret := C.QDebug_MaybeQuote(this.h)
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeft(t QChar) *QDebug {
	ret := C.QDebug_OperatorShiftLeft(this.h, t.cPointer())
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithBool(t bool) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithBool(this.h, (C.bool)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithChar(t byte) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithChar(this.h, (C.char)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithShort(t int16) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithShort(this.h, (C.int16_t)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedshort(t uint16) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithUnsignedshort(this.h, (C.uint16_t)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithInt(t int) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithInt(this.h, (C.int)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedint(t uint) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithUnsignedint(this.h, (C.uint)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithLong(t int64) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithLong(this.h, (C.long)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedlong(t uint64) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithUnsignedlong(this.h, (C.ulong)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithQint64(t int64) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithQint64(this.h, (C.longlong)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithQuint64(t uint64) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithQuint64(this.h, (C.ulonglong)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithFloat(t float32) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithFloat(this.h, (C.float)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithDouble(t float64) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithDouble(this.h, (C.double)(t))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeft2(t string) *QDebug {
	t_Cstring := C.CString(t)
	defer C.free(unsafe.Pointer(t_Cstring))
	ret := C.QDebug_OperatorShiftLeft2(this.h, t_Cstring)
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithQString(t string) *QDebug {
	t_Cstring := C.CString(t)
	defer C.free(unsafe.Pointer(t_Cstring))
	ret := C.QDebug_OperatorShiftLeftWithQString(this.h, t_Cstring, C.size_t(len(t)))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) OperatorShiftLeftWithQByteArray(t *QByteArray) *QDebug {
	ret := C.QDebug_OperatorShiftLeftWithQByteArray(this.h, t.cPointer())
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) MaybeQuote1(c byte) *QDebug {
	ret := C.QDebug_MaybeQuote1(this.h, (C.char)(c))
	return newQDebug_U(unsafe.Pointer(ret))
}

func (this *QDebug) Delete() {
	C.QDebug_Delete(this.h)
}

type QDebugStateSaver struct {
	h *C.QDebugStateSaver
}

func (this *QDebugStateSaver) cPointer() *C.QDebugStateSaver {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDebugStateSaver(h *C.QDebugStateSaver) *QDebugStateSaver {
	if h == nil {
		return nil
	}
	return &QDebugStateSaver{h: h}
}

func newQDebugStateSaver_U(h unsafe.Pointer) *QDebugStateSaver {
	return newQDebugStateSaver((*C.QDebugStateSaver)(h))
}

// NewQDebugStateSaver constructs a new QDebugStateSaver object.
func NewQDebugStateSaver(dbg *QDebug) *QDebugStateSaver {
	ret := C.QDebugStateSaver_new(dbg.cPointer())
	return newQDebugStateSaver(ret)
}

func (this *QDebugStateSaver) Delete() {
	C.QDebugStateSaver_Delete(this.h)
}

type QNoDebug struct {
	h *C.QNoDebug
}

func (this *QNoDebug) cPointer() *C.QNoDebug {
	if this == nil {
		return nil
	}
	return this.h
}

func newQNoDebug(h *C.QNoDebug) *QNoDebug {
	if h == nil {
		return nil
	}
	return &QNoDebug{h: h}
}

func newQNoDebug_U(h unsafe.Pointer) *QNoDebug {
	return newQNoDebug((*C.QNoDebug)(h))
}

func (this *QNoDebug) Space() *QNoDebug {
	ret := C.QNoDebug_Space(this.h)
	return newQNoDebug_U(unsafe.Pointer(ret))
}

func (this *QNoDebug) Nospace() *QNoDebug {
	ret := C.QNoDebug_Nospace(this.h)
	return newQNoDebug_U(unsafe.Pointer(ret))
}

func (this *QNoDebug) MaybeSpace() *QNoDebug {
	ret := C.QNoDebug_MaybeSpace(this.h)
	return newQNoDebug_U(unsafe.Pointer(ret))
}

func (this *QNoDebug) Quote() *QNoDebug {
	ret := C.QNoDebug_Quote(this.h)
	return newQNoDebug_U(unsafe.Pointer(ret))
}

func (this *QNoDebug) Noquote() *QNoDebug {
	ret := C.QNoDebug_Noquote(this.h)
	return newQNoDebug_U(unsafe.Pointer(ret))
}

func (this *QNoDebug) MaybeQuote() *QNoDebug {
	ret := C.QNoDebug_MaybeQuote(this.h)
	return newQNoDebug_U(unsafe.Pointer(ret))
}

func (this *QNoDebug) Verbosity(param1 int) *QNoDebug {
	ret := C.QNoDebug_Verbosity(this.h, (C.int)(param1))
	return newQNoDebug_U(unsafe.Pointer(ret))
}

func (this *QNoDebug) MaybeQuote1(param1 byte) *QNoDebug {
	ret := C.QNoDebug_MaybeQuote1(this.h, (C.char)(param1))
	return newQNoDebug_U(unsafe.Pointer(ret))
}

func (this *QNoDebug) Delete() {
	C.QNoDebug_Delete(this.h)
}
