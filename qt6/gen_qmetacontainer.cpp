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

bool QMetaContainer_HasInputIterator(const QMetaContainer* self) {
	return self->hasInputIterator();
}

bool QMetaContainer_HasForwardIterator(const QMetaContainer* self) {
	return self->hasForwardIterator();
}

bool QMetaContainer_HasBidirectionalIterator(const QMetaContainer* self) {
	return self->hasBidirectionalIterator();
}

bool QMetaContainer_HasRandomAccessIterator(const QMetaContainer* self) {
	return self->hasRandomAccessIterator();
}

bool QMetaContainer_HasSize(const QMetaContainer* self) {
	return self->hasSize();
}

ptrdiff_t QMetaContainer_Size(const QMetaContainer* self, const void* container) {
	qsizetype _ret = self->size(container);
	return static_cast<ptrdiff_t>(_ret);
}

bool QMetaContainer_CanClear(const QMetaContainer* self) {
	return self->canClear();
}

void QMetaContainer_Clear(const QMetaContainer* self, void* container) {
	self->clear(container);
}

bool QMetaContainer_HasIterator(const QMetaContainer* self) {
	return self->hasIterator();
}

void* QMetaContainer_Begin(const QMetaContainer* self, void* container) {
	return self->begin(container);
}

void* QMetaContainer_End(const QMetaContainer* self, void* container) {
	return self->end(container);
}

void QMetaContainer_DestroyIterator(const QMetaContainer* self, const void* iterator) {
	self->destroyIterator(iterator);
}

bool QMetaContainer_CompareIterator(const QMetaContainer* self, const void* i, const void* j) {
	return self->compareIterator(i, j);
}

void QMetaContainer_CopyIterator(const QMetaContainer* self, void* target, const void* source) {
	self->copyIterator(target, source);
}

void QMetaContainer_AdvanceIterator(const QMetaContainer* self, void* iterator, ptrdiff_t step) {
	self->advanceIterator(iterator, (qsizetype)(step));
}

ptrdiff_t QMetaContainer_DiffIterator(const QMetaContainer* self, const void* i, const void* j) {
	qsizetype _ret = self->diffIterator(i, j);
	return static_cast<ptrdiff_t>(_ret);
}

bool QMetaContainer_HasConstIterator(const QMetaContainer* self) {
	return self->hasConstIterator();
}

void* QMetaContainer_ConstBegin(const QMetaContainer* self, const void* container) {
	return self->constBegin(container);
}

void* QMetaContainer_ConstEnd(const QMetaContainer* self, const void* container) {
	return self->constEnd(container);
}

void QMetaContainer_DestroyConstIterator(const QMetaContainer* self, const void* iterator) {
	self->destroyConstIterator(iterator);
}

bool QMetaContainer_CompareConstIterator(const QMetaContainer* self, const void* i, const void* j) {
	return self->compareConstIterator(i, j);
}

void QMetaContainer_CopyConstIterator(const QMetaContainer* self, void* target, const void* source) {
	self->copyConstIterator(target, source);
}

void QMetaContainer_AdvanceConstIterator(const QMetaContainer* self, void* iterator, ptrdiff_t step) {
	self->advanceConstIterator(iterator, (qsizetype)(step));
}

ptrdiff_t QMetaContainer_DiffConstIterator(const QMetaContainer* self, const void* i, const void* j) {
	qsizetype _ret = self->diffConstIterator(i, j);
	return static_cast<ptrdiff_t>(_ret);
}

void QMetaContainer_Delete(QMetaContainer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMetaContainer*>( self );
	} else {
		delete self;
	}
}

QMetaSequence* QMetaSequence_new() {
	return new QMetaSequence();
}

void QMetaSequence_virtbase(QMetaSequence* src, QMetaContainer** outptr_QMetaContainer) {
	*outptr_QMetaContainer = static_cast<QMetaContainer*>(src);
}

QMetaType* QMetaSequence_ValueMetaType(const QMetaSequence* self) {
	return new QMetaType(self->valueMetaType());
}

bool QMetaSequence_IsSortable(const QMetaSequence* self) {
	return self->isSortable();
}

bool QMetaSequence_CanAddValueAtBegin(const QMetaSequence* self) {
	return self->canAddValueAtBegin();
}

void QMetaSequence_AddValueAtBegin(const QMetaSequence* self, void* container, const void* value) {
	self->addValueAtBegin(container, value);
}

bool QMetaSequence_CanAddValueAtEnd(const QMetaSequence* self) {
	return self->canAddValueAtEnd();
}

void QMetaSequence_AddValueAtEnd(const QMetaSequence* self, void* container, const void* value) {
	self->addValueAtEnd(container, value);
}

bool QMetaSequence_CanRemoveValueAtBegin(const QMetaSequence* self) {
	return self->canRemoveValueAtBegin();
}

void QMetaSequence_RemoveValueAtBegin(const QMetaSequence* self, void* container) {
	self->removeValueAtBegin(container);
}

bool QMetaSequence_CanRemoveValueAtEnd(const QMetaSequence* self) {
	return self->canRemoveValueAtEnd();
}

void QMetaSequence_RemoveValueAtEnd(const QMetaSequence* self, void* container) {
	self->removeValueAtEnd(container);
}

bool QMetaSequence_CanGetValueAtIndex(const QMetaSequence* self) {
	return self->canGetValueAtIndex();
}

void QMetaSequence_ValueAtIndex(const QMetaSequence* self, const void* container, ptrdiff_t index, void* result) {
	self->valueAtIndex(container, (qsizetype)(index), result);
}

bool QMetaSequence_CanSetValueAtIndex(const QMetaSequence* self) {
	return self->canSetValueAtIndex();
}

void QMetaSequence_SetValueAtIndex(const QMetaSequence* self, void* container, ptrdiff_t index, const void* value) {
	self->setValueAtIndex(container, (qsizetype)(index), value);
}

bool QMetaSequence_CanAddValue(const QMetaSequence* self) {
	return self->canAddValue();
}

void QMetaSequence_AddValue(const QMetaSequence* self, void* container, const void* value) {
	self->addValue(container, value);
}

bool QMetaSequence_CanRemoveValue(const QMetaSequence* self) {
	return self->canRemoveValue();
}

void QMetaSequence_RemoveValue(const QMetaSequence* self, void* container) {
	self->removeValue(container);
}

bool QMetaSequence_CanGetValueAtIterator(const QMetaSequence* self) {
	return self->canGetValueAtIterator();
}

void QMetaSequence_ValueAtIterator(const QMetaSequence* self, const void* iterator, void* result) {
	self->valueAtIterator(iterator, result);
}

bool QMetaSequence_CanSetValueAtIterator(const QMetaSequence* self) {
	return self->canSetValueAtIterator();
}

void QMetaSequence_SetValueAtIterator(const QMetaSequence* self, const void* iterator, const void* value) {
	self->setValueAtIterator(iterator, value);
}

bool QMetaSequence_CanInsertValueAtIterator(const QMetaSequence* self) {
	return self->canInsertValueAtIterator();
}

void QMetaSequence_InsertValueAtIterator(const QMetaSequence* self, void* container, const void* iterator, const void* value) {
	self->insertValueAtIterator(container, iterator, value);
}

bool QMetaSequence_CanEraseValueAtIterator(const QMetaSequence* self) {
	return self->canEraseValueAtIterator();
}

void QMetaSequence_EraseValueAtIterator(const QMetaSequence* self, void* container, const void* iterator) {
	self->eraseValueAtIterator(container, iterator);
}

bool QMetaSequence_CanEraseRangeAtIterator(const QMetaSequence* self) {
	return self->canEraseRangeAtIterator();
}

void QMetaSequence_EraseRangeAtIterator(const QMetaSequence* self, void* container, const void* iterator1, const void* iterator2) {
	self->eraseRangeAtIterator(container, iterator1, iterator2);
}

bool QMetaSequence_CanGetValueAtConstIterator(const QMetaSequence* self) {
	return self->canGetValueAtConstIterator();
}

void QMetaSequence_ValueAtConstIterator(const QMetaSequence* self, const void* iterator, void* result) {
	self->valueAtConstIterator(iterator, result);
}

void QMetaSequence_Delete(QMetaSequence* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMetaSequence*>( self );
	} else {
		delete self;
	}
}

QMetaAssociation* QMetaAssociation_new() {
	return new QMetaAssociation();
}

void QMetaAssociation_virtbase(QMetaAssociation* src, QMetaContainer** outptr_QMetaContainer) {
	*outptr_QMetaContainer = static_cast<QMetaContainer*>(src);
}

QMetaType* QMetaAssociation_KeyMetaType(const QMetaAssociation* self) {
	return new QMetaType(self->keyMetaType());
}

QMetaType* QMetaAssociation_MappedMetaType(const QMetaAssociation* self) {
	return new QMetaType(self->mappedMetaType());
}

bool QMetaAssociation_CanInsertKey(const QMetaAssociation* self) {
	return self->canInsertKey();
}

void QMetaAssociation_InsertKey(const QMetaAssociation* self, void* container, const void* key) {
	self->insertKey(container, key);
}

bool QMetaAssociation_CanRemoveKey(const QMetaAssociation* self) {
	return self->canRemoveKey();
}

void QMetaAssociation_RemoveKey(const QMetaAssociation* self, void* container, const void* key) {
	self->removeKey(container, key);
}

bool QMetaAssociation_CanContainsKey(const QMetaAssociation* self) {
	return self->canContainsKey();
}

bool QMetaAssociation_ContainsKey(const QMetaAssociation* self, const void* container, const void* key) {
	return self->containsKey(container, key);
}

bool QMetaAssociation_CanGetMappedAtKey(const QMetaAssociation* self) {
	return self->canGetMappedAtKey();
}

void QMetaAssociation_MappedAtKey(const QMetaAssociation* self, const void* container, const void* key, void* mapped) {
	self->mappedAtKey(container, key, mapped);
}

bool QMetaAssociation_CanSetMappedAtKey(const QMetaAssociation* self) {
	return self->canSetMappedAtKey();
}

void QMetaAssociation_SetMappedAtKey(const QMetaAssociation* self, void* container, const void* key, const void* mapped) {
	self->setMappedAtKey(container, key, mapped);
}

bool QMetaAssociation_CanGetKeyAtIterator(const QMetaAssociation* self) {
	return self->canGetKeyAtIterator();
}

void QMetaAssociation_KeyAtIterator(const QMetaAssociation* self, const void* iterator, void* key) {
	self->keyAtIterator(iterator, key);
}

bool QMetaAssociation_CanGetKeyAtConstIterator(const QMetaAssociation* self) {
	return self->canGetKeyAtConstIterator();
}

void QMetaAssociation_KeyAtConstIterator(const QMetaAssociation* self, const void* iterator, void* key) {
	self->keyAtConstIterator(iterator, key);
}

bool QMetaAssociation_CanGetMappedAtIterator(const QMetaAssociation* self) {
	return self->canGetMappedAtIterator();
}

void QMetaAssociation_MappedAtIterator(const QMetaAssociation* self, const void* iterator, void* mapped) {
	self->mappedAtIterator(iterator, mapped);
}

bool QMetaAssociation_CanGetMappedAtConstIterator(const QMetaAssociation* self) {
	return self->canGetMappedAtConstIterator();
}

void QMetaAssociation_MappedAtConstIterator(const QMetaAssociation* self, const void* iterator, void* mapped) {
	self->mappedAtConstIterator(iterator, mapped);
}

bool QMetaAssociation_CanSetMappedAtIterator(const QMetaAssociation* self) {
	return self->canSetMappedAtIterator();
}

void QMetaAssociation_SetMappedAtIterator(const QMetaAssociation* self, const void* iterator, const void* mapped) {
	self->setMappedAtIterator(iterator, mapped);
}

bool QMetaAssociation_CanCreateIteratorAtKey(const QMetaAssociation* self) {
	return self->canCreateIteratorAtKey();
}

void* QMetaAssociation_CreateIteratorAtKey(const QMetaAssociation* self, void* container, const void* key) {
	return self->createIteratorAtKey(container, key);
}

bool QMetaAssociation_CanCreateConstIteratorAtKey(const QMetaAssociation* self) {
	return self->canCreateConstIteratorAtKey();
}

void* QMetaAssociation_CreateConstIteratorAtKey(const QMetaAssociation* self, const void* container, const void* key) {
	return self->createConstIteratorAtKey(container, key);
}

void QMetaAssociation_Delete(QMetaAssociation* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMetaAssociation*>( self );
	} else {
		delete self;
	}
}

