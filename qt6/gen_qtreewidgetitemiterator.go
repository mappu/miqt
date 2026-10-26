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
	h  *C.QTreeWidgetItemIterator
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTreeWidgetItemIterator) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQTreeWidgetItemIterator constructs the type using only CGO pointers.
func newQTreeWidgetItemIterator(h *C.QTreeWidgetItemIterator) *QTreeWidgetItemIterator {
	if h == nil {
		return nil
	}

	return &QTreeWidgetItemIterator{h: h}
}

// UnsafeNewQTreeWidgetItemIterator constructs the type using only unsafe pointers.
func UnsafeNewQTreeWidgetItemIterator(h unsafe.Pointer) *QTreeWidgetItemIterator {
	return newQTreeWidgetItemIterator((*C.QTreeWidgetItemIterator)(h))
}

// NewQTreeWidgetItemIterator constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator(it *QTreeWidgetItemIterator) *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(it)

	return newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_new(it.cPointer()))
}

// NewQTreeWidgetItemIterator2 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator2(widget *QTreeWidget) *QTreeWidgetItemIterator {

	return newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_new2(widget.cPointer()))
}

// NewQTreeWidgetItemIterator3 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator3(item *QTreeWidgetItem) *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(item)

	return newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_new3(item.cPointer()))
}

// NewQTreeWidgetItemIterator4 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator4(widget *QTreeWidget, flags QTreeWidgetItemIterator__IteratorFlag) *QTreeWidgetItemIterator {

	return newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_new4(widget.cPointer(), (C.int)(flags)))
}

// NewQTreeWidgetItemIterator5 constructs a new QTreeWidgetItemIterator object.
func NewQTreeWidgetItemIterator5(item *QTreeWidgetItem, flags QTreeWidgetItemIterator__IteratorFlag) *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(item)

	return newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_new5(item.cPointer(), (C.int)(flags)))
}

func (this *QTreeWidgetItemIterator) OperatorAssign(it *QTreeWidgetItemIterator) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(it)
	C.QTreeWidgetItemIterator_operatorAssign(this.h, it.cPointer())
}

func (this *QTreeWidgetItemIterator) OperatorPlusPlus() *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(this)
	_ret := newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_operatorPlusPlus(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTreeWidgetItemIterator) OperatorPlusPlusWithInt(param1 int) *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(this)
	_goptr := newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItemIterator) OperatorPlusAssign(n int) *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(this)
	_ret := newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_operatorPlusAssign(this.h, (C.int)(n)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTreeWidgetItemIterator) OperatorMinusMinus() *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(this)
	_ret := newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_operatorMinusMinus(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTreeWidgetItemIterator) OperatorMinusMinusWithInt(param1 int) *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(this)
	_goptr := newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItemIterator) OperatorMinusAssign(n int) *QTreeWidgetItemIterator {
	defer runtime.KeepAlive(this)
	_ret := newQTreeWidgetItemIterator(C.QTreeWidgetItemIterator_operatorMinusAssign(this.h, (C.int)(n)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTreeWidgetItemIterator) OperatorMultiply() *QTreeWidgetItem {
	defer runtime.KeepAlive(this)
	return newQTreeWidgetItem(C.QTreeWidgetItemIterator_operatorMultiply(this.h))
}

// Delete this object from C++ memory.
func (this *QTreeWidgetItemIterator) Delete() {
	C.QTreeWidgetItemIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTreeWidgetItemIterator) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTreeWidgetItemIterator_delete((*C.QTreeWidgetItemIterator)(gc[0]))
	})
	this.miqtSetGC(gc)
}
