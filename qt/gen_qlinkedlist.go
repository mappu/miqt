package qt

/*

#include "gen_qlinkedlist.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLinkedListData struct {
	h *C.QLinkedListData
}

func (this *QLinkedListData) cPointer() *C.QLinkedListData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLinkedListData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLinkedListData constructs the type using only CGO pointers.
func newQLinkedListData(h *C.QLinkedListData) *QLinkedListData {
	if h == nil {
		return nil
	}

	return &QLinkedListData{h: h}
}

// UnsafeNewQLinkedListData constructs the type using only unsafe pointers.
func UnsafeNewQLinkedListData(h unsafe.Pointer) *QLinkedListData {
	return newQLinkedListData((*C.QLinkedListData)(h))
}

// NewQLinkedListData constructs a new QLinkedListData object.
func NewQLinkedListData() *QLinkedListData {

	return newQLinkedListData(C.QLinkedListData_new())
}

func (this *QLinkedListData) N() *QLinkedListData {
	return newQLinkedListData(C.QLinkedListData_n(this.h))
}

func (this *QLinkedListData) SetN(n *QLinkedListData) {
	C.QLinkedListData_setN(this.h, n.cPointer())
}

func (this *QLinkedListData) P() *QLinkedListData {
	return newQLinkedListData(C.QLinkedListData_p(this.h))
}

func (this *QLinkedListData) SetP(p *QLinkedListData) {
	C.QLinkedListData_setP(this.h, p.cPointer())
}

func (this *QLinkedListData) Size() int {
	return (int)(C.QLinkedListData_size(this.h))
}

func (this *QLinkedListData) SetSize(size int) {
	C.QLinkedListData_setSize(this.h, (C.int)(size))
}

func (this *QLinkedListData) Sharable() uint {
	return (uint)(C.QLinkedListData_sharable(this.h))
}

func (this *QLinkedListData) SetSharable(sharable uint) {
	C.QLinkedListData_setSharable(this.h, (C.uint)(sharable))
}

// Delete this object from C++ memory.
func (this *QLinkedListData) Delete() {
	C.QLinkedListData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLinkedListData) GoGC() {
	runtime.SetFinalizer(this, func(this *QLinkedListData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
