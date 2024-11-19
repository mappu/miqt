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
	h          *C.QtPrivate__ResultItem
	isSubclass bool
}

func (this *QtPrivate__ResultItem) cPointer() *C.QtPrivate__ResultItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__ResultItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQtPrivate__ResultItem constructs the type using only CGO pointers.
func newQtPrivate__ResultItem(h *C.QtPrivate__ResultItem) *QtPrivate__ResultItem {
	if h == nil {
		return nil
	}
	return &QtPrivate__ResultItem{h: h}
}

// UnsafeNewQtPrivate__ResultItem constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__ResultItem(h unsafe.Pointer) *QtPrivate__ResultItem {
	if h == nil {
		return nil
	}

	return &QtPrivate__ResultItem{h: (*C.QtPrivate__ResultItem)(h)}
}

// NewQtPrivate__ResultItem constructs a new QtPrivate::ResultItem object.
func NewQtPrivate__ResultItem(_result unsafe.Pointer, _count int) *QtPrivate__ResultItem {
	var outptr_QtPrivate__ResultItem *C.QtPrivate__ResultItem = nil

	C.QtPrivate__ResultItem_new(_result, (C.int)(_count), &outptr_QtPrivate__ResultItem)
	ret := newQtPrivate__ResultItem(outptr_QtPrivate__ResultItem)
	ret.isSubclass = true
	return ret
}

// NewQtPrivate__ResultItem2 constructs a new QtPrivate::ResultItem object.
func NewQtPrivate__ResultItem2(_result unsafe.Pointer) *QtPrivate__ResultItem {
	var outptr_QtPrivate__ResultItem *C.QtPrivate__ResultItem = nil

	C.QtPrivate__ResultItem_new2(_result, &outptr_QtPrivate__ResultItem)
	ret := newQtPrivate__ResultItem(outptr_QtPrivate__ResultItem)
	ret.isSubclass = true
	return ret
}

// NewQtPrivate__ResultItem3 constructs a new QtPrivate::ResultItem object.
func NewQtPrivate__ResultItem3() *QtPrivate__ResultItem {
	var outptr_QtPrivate__ResultItem *C.QtPrivate__ResultItem = nil

	C.QtPrivate__ResultItem_new3(&outptr_QtPrivate__ResultItem)
	ret := newQtPrivate__ResultItem(outptr_QtPrivate__ResultItem)
	ret.isSubclass = true
	return ret
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
	C.QtPrivate__ResultItem_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QtPrivate__ResultIteratorBase
	isSubclass bool
}

func (this *QtPrivate__ResultIteratorBase) cPointer() *C.QtPrivate__ResultIteratorBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__ResultIteratorBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQtPrivate__ResultIteratorBase constructs the type using only CGO pointers.
func newQtPrivate__ResultIteratorBase(h *C.QtPrivate__ResultIteratorBase) *QtPrivate__ResultIteratorBase {
	if h == nil {
		return nil
	}
	return &QtPrivate__ResultIteratorBase{h: h}
}

// UnsafeNewQtPrivate__ResultIteratorBase constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__ResultIteratorBase(h unsafe.Pointer) *QtPrivate__ResultIteratorBase {
	if h == nil {
		return nil
	}

	return &QtPrivate__ResultIteratorBase{h: (*C.QtPrivate__ResultIteratorBase)(h)}
}

// NewQtPrivate__ResultIteratorBase constructs a new QtPrivate::ResultIteratorBase object.
func NewQtPrivate__ResultIteratorBase() *QtPrivate__ResultIteratorBase {
	var outptr_QtPrivate__ResultIteratorBase *C.QtPrivate__ResultIteratorBase = nil

	C.QtPrivate__ResultIteratorBase_new(&outptr_QtPrivate__ResultIteratorBase)
	ret := newQtPrivate__ResultIteratorBase(outptr_QtPrivate__ResultIteratorBase)
	ret.isSubclass = true
	return ret
}

func (this *QtPrivate__ResultIteratorBase) VectorIndex() int {
	return (int)(C.QtPrivate__ResultIteratorBase_VectorIndex(this.h))
}

func (this *QtPrivate__ResultIteratorBase) ResultIndex() int {
	return (int)(C.QtPrivate__ResultIteratorBase_ResultIndex(this.h))
}

func (this *QtPrivate__ResultIteratorBase) BatchSize() int {
	return (int)(C.QtPrivate__ResultIteratorBase_BatchSize(this.h))
}

func (this *QtPrivate__ResultIteratorBase) BatchedAdvance() {
	C.QtPrivate__ResultIteratorBase_BatchedAdvance(this.h)
}

func (this *QtPrivate__ResultIteratorBase) IsVector() bool {
	return (bool)(C.QtPrivate__ResultIteratorBase_IsVector(this.h))
}

func (this *QtPrivate__ResultIteratorBase) CanIncrementVectorIndex() bool {
	return (bool)(C.QtPrivate__ResultIteratorBase_CanIncrementVectorIndex(this.h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__ResultIteratorBase) Delete() {
	C.QtPrivate__ResultIteratorBase_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QtPrivate__ResultStoreBase
	isSubclass bool
}

func (this *QtPrivate__ResultStoreBase) cPointer() *C.QtPrivate__ResultStoreBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__ResultStoreBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQtPrivate__ResultStoreBase constructs the type using only CGO pointers.
func newQtPrivate__ResultStoreBase(h *C.QtPrivate__ResultStoreBase) *QtPrivate__ResultStoreBase {
	if h == nil {
		return nil
	}
	return &QtPrivate__ResultStoreBase{h: h}
}

// UnsafeNewQtPrivate__ResultStoreBase constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__ResultStoreBase(h unsafe.Pointer) *QtPrivate__ResultStoreBase {
	if h == nil {
		return nil
	}

	return &QtPrivate__ResultStoreBase{h: (*C.QtPrivate__ResultStoreBase)(h)}
}

// NewQtPrivate__ResultStoreBase constructs a new QtPrivate::ResultStoreBase object.
func NewQtPrivate__ResultStoreBase() *QtPrivate__ResultStoreBase {
	var outptr_QtPrivate__ResultStoreBase *C.QtPrivate__ResultStoreBase = nil

	C.QtPrivate__ResultStoreBase_new(&outptr_QtPrivate__ResultStoreBase)
	ret := newQtPrivate__ResultStoreBase(outptr_QtPrivate__ResultStoreBase)
	ret.isSubclass = true
	return ret
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

func (this *QtPrivate__ResultStoreBase) HasNextResult() bool {
	return (bool)(C.QtPrivate__ResultStoreBase_HasNextResult(this.h))
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

// Delete this object from C++ memory.
func (this *QtPrivate__ResultStoreBase) Delete() {
	C.QtPrivate__ResultStoreBase_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__ResultStoreBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__ResultStoreBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
