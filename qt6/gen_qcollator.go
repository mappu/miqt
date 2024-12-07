package qt6

/*

#include "gen_qcollator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCollatorSortKey struct {
	h          *C.QCollatorSortKey
	isSubclass bool
}

func (this *QCollatorSortKey) cPointer() *C.QCollatorSortKey {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCollatorSortKey) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCollatorSortKey constructs the type using only CGO pointers.
func newQCollatorSortKey(h *C.QCollatorSortKey) *QCollatorSortKey {
	if h == nil {
		return nil
	}
	return &QCollatorSortKey{h: h}
}

// UnsafeNewQCollatorSortKey constructs the type using only unsafe pointers.
func UnsafeNewQCollatorSortKey(h unsafe.Pointer) *QCollatorSortKey {
	if h == nil {
		return nil
	}

	return &QCollatorSortKey{h: (*C.QCollatorSortKey)(h)}
}

// NewQCollatorSortKey constructs a new QCollatorSortKey object.
func NewQCollatorSortKey(other *QCollatorSortKey) *QCollatorSortKey {
	var outptr_QCollatorSortKey *C.QCollatorSortKey = nil

	C.QCollatorSortKey_new(other.cPointer(), &outptr_QCollatorSortKey)
	ret := newQCollatorSortKey(outptr_QCollatorSortKey)
	ret.isSubclass = true
	return ret
}

func (this *QCollatorSortKey) OperatorAssign(other *QCollatorSortKey) {
	C.QCollatorSortKey_OperatorAssign(this.h, other.cPointer())
}

func (this *QCollatorSortKey) Swap(other *QCollatorSortKey) {
	C.QCollatorSortKey_Swap(this.h, other.cPointer())
}

func (this *QCollatorSortKey) Compare(key *QCollatorSortKey) int {
	return (int)(C.QCollatorSortKey_Compare(this.h, key.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCollatorSortKey) Delete() {
	C.QCollatorSortKey_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCollatorSortKey) GoGC() {
	runtime.SetFinalizer(this, func(this *QCollatorSortKey) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCollator struct {
	h          *C.QCollator
	isSubclass bool
}

func (this *QCollator) cPointer() *C.QCollator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCollator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCollator constructs the type using only CGO pointers.
func newQCollator(h *C.QCollator) *QCollator {
	if h == nil {
		return nil
	}
	return &QCollator{h: h}
}

// UnsafeNewQCollator constructs the type using only unsafe pointers.
func UnsafeNewQCollator(h unsafe.Pointer) *QCollator {
	if h == nil {
		return nil
	}

	return &QCollator{h: (*C.QCollator)(h)}
}

// NewQCollator constructs a new QCollator object.
func NewQCollator() *QCollator {
	var outptr_QCollator *C.QCollator = nil

	C.QCollator_new(&outptr_QCollator)
	ret := newQCollator(outptr_QCollator)
	ret.isSubclass = true
	return ret
}

// NewQCollator2 constructs a new QCollator object.
func NewQCollator2(locale *QLocale) *QCollator {
	var outptr_QCollator *C.QCollator = nil

	C.QCollator_new2(locale.cPointer(), &outptr_QCollator)
	ret := newQCollator(outptr_QCollator)
	ret.isSubclass = true
	return ret
}

// NewQCollator3 constructs a new QCollator object.
func NewQCollator3(param1 *QCollator) *QCollator {
	var outptr_QCollator *C.QCollator = nil

	C.QCollator_new3(param1.cPointer(), &outptr_QCollator)
	ret := newQCollator(outptr_QCollator)
	ret.isSubclass = true
	return ret
}

func (this *QCollator) OperatorAssign(param1 *QCollator) {
	C.QCollator_OperatorAssign(this.h, param1.cPointer())
}

func (this *QCollator) Swap(other *QCollator) {
	C.QCollator_Swap(this.h, other.cPointer())
}

func (this *QCollator) SetLocale(locale *QLocale) {
	C.QCollator_SetLocale(this.h, locale.cPointer())
}

func (this *QCollator) Locale() *QLocale {
	_goptr := newQLocale(C.QCollator_Locale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCollator) CaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QCollator_CaseSensitivity(this.h))
}

func (this *QCollator) SetCaseSensitivity(cs CaseSensitivity) {
	C.QCollator_SetCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QCollator) SetNumericMode(on bool) {
	C.QCollator_SetNumericMode(this.h, (C.bool)(on))
}

func (this *QCollator) NumericMode() bool {
	return (bool)(C.QCollator_NumericMode(this.h))
}

func (this *QCollator) SetIgnorePunctuation(on bool) {
	C.QCollator_SetIgnorePunctuation(this.h, (C.bool)(on))
}

func (this *QCollator) IgnorePunctuation() bool {
	return (bool)(C.QCollator_IgnorePunctuation(this.h))
}

func (this *QCollator) Compare(s1 string, s2 string) int {
	s1_ms := C.struct_miqt_string{}
	s1_ms.data = C.CString(s1)
	s1_ms.len = C.size_t(len(s1))
	defer C.free(unsafe.Pointer(s1_ms.data))
	s2_ms := C.struct_miqt_string{}
	s2_ms.data = C.CString(s2)
	s2_ms.len = C.size_t(len(s2))
	defer C.free(unsafe.Pointer(s2_ms.data))
	return (int)(C.QCollator_Compare(this.h, s1_ms, s2_ms))
}

func (this *QCollator) Compare2(s1 *QChar, len1 int64, s2 *QChar, len2 int64) int {
	return (int)(C.QCollator_Compare2(this.h, s1.cPointer(), (C.ptrdiff_t)(len1), s2.cPointer(), (C.ptrdiff_t)(len2)))
}

func (this *QCollator) OperatorCall(s1 string, s2 string) bool {
	s1_ms := C.struct_miqt_string{}
	s1_ms.data = C.CString(s1)
	s1_ms.len = C.size_t(len(s1))
	defer C.free(unsafe.Pointer(s1_ms.data))
	s2_ms := C.struct_miqt_string{}
	s2_ms.data = C.CString(s2)
	s2_ms.len = C.size_t(len(s2))
	defer C.free(unsafe.Pointer(s2_ms.data))
	return (bool)(C.QCollator_OperatorCall(this.h, s1_ms, s2_ms))
}

func (this *QCollator) SortKey(stringVal string) *QCollatorSortKey {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQCollatorSortKey(C.QCollator_SortKey(this.h, stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QCollator) Delete() {
	C.QCollator_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCollator) GoGC() {
	runtime.SetFinalizer(this, func(this *QCollator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
