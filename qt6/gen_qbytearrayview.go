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
	h *C.QByteArrayView
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
	return newQByteArrayView((*C.QByteArrayView)(h))
}

// NewQByteArrayView constructs a new QByteArrayView object.
func NewQByteArrayView() *QByteArrayView {

	return newQByteArrayView(C.QByteArrayView_new())
}

// NewQByteArrayView2 constructs a new QByteArrayView object.
func NewQByteArrayView2(param1 *QByteArrayView) *QByteArrayView {

	return newQByteArrayView(C.QByteArrayView_new2(param1.cPointer()))
}

func (this *QByteArrayView) ToByteArray() []byte {
	var _bytearray C.struct_miqt_string = C.QByteArrayView_toByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QByteArrayView) Size() int64 {
	return (int64)(C.QByteArrayView_size(this.h))
}

func (this *QByteArrayView) Data() string {
	_ret := C.QByteArrayView_data(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) ConstData() string {
	_ret := C.QByteArrayView_constData(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) OperatorSubscript(n int64) int8 {
	return (int8)(C.QByteArrayView_operatorSubscript(this.h, (C.ptrdiff_t)(n)))
}

func (this *QByteArrayView) At(n int64) int8 {
	return (int8)(C.QByteArrayView_at(this.h, (C.ptrdiff_t)(n)))
}

func (this *QByteArrayView) First(n int64) *QByteArrayView {
	_goptr := newQByteArrayView(C.QByteArrayView_first(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Last(n int64) *QByteArrayView {
	_goptr := newQByteArrayView(C.QByteArrayView_last(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Sliced(pos int64) *QByteArrayView {
	_goptr := newQByteArrayView(C.QByteArrayView_sliced(this.h, (C.ptrdiff_t)(pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Sliced2(pos int64, n int64) *QByteArrayView {
	_goptr := newQByteArrayView(C.QByteArrayView_sliced2(this.h, (C.ptrdiff_t)(pos), (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Chopped(lenVal int64) *QByteArrayView {
	_goptr := newQByteArrayView(C.QByteArrayView_chopped(this.h, (C.ptrdiff_t)(lenVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) Truncate(n int64) {
	C.QByteArrayView_truncate(this.h, (C.ptrdiff_t)(n))
}

func (this *QByteArrayView) Chop(n int64) {
	C.QByteArrayView_chop(this.h, (C.ptrdiff_t)(n))
}

func (this *QByteArrayView) Trimmed() *QByteArrayView {
	_goptr := newQByteArrayView(C.QByteArrayView_trimmed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QByteArrayView) ToShort() int16 {
	return (int16)(C.QByteArrayView_toShort(this.h))
}

func (this *QByteArrayView) ToUShort() uint16 {
	return (uint16)(C.QByteArrayView_toUShort(this.h))
}

func (this *QByteArrayView) ToInt() int {
	return (int)(C.QByteArrayView_toInt(this.h))
}

func (this *QByteArrayView) ToUInt() uint {
	return (uint)(C.QByteArrayView_toUInt(this.h))
}

func (this *QByteArrayView) ToLong() int64 {
	return (int64)(C.QByteArrayView_toLong(this.h))
}

func (this *QByteArrayView) ToULong() uint64 {
	return (uint64)(C.QByteArrayView_toULong(this.h))
}

func (this *QByteArrayView) ToLongLong() int64 {
	return (int64)(C.QByteArrayView_toLongLong(this.h))
}

func (this *QByteArrayView) ToULongLong() uint64 {
	return (uint64)(C.QByteArrayView_toULongLong(this.h))
}

func (this *QByteArrayView) ToFloat() float32 {
	return (float32)(C.QByteArrayView_toFloat(this.h))
}

func (this *QByteArrayView) ToDouble() float64 {
	return (float64)(C.QByteArrayView_toDouble(this.h))
}

func (this *QByteArrayView) StartsWith(other QByteArrayView) bool {
	return (bool)(C.QByteArrayView_startsWith(this.h, other.cPointer()))
}

func (this *QByteArrayView) StartsWithWithChar(c int8) bool {
	return (bool)(C.QByteArrayView_startsWithWithChar(this.h, (C.char)(c)))
}

func (this *QByteArrayView) EndsWith(other QByteArrayView) bool {
	return (bool)(C.QByteArrayView_endsWith(this.h, other.cPointer()))
}

func (this *QByteArrayView) EndsWithWithChar(c int8) bool {
	return (bool)(C.QByteArrayView_endsWithWithChar(this.h, (C.char)(c)))
}

func (this *QByteArrayView) IndexOf(a QByteArrayView) int64 {
	return (int64)(C.QByteArrayView_indexOf(this.h, a.cPointer()))
}

func (this *QByteArrayView) IndexOfWithCh(ch int8) int64 {
	return (int64)(C.QByteArrayView_indexOfWithCh(this.h, (C.char)(ch)))
}

func (this *QByteArrayView) Contains(a QByteArrayView) bool {
	return (bool)(C.QByteArrayView_contains(this.h, a.cPointer()))
}

func (this *QByteArrayView) ContainsWithChar(c int8) bool {
	return (bool)(C.QByteArrayView_containsWithChar(this.h, (C.char)(c)))
}

func (this *QByteArrayView) LastIndexOf(a QByteArrayView) int64 {
	return (int64)(C.QByteArrayView_lastIndexOf(this.h, a.cPointer()))
}

func (this *QByteArrayView) LastIndexOf2(a QByteArrayView, from int64) int64 {
	return (int64)(C.QByteArrayView_lastIndexOf2(this.h, a.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayView) LastIndexOfWithCh(ch int8) int64 {
	return (int64)(C.QByteArrayView_lastIndexOfWithCh(this.h, (C.char)(ch)))
}

func (this *QByteArrayView) Count(a QByteArrayView) int64 {
	return (int64)(C.QByteArrayView_count(this.h, a.cPointer()))
}

func (this *QByteArrayView) CountWithCh(ch int8) int64 {
	return (int64)(C.QByteArrayView_countWithCh(this.h, (C.char)(ch)))
}

func (this *QByteArrayView) Compare(a QByteArrayView) int {
	return (int)(C.QByteArrayView_compare(this.h, a.cPointer()))
}

func (this *QByteArrayView) IsValidUtf8() bool {
	return (bool)(C.QByteArrayView_isValidUtf8(this.h))
}

func (this *QByteArrayView) Begin() string {
	_ret := C.QByteArrayView_begin(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) End() string {
	_ret := C.QByteArrayView_end(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) Cbegin() string {
	_ret := C.QByteArrayView_cbegin(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) Cend() string {
	_ret := C.QByteArrayView_cend(this.h)
	return C.GoString(_ret)
}

func (this *QByteArrayView) Empty() bool {
	return (bool)(C.QByteArrayView_empty(this.h))
}

func (this *QByteArrayView) Front() int8 {
	return (int8)(C.QByteArrayView_front(this.h))
}

func (this *QByteArrayView) Back() int8 {
	return (int8)(C.QByteArrayView_back(this.h))
}

func (this *QByteArrayView) IsNull() bool {
	return (bool)(C.QByteArrayView_isNull(this.h))
}

func (this *QByteArrayView) IsEmpty() bool {
	return (bool)(C.QByteArrayView_isEmpty(this.h))
}

func (this *QByteArrayView) Length() int64 {
	return (int64)(C.QByteArrayView_length(this.h))
}

func (this *QByteArrayView) First2() int8 {
	return (int8)(C.QByteArrayView_first2(this.h))
}

func (this *QByteArrayView) Last2() int8 {
	return (int8)(C.QByteArrayView_last2(this.h))
}

func (this *QByteArrayView) ToShort1(ok *bool) int16 {
	return (int16)(C.QByteArrayView_toShort1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToShort2(ok *bool, base int) int16 {
	return (int16)(C.QByteArrayView_toShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToUShort1(ok *bool) uint16 {
	return (uint16)(C.QByteArrayView_toUShort1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToUShort2(ok *bool, base int) uint16 {
	return (uint16)(C.QByteArrayView_toUShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToInt1(ok *bool) int {
	return (int)(C.QByteArrayView_toInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToInt2(ok *bool, base int) int {
	return (int)(C.QByteArrayView_toInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToUInt1(ok *bool) uint {
	return (uint)(C.QByteArrayView_toUInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToUInt2(ok *bool, base int) uint {
	return (uint)(C.QByteArrayView_toUInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToLong1(ok *bool) int64 {
	return (int64)(C.QByteArrayView_toLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToLong2(ok *bool, base int) int64 {
	return (int64)(C.QByteArrayView_toLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToULong1(ok *bool) uint64 {
	return (uint64)(C.QByteArrayView_toULong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToULong2(ok *bool, base int) uint64 {
	return (uint64)(C.QByteArrayView_toULong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToLongLong1(ok *bool) int64 {
	return (int64)(C.QByteArrayView_toLongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToLongLong2(ok *bool, base int) int64 {
	return (int64)(C.QByteArrayView_toLongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToULongLong1(ok *bool) uint64 {
	return (uint64)(C.QByteArrayView_toULongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToULongLong2(ok *bool, base int) uint64 {
	return (uint64)(C.QByteArrayView_toULongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QByteArrayView) ToFloat1(ok *bool) float32 {
	return (float32)(C.QByteArrayView_toFloat1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) ToDouble1(ok *bool) float64 {
	return (float64)(C.QByteArrayView_toDouble1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QByteArrayView) IndexOf2(a QByteArrayView, from int64) int64 {
	return (int64)(C.QByteArrayView_indexOf2(this.h, a.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayView) IndexOf22(ch int8, from int64) int64 {
	return (int64)(C.QByteArrayView_indexOf22(this.h, (C.char)(ch), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayView) LastIndexOf22(ch int8, from int64) int64 {
	return (int64)(C.QByteArrayView_lastIndexOf22(this.h, (C.char)(ch), (C.ptrdiff_t)(from)))
}

func (this *QByteArrayView) Compare2(a QByteArrayView, cs CaseSensitivity) int {
	return (int)(C.QByteArrayView_compare2(this.h, a.cPointer(), (C.int)(cs)))
}

// Delete this object from C++ memory.
func (this *QByteArrayView) Delete() {
	C.QByteArrayView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QByteArrayView) GoGC() {
	runtime.SetFinalizer(this, func(this *QByteArrayView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
