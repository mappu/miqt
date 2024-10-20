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

type QtMetaContainerPrivate__QMetaContainerInterface struct {
	h *C.QtMetaContainerPrivate__QMetaContainerInterface
}

func (this *QtMetaContainerPrivate__QMetaContainerInterface) cPointer() *C.QtMetaContainerPrivate__QMetaContainerInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMetaContainerPrivate__QMetaContainerInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtMetaContainerPrivate__QMetaContainerInterface(h *C.QtMetaContainerPrivate__QMetaContainerInterface) *QtMetaContainerPrivate__QMetaContainerInterface {
	if h == nil {
		return nil
	}
	return &QtMetaContainerPrivate__QMetaContainerInterface{h: h}
}

func UnsafeNewQtMetaContainerPrivate__QMetaContainerInterface(h unsafe.Pointer) *QtMetaContainerPrivate__QMetaContainerInterface {
	return newQtMetaContainerPrivate__QMetaContainerInterface((*C.QtMetaContainerPrivate__QMetaContainerInterface)(h))
}

// NewQtMetaContainerPrivate__QMetaContainerInterface constructs a new QtMetaContainerPrivate::QMetaContainerInterface object.
func NewQtMetaContainerPrivate__QMetaContainerInterface() *QtMetaContainerPrivate__QMetaContainerInterface {
	ret := C.QtMetaContainerPrivate__QMetaContainerInterface_new()
	return newQtMetaContainerPrivate__QMetaContainerInterface(ret)
}

// Delete this object from C++ memory.
func (this *QtMetaContainerPrivate__QMetaContainerInterface) Delete() {
	C.QtMetaContainerPrivate__QMetaContainerInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMetaContainerPrivate__QMetaContainerInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMetaContainerPrivate__QMetaContainerInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtMetaContainerPrivate__QMetaSequenceInterface struct {
	h *C.QtMetaContainerPrivate__QMetaSequenceInterface
	*QtMetaContainerPrivate__QMetaContainerInterface
}

func (this *QtMetaContainerPrivate__QMetaSequenceInterface) cPointer() *C.QtMetaContainerPrivate__QMetaSequenceInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMetaContainerPrivate__QMetaSequenceInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtMetaContainerPrivate__QMetaSequenceInterface(h *C.QtMetaContainerPrivate__QMetaSequenceInterface) *QtMetaContainerPrivate__QMetaSequenceInterface {
	if h == nil {
		return nil
	}
	return &QtMetaContainerPrivate__QMetaSequenceInterface{h: h, QtMetaContainerPrivate__QMetaContainerInterface: UnsafeNewQtMetaContainerPrivate__QMetaContainerInterface(unsafe.Pointer(h))}
}

func UnsafeNewQtMetaContainerPrivate__QMetaSequenceInterface(h unsafe.Pointer) *QtMetaContainerPrivate__QMetaSequenceInterface {
	return newQtMetaContainerPrivate__QMetaSequenceInterface((*C.QtMetaContainerPrivate__QMetaSequenceInterface)(h))
}

// NewQtMetaContainerPrivate__QMetaSequenceInterface constructs a new QtMetaContainerPrivate::QMetaSequenceInterface object.
func NewQtMetaContainerPrivate__QMetaSequenceInterface() *QtMetaContainerPrivate__QMetaSequenceInterface {
	ret := C.QtMetaContainerPrivate__QMetaSequenceInterface_new()
	return newQtMetaContainerPrivate__QMetaSequenceInterface(ret)
}

// Delete this object from C++ memory.
func (this *QtMetaContainerPrivate__QMetaSequenceInterface) Delete() {
	C.QtMetaContainerPrivate__QMetaSequenceInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMetaContainerPrivate__QMetaSequenceInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMetaContainerPrivate__QMetaSequenceInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtMetaContainerPrivate__QMetaAssociationInterface struct {
	h *C.QtMetaContainerPrivate__QMetaAssociationInterface
	*QtMetaContainerPrivate__QMetaContainerInterface
}

func (this *QtMetaContainerPrivate__QMetaAssociationInterface) cPointer() *C.QtMetaContainerPrivate__QMetaAssociationInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMetaContainerPrivate__QMetaAssociationInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtMetaContainerPrivate__QMetaAssociationInterface(h *C.QtMetaContainerPrivate__QMetaAssociationInterface) *QtMetaContainerPrivate__QMetaAssociationInterface {
	if h == nil {
		return nil
	}
	return &QtMetaContainerPrivate__QMetaAssociationInterface{h: h, QtMetaContainerPrivate__QMetaContainerInterface: UnsafeNewQtMetaContainerPrivate__QMetaContainerInterface(unsafe.Pointer(h))}
}

func UnsafeNewQtMetaContainerPrivate__QMetaAssociationInterface(h unsafe.Pointer) *QtMetaContainerPrivate__QMetaAssociationInterface {
	return newQtMetaContainerPrivate__QMetaAssociationInterface((*C.QtMetaContainerPrivate__QMetaAssociationInterface)(h))
}

// NewQtMetaContainerPrivate__QMetaAssociationInterface constructs a new QtMetaContainerPrivate::QMetaAssociationInterface object.
func NewQtMetaContainerPrivate__QMetaAssociationInterface() *QtMetaContainerPrivate__QMetaAssociationInterface {
	ret := C.QtMetaContainerPrivate__QMetaAssociationInterface_new()
	return newQtMetaContainerPrivate__QMetaAssociationInterface(ret)
}

// Delete this object from C++ memory.
func (this *QtMetaContainerPrivate__QMetaAssociationInterface) Delete() {
	C.QtMetaContainerPrivate__QMetaAssociationInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMetaContainerPrivate__QMetaAssociationInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMetaContainerPrivate__QMetaAssociationInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

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

func newQMetaContainer(h *C.QMetaContainer) *QMetaContainer {
	if h == nil {
		return nil
	}
	return &QMetaContainer{h: h}
}

func UnsafeNewQMetaContainer(h unsafe.Pointer) *QMetaContainer {
	return newQMetaContainer((*C.QMetaContainer)(h))
}

// NewQMetaContainer constructs a new QMetaContainer object.
func NewQMetaContainer() *QMetaContainer {
	ret := C.QMetaContainer_new()
	return newQMetaContainer(ret)
}

// NewQMetaContainer2 constructs a new QMetaContainer object.
func NewQMetaContainer2(d *QtMetaContainerPrivate__QMetaContainerInterface) *QMetaContainer {
	ret := C.QMetaContainer_new2(d.cPointer())
	return newQMetaContainer(ret)
}

// NewQMetaContainer3 constructs a new QMetaContainer object.
func NewQMetaContainer3(param1 *QMetaContainer) *QMetaContainer {
	ret := C.QMetaContainer_new3(param1.cPointer())
	return newQMetaContainer(ret)
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

func newQMetaSequence(h *C.QMetaSequence) *QMetaSequence {
	if h == nil {
		return nil
	}
	return &QMetaSequence{h: h, QMetaContainer: UnsafeNewQMetaContainer(unsafe.Pointer(h))}
}

func UnsafeNewQMetaSequence(h unsafe.Pointer) *QMetaSequence {
	return newQMetaSequence((*C.QMetaSequence)(h))
}

// NewQMetaSequence constructs a new QMetaSequence object.
func NewQMetaSequence() *QMetaSequence {
	ret := C.QMetaSequence_new()
	return newQMetaSequence(ret)
}

// NewQMetaSequence2 constructs a new QMetaSequence object.
func NewQMetaSequence2(d *QtMetaContainerPrivate__QMetaSequenceInterface) *QMetaSequence {
	ret := C.QMetaSequence_new2(d.cPointer())
	return newQMetaSequence(ret)
}

func (this *QMetaSequence) ValueMetaType() *QMetaType {
	_ret := C.QMetaSequence_ValueMetaType(this.h)
	_goptr := newQMetaType(_ret)
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

func newQMetaAssociation(h *C.QMetaAssociation) *QMetaAssociation {
	if h == nil {
		return nil
	}
	return &QMetaAssociation{h: h, QMetaContainer: UnsafeNewQMetaContainer(unsafe.Pointer(h))}
}

func UnsafeNewQMetaAssociation(h unsafe.Pointer) *QMetaAssociation {
	return newQMetaAssociation((*C.QMetaAssociation)(h))
}

// NewQMetaAssociation constructs a new QMetaAssociation object.
func NewQMetaAssociation() *QMetaAssociation {
	ret := C.QMetaAssociation_new()
	return newQMetaAssociation(ret)
}

// NewQMetaAssociation2 constructs a new QMetaAssociation object.
func NewQMetaAssociation2(d *QtMetaContainerPrivate__QMetaAssociationInterface) *QMetaAssociation {
	ret := C.QMetaAssociation_new2(d.cPointer())
	return newQMetaAssociation(ret)
}

func (this *QMetaAssociation) KeyMetaType() *QMetaType {
	_ret := C.QMetaAssociation_KeyMetaType(this.h)
	_goptr := newQMetaType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaAssociation) MappedMetaType() *QMetaType {
	_ret := C.QMetaAssociation_MappedMetaType(this.h)
	_goptr := newQMetaType(_ret)
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
