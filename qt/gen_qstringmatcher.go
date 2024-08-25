package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
func NewQStringMatcher2(other *QStringMatcher) *QStringMatcher {
	ret := C.QStringMatcher_new2(other.cPointer())
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
