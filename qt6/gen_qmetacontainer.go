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
	h  *C.QMetaContainer
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMetaContainer) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQMetaContainer(C.QMetaContainer_new2(param1.cPointer()))
}

func (this *QMetaContainer) HasInputIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_hasInputIterator(this.h))
}

func (this *QMetaContainer) HasForwardIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_hasForwardIterator(this.h))
}

func (this *QMetaContainer) HasBidirectionalIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_hasBidirectionalIterator(this.h))
}

func (this *QMetaContainer) HasRandomAccessIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_hasRandomAccessIterator(this.h))
}

func (this *QMetaContainer) HasSize() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_hasSize(this.h))
}

func (this *QMetaContainer) Size(container unsafe.Pointer) int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QMetaContainer_size(this.h, container))
}

func (this *QMetaContainer) CanClear() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_canClear(this.h))
}

func (this *QMetaContainer) Clear(container unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaContainer_clear(this.h, container)
}

func (this *QMetaContainer) HasIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_hasIterator(this.h))
}

func (this *QMetaContainer) Begin(container unsafe.Pointer) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QMetaContainer_begin(this.h, container))
}

func (this *QMetaContainer) End(container unsafe.Pointer) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QMetaContainer_end(this.h, container))
}

func (this *QMetaContainer) DestroyIterator(iterator unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaContainer_destroyIterator(this.h, iterator)
}

func (this *QMetaContainer) CompareIterator(i unsafe.Pointer, j unsafe.Pointer) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_compareIterator(this.h, i, j))
}

func (this *QMetaContainer) CopyIterator(target unsafe.Pointer, source unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaContainer_copyIterator(this.h, target, source)
}

func (this *QMetaContainer) AdvanceIterator(iterator unsafe.Pointer, step int64) {
	defer runtime.KeepAlive(this)
	C.QMetaContainer_advanceIterator(this.h, iterator, (C.ptrdiff_t)(step))
}

func (this *QMetaContainer) DiffIterator(i unsafe.Pointer, j unsafe.Pointer) int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QMetaContainer_diffIterator(this.h, i, j))
}

func (this *QMetaContainer) HasConstIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_hasConstIterator(this.h))
}

func (this *QMetaContainer) ConstBegin(container unsafe.Pointer) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QMetaContainer_constBegin(this.h, container))
}

func (this *QMetaContainer) ConstEnd(container unsafe.Pointer) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QMetaContainer_constEnd(this.h, container))
}

func (this *QMetaContainer) DestroyConstIterator(iterator unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaContainer_destroyConstIterator(this.h, iterator)
}

func (this *QMetaContainer) CompareConstIterator(i unsafe.Pointer, j unsafe.Pointer) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaContainer_compareConstIterator(this.h, i, j))
}

func (this *QMetaContainer) CopyConstIterator(target unsafe.Pointer, source unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaContainer_copyConstIterator(this.h, target, source)
}

func (this *QMetaContainer) AdvanceConstIterator(iterator unsafe.Pointer, step int64) {
	defer runtime.KeepAlive(this)
	C.QMetaContainer_advanceConstIterator(this.h, iterator, (C.ptrdiff_t)(step))
}

func (this *QMetaContainer) DiffConstIterator(i unsafe.Pointer, j unsafe.Pointer) int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QMetaContainer_diffConstIterator(this.h, i, j))
}

// Delete this object from C++ memory.
func (this *QMetaContainer) Delete() {
	C.QMetaContainer_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMetaContainer) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMetaContainer_delete((*C.QMetaContainer)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMetaSequence struct {
	h  *C.QMetaSequence
	gc *[1]unsafe.Pointer
	*QMetaContainer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMetaSequence) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QMetaContainer.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQMetaType(C.QMetaSequence_valueMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaSequence) IsSortable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_isSortable(this.h))
}

func (this *QMetaSequence) CanAddValueAtBegin() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canAddValueAtBegin(this.h))
}

func (this *QMetaSequence) AddValueAtBegin(container unsafe.Pointer, value unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_addValueAtBegin(this.h, container, value)
}

func (this *QMetaSequence) CanAddValueAtEnd() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canAddValueAtEnd(this.h))
}

func (this *QMetaSequence) AddValueAtEnd(container unsafe.Pointer, value unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_addValueAtEnd(this.h, container, value)
}

func (this *QMetaSequence) CanRemoveValueAtBegin() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canRemoveValueAtBegin(this.h))
}

func (this *QMetaSequence) RemoveValueAtBegin(container unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_removeValueAtBegin(this.h, container)
}

func (this *QMetaSequence) CanRemoveValueAtEnd() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canRemoveValueAtEnd(this.h))
}

func (this *QMetaSequence) RemoveValueAtEnd(container unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_removeValueAtEnd(this.h, container)
}

func (this *QMetaSequence) CanGetValueAtIndex() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canGetValueAtIndex(this.h))
}

func (this *QMetaSequence) ValueAtIndex(container unsafe.Pointer, index int64, result unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_valueAtIndex(this.h, container, (C.ptrdiff_t)(index), result)
}

func (this *QMetaSequence) CanSetValueAtIndex() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canSetValueAtIndex(this.h))
}

func (this *QMetaSequence) SetValueAtIndex(container unsafe.Pointer, index int64, value unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_setValueAtIndex(this.h, container, (C.ptrdiff_t)(index), value)
}

func (this *QMetaSequence) CanAddValue() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canAddValue(this.h))
}

func (this *QMetaSequence) AddValue(container unsafe.Pointer, value unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_addValue(this.h, container, value)
}

func (this *QMetaSequence) CanRemoveValue() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canRemoveValue(this.h))
}

func (this *QMetaSequence) RemoveValue(container unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_removeValue(this.h, container)
}

func (this *QMetaSequence) CanGetValueAtIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canGetValueAtIterator(this.h))
}

func (this *QMetaSequence) ValueAtIterator(iterator unsafe.Pointer, result unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_valueAtIterator(this.h, iterator, result)
}

func (this *QMetaSequence) CanSetValueAtIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canSetValueAtIterator(this.h))
}

func (this *QMetaSequence) SetValueAtIterator(iterator unsafe.Pointer, value unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_setValueAtIterator(this.h, iterator, value)
}

func (this *QMetaSequence) CanInsertValueAtIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canInsertValueAtIterator(this.h))
}

func (this *QMetaSequence) InsertValueAtIterator(container unsafe.Pointer, iterator unsafe.Pointer, value unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_insertValueAtIterator(this.h, container, iterator, value)
}

func (this *QMetaSequence) CanEraseValueAtIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canEraseValueAtIterator(this.h))
}

func (this *QMetaSequence) EraseValueAtIterator(container unsafe.Pointer, iterator unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_eraseValueAtIterator(this.h, container, iterator)
}

func (this *QMetaSequence) CanEraseRangeAtIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canEraseRangeAtIterator(this.h))
}

func (this *QMetaSequence) EraseRangeAtIterator(container unsafe.Pointer, iterator1 unsafe.Pointer, iterator2 unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_eraseRangeAtIterator(this.h, container, iterator1, iterator2)
}

func (this *QMetaSequence) CanGetValueAtConstIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaSequence_canGetValueAtConstIterator(this.h))
}

func (this *QMetaSequence) ValueAtConstIterator(iterator unsafe.Pointer, result unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaSequence_valueAtConstIterator(this.h, iterator, result)
}

// Delete this object from C++ memory.
func (this *QMetaSequence) Delete() {
	C.QMetaSequence_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMetaSequence) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMetaSequence_delete((*C.QMetaSequence)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMetaAssociation struct {
	h  *C.QMetaAssociation
	gc *[1]unsafe.Pointer
	*QMetaContainer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMetaAssociation) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QMetaContainer.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQMetaType(C.QMetaAssociation_keyMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaAssociation) MappedMetaType() *QMetaType {
	defer runtime.KeepAlive(this)
	_goptr := newQMetaType(C.QMetaAssociation_mappedMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaAssociation) CanInsertKey() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canInsertKey(this.h))
}

func (this *QMetaAssociation) InsertKey(container unsafe.Pointer, key unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_insertKey(this.h, container, key)
}

func (this *QMetaAssociation) CanRemoveKey() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canRemoveKey(this.h))
}

func (this *QMetaAssociation) RemoveKey(container unsafe.Pointer, key unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_removeKey(this.h, container, key)
}

func (this *QMetaAssociation) CanContainsKey() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canContainsKey(this.h))
}

func (this *QMetaAssociation) ContainsKey(container unsafe.Pointer, key unsafe.Pointer) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_containsKey(this.h, container, key))
}

func (this *QMetaAssociation) CanGetMappedAtKey() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canGetMappedAtKey(this.h))
}

func (this *QMetaAssociation) MappedAtKey(container unsafe.Pointer, key unsafe.Pointer, mapped unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_mappedAtKey(this.h, container, key, mapped)
}

func (this *QMetaAssociation) CanSetMappedAtKey() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canSetMappedAtKey(this.h))
}

func (this *QMetaAssociation) SetMappedAtKey(container unsafe.Pointer, key unsafe.Pointer, mapped unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_setMappedAtKey(this.h, container, key, mapped)
}

func (this *QMetaAssociation) CanGetKeyAtIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canGetKeyAtIterator(this.h))
}

func (this *QMetaAssociation) KeyAtIterator(iterator unsafe.Pointer, key unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_keyAtIterator(this.h, iterator, key)
}

func (this *QMetaAssociation) CanGetKeyAtConstIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canGetKeyAtConstIterator(this.h))
}

func (this *QMetaAssociation) KeyAtConstIterator(iterator unsafe.Pointer, key unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_keyAtConstIterator(this.h, iterator, key)
}

func (this *QMetaAssociation) CanGetMappedAtIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canGetMappedAtIterator(this.h))
}

func (this *QMetaAssociation) MappedAtIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_mappedAtIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanGetMappedAtConstIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canGetMappedAtConstIterator(this.h))
}

func (this *QMetaAssociation) MappedAtConstIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_mappedAtConstIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanSetMappedAtIterator() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canSetMappedAtIterator(this.h))
}

func (this *QMetaAssociation) SetMappedAtIterator(iterator unsafe.Pointer, mapped unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QMetaAssociation_setMappedAtIterator(this.h, iterator, mapped)
}

func (this *QMetaAssociation) CanCreateIteratorAtKey() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canCreateIteratorAtKey(this.h))
}

func (this *QMetaAssociation) CreateIteratorAtKey(container unsafe.Pointer, key unsafe.Pointer) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QMetaAssociation_createIteratorAtKey(this.h, container, key))
}

func (this *QMetaAssociation) CanCreateConstIteratorAtKey() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaAssociation_canCreateConstIteratorAtKey(this.h))
}

func (this *QMetaAssociation) CreateConstIteratorAtKey(container unsafe.Pointer, key unsafe.Pointer) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QMetaAssociation_createConstIteratorAtKey(this.h, container, key))
}

// Delete this object from C++ memory.
func (this *QMetaAssociation) Delete() {
	C.QMetaAssociation_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMetaAssociation) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMetaAssociation_delete((*C.QMetaAssociation)(gc[0]))
	})
	this.miqtSetGC(gc)
}
