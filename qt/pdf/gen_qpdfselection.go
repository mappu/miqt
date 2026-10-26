package pdf

/*

#include "gen_qpdfselection.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPdfSelection struct {
	h  *C.QPdfSelection
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPdfSelection) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPdfSelection) cPointer() *C.QPdfSelection {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfSelection) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfSelection constructs the type using only CGO pointers.
func newQPdfSelection(h *C.QPdfSelection) *QPdfSelection {
	if h == nil {
		return nil
	}

	return &QPdfSelection{h: h}
}

// UnsafeNewQPdfSelection constructs the type using only unsafe pointers.
func UnsafeNewQPdfSelection(h unsafe.Pointer) *QPdfSelection {
	return newQPdfSelection((*C.QPdfSelection)(h))
}

// NewQPdfSelection constructs a new QPdfSelection object.
func NewQPdfSelection(other *QPdfSelection) *QPdfSelection {
	defer runtime.KeepAlive(other)

	return newQPdfSelection(C.QPdfSelection_new(other.cPointer()))
}

func (this *QPdfSelection) OperatorAssign(other *QPdfSelection) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPdfSelection_operatorAssign(this.h, other.cPointer())
}

func (this *QPdfSelection) Swap(other *QPdfSelection) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPdfSelection_swap(this.h, other.cPointer())
}

func (this *QPdfSelection) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPdfSelection_isValid(this.h))
}

func (this *QPdfSelection) Text() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPdfSelection_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfSelection) BoundingRectangle() *qt.QRectF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QPdfSelection_boundingRectangle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfSelection) StartIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPdfSelection_startIndex(this.h))
}

func (this *QPdfSelection) EndIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPdfSelection_endIndex(this.h))
}

func (this *QPdfSelection) CopyToClipboard() {
	defer runtime.KeepAlive(this)
	C.QPdfSelection_copyToClipboard(this.h)
}

func (this *QPdfSelection) CopyToClipboardWithMode(mode qt.QClipboard__Mode) {
	defer runtime.KeepAlive(this)
	C.QPdfSelection_copyToClipboardWithMode(this.h, (C.int)(mode))
}

// Delete this object from C++ memory.
func (this *QPdfSelection) Delete() {
	C.QPdfSelection_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPdfSelection) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPdfSelection_delete((*C.QPdfSelection)(gc[0]))
	})
	this.miqtSetGC(gc)
}
