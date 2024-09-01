package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmap.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QMapNodeBase struct {
	h *C.QMapNodeBase
}

func (this *QMapNodeBase) cPointer() *C.QMapNodeBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMapNodeBase(h *C.QMapNodeBase) *QMapNodeBase {
	if h == nil {
		return nil
	}
	return &QMapNodeBase{h: h}
}

func newQMapNodeBase_U(h unsafe.Pointer) *QMapNodeBase {
	return newQMapNodeBase((*C.QMapNodeBase)(h))
}

// NewQMapNodeBase constructs a new QMapNodeBase object.
func NewQMapNodeBase(param1 *QMapNodeBase) *QMapNodeBase {
	ret := C.QMapNodeBase_new(param1.cPointer())
	return newQMapNodeBase(ret)
}

func (this *QMapNodeBase) NextNode() *QMapNodeBase {
	ret := C.QMapNodeBase_NextNode(this.h)
	return newQMapNodeBase_U(unsafe.Pointer(ret))
}

func (this *QMapNodeBase) NextNode2() *QMapNodeBase {
	ret := C.QMapNodeBase_NextNode2(this.h)
	return newQMapNodeBase_U(unsafe.Pointer(ret))
}

func (this *QMapNodeBase) PreviousNode() *QMapNodeBase {
	ret := C.QMapNodeBase_PreviousNode(this.h)
	return newQMapNodeBase_U(unsafe.Pointer(ret))
}

func (this *QMapNodeBase) PreviousNode2() *QMapNodeBase {
	ret := C.QMapNodeBase_PreviousNode2(this.h)
	return newQMapNodeBase_U(unsafe.Pointer(ret))
}

func (this *QMapNodeBase) Color() uintptr {
	ret := C.QMapNodeBase_Color(this.h)
	return (uintptr)(ret)
}

func (this *QMapNodeBase) SetColor(c uintptr) {
	C.QMapNodeBase_SetColor(this.h, (C.uintptr_t)(c))
}

func (this *QMapNodeBase) Parent() *QMapNodeBase {
	ret := C.QMapNodeBase_Parent(this.h)
	return newQMapNodeBase_U(unsafe.Pointer(ret))
}

func (this *QMapNodeBase) SetParent(pp *QMapNodeBase) {
	C.QMapNodeBase_SetParent(this.h, pp.cPointer())
}

func (this *QMapNodeBase) OperatorAssign(param1 *QMapNodeBase) {
	C.QMapNodeBase_OperatorAssign(this.h, param1.cPointer())
}

func (this *QMapNodeBase) Delete() {
	C.QMapNodeBase_Delete(this.h)
}

type QMapDataBase struct {
	h *C.QMapDataBase
}

func (this *QMapDataBase) cPointer() *C.QMapDataBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMapDataBase(h *C.QMapDataBase) *QMapDataBase {
	if h == nil {
		return nil
	}
	return &QMapDataBase{h: h}
}

func newQMapDataBase_U(h unsafe.Pointer) *QMapDataBase {
	return newQMapDataBase((*C.QMapDataBase)(h))
}

func (this *QMapDataBase) RotateLeft(x *QMapNodeBase) {
	C.QMapDataBase_RotateLeft(this.h, x.cPointer())
}

func (this *QMapDataBase) RotateRight(x *QMapNodeBase) {
	C.QMapDataBase_RotateRight(this.h, x.cPointer())
}

func (this *QMapDataBase) Rebalance(x *QMapNodeBase) {
	C.QMapDataBase_Rebalance(this.h, x.cPointer())
}

func (this *QMapDataBase) FreeNodeAndRebalance(z *QMapNodeBase) {
	C.QMapDataBase_FreeNodeAndRebalance(this.h, z.cPointer())
}

func (this *QMapDataBase) RecalcMostLeftNode() {
	C.QMapDataBase_RecalcMostLeftNode(this.h)
}

func (this *QMapDataBase) CreateNode(size int, alignment int, parent *QMapNodeBase, left bool) *QMapNodeBase {
	ret := C.QMapDataBase_CreateNode(this.h, (C.int)(size), (C.int)(alignment), parent.cPointer(), (C.bool)(left))
	return newQMapNodeBase_U(unsafe.Pointer(ret))
}

func (this *QMapDataBase) FreeTree(root *QMapNodeBase, alignment int) {
	C.QMapDataBase_FreeTree(this.h, root.cPointer(), (C.int)(alignment))
}

func QMapDataBase_CreateData() *QMapDataBase {
	ret := C.QMapDataBase_CreateData()
	return newQMapDataBase_U(unsafe.Pointer(ret))
}

func QMapDataBase_FreeData(d *QMapDataBase) {
	C.QMapDataBase_FreeData(d.cPointer())
}

func (this *QMapDataBase) Delete() {
	C.QMapDataBase_Delete(this.h)
}
