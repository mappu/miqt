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

func newQLinkedListData(h *C.QLinkedListData) *QLinkedListData {
	if h == nil {
		return nil
	}
	return &QLinkedListData{h: h}
}

func newQLinkedListData_U(h unsafe.Pointer) *QLinkedListData {
	return newQLinkedListData((*C.QLinkedListData)(h))
}

// NewQLinkedListData constructs a new QLinkedListData object.
func NewQLinkedListData() *QLinkedListData {
	ret := C.QLinkedListData_new()
	return newQLinkedListData(ret)
}

// Delete this object from C++ memory.
func (this *QLinkedListData) Delete() {
	C.QLinkedListData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLinkedListData) GoGC() {
	runtime.SetFinalizer(this, func(this *QLinkedListData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
