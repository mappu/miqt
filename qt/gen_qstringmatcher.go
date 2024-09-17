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
	h *C.QStringMatcher
}

func (this *QStringMatcher) cPointer() *C.QStringMatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStringMatcher(h *C.QStringMatcher) *QStringMatcher {
	if h == nil {
		return nil
	}
	return &QStringMatcher{h: h}
}

func newQStringMatcher_U(h unsafe.Pointer) *QStringMatcher {
	return newQStringMatcher((*C.QStringMatcher)(h))
}

// NewQStringMatcher constructs a new QStringMatcher object.
func NewQStringMatcher() *QStringMatcher {
	ret := C.QStringMatcher_new()
	return newQStringMatcher(ret)
}

// NewQStringMatcher2 constructs a new QStringMatcher object.
func NewQStringMatcher2(pattern string) *QStringMatcher {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	ret := C.QStringMatcher_new2((*C.struct_miqt_string)(pattern_ms))
	return newQStringMatcher(ret)
}

// NewQStringMatcher3 constructs a new QStringMatcher object.
func NewQStringMatcher3(uc *QChar, lenVal int) *QStringMatcher {
	ret := C.QStringMatcher_new3(uc.cPointer(), (C.int)(lenVal))
	return newQStringMatcher(ret)
}

// NewQStringMatcher4 constructs a new QStringMatcher object.
func NewQStringMatcher4(other *QStringMatcher) *QStringMatcher {
	ret := C.QStringMatcher_new4(other.cPointer())
	return newQStringMatcher(ret)
}

// NewQStringMatcher5 constructs a new QStringMatcher object.
func NewQStringMatcher5(pattern string, cs CaseSensitivity) *QStringMatcher {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	ret := C.QStringMatcher_new5((*C.struct_miqt_string)(pattern_ms), (C.uintptr_t)(cs))
	return newQStringMatcher(ret)
}

// NewQStringMatcher6 constructs a new QStringMatcher object.
func NewQStringMatcher6(uc *QChar, lenVal int, cs CaseSensitivity) *QStringMatcher {
	ret := C.QStringMatcher_new6(uc.cPointer(), (C.int)(lenVal), (C.uintptr_t)(cs))
	return newQStringMatcher(ret)
}

func (this *QStringMatcher) OperatorAssign(other *QStringMatcher) {
	C.QStringMatcher_OperatorAssign(this.h, other.cPointer())
}

func (this *QStringMatcher) SetPattern(pattern string) {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	C.QStringMatcher_SetPattern(this.h, (*C.struct_miqt_string)(pattern_ms))
}

func (this *QStringMatcher) SetCaseSensitivity(cs CaseSensitivity) {
	C.QStringMatcher_SetCaseSensitivity(this.h, (C.uintptr_t)(cs))
}

func (this *QStringMatcher) IndexIn(str string) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QStringMatcher_IndexIn(this.h, (*C.struct_miqt_string)(str_ms)))
}

func (this *QStringMatcher) IndexIn2(str *QChar, length int) int {
	return (int)(C.QStringMatcher_IndexIn2(this.h, str.cPointer(), (C.int)(length)))
}

func (this *QStringMatcher) Pattern() string {
	var _ms *C.struct_miqt_string = C.QStringMatcher_Pattern(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStringMatcher) CaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QStringMatcher_CaseSensitivity(this.h))
}

func (this *QStringMatcher) IndexIn22(str string, from int) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QStringMatcher_IndexIn22(this.h, (*C.struct_miqt_string)(str_ms), (C.int)(from)))
}

func (this *QStringMatcher) IndexIn3(str *QChar, length int, from int) int {
	return (int)(C.QStringMatcher_IndexIn3(this.h, str.cPointer(), (C.int)(length), (C.int)(from)))
}

// Delete this object from C++ memory.
func (this *QStringMatcher) Delete() {
	C.QStringMatcher_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringMatcher) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringMatcher) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
