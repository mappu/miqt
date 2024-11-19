#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultItem
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultIteratorBase
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultStoreBase
#include <qresultstore.h>
#include "gen_qresultstore.h"
#include "_cgo_export.h"

void QtPrivate__ResultItem_new(const void* _result, int _count, QtPrivate__ResultItem** outptr_QtPrivate__ResultItem) {
	QtPrivate::ResultItem* ret = new QtPrivate::ResultItem(_result, static_cast<int>(_count));
	*outptr_QtPrivate__ResultItem = ret;
}

void QtPrivate__ResultItem_new2(const void* _result, QtPrivate__ResultItem** outptr_QtPrivate__ResultItem) {
	QtPrivate::ResultItem* ret = new QtPrivate::ResultItem(_result);
	*outptr_QtPrivate__ResultItem = ret;
}

void QtPrivate__ResultItem_new3(QtPrivate__ResultItem** outptr_QtPrivate__ResultItem) {
	QtPrivate::ResultItem* ret = new QtPrivate::ResultItem();
	*outptr_QtPrivate__ResultItem = ret;
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

void QtPrivate__ResultItem_Delete(QtPrivate__ResultItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QtPrivate::ResultItem*>( self );
	} else {
		delete self;
	}
}

void QtPrivate__ResultIteratorBase_new(QtPrivate__ResultIteratorBase** outptr_QtPrivate__ResultIteratorBase) {
	QtPrivate::ResultIteratorBase* ret = new QtPrivate::ResultIteratorBase();
	*outptr_QtPrivate__ResultIteratorBase = ret;
}

int QtPrivate__ResultIteratorBase_VectorIndex(const QtPrivate__ResultIteratorBase* self) {
	return self->vectorIndex();
}

int QtPrivate__ResultIteratorBase_ResultIndex(const QtPrivate__ResultIteratorBase* self) {
	return self->resultIndex();
}

int QtPrivate__ResultIteratorBase_BatchSize(const QtPrivate__ResultIteratorBase* self) {
	return self->batchSize();
}

void QtPrivate__ResultIteratorBase_BatchedAdvance(QtPrivate__ResultIteratorBase* self) {
	self->batchedAdvance();
}

bool QtPrivate__ResultIteratorBase_IsVector(const QtPrivate__ResultIteratorBase* self) {
	return self->isVector();
}

bool QtPrivate__ResultIteratorBase_CanIncrementVectorIndex(const QtPrivate__ResultIteratorBase* self) {
	return self->canIncrementVectorIndex();
}

void QtPrivate__ResultIteratorBase_Delete(QtPrivate__ResultIteratorBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QtPrivate::ResultIteratorBase*>( self );
	} else {
		delete self;
	}
}

void QtPrivate__ResultStoreBase_new(QtPrivate__ResultStoreBase** outptr_QtPrivate__ResultStoreBase) {
	QtPrivate::ResultStoreBase* ret = new QtPrivate::ResultStoreBase();
	*outptr_QtPrivate__ResultStoreBase = ret;
}

void QtPrivate__ResultStoreBase_SetFilterMode(QtPrivate__ResultStoreBase* self, bool enable) {
	self->setFilterMode(enable);
}

bool QtPrivate__ResultStoreBase_FilterMode(const QtPrivate__ResultStoreBase* self) {
	return self->filterMode();
}

int QtPrivate__ResultStoreBase_AddResult(QtPrivate__ResultStoreBase* self, int index, const void* result) {
	return self->addResult(static_cast<int>(index), result);
}

int QtPrivate__ResultStoreBase_AddResults(QtPrivate__ResultStoreBase* self, int index, const void* results, int vectorSize, int logicalCount) {
	return self->addResults(static_cast<int>(index), results, static_cast<int>(vectorSize), static_cast<int>(logicalCount));
}

bool QtPrivate__ResultStoreBase_HasNextResult(const QtPrivate__ResultStoreBase* self) {
	return self->hasNextResult();
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

void QtPrivate__ResultStoreBase_Delete(QtPrivate__ResultStoreBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QtPrivate::ResultStoreBase*>( self );
	} else {
		delete self;
	}
}

