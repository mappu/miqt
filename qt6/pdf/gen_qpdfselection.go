package pdf

/*

#include "gen_qpdfselection.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QPdfSelection struct {
	h *C.QPdfSelection
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

	return newQPdfSelection(C.QPdfSelection_new(other.cPointer()))
}

func (this *QPdfSelection) OperatorAssign(other *QPdfSelection) {
	C.QPdfSelection_operatorAssign(this.h, other.cPointer())
}

func (this *QPdfSelection) Swap(other *QPdfSelection) {
	C.QPdfSelection_swap(this.h, other.cPointer())
}

func (this *QPdfSelection) IsValid() bool {
	return (bool)(C.QPdfSelection_isValid(this.h))
}

func (this *QPdfSelection) Text() string {
	var _ms C.struct_miqt_string = C.QPdfSelection_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfSelection) BoundingRectangle() *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QPdfSelection_boundingRectangle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfSelection) StartIndex() int {
	return (int)(C.QPdfSelection_startIndex(this.h))
}

func (this *QPdfSelection) EndIndex() int {
	return (int)(C.QPdfSelection_endIndex(this.h))
}

func (this *QPdfSelection) CopyToClipboard() {
	C.QPdfSelection_copyToClipboard(this.h)
}

func (this *QPdfSelection) CopyToClipboardWithMode(mode qt6.QClipboard__Mode) {
	C.QPdfSelection_copyToClipboardWithMode(this.h, (C.int)(mode))
}

// Delete this object from C++ memory.
func (this *QPdfSelection) Delete() {
	C.QPdfSelection_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfSelection) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfSelection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
