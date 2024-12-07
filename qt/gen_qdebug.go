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
	h          *C.QDebug
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QDebug{h: (*C.QDebug)(h)}
}

// NewQDebug constructs a new QDebug object.
func NewQDebug(device *QIODevice) *QDebug {
	var outptr_QDebug *C.QDebug = nil

	C.QDebug_new(device.cPointer(), &outptr_QDebug)
	ret := newQDebug(outptr_QDebug)
	ret.isSubclass = true
	return ret
}

// NewQDebug2 constructs a new QDebug object.
func NewQDebug2(o *QDebug) *QDebug {
	var outptr_QDebug *C.QDebug = nil

	C.QDebug_new2(o.cPointer(), &outptr_QDebug)
	ret := newQDebug(outptr_QDebug)
	ret.isSubclass = true
	return ret
}

func (this *QDebug) OperatorAssign(other *QDebug) {
	C.QDebug_OperatorAssign(this.h, other.cPointer())
}

func (this *QDebug) Swap(other *QDebug) {
	C.QDebug_Swap(this.h, other.cPointer())
}

func (this *QDebug) ResetFormat() *QDebug {
	return newQDebug(C.QDebug_ResetFormat(this.h))
}

func (this *QDebug) Space() *QDebug {
	return newQDebug(C.QDebug_Space(this.h))
}

func (this *QDebug) Nospace() *QDebug {
	return newQDebug(C.QDebug_Nospace(this.h))
}

func (this *QDebug) MaybeSpace() *QDebug {
	return newQDebug(C.QDebug_MaybeSpace(this.h))
}

func (this *QDebug) Verbosity(verbosityLevel int) *QDebug {
	return newQDebug(C.QDebug_Verbosity(this.h, (C.int)(verbosityLevel)))
}

func (this *QDebug) Verbosity2() int {
	return (int)(C.QDebug_Verbosity2(this.h))
}

func (this *QDebug) SetVerbosity(verbosityLevel int) {
	C.QDebug_SetVerbosity(this.h, (C.int)(verbosityLevel))
}

func (this *QDebug) AutoInsertSpaces() bool {
	return (bool)(C.QDebug_AutoInsertSpaces(this.h))
}

func (this *QDebug) SetAutoInsertSpaces(b bool) {
	C.QDebug_SetAutoInsertSpaces(this.h, (C.bool)(b))
}

func (this *QDebug) Quote() *QDebug {
	return newQDebug(C.QDebug_Quote(this.h))
}

func (this *QDebug) Noquote() *QDebug {
	return newQDebug(C.QDebug_Noquote(this.h))
}

func (this *QDebug) MaybeQuote() *QDebug {
	return newQDebug(C.QDebug_MaybeQuote(this.h))
}

func (this *QDebug) OperatorShiftLeft(t QChar) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeft(this.h, t.cPointer()))
}

func (this *QDebug) OperatorShiftLeftWithBool(t bool) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithBool(this.h, (C.bool)(t)))
}

func (this *QDebug) OperatorShiftLeftWithChar(t int8) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithChar(this.h, (C.char)(t)))
}

func (this *QDebug) OperatorShiftLeftWithShort(t int16) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithShort(this.h, (C.int16_t)(t)))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedshort(t uint16) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithUnsignedshort(this.h, (C.uint16_t)(t)))
}

func (this *QDebug) OperatorShiftLeftWithInt(t int) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithInt(this.h, (C.int)(t)))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedint(t uint) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithUnsignedint(this.h, (C.uint)(t)))
}

func (this *QDebug) OperatorShiftLeftWithLong(t int64) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithLong(this.h, (C.long)(t)))
}

func (this *QDebug) OperatorShiftLeftWithUnsignedlong(t uint64) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithUnsignedlong(this.h, (C.ulong)(t)))
}

func (this *QDebug) OperatorShiftLeftWithQint64(t int64) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithQint64(this.h, (C.longlong)(t)))
}

func (this *QDebug) OperatorShiftLeftWithQuint64(t uint64) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithQuint64(this.h, (C.ulonglong)(t)))
}

func (this *QDebug) OperatorShiftLeftWithFloat(t float32) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithFloat(this.h, (C.float)(t)))
}

func (this *QDebug) OperatorShiftLeftWithDouble(t float64) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithDouble(this.h, (C.double)(t)))
}

func (this *QDebug) OperatorShiftLeft2(t string) *QDebug {
	t_Cstring := C.CString(t)
	defer C.free(unsafe.Pointer(t_Cstring))
	return newQDebug(C.QDebug_OperatorShiftLeft2(this.h, t_Cstring))
}

func (this *QDebug) OperatorShiftLeftWithQString(t string) *QDebug {
	t_ms := C.struct_miqt_string{}
	t_ms.data = C.CString(t)
	t_ms.len = C.size_t(len(t))
	defer C.free(unsafe.Pointer(t_ms.data))
	return newQDebug(C.QDebug_OperatorShiftLeftWithQString(this.h, t_ms))
}

func (this *QDebug) OperatorShiftLeftWithQByteArray(t []byte) *QDebug {
	t_alias := C.struct_miqt_string{}
	t_alias.data = (*C.char)(unsafe.Pointer(&t[0]))
	t_alias.len = C.size_t(len(t))
	return newQDebug(C.QDebug_OperatorShiftLeftWithQByteArray(this.h, t_alias))
}

func (this *QDebug) OperatorShiftLeftWithVoid(t unsafe.Pointer) *QDebug {
	return newQDebug(C.QDebug_OperatorShiftLeftWithVoid(this.h, t))
}

func (this *QDebug) MaybeQuote1(c int8) *QDebug {
	return newQDebug(C.QDebug_MaybeQuote1(this.h, (C.char)(c)))
}

// Delete this object from C++ memory.
func (this *QDebug) Delete() {
	C.QDebug_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QDebugStateSaver
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QDebugStateSaver{h: (*C.QDebugStateSaver)(h)}
}

// NewQDebugStateSaver constructs a new QDebugStateSaver object.
func NewQDebugStateSaver(dbg *QDebug) *QDebugStateSaver {
	var outptr_QDebugStateSaver *C.QDebugStateSaver = nil

	C.QDebugStateSaver_new(dbg.cPointer(), &outptr_QDebugStateSaver)
	ret := newQDebugStateSaver(outptr_QDebugStateSaver)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QDebugStateSaver) Delete() {
	C.QDebugStateSaver_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QNoDebug
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QNoDebug{h: (*C.QNoDebug)(h)}
}

func (this *QNoDebug) Space() *QNoDebug {
	return newQNoDebug(C.QNoDebug_Space(this.h))
}

func (this *QNoDebug) Nospace() *QNoDebug {
	return newQNoDebug(C.QNoDebug_Nospace(this.h))
}

func (this *QNoDebug) MaybeSpace() *QNoDebug {
	return newQNoDebug(C.QNoDebug_MaybeSpace(this.h))
}

func (this *QNoDebug) Quote() *QNoDebug {
	return newQNoDebug(C.QNoDebug_Quote(this.h))
}

func (this *QNoDebug) Noquote() *QNoDebug {
	return newQNoDebug(C.QNoDebug_Noquote(this.h))
}

func (this *QNoDebug) MaybeQuote() *QNoDebug {
	return newQNoDebug(C.QNoDebug_MaybeQuote(this.h))
}

func (this *QNoDebug) Verbosity(param1 int) *QNoDebug {
	return newQNoDebug(C.QNoDebug_Verbosity(this.h, (C.int)(param1)))
}

func (this *QNoDebug) MaybeQuote1(param1 int8) *QNoDebug {
	return newQNoDebug(C.QNoDebug_MaybeQuote1(this.h, (C.const_char)(param1)))
}

// Delete this object from C++ memory.
func (this *QNoDebug) Delete() {
	C.QNoDebug_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNoDebug) GoGC() {
	runtime.SetFinalizer(this, func(this *QNoDebug) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
