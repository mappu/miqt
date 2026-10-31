package qt

/*

#include "gen_qcolormap.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	h  *C.QColormap
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QColormap) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(colormap)

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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(colormap)
	C.QColormap_operatorAssign(this.h, colormap.cPointer())
}

func (this *QColormap) Mode() QColormap__Mode {
	defer runtime.KeepAlive(this)
	return (QColormap__Mode)(C.QColormap_mode(this.h))
}

func (this *QColormap) Depth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QColormap_depth(this.h))
}

func (this *QColormap) Size() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QColormap_size(this.h))
}

func (this *QColormap) Pixel(color QColor) uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QColormap_pixel(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](color)))
}

func (this *QColormap) ColorAt(pixel uint) QColor {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QColor](C.QColormap_colorAt(this.h, (C.uint)(pixel)))
}

func (this *QColormap) Colormap() []QColor {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QColormap_colormap(this.h)
	_ret := make([]QColor, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_qcolor)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = libmiqt.ValueCast[QColor](_outCast[i])
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

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QColormap) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QColormap_delete((*C.QColormap)(gc[0]))
	})
	this.miqtSetGC(gc)
}
