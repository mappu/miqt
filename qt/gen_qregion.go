package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qregion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRegion struct {
	h *C.QRegion
}

func (this *QRegion) cPointer() *C.QRegion {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRegion(h *C.QRegion) *QRegion {
	return &QRegion{h: h}
}

func newQRegion_U(h unsafe.Pointer) *QRegion {
	return newQRegion((*C.QRegion)(h))
}

// NewQRegion constructs a new QRegion object.
func NewQRegion() *QRegion {
	ret := C.QRegion_new()
	return newQRegion(ret)
}

// NewQRegion2 constructs a new QRegion object.
func NewQRegion2(region *QRegion) *QRegion {
	ret := C.QRegion_new2(region.cPointer())
	return newQRegion(ret)
}

// NewQRegion3 constructs a new QRegion object.
func NewQRegion3(bitmap *QBitmap) *QRegion {
	ret := C.QRegion_new3(bitmap.cPointer())
	return newQRegion(ret)
}

func (this *QRegion) OperatorAssign(param1 *QRegion) {
	C.QRegion_OperatorAssign(this.h, param1.cPointer())
}

func (this *QRegion) Swap(other *QRegion) {
	C.QRegion_Swap(this.h, other.cPointer())
}

func (this *QRegion) IsEmpty() bool {
	ret := C.QRegion_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QRegion) IsNull() bool {
	ret := C.QRegion_IsNull(this.h)
	return (bool)(ret)
}

func (this *QRegion) Contains(p *QPoint) bool {
	ret := C.QRegion_Contains(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QRegion) ContainsWithQRect(r *QRect) bool {
	ret := C.QRegion_ContainsWithQRect(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRegion) Translate(dx int, dy int) {
	C.QRegion_Translate(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QRegion) TranslateWithQPoint(p *QPoint) {
	C.QRegion_TranslateWithQPoint(this.h, p.cPointer())
}

func (this *QRegion) Translated(dx int, dy int) *QRegion {
	ret := C.QRegion_Translated(this.h, (C.int)(dx), (C.int)(dy))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) TranslatedWithQPoint(p *QPoint) *QRegion {
	ret := C.QRegion_TranslatedWithQPoint(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) United(r *QRegion) *QRegion {
	ret := C.QRegion_United(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) UnitedWithQRect(r *QRect) *QRegion {
	ret := C.QRegion_UnitedWithQRect(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) Intersected(r *QRegion) *QRegion {
	ret := C.QRegion_Intersected(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) IntersectedWithQRect(r *QRect) *QRegion {
	ret := C.QRegion_IntersectedWithQRect(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) Subtracted(r *QRegion) *QRegion {
	ret := C.QRegion_Subtracted(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) Xored(r *QRegion) *QRegion {
	ret := C.QRegion_Xored(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) Intersects(r *QRegion) bool {
	ret := C.QRegion_Intersects(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRegion) IntersectsWithQRect(r *QRect) bool {
	ret := C.QRegion_IntersectsWithQRect(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRegion) BoundingRect() *QRect {
	ret := C.QRegion_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) Rects() []QRect {
	var _out **C.QRect = nil
	var _out_len C.size_t = 0
	C.QRegion_Rects(this.h, &_out, &_out_len)
	ret := make([]QRect, int(_out_len))
	_outCast := (*[0xffff]*C.QRect)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQRect(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegion) SetRects(rect *QRect, num int) {
	C.QRegion_SetRects(this.h, rect.cPointer(), (C.int)(num))
}

func (this *QRegion) RectCount() int {
	ret := C.QRegion_RectCount(this.h)
	return (int)(ret)
}

func (this *QRegion) OperatorBitwiseOr(r *QRegion) *QRegion {
	ret := C.QRegion_OperatorBitwiseOr(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) OperatorPlus(r *QRegion) *QRegion {
	ret := C.QRegion_OperatorPlus(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) OperatorPlusWithQRect(r *QRect) *QRegion {
	ret := C.QRegion_OperatorPlusWithQRect(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) OperatorBitwiseAnd(r *QRegion) *QRegion {
	ret := C.QRegion_OperatorBitwiseAnd(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) OperatorBitwiseAndWithQRect(r *QRect) *QRegion {
	ret := C.QRegion_OperatorBitwiseAndWithQRect(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) OperatorMinus(r *QRegion) *QRegion {
	ret := C.QRegion_OperatorMinus(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) OperatorBitwiseNot(r *QRegion) *QRegion {
	ret := C.QRegion_OperatorBitwiseNot(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegion) OperatorBitwiseOrAssign(r *QRegion) {
	C.QRegion_OperatorBitwiseOrAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorPlusAssign(r *QRegion) *QRegion {
	ret := C.QRegion_OperatorPlusAssign(this.h, r.cPointer())
	return newQRegion_U(unsafe.Pointer(ret))
}

func (this *QRegion) OperatorPlusAssignWithQRect(r *QRect) *QRegion {
	ret := C.QRegion_OperatorPlusAssignWithQRect(this.h, r.cPointer())
	return newQRegion_U(unsafe.Pointer(ret))
}

func (this *QRegion) OperatorBitwiseAndAssign(r *QRegion) {
	C.QRegion_OperatorBitwiseAndAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorBitwiseAndAssignWithQRect(r *QRect) {
	C.QRegion_OperatorBitwiseAndAssignWithQRect(this.h, r.cPointer())
}

func (this *QRegion) OperatorMinusAssign(r *QRegion) *QRegion {
	ret := C.QRegion_OperatorMinusAssign(this.h, r.cPointer())
	return newQRegion_U(unsafe.Pointer(ret))
}

func (this *QRegion) OperatorBitwiseNotAssign(r *QRegion) {
	C.QRegion_OperatorBitwiseNotAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorEqual(r *QRegion) bool {
	ret := C.QRegion_OperatorEqual(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRegion) OperatorNotEqual(r *QRegion) bool {
	ret := C.QRegion_OperatorNotEqual(this.h, r.cPointer())
	return (bool)(ret)
}

func (this *QRegion) Delete() {
	C.QRegion_Delete(this.h)
}
