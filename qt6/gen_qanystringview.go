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

// QAnyStringView constructors retain a native copy of the character data
// until Delete or Go finalization. Unsafe wrappers borrow their external character data.
type QAnyStringView struct {
	h            *C.QAnyStringView
	ownedStorage unsafe.Pointer
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
	var ownedStorage unsafe.Pointer
	_goptr := newQAnyStringView(C.QAnyStringView_new(&ownedStorage))
	if _goptr != nil {
		_goptr.ownedStorage = ownedStorage
	}
	return _goptr
}

// NewQAnyStringView2 constructs a new QAnyStringView object.
func NewQAnyStringView2(str []byte) *QAnyStringView {
	str_alias := C.struct_miqt_string{}
	if len(str) > 0 {
		str_alias.data = (*C.char)(unsafe.Pointer(&str[0]))
	} else {
		str_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	str_alias.len = C.size_t(len(str))
	var ownedStorage unsafe.Pointer
	_goptr := newQAnyStringView(C.QAnyStringView_new2(str_alias, &ownedStorage))
	if _goptr != nil {
		_goptr.ownedStorage = ownedStorage
	}
	return _goptr
}

// NewQAnyStringView3 constructs a new QAnyStringView object.
func NewQAnyStringView3(str string) *QAnyStringView {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var ownedStorage unsafe.Pointer
	_goptr := newQAnyStringView(C.QAnyStringView_new3(str_ms, &ownedStorage))
	if _goptr != nil {
		_goptr.ownedStorage = ownedStorage
	}
	return _goptr
}

// NewQAnyStringView4 constructs a new QAnyStringView object.
func NewQAnyStringView4(c *QChar) *QAnyStringView {
	defer runtime.KeepAlive(c)
	var ownedStorage unsafe.Pointer
	_goptr := newQAnyStringView(C.QAnyStringView_new4(c.cPointer(), &ownedStorage))
	if _goptr != nil {
		_goptr.ownedStorage = ownedStorage
	}
	return _goptr
}

// NewQAnyStringView5 constructs a new QAnyStringView object.
func NewQAnyStringView5(param1 *QAnyStringView) *QAnyStringView {
	defer runtime.KeepAlive(param1)
	var ownedStorage unsafe.Pointer
	_goptr := newQAnyStringView(C.QAnyStringView_new5(param1.cPointer(), &ownedStorage))
	if _goptr != nil {
		_goptr.ownedStorage = ownedStorage
	}
	return _goptr
}

func (this *QAnyStringView) ToString() string {
	defer runtime.KeepAlive(this)

	var _ms C.struct_miqt_string = C.QAnyStringView_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnyStringView) Size() int64 {
	defer runtime.KeepAlive(this)

	return (int64)(C.QAnyStringView_size(this.h))
}

func (this *QAnyStringView) Data() unsafe.Pointer {
	defer runtime.KeepAlive(this)

	return (unsafe.Pointer)(C.QAnyStringView_data(this.h))
}

func QAnyStringView_Compare(lhs QAnyStringView, rhs QAnyStringView) int {
	return (int)(C.QAnyStringView_compare(lhs.cPointer(), rhs.cPointer()))
}

func QAnyStringView_Equal(lhs QAnyStringView, rhs QAnyStringView) bool {
	return (bool)(C.QAnyStringView_equal(lhs.cPointer(), rhs.cPointer()))
}

func (this *QAnyStringView) Front() *QChar {
	defer runtime.KeepAlive(this)

	_goptr := newQChar(C.QAnyStringView_front(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Back() *QChar {
	defer runtime.KeepAlive(this)

	_goptr := newQChar(C.QAnyStringView_back(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Empty() bool {
	defer runtime.KeepAlive(this)

	return (bool)(C.QAnyStringView_empty(this.h))
}

func (this *QAnyStringView) SizeBytes() int64 {
	defer runtime.KeepAlive(this)

	return (int64)(C.QAnyStringView_sizeBytes(this.h))
}

func (this *QAnyStringView) IsNull() bool {
	defer runtime.KeepAlive(this)

	return (bool)(C.QAnyStringView_isNull(this.h))
}

func (this *QAnyStringView) IsEmpty() bool {
	defer runtime.KeepAlive(this)

	return (bool)(C.QAnyStringView_isEmpty(this.h))
}

func (this *QAnyStringView) Length() int64 {
	defer runtime.KeepAlive(this)

	return (int64)(C.QAnyStringView_length(this.h))
}

func QAnyStringView_Compare2(lhs QAnyStringView, rhs QAnyStringView, cs CaseSensitivity) int {
	return (int)(C.QAnyStringView_compare2(lhs.cPointer(), rhs.cPointer(), (C.int)(cs)))
}

// Delete this object from C++ memory.
func (this *QAnyStringView) Delete() {
	runtime.SetFinalizer(this, nil)
	C.QAnyStringView_delete(this.h, this.ownedStorage)
	this.h = nil
	this.ownedStorage = nil
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnyStringView) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnyStringView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
