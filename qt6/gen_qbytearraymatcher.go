package qt6

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
	return newQByteArrayMatcher((*C.QByteArrayMatcher)(h))
}

// NewQByteArrayMatcher constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher() *QByteArrayMatcher {

	return newQByteArrayMatcher(C.QByteArrayMatcher_new())
}

// NewQByteArrayMatcher2 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher2(pattern []byte) *QByteArrayMatcher {
	pattern_alias := C.struct_miqt_string{}
	if len(pattern) > 0 {
		pattern_alias.data = (*C.char)(unsafe.Pointer(&pattern[0]))
	} else {
		pattern_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	pattern_alias.len = C.size_t(len(pattern))

	return newQByteArrayMatcher(C.QByteArrayMatcher_new2(pattern_alias))
}

// NewQByteArrayMatcher3 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher3(pattern QByteArrayView) *QByteArrayMatcher {

	return newQByteArrayMatcher(C.QByteArrayMatcher_new3(pattern.cPointer()))
}

// NewQByteArrayMatcher4 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher4(pattern string) *QByteArrayMatcher {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))

	return newQByteArrayMatcher(C.QByteArrayMatcher_new4(pattern_Cstring))
}

// NewQByteArrayMatcher5 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher5(other *QByteArrayMatcher) *QByteArrayMatcher {

	return newQByteArrayMatcher(C.QByteArrayMatcher_new5(other.cPointer()))
}

// NewQByteArrayMatcher6 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher6(pattern string, length int64) *QByteArrayMatcher {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))

	return newQByteArrayMatcher(C.QByteArrayMatcher_new6(pattern_Cstring, (C.ptrdiff_t)(length)))
}

func (this *QByteArrayMatcher) OperatorAssign(other *QByteArrayMatcher) {
	C.QByteArrayMatcher_operatorAssign(this.h, other.cPointer())
}

func (this *QByteArrayMatcher) SetPattern(pattern []byte) {
	pattern_alias := C.struct_miqt_string{}
	if len(pattern) > 0 {
		pattern_alias.data = (*C.char)(unsafe.Pointer(&pattern[0]))
	} else {
		pattern_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	pattern_alias.len = C.size_t(len(pattern))
	C.QByteArrayMatcher_setPattern(this.h, pattern_alias)
}

func (this *QByteArrayMatcher) IndexIn(str string, lenVal int64) int64 {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (int64)(C.QByteArrayMatcher_indexIn(this.h, str_Cstring, (C.ptrdiff_t)(lenVal)))
}

func (this *QByteArrayMatcher) IndexInWithData(data QByteArrayView) int64 {
	return (int64)(C.QByteArrayMatcher_indexInWithData(this.h, data.cPointer()))
}

func (this *QByteArrayMatcher) Pattern() []byte {
	var _bytearray C.struct_miqt_string = C.QByteArrayMatcher_pattern(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QByteArrayMatcher) IndexIn3(str string, lenVal int64, from int64) int64 {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (int64)(C.QByteArrayMatcher_indexIn3(this.h, str_Cstring, (C.ptrdiff_t)(lenVal), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayMatcher) IndexIn2(data QByteArrayView, from int64) int64 {
	return (int64)(C.QByteArrayMatcher_indexIn2(this.h, data.cPointer(), (C.ptrdiff_t)(from)))
}

// Delete this object from C++ memory.
func (this *QByteArrayMatcher) Delete() {
	C.QByteArrayMatcher_delete(this.h)
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
	return newQStaticByteArrayMatcherBase((*C.QStaticByteArrayMatcherBase)(h))
}
