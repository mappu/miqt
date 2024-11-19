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
	h          *C.QByteArrayMatcher
	isSubclass bool
}

func (this *QByteArrayMatcher) cPointer() *C.QByteArrayMatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QByteArrayMatcher) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQByteArrayMatcher constructs the type using only CGO pointers.
func newQByteArrayMatcher(h *C.QByteArrayMatcher) *QByteArrayMatcher {
	if h == nil {
		return nil
	}
	return &QByteArrayMatcher{h: h}
}

// UnsafeNewQByteArrayMatcher constructs the type using only unsafe pointers.
func UnsafeNewQByteArrayMatcher(h unsafe.Pointer) *QByteArrayMatcher {
	if h == nil {
		return nil
	}

	return &QByteArrayMatcher{h: (*C.QByteArrayMatcher)(h)}
}

// NewQByteArrayMatcher constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher() *QByteArrayMatcher {
	var outptr_QByteArrayMatcher *C.QByteArrayMatcher = nil

	C.QByteArrayMatcher_new(&outptr_QByteArrayMatcher)
	ret := newQByteArrayMatcher(outptr_QByteArrayMatcher)
	ret.isSubclass = true
	return ret
}

// NewQByteArrayMatcher2 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher2(pattern []byte) *QByteArrayMatcher {
	pattern_alias := C.struct_miqt_string{}
	pattern_alias.data = (*C.char)(unsafe.Pointer(&pattern[0]))
	pattern_alias.len = C.size_t(len(pattern))
	var outptr_QByteArrayMatcher *C.QByteArrayMatcher = nil

	C.QByteArrayMatcher_new2(pattern_alias, &outptr_QByteArrayMatcher)
	ret := newQByteArrayMatcher(outptr_QByteArrayMatcher)
	ret.isSubclass = true
	return ret
}

// NewQByteArrayMatcher3 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher3(pattern string, length int) *QByteArrayMatcher {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	var outptr_QByteArrayMatcher *C.QByteArrayMatcher = nil

	C.QByteArrayMatcher_new3(pattern_Cstring, (C.int)(length), &outptr_QByteArrayMatcher)
	ret := newQByteArrayMatcher(outptr_QByteArrayMatcher)
	ret.isSubclass = true
	return ret
}

// NewQByteArrayMatcher4 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher4(other *QByteArrayMatcher) *QByteArrayMatcher {
	var outptr_QByteArrayMatcher *C.QByteArrayMatcher = nil

	C.QByteArrayMatcher_new4(other.cPointer(), &outptr_QByteArrayMatcher)
	ret := newQByteArrayMatcher(outptr_QByteArrayMatcher)
	ret.isSubclass = true
	return ret
}

func (this *QByteArrayMatcher) OperatorAssign(other *QByteArrayMatcher) {
	C.QByteArrayMatcher_OperatorAssign(this.h, other.cPointer())
}

func (this *QByteArrayMatcher) SetPattern(pattern []byte) {
	pattern_alias := C.struct_miqt_string{}
	pattern_alias.data = (*C.char)(unsafe.Pointer(&pattern[0]))
	pattern_alias.len = C.size_t(len(pattern))
	C.QByteArrayMatcher_SetPattern(this.h, pattern_alias)
}

func (this *QByteArrayMatcher) IndexIn(ba []byte) int {
	ba_alias := C.struct_miqt_string{}
	ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	ba_alias.len = C.size_t(len(ba))
	return (int)(C.QByteArrayMatcher_IndexIn(this.h, ba_alias))
}

func (this *QByteArrayMatcher) IndexIn2(str string, lenVal int) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (int)(C.QByteArrayMatcher_IndexIn2(this.h, str_Cstring, (C.int)(lenVal)))
}

func (this *QByteArrayMatcher) Pattern() []byte {
	var _bytearray C.struct_miqt_string = C.QByteArrayMatcher_Pattern(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QByteArrayMatcher) IndexIn22(ba []byte, from int) int {
	ba_alias := C.struct_miqt_string{}
	ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	ba_alias.len = C.size_t(len(ba))
	return (int)(C.QByteArrayMatcher_IndexIn22(this.h, ba_alias, (C.int)(from)))
}

func (this *QByteArrayMatcher) IndexIn3(str string, lenVal int, from int) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (int)(C.QByteArrayMatcher_IndexIn3(this.h, str_Cstring, (C.int)(lenVal), (C.int)(from)))
}

// Delete this object from C++ memory.
func (this *QByteArrayMatcher) Delete() {
	C.QByteArrayMatcher_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStaticByteArrayMatcherBase
	isSubclass bool
}

func (this *QStaticByteArrayMatcherBase) cPointer() *C.QStaticByteArrayMatcherBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStaticByteArrayMatcherBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStaticByteArrayMatcherBase constructs the type using only CGO pointers.
func newQStaticByteArrayMatcherBase(h *C.QStaticByteArrayMatcherBase) *QStaticByteArrayMatcherBase {
	if h == nil {
		return nil
	}
	return &QStaticByteArrayMatcherBase{h: h}
}

// UnsafeNewQStaticByteArrayMatcherBase constructs the type using only unsafe pointers.
func UnsafeNewQStaticByteArrayMatcherBase(h unsafe.Pointer) *QStaticByteArrayMatcherBase {
	if h == nil {
		return nil
	}

	return &QStaticByteArrayMatcherBase{h: (*C.QStaticByteArrayMatcherBase)(h)}
}

// Delete this object from C++ memory.
func (this *QStaticByteArrayMatcherBase) Delete() {
	C.QStaticByteArrayMatcherBase_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStaticByteArrayMatcherBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QStaticByteArrayMatcherBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
