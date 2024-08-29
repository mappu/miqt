package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcolormap.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func newQColormap(h *C.QColormap) *QColormap {
	return &QColormap{h: h}
}

func newQColormap_U(h unsafe.Pointer) *QColormap {
	return newQColormap((*C.QColormap)(h))
}

// NewQColormap constructs a new QColormap object.
func NewQColormap(colormap *QColormap) *QColormap {
	ret := C.QColormap_new(colormap.cPointer())
	return newQColormap(ret)
}

func QColormap_Initialize() {
	C.QColormap_Initialize()
}

func QColormap_Cleanup() {
	C.QColormap_Cleanup()
}

func QColormap_Instance() *QColormap {
	ret := C.QColormap_Instance()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColormap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColormap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColormap) OperatorAssign(colormap *QColormap) {
	C.QColormap_OperatorAssign(this.h, colormap.cPointer())
}

func (this *QColormap) Mode() uintptr {
	ret := C.QColormap_Mode(this.h)
	return (uintptr)(ret)
}

func (this *QColormap) Depth() int {
	ret := C.QColormap_Depth(this.h)
	return (int)(ret)
}

func (this *QColormap) Size() int {
	ret := C.QColormap_Size(this.h)
	return (int)(ret)
}

func (this *QColormap) Pixel(color *QColor) uint {
	ret := C.QColormap_Pixel(this.h, color.cPointer())
	return (uint)(ret)
}

func (this *QColormap) ColorAt(pixel uint) *QColor {
	ret := C.QColormap_ColorAt(this.h, (C.uint)(pixel))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColormap) Colormap() []QColor {
	var _out **C.QColor = nil
	var _out_len C.size_t = 0
	C.QColormap_Colormap(this.h, &_out, &_out_len)
	ret := make([]QColor, int(_out_len))
	_outCast := (*[0xffff]*C.QColor)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQColor(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColormap_Instance1(screen int) *QColormap {
	ret := C.QColormap_Instance1((C.int)(screen))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColormap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColormap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColormap) Delete() {
	C.QColormap_Delete(this.h)
}
