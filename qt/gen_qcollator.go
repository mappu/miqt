package qt

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
	h  *C.QCollatorSortKey
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCollatorSortKey) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQCollatorSortKey((*C.QCollatorSortKey)(h))
}

// NewQCollatorSortKey constructs a new QCollatorSortKey object.
func NewQCollatorSortKey(other *QCollatorSortKey) *QCollatorSortKey {
	defer runtime.KeepAlive(other)

	return newQCollatorSortKey(C.QCollatorSortKey_new(other.cPointer()))
}

func (this *QCollatorSortKey) OperatorAssign(other *QCollatorSortKey) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QCollatorSortKey_operatorAssign(this.h, other.cPointer())
}

func (this *QCollatorSortKey) Swap(other *QCollatorSortKey) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QCollatorSortKey_swap(this.h, other.cPointer())
}

func (this *QCollatorSortKey) Compare(key *QCollatorSortKey) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(key)
	return (int)(C.QCollatorSortKey_compare(this.h, key.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCollatorSortKey) Delete() {
	C.QCollatorSortKey_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QCollatorSortKey) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCollatorSortKey_delete((*C.QCollatorSortKey)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QCollator struct {
	h  *C.QCollator
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCollator) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQCollator((*C.QCollator)(h))
}

// NewQCollator constructs a new QCollator object.
func NewQCollator() *QCollator {

	return newQCollator(C.QCollator_new())
}

// NewQCollator2 constructs a new QCollator object.
func NewQCollator2(locale *QLocale) *QCollator {
	defer runtime.KeepAlive(locale)

	return newQCollator(C.QCollator_new2(locale.cPointer()))
}

// NewQCollator3 constructs a new QCollator object.
func NewQCollator3(param1 *QCollator) *QCollator {
	defer runtime.KeepAlive(param1)

	return newQCollator(C.QCollator_new3(param1.cPointer()))
}

func (this *QCollator) OperatorAssign(param1 *QCollator) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QCollator_operatorAssign(this.h, param1.cPointer())
}

func (this *QCollator) Swap(other *QCollator) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QCollator_swap(this.h, other.cPointer())
}

func (this *QCollator) SetLocale(locale *QLocale) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(locale)
	C.QCollator_setLocale(this.h, locale.cPointer())
}

func (this *QCollator) Locale() *QLocale {
	defer runtime.KeepAlive(this)
	_goptr := newQLocale(C.QCollator_locale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCollator) CaseSensitivity() CaseSensitivity {
	defer runtime.KeepAlive(this)
	return (CaseSensitivity)(C.QCollator_caseSensitivity(this.h))
}

func (this *QCollator) SetCaseSensitivity(cs CaseSensitivity) {
	defer runtime.KeepAlive(this)
	C.QCollator_setCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QCollator) SetNumericMode(on bool) {
	defer runtime.KeepAlive(this)
	C.QCollator_setNumericMode(this.h, (C.bool)(on))
}

func (this *QCollator) NumericMode() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QCollator_numericMode(this.h))
}

func (this *QCollator) SetIgnorePunctuation(on bool) {
	defer runtime.KeepAlive(this)
	C.QCollator_setIgnorePunctuation(this.h, (C.bool)(on))
}

func (this *QCollator) IgnorePunctuation() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QCollator_ignorePunctuation(this.h))
}

func (this *QCollator) Compare(s1 string, s2 string) int {
	defer runtime.KeepAlive(this)
	s1_ms := C.struct_miqt_string{}
	s1_ms.data = C.CString(s1)
	s1_ms.len = C.size_t(len(s1))
	defer C.free(unsafe.Pointer(s1_ms.data))
	s2_ms := C.struct_miqt_string{}
	s2_ms.data = C.CString(s2)
	s2_ms.len = C.size_t(len(s2))
	defer C.free(unsafe.Pointer(s2_ms.data))
	return (int)(C.QCollator_compare(this.h, s1_ms, s2_ms))
}

func (this *QCollator) Compare3(s1 *QChar, len1 int, s2 *QChar, len2 int) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(s1)
	defer runtime.KeepAlive(s2)
	return (int)(C.QCollator_compare3(this.h, s1.cPointer(), (C.int)(len1), s2.cPointer(), (C.int)(len2)))
}

func (this *QCollator) OperatorCall(s1 string, s2 string) bool {
	defer runtime.KeepAlive(this)
	s1_ms := C.struct_miqt_string{}
	s1_ms.data = C.CString(s1)
	s1_ms.len = C.size_t(len(s1))
	defer C.free(unsafe.Pointer(s1_ms.data))
	s2_ms := C.struct_miqt_string{}
	s2_ms.data = C.CString(s2)
	s2_ms.len = C.size_t(len(s2))
	defer C.free(unsafe.Pointer(s2_ms.data))
	return (bool)(C.QCollator_operatorCall(this.h, s1_ms, s2_ms))
}

func (this *QCollator) SortKey(stringVal string) *QCollatorSortKey {
	defer runtime.KeepAlive(this)
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQCollatorSortKey(C.QCollator_sortKey(this.h, stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QCollator) Delete() {
	C.QCollator_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QCollator) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCollator_delete((*C.QCollator)(gc[0]))
	})
	this.miqtSetGC(gc)
}
