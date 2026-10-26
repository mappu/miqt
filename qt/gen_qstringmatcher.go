package qt

/*

#include "gen_qstringmatcher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStringMatcher struct {
	h  *C.QStringMatcher
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStringMatcher) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QStringMatcher) cPointer() *C.QStringMatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringMatcher) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringMatcher constructs the type using only CGO pointers.
func newQStringMatcher(h *C.QStringMatcher) *QStringMatcher {
	if h == nil {
		return nil
	}

	return &QStringMatcher{h: h}
}

// UnsafeNewQStringMatcher constructs the type using only unsafe pointers.
func UnsafeNewQStringMatcher(h unsafe.Pointer) *QStringMatcher {
	return newQStringMatcher((*C.QStringMatcher)(h))
}

// NewQStringMatcher constructs a new QStringMatcher object.
func NewQStringMatcher() *QStringMatcher {

	return newQStringMatcher(C.QStringMatcher_new())
}

// NewQStringMatcher2 constructs a new QStringMatcher object.
func NewQStringMatcher2(pattern string) *QStringMatcher {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))

	return newQStringMatcher(C.QStringMatcher_new2(pattern_ms))
}

// NewQStringMatcher3 constructs a new QStringMatcher object.
func NewQStringMatcher3(uc *QChar, lenVal int) *QStringMatcher {
	defer runtime.KeepAlive(uc)

	return newQStringMatcher(C.QStringMatcher_new3(uc.cPointer(), (C.int)(lenVal)))
}

// NewQStringMatcher4 constructs a new QStringMatcher object.
func NewQStringMatcher4(other *QStringMatcher) *QStringMatcher {
	defer runtime.KeepAlive(other)

	return newQStringMatcher(C.QStringMatcher_new4(other.cPointer()))
}

// NewQStringMatcher5 constructs a new QStringMatcher object.
func NewQStringMatcher5(pattern string, cs CaseSensitivity) *QStringMatcher {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))

	return newQStringMatcher(C.QStringMatcher_new5(pattern_ms, (C.int)(cs)))
}

// NewQStringMatcher6 constructs a new QStringMatcher object.
func NewQStringMatcher6(uc *QChar, lenVal int, cs CaseSensitivity) *QStringMatcher {
	defer runtime.KeepAlive(uc)

	return newQStringMatcher(C.QStringMatcher_new6(uc.cPointer(), (C.int)(lenVal), (C.int)(cs)))
}

func (this *QStringMatcher) OperatorAssign(other *QStringMatcher) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QStringMatcher_operatorAssign(this.h, other.cPointer())
}

func (this *QStringMatcher) SetPattern(pattern string) {
	defer runtime.KeepAlive(this)
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QStringMatcher_setPattern(this.h, pattern_ms)
}

func (this *QStringMatcher) SetCaseSensitivity(cs CaseSensitivity) {
	defer runtime.KeepAlive(this)
	C.QStringMatcher_setCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QStringMatcher) IndexIn(str string) int {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int)(C.QStringMatcher_indexIn(this.h, str_ms))
}

func (this *QStringMatcher) IndexIn2(str *QChar, length int) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(str)
	return (int)(C.QStringMatcher_indexIn2(this.h, str.cPointer(), (C.int)(length)))
}

func (this *QStringMatcher) Pattern() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QStringMatcher_pattern(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStringMatcher) CaseSensitivity() CaseSensitivity {
	defer runtime.KeepAlive(this)
	return (CaseSensitivity)(C.QStringMatcher_caseSensitivity(this.h))
}

func (this *QStringMatcher) IndexIn3(str string, from int) int {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int)(C.QStringMatcher_indexIn3(this.h, str_ms, (C.int)(from)))
}

func (this *QStringMatcher) IndexIn4(str *QChar, length int, from int) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(str)
	return (int)(C.QStringMatcher_indexIn4(this.h, str.cPointer(), (C.int)(length), (C.int)(from)))
}

// Delete this object from C++ memory.
func (this *QStringMatcher) Delete() {
	C.QStringMatcher_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStringMatcher) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStringMatcher_delete((*C.QStringMatcher)(gc[0]))
	})
	this.miqtSetGC(gc)
}
