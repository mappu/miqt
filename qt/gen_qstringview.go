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
	var _ms *C.struct_miqt_string = C.QStringView_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStringView) Size() uint64 {
	return (uint64)(C.QStringView_Size(this.h))
}

func (this *QStringView) OperatorSubscript(n uint64) *QChar {
	_ret := C.QStringView_OperatorSubscript(this.h, (C.size_t)(n))
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) ToLatin1() *QByteArray {
	_ret := C.QStringView_ToLatin1(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) ToUtf8() *QByteArray {
	_ret := C.QStringView_ToUtf8(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) ToLocal8Bit() *QByteArray {
	_ret := C.QStringView_ToLocal8Bit(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) ToUcs4() []uint {
	var _ma *C.struct_miqt_array = C.QStringView_ToUcs4(this.h)
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStringView) At(n uint64) *QChar {
	_ret := C.QStringView_At(this.h, (C.size_t)(n))
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Truncate(n uint64) {
	C.QStringView_Truncate(this.h, (C.size_t)(n))
}

func (this *QStringView) Chop(n uint64) {
	C.QStringView_Chop(this.h, (C.size_t)(n))
}

func (this *QStringView) CompareWithQChar(c QChar) int {
	return (int)(C.QStringView_CompareWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) Compare2(c QChar, cs CaseSensitivity) int {
	return (int)(C.QStringView_Compare2(this.h, c.cPointer(), (C.uintptr_t)(cs)))
}

func (this *QStringView) StartsWithWithQChar(c QChar) bool {
	return (bool)(C.QStringView_StartsWithWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) StartsWith2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_StartsWith2(this.h, c.cPointer(), (C.uintptr_t)(cs)))
}

func (this *QStringView) EndsWithWithQChar(c QChar) bool {
	return (bool)(C.QStringView_EndsWithWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) EndsWith2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_EndsWith2(this.h, c.cPointer(), (C.uintptr_t)(cs)))
}

func (this *QStringView) IndexOf(c QChar) uint64 {
	return (uint64)(C.QStringView_IndexOf(this.h, c.cPointer()))
}

func (this *QStringView) Contains(c QChar) bool {
	return (bool)(C.QStringView_Contains(this.h, c.cPointer()))
}

func (this *QStringView) Count(c QChar) uint64 {
	return (uint64)(C.QStringView_Count(this.h, c.cPointer()))
}

func (this *QStringView) LastIndexOf(c QChar) uint64 {
	return (uint64)(C.QStringView_LastIndexOf(this.h, c.cPointer()))
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

func (this *QStringView) Empty() bool {
	return (bool)(C.QStringView_Empty(this.h))
}

func (this *QStringView) Front() *QChar {
	_ret := C.QStringView_Front(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Back() *QChar {
	_ret := C.QStringView_Back(this.h)
	_goptr := newQChar(_ret)
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
	_ret := C.QStringView_First(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Last() *QChar {
	_ret := C.QStringView_Last(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) IndexOf2(c QChar, from uint64) uint64 {
	return (uint64)(C.QStringView_IndexOf2(this.h, c.cPointer(), (C.size_t)(from)))
}

func (this *QStringView) IndexOf3(c QChar, from uint64, cs CaseSensitivity) uint64 {
	return (uint64)(C.QStringView_IndexOf3(this.h, c.cPointer(), (C.size_t)(from), (C.uintptr_t)(cs)))
}

func (this *QStringView) Contains2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_Contains2(this.h, c.cPointer(), (C.uintptr_t)(cs)))
}

func (this *QStringView) Count2(c QChar, cs CaseSensitivity) uint64 {
	return (uint64)(C.QStringView_Count2(this.h, c.cPointer(), (C.uintptr_t)(cs)))
}

func (this *QStringView) LastIndexOf2(c QChar, from uint64) uint64 {
	return (uint64)(C.QStringView_LastIndexOf2(this.h, c.cPointer(), (C.size_t)(from)))
}

func (this *QStringView) LastIndexOf3(c QChar, from uint64, cs CaseSensitivity) uint64 {
	return (uint64)(C.QStringView_LastIndexOf3(this.h, c.cPointer(), (C.size_t)(from), (C.uintptr_t)(cs)))
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
	C.QStringView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringView) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
