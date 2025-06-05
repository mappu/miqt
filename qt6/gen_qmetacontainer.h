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
#else
typedef struct QMetaAssociation QMetaAssociation;
typedef struct QMetaContainer QMetaContainer;
typedef struct QMetaSequence QMetaSequence;
typedef struct QMetaType QMetaType;
#endif

QMetaContainer* QMetaContainer_new();
QMetaContainer* QMetaContainer_new2(QMetaContainer* param1);
bool QMetaContainer_hasInputIterator(const QMetaContainer* self);
bool QMetaContainer_hasForwardIterator(const QMetaContainer* self);
bool QMetaContainer_hasBidirectionalIterator(const QMetaContainer* self);
bool QMetaContainer_hasRandomAccessIterator(const QMetaContainer* self);
bool QMetaContainer_hasSize(const QMetaContainer* self);
ptrdiff_t QMetaContainer_size(const QMetaContainer* self, const void* container);
bool QMetaContainer_canClear(const QMetaContainer* self);
void QMetaContainer_clear(const QMetaContainer* self, void* container);
bool QMetaContainer_hasIterator(const QMetaContainer* self);
void* QMetaContainer_begin(const QMetaContainer* self, void* container);
void* QMetaContainer_end(const QMetaContainer* self, void* container);
void QMetaContainer_destroyIterator(const QMetaContainer* self, const void* iterator);
bool QMetaContainer_compareIterator(const QMetaContainer* self, const void* i, const void* j);
void QMetaContainer_copyIterator(const QMetaContainer* self, void* target, const void* source);
void QMetaContainer_advanceIterator(const QMetaContainer* self, void* iterator, ptrdiff_t step);
ptrdiff_t QMetaContainer_diffIterator(const QMetaContainer* self, const void* i, const void* j);
bool QMetaContainer_hasConstIterator(const QMetaContainer* self);
void* QMetaContainer_constBegin(const QMetaContainer* self, const void* container);
void* QMetaContainer_constEnd(const QMetaContainer* self, const void* container);
void QMetaContainer_destroyConstIterator(const QMetaContainer* self, const void* iterator);
bool QMetaContainer_compareConstIterator(const QMetaContainer* self, const void* i, const void* j);
void QMetaContainer_copyConstIterator(const QMetaContainer* self, void* target, const void* source);
void QMetaContainer_advanceConstIterator(const QMetaContainer* self, void* iterator, ptrdiff_t step);
ptrdiff_t QMetaContainer_diffConstIterator(const QMetaContainer* self, const void* i, const void* j);

void QMetaContainer_delete(QMetaContainer* self);

QMetaSequence* QMetaSequence_new();
void QMetaSequence_virtbase(QMetaSequence* src, QMetaContainer** outptr_QMetaContainer);
QMetaType* QMetaSequence_valueMetaType(const QMetaSequence* self);
bool QMetaSequence_isSortable(const QMetaSequence* self);
bool QMetaSequence_canAddValueAtBegin(const QMetaSequence* self);
void QMetaSequence_addValueAtBegin(const QMetaSequence* self, void* container, const void* value);
bool QMetaSequence_canAddValueAtEnd(const QMetaSequence* self);
void QMetaSequence_addValueAtEnd(const QMetaSequence* self, void* container, const void* value);
bool QMetaSequence_canRemoveValueAtBegin(const QMetaSequence* self);
void QMetaSequence_removeValueAtBegin(const QMetaSequence* self, void* container);
bool QMetaSequence_canRemoveValueAtEnd(const QMetaSequence* self);
void QMetaSequence_removeValueAtEnd(const QMetaSequence* self, void* container);
bool QMetaSequence_canGetValueAtIndex(const QMetaSequence* self);
void QMetaSequence_valueAtIndex(const QMetaSequence* self, const void* container, ptrdiff_t index, void* result);
bool QMetaSequence_canSetValueAtIndex(const QMetaSequence* self);
void QMetaSequence_setValueAtIndex(const QMetaSequence* self, void* container, ptrdiff_t index, const void* value);
bool QMetaSequence_canAddValue(const QMetaSequence* self);
void QMetaSequence_addValue(const QMetaSequence* self, void* container, const void* value);
bool QMetaSequence_canRemoveValue(const QMetaSequence* self);
void QMetaSequence_removeValue(const QMetaSequence* self, void* container);
bool QMetaSequence_canGetValueAtIterator(const QMetaSequence* self);
void QMetaSequence_valueAtIterator(const QMetaSequence* self, const void* iterator, void* result);
bool QMetaSequence_canSetValueAtIterator(const QMetaSequence* self);
void QMetaSequence_setValueAtIterator(const QMetaSequence* self, const void* iterator, const void* value);
bool QMetaSequence_canInsertValueAtIterator(const QMetaSequence* self);
void QMetaSequence_insertValueAtIterator(const QMetaSequence* self, void* container, const void* iterator, const void* value);
bool QMetaSequence_canEraseValueAtIterator(const QMetaSequence* self);
void QMetaSequence_eraseValueAtIterator(const QMetaSequence* self, void* container, const void* iterator);
bool QMetaSequence_canEraseRangeAtIterator(const QMetaSequence* self);
void QMetaSequence_eraseRangeAtIterator(const QMetaSequence* self, void* container, const void* iterator1, const void* iterator2);
bool QMetaSequence_canGetValueAtConstIterator(const QMetaSequence* self);
void QMetaSequence_valueAtConstIterator(const QMetaSequence* self, const void* iterator, void* result);

void QMetaSequence_delete(QMetaSequence* self);

QMetaAssociation* QMetaAssociation_new();
void QMetaAssociation_virtbase(QMetaAssociation* src, QMetaContainer** outptr_QMetaContainer);
QMetaType* QMetaAssociation_keyMetaType(const QMetaAssociation* self);
QMetaType* QMetaAssociation_mappedMetaType(const QMetaAssociation* self);
bool QMetaAssociation_canInsertKey(const QMetaAssociation* self);
void QMetaAssociation_insertKey(const QMetaAssociation* self, void* container, const void* key);
bool QMetaAssociation_canRemoveKey(const QMetaAssociation* self);
void QMetaAssociation_removeKey(const QMetaAssociation* self, void* container, const void* key);
bool QMetaAssociation_canContainsKey(const QMetaAssociation* self);
bool QMetaAssociation_containsKey(const QMetaAssociation* self, const void* container, const void* key);
bool QMetaAssociation_canGetMappedAtKey(const QMetaAssociation* self);
void QMetaAssociation_mappedAtKey(const QMetaAssociation* self, const void* container, const void* key, void* mapped);
bool QMetaAssociation_canSetMappedAtKey(const QMetaAssociation* self);
void QMetaAssociation_setMappedAtKey(const QMetaAssociation* self, void* container, const void* key, const void* mapped);
bool QMetaAssociation_canGetKeyAtIterator(const QMetaAssociation* self);
void QMetaAssociation_keyAtIterator(const QMetaAssociation* self, const void* iterator, void* key);
bool QMetaAssociation_canGetKeyAtConstIterator(const QMetaAssociation* self);
void QMetaAssociation_keyAtConstIterator(const QMetaAssociation* self, const void* iterator, void* key);
bool QMetaAssociation_canGetMappedAtIterator(const QMetaAssociation* self);
void QMetaAssociation_mappedAtIterator(const QMetaAssociation* self, const void* iterator, void* mapped);
bool QMetaAssociation_canGetMappedAtConstIterator(const QMetaAssociation* self);
void QMetaAssociation_mappedAtConstIterator(const QMetaAssociation* self, const void* iterator, void* mapped);
bool QMetaAssociation_canSetMappedAtIterator(const QMetaAssociation* self);
void QMetaAssociation_setMappedAtIterator(const QMetaAssociation* self, const void* iterator, const void* mapped);
bool QMetaAssociation_canCreateIteratorAtKey(const QMetaAssociation* self);
void* QMetaAssociation_createIteratorAtKey(const QMetaAssociation* self, void* container, const void* key);
bool QMetaAssociation_canCreateConstIteratorAtKey(const QMetaAssociation* self);
void* QMetaAssociation_createConstIteratorAtKey(const QMetaAssociation* self, const void* container, const void* key);

void QMetaAssociation_delete(QMetaAssociation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
