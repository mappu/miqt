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
	h *C.QCollatorSortKey
}

func (this *QCollatorSortKey) cPointer() *C.QCollatorSortKey {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCollatorSortKey(h *C.QCollatorSortKey) *QCollatorSortKey {
	if h == nil {
		return nil
	}
	return &QCollatorSortKey{h: h}
}

func newQCollatorSortKey_U(h unsafe.Pointer) *QCollatorSortKey {
	return newQCollatorSortKey((*C.QCollatorSortKey)(h))
}

// NewQCollatorSortKey constructs a new QCollatorSortKey object.
func NewQCollatorSortKey(other *QCollatorSortKey) *QCollatorSortKey {
	ret := C.QCollatorSortKey_new(other.cPointer())
	return newQCollatorSortKey(ret)
}

func (this *QCollatorSortKey) OperatorAssign(other *QCollatorSortKey) {
	C.QCollatorSortKey_OperatorAssign(this.h, other.cPointer())
}

func (this *QCollatorSortKey) Swap(other *QCollatorSortKey) {
	C.QCollatorSortKey_Swap(this.h, other.cPointer())
}

func (this *QCollatorSortKey) Compare(key *QCollatorSortKey) int {
	ret := C.QCollatorSortKey_Compare(this.h, key.cPointer())
	return (int)(ret)
}

func (this *QCollatorSortKey) Delete() {
	C.QCollatorSortKey_Delete(this.h)
}

type QCollator struct {
	h *C.QCollator
}

func (this *QCollator) cPointer() *C.QCollator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCollator(h *C.QCollator) *QCollator {
	if h == nil {
		return nil
	}
	return &QCollator{h: h}
}

func newQCollator_U(h unsafe.Pointer) *QCollator {
	return newQCollator((*C.QCollator)(h))
}

// NewQCollator constructs a new QCollator object.
func NewQCollator() *QCollator {
	ret := C.QCollator_new()
	return newQCollator(ret)
}

// NewQCollator2 constructs a new QCollator object.
func NewQCollator2(locale *QLocale) *QCollator {
	ret := C.QCollator_new2(locale.cPointer())
	return newQCollator(ret)
}

// NewQCollator3 constructs a new QCollator object.
func NewQCollator3(param1 *QCollator) *QCollator {
	ret := C.QCollator_new3(param1.cPointer())
	return newQCollator(ret)
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
	ret := C.QCollator_Locale(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLocale(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLocale) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCollator) CaseSensitivity() uintptr {
	ret := C.QCollator_CaseSensitivity(this.h)
	return (uintptr)(ret)
}

func (this *QCollator) SetCaseSensitivity(cs uintptr) {
	C.QCollator_SetCaseSensitivity(this.h, (C.uintptr_t)(cs))
}

func (this *QCollator) SetNumericMode(on bool) {
	C.QCollator_SetNumericMode(this.h, (C.bool)(on))
}

func (this *QCollator) NumericMode() bool {
	ret := C.QCollator_NumericMode(this.h)
	return (bool)(ret)
}

func (this *QCollator) SetIgnorePunctuation(on bool) {
	C.QCollator_SetIgnorePunctuation(this.h, (C.bool)(on))
}

func (this *QCollator) IgnorePunctuation() bool {
	ret := C.QCollator_IgnorePunctuation(this.h)
	return (bool)(ret)
}

func (this *QCollator) Compare(s1 string, s2 string) int {
	s1_Cstring := C.CString(s1)
	defer C.free(unsafe.Pointer(s1_Cstring))
	s2_Cstring := C.CString(s2)
	defer C.free(unsafe.Pointer(s2_Cstring))
	ret := C.QCollator_Compare(this.h, s1_Cstring, C.size_t(len(s1)), s2_Cstring, C.size_t(len(s2)))
	return (int)(ret)
}

func (this *QCollator) Compare3(s1 *QChar, len1 int, s2 *QChar, len2 int) int {
	ret := C.QCollator_Compare3(this.h, s1.cPointer(), (C.int)(len1), s2.cPointer(), (C.int)(len2))
	return (int)(ret)
}

func (this *QCollator) OperatorCall(s1 string, s2 string) bool {
	s1_Cstring := C.CString(s1)
	defer C.free(unsafe.Pointer(s1_Cstring))
	s2_Cstring := C.CString(s2)
	defer C.free(unsafe.Pointer(s2_Cstring))
	ret := C.QCollator_OperatorCall(this.h, s1_Cstring, C.size_t(len(s1)), s2_Cstring, C.size_t(len(s2)))
	return (bool)(ret)
}

func (this *QCollator) SortKey(stringVal string) *QCollatorSortKey {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QCollator_SortKey(this.h, stringVal_Cstring, C.size_t(len(stringVal)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCollatorSortKey(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCollatorSortKey) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCollator) Delete() {
	C.QCollator_Delete(this.h)
}
