package qt

/*

#include "gen_qbytearray.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QByteArrayDataPtr struct {
	h *C.QByteArrayDataPtr
}

func (this *QByteArrayDataPtr) cPointer() *C.QByteArrayDataPtr {
	if this == nil {
		return nil
	}
	return this.h
}

func newQByteArrayDataPtr(h *C.QByteArrayDataPtr) *QByteArrayDataPtr {
	if h == nil {
		return nil
	}
	return &QByteArrayDataPtr{h: h}
}

func newQByteArrayDataPtr_U(h unsafe.Pointer) *QByteArrayDataPtr {
	return newQByteArrayDataPtr((*C.QByteArrayDataPtr)(h))
}

// NewQByteArrayDataPtr constructs a new QByteArrayDataPtr object.
func NewQByteArrayDataPtr() *QByteArrayDataPtr {
	ret := C.QByteArrayDataPtr_new()
	return newQByteArrayDataPtr(ret)
}

// NewQByteArrayDataPtr2 constructs a new QByteArrayDataPtr object.
func NewQByteArrayDataPtr2(param1 *QByteArrayDataPtr) *QByteArrayDataPtr {
	ret := C.QByteArrayDataPtr_new2(param1.cPointer())
	return newQByteArrayDataPtr(ret)
}

func (this *QByteArrayDataPtr) Delete() {
	C.QByteArrayDataPtr_Delete(this.h)
}

type QByteArray struct {
	h *C.QByteArray
}

func (this *QByteArray) cPointer() *C.QByteArray {
	if this == nil {
		return nil
	}
	return this.h
}

func newQByteArray(h *C.QByteArray) *QByteArray {
	if h == nil {
		return nil
	}
	return &QByteArray{h: h}
}

func newQByteArray_U(h unsafe.Pointer) *QByteArray {
	return newQByteArray((*C.QByteArray)(h))
}

// NewQByteArray constructs a new QByteArray object.
func NewQByteArray() *QByteArray {
	ret := C.QByteArray_new()
	return newQByteArray(ret)
}

// NewQByteArray2 constructs a new QByteArray object.
func NewQByteArray2(param1 string) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QByteArray_new2(param1_Cstring)
	return newQByteArray(ret)
}

// NewQByteArray3 constructs a new QByteArray object.
func NewQByteArray3(size int, c byte) *QByteArray {
	ret := C.QByteArray_new3((C.int)(size), (C.char)(c))
	return newQByteArray(ret)
}

// NewQByteArray4 constructs a new QByteArray object.
func NewQByteArray4(size int, param2 uintptr) *QByteArray {
	ret := C.QByteArray_new4((C.int)(size), (C.uintptr_t)(param2))
	return newQByteArray(ret)
}

// NewQByteArray5 constructs a new QByteArray object.
func NewQByteArray5(param1 *QByteArray) *QByteArray {
	ret := C.QByteArray_new5(param1.cPointer())
	return newQByteArray(ret)
}

// NewQByteArray6 constructs a new QByteArray object.
func NewQByteArray6(dd QByteArrayDataPtr) *QByteArray {
	ret := C.QByteArray_new6(dd.cPointer())
	return newQByteArray(ret)
}

// NewQByteArray7 constructs a new QByteArray object.
func NewQByteArray7(param1 string, size int) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QByteArray_new7(param1_Cstring, (C.int)(size))
	return newQByteArray(ret)
}

func (this *QByteArray) OperatorAssign(param1 *QByteArray) {
	C.QByteArray_OperatorAssign(this.h, param1.cPointer())
}

func (this *QByteArray) OperatorAssignWithStr(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QByteArray_OperatorAssignWithStr(this.h, str_Cstring)
}

func (this *QByteArray) Swap(other *QByteArray) {
	C.QByteArray_Swap(this.h, other.cPointer())
}

func (this *QByteArray) Size() int {
	ret := C.QByteArray_Size(this.h)
	return (int)(ret)
}

func (this *QByteArray) IsEmpty() bool {
	ret := C.QByteArray_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QByteArray) Resize(size int) {
	C.QByteArray_Resize(this.h, (C.int)(size))
}

func (this *QByteArray) Fill(c byte) *QByteArray {
	ret := C.QByteArray_Fill(this.h, (C.char)(c))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Capacity() int {
	ret := C.QByteArray_Capacity(this.h)
	return (int)(ret)
}

func (this *QByteArray) Reserve(size int) {
	C.QByteArray_Reserve(this.h, (C.int)(size))
}

func (this *QByteArray) Squeeze() {
	C.QByteArray_Squeeze(this.h)
}

func (this *QByteArray) Data() unsafe.Pointer {
	ret := C.QByteArray_Data(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) Data2() unsafe.Pointer {
	ret := C.QByteArray_Data2(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) ConstData() unsafe.Pointer {
	ret := C.QByteArray_ConstData(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) Detach() {
	C.QByteArray_Detach(this.h)
}

func (this *QByteArray) IsDetached() bool {
	ret := C.QByteArray_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QByteArray) IsSharedWith(other *QByteArray) bool {
	ret := C.QByteArray_IsSharedWith(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QByteArray) Clear() {
	C.QByteArray_Clear(this.h)
}

func (this *QByteArray) At(i int) byte {
	ret := C.QByteArray_At(this.h, (C.int)(i))
	return (byte)(ret)
}

func (this *QByteArray) OperatorSubscript(i int) byte {
	ret := C.QByteArray_OperatorSubscript(this.h, (C.int)(i))
	return (byte)(ret)
}

func (this *QByteArray) OperatorSubscriptWithUint(i uint) byte {
	ret := C.QByteArray_OperatorSubscriptWithUint(this.h, (C.uint)(i))
	return (byte)(ret)
}

func (this *QByteArray) OperatorSubscriptWithInt(i int) *QByteRef {
	ret := C.QByteArray_OperatorSubscriptWithInt(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) OperatorSubscript2(i uint) *QByteRef {
	ret := C.QByteArray_OperatorSubscript2(this.h, (C.uint)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Front() byte {
	ret := C.QByteArray_Front(this.h)
	return (byte)(ret)
}

func (this *QByteArray) Front2() *QByteRef {
	ret := C.QByteArray_Front2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Back() byte {
	ret := C.QByteArray_Back(this.h)
	return (byte)(ret)
}

func (this *QByteArray) Back2() *QByteRef {
	ret := C.QByteArray_Back2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) IndexOf(c byte) int {
	ret := C.QByteArray_IndexOf(this.h, (C.char)(c))
	return (int)(ret)
}

func (this *QByteArray) IndexOfWithChar(c string) int {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QByteArray_IndexOfWithChar(this.h, c_Cstring)
	return (int)(ret)
}

func (this *QByteArray) IndexOfWithQByteArray(a *QByteArray) int {
	ret := C.QByteArray_IndexOfWithQByteArray(this.h, a.cPointer())
	return (int)(ret)
}

func (this *QByteArray) LastIndexOf(c byte) int {
	ret := C.QByteArray_LastIndexOf(this.h, (C.char)(c))
	return (int)(ret)
}

func (this *QByteArray) LastIndexOfWithChar(c string) int {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QByteArray_LastIndexOfWithChar(this.h, c_Cstring)
	return (int)(ret)
}

func (this *QByteArray) LastIndexOfWithQByteArray(a *QByteArray) int {
	ret := C.QByteArray_LastIndexOfWithQByteArray(this.h, a.cPointer())
	return (int)(ret)
}

func (this *QByteArray) Contains(c byte) bool {
	ret := C.QByteArray_Contains(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteArray) ContainsWithChar(a string) bool {
	a_Cstring := C.CString(a)
	defer C.free(unsafe.Pointer(a_Cstring))
	ret := C.QByteArray_ContainsWithChar(this.h, a_Cstring)
	return (bool)(ret)
}

func (this *QByteArray) ContainsWithQByteArray(a *QByteArray) bool {
	ret := C.QByteArray_ContainsWithQByteArray(this.h, a.cPointer())
	return (bool)(ret)
}

func (this *QByteArray) Count(c byte) int {
	ret := C.QByteArray_Count(this.h, (C.char)(c))
	return (int)(ret)
}

func (this *QByteArray) CountWithChar(a string) int {
	a_Cstring := C.CString(a)
	defer C.free(unsafe.Pointer(a_Cstring))
	ret := C.QByteArray_CountWithChar(this.h, a_Cstring)
	return (int)(ret)
}

func (this *QByteArray) CountWithQByteArray(a *QByteArray) int {
	ret := C.QByteArray_CountWithQByteArray(this.h, a.cPointer())
	return (int)(ret)
}

func (this *QByteArray) Compare(c string) int {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QByteArray_Compare(this.h, c_Cstring)
	return (int)(ret)
}

func (this *QByteArray) CompareWithQByteArray(a *QByteArray) int {
	ret := C.QByteArray_CompareWithQByteArray(this.h, a.cPointer())
	return (int)(ret)
}

func (this *QByteArray) Left(lenVal int) *QByteArray {
	ret := C.QByteArray_Left(this.h, (C.int)(lenVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Right(lenVal int) *QByteArray {
	ret := C.QByteArray_Right(this.h, (C.int)(lenVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Mid(index int) *QByteArray {
	ret := C.QByteArray_Mid(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Chopped(lenVal int) *QByteArray {
	ret := C.QByteArray_Chopped(this.h, (C.int)(lenVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) StartsWith(a *QByteArray) bool {
	ret := C.QByteArray_StartsWith(this.h, a.cPointer())
	return (bool)(ret)
}

func (this *QByteArray) StartsWithWithChar(c byte) bool {
	ret := C.QByteArray_StartsWithWithChar(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteArray) StartsWith2(c string) bool {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QByteArray_StartsWith2(this.h, c_Cstring)
	return (bool)(ret)
}

func (this *QByteArray) EndsWith(a *QByteArray) bool {
	ret := C.QByteArray_EndsWith(this.h, a.cPointer())
	return (bool)(ret)
}

func (this *QByteArray) EndsWithWithChar(c byte) bool {
	ret := C.QByteArray_EndsWithWithChar(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteArray) EndsWith2(c string) bool {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QByteArray_EndsWith2(this.h, c_Cstring)
	return (bool)(ret)
}

func (this *QByteArray) IsUpper() bool {
	ret := C.QByteArray_IsUpper(this.h)
	return (bool)(ret)
}

func (this *QByteArray) IsLower() bool {
	ret := C.QByteArray_IsLower(this.h)
	return (bool)(ret)
}

func (this *QByteArray) Truncate(pos int) {
	C.QByteArray_Truncate(this.h, (C.int)(pos))
}

func (this *QByteArray) Chop(n int) {
	C.QByteArray_Chop(this.h, (C.int)(n))
}

func (this *QByteArray) ToLower() *QByteArray {
	ret := C.QByteArray_ToLower(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) ToUpper() *QByteArray {
	ret := C.QByteArray_ToUpper(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Trimmed() *QByteArray {
	ret := C.QByteArray_Trimmed(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Simplified() *QByteArray {
	ret := C.QByteArray_Simplified(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) LeftJustified(width int) *QByteArray {
	ret := C.QByteArray_LeftJustified(this.h, (C.int)(width))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) RightJustified(width int) *QByteArray {
	ret := C.QByteArray_RightJustified(this.h, (C.int)(width))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Prepend(c byte) *QByteArray {
	ret := C.QByteArray_Prepend(this.h, (C.char)(c))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Prepend2(count int, c byte) *QByteArray {
	ret := C.QByteArray_Prepend2(this.h, (C.int)(count), (C.char)(c))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) PrependWithChar(s string) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_PrependWithChar(this.h, s_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Prepend3(s string, lenVal int) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_Prepend3(this.h, s_Cstring, (C.int)(lenVal))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) PrependWithQByteArray(a *QByteArray) *QByteArray {
	ret := C.QByteArray_PrependWithQByteArray(this.h, a.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Append(c byte) *QByteArray {
	ret := C.QByteArray_Append(this.h, (C.char)(c))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Append2(count int, c byte) *QByteArray {
	ret := C.QByteArray_Append2(this.h, (C.int)(count), (C.char)(c))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) AppendWithChar(s string) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_AppendWithChar(this.h, s_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Append3(s string, lenVal int) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_Append3(this.h, s_Cstring, (C.int)(lenVal))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) AppendWithQByteArray(a *QByteArray) *QByteArray {
	ret := C.QByteArray_AppendWithQByteArray(this.h, a.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Insert(i int, c byte) *QByteArray {
	ret := C.QByteArray_Insert(this.h, (C.int)(i), (C.char)(c))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Insert2(i int, count int, c byte) *QByteArray {
	ret := C.QByteArray_Insert2(this.h, (C.int)(i), (C.int)(count), (C.char)(c))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Insert3(i int, s string) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_Insert3(this.h, (C.int)(i), s_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Insert4(i int, s string, lenVal int) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_Insert4(this.h, (C.int)(i), s_Cstring, (C.int)(lenVal))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Insert5(i int, a *QByteArray) *QByteArray {
	ret := C.QByteArray_Insert5(this.h, (C.int)(i), a.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Remove(index int, lenVal int) *QByteArray {
	ret := C.QByteArray_Remove(this.h, (C.int)(index), (C.int)(lenVal))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace(index int, lenVal int, s string) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_Replace(this.h, (C.int)(index), (C.int)(lenVal), s_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace2(index int, lenVal int, s string, alen int) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_Replace2(this.h, (C.int)(index), (C.int)(lenVal), s_Cstring, (C.int)(alen))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace3(index int, lenVal int, s *QByteArray) *QByteArray {
	ret := C.QByteArray_Replace3(this.h, (C.int)(index), (C.int)(lenVal), s.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace4(before byte, after string) *QByteArray {
	after_Cstring := C.CString(after)
	defer C.free(unsafe.Pointer(after_Cstring))
	ret := C.QByteArray_Replace4(this.h, (C.char)(before), after_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace5(before byte, after *QByteArray) *QByteArray {
	ret := C.QByteArray_Replace5(this.h, (C.char)(before), after.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace6(before string, after string) *QByteArray {
	before_Cstring := C.CString(before)
	defer C.free(unsafe.Pointer(before_Cstring))
	after_Cstring := C.CString(after)
	defer C.free(unsafe.Pointer(after_Cstring))
	ret := C.QByteArray_Replace6(this.h, before_Cstring, after_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace7(before string, bsize int, after string, asize int) *QByteArray {
	before_Cstring := C.CString(before)
	defer C.free(unsafe.Pointer(before_Cstring))
	after_Cstring := C.CString(after)
	defer C.free(unsafe.Pointer(after_Cstring))
	ret := C.QByteArray_Replace7(this.h, before_Cstring, (C.int)(bsize), after_Cstring, (C.int)(asize))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace8(before *QByteArray, after *QByteArray) *QByteArray {
	ret := C.QByteArray_Replace8(this.h, before.cPointer(), after.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace9(before *QByteArray, after string) *QByteArray {
	after_Cstring := C.CString(after)
	defer C.free(unsafe.Pointer(after_Cstring))
	ret := C.QByteArray_Replace9(this.h, before.cPointer(), after_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace10(before string, after *QByteArray) *QByteArray {
	before_Cstring := C.CString(before)
	defer C.free(unsafe.Pointer(before_Cstring))
	ret := C.QByteArray_Replace10(this.h, before_Cstring, after.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace11(before byte, after byte) *QByteArray {
	ret := C.QByteArray_Replace11(this.h, (C.char)(before), (C.char)(after))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) OperatorPlusAssign(c byte) *QByteArray {
	ret := C.QByteArray_OperatorPlusAssign(this.h, (C.char)(c))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) OperatorPlusAssignWithChar(s string) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_OperatorPlusAssignWithChar(this.h, s_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) OperatorPlusAssignWithQByteArray(a *QByteArray) *QByteArray {
	ret := C.QByteArray_OperatorPlusAssignWithQByteArray(this.h, a.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Split(sep byte) []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QByteArray_Split(this.h, (C.char)(sep), &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QByteArray) Repeated(times int) *QByteArray {
	ret := C.QByteArray_Repeated(this.h, (C.int)(times))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) AppendWithQString(s string) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_AppendWithQString(this.h, s_Cstring, C.ulong(len(s)))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Insert6(i int, s string) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_Insert6(this.h, (C.int)(i), s_Cstring, C.ulong(len(s)))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace12(before string, after string) *QByteArray {
	before_Cstring := C.CString(before)
	defer C.free(unsafe.Pointer(before_Cstring))
	after_Cstring := C.CString(after)
	defer C.free(unsafe.Pointer(after_Cstring))
	ret := C.QByteArray_Replace12(this.h, before_Cstring, C.ulong(len(before)), after_Cstring)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace13(c byte, after string) *QByteArray {
	after_Cstring := C.CString(after)
	defer C.free(unsafe.Pointer(after_Cstring))
	ret := C.QByteArray_Replace13(this.h, (C.char)(c), after_Cstring, C.ulong(len(after)))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) Replace14(before string, after *QByteArray) *QByteArray {
	before_Cstring := C.CString(before)
	defer C.free(unsafe.Pointer(before_Cstring))
	ret := C.QByteArray_Replace14(this.h, before_Cstring, C.ulong(len(before)), after.cPointer())
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) OperatorPlusAssignWithQString(s string) *QByteArray {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_OperatorPlusAssignWithQString(this.h, s_Cstring, C.ulong(len(s)))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) IndexOfWithQString(s string) int {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_IndexOfWithQString(this.h, s_Cstring, C.ulong(len(s)))
	return (int)(ret)
}

func (this *QByteArray) LastIndexOfWithQString(s string) int {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_LastIndexOfWithQString(this.h, s_Cstring, C.ulong(len(s)))
	return (int)(ret)
}

func (this *QByteArray) OperatorEqual(s2 string) bool {
	s2_Cstring := C.CString(s2)
	defer C.free(unsafe.Pointer(s2_Cstring))
	ret := C.QByteArray_OperatorEqual(this.h, s2_Cstring, C.ulong(len(s2)))
	return (bool)(ret)
}

func (this *QByteArray) OperatorNotEqual(s2 string) bool {
	s2_Cstring := C.CString(s2)
	defer C.free(unsafe.Pointer(s2_Cstring))
	ret := C.QByteArray_OperatorNotEqual(this.h, s2_Cstring, C.ulong(len(s2)))
	return (bool)(ret)
}

func (this *QByteArray) OperatorLesser(s2 string) bool {
	s2_Cstring := C.CString(s2)
	defer C.free(unsafe.Pointer(s2_Cstring))
	ret := C.QByteArray_OperatorLesser(this.h, s2_Cstring, C.ulong(len(s2)))
	return (bool)(ret)
}

func (this *QByteArray) OperatorGreater(s2 string) bool {
	s2_Cstring := C.CString(s2)
	defer C.free(unsafe.Pointer(s2_Cstring))
	ret := C.QByteArray_OperatorGreater(this.h, s2_Cstring, C.ulong(len(s2)))
	return (bool)(ret)
}

func (this *QByteArray) OperatorLesserOrEqual(s2 string) bool {
	s2_Cstring := C.CString(s2)
	defer C.free(unsafe.Pointer(s2_Cstring))
	ret := C.QByteArray_OperatorLesserOrEqual(this.h, s2_Cstring, C.ulong(len(s2)))
	return (bool)(ret)
}

func (this *QByteArray) OperatorGreaterOrEqual(s2 string) bool {
	s2_Cstring := C.CString(s2)
	defer C.free(unsafe.Pointer(s2_Cstring))
	ret := C.QByteArray_OperatorGreaterOrEqual(this.h, s2_Cstring, C.ulong(len(s2)))
	return (bool)(ret)
}

func (this *QByteArray) ToShort() int16 {
	ret := C.QByteArray_ToShort(this.h)
	return (int16)(ret)
}

func (this *QByteArray) ToUShort() uint16 {
	ret := C.QByteArray_ToUShort(this.h)
	return (uint16)(ret)
}

func (this *QByteArray) ToInt() int {
	ret := C.QByteArray_ToInt(this.h)
	return (int)(ret)
}

func (this *QByteArray) ToUInt() uint {
	ret := C.QByteArray_ToUInt(this.h)
	return (uint)(ret)
}

func (this *QByteArray) ToLong() int64 {
	ret := C.QByteArray_ToLong(this.h)
	return (int64)(ret)
}

func (this *QByteArray) ToULong() uint64 {
	ret := C.QByteArray_ToULong(this.h)
	return (uint64)(ret)
}

func (this *QByteArray) ToLongLong() int64 {
	ret := C.QByteArray_ToLongLong(this.h)
	return (int64)(ret)
}

func (this *QByteArray) ToULongLong() uint64 {
	ret := C.QByteArray_ToULongLong(this.h)
	return (uint64)(ret)
}

func (this *QByteArray) ToFloat() float32 {
	ret := C.QByteArray_ToFloat(this.h)
	return (float32)(ret)
}

func (this *QByteArray) ToDouble() float64 {
	ret := C.QByteArray_ToDouble(this.h)
	return (float64)(ret)
}

func (this *QByteArray) ToBase64(options int) *QByteArray {
	ret := C.QByteArray_ToBase64(this.h, (C.int)(options))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) ToBase642() *QByteArray {
	ret := C.QByteArray_ToBase642(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) ToHex() *QByteArray {
	ret := C.QByteArray_ToHex(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) ToHexWithSeparator(separator byte) *QByteArray {
	ret := C.QByteArray_ToHexWithSeparator(this.h, (C.char)(separator))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) ToPercentEncoding() *QByteArray {
	ret := C.QByteArray_ToPercentEncoding(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) SetNum(param1 int16) *QByteArray {
	ret := C.QByteArray_SetNum(this.h, (C.int16_t)(param1))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNumWithUshort(param1 uint16) *QByteArray {
	ret := C.QByteArray_SetNumWithUshort(this.h, (C.uint16_t)(param1))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNumWithInt(param1 int) *QByteArray {
	ret := C.QByteArray_SetNumWithInt(this.h, (C.int)(param1))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNumWithUint(param1 uint) *QByteArray {
	ret := C.QByteArray_SetNumWithUint(this.h, (C.uint)(param1))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNumWithQlonglong(param1 int64) *QByteArray {
	ret := C.QByteArray_SetNumWithQlonglong(this.h, (C.int64_t)(param1))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNumWithQulonglong(param1 uint64) *QByteArray {
	ret := C.QByteArray_SetNumWithQulonglong(this.h, (C.uint64_t)(param1))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNumWithFloat(param1 float32) *QByteArray {
	ret := C.QByteArray_SetNumWithFloat(this.h, (C.float)(param1))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNumWithDouble(param1 float64) *QByteArray {
	ret := C.QByteArray_SetNumWithDouble(this.h, (C.double)(param1))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetRawData(a string, n uint) *QByteArray {
	a_Cstring := C.CString(a)
	defer C.free(unsafe.Pointer(a_Cstring))
	ret := C.QByteArray_SetRawData(this.h, a_Cstring, (C.uint)(n))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func QByteArray_Number(param1 int) *QByteArray {
	ret := C.QByteArray_Number((C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_NumberWithUint(param1 uint) *QByteArray {
	ret := C.QByteArray_NumberWithUint((C.uint)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_NumberWithQlonglong(param1 int64) *QByteArray {
	ret := C.QByteArray_NumberWithQlonglong((C.int64_t)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_NumberWithQulonglong(param1 uint64) *QByteArray {
	ret := C.QByteArray_NumberWithQulonglong((C.uint64_t)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_NumberWithDouble(param1 float64) *QByteArray {
	ret := C.QByteArray_NumberWithDouble((C.double)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_FromRawData(param1 string, size int) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QByteArray_FromRawData(param1_Cstring, (C.int)(size))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_FromBase64Encoding(base64 *QByteArray) *QByteArray__FromBase64Result {
	ret := C.QByteArray_FromBase64Encoding(base64.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray__FromBase64Result(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray__FromBase64Result) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_FromBase64(base64 *QByteArray, options int) *QByteArray {
	ret := C.QByteArray_FromBase64(base64.cPointer(), (C.int)(options))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_FromBase64WithBase64(base64 *QByteArray) *QByteArray {
	ret := C.QByteArray_FromBase64WithBase64(base64.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_FromHex(hexEncoded *QByteArray) *QByteArray {
	ret := C.QByteArray_FromHex(hexEncoded.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_FromPercentEncoding(pctEncoded *QByteArray) *QByteArray {
	ret := C.QByteArray_FromPercentEncoding(pctEncoded.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Begin() unsafe.Pointer {
	ret := C.QByteArray_Begin(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) Begin2() unsafe.Pointer {
	ret := C.QByteArray_Begin2(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) Cbegin() unsafe.Pointer {
	ret := C.QByteArray_Cbegin(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) ConstBegin() unsafe.Pointer {
	ret := C.QByteArray_ConstBegin(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) End() unsafe.Pointer {
	ret := C.QByteArray_End(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) End2() unsafe.Pointer {
	ret := C.QByteArray_End2(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) Cend() unsafe.Pointer {
	ret := C.QByteArray_Cend(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) ConstEnd() unsafe.Pointer {
	ret := C.QByteArray_ConstEnd(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QByteArray) PushBack(c byte) {
	C.QByteArray_PushBack(this.h, (C.char)(c))
}

func (this *QByteArray) PushBackWithChar(c string) {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	C.QByteArray_PushBackWithChar(this.h, c_Cstring)
}

func (this *QByteArray) PushBackWithQByteArray(a *QByteArray) {
	C.QByteArray_PushBackWithQByteArray(this.h, a.cPointer())
}

func (this *QByteArray) PushFront(c byte) {
	C.QByteArray_PushFront(this.h, (C.char)(c))
}

func (this *QByteArray) PushFrontWithChar(c string) {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	C.QByteArray_PushFrontWithChar(this.h, c_Cstring)
}

func (this *QByteArray) PushFrontWithQByteArray(a *QByteArray) {
	C.QByteArray_PushFrontWithQByteArray(this.h, a.cPointer())
}

func (this *QByteArray) ShrinkToFit() {
	C.QByteArray_ShrinkToFit(this.h)
}

func (this *QByteArray) Count2() int {
	ret := C.QByteArray_Count2(this.h)
	return (int)(ret)
}

func (this *QByteArray) Length() int {
	ret := C.QByteArray_Length(this.h)
	return (int)(ret)
}

func (this *QByteArray) IsNull() bool {
	ret := C.QByteArray_IsNull(this.h)
	return (bool)(ret)
}

func (this *QByteArray) Fill2(c byte, size int) *QByteArray {
	ret := C.QByteArray_Fill2(this.h, (C.char)(c), (C.int)(size))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) IndexOf2(c byte, from int) int {
	ret := C.QByteArray_IndexOf2(this.h, (C.char)(c), (C.int)(from))
	return (int)(ret)
}

func (this *QByteArray) IndexOf22(c string, from int) int {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QByteArray_IndexOf22(this.h, c_Cstring, (C.int)(from))
	return (int)(ret)
}

func (this *QByteArray) IndexOf23(a *QByteArray, from int) int {
	ret := C.QByteArray_IndexOf23(this.h, a.cPointer(), (C.int)(from))
	return (int)(ret)
}

func (this *QByteArray) LastIndexOf2(c byte, from int) int {
	ret := C.QByteArray_LastIndexOf2(this.h, (C.char)(c), (C.int)(from))
	return (int)(ret)
}

func (this *QByteArray) LastIndexOf22(c string, from int) int {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QByteArray_LastIndexOf22(this.h, c_Cstring, (C.int)(from))
	return (int)(ret)
}

func (this *QByteArray) LastIndexOf23(a *QByteArray, from int) int {
	ret := C.QByteArray_LastIndexOf23(this.h, a.cPointer(), (C.int)(from))
	return (int)(ret)
}

func (this *QByteArray) Compare2(c string, cs uintptr) int {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	ret := C.QByteArray_Compare2(this.h, c_Cstring, (C.uintptr_t)(cs))
	return (int)(ret)
}

func (this *QByteArray) Compare22(a *QByteArray, cs uintptr) int {
	ret := C.QByteArray_Compare22(this.h, a.cPointer(), (C.uintptr_t)(cs))
	return (int)(ret)
}

func (this *QByteArray) Mid2(index int, lenVal int) *QByteArray {
	ret := C.QByteArray_Mid2(this.h, (C.int)(index), (C.int)(lenVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) LeftJustified2(width int, fill byte) *QByteArray {
	ret := C.QByteArray_LeftJustified2(this.h, (C.int)(width), (C.char)(fill))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) LeftJustified3(width int, fill byte, truncate bool) *QByteArray {
	ret := C.QByteArray_LeftJustified3(this.h, (C.int)(width), (C.char)(fill), (C.bool)(truncate))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) RightJustified2(width int, fill byte) *QByteArray {
	ret := C.QByteArray_RightJustified2(this.h, (C.int)(width), (C.char)(fill))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) RightJustified3(width int, fill byte, truncate bool) *QByteArray {
	ret := C.QByteArray_RightJustified3(this.h, (C.int)(width), (C.char)(fill), (C.bool)(truncate))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) IndexOf24(s string, from int) int {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_IndexOf24(this.h, s_Cstring, C.ulong(len(s)), (C.int)(from))
	return (int)(ret)
}

func (this *QByteArray) LastIndexOf24(s string, from int) int {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QByteArray_LastIndexOf24(this.h, s_Cstring, C.ulong(len(s)), (C.int)(from))
	return (int)(ret)
}

func (this *QByteArray) ToShort1(ok *bool) int16 {
	ret := C.QByteArray_ToShort1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int16)(ret)
}

func (this *QByteArray) ToShort2(ok *bool, base int) int16 {
	ret := C.QByteArray_ToShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (int16)(ret)
}

func (this *QByteArray) ToUShort1(ok *bool) uint16 {
	ret := C.QByteArray_ToUShort1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint16)(ret)
}

func (this *QByteArray) ToUShort2(ok *bool, base int) uint16 {
	ret := C.QByteArray_ToUShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (uint16)(ret)
}

func (this *QByteArray) ToInt1(ok *bool) int {
	ret := C.QByteArray_ToInt1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int)(ret)
}

func (this *QByteArray) ToInt2(ok *bool, base int) int {
	ret := C.QByteArray_ToInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (int)(ret)
}

func (this *QByteArray) ToUInt1(ok *bool) uint {
	ret := C.QByteArray_ToUInt1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint)(ret)
}

func (this *QByteArray) ToUInt2(ok *bool, base int) uint {
	ret := C.QByteArray_ToUInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (uint)(ret)
}

func (this *QByteArray) ToLong1(ok *bool) int64 {
	ret := C.QByteArray_ToLong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int64)(ret)
}

func (this *QByteArray) ToLong2(ok *bool, base int) int64 {
	ret := C.QByteArray_ToLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (int64)(ret)
}

func (this *QByteArray) ToULong1(ok *bool) uint64 {
	ret := C.QByteArray_ToULong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint64)(ret)
}

func (this *QByteArray) ToULong2(ok *bool, base int) uint64 {
	ret := C.QByteArray_ToULong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (uint64)(ret)
}

func (this *QByteArray) ToLongLong1(ok *bool) int64 {
	ret := C.QByteArray_ToLongLong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int64)(ret)
}

func (this *QByteArray) ToLongLong2(ok *bool, base int) int64 {
	ret := C.QByteArray_ToLongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (int64)(ret)
}

func (this *QByteArray) ToULongLong1(ok *bool) uint64 {
	ret := C.QByteArray_ToULongLong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint64)(ret)
}

func (this *QByteArray) ToULongLong2(ok *bool, base int) uint64 {
	ret := C.QByteArray_ToULongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (uint64)(ret)
}

func (this *QByteArray) ToFloat1(ok *bool) float32 {
	ret := C.QByteArray_ToFloat1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (float32)(ret)
}

func (this *QByteArray) ToDouble1(ok *bool) float64 {
	ret := C.QByteArray_ToDouble1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (float64)(ret)
}

func (this *QByteArray) ToPercentEncoding1(exclude *QByteArray) *QByteArray {
	ret := C.QByteArray_ToPercentEncoding1(this.h, exclude.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) ToPercentEncoding2(exclude *QByteArray, include *QByteArray) *QByteArray {
	ret := C.QByteArray_ToPercentEncoding2(this.h, exclude.cPointer(), include.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) ToPercentEncoding3(exclude *QByteArray, include *QByteArray, percent byte) *QByteArray {
	ret := C.QByteArray_ToPercentEncoding3(this.h, exclude.cPointer(), include.cPointer(), (C.char)(percent))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) SetNum2(param1 int16, base int) *QByteArray {
	ret := C.QByteArray_SetNum2(this.h, (C.int16_t)(param1), (C.int)(base))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum22(param1 uint16, base int) *QByteArray {
	ret := C.QByteArray_SetNum22(this.h, (C.uint16_t)(param1), (C.int)(base))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum23(param1 int, base int) *QByteArray {
	ret := C.QByteArray_SetNum23(this.h, (C.int)(param1), (C.int)(base))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum24(param1 uint, base int) *QByteArray {
	ret := C.QByteArray_SetNum24(this.h, (C.uint)(param1), (C.int)(base))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum25(param1 int64, base int) *QByteArray {
	ret := C.QByteArray_SetNum25(this.h, (C.int64_t)(param1), (C.int)(base))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum26(param1 uint64, base int) *QByteArray {
	ret := C.QByteArray_SetNum26(this.h, (C.uint64_t)(param1), (C.int)(base))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum27(param1 float32, f byte) *QByteArray {
	ret := C.QByteArray_SetNum27(this.h, (C.float)(param1), (C.char)(f))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum3(param1 float32, f byte, prec int) *QByteArray {
	ret := C.QByteArray_SetNum3(this.h, (C.float)(param1), (C.char)(f), (C.int)(prec))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum28(param1 float64, f byte) *QByteArray {
	ret := C.QByteArray_SetNum28(this.h, (C.double)(param1), (C.char)(f))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray) SetNum32(param1 float64, f byte, prec int) *QByteArray {
	ret := C.QByteArray_SetNum32(this.h, (C.double)(param1), (C.char)(f), (C.int)(prec))
	return newQByteArray_U(unsafe.Pointer(ret))
}

func QByteArray_Number2(param1 int, base int) *QByteArray {
	ret := C.QByteArray_Number2((C.int)(param1), (C.int)(base))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_Number22(param1 uint, base int) *QByteArray {
	ret := C.QByteArray_Number22((C.uint)(param1), (C.int)(base))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_Number23(param1 int64, base int) *QByteArray {
	ret := C.QByteArray_Number23((C.int64_t)(param1), (C.int)(base))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_Number24(param1 uint64, base int) *QByteArray {
	ret := C.QByteArray_Number24((C.uint64_t)(param1), (C.int)(base))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_Number25(param1 float64, f byte) *QByteArray {
	ret := C.QByteArray_Number25((C.double)(param1), (C.char)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_Number3(param1 float64, f byte, prec int) *QByteArray {
	ret := C.QByteArray_Number3((C.double)(param1), (C.char)(f), (C.int)(prec))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_FromBase64Encoding2(base64 *QByteArray, options int) *QByteArray__FromBase64Result {
	ret := C.QByteArray_FromBase64Encoding2(base64.cPointer(), (C.int)(options))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray__FromBase64Result(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray__FromBase64Result) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QByteArray_FromPercentEncoding2(pctEncoded *QByteArray, percent byte) *QByteArray {
	ret := C.QByteArray_FromPercentEncoding2(pctEncoded.cPointer(), (C.char)(percent))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QByteArray) Delete() {
	C.QByteArray_Delete(this.h)
}

type QByteRef struct {
	h *C.QByteRef
}

func (this *QByteRef) cPointer() *C.QByteRef {
	if this == nil {
		return nil
	}
	return this.h
}

func newQByteRef(h *C.QByteRef) *QByteRef {
	if h == nil {
		return nil
	}
	return &QByteRef{h: h}
}

func newQByteRef_U(h unsafe.Pointer) *QByteRef {
	return newQByteRef((*C.QByteRef)(h))
}

// NewQByteRef constructs a new QByteRef object.
func NewQByteRef(param1 *QByteRef) *QByteRef {
	ret := C.QByteRef_new(param1.cPointer())
	return newQByteRef(ret)
}

func (this *QByteRef) OperatorAssign(c byte) {
	C.QByteRef_OperatorAssign(this.h, (C.char)(c))
}

func (this *QByteRef) OperatorAssignWithQByteRef(c *QByteRef) {
	C.QByteRef_OperatorAssignWithQByteRef(this.h, c.cPointer())
}

func (this *QByteRef) OperatorEqual(c byte) bool {
	ret := C.QByteRef_OperatorEqual(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteRef) OperatorNotEqual(c byte) bool {
	ret := C.QByteRef_OperatorNotEqual(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteRef) OperatorGreater(c byte) bool {
	ret := C.QByteRef_OperatorGreater(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteRef) OperatorGreaterOrEqual(c byte) bool {
	ret := C.QByteRef_OperatorGreaterOrEqual(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteRef) OperatorLesser(c byte) bool {
	ret := C.QByteRef_OperatorLesser(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteRef) OperatorLesserOrEqual(c byte) bool {
	ret := C.QByteRef_OperatorLesserOrEqual(this.h, (C.char)(c))
	return (bool)(ret)
}

func (this *QByteRef) Delete() {
	C.QByteRef_Delete(this.h)
}

type QByteArray__FromBase64Result struct {
	h *C.QByteArray__FromBase64Result
}

func (this *QByteArray__FromBase64Result) cPointer() *C.QByteArray__FromBase64Result {
	if this == nil {
		return nil
	}
	return this.h
}

func newQByteArray__FromBase64Result(h *C.QByteArray__FromBase64Result) *QByteArray__FromBase64Result {
	if h == nil {
		return nil
	}
	return &QByteArray__FromBase64Result{h: h}
}

func newQByteArray__FromBase64Result_U(h unsafe.Pointer) *QByteArray__FromBase64Result {
	return newQByteArray__FromBase64Result((*C.QByteArray__FromBase64Result)(h))
}

// NewQByteArray__FromBase64Result constructs a new QByteArray::FromBase64Result object.
func NewQByteArray__FromBase64Result(param1 *QByteArray__FromBase64Result) *QByteArray__FromBase64Result {
	ret := C.QByteArray__FromBase64Result_new(param1.cPointer())
	return newQByteArray__FromBase64Result(ret)
}

func (this *QByteArray__FromBase64Result) Swap(other *QByteArray__FromBase64Result) {
	C.QByteArray__FromBase64Result_Swap(this.h, other.cPointer())
}

func (this *QByteArray__FromBase64Result) OperatorMultiply() *QByteArray {
	ret := C.QByteArray__FromBase64Result_OperatorMultiply(this.h)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray__FromBase64Result) OperatorMultiply2() *QByteArray {
	ret := C.QByteArray__FromBase64Result_OperatorMultiply2(this.h)
	return newQByteArray_U(unsafe.Pointer(ret))
}

func (this *QByteArray__FromBase64Result) Delete() {
	C.QByteArray__FromBase64Result_Delete(this.h)
}
