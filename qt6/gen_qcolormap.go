package qt6

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
	h          *C.QColormap
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QColormap{h: (*C.QColormap)(h)}
}

// NewQColormap constructs a new QColormap object.
func NewQColormap(colormap *QColormap) *QColormap {
	var outptr_QColormap *C.QColormap = nil

	C.QColormap_new(colormap.cPointer(), &outptr_QColormap)
	ret := newQColormap(outptr_QColormap)
	ret.isSubclass = true
	return ret
}

func QColormap_Initialize() {
	C.QColormap_Initialize()
}

func QColormap_Cleanup() {
	C.QColormap_Cleanup()
}

func QColormap_Instance() *QColormap {
	_goptr := newQColormap(C.QColormap_Instance())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColormap) OperatorAssign(colormap *QColormap) {
	C.QColormap_OperatorAssign(this.h, colormap.cPointer())
}

func (this *QColormap) Mode() QColormap__Mode {
	return (QColormap__Mode)(C.QColormap_Mode(this.h))
}

func (this *QColormap) Depth() int {
	return (int)(C.QColormap_Depth(this.h))
}

func (this *QColormap) Size() int {
	return (int)(C.QColormap_Size(this.h))
}

func (this *QColormap) Pixel(color *QColor) uint {
	return (uint)(C.QColormap_Pixel(this.h, color.cPointer()))
}

func (this *QColormap) ColorAt(pixel uint) *QColor {
	_goptr := newQColor(C.QColormap_ColorAt(this.h, (C.uint)(pixel)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColormap) Colormap() []QColor {
	var _ma C.struct_miqt_array = C.QColormap_Colormap(this.h)
	_ret := make([]QColor, int(_ma.len))
	_outCast := (*[0xffff]*C.QColor)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQColor(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QColormap_Instance1(screen int) *QColormap {
	_goptr := newQColormap(C.QColormap_Instance1((C.int)(screen)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColormap) Delete() {
	C.QColormap_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColormap) GoGC() {
	runtime.SetFinalizer(this, func(this *QColormap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
