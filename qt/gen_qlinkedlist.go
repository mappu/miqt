package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qlinkedlist.h"
#include <stdlib.h>

*/
import "C"

import (
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

func (this *QLinkedListData) Delete() {
	C.QLinkedListData_Delete(this.h)
}
