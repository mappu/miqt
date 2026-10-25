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
	h  *C.QByteArrayMatcher
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QByteArrayMatcher) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(pattern)

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
	defer runtime.KeepAlive(other)

	return newQByteArrayMatcher(C.QByteArrayMatcher_new5(other.cPointer()))
}

// NewQByteArrayMatcher6 constructs a new QByteArrayMatcher object.
func NewQByteArrayMatcher6(pattern string, length int64) *QByteArrayMatcher {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))

	return newQByteArrayMatcher(C.QByteArrayMatcher_new6(pattern_Cstring, (C.ptrdiff_t)(length)))
}

func (this *QByteArrayMatcher) OperatorAssign(other *QByteArrayMatcher) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QByteArrayMatcher_operatorAssign(this.h, other.cPointer())
}

func (this *QByteArrayMatcher) SetPattern(pattern []byte) {
	defer runtime.KeepAlive(this)
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
	defer runtime.KeepAlive(this)
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (int64)(C.QByteArrayMatcher_indexIn(this.h, str_Cstring, (C.ptrdiff_t)(lenVal)))
}

func (this *QByteArrayMatcher) IndexInWithData(data QByteArrayView) int64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	return (int64)(C.QByteArrayMatcher_indexInWithData(this.h, data.cPointer()))
}

func (this *QByteArrayMatcher) Pattern() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QByteArrayMatcher_pattern(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QByteArrayMatcher) IndexIn2(str string, lenVal int64, from int64) int64 {
	defer runtime.KeepAlive(this)
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (int64)(C.QByteArrayMatcher_indexIn2(this.h, str_Cstring, (C.ptrdiff_t)(lenVal), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayMatcher) IndexIn3(data QByteArrayView, from int64) int64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	return (int64)(C.QByteArrayMatcher_indexIn3(this.h, data.cPointer(), (C.ptrdiff_t)(from)))
}

// Delete this object from C++ memory.
func (this *QByteArrayMatcher) Delete() {
	C.QByteArrayMatcher_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QByteArrayMatcher) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QByteArrayMatcher_delete((*C.QByteArrayMatcher)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStaticByteArrayMatcherBase struct {
	h  *C.QStaticByteArrayMatcherBase
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStaticByteArrayMatcherBase) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
