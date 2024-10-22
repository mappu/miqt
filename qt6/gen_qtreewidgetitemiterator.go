package qt6

/*

#include "gen_qtreewidgetitemiterator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTreeWidgetItemIterator__IteratorFlag int

const (
	QTreeWidgetItemIterator__All           QTreeWidgetItemIterator__IteratorFlag = 0
	QTreeWidgetItemIterator__Hidden        QTreeWidgetItemIterator__IteratorFlag = 1
	QTreeWidgetItemIterator__NotHidden     QTreeWidgetItemIterator__IteratorFlag = 2
	QTreeWidgetItemIterator__Selected      QTreeWidgetItemIterator__IteratorFlag = 4
	QTreeWidgetItemIterator__Unselected    QTreeWidgetItemIterator__IteratorFlag = 8
	QTreeWidgetItemIterator__Selectable    QTreeWidgetItemIterator__IteratorFlag = 16
	QTreeWidgetItemIterator__NotSelectable QTreeWidgetItemIterator__IteratorFlag = 32
	QTreeWidgetItemIterator__DragEnabled   QTreeWidgetItemIterator__IteratorFlag = 64
	QTreeWidgetItemIterator__DragDisabled  QTreeWidgetItemIterator__IteratorFlag = 128
	QTreeWidgetItemIterator__DropEnabled   QTreeWidgetItemIterator__IteratorFlag = 256
	QTreeWidgetItemIterator__DropDisabled  QTreeWidgetItemIterator__IteratorFlag = 512
	QTreeWidgetItemIterator__HasChildren   QTreeWidgetItemIterator__IteratorFlag = 1024
	QTreeWidgetItemIterator__NoChildren    QTreeWidgetItemIterator__IteratorFlag = 2048
	QTreeWidgetItemIterator__Checked       QTreeWidgetItemIterator__IteratorFlag = 4096
	QTreeWidgetItemIterator__NotChecked    QTreeWidgetItemIterator__IteratorFlag = 8192
	QTreeWidgetItemIterator__Enabled       QTreeWidgetItemIterator__IteratorFlag = 16384
	QTreeWidgetItemIterator__Disabled      QTreeWidgetItemIterator__IteratorFlag = 32768
	QTreeWidgetItemIterator__Editable      QTreeWidgetItemIterator__IteratorFlag = 65536
	QTreeWidgetItemIterator__NotEditable   QTreeWidgetItemIterator__IteratorFlag = 131072
	QTreeWidgetItemIterator__UserFlag      QTreeWidgetItemIterator__IteratorFlag = 16777216
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

func (this *QTreeWidgetItemIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTreeWidgetItemIterator(h *C.QTreeWidgetItemIterator) *QTreeWidgetItemIterator {
	if h == nil {
		return nil
	}
	return &QTreeWidgetItemIterator{h: h}
}

func UnsafeNewQTreeWidgetItemIterator(h unsafe.Pointer) *QTreeWidgetItemIterator {
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
func NewQTreeWidgetItemIterator4(widget *QTreeWidget, flags QTreeWidgetItemIterator__IteratorFlag) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_new4(widget.cPointer(), (C.int)(flags))
	return newQTreeWidgetItemIterator(ret)
}

// NewQTreeWidgetItemIterator5 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator5(item *QTreeWidgetItem, flags QTreeWidgetItemIterator__IteratorFlag) *QTreeWidgetItemIterator {
	ret := C.QTreeWidgetItemIterator_new5(item.cPointer(), (C.int)(flags))
	return newQTreeWidgetItemIterator(ret)
}

func (this *QTreeWidgetItemIterator) OperatorAssign(it *QTreeWidgetItemIterator) {
	C.QTreeWidgetItemIterator_OperatorAssign(this.h, it.cPointer())
}

func (this *QTreeWidgetItemIterator) OperatorPlusPlus() *QTreeWidgetItemIterator {
	return UnsafeNewQTreeWidgetItemIterator(unsafe.Pointer(C.QTreeWidgetItemIterator_OperatorPlusPlus(this.h)))
}

func (this *QTreeWidgetItemIterator) OperatorPlusPlusWithInt(param1 int) *QTreeWidgetItemIterator {
	_ret := C.QTreeWidgetItemIterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQTreeWidgetItemIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItemIterator) OperatorPlusAssign(n int) *QTreeWidgetItemIterator {
	return UnsafeNewQTreeWidgetItemIterator(unsafe.Pointer(C.QTreeWidgetItemIterator_OperatorPlusAssign(this.h, (C.int)(n))))
}

func (this *QTreeWidgetItemIterator) OperatorMinusMinus() *QTreeWidgetItemIterator {
	return UnsafeNewQTreeWidgetItemIterator(unsafe.Pointer(C.QTreeWidgetItemIterator_OperatorMinusMinus(this.h)))
}

func (this *QTreeWidgetItemIterator) OperatorMinusMinusWithInt(param1 int) *QTreeWidgetItemIterator {
	_ret := C.QTreeWidgetItemIterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQTreeWidgetItemIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItemIterator) OperatorMinusAssign(n int) *QTreeWidgetItemIterator {
	return UnsafeNewQTreeWidgetItemIterator(unsafe.Pointer(C.QTreeWidgetItemIterator_OperatorMinusAssign(this.h, (C.int)(n))))
}

func (this *QTreeWidgetItemIterator) OperatorMultiply() *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidgetItemIterator_OperatorMultiply(this.h)))
}

// Delete this object from C++ memory.
func (this *QTreeWidgetItemIterator) Delete() {
	C.QTreeWidgetItemIterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeWidgetItemIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeWidgetItemIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
