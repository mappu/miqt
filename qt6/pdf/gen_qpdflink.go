package pdf

/*

#include "gen_qpdflink.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QPdfLink struct {
	h *C.QPdfLink
}

func (this *QPdfLink) cPointer() *C.QPdfLink {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfLink) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfLink constructs the type using only CGO pointers.
func newQPdfLink(h *C.QPdfLink) *QPdfLink {
	if h == nil {
		return nil
	}

	return &QPdfLink{h: h}
}

// UnsafeNewQPdfLink constructs the type using only unsafe pointers.
func UnsafeNewQPdfLink(h unsafe.Pointer) *QPdfLink {
	return newQPdfLink((*C.QPdfLink)(h))
}

// NewQPdfLink constructs a new QPdfLink object.
func NewQPdfLink() *QPdfLink {

	return newQPdfLink(C.QPdfLink_new())
}

// NewQPdfLink2 constructs a new QPdfLink object.
func NewQPdfLink2(other *QPdfLink) *QPdfLink {

	return newQPdfLink(C.QPdfLink_new2(other.cPointer()))
}

func (this *QPdfLink) OperatorAssign(other *QPdfLink) {
	C.QPdfLink_operatorAssign(this.h, other.cPointer())
}

func (this *QPdfLink) Swap(other *QPdfLink) {
	C.QPdfLink_swap(this.h, other.cPointer())
}

func (this *QPdfLink) IsValid() bool {
	return (bool)(C.QPdfLink_isValid(this.h))
}

func (this *QPdfLink) Page() int {
	return (int)(C.QPdfLink_page(this.h))
}

func (this *QPdfLink) Location() *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QPdfLink_location(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfLink) Zoom() float64 {
	return (float64)(C.QPdfLink_zoom(this.h))
}

func (this *QPdfLink) Url() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QPdfLink_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfLink) ContextBefore() string {
	var _ms C.struct_miqt_string = C.QPdfLink_contextBefore(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfLink) ContextAfter() string {
	var _ms C.struct_miqt_string = C.QPdfLink_contextAfter(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfLink) Rectangles() []qt6.QRectF {
	var _ma C.struct_miqt_array = C.QPdfLink_rectangles(this.h)
	_ret := make([]qt6.QRectF, int(_ma.len))
	_outCast := (*[0xffff]*C.QRectF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QPdfLink) ToString() string {
	var _ms C.struct_miqt_string = C.QPdfLink_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfLink) CopyToClipboard() {
	C.QPdfLink_copyToClipboard(this.h)
}

func (this *QPdfLink) CopyToClipboardWithMode(mode qt6.QClipboard__Mode) {
	C.QPdfLink_copyToClipboardWithMode(this.h, (C.int)(mode))
}

// Delete this object from C++ memory.
func (this *QPdfLink) Delete() {
	C.QPdfLink_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfLink) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfLink) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
