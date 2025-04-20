package pdf

/*

#include "gen_qpdfdocumentrenderoptions.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPdfDocumentRenderOptions struct {
	h *C.QPdfDocumentRenderOptions
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

	return newQPdfDocumentRenderOptions(C.QPdfDocumentRenderOptions_new2(param1.cPointer()))
}

func (this *QPdfDocumentRenderOptions) Rotation() QPdf__Rotation {
	return (QPdf__Rotation)(C.QPdfDocumentRenderOptions_rotation(this.h))
}

func (this *QPdfDocumentRenderOptions) SetRotation(r QPdf__Rotation) {
	C.QPdfDocumentRenderOptions_setRotation(this.h, (C.int)(r))
}

func (this *QPdfDocumentRenderOptions) RenderFlags() QPdf__RenderFlag {
	return (QPdf__RenderFlag)(C.QPdfDocumentRenderOptions_renderFlags(this.h))
}

func (this *QPdfDocumentRenderOptions) SetRenderFlags(r QPdf__RenderFlag) {
	C.QPdfDocumentRenderOptions_setRenderFlags(this.h, (C.int)(r))
}

func (this *QPdfDocumentRenderOptions) ScaledClipRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QPdfDocumentRenderOptions_scaledClipRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocumentRenderOptions) SetScaledClipRect(r *qt.QRect) {
	C.QPdfDocumentRenderOptions_setScaledClipRect(this.h, (*C.QRect)(r.UnsafePointer()))
}

func (this *QPdfDocumentRenderOptions) ScaledSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QPdfDocumentRenderOptions_scaledSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocumentRenderOptions) SetScaledSize(s *qt.QSize) {
	C.QPdfDocumentRenderOptions_setScaledSize(this.h, (*C.QSize)(s.UnsafePointer()))
}

// Delete this object from C++ memory.
func (this *QPdfDocumentRenderOptions) Delete() {
	C.QPdfDocumentRenderOptions_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfDocumentRenderOptions) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfDocumentRenderOptions) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
