package qt

/*

#include "gen_qstringview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStringView struct {
	h *C.QStringView
}

func (this *QStringView) cPointer() *C.QStringView {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStringView(h *C.QStringView) *QStringView {
	if h == nil {
		return nil
	}
	return &QStringView{h: h}
}

func newQStringView_U(h unsafe.Pointer) *QStringView {
	return newQStringView((*C.QStringView)(h))
}

// NewQStringView constructs a new QStringView object.
func NewQStringView() *QStringView {
	ret := C.QStringView_new()
	return newQStringView(ret)
}

func (this *QStringView) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStringView_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStringView) Size() uint64 {
	ret := C.QStringView_Size(this.h)
	return (uint64)(ret)
}

func (this *QStringView) OperatorSubscript(n uint64) *QChar {
	ret := C.QStringView_OperatorSubscript(this.h, (C.size_t)(n))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) ToLatin1() *QByteArray {
	ret := C.QStringView_ToLatin1(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) ToUtf8() *QByteArray {
	ret := C.QStringView_ToUtf8(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) ToLocal8Bit() *QByteArray {
	ret := C.QStringView_ToLocal8Bit(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) ToUcs4() []uint {
	var _out *C.uint = nil
	var _out_len C.size_t = 0
	C.QStringView_ToUcs4(this.h, &_out, &_out_len)
	ret := make([]uint, int(_out_len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (uint)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStringView) At(n uint64) *QChar {
	ret := C.QStringView_At(this.h, (C.size_t)(n))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) Truncate(n uint64) {
	C.QStringView_Truncate(this.h, (C.size_t)(n))
}

func (this *QStringView) Chop(n uint64) {
	C.QStringView_Chop(this.h, (C.size_t)(n))
}

func (this *QStringView) CompareWithQChar(c QChar) int {
	ret := C.QStringView_CompareWithQChar(this.h, c.cPointer())
	return (int)(ret)
}

func (this *QStringView) Compare2(c QChar, cs CaseSensitivity) int {
	ret := C.QStringView_Compare2(this.h, c.cPointer(), (C.uintptr_t)(cs))
	return (int)(ret)
}

func (this *QStringView) StartsWithWithQChar(c QChar) bool {
	ret := C.QStringView_StartsWithWithQChar(this.h, c.cPointer())
	return (bool)(ret)
}

func (this *QStringView) StartsWith2(c QChar, cs CaseSensitivity) bool {
	ret := C.QStringView_StartsWith2(this.h, c.cPointer(), (C.uintptr_t)(cs))
	return (bool)(ret)
}

func (this *QStringView) EndsWithWithQChar(c QChar) bool {
	ret := C.QStringView_EndsWithWithQChar(this.h, c.cPointer())
	return (bool)(ret)
}

func (this *QStringView) EndsWith2(c QChar, cs CaseSensitivity) bool {
	ret := C.QStringView_EndsWith2(this.h, c.cPointer(), (C.uintptr_t)(cs))
	return (bool)(ret)
}

func (this *QStringView) IndexOf(c QChar) uint64 {
	ret := C.QStringView_IndexOf(this.h, c.cPointer())
	return (uint64)(ret)
}

func (this *QStringView) Contains(c QChar) bool {
	ret := C.QStringView_Contains(this.h, c.cPointer())
	return (bool)(ret)
}

func (this *QStringView) Count(c QChar) uint64 {
	ret := C.QStringView_Count(this.h, c.cPointer())
	return (uint64)(ret)
}

func (this *QStringView) LastIndexOf(c QChar) uint64 {
	ret := C.QStringView_LastIndexOf(this.h, c.cPointer())
	return (uint64)(ret)
}

func (this *QStringView) IsRightToLeft() bool {
	ret := C.QStringView_IsRightToLeft(this.h)
	return (bool)(ret)
}

func (this *QStringView) IsValidUtf16() bool {
	ret := C.QStringView_IsValidUtf16(this.h)
	return (bool)(ret)
}

func (this *QStringView) ToShort() int16 {
	ret := C.QStringView_ToShort(this.h)
	return (int16)(ret)
}

func (this *QStringView) ToUShort() uint16 {
	ret := C.QStringView_ToUShort(this.h)
	return (uint16)(ret)
}

func (this *QStringView) ToInt() int {
	ret := C.QStringView_ToInt(this.h)
	return (int)(ret)
}

func (this *QStringView) ToUInt() uint {
	ret := C.QStringView_ToUInt(this.h)
	return (uint)(ret)
}

func (this *QStringView) ToLong() int64 {
	ret := C.QStringView_ToLong(this.h)
	return (int64)(ret)
}

func (this *QStringView) ToULong() uint64 {
	ret := C.QStringView_ToULong(this.h)
	return (uint64)(ret)
}

func (this *QStringView) ToLongLong() int64 {
	ret := C.QStringView_ToLongLong(this.h)
	return (int64)(ret)
}

func (this *QStringView) ToULongLong() uint64 {
	ret := C.QStringView_ToULongLong(this.h)
	return (uint64)(ret)
}

func (this *QStringView) ToFloat() float32 {
	ret := C.QStringView_ToFloat(this.h)
	return (float32)(ret)
}

func (this *QStringView) ToDouble() float64 {
	ret := C.QStringView_ToDouble(this.h)
	return (float64)(ret)
}

func (this *QStringView) Empty() bool {
	ret := C.QStringView_Empty(this.h)
	return (bool)(ret)
}

func (this *QStringView) Front() *QChar {
	ret := C.QStringView_Front(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) Back() *QChar {
	ret := C.QStringView_Back(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) IsNull() bool {
	ret := C.QStringView_IsNull(this.h)
	return (bool)(ret)
}

func (this *QStringView) IsEmpty() bool {
	ret := C.QStringView_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QStringView) Length() int {
	ret := C.QStringView_Length(this.h)
	return (int)(ret)
}

func (this *QStringView) First() *QChar {
	ret := C.QStringView_First(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) Last() *QChar {
	ret := C.QStringView_Last(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStringView) IndexOf2(c QChar, from uint64) uint64 {
	ret := C.QStringView_IndexOf2(this.h, c.cPointer(), (C.size_t)(from))
	return (uint64)(ret)
}

func (this *QStringView) IndexOf3(c QChar, from uint64, cs CaseSensitivity) uint64 {
	ret := C.QStringView_IndexOf3(this.h, c.cPointer(), (C.size_t)(from), (C.uintptr_t)(cs))
	return (uint64)(ret)
}

func (this *QStringView) Contains2(c QChar, cs CaseSensitivity) bool {
	ret := C.QStringView_Contains2(this.h, c.cPointer(), (C.uintptr_t)(cs))
	return (bool)(ret)
}

func (this *QStringView) Count2(c QChar, cs CaseSensitivity) uint64 {
	ret := C.QStringView_Count2(this.h, c.cPointer(), (C.uintptr_t)(cs))
	return (uint64)(ret)
}

func (this *QStringView) LastIndexOf2(c QChar, from uint64) uint64 {
	ret := C.QStringView_LastIndexOf2(this.h, c.cPointer(), (C.size_t)(from))
	return (uint64)(ret)
}

func (this *QStringView) LastIndexOf3(c QChar, from uint64, cs CaseSensitivity) uint64 {
	ret := C.QStringView_LastIndexOf3(this.h, c.cPointer(), (C.size_t)(from), (C.uintptr_t)(cs))
	return (uint64)(ret)
}

func (this *QStringView) ToShort1(ok *bool) int16 {
	ret := C.QStringView_ToShort1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int16)(ret)
}

func (this *QStringView) ToShort2(ok *bool, base int) int16 {
	ret := C.QStringView_ToShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (int16)(ret)
}

func (this *QStringView) ToUShort1(ok *bool) uint16 {
	ret := C.QStringView_ToUShort1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint16)(ret)
}

func (this *QStringView) ToUShort2(ok *bool, base int) uint16 {
	ret := C.QStringView_ToUShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (uint16)(ret)
}

func (this *QStringView) ToInt1(ok *bool) int {
	ret := C.QStringView_ToInt1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int)(ret)
}

func (this *QStringView) ToInt2(ok *bool, base int) int {
	ret := C.QStringView_ToInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (int)(ret)
}

func (this *QStringView) ToUInt1(ok *bool) uint {
	ret := C.QStringView_ToUInt1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint)(ret)
}

func (this *QStringView) ToUInt2(ok *bool, base int) uint {
	ret := C.QStringView_ToUInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (uint)(ret)
}

func (this *QStringView) ToLong1(ok *bool) int64 {
	ret := C.QStringView_ToLong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int64)(ret)
}

func (this *QStringView) ToLong2(ok *bool, base int) int64 {
	ret := C.QStringView_ToLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (int64)(ret)
}

func (this *QStringView) ToULong1(ok *bool) uint64 {
	ret := C.QStringView_ToULong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint64)(ret)
}

func (this *QStringView) ToULong2(ok *bool, base int) uint64 {
	ret := C.QStringView_ToULong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (uint64)(ret)
}

func (this *QStringView) ToLongLong1(ok *bool) int64 {
	ret := C.QStringView_ToLongLong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int64)(ret)
}

func (this *QStringView) ToLongLong2(ok *bool, base int) int64 {
	ret := C.QStringView_ToLongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (int64)(ret)
}

func (this *QStringView) ToULongLong1(ok *bool) uint64 {
	ret := C.QStringView_ToULongLong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint64)(ret)
}

func (this *QStringView) ToULongLong2(ok *bool, base int) uint64 {
	ret := C.QStringView_ToULongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base))
	return (uint64)(ret)
}

func (this *QStringView) ToFloat1(ok *bool) float32 {
	ret := C.QStringView_ToFloat1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (float32)(ret)
}

func (this *QStringView) ToDouble1(ok *bool) float64 {
	ret := C.QStringView_ToDouble1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (float64)(ret)
}

func (this *QStringView) Delete() {
	C.QStringView_Delete(this.h)
}
