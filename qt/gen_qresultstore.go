package qt

/*

#include "gen_qresultstore.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__ResultItem struct {
	h *C.QtPrivate__ResultItem
}

func (this *QtPrivate__ResultItem) cPointer() *C.QtPrivate__ResultItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__ResultItem(h *C.QtPrivate__ResultItem) *QtPrivate__ResultItem {
	if h == nil {
		return nil
	}
	return &QtPrivate__ResultItem{h: h}
}

func newQtPrivate__ResultItem_U(h unsafe.Pointer) *QtPrivate__ResultItem {
	return newQtPrivate__ResultItem((*C.QtPrivate__ResultItem)(h))
}

// NewQtPrivate__ResultItem constructs a new QtPrivate::ResultItem object.
func NewQtPrivate__ResultItem(_result unsafe.Pointer, _count int) *QtPrivate__ResultItem {
	ret := C.QtPrivate__ResultItem_new(_result, (C.int)(_count))
	return newQtPrivate__ResultItem(ret)
}

// NewQtPrivate__ResultItem2 constructs a new QtPrivate::ResultItem object.
func NewQtPrivate__ResultItem2(_result unsafe.Pointer) *QtPrivate__ResultItem {
	ret := C.QtPrivate__ResultItem_new2(_result)
	return newQtPrivate__ResultItem(ret)
}

// NewQtPrivate__ResultItem3 constructs a new QtPrivate::ResultItem object.
func NewQtPrivate__ResultItem3() *QtPrivate__ResultItem {
	ret := C.QtPrivate__ResultItem_new3()
	return newQtPrivate__ResultItem(ret)
}

func (this *QtPrivate__ResultItem) IsValid() bool {
	return (bool)(C.QtPrivate__ResultItem_IsValid(this.h))
}

func (this *QtPrivate__ResultItem) IsVector() bool {
	return (bool)(C.QtPrivate__ResultItem_IsVector(this.h))
}

func (this *QtPrivate__ResultItem) Count() int {
	return (int)(C.QtPrivate__ResultItem_Count(this.h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__ResultItem) Delete() {
	C.QtPrivate__ResultItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__ResultItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__ResultItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__ResultIteratorBase struct {
	h *C.QtPrivate__ResultIteratorBase
}

func (this *QtPrivate__ResultIteratorBase) cPointer() *C.QtPrivate__ResultIteratorBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__ResultIteratorBase(h *C.QtPrivate__ResultIteratorBase) *QtPrivate__ResultIteratorBase {
	if h == nil {
		return nil
	}
	return &QtPrivate__ResultIteratorBase{h: h}
}

func newQtPrivate__ResultIteratorBase_U(h unsafe.Pointer) *QtPrivate__ResultIteratorBase {
	return newQtPrivate__ResultIteratorBase((*C.QtPrivate__ResultIteratorBase)(h))
}

// NewQtPrivate__ResultIteratorBase constructs a new QtPrivate::ResultIteratorBase object.
func NewQtPrivate__ResultIteratorBase() *QtPrivate__ResultIteratorBase {
	ret := C.QtPrivate__ResultIteratorBase_new()
	return newQtPrivate__ResultIteratorBase(ret)
}

func (this *QtPrivate__ResultIteratorBase) VectorIndex() int {
	return (int)(C.QtPrivate__ResultIteratorBase_VectorIndex(this.h))
}

func (this *QtPrivate__ResultIteratorBase) ResultIndex() int {
	return (int)(C.QtPrivate__ResultIteratorBase_ResultIndex(this.h))
}

func (this *QtPrivate__ResultIteratorBase) OperatorPlusPlus() *QtPrivate__ResultIteratorBase {
	_ret := C.QtPrivate__ResultIteratorBase_OperatorPlusPlus(this.h)
	_goptr := newQtPrivate__ResultIteratorBase(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtPrivate__ResultIteratorBase) BatchSize() int {
	return (int)(C.QtPrivate__ResultIteratorBase_BatchSize(this.h))
}

func (this *QtPrivate__ResultIteratorBase) BatchedAdvance() {
	C.QtPrivate__ResultIteratorBase_BatchedAdvance(this.h)
}

func (this *QtPrivate__ResultIteratorBase) OperatorEqual(other *QtPrivate__ResultIteratorBase) bool {
	return (bool)(C.QtPrivate__ResultIteratorBase_OperatorEqual(this.h, other.cPointer()))
}

func (this *QtPrivate__ResultIteratorBase) OperatorNotEqual(other *QtPrivate__ResultIteratorBase) bool {
	return (bool)(C.QtPrivate__ResultIteratorBase_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QtPrivate__ResultIteratorBase) IsVector() bool {
	return (bool)(C.QtPrivate__ResultIteratorBase_IsVector(this.h))
}

func (this *QtPrivate__ResultIteratorBase) CanIncrementVectorIndex() bool {
	return (bool)(C.QtPrivate__ResultIteratorBase_CanIncrementVectorIndex(this.h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__ResultIteratorBase) Delete() {
	C.QtPrivate__ResultIteratorBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__ResultIteratorBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__ResultIteratorBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__ResultStoreBase struct {
	h *C.QtPrivate__ResultStoreBase
}

func (this *QtPrivate__ResultStoreBase) cPointer() *C.QtPrivate__ResultStoreBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__ResultStoreBase(h *C.QtPrivate__ResultStoreBase) *QtPrivate__ResultStoreBase {
	if h == nil {
		return nil
	}
	return &QtPrivate__ResultStoreBase{h: h}
}

func newQtPrivate__ResultStoreBase_U(h unsafe.Pointer) *QtPrivate__ResultStoreBase {
	return newQtPrivate__ResultStoreBase((*C.QtPrivate__ResultStoreBase)(h))
}

// NewQtPrivate__ResultStoreBase constructs a new QtPrivate::ResultStoreBase object.
func NewQtPrivate__ResultStoreBase() *QtPrivate__ResultStoreBase {
	ret := C.QtPrivate__ResultStoreBase_new()
	return newQtPrivate__ResultStoreBase(ret)
}

// NewQtPrivate__ResultStoreBase2 constructs a new QtPrivate::ResultStoreBase object.
func NewQtPrivate__ResultStoreBase2(param1 *QtPrivate__ResultStoreBase) *QtPrivate__ResultStoreBase {
	ret := C.QtPrivate__ResultStoreBase_new2(param1.cPointer())
	return newQtPrivate__ResultStoreBase(ret)
}

func (this *QtPrivate__ResultStoreBase) SetFilterMode(enable bool) {
	C.QtPrivate__ResultStoreBase_SetFilterMode(this.h, (C.bool)(enable))
}

func (this *QtPrivate__ResultStoreBase) FilterMode() bool {
	return (bool)(C.QtPrivate__ResultStoreBase_FilterMode(this.h))
}

func (this *QtPrivate__ResultStoreBase) AddResult(index int, result unsafe.Pointer) int {
	return (int)(C.QtPrivate__ResultStoreBase_AddResult(this.h, (C.int)(index), result))
}

func (this *QtPrivate__ResultStoreBase) AddResults(index int, results unsafe.Pointer, vectorSize int, logicalCount int) int {
	return (int)(C.QtPrivate__ResultStoreBase_AddResults(this.h, (C.int)(index), results, (C.int)(vectorSize), (C.int)(logicalCount)))
}

func (this *QtPrivate__ResultStoreBase) Begin() *QtPrivate__ResultIteratorBase {
	_ret := C.QtPrivate__ResultStoreBase_Begin(this.h)
	_goptr := newQtPrivate__ResultIteratorBase(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtPrivate__ResultStoreBase) End() *QtPrivate__ResultIteratorBase {
	_ret := C.QtPrivate__ResultStoreBase_End(this.h)
	_goptr := newQtPrivate__ResultIteratorBase(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtPrivate__ResultStoreBase) HasNextResult() bool {
	return (bool)(C.QtPrivate__ResultStoreBase_HasNextResult(this.h))
}

func (this *QtPrivate__ResultStoreBase) ResultAt(index int) *QtPrivate__ResultIteratorBase {
	_ret := C.QtPrivate__ResultStoreBase_ResultAt(this.h, (C.int)(index))
	_goptr := newQtPrivate__ResultIteratorBase(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtPrivate__ResultStoreBase) Contains(index int) bool {
	return (bool)(C.QtPrivate__ResultStoreBase_Contains(this.h, (C.int)(index)))
}

func (this *QtPrivate__ResultStoreBase) Count() int {
	return (int)(C.QtPrivate__ResultStoreBase_Count(this.h))
}

func (this *QtPrivate__ResultStoreBase) AddCanceledResult(index int) int {
	return (int)(C.QtPrivate__ResultStoreBase_AddCanceledResult(this.h, (C.int)(index)))
}

func (this *QtPrivate__ResultStoreBase) OperatorAssign(param1 *QtPrivate__ResultStoreBase) {
	C.QtPrivate__ResultStoreBase_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QtPrivate__ResultStoreBase) Delete() {
	C.QtPrivate__ResultStoreBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__ResultStoreBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__ResultStoreBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
