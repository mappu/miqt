package qt

/*

#include "gen_qcolormap.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QColormap__Mode int

const (
	QColormap__Direct  QColormap__Mode = 0
	QColormap__Indexed QColormap__Mode = 1
	QColormap__Gray    QColormap__Mode = 2
)

type QColormap struct {
	h *C.QColormap
}

func (this *QColormap) cPointer() *C.QColormap {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColormap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColormap constructs the type using only CGO pointers.
func newQColormap(h *C.QColormap) *QColormap {
	if h == nil {
		return nil
	}

	return &QColormap{h: h}
}

// UnsafeNewQColormap constructs the type using only unsafe pointers.
func UnsafeNewQColormap(h unsafe.Pointer) *QColormap {
	return newQColormap((*C.QColormap)(h))
}

// NewQColormap constructs a new QColormap object.
func NewQColormap(colormap *QColormap) *QColormap {

	return newQColormap(C.QColormap_new(colormap.cPointer()))
}

func QColormap_Initialize() {
	C.QColormap_initialize()
}

func QColormap_Cleanup() {
	C.QColormap_cleanup()
}

func QColormap_Instance() *QColormap {
	_goptr := newQColormap(C.QColormap_instance())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColormap) OperatorAssign(colormap *QColormap) {
	C.QColormap_operatorAssign(this.h, colormap.cPointer())
}

func (this *QColormap) Mode() QColormap__Mode {
	return (QColormap__Mode)(C.QColormap_mode(this.h))
}

func (this *QColormap) Depth() int {
	return (int)(C.QColormap_depth(this.h))
}

func (this *QColormap) Size() int {
	return (int)(C.QColormap_size(this.h))
}

func (this *QColormap) Pixel(color *QColor) uint {
	return (uint)(C.QColormap_pixel(this.h, color.cPointer()))
}

func (this *QColormap) ColorAt(pixel uint) *QColor {
	_goptr := newQColor(C.QColormap_colorAt(this.h, (C.uint)(pixel)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColormap) Colormap() []QColor {
	var _ma C.struct_miqt_array = C.QColormap_colormap(this.h)
	_ret := make([]QColor, int(_ma.len))
	_outCast := (*[0xffff]*C.QColor)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQColor(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func QColormap_InstanceWithScreen(screen int) *QColormap {
	_goptr := newQColormap(C.QColormap_instanceWithScreen((C.int)(screen)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColormap) Delete() {
	C.QColormap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColormap) GoGC() {
	runtime.SetFinalizer(this, func(this *QColormap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
