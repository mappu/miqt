package qt6

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
	h          *C.QStringMatcher
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QStringMatcher{h: (*C.QStringMatcher)(h)}
}

// NewQStringMatcher constructs a new QStringMatcher object.
func NewQStringMatcher() *QStringMatcher {
	var outptr_QStringMatcher *C.QStringMatcher = nil

	C.QStringMatcher_new(&outptr_QStringMatcher)
	ret := newQStringMatcher(outptr_QStringMatcher)
	ret.isSubclass = true
	return ret
}

// NewQStringMatcher2 constructs a new QStringMatcher object.
func NewQStringMatcher2(pattern string) *QStringMatcher {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	var outptr_QStringMatcher *C.QStringMatcher = nil

	C.QStringMatcher_new2(pattern_ms, &outptr_QStringMatcher)
	ret := newQStringMatcher(outptr_QStringMatcher)
	ret.isSubclass = true
	return ret
}

// NewQStringMatcher3 constructs a new QStringMatcher object.
func NewQStringMatcher3(uc *QChar, lenVal int64) *QStringMatcher {
	var outptr_QStringMatcher *C.QStringMatcher = nil

	C.QStringMatcher_new3(uc.cPointer(), (C.ptrdiff_t)(lenVal), &outptr_QStringMatcher)
	ret := newQStringMatcher(outptr_QStringMatcher)
	ret.isSubclass = true
	return ret
}

// NewQStringMatcher4 constructs a new QStringMatcher object.
func NewQStringMatcher4(other *QStringMatcher) *QStringMatcher {
	var outptr_QStringMatcher *C.QStringMatcher = nil

	C.QStringMatcher_new4(other.cPointer(), &outptr_QStringMatcher)
	ret := newQStringMatcher(outptr_QStringMatcher)
	ret.isSubclass = true
	return ret
}

// NewQStringMatcher5 constructs a new QStringMatcher object.
func NewQStringMatcher5(pattern string, cs CaseSensitivity) *QStringMatcher {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	var outptr_QStringMatcher *C.QStringMatcher = nil

	C.QStringMatcher_new5(pattern_ms, (C.int)(cs), &outptr_QStringMatcher)
	ret := newQStringMatcher(outptr_QStringMatcher)
	ret.isSubclass = true
	return ret
}

// NewQStringMatcher6 constructs a new QStringMatcher object.
func NewQStringMatcher6(uc *QChar, lenVal int64, cs CaseSensitivity) *QStringMatcher {
	var outptr_QStringMatcher *C.QStringMatcher = nil

	C.QStringMatcher_new6(uc.cPointer(), (C.ptrdiff_t)(lenVal), (C.int)(cs), &outptr_QStringMatcher)
	ret := newQStringMatcher(outptr_QStringMatcher)
	ret.isSubclass = true
	return ret
}

func (this *QStringMatcher) OperatorAssign(other *QStringMatcher) {
	C.QStringMatcher_OperatorAssign(this.h, other.cPointer())
}

func (this *QStringMatcher) SetPattern(pattern string) {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QStringMatcher_SetPattern(this.h, pattern_ms)
}

func (this *QStringMatcher) SetCaseSensitivity(cs CaseSensitivity) {
	C.QStringMatcher_SetCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QStringMatcher) IndexIn(str string) int64 {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int64)(C.QStringMatcher_IndexIn(this.h, str_ms))
}

func (this *QStringMatcher) IndexIn2(str *QChar, length int64) int64 {
	return (int64)(C.QStringMatcher_IndexIn2(this.h, str.cPointer(), (C.ptrdiff_t)(length)))
}

func (this *QStringMatcher) Pattern() string {
	var _ms C.struct_miqt_string = C.QStringMatcher_Pattern(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStringMatcher) CaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QStringMatcher_CaseSensitivity(this.h))
}

func (this *QStringMatcher) IndexIn22(str string, from int64) int64 {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int64)(C.QStringMatcher_IndexIn22(this.h, str_ms, (C.ptrdiff_t)(from)))
}

func (this *QStringMatcher) IndexIn3(str *QChar, length int64, from int64) int64 {
	return (int64)(C.QStringMatcher_IndexIn3(this.h, str.cPointer(), (C.ptrdiff_t)(length), (C.ptrdiff_t)(from)))
}

// Delete this object from C++ memory.
func (this *QStringMatcher) Delete() {
	C.QStringMatcher_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringMatcher) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringMatcher) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
