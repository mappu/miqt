package pdf

/*

#include "gen_qpdfdocumentrenderoptions.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPdfDocumentRenderOptions struct {
	h  *C.QPdfDocumentRenderOptions
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPdfDocumentRenderOptions) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPdfDocumentRenderOptions) cPointer() *C.QPdfDocumentRenderOptions {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfDocumentRenderOptions) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfDocumentRenderOptions constructs the type using only CGO pointers.
func newQPdfDocumentRenderOptions(h *C.QPdfDocumentRenderOptions) *QPdfDocumentRenderOptions {
	if h == nil {
		return nil
	}

	return &QPdfDocumentRenderOptions{h: h}
}

// UnsafeNewQPdfDocumentRenderOptions constructs the type using only unsafe pointers.
func UnsafeNewQPdfDocumentRenderOptions(h unsafe.Pointer) *QPdfDocumentRenderOptions {
	return newQPdfDocumentRenderOptions((*C.QPdfDocumentRenderOptions)(h))
}

// NewQPdfDocumentRenderOptions constructs a new QPdfDocumentRenderOptions object.
func NewQPdfDocumentRenderOptions() *QPdfDocumentRenderOptions {

	return newQPdfDocumentRenderOptions(C.QPdfDocumentRenderOptions_new())
}

// NewQPdfDocumentRenderOptions2 constructs a new QPdfDocumentRenderOptions object.
func NewQPdfDocumentRenderOptions2(param1 *QPdfDocumentRenderOptions) *QPdfDocumentRenderOptions {
	defer runtime.KeepAlive(param1)

	return newQPdfDocumentRenderOptions(C.QPdfDocumentRenderOptions_new2(param1.cPointer()))
}

func (this *QPdfDocumentRenderOptions) Rotation() QPdf__Rotation {
	defer runtime.KeepAlive(this)
	return (QPdf__Rotation)(C.QPdfDocumentRenderOptions_rotation(this.h))
}

func (this *QPdfDocumentRenderOptions) SetRotation(r QPdf__Rotation) {
	defer runtime.KeepAlive(this)
	C.QPdfDocumentRenderOptions_setRotation(this.h, (C.int)(r))
}

func (this *QPdfDocumentRenderOptions) RenderFlags() QPdf__RenderFlag {
	defer runtime.KeepAlive(this)
	return (QPdf__RenderFlag)(C.QPdfDocumentRenderOptions_renderFlags(this.h))
}

func (this *QPdfDocumentRenderOptions) SetRenderFlags(r QPdf__RenderFlag) {
	defer runtime.KeepAlive(this)
	C.QPdfDocumentRenderOptions_setRenderFlags(this.h, (C.int)(r))
}

func (this *QPdfDocumentRenderOptions) ScaledClipRect() qt.QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRect](C.QPdfDocumentRenderOptions_scaledClipRect(this.h))
}

func (this *QPdfDocumentRenderOptions) SetScaledClipRect(r qt.QRect) {
	defer runtime.KeepAlive(this)
	C.QPdfDocumentRenderOptions_setScaledClipRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](r))
}

func (this *QPdfDocumentRenderOptions) ScaledSize() qt.QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QSize](C.QPdfDocumentRenderOptions_scaledSize(this.h))
}

func (this *QPdfDocumentRenderOptions) SetScaledSize(s qt.QSize) {
	defer runtime.KeepAlive(this)
	C.QPdfDocumentRenderOptions_setScaledSize(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](s))
}

// Delete this object from C++ memory.
func (this *QPdfDocumentRenderOptions) Delete() {
	C.QPdfDocumentRenderOptions_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPdfDocumentRenderOptions) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPdfDocumentRenderOptions_delete((*C.QPdfDocumentRenderOptions)(gc[0]))
	})
	this.miqtSetGC(gc)
}
