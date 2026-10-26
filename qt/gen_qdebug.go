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
	h  *C.QDebug
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDebug) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(o)

	return newQDebug(C.QDebug_new2(o.cPointer()))
}

func (this *QDebug) OperatorAssign(other *QDebug) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDebug_operatorAssign(this.h, other.cPointer())
}

func (this *QDebug) Swap(other *QDebug) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDebug_swap(this.h, other.cPointer())
}

func (this *QDebug) ResetFormat() *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_resetFormat(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) Space() *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_space(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) Nospace() *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_nospace(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) MaybeSpace() *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_maybeSpace(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) Verbosity(verbosityLevel int) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_verbosity(this.h, (C.int)(verbosityLevel)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) Verbosity2() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDebug_verbosity2(this.h))
}

func (this *QDebug) SetVerbosity(verbosityLevel int) {
	defer runtime.KeepAlive(this)
	C.QDebug_setVerbosity(this.h, (C.int)(verbosityLevel))
}

func (this *QDebug) AutoInsertSpaces() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDebug_autoInsertSpaces(this.h))
}

func (this *QDebug) SetAutoInsertSpaces(b bool) {
	defer runtime.KeepAlive(this)
	C.QDebug_setAutoInsertSpaces(this.h, (C.bool)(b))
}

func (this *QDebug) Quote() *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_quote(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) Noquote() *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_noquote(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) MaybeQuote() *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_maybeQuote(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeft(t QChar) *QDebug {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(t)
	_ret := newQDebug(C.QDebug_operatorShiftLeft(this.h, t.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithBool(t bool) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithBool(this.h, (C.bool)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithChar(t int8) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithChar(this.h, (C.char)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithShort(t int16) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithShort(this.h, (C.short)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithUnsignedshort(t uint16) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithUnsignedshort(this.h, (C.ushort)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithInt(t int) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithInt(this.h, (C.int)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithUnsignedint(t uint) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithUnsignedint(this.h, (C.uint)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithLong(t int64) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithLong(this.h, (C.long)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithUnsignedlong(t uint64) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithUnsignedlong(this.h, (C.ulong)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithQint64(t int64) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithQint64(this.h, (C.longlong)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithQuint64(t uint64) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithQuint64(this.h, (C.ulonglong)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithFloat(t float32) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithFloat(this.h, (C.float)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithDouble(t float64) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithDouble(this.h, (C.double)(t)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeft2(t string) *QDebug {
	defer runtime.KeepAlive(this)
	t_Cstring := C.CString(t)
	defer C.free(unsafe.Pointer(t_Cstring))
	_ret := newQDebug(C.QDebug_operatorShiftLeft2(this.h, t_Cstring))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithQString(t string) *QDebug {
	defer runtime.KeepAlive(this)
	t_ms := C.struct_miqt_string{}
	t_ms.data = C.CString(t)
	t_ms.len = C.size_t(len(t))
	defer C.free(unsafe.Pointer(t_ms.data))
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithQString(this.h, t_ms))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithQByteArray(t []byte) *QDebug {
	defer runtime.KeepAlive(this)
	t_alias := C.struct_miqt_string{}
	if len(t) > 0 {
		t_alias.data = (*C.char)(unsafe.Pointer(&t[0]))
	} else {
		t_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	t_alias.len = C.size_t(len(t))
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithQByteArray(this.h, t_alias))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) OperatorShiftLeftWithVoid(t unsafe.Pointer) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_operatorShiftLeftWithVoid(this.h, t))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDebug) MaybeQuoteWithChar(c int8) *QDebug {
	defer runtime.KeepAlive(this)
	_ret := newQDebug(C.QDebug_maybeQuoteWithChar(this.h, (C.char)(c)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

// Delete this object from C++ memory.
func (this *QDebug) Delete() {
	C.QDebug_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDebug) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDebug_delete((*C.QDebug)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDebugStateSaver struct {
	h  *C.QDebugStateSaver
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDebugStateSaver) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(dbg)

	return newQDebugStateSaver(C.QDebugStateSaver_new(dbg.cPointer()))
}

// Delete this object from C++ memory.
func (this *QDebugStateSaver) Delete() {
	C.QDebugStateSaver_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDebugStateSaver) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDebugStateSaver_delete((*C.QDebugStateSaver)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QNoDebug struct {
	h  *C.QNoDebug
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QNoDebug) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(this)
	_ret := newQNoDebug(C.QNoDebug_space(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNoDebug) Nospace() *QNoDebug {
	defer runtime.KeepAlive(this)
	_ret := newQNoDebug(C.QNoDebug_nospace(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNoDebug) MaybeSpace() *QNoDebug {
	defer runtime.KeepAlive(this)
	_ret := newQNoDebug(C.QNoDebug_maybeSpace(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNoDebug) Quote() *QNoDebug {
	defer runtime.KeepAlive(this)
	_ret := newQNoDebug(C.QNoDebug_quote(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNoDebug) Noquote() *QNoDebug {
	defer runtime.KeepAlive(this)
	_ret := newQNoDebug(C.QNoDebug_noquote(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNoDebug) MaybeQuote() *QNoDebug {
	defer runtime.KeepAlive(this)
	_ret := newQNoDebug(C.QNoDebug_maybeQuote(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNoDebug) Verbosity(param1 int) *QNoDebug {
	defer runtime.KeepAlive(this)
	_ret := newQNoDebug(C.QNoDebug_verbosity(this.h, (C.int)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNoDebug) MaybeQuoteWithChar(param1 int8) *QNoDebug {
	defer runtime.KeepAlive(this)
	_ret := newQNoDebug(C.QNoDebug_maybeQuoteWithChar(this.h, (C.const_char)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

// Delete this object from C++ memory.
func (this *QNoDebug) Delete() {
	C.QNoDebug_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QNoDebug) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QNoDebug_delete((*C.QNoDebug)(gc[0]))
	})
	this.miqtSetGC(gc)
}
