package qt6

/*

#include "gen_qanystringview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAnyStringView struct {
	h          *C.QAnyStringView
	isSubclass bool
}

func (this *QAnyStringView) cPointer() *C.QAnyStringView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAnyStringView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAnyStringView constructs the type using only CGO pointers.
func newQAnyStringView(h *C.QAnyStringView) *QAnyStringView {
	if h == nil {
		return nil
	}

	return &QAnyStringView{h: h}
}

// UnsafeNewQAnyStringView constructs the type using only unsafe pointers.
func UnsafeNewQAnyStringView(h unsafe.Pointer) *QAnyStringView {
	return newQAnyStringView((*C.QAnyStringView)(h))
}

// NewQAnyStringView constructs a new QAnyStringView object.
func NewQAnyStringView() *QAnyStringView {

	ret := newQAnyStringView(C.QAnyStringView_new())
	ret.isSubclass = true
	return ret
}

// NewQAnyStringView2 constructs a new QAnyStringView object.
func NewQAnyStringView2(str []byte) *QAnyStringView {
	str_alias := C.struct_miqt_string{}
	str_alias.data = (*C.char)(unsafe.Pointer(&str[0]))
	str_alias.len = C.size_t(len(str))

	ret := newQAnyStringView(C.QAnyStringView_new2(str_alias))
	ret.isSubclass = true
	return ret
}

// NewQAnyStringView3 constructs a new QAnyStringView object.
func NewQAnyStringView3(str string) *QAnyStringView {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))

	ret := newQAnyStringView(C.QAnyStringView_new3(str_ms))
	ret.isSubclass = true
	return ret
}

// NewQAnyStringView4 constructs a new QAnyStringView object.
func NewQAnyStringView4(c *QChar) *QAnyStringView {

	ret := newQAnyStringView(C.QAnyStringView_new4(c.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQAnyStringView5 constructs a new QAnyStringView object.
func NewQAnyStringView5(param1 *QAnyStringView) *QAnyStringView {

	ret := newQAnyStringView(C.QAnyStringView_new5(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QAnyStringView) ToString() string {
	var _ms C.struct_miqt_string = C.QAnyStringView_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnyStringView) Size() int64 {
	return (int64)(C.QAnyStringView_Size(this.h))
}

func (this *QAnyStringView) Data() unsafe.Pointer {
	return (unsafe.Pointer)(C.QAnyStringView_Data(this.h))
}

func QAnyStringView_Compare(lhs QAnyStringView, rhs QAnyStringView) int {
	return (int)(C.QAnyStringView_Compare(lhs.cPointer(), rhs.cPointer()))
}

func QAnyStringView_Equal(lhs QAnyStringView, rhs QAnyStringView) bool {
	return (bool)(C.QAnyStringView_Equal(lhs.cPointer(), rhs.cPointer()))
}

func (this *QAnyStringView) Front() *QChar {
	_goptr := newQChar(C.QAnyStringView_Front(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Back() *QChar {
	_goptr := newQChar(C.QAnyStringView_Back(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Empty() bool {
	return (bool)(C.QAnyStringView_Empty(this.h))
}

func (this *QAnyStringView) SizeBytes() int64 {
	return (int64)(C.QAnyStringView_SizeBytes(this.h))
}

func (this *QAnyStringView) IsNull() bool {
	return (bool)(C.QAnyStringView_IsNull(this.h))
}

func (this *QAnyStringView) IsEmpty() bool {
	return (bool)(C.QAnyStringView_IsEmpty(this.h))
}

func (this *QAnyStringView) Length() int64 {
	return (int64)(C.QAnyStringView_Length(this.h))
}

func QAnyStringView_Compare3(lhs QAnyStringView, rhs QAnyStringView, cs CaseSensitivity) int {
	return (int)(C.QAnyStringView_Compare3(lhs.cPointer(), rhs.cPointer(), (C.int)(cs)))
}

// Delete this object from C++ memory.
func (this *QAnyStringView) Delete() {
	C.QAnyStringView_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnyStringView) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnyStringView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
