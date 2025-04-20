package pdf

/*

#include "gen_qpdfdocumentrenderoptions.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QPdfDocumentRenderOptions__Rotation int

const (
	QPdfDocumentRenderOptions__Rotation__None         QPdfDocumentRenderOptions__Rotation = 0
	QPdfDocumentRenderOptions__Rotation__Clockwise90  QPdfDocumentRenderOptions__Rotation = 1
	QPdfDocumentRenderOptions__Rotation__Clockwise180 QPdfDocumentRenderOptions__Rotation = 2
	QPdfDocumentRenderOptions__Rotation__Clockwise270 QPdfDocumentRenderOptions__Rotation = 3
)

type QPdfDocumentRenderOptions__RenderFlag int

const (
	QPdfDocumentRenderOptions__RenderFlag__None            QPdfDocumentRenderOptions__RenderFlag = 0
	QPdfDocumentRenderOptions__RenderFlag__Annotations     QPdfDocumentRenderOptions__RenderFlag = 1
	QPdfDocumentRenderOptions__RenderFlag__OptimizedForLcd QPdfDocumentRenderOptions__RenderFlag = 2
	QPdfDocumentRenderOptions__RenderFlag__Grayscale       QPdfDocumentRenderOptions__RenderFlag = 4
	QPdfDocumentRenderOptions__RenderFlag__ForceHalftone   QPdfDocumentRenderOptions__RenderFlag = 8
	QPdfDocumentRenderOptions__RenderFlag__TextAliased     QPdfDocumentRenderOptions__RenderFlag = 16
	QPdfDocumentRenderOptions__RenderFlag__ImageAliased    QPdfDocumentRenderOptions__RenderFlag = 32
	QPdfDocumentRenderOptions__RenderFlag__PathAliased     QPdfDocumentRenderOptions__RenderFlag = 64
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

func (this *QPdfDocumentRenderOptions) Rotation() QPdfDocumentRenderOptions__Rotation {
	return (QPdfDocumentRenderOptions__Rotation)(C.QPdfDocumentRenderOptions_rotation(this.h))
}

func (this *QPdfDocumentRenderOptions) SetRotation(r QPdfDocumentRenderOptions__Rotation) {
	C.QPdfDocumentRenderOptions_setRotation(this.h, (C.int)(r))
}

func (this *QPdfDocumentRenderOptions) RenderFlags() QPdfDocumentRenderOptions__RenderFlag {
	return (QPdfDocumentRenderOptions__RenderFlag)(C.QPdfDocumentRenderOptions_renderFlags(this.h))
}

func (this *QPdfDocumentRenderOptions) SetRenderFlags(r QPdfDocumentRenderOptions__RenderFlag) {
	C.QPdfDocumentRenderOptions_setRenderFlags(this.h, (C.int)(r))
}

func (this *QPdfDocumentRenderOptions) ScaledClipRect() *qt6.QRect {
	_goptr := qt6.UnsafeNewQRect(unsafe.Pointer(C.QPdfDocumentRenderOptions_scaledClipRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocumentRenderOptions) SetScaledClipRect(r *qt6.QRect) {
	C.QPdfDocumentRenderOptions_setScaledClipRect(this.h, (*C.QRect)(r.UnsafePointer()))
}

func (this *QPdfDocumentRenderOptions) ScaledSize() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QPdfDocumentRenderOptions_scaledSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocumentRenderOptions) SetScaledSize(s *qt6.QSize) {
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
