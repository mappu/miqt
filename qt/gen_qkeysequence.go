package qt

/*

#include "gen_qkeysequence.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QKeySequence struct {
	h *C.QKeySequence
}

func (this *QKeySequence) cPointer() *C.QKeySequence {
	if this == nil {
		return nil
	}
	return this.h
}

func newQKeySequence(h *C.QKeySequence) *QKeySequence {
	if h == nil {
		return nil
	}
	return &QKeySequence{h: h}
}

func newQKeySequence_U(h unsafe.Pointer) *QKeySequence {
	return newQKeySequence((*C.QKeySequence)(h))
}

// NewQKeySequence constructs a new QKeySequence object.
func NewQKeySequence() *QKeySequence {
	ret := C.QKeySequence_new()
	return newQKeySequence(ret)
}

// NewQKeySequence2 constructs a new QKeySequence object.
func NewQKeySequence2(key string) *QKeySequence {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QKeySequence_new2(key_Cstring, C.ulong(len(key)))
	return newQKeySequence(ret)
}

// NewQKeySequence3 constructs a new QKeySequence object.
func NewQKeySequence3(k1 int) *QKeySequence {
	ret := C.QKeySequence_new3((C.int)(k1))
	return newQKeySequence(ret)
}

// NewQKeySequence4 constructs a new QKeySequence object.
func NewQKeySequence4(ks *QKeySequence) *QKeySequence {
	ret := C.QKeySequence_new4(ks.cPointer())
	return newQKeySequence(ret)
}

// NewQKeySequence5 constructs a new QKeySequence object.
func NewQKeySequence5(key uintptr) *QKeySequence {
	ret := C.QKeySequence_new5((C.uintptr_t)(key))
	return newQKeySequence(ret)
}

// NewQKeySequence6 constructs a new QKeySequence object.
func NewQKeySequence6(key string, format uintptr) *QKeySequence {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QKeySequence_new6(key_Cstring, C.ulong(len(key)), (C.uintptr_t)(format))
	return newQKeySequence(ret)
}

// NewQKeySequence7 constructs a new QKeySequence object.
func NewQKeySequence7(k1 int, k2 int) *QKeySequence {
	ret := C.QKeySequence_new7((C.int)(k1), (C.int)(k2))
	return newQKeySequence(ret)
}

// NewQKeySequence8 constructs a new QKeySequence object.
func NewQKeySequence8(k1 int, k2 int, k3 int) *QKeySequence {
	ret := C.QKeySequence_new8((C.int)(k1), (C.int)(k2), (C.int)(k3))
	return newQKeySequence(ret)
}

// NewQKeySequence9 constructs a new QKeySequence object.
func NewQKeySequence9(k1 int, k2 int, k3 int, k4 int) *QKeySequence {
	ret := C.QKeySequence_new9((C.int)(k1), (C.int)(k2), (C.int)(k3), (C.int)(k4))
	return newQKeySequence(ret)
}

func (this *QKeySequence) Count() int {
	ret := C.QKeySequence_Count(this.h)
	return (int)(ret)
}

func (this *QKeySequence) IsEmpty() bool {
	ret := C.QKeySequence_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QKeySequence) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequence_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QKeySequence_FromString(str string) *QKeySequence {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QKeySequence_FromString(str_Cstring, C.ulong(len(str)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQKeySequence(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QKeySequence) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QKeySequence_ListFromString(str string) []QKeySequence {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out **C.QKeySequence = nil
	var _out_len C.size_t = 0
	C.QKeySequence_ListFromString(str_Cstring, C.ulong(len(str)), &_out, &_out_len)
	ret := make([]QKeySequence, int(_out_len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQKeySequence(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QKeySequence_ListToString(list []QKeySequence) string {
	// For the C ABI, malloc a C array of raw pointers
	list_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.ulong(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = list[i].cPointer()
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequence_ListToString(&list_CArray[0], C.ulong(len(list)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QKeySequence) Matches(seq *QKeySequence) uintptr {
	ret := C.QKeySequence_Matches(this.h, seq.cPointer())
	return (uintptr)(ret)
}

func QKeySequence_Mnemonic(text string) *QKeySequence {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QKeySequence_Mnemonic(text_Cstring, C.ulong(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQKeySequence(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QKeySequence) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QKeySequence_KeyBindings(key uintptr) []QKeySequence {
	var _out **C.QKeySequence = nil
	var _out_len C.size_t = 0
	C.QKeySequence_KeyBindings((C.uintptr_t)(key), &_out, &_out_len)
	ret := make([]QKeySequence, int(_out_len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQKeySequence(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QKeySequence) OperatorSubscript(i uint) int {
	ret := C.QKeySequence_OperatorSubscript(this.h, (C.uint)(i))
	return (int)(ret)
}

func (this *QKeySequence) OperatorAssign(other *QKeySequence) {
	C.QKeySequence_OperatorAssign(this.h, other.cPointer())
}

func (this *QKeySequence) Swap(other *QKeySequence) {
	C.QKeySequence_Swap(this.h, other.cPointer())
}

func (this *QKeySequence) OperatorEqual(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorNotEqual(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorLesser(ks *QKeySequence) bool {
	ret := C.QKeySequence_OperatorLesser(this.h, ks.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorGreater(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorLesserOrEqual(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorGreaterOrEqual(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) IsDetached() bool {
	ret := C.QKeySequence_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QKeySequence) ToString1(format uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequence_ToString1(this.h, (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QKeySequence_FromString2(str string, format uintptr) *QKeySequence {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QKeySequence_FromString2(str_Cstring, C.ulong(len(str)), (C.uintptr_t)(format))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQKeySequence(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QKeySequence) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QKeySequence_ListFromString2(str string, format uintptr) []QKeySequence {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out **C.QKeySequence = nil
	var _out_len C.size_t = 0
	C.QKeySequence_ListFromString2(str_Cstring, C.ulong(len(str)), (C.uintptr_t)(format), &_out, &_out_len)
	ret := make([]QKeySequence, int(_out_len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQKeySequence(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QKeySequence_ListToString2(list []QKeySequence, format uintptr) string {
	// For the C ABI, malloc a C array of raw pointers
	list_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.ulong(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = list[i].cPointer()
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeySequence_ListToString2(&list_CArray[0], C.ulong(len(list)), (C.uintptr_t)(format), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QKeySequence) Delete() {
	C.QKeySequence_Delete(this.h)
}
