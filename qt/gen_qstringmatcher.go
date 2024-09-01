package qt

/*

#include "gen_qstringmatcher.h"
#include <stdlib.h>

*/
import "C"

import (
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
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	ret := C.QStringMatcher_new2(pattern_Cstring, C.ulong(len(pattern)))
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
func NewQStringMatcher5(pattern string, cs uintptr) *QStringMatcher {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	ret := C.QStringMatcher_new5(pattern_Cstring, C.ulong(len(pattern)), (C.uintptr_t)(cs))
	return newQStringMatcher(ret)
}

// NewQStringMatcher6 constructs a new QStringMatcher object.
func NewQStringMatcher6(uc *QChar, lenVal int, cs uintptr) *QStringMatcher {
	ret := C.QStringMatcher_new6(uc.cPointer(), (C.int)(lenVal), (C.uintptr_t)(cs))
	return newQStringMatcher(ret)
}

func (this *QStringMatcher) OperatorAssign(other *QStringMatcher) {
	C.QStringMatcher_OperatorAssign(this.h, other.cPointer())
}

func (this *QStringMatcher) SetPattern(pattern string) {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	C.QStringMatcher_SetPattern(this.h, pattern_Cstring, C.ulong(len(pattern)))
}

func (this *QStringMatcher) SetCaseSensitivity(cs uintptr) {
	C.QStringMatcher_SetCaseSensitivity(this.h, (C.uintptr_t)(cs))
}

func (this *QStringMatcher) IndexIn(str string) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QStringMatcher_IndexIn(this.h, str_Cstring, C.ulong(len(str)))
	return (int)(ret)
}

func (this *QStringMatcher) IndexIn2(str *QChar, length int) int {
	ret := C.QStringMatcher_IndexIn2(this.h, str.cPointer(), (C.int)(length))
	return (int)(ret)
}

func (this *QStringMatcher) Pattern() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStringMatcher_Pattern(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStringMatcher) CaseSensitivity() uintptr {
	ret := C.QStringMatcher_CaseSensitivity(this.h)
	return (uintptr)(ret)
}

func (this *QStringMatcher) IndexIn22(str string, from int) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QStringMatcher_IndexIn22(this.h, str_Cstring, C.ulong(len(str)), (C.int)(from))
	return (int)(ret)
}

func (this *QStringMatcher) IndexIn3(str *QChar, length int, from int) int {
	ret := C.QStringMatcher_IndexIn3(this.h, str.cPointer(), (C.int)(length), (C.int)(from))
	return (int)(ret)
}

func (this *QStringMatcher) Delete() {
	C.QStringMatcher_Delete(this.h)
}
