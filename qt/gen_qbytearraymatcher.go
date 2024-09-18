package qt

/*

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
	if h == nil {
		return nil
	}
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
	return (int)(C.QByteArrayMatcher_IndexIn(this.h, ba.cPointer()))
}

func (this *QByteArrayMatcher) IndexIn2(str string, lenVal int) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (int)(C.QByteArrayMatcher_IndexIn2(this.h, str_Cstring, (C.int)(lenVal)))
}

func (this *QByteArrayMatcher) Pattern() *QByteArray {
	_ret := C.QByteArrayMatcher_Pattern(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayMatcher) IndexIn22(ba *QByteArray, from int) int {
	return (int)(C.QByteArrayMatcher_IndexIn22(this.h, ba.cPointer(), (C.int)(from)))
}

func (this *QByteArrayMatcher) IndexIn3(str string, lenVal int, from int) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (int)(C.QByteArrayMatcher_IndexIn3(this.h, str_Cstring, (C.int)(lenVal), (C.int)(from)))
}

// Delete this object from C++ memory.
func (this *QByteArrayMatcher) Delete() {
	C.QByteArrayMatcher_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QByteArrayMatcher) GoGC() {
	runtime.SetFinalizer(this, func(this *QByteArrayMatcher) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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
	if h == nil {
		return nil
	}
	return &QStaticByteArrayMatcherBase{h: h}
}

func newQStaticByteArrayMatcherBase_U(h unsafe.Pointer) *QStaticByteArrayMatcherBase {
	return newQStaticByteArrayMatcherBase((*C.QStaticByteArrayMatcherBase)(h))
}

// Delete this object from C++ memory.
func (this *QStaticByteArrayMatcherBase) Delete() {
	C.QStaticByteArrayMatcherBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStaticByteArrayMatcherBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QStaticByteArrayMatcherBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
