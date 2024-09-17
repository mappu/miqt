package qt

/*

#include "gen_qmap.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMapNodeBase__Color int

const (
	QMapNodeBase__Color__Red   QMapNodeBase__Color = 0
	QMapNodeBase__Color__Black QMapNodeBase__Color = 1
)

type QMapNodeBase__ int

const (
	QMapNodeBase____Mask QMapNodeBase__ = 3
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
	return newQMapNodeBase_U(unsafe.Pointer(C.QMapNodeBase_NextNode(this.h)))
}

func (this *QMapNodeBase) NextNode2() *QMapNodeBase {
	return newQMapNodeBase_U(unsafe.Pointer(C.QMapNodeBase_NextNode2(this.h)))
}

func (this *QMapNodeBase) PreviousNode() *QMapNodeBase {
	return newQMapNodeBase_U(unsafe.Pointer(C.QMapNodeBase_PreviousNode(this.h)))
}

func (this *QMapNodeBase) PreviousNode2() *QMapNodeBase {
	return newQMapNodeBase_U(unsafe.Pointer(C.QMapNodeBase_PreviousNode2(this.h)))
}

func (this *QMapNodeBase) Color() QMapNodeBase__Color {
	return (QMapNodeBase__Color)(C.QMapNodeBase_Color(this.h))
}

func (this *QMapNodeBase) SetColor(c QMapNodeBase__Color) {
	C.QMapNodeBase_SetColor(this.h, (C.uintptr_t)(c))
}

func (this *QMapNodeBase) Parent() *QMapNodeBase {
	return newQMapNodeBase_U(unsafe.Pointer(C.QMapNodeBase_Parent(this.h)))
}

func (this *QMapNodeBase) SetParent(pp *QMapNodeBase) {
	C.QMapNodeBase_SetParent(this.h, pp.cPointer())
}

func (this *QMapNodeBase) OperatorAssign(param1 *QMapNodeBase) {
	C.QMapNodeBase_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMapNodeBase) Delete() {
	C.QMapNodeBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMapNodeBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QMapNodeBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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
	return newQMapNodeBase_U(unsafe.Pointer(C.QMapDataBase_CreateNode(this.h, (C.int)(size), (C.int)(alignment), parent.cPointer(), (C.bool)(left))))
}

func (this *QMapDataBase) FreeTree(root *QMapNodeBase, alignment int) {
	C.QMapDataBase_FreeTree(this.h, root.cPointer(), (C.int)(alignment))
}

func QMapDataBase_CreateData() *QMapDataBase {
	return newQMapDataBase_U(unsafe.Pointer(C.QMapDataBase_CreateData()))
}

func QMapDataBase_FreeData(d *QMapDataBase) {
	C.QMapDataBase_FreeData(d.cPointer())
}

// Delete this object from C++ memory.
func (this *QMapDataBase) Delete() {
	C.QMapDataBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMapDataBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QMapDataBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
