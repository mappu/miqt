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
	return (bool)(C.QMetaContainer_hasInputIterator(this.h))
}

func (this *QMetaContainer) HasForwardIterator() bool {
	return (bool)(C.QMetaContainer_hasForwardIterator(this.h))
}

func (this *QMetaContainer) HasBidirectionalIterator() bool {
	return (bool)(C.QMetaContainer_hasBidirectionalIterator(this.h))
}

func (this *QMetaContainer) HasRandomAccessIterator() bool {
	return (bool)(C.QMetaContainer_hasRandomAccessIterator(this.h))
}

func (this *QMetaContainer) HasSize() bool {
	return (bool)(C.QMetaContainer_hasSize(this.h))
}

func (this *QMetaContainer) Size(container unsafe.Pointer) int64 {
	return (int64)(C.QMetaContainer_size(this.h, container))
}

func (this *QMetaContainer) CanClear() bool {
	return (bool)(C.QMetaContainer_canClear(this.h))
}

func (this *QMetaContainer) Clear(container unsafe.Pointer) {
	C.QMetaContainer_clear(this.h, container)
}

func (this *QMetaContainer) HasIterator() bool {
	return (bool)(C.QMetaContainer_hasIterator(this.h))
}

func (this *QMetaContainer) Begin(container unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaContainer_begin(this.h, container))
}

func (this *QMetaContainer) End(container unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaContainer_end(this.h, container))
}

func (this *QMetaContainer) DestroyIterator(iterator unsafe.Pointer) {
	C.QMetaContainer_destroyIterator(this.h, iterator)
}

func (this *QMetaContainer) CompareIterator(i unsafe.Pointer, j unsafe.Pointer) bool {
	return (bool)(C.QMetaContainer_compareIterator(this.h, i, j))
}

func (this *QMetaContainer) CopyIterator(target unsafe.Pointer, source unsafe.Pointer) {
	C.QMetaContainer_copyIterator(this.h, target, source)
}

func (this *QMetaContainer) AdvanceIterator(iterator unsafe.Pointer, step int64) {
	C.QMetaContainer_advanceIterator(this.h, iterator, (C.ptrdiff_t)(step))
}

func (this *QMetaContainer) DiffIterator(i unsafe.Pointer, j unsafe.Pointer) int64 {
	return (int64)(C.QMetaContainer_diffIterator(this.h, i, j))
}

func (this *QMetaContainer) HasConstIterator() bool {
	return (bool)(C.QMetaContainer_hasConstIterator(this.h))
}

func (this *QMetaContainer) ConstBegin(container unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaContainer_constBegin(this.h, container))
}

func (this *QMetaContainer) ConstEnd(container unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaContainer_constEnd(this.h, container))
}

func (this *QMetaContainer) DestroyConstIterator(iterator unsafe.Pointer) {
	C.QMetaContainer_destroyConstIterator(this.h, iterator)
}

func (this *QMetaContainer) CompareConstIterator(i unsafe.Pointer, j unsafe.Pointer) bool {
	return (bool)(C.QMetaContainer_compareConstIterator(this.h, i, j))
}

func (this *QMetaContainer) CopyConstIterator(target unsafe.Pointer, source unsafe.Pointer) {
	C.QMetaContainer_copyConstIterator(this.h, target, source)
}

func (this *QMetaContainer) AdvanceConstIterator(iterator unsafe.Pointer, step int64) {
	C.QMetaContainer_advanceConstIterator(this.h, iterator, (C.ptrdiff_t)(step))
}

func (this *QMetaContainer) DiffConstIterator(i unsafe.Pointer, j unsafe.Pointer) int64 {
	return (int64)(C.QMetaContainer_diffConstIterator(this.h, i, j))
}

// Delete this object from C++ memory.
func (this *QMetaContainer) Delete() {
	C.QMetaContainer_delete(this.h)
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
	_goptr := newQMetaType(C.QMetaSequence_valueMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaSequence) IsSortable() bool {
	return (bool)(C.QMetaSequence_isSortable(this.h))
}

func (this *QMetaSequence) CanAddValueAtBegin() bool {
	return (bool)(C.QMetaSequence_canAddValueAtBegin(this.h))
}

func (this *QMetaSequence) AddValueAtBegin(container unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_addValueAtBegin(this.h, container, value)
}

func (this *QMetaSequence) CanAddValueAtEnd() bool {
	return (bool)(C.QMetaSequence_canAddValueAtEnd(this.h))
}

func (this *QMetaSequence) AddValueAtEnd(container unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_addValueAtEnd(this.h, container, value)
}

func (this *QMetaSequence) CanRemoveValueAtBegin() bool {
	return (bool)(C.QMetaSequence_canRemoveValueAtBegin(this.h))
}

func (this *QMetaSequence) RemoveValueAtBegin(container unsafe.Pointer) {
	C.QMetaSequence_removeValueAtBegin(this.h, container)
}

func (this *QMetaSequence) CanRemoveValueAtEnd() bool {
	return (bool)(C.QMetaSequence_canRemoveValueAtEnd(this.h))
}

func (this *QMetaSequence) RemoveValueAtEnd(container unsafe.Pointer) {
	C.QMetaSequence_removeValueAtEnd(this.h, container)
}

func (this *QMetaSequence) CanGetValueAtIndex() bool {
	return (bool)(C.QMetaSequence_canGetValueAtIndex(this.h))
}

func (this *QMetaSequence) ValueAtIndex(container unsafe.Pointer, index int64, result unsafe.Pointer) {
	C.QMetaSequence_valueAtIndex(this.h, container, (C.ptrdiff_t)(index), result)
}

func (this *QMetaSequence) CanSetValueAtIndex() bool {
	return (bool)(C.QMetaSequence_canSetValueAtIndex(this.h))
}

func (this *QMetaSequence) SetValueAtIndex(container unsafe.Pointer, index int64, value unsafe.Pointer) {
	C.QMetaSequence_setValueAtIndex(this.h, container, (C.ptrdiff_t)(index), value)
}

func (this *QMetaSequence) CanAddValue() bool {
	return (bool)(C.QMetaSequence_canAddValue(this.h))
}

func (this *QMetaSequence) AddValue(container unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_addValue(this.h, container, value)
}

func (this *QMetaSequence) CanRemoveValue() bool {
	return (bool)(C.QMetaSequence_canRemoveValue(this.h))
}

func (this *QMetaSequence) RemoveValue(container unsafe.Pointer) {
	C.QMetaSequence_removeValue(this.h, container)
}

func (this *QMetaSequence) CanGetValueAtIterator() bool {
	return (bool)(C.QMetaSequence_canGetValueAtIterator(this.h))
}

func (this *QMetaSequence) ValueAtIterator(iterator unsafe.Pointer, result unsafe.Pointer) {
	C.QMetaSequence_valueAtIterator(this.h, iterator, result)
}

func (this *QMetaSequence) CanSetValueAtIterator() bool {
	return (bool)(C.QMetaSequence_canSetValueAtIterator(this.h))
}

func (this *QMetaSequence) SetValueAtIterator(iterator unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_setValueAtIterator(this.h, iterator, value)
}

func (this *QMetaSequence) CanInsertValueAtIterator() bool {
	return (bool)(C.QMetaSequence_canInsertValueAtIterator(this.h))
}

func (this *QMetaSequence) InsertValueAtIterator(container unsafe.Pointer, iterator unsafe.Pointer, value unsafe.Pointer) {
	C.QMetaSequence_insertValueAtIterator(this.h, container, iterator, value)
}

func (this *QMetaSequence) CanEraseValueAtIterator() bool {
	return (bool)(C.QMetaSequence_canEraseValueAtIterator(this.h))
}

func (this *QMetaSequence) EraseValueAtIterator(container unsafe.Pointer, iterator unsafe.Pointer) {
	C.QMetaSequence_eraseValueAtIterator(this.h, container, iterator)
}

func (this *QMetaSequence) CanEraseRangeAtIterator() bool {
	return (bool)(C.QMetaSequence_canEraseRangeAtIterator(this.h))
}

func (this *QMetaSequence) EraseRangeAtIterator(container unsafe.Pointer, iterator1 unsafe.Pointer, iterator2 unsafe.Pointer) {
	C.QMetaSequence_eraseRangeAtIterator(this.h, container, iterator1, iterator2)
}

func (this *QMetaSequence) CanGetValueAtConstIterator() bool {
	return (bool)(C.QMetaSequence_canGetValueAtConstIterator(this.h))
}

func (this *QMetaSequence) ValueAtConstIterator(iterator unsafe.Pointer, result unsafe.Pointer) {
	C.QMetaSequence_valueAtConstIterator(this.h, iterator, result)
}

// Delete this object from C++ memory.
func (this *QMetaSequence) Delete() {
	C.QMetaSequence_delete(this.h)
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
	_goptr := newQMetaType(C.QMetaAssociation_keyMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaAssociation) MappedMetaType() *QMetaType {
	_goptr := newQMetaType(C.QMetaAssociation_mappedMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaAssociation) CanInsertKey() bool {
	return (bool)(C.QMetaAssociation_canInsertKey(this.h))
}

func (this *QMetaAssociation) InsertKey(container unsafe.Pointer, key unsafe.Pointer) {
	C.QMetaAssociation_insertKey(this.h, container, key)
}

func (this *QMetaAssociation) CanRemoveKey() bool {
	return (bool)(C.QMetaAssociation_canRemoveKey(this.h))
}

func (this *QMetaAssociation) RemoveKey(container unsafe.Pointer, key unsafe.Pointer) {
	C.QMetaAssociation_removeKey(this.h, container, key)
}

func (this *QMetaAssociation) CanContainsKey() bool {
	return (bool)(C.QMetaAssociation_canContainsKey(this.h))
}

func (this *QMetaAssociation) ContainsKey(container unsafe.Pointer, key unsafe.Pointer) bool {
	return (bool)(C.QMetaAssociation_containsKey(this.h, container, key))
}

func (this *QMetaAssociation) CanGetMappedAtKey() bool {
	return (bool)(C.QMetaAssociation_canGetMappedAtKey(this.h))
}

func (this *QMetaAssociation) MappedAtKey(container unsafe.Pointer, key unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_mappedAtKey(this.h, container, key, mapped)
}

func (this *QMetaAssociation) CanSetMappedAtKey() bool {
	return (bool)(C.QMetaAssociation_canSetMappedAtKey(this.h))
}

func (this *QMetaAssociation) SetMappedAtKey(container unsafe.Pointer, key unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_setMappedAtKey(this.h, container, key, mapped)
}

func (this *QMetaAssociation) CanGetKeyAtIterator() bool {
	return (bool)(C.QMetaAssociation_canGetKeyAtIterator(this.h))
}

func (this *QMetaAssociation) KeyAtIterator(iterator unsafe.Pointer, key unsafe.Pointer) {
	C.QMetaAssociation_keyAtIterator(this.h, iterator, key)
}

func (this *QMetaAssociation) CanGetKeyAtConstIterator() bool {
	return (bool)(C.QMetaAssociation_canGetKeyAtConstIterator(this.h))
}

func (this *QMetaAssociation) KeyAtConstIterator(iterator unsafe.Pointer, key unsafe.Pointer) {
	C.QMetaAssociation_keyAtConstIterator(this.h, iterator, key)
}

func (this *QMetaAssociation) CanGetMappedAtIterator() bool {
	return (bool)(C.QMetaAssociation_canGetMappedAtIterator(this.h))
}

func (this *QMetaAssociation) MappedAtIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_mappedAtIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanGetMappedAtConstIterator() bool {
	return (bool)(C.QMetaAssociation_canGetMappedAtConstIterator(this.h))
}

func (this *QMetaAssociation) MappedAtConstIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_mappedAtConstIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanSetMappedAtIterator() bool {
	return (bool)(C.QMetaAssociation_canSetMappedAtIterator(this.h))
}

func (this *QMetaAssociation) SetMappedAtIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	C.QMetaAssociation_setMappedAtIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanCreateIteratorAtKey() bool {
	return (bool)(C.QMetaAssociation_canCreateIteratorAtKey(this.h))
}

func (this *QMetaAssociation) CreateIteratorAtKey(container unsafe.Pointer, key unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaAssociation_createIteratorAtKey(this.h, container, key))
}

func (this *QMetaAssociation) CanCreateConstIteratorAtKey() bool {
	return (bool)(C.QMetaAssociation_canCreateConstIteratorAtKey(this.h))
}

func (this *QMetaAssociation) CreateConstIteratorAtKey(container unsafe.Pointer, key unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaAssociation_createConstIteratorAtKey(this.h, container, key))
}

// Delete this object from C++ memory.
func (this *QMetaAssociation) Delete() {
	C.QMetaAssociation_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaAssociation) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaAssociation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
