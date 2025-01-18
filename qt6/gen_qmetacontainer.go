package qt6

/*

#include "gen_qmetacontainer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtMetaContainerPrivate__IteratorCapability byte

const (
	QtMetaContainerPrivate__InputCapability         QtMetaContainerPrivate__IteratorCapability = 1
	QtMetaContainerPrivate__ForwardCapability       QtMetaContainerPrivate__IteratorCapability = 2
	QtMetaContainerPrivate__BiDirectionalCapability QtMetaContainerPrivate__IteratorCapability = 4
	QtMetaContainerPrivate__RandomAccessCapability  QtMetaContainerPrivate__IteratorCapability = 8
)

type QtMetaContainerPrivate__AddRemoveCapability byte

const (
	QtMetaContainerPrivate__CanAddAtBegin    QtMetaContainerPrivate__AddRemoveCapability = 1
	QtMetaContainerPrivate__CanRemoveAtBegin QtMetaContainerPrivate__AddRemoveCapability = 2
	QtMetaContainerPrivate__CanAddAtEnd      QtMetaContainerPrivate__AddRemoveCapability = 4
	QtMetaContainerPrivate__CanRemoveAtEnd   QtMetaContainerPrivate__AddRemoveCapability = 8
)

type QtMetaContainerPrivate__QMetaContainerInterface__Position byte

const (
	QtMetaContainerPrivate__QMetaContainerInterface__AtBegin     QtMetaContainerPrivate__QMetaContainerInterface__Position = 0
	QtMetaContainerPrivate__QMetaContainerInterface__AtEnd       QtMetaContainerPrivate__QMetaContainerInterface__Position = 1
	QtMetaContainerPrivate__QMetaContainerInterface__Unspecified QtMetaContainerPrivate__QMetaContainerInterface__Position = 2
)

type QMetaContainer struct {
	h *C.QMetaContainer
}

func (this *QMetaContainer) cPointer() *C.QMetaContainer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMetaContainer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaContainer constructs the type using only CGO pointers.
func newQMetaContainer(h *C.QMetaContainer) *QMetaContainer {
	if h == nil {
		return nil
	}

	return &QMetaContainer{h: h}
}

// UnsafeNewQMetaContainer constructs the type using only unsafe pointers.
func UnsafeNewQMetaContainer(h unsafe.Pointer) *QMetaContainer {
	return newQMetaContainer((*C.QMetaContainer)(h))
}

// NewQMetaContainer constructs a new QMetaContainer object.
func NewQMetaContainer() *QMetaContainer {

	return newQMetaContainer(C.QMetaContainer_new())
}

// NewQMetaContainer2 constructs a new QMetaContainer object.
func NewQMetaContainer2(param1 *QMetaContainer) *QMetaContainer {

	return newQMetaContainer(C.QMetaContainer_new2(param1.cPointer()))
}

func (this *QMetaContainer) HasInputIterator() bool {
	return (bool)(C.QMetaContainer_HasInputIterator(this.h))
}

func (this *QMetaContainer) HasForwardIterator() bool {
	return (bool)(C.QMetaContainer_HasForwardIterator(this.h))
}

func (this *QMetaContainer) HasBidirectionalIterator() bool {
	return (bool)(C.QMetaContainer_HasBidirectionalIterator(this.h))
}

func (this *QMetaContainer) HasRandomAccessIterator() bool {
	return (bool)(C.QMetaContainer_HasRandomAccessIterator(this.h))
}

func (this *QMetaContainer) HasSize() bool {
	return (bool)(C.QMetaContainer_HasSize(this.h))
}

func (this *QMetaContainer) Size(container unsafe.Pointer) int64 {
	return (int64)(C.QMetaContainer_Size(this.h, container))
}

func (this *QMetaContainer) CanClear() bool {
	return (bool)(C.QMetaContainer_CanClear(this.h))
}

func (this *QMetaContainer) Clear(container unsafe.Pointer) {
	C.QMetaContainer_Clear(this.h, container)
}

func (this *QMetaContainer) HasIterator() bool {
	return (bool)(C.QMetaContainer_HasIterator(this.h))
}

func (this *QMetaContainer) Begin(container unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaContainer_Begin(this.h, container))
}

func (this *QMetaContainer) End(container unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaContainer_End(this.h, container))
}

func (this *QMetaContainer) DestroyIterator(iterator unsafe.Pointer) {
	C.QMetaContainer_DestroyIterator(this.h, iterator)
}

func (this *QMetaContainer) CompareIterator(i unsafe.Pointer, j unsafe.Pointer) bool {
	return (bool)(C.QMetaContainer_CompareIterator(this.h, i, j))
}

func (this *QMetaContainer) CopyIterator(target unsafe.Pointer, source unsafe.Pointer) {
	C.QMetaContainer_CopyIterator(this.h, target, source)
}

func (this *QMetaContainer) AdvanceIterator(iterator unsafe.Pointer, step int64) {
	C.QMetaContainer_AdvanceIterator(this.h, iterator, (C.ptrdiff_t)(step))
}

func (this *QMetaContainer) DiffIterator(i unsafe.Pointer, j unsafe.Pointer) int64 {
	return (int64)(C.QMetaContainer_DiffIterator(this.h, i, j))
}

func (this *QMetaContainer) HasConstIterator() bool {
	return (bool)(C.QMetaContainer_HasConstIterator(this.h))
}

func (this *QMetaContainer) ConstBegin(container unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaContainer_ConstBegin(this.h, container))
}

func (this *QMetaContainer) ConstEnd(container unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaContainer_ConstEnd(this.h, container))
}

func (this *QMetaContainer) DestroyConstIterator(iterator unsafe.Pointer) {
	C.QMetaContainer_DestroyConstIterator(this.h, iterator)
}

func (this *QMetaContainer) CompareConstIterator(i unsafe.Pointer, j unsafe.Pointer) bool {
	return (bool)(C.QMetaContainer_CompareConstIterator(this.h, i, j))
}

func (this *QMetaContainer) CopyConstIterator(target unsafe.Pointer, source unsafe.Pointer) {
	C.QMetaContainer_CopyConstIterator(this.h, target, source)
}

func (this *QMetaContainer) AdvanceConstIterator(iterator unsafe.Pointer, step int64) {
	C.QMetaContainer_AdvanceConstIterator(this.h, iterator, (C.ptrdiff_t)(step))
}

func (this *QMetaContainer) DiffConstIterator(i unsafe.Pointer, j unsafe.Pointer) int64 {
	return (int64)(C.QMetaContainer_DiffConstIterator(this.h, i, j))
}

// Delete this object from C++ memory.
func (this *QMetaContainer) Delete() {
	C.QMetaContainer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaContainer) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaContainer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMetaSequence struct {
	h *C.QMetaSequence
	*QMetaContainer
}

func (this *QMetaSequence) cPointer() *C.QMetaSequence {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMetaSequence) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaSequence constructs the type using only CGO pointers.
func newQMetaSequence(h *C.QMetaSequence) *QMetaSequence {
	if h == nil {
		return nil
	}
	var outptr_QMetaContainer *C.QMetaContainer = nil
	C.QMetaSequence_virtbase(h, &outptr_QMetaContainer)

	return &QMetaSequence{h: h,
		QMetaContainer: newQMetaContainer(outptr_QMetaContainer)}
}

// UnsafeNewQMetaSequence constructs the type using only unsafe pointers.
func UnsafeNewQMetaSequence(h unsafe.Pointer) *QMetaSequence {
	return newQMetaSequence((*C.QMetaSequence)(h))
}

// NewQMetaSequence constructs a new QMetaSequence object.
func NewQMetaSequence() *QMetaSequence {

	return newQMetaSequence(C.QMetaSequence_new())
}

func (this *QMetaSequence) ValueMetaType() *QMetaType {
	_goptr := newQMetaType(C.QMetaSequence_ValueMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaSequence) IsSortable() bool {
	return (bool)(C.QMetaSequence_IsSortable(this.h))
}

func (this *QMetaSequence) CanAddValueAtBegin() bool {
	return (bool)(C.QMetaSequence_CanAddValueAtBegin(this.h))
}

func (this *QMetaSequence) AddValueAtBegin(container unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_AddValueAtBegin(this.h, container, value)
}

func (this *QMetaSequence) CanAddValueAtEnd() bool {
	return (bool)(C.QMetaSequence_CanAddValueAtEnd(this.h))
}

func (this *QMetaSequence) AddValueAtEnd(container unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_AddValueAtEnd(this.h, container, value)
}

func (this *QMetaSequence) CanRemoveValueAtBegin() bool {
	return (bool)(C.QMetaSequence_CanRemoveValueAtBegin(this.h))
}

func (this *QMetaSequence) RemoveValueAtBegin(container unsafe.Pointer) {
	C.QMetaSequence_RemoveValueAtBegin(this.h, container)
}

func (this *QMetaSequence) CanRemoveValueAtEnd() bool {
	return (bool)(C.QMetaSequence_CanRemoveValueAtEnd(this.h))
}

func (this *QMetaSequence) RemoveValueAtEnd(container unsafe.Pointer) {
	C.QMetaSequence_RemoveValueAtEnd(this.h, container)
}

func (this *QMetaSequence) CanGetValueAtIndex() bool {
	return (bool)(C.QMetaSequence_CanGetValueAtIndex(this.h))
}

func (this *QMetaSequence) ValueAtIndex(container unsafe.Pointer, index int64, result unsafe.Pointer) {
	C.QMetaSequence_ValueAtIndex(this.h, container, (C.ptrdiff_t)(index), result)
}

func (this *QMetaSequence) CanSetValueAtIndex() bool {
	return (bool)(C.QMetaSequence_CanSetValueAtIndex(this.h))
}

func (this *QMetaSequence) SetValueAtIndex(container unsafe.Pointer, index int64, value unsafe.Pointer) {
	C.QMetaSequence_SetValueAtIndex(this.h, container, (C.ptrdiff_t)(index), value)
}

func (this *QMetaSequence) CanAddValue() bool {
	return (bool)(C.QMetaSequence_CanAddValue(this.h))
}

func (this *QMetaSequence) AddValue(container unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_AddValue(this.h, container, value)
}

func (this *QMetaSequence) CanRemoveValue() bool {
	return (bool)(C.QMetaSequence_CanRemoveValue(this.h))
}

func (this *QMetaSequence) RemoveValue(container unsafe.Pointer) {
	C.QMetaSequence_RemoveValue(this.h, container)
}

func (this *QMetaSequence) CanGetValueAtIterator() bool {
	return (bool)(C.QMetaSequence_CanGetValueAtIterator(this.h))
}

func (this *QMetaSequence) ValueAtIterator(iterator unsafe.Pointer, result unsafe.Pointer) {
	C.QMetaSequence_ValueAtIterator(this.h, iterator, result)
}

func (this *QMetaSequence) CanSetValueAtIterator() bool {
	return (bool)(C.QMetaSequence_CanSetValueAtIterator(this.h))
}

func (this *QMetaSequence) SetValueAtIterator(iterator unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_SetValueAtIterator(this.h, iterator, value)
}

func (this *QMetaSequence) CanInsertValueAtIterator() bool {
	return (bool)(C.QMetaSequence_CanInsertValueAtIterator(this.h))
}

func (this *QMetaSequence) InsertValueAtIterator(container unsafe.Pointer, iterator unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_InsertValueAtIterator(this.h, container, iterator, value)
}

func (this *QMetaSequence) CanEraseValueAtIterator() bool {
	return (bool)(C.QMetaSequence_CanEraseValueAtIterator(this.h))
}

func (this *QMetaSequence) EraseValueAtIterator(container unsafe.Pointer, iterator unsafe.Pointer) {
	C.QMetaSequence_EraseValueAtIterator(this.h, container, iterator)
}

func (this *QMetaSequence) CanEraseRangeAtIterator() bool {
	return (bool)(C.QMetaSequence_CanEraseRangeAtIterator(this.h))
}

func (this *QMetaSequence) EraseRangeAtIterator(container unsafe.Pointer, iterator1 unsafe.Pointer, iterator2 unsafe.Pointer) {
	C.QMetaSequence_EraseRangeAtIterator(this.h, container, iterator1, iterator2)
}

func (this *QMetaSequence) CanGetValueAtConstIterator() bool {
	return (bool)(C.QMetaSequence_CanGetValueAtConstIterator(this.h))
}

func (this *QMetaSequence) ValueAtConstIterator(iterator unsafe.Pointer, result unsafe.Pointer) {
	C.QMetaSequence_ValueAtConstIterator(this.h, iterator, result)
}

// Delete this object from C++ memory.
func (this *QMetaSequence) Delete() {
	C.QMetaSequence_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaSequence) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaSequence) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMetaAssociation struct {
	h *C.QMetaAssociation
	*QMetaContainer
}

func (this *QMetaAssociation) cPointer() *C.QMetaAssociation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMetaAssociation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaAssociation constructs the type using only CGO pointers.
func newQMetaAssociation(h *C.QMetaAssociation) *QMetaAssociation {
	if h == nil {
		return nil
	}
	var outptr_QMetaContainer *C.QMetaContainer = nil
	C.QMetaAssociation_virtbase(h, &outptr_QMetaContainer)

	return &QMetaAssociation{h: h,
		QMetaContainer: newQMetaContainer(outptr_QMetaContainer)}
}

// UnsafeNewQMetaAssociation constructs the type using only unsafe pointers.
func UnsafeNewQMetaAssociation(h unsafe.Pointer) *QMetaAssociation {
	return newQMetaAssociation((*C.QMetaAssociation)(h))
}

// NewQMetaAssociation constructs a new QMetaAssociation object.
func NewQMetaAssociation() *QMetaAssociation {

	return newQMetaAssociation(C.QMetaAssociation_new())
}

func (this *QMetaAssociation) KeyMetaType() *QMetaType {
	_goptr := newQMetaType(C.QMetaAssociation_KeyMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaAssociation) MappedMetaType() *QMetaType {
	_goptr := newQMetaType(C.QMetaAssociation_MappedMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaAssociation) CanInsertKey() bool {
	return (bool)(C.QMetaAssociation_CanInsertKey(this.h))
}

func (this *QMetaAssociation) InsertKey(container unsafe.Pointer, key unsafe.Pointer) {
	C.QMetaAssociation_InsertKey(this.h, container, key)
}

func (this *QMetaAssociation) CanRemoveKey() bool {
	return (bool)(C.QMetaAssociation_CanRemoveKey(this.h))
}

func (this *QMetaAssociation) RemoveKey(container unsafe.Pointer, key unsafe.Pointer) {
	C.QMetaAssociation_RemoveKey(this.h, container, key)
}

func (this *QMetaAssociation) CanContainsKey() bool {
	return (bool)(C.QMetaAssociation_CanContainsKey(this.h))
}

func (this *QMetaAssociation) ContainsKey(container unsafe.Pointer, key unsafe.Pointer) bool {
	return (bool)(C.QMetaAssociation_ContainsKey(this.h, container, key))
}

func (this *QMetaAssociation) CanGetMappedAtKey() bool {
	return (bool)(C.QMetaAssociation_CanGetMappedAtKey(this.h))
}

func (this *QMetaAssociation) MappedAtKey(container unsafe.Pointer, key unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_MappedAtKey(this.h, container, key, mapped)
}

func (this *QMetaAssociation) CanSetMappedAtKey() bool {
	return (bool)(C.QMetaAssociation_CanSetMappedAtKey(this.h))
}

func (this *QMetaAssociation) SetMappedAtKey(container unsafe.Pointer, key unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_SetMappedAtKey(this.h, container, key, mapped)
}

func (this *QMetaAssociation) CanGetKeyAtIterator() bool {
	return (bool)(C.QMetaAssociation_CanGetKeyAtIterator(this.h))
}

func (this *QMetaAssociation) KeyAtIterator(iterator unsafe.Pointer, key unsafe.Pointer) {
	C.QMetaAssociation_KeyAtIterator(this.h, iterator, key)
}

func (this *QMetaAssociation) CanGetKeyAtConstIterator() bool {
	return (bool)(C.QMetaAssociation_CanGetKeyAtConstIterator(this.h))
}

func (this *QMetaAssociation) KeyAtConstIterator(iterator unsafe.Pointer, key unsafe.Pointer) {
	C.QMetaAssociation_KeyAtConstIterator(this.h, iterator, key)
}

func (this *QMetaAssociation) CanGetMappedAtIterator() bool {
	return (bool)(C.QMetaAssociation_CanGetMappedAtIterator(this.h))
}

func (this *QMetaAssociation) MappedAtIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_MappedAtIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanGetMappedAtConstIterator() bool {
	return (bool)(C.QMetaAssociation_CanGetMappedAtConstIterator(this.h))
}

func (this *QMetaAssociation) MappedAtConstIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_MappedAtConstIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanSetMappedAtIterator() bool {
	return (bool)(C.QMetaAssociation_CanSetMappedAtIterator(this.h))
}

func (this *QMetaAssociation) SetMappedAtIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_SetMappedAtIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanCreateIteratorAtKey() bool {
	return (bool)(C.QMetaAssociation_CanCreateIteratorAtKey(this.h))
}

func (this *QMetaAssociation) CreateIteratorAtKey(container unsafe.Pointer, key unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaAssociation_CreateIteratorAtKey(this.h, container, key))
}

func (this *QMetaAssociation) CanCreateConstIteratorAtKey() bool {
	return (bool)(C.QMetaAssociation_CanCreateConstIteratorAtKey(this.h))
}

func (this *QMetaAssociation) CreateConstIteratorAtKey(container unsafe.Pointer, key unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaAssociation_CreateConstIteratorAtKey(this.h, container, key))
}

// Delete this object from C++ memory.
func (this *QMetaAssociation) Delete() {
	C.QMetaAssociation_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaAssociation) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaAssociation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
