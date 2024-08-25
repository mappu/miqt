package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qbytearraymatcher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QByteArrayMatcher struct {
	h *C.QByteArrayMatcher
}

func (this *QByteArrayMatcher) cPointer() *C.QByteArrayMatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func newQByteArrayMatcher(h *C.QByteArrayMatcher) *QByteArrayMatcher {
	return &QByteArrayMatcher{h: h}
}

func newQByteArrayMatcher_U(h unsafe.Pointer) *QByteArrayMatcher {
	return newQByteArrayMatcher((*C.QByteArrayMatcher)(h))
}

// NewQByteArrayMatcher constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher() *QByteArrayMatcher {
	ret := C.QByteArrayMatcher_new()
	return newQByteArrayMatcher(ret)
}

// NewQByteArrayMatcher2 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher2(pattern *QByteArray) *QByteArrayMatcher {
	ret := C.QByteArrayMatcher_new2(pattern.cPointer())
	return newQByteArrayMatcher(ret)
}

// NewQByteArrayMatcher3 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher3(pattern string, length int) *QByteArrayMatcher {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	ret := C.QByteArrayMatcher_new3(pattern_Cstring, (C.int)(length))
	return newQByteArrayMatcher(ret)
}

// NewQByteArrayMatcher4 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher4(other *QByteArrayMatcher) *QByteArrayMatcher {
	ret := C.QByteArrayMatcher_new4(other.cPointer())
	return newQByteArrayMatcher(ret)
}

func (this *QByteArrayMatcher) OperatorAssign(other *QByteArrayMatcher) {
	C.QByteArrayMatcher_OperatorAssign(this.h, other.cPointer())
}

func (this *QByteArrayMatcher) SetPattern(pattern *QByteArray) {
	C.QByteArrayMatcher_SetPattern(this.h, pattern.cPointer())
}

func (this *QByteArrayMatcher) IndexIn(ba *QByteArray) int {
	ret := C.QByteArrayMatcher_IndexIn(this.h, ba.cPointer())
	return (int)(ret)
}

func (this *QByteArrayMatcher) IndexIn2(str string, lenVal int) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QByteArrayMatcher_IndexIn2(this.h, str_Cstring, (C.int)(lenVal))
	return (int)(ret)
}

func (this *QByteArrayMatcher) Pattern() *QByteArray {
	ret := C.QByteArrayMatcher_Pattern(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArrayMatcher) IndexIn22(ba *QByteArray, from int) int {
	ret := C.QByteArrayMatcher_IndexIn22(this.h, ba.cPointer(), (C.int)(from))
	return (int)(ret)
}

func (this *QByteArrayMatcher) IndexIn3(str string, lenVal int, from int) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QByteArrayMatcher_IndexIn3(this.h, str_Cstring, (C.int)(lenVal), (C.int)(from))
	return (int)(ret)
}

func (this *QByteArrayMatcher) Delete() {
	C.QByteArrayMatcher_Delete(this.h)
}

type QStaticByteArrayMatcherBase struct {
	h *C.QStaticByteArrayMatcherBase
}

func (this *QStaticByteArrayMatcherBase) cPointer() *C.QStaticByteArrayMatcherBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStaticByteArrayMatcherBase(h *C.QStaticByteArrayMatcherBase) *QStaticByteArrayMatcherBase {
	return &QStaticByteArrayMatcherBase{h: h}
}

func newQStaticByteArrayMatcherBase_U(h unsafe.Pointer) *QStaticByteArrayMatcherBase {
	return newQStaticByteArrayMatcherBase((*C.QStaticByteArrayMatcherBase)(h))
}

func (this *QStaticByteArrayMatcherBase) Delete() {
	C.QStaticByteArrayMatcherBase_Delete(this.h)
}
