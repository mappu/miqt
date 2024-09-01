package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpen.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPen struct {
	h *C.QPen
}

func (this *QPen) cPointer() *C.QPen {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPen(h *C.QPen) *QPen {
	if h == nil {
		return nil
	}
	return &QPen{h: h}
}

func newQPen_U(h unsafe.Pointer) *QPen {
	return newQPen((*C.QPen)(h))
}

// NewQPen constructs a new QPen object.
func NewQPen() *QPen {
	ret := C.QPen_new()
	return newQPen(ret)
}

// NewQPen2 constructs a new QPen object.
func NewQPen2(param1 uintptr) *QPen {
	ret := C.QPen_new2((C.uintptr_t)(param1))
	return newQPen(ret)
}

// NewQPen3 constructs a new QPen object.
func NewQPen3(color *QColor) *QPen {
	ret := C.QPen_new3(color.cPointer())
	return newQPen(ret)
}

// NewQPen4 constructs a new QPen object.
func NewQPen4(brush *QBrush, width float64) *QPen {
	ret := C.QPen_new4(brush.cPointer(), (C.double)(width))
	return newQPen(ret)
}

// NewQPen5 constructs a new QPen object.
func NewQPen5(pen *QPen) *QPen {
	ret := C.QPen_new5(pen.cPointer())
	return newQPen(ret)
}

// NewQPen6 constructs a new QPen object.
func NewQPen6(brush *QBrush, width float64, s uintptr) *QPen {
	ret := C.QPen_new6(brush.cPointer(), (C.double)(width), (C.uintptr_t)(s))
	return newQPen(ret)
}

// NewQPen7 constructs a new QPen object.
func NewQPen7(brush *QBrush, width float64, s uintptr, c uintptr) *QPen {
	ret := C.QPen_new7(brush.cPointer(), (C.double)(width), (C.uintptr_t)(s), (C.uintptr_t)(c))
	return newQPen(ret)
}

// NewQPen8 constructs a new QPen object.
func NewQPen8(brush *QBrush, width float64, s uintptr, c uintptr, j uintptr) *QPen {
	ret := C.QPen_new8(brush.cPointer(), (C.double)(width), (C.uintptr_t)(s), (C.uintptr_t)(c), (C.uintptr_t)(j))
	return newQPen(ret)
}

func (this *QPen) OperatorAssign(pen *QPen) {
	C.QPen_OperatorAssign(this.h, pen.cPointer())
}

func (this *QPen) Swap(other *QPen) {
	C.QPen_Swap(this.h, other.cPointer())
}

func (this *QPen) Style() uintptr {
	ret := C.QPen_Style(this.h)
	return (uintptr)(ret)
}

func (this *QPen) SetStyle(style uintptr) {
	C.QPen_SetStyle(this.h, (C.uintptr_t)(style))
}

func (this *QPen) DashPattern() []float64 {
	var _out *C.double = nil
	var _out_len C.size_t = 0
	C.QPen_DashPattern(this.h, &_out, &_out_len)
	ret := make([]float64, int(_out_len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (float64)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPen) SetDashPattern(pattern []float64) {
	// For the C ABI, malloc a C array of raw pointers
	pattern_CArray := (*[0xffff]C.double)(C.malloc(C.ulong(8 * len(pattern))))
	defer C.free(unsafe.Pointer(pattern_CArray))
	for i := range pattern {
		pattern_CArray[i] = (C.double)(pattern[i])
	}
	C.QPen_SetDashPattern(this.h, &pattern_CArray[0], C.ulong(len(pattern)))
}

func (this *QPen) DashOffset() float64 {
	ret := C.QPen_DashOffset(this.h)
	return (float64)(ret)
}

func (this *QPen) SetDashOffset(doffset float64) {
	C.QPen_SetDashOffset(this.h, (C.double)(doffset))
}

func (this *QPen) MiterLimit() float64 {
	ret := C.QPen_MiterLimit(this.h)
	return (float64)(ret)
}

func (this *QPen) SetMiterLimit(limit float64) {
	C.QPen_SetMiterLimit(this.h, (C.double)(limit))
}

func (this *QPen) WidthF() float64 {
	ret := C.QPen_WidthF(this.h)
	return (float64)(ret)
}

func (this *QPen) SetWidthF(width float64) {
	C.QPen_SetWidthF(this.h, (C.double)(width))
}

func (this *QPen) Width() int {
	ret := C.QPen_Width(this.h)
	return (int)(ret)
}

func (this *QPen) SetWidth(width int) {
	C.QPen_SetWidth(this.h, (C.int)(width))
}

func (this *QPen) Color() *QColor {
	ret := C.QPen_Color(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPen) SetColor(color *QColor) {
	C.QPen_SetColor(this.h, color.cPointer())
}

func (this *QPen) Brush() *QBrush {
	ret := C.QPen_Brush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPen) SetBrush(brush *QBrush) {
	C.QPen_SetBrush(this.h, brush.cPointer())
}

func (this *QPen) IsSolid() bool {
	ret := C.QPen_IsSolid(this.h)
	return (bool)(ret)
}

func (this *QPen) CapStyle() uintptr {
	ret := C.QPen_CapStyle(this.h)
	return (uintptr)(ret)
}

func (this *QPen) SetCapStyle(pcs uintptr) {
	C.QPen_SetCapStyle(this.h, (C.uintptr_t)(pcs))
}

func (this *QPen) JoinStyle() uintptr {
	ret := C.QPen_JoinStyle(this.h)
	return (uintptr)(ret)
}

func (this *QPen) SetJoinStyle(pcs uintptr) {
	C.QPen_SetJoinStyle(this.h, (C.uintptr_t)(pcs))
}

func (this *QPen) IsCosmetic() bool {
	ret := C.QPen_IsCosmetic(this.h)
	return (bool)(ret)
}

func (this *QPen) SetCosmetic(cosmetic bool) {
	C.QPen_SetCosmetic(this.h, (C.bool)(cosmetic))
}

func (this *QPen) OperatorEqual(p *QPen) bool {
	ret := C.QPen_OperatorEqual(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QPen) OperatorNotEqual(p *QPen) bool {
	ret := C.QPen_OperatorNotEqual(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QPen) IsDetached() bool {
	ret := C.QPen_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QPen) Delete() {
	C.QPen_Delete(this.h)
}
