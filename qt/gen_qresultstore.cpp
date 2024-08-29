#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultItem
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultIteratorBase
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultStoreBase
#include "qresultstore.h"

#include "gen_qresultstore.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QtPrivate__ResultItem* QtPrivate__ResultItem_new() {
	return new QtPrivate::ResultItem();
}

bool QtPrivate__ResultItem_IsValid(QtPrivate__ResultItem* self) {
	return const_cast<const QtPrivate::ResultItem*>(self)->isValid();
}

bool QtPrivate__ResultItem_IsVector(QtPrivate__ResultItem* self) {
	return const_cast<const QtPrivate::ResultItem*>(self)->isVector();
}

int QtPrivate__ResultItem_Count(QtPrivate__ResultItem* self) {
	return const_cast<const QtPrivate::ResultItem*>(self)->count();
}

void QtPrivate__ResultItem_Delete(QtPrivate__ResultItem* self) {
	delete self;
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultIteratorBase_new() {
	return new QtPrivate::ResultIteratorBase();
}

int QtPrivate__ResultIteratorBase_VectorIndex(QtPrivate__ResultIteratorBase* self) {
	return const_cast<const QtPrivate::ResultIteratorBase*>(self)->vectorIndex();
}

int QtPrivate__ResultIteratorBase_ResultIndex(QtPrivate__ResultIteratorBase* self) {
	return const_cast<const QtPrivate::ResultIteratorBase*>(self)->resultIndex();
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultIteratorBase_OperatorPlusPlus(QtPrivate__ResultIteratorBase* self) {
	QtPrivate::ResultIteratorBase ret = self->operator++();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QtPrivate::ResultIteratorBase*>(new QtPrivate::ResultIteratorBase(ret));
}

int QtPrivate__ResultIteratorBase_BatchSize(QtPrivate__ResultIteratorBase* self) {
	return const_cast<const QtPrivate::ResultIteratorBase*>(self)->batchSize();
}

void QtPrivate__ResultIteratorBase_BatchedAdvance(QtPrivate__ResultIteratorBase* self) {
	self->batchedAdvance();
}

bool QtPrivate__ResultIteratorBase_OperatorEqual(QtPrivate__ResultIteratorBase* self, QtPrivate__ResultIteratorBase* other) {
	return const_cast<const QtPrivate::ResultIteratorBase*>(self)->operator==(*other);
}

bool QtPrivate__ResultIteratorBase_OperatorNotEqual(QtPrivate__ResultIteratorBase* self, QtPrivate__ResultIteratorBase* other) {
	return const_cast<const QtPrivate::ResultIteratorBase*>(self)->operator!=(*other);
}

bool QtPrivate__ResultIteratorBase_IsVector(QtPrivate__ResultIteratorBase* self) {
	return const_cast<const QtPrivate::ResultIteratorBase*>(self)->isVector();
}

bool QtPrivate__ResultIteratorBase_CanIncrementVectorIndex(QtPrivate__ResultIteratorBase* self) {
	return const_cast<const QtPrivate::ResultIteratorBase*>(self)->canIncrementVectorIndex();
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

bool QtPrivate__ResultStoreBase_FilterMode(QtPrivate__ResultStoreBase* self) {
	return const_cast<const QtPrivate::ResultStoreBase*>(self)->filterMode();
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultStoreBase_Begin(QtPrivate__ResultStoreBase* self) {
	QtPrivate::ResultIteratorBase ret = const_cast<const QtPrivate::ResultStoreBase*>(self)->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QtPrivate::ResultIteratorBase*>(new QtPrivate::ResultIteratorBase(ret));
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultStoreBase_End(QtPrivate__ResultStoreBase* self) {
	QtPrivate::ResultIteratorBase ret = const_cast<const QtPrivate::ResultStoreBase*>(self)->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QtPrivate::ResultIteratorBase*>(new QtPrivate::ResultIteratorBase(ret));
}

bool QtPrivate__ResultStoreBase_HasNextResult(QtPrivate__ResultStoreBase* self) {
	return const_cast<const QtPrivate::ResultStoreBase*>(self)->hasNextResult();
}

QtPrivate__ResultIteratorBase* QtPrivate__ResultStoreBase_ResultAt(QtPrivate__ResultStoreBase* self, int index) {
	QtPrivate::ResultIteratorBase ret = const_cast<const QtPrivate::ResultStoreBase*>(self)->resultAt(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QtPrivate::ResultIteratorBase*>(new QtPrivate::ResultIteratorBase(ret));
}

bool QtPrivate__ResultStoreBase_Contains(QtPrivate__ResultStoreBase* self, int index) {
	return const_cast<const QtPrivate::ResultStoreBase*>(self)->contains(static_cast<int>(index));
}

int QtPrivate__ResultStoreBase_Count(QtPrivate__ResultStoreBase* self) {
	return const_cast<const QtPrivate::ResultStoreBase*>(self)->count();
}

int QtPrivate__ResultStoreBase_AddCanceledResult(QtPrivate__ResultStoreBase* self, int index) {
	return self->addCanceledResult(static_cast<int>(index));
}

void QtPrivate__ResultStoreBase_Delete(QtPrivate__ResultStoreBase* self) {
	delete self;
}

