#include <QMetaAssociation>
#include <QMetaContainer>
#include <QMetaSequence>
#include <QMetaType>
#include <qmetacontainer.h>
#include "gen_qmetacontainer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMetaContainer* QMetaContainer_new() {
	return new QMetaContainer();
}

QMetaContainer* QMetaContainer_new2(QMetaContainer* param1) {
	return new QMetaContainer(*param1);
}

bool QMetaContainer_hasInputIterator(const QMetaContainer* self) {
	return self->hasInputIterator();
}

bool QMetaContainer_hasForwardIterator(const QMetaContainer* self) {
	return self->hasForwardIterator();
}

bool QMetaContainer_hasBidirectionalIterator(const QMetaContainer* self) {
	return self->hasBidirectionalIterator();
}

bool QMetaContainer_hasRandomAccessIterator(const QMetaContainer* self) {
	return self->hasRandomAccessIterator();
}

bool QMetaContainer_hasSize(const QMetaContainer* self) {
	return self->hasSize();
}

ptrdiff_t QMetaContainer_size(const QMetaContainer* self, const void* container) {
	qsizetype _ret = self->size(container);
	return static_cast<ptrdiff_t>(_ret);
}

bool QMetaContainer_canClear(const QMetaContainer* self) {
	return self->canClear();
}

void QMetaContainer_clear(const QMetaContainer* self, void* container) {
	self->clear(container);
}

bool QMetaContainer_hasIterator(const QMetaContainer* self) {
	return self->hasIterator();
}

void* QMetaContainer_begin(const QMetaContainer* self, void* container) {
	return self->begin(container);
}

void* QMetaContainer_end(const QMetaContainer* self, void* container) {
	return self->end(container);
}

void QMetaContainer_destroyIterator(const QMetaContainer* self, const void* iterator) {
	self->destroyIterator(iterator);
}

bool QMetaContainer_compareIterator(const QMetaContainer* self, const void* i, const void* j) {
	return self->compareIterator(i, j);
}

void QMetaContainer_copyIterator(const QMetaContainer* self, void* target, const void* source) {
	self->copyIterator(target, source);
}

void QMetaContainer_advanceIterator(const QMetaContainer* self, void* iterator, ptrdiff_t step) {
	self->advanceIterator(iterator, (qsizetype)(step));
}

ptrdiff_t QMetaContainer_diffIterator(const QMetaContainer* self, const void* i, const void* j) {
	qsizetype _ret = self->diffIterator(i, j);
	return static_cast<ptrdiff_t>(_ret);
}

bool QMetaContainer_hasConstIterator(const QMetaContainer* self) {
	return self->hasConstIterator();
}

void* QMetaContainer_constBegin(const QMetaContainer* self, const void* container) {
	return self->constBegin(container);
}

void* QMetaContainer_constEnd(const QMetaContainer* self, const void* container) {
	return self->constEnd(container);
}

void QMetaContainer_destroyConstIterator(const QMetaContainer* self, const void* iterator) {
	self->destroyConstIterator(iterator);
}

bool QMetaContainer_compareConstIterator(const QMetaContainer* self, const void* i, const void* j) {
	return self->compareConstIterator(i, j);
}

void QMetaContainer_copyConstIterator(const QMetaContainer* self, void* target, const void* source) {
	self->copyConstIterator(target, source);
}

void QMetaContainer_advanceConstIterator(const QMetaContainer* self, void* iterator, ptrdiff_t step) {
	self->advanceConstIterator(iterator, (qsizetype)(step));
}

ptrdiff_t QMetaContainer_diffConstIterator(const QMetaContainer* self, const void* i, const void* j) {
	qsizetype _ret = self->diffConstIterator(i, j);
	return static_cast<ptrdiff_t>(_ret);
}

void QMetaContainer_delete(QMetaContainer* self) {
	delete self;
}

QMetaSequence* QMetaSequence_new() {
	return new QMetaSequence();
}

void QMetaSequence_virtbase(QMetaSequence* src, QMetaContainer** outptr_QMetaContainer) {
	*outptr_QMetaContainer = static_cast<QMetaContainer*>(src);
}

QMetaType* QMetaSequence_valueMetaType(const QMetaSequence* self) {
	return new QMetaType(self->valueMetaType());
}

bool QMetaSequence_isSortable(const QMetaSequence* self) {
	return self->isSortable();
}

bool QMetaSequence_canAddValueAtBegin(const QMetaSequence* self) {
	return self->canAddValueAtBegin();
}

void QMetaSequence_addValueAtBegin(const QMetaSequence* self, void* container, const void* value) {
	self->addValueAtBegin(container, value);
}

bool QMetaSequence_canAddValueAtEnd(const QMetaSequence* self) {
	return self->canAddValueAtEnd();
}

void QMetaSequence_addValueAtEnd(const QMetaSequence* self, void* container, const void* value) {
	self->addValueAtEnd(container, value);
}

bool QMetaSequence_canRemoveValueAtBegin(const QMetaSequence* self) {
	return self->canRemoveValueAtBegin();
}

void QMetaSequence_removeValueAtBegin(const QMetaSequence* self, void* container) {
	self->removeValueAtBegin(container);
}

bool QMetaSequence_canRemoveValueAtEnd(const QMetaSequence* self) {
	return self->canRemoveValueAtEnd();
}

void QMetaSequence_removeValueAtEnd(const QMetaSequence* self, void* container) {
	self->removeValueAtEnd(container);
}

bool QMetaSequence_canGetValueAtIndex(const QMetaSequence* self) {
	return self->canGetValueAtIndex();
}

void QMetaSequence_valueAtIndex(const QMetaSequence* self, const void* container, ptrdiff_t index, void* result) {
	self->valueAtIndex(container, (qsizetype)(index), result);
}

bool QMetaSequence_canSetValueAtIndex(const QMetaSequence* self) {
	return self->canSetValueAtIndex();
}

void QMetaSequence_setValueAtIndex(const QMetaSequence* self, void* container, ptrdiff_t index, const void* value) {
	self->setValueAtIndex(container, (qsizetype)(index), value);
}

bool QMetaSequence_canAddValue(const QMetaSequence* self) {
	return self->canAddValue();
}

void QMetaSequence_addValue(const QMetaSequence* self, void* container, const void* value) {
	self->addValue(container, value);
}

bool QMetaSequence_canRemoveValue(const QMetaSequence* self) {
	return self->canRemoveValue();
}

void QMetaSequence_removeValue(const QMetaSequence* self, void* container) {
	self->removeValue(container);
}

bool QMetaSequence_canGetValueAtIterator(const QMetaSequence* self) {
	return self->canGetValueAtIterator();
}

void QMetaSequence_valueAtIterator(const QMetaSequence* self, const void* iterator, void* result) {
	self->valueAtIterator(iterator, result);
}

bool QMetaSequence_canSetValueAtIterator(const QMetaSequence* self) {
	return self->canSetValueAtIterator();
}

void QMetaSequence_setValueAtIterator(const QMetaSequence* self, const void* iterator, const void* value) {
	self->setValueAtIterator(iterator, value);
}

bool QMetaSequence_canInsertValueAtIterator(const QMetaSequence* self) {
	return self->canInsertValueAtIterator();
}

void QMetaSequence_insertValueAtIterator(const QMetaSequence* self, void* container, const void* iterator, const void* value) {
	self->insertValueAtIterator(container, iterator, value);
}

bool QMetaSequence_canEraseValueAtIterator(const QMetaSequence* self) {
	return self->canEraseValueAtIterator();
}

void QMetaSequence_eraseValueAtIterator(const QMetaSequence* self, void* container, const void* iterator) {
	self->eraseValueAtIterator(container, iterator);
}

bool QMetaSequence_canEraseRangeAtIterator(const QMetaSequence* self) {
	return self->canEraseRangeAtIterator();
}

void QMetaSequence_eraseRangeAtIterator(const QMetaSequence* self, void* container, const void* iterator1, const void* iterator2) {
	self->eraseRangeAtIterator(container, iterator1, iterator2);
}

bool QMetaSequence_canGetValueAtConstIterator(const QMetaSequence* self) {
	return self->canGetValueAtConstIterator();
}

void QMetaSequence_valueAtConstIterator(const QMetaSequence* self, const void* iterator, void* result) {
	self->valueAtConstIterator(iterator, result);
}

void QMetaSequence_delete(QMetaSequence* self) {
	delete self;
}

QMetaAssociation* QMetaAssociation_new() {
	return new QMetaAssociation();
}

void QMetaAssociation_virtbase(QMetaAssociation* src, QMetaContainer** outptr_QMetaContainer) {
	*outptr_QMetaContainer = static_cast<QMetaContainer*>(src);
}

QMetaType* QMetaAssociation_keyMetaType(const QMetaAssociation* self) {
	return new QMetaType(self->keyMetaType());
}

QMetaType* QMetaAssociation_mappedMetaType(const QMetaAssociation* self) {
	return new QMetaType(self->mappedMetaType());
}

bool QMetaAssociation_canInsertKey(const QMetaAssociation* self) {
	return self->canInsertKey();
}

void QMetaAssociation_insertKey(const QMetaAssociation* self, void* container, const void* key) {
	self->insertKey(container, key);
}

bool QMetaAssociation_canRemoveKey(const QMetaAssociation* self) {
	return self->canRemoveKey();
}

void QMetaAssociation_removeKey(const QMetaAssociation* self, void* container, const void* key) {
	self->removeKey(container, key);
}

bool QMetaAssociation_canContainsKey(const QMetaAssociation* self) {
	return self->canContainsKey();
}

bool QMetaAssociation_containsKey(const QMetaAssociation* self, const void* container, const void* key) {
	return self->containsKey(container, key);
}

bool QMetaAssociation_canGetMappedAtKey(const QMetaAssociation* self) {
	return self->canGetMappedAtKey();
}

void QMetaAssociation_mappedAtKey(const QMetaAssociation* self, const void* container, const void* key, void* mapped) {
	self->mappedAtKey(container, key, mapped);
}

bool QMetaAssociation_canSetMappedAtKey(const QMetaAssociation* self) {
	return self->canSetMappedAtKey();
}

void QMetaAssociation_setMappedAtKey(const QMetaAssociation* self, void* container, const void* key, const void* mapped) {
	self->setMappedAtKey(container, key, mapped);
}

bool QMetaAssociation_canGetKeyAtIterator(const QMetaAssociation* self) {
	return self->canGetKeyAtIterator();
}

void QMetaAssociation_keyAtIterator(const QMetaAssociation* self, const void* iterator, void* key) {
	self->keyAtIterator(iterator, key);
}

bool QMetaAssociation_canGetKeyAtConstIterator(const QMetaAssociation* self) {
	return self->canGetKeyAtConstIterator();
}

void QMetaAssociation_keyAtConstIterator(const QMetaAssociation* self, const void* iterator, void* key) {
	self->keyAtConstIterator(iterator, key);
}

bool QMetaAssociation_canGetMappedAtIterator(const QMetaAssociation* self) {
	return self->canGetMappedAtIterator();
}

void QMetaAssociation_mappedAtIterator(const QMetaAssociation* self, const void* iterator, void* mapped) {
	self->mappedAtIterator(iterator, mapped);
}

bool QMetaAssociation_canGetMappedAtConstIterator(const QMetaAssociation* self) {
	return self->canGetMappedAtConstIterator();
}

void QMetaAssociation_mappedAtConstIterator(const QMetaAssociation* self, const void* iterator, void* mapped) {
	self->mappedAtConstIterator(iterator, mapped);
}

bool QMetaAssociation_canSetMappedAtIterator(const QMetaAssociation* self) {
	return self->canSetMappedAtIterator();
}

void QMetaAssociation_setMappedAtIterator(const QMetaAssociation* self, const void* iterator, const void* mapped) {
	self->setMappedAtIterator(iterator, mapped);
}

bool QMetaAssociation_canCreateIteratorAtKey(const QMetaAssociation* self) {
	return self->canCreateIteratorAtKey();
}

void* QMetaAssociation_createIteratorAtKey(const QMetaAssociation* self, void* container, const void* key) {
	return self->createIteratorAtKey(container, key);
}

bool QMetaAssociation_canCreateConstIteratorAtKey(const QMetaAssociation* self) {
	return self->canCreateConstIteratorAtKey();
}

void* QMetaAssociation_createConstIteratorAtKey(const QMetaAssociation* self, const void* container, const void* key) {
	return self->createConstIteratorAtKey(container, key);
}

void QMetaAssociation_delete(QMetaAssociation* self) {
	delete self;
}

