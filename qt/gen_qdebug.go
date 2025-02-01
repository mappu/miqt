package qt

/*

#include "gen_qdebug.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDebug__VerbosityLevel int

const (
	QDebug__MinimumVerbosity QDebug__VerbosityLevel = 0
	QDebug__DefaultVerbosity QDebug__VerbosityLevel = 2
	QDebug__MaximumVerbosity QDebug__VerbosityLevel = 7
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

func (this *QDebug) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDebug constructs the type using only CGO pointers.
func newQDebug(h *C.QDebug) *QDebug {
	if h == nil {
		return nil
	}

	return &QDebug{h: h}
}

// UnsafeNewQDebug constructs the type using only unsafe pointers.
func UnsafeNewQDebug(h unsafe.Pointer) *QDebug {
	return newQDebug((*C.QDebug)(h))
}

// NewQDebug constructs a new QDebug object.
func NewQDebug(device *QIODevice) *QDebug {

	return newQDebug(C.QDebug_new(device.cPointer()))
}

// NewQDebug2 constructs a new QDebug object.
func NewQDebug2(o *QDebug) *QDebug {

	return newQDebug(C.QDebug_new2(o.cPointer()))
}

func (this *QDebug) OperatorAssign(other *QDebug) {
	C.QDebug_operatorAssign(this.h, other.cPointer())
}

func (this *QDebug) Swap(other *QDebug) {
	C.QDebug_swap(this.h, other.cPointer())
}

func (this *QDebug) ResetFormat() *QDebug {
	return newQDebug(C.QDebug_resetFormat(this.h))
}

func (this *QDebug) Space() *QDebug {
	return newQDebug(C.QDebug_space(this.h))
}

func (this *QDebug) Nospace() *QDebug {
	return newQDebug(C.QDebug_nospace(this.h))
}

func (this *QDebug) MaybeSpace() *QDebug {
	return newQDebug(C.QDebug_maybeSpace(this.h))
}

func (this *QDebug) Verbosity(verbosityLevel int) *QDebug {
	return newQDebug(C.QDebug_verbosity(this.h, (C.int)(verbosityLevel)))
}

func (this *QDebug) Verbosity2() int {
	return (int)(C.QDebug_verbosity2(this.h))
}

func (this *QDebug) SetVerbosity(verbosityLevel int) {
	C.QDebug_setVerbosity(this.h, (C.int)(verbosityLevel))
}

func (this *QDebug) AutoInsertSpaces() bool {
	return (bool)(C.QDebug_autoInsertSpaces(this.h))
}

func (this *QDebug) SetAutoInsertSpaces(b bool) {
	C.QDebug_setAutoInsertSpaces(this.h, (C.bool)(b))
}

func (this *QDebug) Quote() *QDebug {
	return newQDebug(C.QDebug_quote(this.h))
}

func (this *QDebug) Noquote() *QDebug {
	return newQDebug(C.QDebug_noquote(this.h))
}

func (this *QDebug) MaybeQuote() *QDebug {
	return newQDebug(C.QDebug_maybeQuote(this.h))
}

func (this *QDebug) OperatorShiftLeft(t QChar) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeft(this.h, t.cPointer()))
}

func (this *QDebug) OperatorShiftLeftWithBool(t bool) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithBool(this.h, (C.bool)(t)))
}

func (this *QDebug) OperatorShiftLeftWithChar(t int8) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithChar(this.h, (C.char)(t)))
}

func (this *QDebug) OperatorShiftLeftWithShort(t int16) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithShort(this.h, (C.int16_t)(t)))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedshort(t uint16) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithUnsignedshort(this.h, (C.uint16_t)(t)))
}

func (this *QDebug) OperatorShiftLeftWithInt(t int) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithInt(this.h, (C.int)(t)))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedint(t uint) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithUnsignedint(this.h, (C.uint)(t)))
}

func (this *QDebug) OperatorShiftLeftWithLong(t int64) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithLong(this.h, (C.long)(t)))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedlong(t uint64) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithUnsignedlong(this.h, (C.ulong)(t)))
}

func (this *QDebug) OperatorShiftLeftWithQint64(t int64) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithQint64(this.h, (C.longlong)(t)))
}

func (this *QDebug) OperatorShiftLeftWithQuint64(t uint64) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithQuint64(this.h, (C.ulonglong)(t)))
}

func (this *QDebug) OperatorShiftLeftWithFloat(t float32) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithFloat(this.h, (C.float)(t)))
}

func (this *QDebug) OperatorShiftLeftWithDouble(t float64) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithDouble(this.h, (C.double)(t)))
}

func (this *QDebug) OperatorShiftLeft2(t string) *QDebug {
	t_Cstring := C.CString(t)
	defer C.free(unsafe.Pointer(t_Cstring))
	return newQDebug(C.QDebug_operatorShiftLeft2(this.h, t_Cstring))
}

func (this *QDebug) OperatorShiftLeftWithQString(t string) *QDebug {
	t_ms := C.struct_miqt_string{}
	t_ms.data = C.CString(t)
	t_ms.len = C.size_t(len(t))
	defer C.free(unsafe.Pointer(t_ms.data))
	return newQDebug(C.QDebug_operatorShiftLeftWithQString(this.h, t_ms))
}

func (this *QDebug) OperatorShiftLeftWithQByteArray(t []byte) *QDebug {
	t_alias := C.struct_miqt_string{}
	if len(t) > 0 {
		t_alias.data = (*C.char)(unsafe.Pointer(&t[0]))
	} else {
		t_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	t_alias.len = C.size_t(len(t))
	return newQDebug(C.QDebug_operatorShiftLeftWithQByteArray(this.h, t_alias))
}

func (this *QDebug) OperatorShiftLeftWithVoid(t unsafe.Pointer) *QDebug {
	return newQDebug(C.QDebug_operatorShiftLeftWithVoid(this.h, t))
}

func (this *QDebug) MaybeQuote1(c int8) *QDebug {
	return newQDebug(C.QDebug_maybeQuote1(this.h, (C.char)(c)))
}

// Delete this object from C++ memory.
func (this *QDebug) Delete() {
	C.QDebug_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDebug) GoGC() {
	runtime.SetFinalizer(this, func(this *QDebug) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QDebugStateSaver) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDebugStateSaver constructs the type using only CGO pointers.
func newQDebugStateSaver(h *C.QDebugStateSaver) *QDebugStateSaver {
	if h == nil {
		return nil
	}

	return &QDebugStateSaver{h: h}
}

// UnsafeNewQDebugStateSaver constructs the type using only unsafe pointers.
func UnsafeNewQDebugStateSaver(h unsafe.Pointer) *QDebugStateSaver {
	return newQDebugStateSaver((*C.QDebugStateSaver)(h))
}

// NewQDebugStateSaver constructs a new QDebugStateSaver object.
func NewQDebugStateSaver(dbg *QDebug) *QDebugStateSaver {

	return newQDebugStateSaver(C.QDebugStateSaver_new(dbg.cPointer()))
}

// Delete this object from C++ memory.
func (this *QDebugStateSaver) Delete() {
	C.QDebugStateSaver_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDebugStateSaver) GoGC() {
	runtime.SetFinalizer(this, func(this *QDebugStateSaver) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QNoDebug) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNoDebug constructs the type using only CGO pointers.
func newQNoDebug(h *C.QNoDebug) *QNoDebug {
	if h == nil {
		return nil
	}

	return &QNoDebug{h: h}
}

// UnsafeNewQNoDebug constructs the type using only unsafe pointers.
func UnsafeNewQNoDebug(h unsafe.Pointer) *QNoDebug {
	return newQNoDebug((*C.QNoDebug)(h))
}

func (this *QNoDebug) Space() *QNoDebug {
	return newQNoDebug(C.QNoDebug_space(this.h))
}

func (this *QNoDebug) Nospace() *QNoDebug {
	return newQNoDebug(C.QNoDebug_nospace(this.h))
}

func (this *QNoDebug) MaybeSpace() *QNoDebug {
	return newQNoDebug(C.QNoDebug_maybeSpace(this.h))
}

func (this *QNoDebug) Quote() *QNoDebug {
	return newQNoDebug(C.QNoDebug_quote(this.h))
}

func (this *QNoDebug) Noquote() *QNoDebug {
	return newQNoDebug(C.QNoDebug_noquote(this.h))
}

func (this *QNoDebug) MaybeQuote() *QNoDebug {
	return newQNoDebug(C.QNoDebug_maybeQuote(this.h))
}

func (this *QNoDebug) Verbosity(param1 int) *QNoDebug {
	return newQNoDebug(C.QNoDebug_verbosity(this.h, (C.int)(param1)))
}

func (this *QNoDebug) MaybeQuote1(param1 int8) *QNoDebug {
	return newQNoDebug(C.QNoDebug_maybeQuote1(this.h, (C.const_char)(param1)))
}

// Delete this object from C++ memory.
func (this *QNoDebug) Delete() {
	C.QNoDebug_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNoDebug) GoGC() {
	runtime.SetFinalizer(this, func(this *QNoDebug) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
