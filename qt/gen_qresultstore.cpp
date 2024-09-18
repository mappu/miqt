#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultItem
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultIteratorBase
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultStoreBase
#include "qresultstore.h"
#include "gen_qresultstore.h"
#include "_cgo_export.h"

QtPrivate__ResultItem* QtPrivate__ResultItem_new() {
	return new QtPrivate::ResultItem();
}

bool QtPrivate__ResultItem_IsValid(const QtPrivate__ResultItem* self) {
	return self->isValid();
}

bool QtPrivate__ResultItem_IsVector(const QtPrivate__ResultItem* self) {
	return self->isVector();
}

int QtPrivate__ResultItem_Count(const QtPrivate__ResultItem* self) {
	return self->count();
}

void QtPrivate__ResultItem_Delete(QtPrivate__ResultItem* self) {
	delete self;
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultIteratorBase_new() {
	return new QtPrivate::ResultIteratorBase();
}

int QtPrivate__ResultIteratorBase_VectorIndex(const QtPrivate__ResultIteratorBase* self) {
	return self->vectorIndex();
}

int QtPrivate__ResultIteratorBase_ResultIndex(const QtPrivate__ResultIteratorBase* self) {
	return self->resultIndex();
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultIteratorBase_OperatorPlusPlus(QtPrivate__ResultIteratorBase* self) {
	return new QtPrivate::ResultIteratorBase(self->operator++());
}

int QtPrivate__ResultIteratorBase_BatchSize(const QtPrivate__ResultIteratorBase* self) {
	return self->batchSize();
}

void QtPrivate__ResultIteratorBase_BatchedAdvance(QtPrivate__ResultIteratorBase* self) {
	self->batchedAdvance();
}

bool QtPrivate__ResultIteratorBase_OperatorEqual(const QtPrivate__ResultIteratorBase* self, QtPrivate__ResultIteratorBase* other) {
	return self->operator==(*other);
}

bool QtPrivate__ResultIteratorBase_OperatorNotEqual(const QtPrivate__ResultIteratorBase* self, QtPrivate__ResultIteratorBase* other) {
	return self->operator!=(*other);
}

bool QtPrivate__ResultIteratorBase_IsVector(const QtPrivate__ResultIteratorBase* self) {
	return self->isVector();
}

bool QtPrivate__ResultIteratorBase_CanIncrementVectorIndex(const QtPrivate__ResultIteratorBase* self) {
	return self->canIncrementVectorIndex();
}

void QtPrivate__ResultIteratorBase_Delete(QtPrivate__ResultIteratorBase* self) {
	delete self;
}

QtPrivate__ResultStoreBase* QtPrivate__ResultStoreBase_new() {
	return new QtPrivate::ResultStoreBase();
}

QtPrivate__ResultStoreBase* QtPrivate__ResultStoreBase_new2(QtPrivate__ResultStoreBase* param1) {
	return new QtPrivate::ResultStoreBase(*param1);
}

void QtPrivate__ResultStoreBase_SetFilterMode(QtPrivate__ResultStoreBase* self, bool enable) {
	self->setFilterMode(enable);
}

bool QtPrivate__ResultStoreBase_FilterMode(const QtPrivate__ResultStoreBase* self) {
	return self->filterMode();
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultStoreBase_Begin(const QtPrivate__ResultStoreBase* self) {
	return new QtPrivate::ResultIteratorBase(self->begin());
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultStoreBase_End(const QtPrivate__ResultStoreBase* self) {
	return new QtPrivate::ResultIteratorBase(self->end());
}

bool QtPrivate__ResultStoreBase_HasNextResult(const QtPrivate__ResultStoreBase* self) {
	return self->hasNextResult();
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultStoreBase_ResultAt(const QtPrivate__ResultStoreBase* self, int index) {
	return new QtPrivate::ResultIteratorBase(self->resultAt(static_cast<int>(index)));
}

bool QtPrivate__ResultStoreBase_Contains(const QtPrivate__ResultStoreBase* self, int index) {
	return self->contains(static_cast<int>(index));
}

int QtPrivate__ResultStoreBase_Count(const QtPrivate__ResultStoreBase* self) {
	return self->count();
}

int QtPrivate__ResultStoreBase_AddCanceledResult(QtPrivate__ResultStoreBase* self, int index) {
	return self->addCanceledResult(static_cast<int>(index));
}

void QtPrivate__ResultStoreBase_OperatorAssign(QtPrivate__ResultStoreBase* self, QtPrivate__ResultStoreBase* param1) {
	self->operator=(*param1);
}

void QtPrivate__ResultStoreBase_Delete(QtPrivate__ResultStoreBase* self) {
	delete self;
}

