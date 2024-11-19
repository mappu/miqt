package qt6

/*

#include "gen_qbytearrayview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QByteArrayView struct {
	h          *C.QByteArrayView
	isSubclass bool
}

func (this *QByteArrayView) cPointer() *C.QByteArrayView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QByteArrayView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQByteArrayView constructs the type using only CGO pointers.
func newQByteArrayView(h *C.QByteArrayView) *QByteArrayView {
	if h == nil {
		return nil
	}
	return &QByteArrayView{h: h}
}

// UnsafeNewQByteArrayView constructs the type using only unsafe pointers.
func UnsafeNewQByteArrayView(h unsafe.Pointer) *QByteArrayView {
	if h == nil {
		return nil
	}

	return &QByteArrayView{h: (*C.QByteArrayView)(h)}
}

// NewQByteArrayView constructs a new QByteArrayView object.
func NewQByteArrayView() *QByteArrayView {
	var outptr_QByteArrayView *C.QByteArrayView = nil

	C.QByteArrayView_new(&outptr_QByteArrayView)
	ret := newQByteArrayView(outptr_QByteArrayView)
	ret.isSubclass = true
	return ret
}

// NewQByteArrayView2 constructs a new QByteArrayView object.
func NewQByteArrayView2(param1 *QByteArrayView) *QByteArrayView {
	var outptr_QByteArrayView *C.QByteArrayView = nil

	C.QByteArrayView_new2(param1.cPointer(), &outptr_QByteArrayView)
	ret := newQByteArrayView(outptr_QByteArrayView)
	ret.isSubclass = true
	return ret
}

func (this *QByteArrayView) ToByteArray() []byte {
	var _bytearray C.struct_miqt_string = C.QByteArrayView_ToByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QByteArrayView) Size() int64 {
	return (int64)(C.QByteArrayView_Size(this.h))
}

func (this *QByteArrayView) Data() string {
	_ret := C.QByteArrayView_Data(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) ConstData() string {
	_ret := C.QByteArrayView_ConstData(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) OperatorSubscript(n int64) int8 {
	return (int8)(C.QByteArrayView_OperatorSubscript(this.h, (C.ptrdiff_t)(n)))
}

func (this *QByteArrayView) At(n int64) int8 {
	return (int8)(C.QByteArrayView_At(this.h, (C.ptrdiff_t)(n)))
}

func (this *QByteArrayView) First(n int64) *QByteArrayView {
	_ret := C.QByteArrayView_First(this.h, (C.ptrdiff_t)(n))
	_goptr := newQByteArrayView(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Last(n int64) *QByteArrayView {
	_ret := C.QByteArrayView_Last(this.h, (C.ptrdiff_t)(n))
	_goptr := newQByteArrayView(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Sliced(pos int64) *QByteArrayView {
	_ret := C.QByteArrayView_Sliced(this.h, (C.ptrdiff_t)(pos))
	_goptr := newQByteArrayView(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Sliced2(pos int64, n int64) *QByteArrayView {
	_ret := C.QByteArrayView_Sliced2(this.h, (C.ptrdiff_t)(pos), (C.ptrdiff_t)(n))
	_goptr := newQByteArrayView(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Chopped(lenVal int64) *QByteArrayView {
	_ret := C.QByteArrayView_Chopped(this.h, (C.ptrdiff_t)(lenVal))
	_goptr := newQByteArrayView(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Truncate(n int64) {
	C.QByteArrayView_Truncate(this.h, (C.ptrdiff_t)(n))
}

func (this *QByteArrayView) Chop(n int64) {
	C.QByteArrayView_Chop(this.h, (C.ptrdiff_t)(n))
}

func (this *QByteArrayView) Trimmed() *QByteArrayView {
	_ret := C.QByteArrayView_Trimmed(this.h)
	_goptr := newQByteArrayView(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) ToShort() int16 {
	return (int16)(C.QByteArrayView_ToShort(this.h))
}

func (this *QByteArrayView) ToUShort() uint16 {
	return (uint16)(C.QByteArrayView_ToUShort(this.h))
}

func (this *QByteArrayView) ToInt() int {
	return (int)(C.QByteArrayView_ToInt(this.h))
}

func (this *QByteArrayView) ToUInt() uint {
	return (uint)(C.QByteArrayView_ToUInt(this.h))
}

func (this *QByteArrayView) ToLong() int64 {
	return (int64)(C.QByteArrayView_ToLong(this.h))
}

func (this *QByteArrayView) ToULong() uint64 {
	return (uint64)(C.QByteArrayView_ToULong(this.h))
}

func (this *QByteArrayView) ToLongLong() int64 {
	return (int64)(C.QByteArrayView_ToLongLong(this.h))
}

func (this *QByteArrayView) ToULongLong() uint64 {
	return (uint64)(C.QByteArrayView_ToULongLong(this.h))
}

func (this *QByteArrayView) ToFloat() float32 {
	return (float32)(C.QByteArrayView_ToFloat(this.h))
}

func (this *QByteArrayView) ToDouble() float64 {
	return (float64)(C.QByteArrayView_ToDouble(this.h))
}

func (this *QByteArrayView) StartsWith(other QByteArrayView) bool {
	return (bool)(C.QByteArrayView_StartsWith(this.h, other.cPointer()))
}

func (this *QByteArrayView) StartsWithWithChar(c int8) bool {
	return (bool)(C.QByteArrayView_StartsWithWithChar(this.h, (C.char)(c)))
}

func (this *QByteArrayView) EndsWith(other QByteArrayView) bool {
	return (bool)(C.QByteArrayView_EndsWith(this.h, other.cPointer()))
}

func (this *QByteArrayView) EndsWithWithChar(c int8) bool {
	return (bool)(C.QByteArrayView_EndsWithWithChar(this.h, (C.char)(c)))
}

func (this *QByteArrayView) IndexOf(a QByteArrayView) int64 {
	return (int64)(C.QByteArrayView_IndexOf(this.h, a.cPointer()))
}

func (this *QByteArrayView) IndexOfWithCh(ch int8) int64 {
	return (int64)(C.QByteArrayView_IndexOfWithCh(this.h, (C.char)(ch)))
}

func (this *QByteArrayView) Contains(a QByteArrayView) bool {
	return (bool)(C.QByteArrayView_Contains(this.h, a.cPointer()))
}

func (this *QByteArrayView) ContainsWithChar(c int8) bool {
	return (bool)(C.QByteArrayView_ContainsWithChar(this.h, (C.char)(c)))
}

func (this *QByteArrayView) LastIndexOf(a QByteArrayView) int64 {
	return (int64)(C.QByteArrayView_LastIndexOf(this.h, a.cPointer()))
}

func (this *QByteArrayView) LastIndexOf2(a QByteArrayView, from int64) int64 {
	return (int64)(C.QByteArrayView_LastIndexOf2(this.h, a.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayView) LastIndexOfWithCh(ch int8) int64 {
	return (int64)(C.QByteArrayView_LastIndexOfWithCh(this.h, (C.char)(ch)))
}

func (this *QByteArrayView) Count(a QByteArrayView) int64 {
	return (int64)(C.QByteArrayView_Count(this.h, a.cPointer()))
}

func (this *QByteArrayView) CountWithCh(ch int8) int64 {
	return (int64)(C.QByteArrayView_CountWithCh(this.h, (C.char)(ch)))
}

func (this *QByteArrayView) Compare(a QByteArrayView) int {
	return (int)(C.QByteArrayView_Compare(this.h, a.cPointer()))
}

func (this *QByteArrayView) IsValidUtf8() bool {
	return (bool)(C.QByteArrayView_IsValidUtf8(this.h))
}

func (this *QByteArrayView) Begin() string {
	_ret := C.QByteArrayView_Begin(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) End() string {
	_ret := C.QByteArrayView_End(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) Cbegin() string {
	_ret := C.QByteArrayView_Cbegin(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) Cend() string {
	_ret := C.QByteArrayView_Cend(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) Empty() bool {
	return (bool)(C.QByteArrayView_Empty(this.h))
}

func (this *QByteArrayView) Front() int8 {
	return (int8)(C.QByteArrayView_Front(this.h))
}

func (this *QByteArrayView) Back() int8 {
	return (int8)(C.QByteArrayView_Back(this.h))
}

func (this *QByteArrayView) IsNull() bool {
	return (bool)(C.QByteArrayView_IsNull(this.h))
}

func (this *QByteArrayView) IsEmpty() bool {
	return (bool)(C.QByteArrayView_IsEmpty(this.h))
}

func (this *QByteArrayView) Length() int64 {
	return (int64)(C.QByteArrayView_Length(this.h))
}

func (this *QByteArrayView) First2() int8 {
	return (int8)(C.QByteArrayView_First2(this.h))
}

func (this *QByteArrayView) Last2() int8 {
	return (int8)(C.QByteArrayView_Last2(this.h))
}

func (this *QByteArrayView) ToShort1(ok *bool) int16 {
	return (int16)(C.QByteArrayView_ToShort1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToShort2(ok *bool, base int) int16 {
	return (int16)(C.QByteArrayView_ToShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToUShort1(ok *bool) uint16 {
	return (uint16)(C.QByteArrayView_ToUShort1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToUShort2(ok *bool, base int) uint16 {
	return (uint16)(C.QByteArrayView_ToUShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToInt1(ok *bool) int {
	return (int)(C.QByteArrayView_ToInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToInt2(ok *bool, base int) int {
	return (int)(C.QByteArrayView_ToInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToUInt1(ok *bool) uint {
	return (uint)(C.QByteArrayView_ToUInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToUInt2(ok *bool, base int) uint {
	return (uint)(C.QByteArrayView_ToUInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToLong1(ok *bool) int64 {
	return (int64)(C.QByteArrayView_ToLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToLong2(ok *bool, base int) int64 {
	return (int64)(C.QByteArrayView_ToLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToULong1(ok *bool) uint64 {
	return (uint64)(C.QByteArrayView_ToULong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToULong2(ok *bool, base int) uint64 {
	return (uint64)(C.QByteArrayView_ToULong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToLongLong1(ok *bool) int64 {
	return (int64)(C.QByteArrayView_ToLongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToLongLong2(ok *bool, base int) int64 {
	return (int64)(C.QByteArrayView_ToLongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToULongLong1(ok *bool) uint64 {
	return (uint64)(C.QByteArrayView_ToULongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToULongLong2(ok *bool, base int) uint64 {
	return (uint64)(C.QByteArrayView_ToULongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToFloat1(ok *bool) float32 {
	return (float32)(C.QByteArrayView_ToFloat1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToDouble1(ok *bool) float64 {
	return (float64)(C.QByteArrayView_ToDouble1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) IndexOf2(a QByteArrayView, from int64) int64 {
	return (int64)(C.QByteArrayView_IndexOf2(this.h, a.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayView) IndexOf22(ch int8, from int64) int64 {
	return (int64)(C.QByteArrayView_IndexOf22(this.h, (C.char)(ch), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayView) LastIndexOf22(ch int8, from int64) int64 {
	return (int64)(C.QByteArrayView_LastIndexOf22(this.h, (C.char)(ch), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayView) Compare2(a QByteArrayView, cs CaseSensitivity) int {
	return (int)(C.QByteArrayView_Compare2(this.h, a.cPointer(), (C.int)(cs)))
}

// Delete this object from C++ memory.
func (this *QByteArrayView) Delete() {
	C.QByteArrayView_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QByteArrayView) GoGC() {
	runtime.SetFinalizer(this, func(this *QByteArrayView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
