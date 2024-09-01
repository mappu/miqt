package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtreewidgetitemiterator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTreeWidgetItemIterator struct {
	h *C.QTreeWidgetItemIterator
}

func (this *QTreeWidgetItemIterator) cPointer() *C.QTreeWidgetItemIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTreeWidgetItemIterator(h *C.QTreeWidgetItemIterator) *QTreeWidgetItemIterator {
	if h == nil {
		return nil
	}
	return &QTreeWidgetItemIterator{h: h}
}

func newQTreeWidgetItemIterator_U(h unsafe.Pointer) *QTreeWidgetItemIterator {
	return newQTreeWidgetItemIterator((*C.QTreeWidgetItemIterator)(h))
}

// NewQTreeWidgetItemIterator constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator(it *QTreeWidgetItemIterator) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_new(it.cPointer())
	return newQTreeWidgetItemIterator(ret)
}

// NewQTreeWidgetItemIterator2 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator2(widget *QTreeWidget) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_new2(widget.cPointer())
	return newQTreeWidgetItemIterator(ret)
}

// NewQTreeWidgetItemIterator3 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator3(item *QTreeWidgetItem) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_new3(item.cPointer())
	return newQTreeWidgetItemIterator(ret)
}

// NewQTreeWidgetItemIterator4 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator4(widget *QTreeWidget, flags int) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_new4(widget.cPointer(), (C.int)(flags))
	return newQTreeWidgetItemIterator(ret)
}

// NewQTreeWidgetItemIterator5 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator5(item *QTreeWidgetItem, flags int) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_new5(item.cPointer(), (C.int)(flags))
	return newQTreeWidgetItemIterator(ret)
}

func (this *QTreeWidgetItemIterator) OperatorAssign(it *QTreeWidgetItemIterator) {
	C.QTreeWidgetItemIterator_OperatorAssign(this.h, it.cPointer())
}

func (this *QTreeWidgetItemIterator) OperatorPlusPlus() *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_OperatorPlusPlus(this.h)
	return newQTreeWidgetItemIterator_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItemIterator) OperatorPlusPlusWithInt(param1 int) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTreeWidgetItemIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTreeWidgetItemIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItemIterator) OperatorPlusAssign(n int) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_OperatorPlusAssign(this.h, (C.int)(n))
	return newQTreeWidgetItemIterator_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItemIterator) OperatorMinusMinus() *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_OperatorMinusMinus(this.h)
	return newQTreeWidgetItemIterator_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItemIterator) OperatorMinusMinusWithInt(param1 int) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTreeWidgetItemIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTreeWidgetItemIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItemIterator) OperatorMinusAssign(n int) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_OperatorMinusAssign(this.h, (C.int)(n))
	return newQTreeWidgetItemIterator_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItemIterator) OperatorMultiply() *QTreeWidgetItem {
	ret := C.QTreeWidgetItemIterator_OperatorMultiply(this.h)
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItemIterator) Delete() {
	C.QTreeWidgetItemIterator_Delete(this.h)
}
