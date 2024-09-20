package qt

/*

#include "gen_qhash.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QHashData struct {
	h *C.QHashData
}

func (this *QHashData) cPointer() *C.QHashData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHashData(h *C.QHashData) *QHashData {
	if h == nil {
		return nil
	}
	return &QHashData{h: h}
}

func newQHashData_U(h unsafe.Pointer) *QHashData {
	return newQHashData((*C.QHashData)(h))
}

func (this *QHashData) AllocateNode(nodeAlign int) unsafe.Pointer {
	return C.QHashData_AllocateNode(this.h, (C.int)(nodeAlign))
}

func (this *QHashData) FreeNode(node unsafe.Pointer) {
	C.QHashData_FreeNode(this.h, node)
}

func (this *QHashData) WillGrow() bool {
	return (bool)(C.QHashData_WillGrow(this.h))
}

func (this *QHashData) HasShrunk() {
	C.QHashData_HasShrunk(this.h)
}

func (this *QHashData) Rehash(hint int) {
	C.QHashData_Rehash(this.h, (C.int)(hint))
}

func (this *QHashData) FirstNode() *QHashData__Node {
	return newQHashData__Node_U(unsafe.Pointer(C.QHashData_FirstNode(this.h)))
}

func QHashData_NextNode(node *QHashData__Node) *QHashData__Node {
	return newQHashData__Node_U(unsafe.Pointer(C.QHashData_NextNode(node.cPointer())))
}

func QHashData_PreviousNode(node *QHashData__Node) *QHashData__Node {
	return newQHashData__Node_U(unsafe.Pointer(C.QHashData_PreviousNode(node.cPointer())))
}

// Delete this object from C++ memory.
func (this *QHashData) Delete() {
	C.QHashData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHashData) GoGC() {
	runtime.SetFinalizer(this, func(this *QHashData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHashDummyValue struct {
	h *C.QHashDummyValue
}

func (this *QHashDummyValue) cPointer() *C.QHashDummyValue {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHashDummyValue(h *C.QHashDummyValue) *QHashDummyValue {
	if h == nil {
		return nil
	}
	return &QHashDummyValue{h: h}
}

func newQHashDummyValue_U(h unsafe.Pointer) *QHashDummyValue {
	return newQHashDummyValue((*C.QHashDummyValue)(h))
}

// NewQHashDummyValue constructs a new QHashDummyValue object.
func NewQHashDummyValue() *QHashDummyValue {
	ret := C.QHashDummyValue_new()
	return newQHashDummyValue(ret)
}

// NewQHashDummyValue2 constructs a new QHashDummyValue object.
func NewQHashDummyValue2(param1 *QHashDummyValue) *QHashDummyValue {
	ret := C.QHashDummyValue_new2(param1.cPointer())
	return newQHashDummyValue(ret)
}

// Delete this object from C++ memory.
func (this *QHashDummyValue) Delete() {
	C.QHashDummyValue_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHashDummyValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QHashDummyValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHashData__Node struct {
	h *C.QHashData__Node
}

func (this *QHashData__Node) cPointer() *C.QHashData__Node {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHashData__Node(h *C.QHashData__Node) *QHashData__Node {
	if h == nil {
		return nil
	}
	return &QHashData__Node{h: h}
}

func newQHashData__Node_U(h unsafe.Pointer) *QHashData__Node {
	return newQHashData__Node((*C.QHashData__Node)(h))
}

// Delete this object from C++ memory.
func (this *QHashData__Node) Delete() {
	C.QHashData__Node_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHashData__Node) GoGC() {
	runtime.SetFinalizer(this, func(this *QHashData__Node) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
