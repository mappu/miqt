#pragma once
#ifndef MIQT_QT6_GEN_QMETACONTAINER_H
#define MIQT_QT6_GEN_QMETACONTAINER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaAssociation;
class QMetaContainer;
class QMetaSequence;
class QMetaType;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtMetaContainerPrivate__QMetaAssociationInterface)
typedef QtMetaContainerPrivate::QMetaAssociationInterface QtMetaContainerPrivate__QMetaAssociationInterface;
#else
class QtMetaContainerPrivate__QMetaAssociationInterface;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtMetaContainerPrivate__QMetaContainerInterface)
typedef QtMetaContainerPrivate::QMetaContainerInterface QtMetaContainerPrivate__QMetaContainerInterface;
#else
class QtMetaContainerPrivate__QMetaContainerInterface;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtMetaContainerPrivate__QMetaSequenceInterface)
typedef QtMetaContainerPrivate::QMetaSequenceInterface QtMetaContainerPrivate__QMetaSequenceInterface;
#else
class QtMetaContainerPrivate__QMetaSequenceInterface;
#endif
#else
typedef struct QMetaAssociation QMetaAssociation;
typedef struct QMetaContainer QMetaContainer;
typedef struct QMetaSequence QMetaSequence;
typedef struct QMetaType QMetaType;
typedef struct QtMetaContainerPrivate__QMetaAssociationInterface QtMetaContainerPrivate__QMetaAssociationInterface;
typedef struct QtMetaContainerPrivate__QMetaContainerInterface QtMetaContainerPrivate__QMetaContainerInterface;
typedef struct QtMetaContainerPrivate__QMetaSequenceInterface QtMetaContainerPrivate__QMetaSequenceInterface;
#endif

void QtMetaContainerPrivate__QMetaContainerInterface_new(QtMetaContainerPrivate__QMetaContainerInterface** outptr_QtMetaContainerPrivate__QMetaContainerInterface);
void QtMetaContainerPrivate__QMetaContainerInterface_Delete(QtMetaContainerPrivate__QMetaContainerInterface* self, bool isSubclass);

void QtMetaContainerPrivate__QMetaSequenceInterface_new(QtMetaContainerPrivate__QMetaSequenceInterface** outptr_QtMetaContainerPrivate__QMetaSequenceInterface, QtMetaContainerPrivate__QMetaContainerInterface** outptr_QtMetaContainerPrivate__QMetaContainerInterface);
void QtMetaContainerPrivate__QMetaSequenceInterface_Delete(QtMetaContainerPrivate__QMetaSequenceInterface* self, bool isSubclass);

void QtMetaContainerPrivate__QMetaAssociationInterface_new(QtMetaContainerPrivate__QMetaAssociationInterface** outptr_QtMetaContainerPrivate__QMetaAssociationInterface, QtMetaContainerPrivate__QMetaContainerInterface** outptr_QtMetaContainerPrivate__QMetaContainerInterface);
void QtMetaContainerPrivate__QMetaAssociationInterface_Delete(QtMetaContainerPrivate__QMetaAssociationInterface* self, bool isSubclass);

void QMetaContainer_new(QMetaContainer** outptr_QMetaContainer);
void QMetaContainer_new2(QtMetaContainerPrivate__QMetaContainerInterface* d, QMetaContainer** outptr_QMetaContainer);
void QMetaContainer_new3(QMetaContainer* param1, QMetaContainer** outptr_QMetaContainer);
bool QMetaContainer_HasInputIterator(const QMetaContainer* self);
bool QMetaContainer_HasForwardIterator(const QMetaContainer* self);
bool QMetaContainer_HasBidirectionalIterator(const QMetaContainer* self);
bool QMetaContainer_HasRandomAccessIterator(const QMetaContainer* self);
bool QMetaContainer_HasSize(const QMetaContainer* self);
ptrdiff_t QMetaContainer_Size(const QMetaContainer* self, const void* container);
bool QMetaContainer_CanClear(const QMetaContainer* self);
void QMetaContainer_Clear(const QMetaContainer* self, void* container);
bool QMetaContainer_HasIterator(const QMetaContainer* self);
void* QMetaContainer_Begin(const QMetaContainer* self, void* container);
void* QMetaContainer_End(const QMetaContainer* self, void* container);
void QMetaContainer_DestroyIterator(const QMetaContainer* self, const void* iterator);
bool QMetaContainer_CompareIterator(const QMetaContainer* self, const void* i, const void* j);
void QMetaContainer_CopyIterator(const QMetaContainer* self, void* target, const void* source);
void QMetaContainer_AdvanceIterator(const QMetaContainer* self, void* iterator, ptrdiff_t step);
ptrdiff_t QMetaContainer_DiffIterator(const QMetaContainer* self, const void* i, const void* j);
bool QMetaContainer_HasConstIterator(const QMetaContainer* self);
void* QMetaContainer_ConstBegin(const QMetaContainer* self, const void* container);
void* QMetaContainer_ConstEnd(const QMetaContainer* self, const void* container);
void QMetaContainer_DestroyConstIterator(const QMetaContainer* self, const void* iterator);
bool QMetaContainer_CompareConstIterator(const QMetaContainer* self, const void* i, const void* j);
void QMetaContainer_CopyConstIterator(const QMetaContainer* self, void* target, const void* source);
void QMetaContainer_AdvanceConstIterator(const QMetaContainer* self, void* iterator, ptrdiff_t step);
ptrdiff_t QMetaContainer_DiffConstIterator(const QMetaContainer* self, const void* i, const void* j);
void QMetaContainer_Delete(QMetaContainer* self, bool isSubclass);

void QMetaSequence_new(QMetaSequence** outptr_QMetaSequence, QMetaContainer** outptr_QMetaContainer);
void QMetaSequence_new2(QtMetaContainerPrivate__QMetaSequenceInterface* d, QMetaSequence** outptr_QMetaSequence, QMetaContainer** outptr_QMetaContainer);
QMetaType* QMetaSequence_ValueMetaType(const QMetaSequence* self);
bool QMetaSequence_IsSortable(const QMetaSequence* self);
bool QMetaSequence_CanAddValueAtBegin(const QMetaSequence* self);
void QMetaSequence_AddValueAtBegin(const QMetaSequence* self, void* container, const void* value);
bool QMetaSequence_CanAddValueAtEnd(const QMetaSequence* self);
void QMetaSequence_AddValueAtEnd(const QMetaSequence* self, void* container, const void* value);
bool QMetaSequence_CanRemoveValueAtBegin(const QMetaSequence* self);
void QMetaSequence_RemoveValueAtBegin(const QMetaSequence* self, void* container);
bool QMetaSequence_CanRemoveValueAtEnd(const QMetaSequence* self);
void QMetaSequence_RemoveValueAtEnd(const QMetaSequence* self, void* container);
bool QMetaSequence_CanGetValueAtIndex(const QMetaSequence* self);
void QMetaSequence_ValueAtIndex(const QMetaSequence* self, const void* container, ptrdiff_t index, void* result);
bool QMetaSequence_CanSetValueAtIndex(const QMetaSequence* self);
void QMetaSequence_SetValueAtIndex(const QMetaSequence* self, void* container, ptrdiff_t index, const void* value);
bool QMetaSequence_CanAddValue(const QMetaSequence* self);
void QMetaSequence_AddValue(const QMetaSequence* self, void* container, const void* value);
bool QMetaSequence_CanRemoveValue(const QMetaSequence* self);
void QMetaSequence_RemoveValue(const QMetaSequence* self, void* container);
bool QMetaSequence_CanGetValueAtIterator(const QMetaSequence* self);
void QMetaSequence_ValueAtIterator(const QMetaSequence* self, const void* iterator, void* result);
bool QMetaSequence_CanSetValueAtIterator(const QMetaSequence* self);
void QMetaSequence_SetValueAtIterator(const QMetaSequence* self, const void* iterator, const void* value);
bool QMetaSequence_CanInsertValueAtIterator(const QMetaSequence* self);
void QMetaSequence_InsertValueAtIterator(const QMetaSequence* self, void* container, const void* iterator, const void* value);
bool QMetaSequence_CanEraseValueAtIterator(const QMetaSequence* self);
void QMetaSequence_EraseValueAtIterator(const QMetaSequence* self, void* container, const void* iterator);
bool QMetaSequence_CanEraseRangeAtIterator(const QMetaSequence* self);
void QMetaSequence_EraseRangeAtIterator(const QMetaSequence* self, void* container, const void* iterator1, const void* iterator2);
bool QMetaSequence_CanGetValueAtConstIterator(const QMetaSequence* self);
void QMetaSequence_ValueAtConstIterator(const QMetaSequence* self, const void* iterator, void* result);
void QMetaSequence_Delete(QMetaSequence* self, bool isSubclass);

void QMetaAssociation_new(QMetaAssociation** outptr_QMetaAssociation, QMetaContainer** outptr_QMetaContainer);
void QMetaAssociation_new2(QtMetaContainerPrivate__QMetaAssociationInterface* d, QMetaAssociation** outptr_QMetaAssociation, QMetaContainer** outptr_QMetaContainer);
QMetaType* QMetaAssociation_KeyMetaType(const QMetaAssociation* self);
QMetaType* QMetaAssociation_MappedMetaType(const QMetaAssociation* self);
bool QMetaAssociation_CanInsertKey(const QMetaAssociation* self);
void QMetaAssociation_InsertKey(const QMetaAssociation* self, void* container, const void* key);
bool QMetaAssociation_CanRemoveKey(const QMetaAssociation* self);
void QMetaAssociation_RemoveKey(const QMetaAssociation* self, void* container, const void* key);
bool QMetaAssociation_CanContainsKey(const QMetaAssociation* self);
bool QMetaAssociation_ContainsKey(const QMetaAssociation* self, const void* container, const void* key);
bool QMetaAssociation_CanGetMappedAtKey(const QMetaAssociation* self);
void QMetaAssociation_MappedAtKey(const QMetaAssociation* self, const void* container, const void* key, void* mapped);
bool QMetaAssociation_CanSetMappedAtKey(const QMetaAssociation* self);
void QMetaAssociation_SetMappedAtKey(const QMetaAssociation* self, void* container, const void* key, const void* mapped);
bool QMetaAssociation_CanGetKeyAtIterator(const QMetaAssociation* self);
void QMetaAssociation_KeyAtIterator(const QMetaAssociation* self, const void* iterator, void* key);
bool QMetaAssociation_CanGetKeyAtConstIterator(const QMetaAssociation* self);
void QMetaAssociation_KeyAtConstIterator(const QMetaAssociation* self, const void* iterator, void* key);
bool QMetaAssociation_CanGetMappedAtIterator(const QMetaAssociation* self);
void QMetaAssociation_MappedAtIterator(const QMetaAssociation* self, const void* iterator, void* mapped);
bool QMetaAssociation_CanGetMappedAtConstIterator(const QMetaAssociation* self);
void QMetaAssociation_MappedAtConstIterator(const QMetaAssociation* self, const void* iterator, void* mapped);
bool QMetaAssociation_CanSetMappedAtIterator(const QMetaAssociation* self);
void QMetaAssociation_SetMappedAtIterator(const QMetaAssociation* self, const void* iterator, const void* mapped);
bool QMetaAssociation_CanCreateIteratorAtKey(const QMetaAssociation* self);
void* QMetaAssociation_CreateIteratorAtKey(const QMetaAssociation* self, void* container, const void* key);
bool QMetaAssociation_CanCreateConstIteratorAtKey(const QMetaAssociation* self);
void* QMetaAssociation_CreateConstIteratorAtKey(const QMetaAssociation* self, const void* container, const void* key);
void QMetaAssociation_Delete(QMetaAssociation* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
