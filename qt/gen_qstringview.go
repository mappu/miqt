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
	h          *C.QStringView
	isSubclass bool
}

func (this *QStringView) cPointer() *C.QStringView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringView constructs the type using only CGO pointers.
func newQStringView(h *C.QStringView) *QStringView {
	if h == nil {
		return nil
	}

	return &QStringView{h: h}
}

// UnsafeNewQStringView constructs the type using only unsafe pointers.
func UnsafeNewQStringView(h unsafe.Pointer) *QStringView {
	return newQStringView((*C.QStringView)(h))
}

// NewQStringView constructs a new QStringView object.
func NewQStringView() *QStringView {

	ret := newQStringView(C.QStringView_new())
	ret.isSubclass = true
	return ret
}

func (this *QStringView) ToString() string {
	var _ms C.struct_miqt_string = C.QStringView_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStringView) Size() int64 {
	return (int64)(C.QStringView_Size(this.h))
}

func (this *QStringView) Data() *QChar {
	return newQChar(C.QStringView_Data(this.h))
}

func (this *QStringView) OperatorSubscript(n int64) *QChar {
	_goptr := newQChar(C.QStringView_OperatorSubscript(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) ToLatin1() []byte {
	var _bytearray C.struct_miqt_string = C.QStringView_ToLatin1(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStringView) ToUtf8() []byte {
	var _bytearray C.struct_miqt_string = C.QStringView_ToUtf8(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStringView) ToLocal8Bit() []byte {
	var _bytearray C.struct_miqt_string = C.QStringView_ToLocal8Bit(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStringView) ToUcs4() []uint {
	var _ma C.struct_miqt_array = C.QStringView_ToUcs4(this.h)
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret
}

func (this *QStringView) At(n int64) *QChar {
	_goptr := newQChar(C.QStringView_At(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Truncate(n int64) {
	C.QStringView_Truncate(this.h, (C.ptrdiff_t)(n))
}

func (this *QStringView) Chop(n int64) {
	C.QStringView_Chop(this.h, (C.ptrdiff_t)(n))
}

func (this *QStringView) CompareWithQChar(c QChar) int {
	return (int)(C.QStringView_CompareWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) Compare2(c QChar, cs CaseSensitivity) int {
	return (int)(C.QStringView_Compare2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) StartsWithWithQChar(c QChar) bool {
	return (bool)(C.QStringView_StartsWithWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) StartsWith2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_StartsWith2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) EndsWithWithQChar(c QChar) bool {
	return (bool)(C.QStringView_EndsWithWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) EndsWith2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_EndsWith2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) IndexOf(c QChar) int64 {
	return (int64)(C.QStringView_IndexOf(this.h, c.cPointer()))
}

func (this *QStringView) Contains(c QChar) bool {
	return (bool)(C.QStringView_Contains(this.h, c.cPointer()))
}

func (this *QStringView) Count(c QChar) int64 {
	return (int64)(C.QStringView_Count(this.h, c.cPointer()))
}

func (this *QStringView) LastIndexOf(c QChar) int64 {
	return (int64)(C.QStringView_LastIndexOf(this.h, c.cPointer()))
}

func (this *QStringView) IsRightToLeft() bool {
	return (bool)(C.QStringView_IsRightToLeft(this.h))
}

func (this *QStringView) IsValidUtf16() bool {
	return (bool)(C.QStringView_IsValidUtf16(this.h))
}

func (this *QStringView) ToShort() int16 {
	return (int16)(C.QStringView_ToShort(this.h))
}

func (this *QStringView) ToUShort() uint16 {
	return (uint16)(C.QStringView_ToUShort(this.h))
}

func (this *QStringView) ToInt() int {
	return (int)(C.QStringView_ToInt(this.h))
}

func (this *QStringView) ToUInt() uint {
	return (uint)(C.QStringView_ToUInt(this.h))
}

func (this *QStringView) ToLong() int64 {
	return (int64)(C.QStringView_ToLong(this.h))
}

func (this *QStringView) ToULong() uint64 {
	return (uint64)(C.QStringView_ToULong(this.h))
}

func (this *QStringView) ToLongLong() int64 {
	return (int64)(C.QStringView_ToLongLong(this.h))
}

func (this *QStringView) ToULongLong() uint64 {
	return (uint64)(C.QStringView_ToULongLong(this.h))
}

func (this *QStringView) ToFloat() float32 {
	return (float32)(C.QStringView_ToFloat(this.h))
}

func (this *QStringView) ToDouble() float64 {
	return (float64)(C.QStringView_ToDouble(this.h))
}

func (this *QStringView) Begin() *QChar {
	return newQChar(C.QStringView_Begin(this.h))
}

func (this *QStringView) End() *QChar {
	return newQChar(C.QStringView_End(this.h))
}

func (this *QStringView) Cbegin() *QChar {
	return newQChar(C.QStringView_Cbegin(this.h))
}

func (this *QStringView) Cend() *QChar {
	return newQChar(C.QStringView_Cend(this.h))
}

func (this *QStringView) Empty() bool {
	return (bool)(C.QStringView_Empty(this.h))
}

func (this *QStringView) Front() *QChar {
	_goptr := newQChar(C.QStringView_Front(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Back() *QChar {
	_goptr := newQChar(C.QStringView_Back(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) IsNull() bool {
	return (bool)(C.QStringView_IsNull(this.h))
}

func (this *QStringView) IsEmpty() bool {
	return (bool)(C.QStringView_IsEmpty(this.h))
}

func (this *QStringView) Length() int {
	return (int)(C.QStringView_Length(this.h))
}

func (this *QStringView) First() *QChar {
	_goptr := newQChar(C.QStringView_First(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Last() *QChar {
	_goptr := newQChar(C.QStringView_Last(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) IndexOf2(c QChar, from int64) int64 {
	return (int64)(C.QStringView_IndexOf2(this.h, c.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QStringView) IndexOf3(c QChar, from int64, cs CaseSensitivity) int64 {
	return (int64)(C.QStringView_IndexOf3(this.h, c.cPointer(), (C.ptrdiff_t)(from), (C.int)(cs)))
}

func (this *QStringView) Contains2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_Contains2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) Count2(c QChar, cs CaseSensitivity) int64 {
	return (int64)(C.QStringView_Count2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) LastIndexOf2(c QChar, from int64) int64 {
	return (int64)(C.QStringView_LastIndexOf2(this.h, c.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QStringView) LastIndexOf3(c QChar, from int64, cs CaseSensitivity) int64 {
	return (int64)(C.QStringView_LastIndexOf3(this.h, c.cPointer(), (C.ptrdiff_t)(from), (C.int)(cs)))
}

func (this *QStringView) ToShort1(ok *bool) int16 {
	return (int16)(C.QStringView_ToShort1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToShort2(ok *bool, base int) int16 {
	return (int16)(C.QStringView_ToShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToUShort1(ok *bool) uint16 {
	return (uint16)(C.QStringView_ToUShort1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToUShort2(ok *bool, base int) uint16 {
	return (uint16)(C.QStringView_ToUShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToInt1(ok *bool) int {
	return (int)(C.QStringView_ToInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToInt2(ok *bool, base int) int {
	return (int)(C.QStringView_ToInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToUInt1(ok *bool) uint {
	return (uint)(C.QStringView_ToUInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToUInt2(ok *bool, base int) uint {
	return (uint)(C.QStringView_ToUInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToLong1(ok *bool) int64 {
	return (int64)(C.QStringView_ToLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToLong2(ok *bool, base int) int64 {
	return (int64)(C.QStringView_ToLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToULong1(ok *bool) uint64 {
	return (uint64)(C.QStringView_ToULong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToULong2(ok *bool, base int) uint64 {
	return (uint64)(C.QStringView_ToULong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToLongLong1(ok *bool) int64 {
	return (int64)(C.QStringView_ToLongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToLongLong2(ok *bool, base int) int64 {
	return (int64)(C.QStringView_ToLongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToULongLong1(ok *bool) uint64 {
	return (uint64)(C.QStringView_ToULongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToULongLong2(ok *bool, base int) uint64 {
	return (uint64)(C.QStringView_ToULongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToFloat1(ok *bool) float32 {
	return (float32)(C.QStringView_ToFloat1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToDouble1(ok *bool) float64 {
	return (float64)(C.QStringView_ToDouble1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QStringView) Delete() {
	C.QStringView_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringView) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
