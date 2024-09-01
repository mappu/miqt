package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qhash.h"
#include <stdlib.h>

*/
import "C"

import (
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

func (this *QHashData) WillGrow() bool {
	ret := C.QHashData_WillGrow(this.h)
	return (bool)(ret)
}

func (this *QHashData) HasShrunk() {
	C.QHashData_HasShrunk(this.h)
}

func (this *QHashData) Rehash(hint int) {
	C.QHashData_Rehash(this.h, (C.int)(hint))
}

func (this *QHashData) FirstNode() *QHashData__Node {
	ret := C.QHashData_FirstNode(this.h)
	return newQHashData__Node_U(unsafe.Pointer(ret))
}

func QHashData_NextNode(node *QHashData__Node) *QHashData__Node {
	ret := C.QHashData_NextNode(node.cPointer())
	return newQHashData__Node_U(unsafe.Pointer(ret))
}

func QHashData_PreviousNode(node *QHashData__Node) *QHashData__Node {
	ret := C.QHashData_PreviousNode(node.cPointer())
	return newQHashData__Node_U(unsafe.Pointer(ret))
}

func (this *QHashData) Delete() {
	C.QHashData_Delete(this.h)
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

func (this *QHashDummyValue) Delete() {
	C.QHashDummyValue_Delete(this.h)
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

func (this *QHashData__Node) Delete() {
	C.QHashData__Node_Delete(this.h)
}
