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

	return newQStringView(C.QStringView_new())
}

func (this *QStringView) ToString() string {
	var _ms C.struct_miqt_string = C.QStringView_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStringView) Size() int64 {
	return (int64)(C.QStringView_size(this.h))
}

func (this *QStringView) Data() *QChar {
	return newQChar(C.QStringView_data(this.h))
}

func (this *QStringView) OperatorSubscript(n int64) *QChar {
	_goptr := newQChar(C.QStringView_operatorSubscript(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) ToLatin1() []byte {
	var _bytearray C.struct_miqt_string = C.QStringView_toLatin1(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStringView) ToUtf8() []byte {
	var _bytearray C.struct_miqt_string = C.QStringView_toUtf8(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStringView) ToLocal8Bit() []byte {
	var _bytearray C.struct_miqt_string = C.QStringView_toLocal8Bit(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QStringView) ToUcs4() []uint {
	var _ma C.struct_miqt_array = C.QStringView_toUcs4(this.h)
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret
}

func (this *QStringView) At(n int64) *QChar {
	_goptr := newQChar(C.QStringView_at(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Truncate(n int64) {
	C.QStringView_truncate(this.h, (C.ptrdiff_t)(n))
}

func (this *QStringView) Chop(n int64) {
	C.QStringView_chop(this.h, (C.ptrdiff_t)(n))
}

func (this *QStringView) CompareWithQChar(c QChar) int {
	return (int)(C.QStringView_compareWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) Compare2(c QChar, cs CaseSensitivity) int {
	return (int)(C.QStringView_compare2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) StartsWithWithQChar(c QChar) bool {
	return (bool)(C.QStringView_startsWithWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) StartsWith2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_startsWith2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) EndsWithWithQChar(c QChar) bool {
	return (bool)(C.QStringView_endsWithWithQChar(this.h, c.cPointer()))
}

func (this *QStringView) EndsWith2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_endsWith2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) IndexOf(c QChar) int64 {
	return (int64)(C.QStringView_indexOf(this.h, c.cPointer()))
}

func (this *QStringView) Contains(c QChar) bool {
	return (bool)(C.QStringView_contains(this.h, c.cPointer()))
}

func (this *QStringView) Count(c QChar) int64 {
	return (int64)(C.QStringView_count(this.h, c.cPointer()))
}

func (this *QStringView) LastIndexOf(c QChar) int64 {
	return (int64)(C.QStringView_lastIndexOf(this.h, c.cPointer()))
}

func (this *QStringView) IsRightToLeft() bool {
	return (bool)(C.QStringView_isRightToLeft(this.h))
}

func (this *QStringView) IsValidUtf16() bool {
	return (bool)(C.QStringView_isValidUtf16(this.h))
}

func (this *QStringView) ToShort() int16 {
	return (int16)(C.QStringView_toShort(this.h))
}

func (this *QStringView) ToUShort() uint16 {
	return (uint16)(C.QStringView_toUShort(this.h))
}

func (this *QStringView) ToInt() int {
	return (int)(C.QStringView_toInt(this.h))
}

func (this *QStringView) ToUInt() uint {
	return (uint)(C.QStringView_toUInt(this.h))
}

func (this *QStringView) ToLong() int64 {
	return (int64)(C.QStringView_toLong(this.h))
}

func (this *QStringView) ToULong() uint64 {
	return (uint64)(C.QStringView_toULong(this.h))
}

func (this *QStringView) ToLongLong() int64 {
	return (int64)(C.QStringView_toLongLong(this.h))
}

func (this *QStringView) ToULongLong() uint64 {
	return (uint64)(C.QStringView_toULongLong(this.h))
}

func (this *QStringView) ToFloat() float32 {
	return (float32)(C.QStringView_toFloat(this.h))
}

func (this *QStringView) ToDouble() float64 {
	return (float64)(C.QStringView_toDouble(this.h))
}

func (this *QStringView) Begin() *QChar {
	return newQChar(C.QStringView_begin(this.h))
}

func (this *QStringView) End() *QChar {
	return newQChar(C.QStringView_end(this.h))
}

func (this *QStringView) Cbegin() *QChar {
	return newQChar(C.QStringView_cbegin(this.h))
}

func (this *QStringView) Cend() *QChar {
	return newQChar(C.QStringView_cend(this.h))
}

func (this *QStringView) Empty() bool {
	return (bool)(C.QStringView_empty(this.h))
}

func (this *QStringView) Front() *QChar {
	_goptr := newQChar(C.QStringView_front(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Back() *QChar {
	_goptr := newQChar(C.QStringView_back(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) IsNull() bool {
	return (bool)(C.QStringView_isNull(this.h))
}

func (this *QStringView) IsEmpty() bool {
	return (bool)(C.QStringView_isEmpty(this.h))
}

func (this *QStringView) Length() int {
	return (int)(C.QStringView_length(this.h))
}

func (this *QStringView) First() *QChar {
	_goptr := newQChar(C.QStringView_first(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) Last() *QChar {
	_goptr := newQChar(C.QStringView_last(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStringView) IndexOf2(c QChar, from int64) int64 {
	return (int64)(C.QStringView_indexOf2(this.h, c.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QStringView) IndexOf3(c QChar, from int64, cs CaseSensitivity) int64 {
	return (int64)(C.QStringView_indexOf3(this.h, c.cPointer(), (C.ptrdiff_t)(from), (C.int)(cs)))
}

func (this *QStringView) Contains2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QStringView_contains2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) Count2(c QChar, cs CaseSensitivity) int64 {
	return (int64)(C.QStringView_count2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QStringView) LastIndexOf2(c QChar, from int64) int64 {
	return (int64)(C.QStringView_lastIndexOf2(this.h, c.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QStringView) LastIndexOf3(c QChar, from int64, cs CaseSensitivity) int64 {
	return (int64)(C.QStringView_lastIndexOf3(this.h, c.cPointer(), (C.ptrdiff_t)(from), (C.int)(cs)))
}

func (this *QStringView) ToShortWithOk(ok *bool) int16 {
	return (int16)(C.QStringView_toShortWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToShort2(ok *bool, base int) int16 {
	return (int16)(C.QStringView_toShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToUShortWithOk(ok *bool) uint16 {
	return (uint16)(C.QStringView_toUShortWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToUShort2(ok *bool, base int) uint16 {
	return (uint16)(C.QStringView_toUShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToIntWithOk(ok *bool) int {
	return (int)(C.QStringView_toIntWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToInt2(ok *bool, base int) int {
	return (int)(C.QStringView_toInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToUIntWithOk(ok *bool) uint {
	return (uint)(C.QStringView_toUIntWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToUInt2(ok *bool, base int) uint {
	return (uint)(C.QStringView_toUInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToLongWithOk(ok *bool) int64 {
	return (int64)(C.QStringView_toLongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToLong2(ok *bool, base int) int64 {
	return (int64)(C.QStringView_toLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToULongWithOk(ok *bool) uint64 {
	return (uint64)(C.QStringView_toULongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToULong2(ok *bool, base int) uint64 {
	return (uint64)(C.QStringView_toULong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToLongLongWithOk(ok *bool) int64 {
	return (int64)(C.QStringView_toLongLongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToLongLong2(ok *bool, base int) int64 {
	return (int64)(C.QStringView_toLongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToULongLongWithOk(ok *bool) uint64 {
	return (uint64)(C.QStringView_toULongLongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToULongLong2(ok *bool, base int) uint64 {
	return (uint64)(C.QStringView_toULongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QStringView) ToFloatWithOk(ok *bool) float32 {
	return (float32)(C.QStringView_toFloatWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QStringView) ToDoubleWithOk(ok *bool) float64 {
	return (float64)(C.QStringView_toDoubleWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QStringView) Delete() {
	C.QStringView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringView) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
