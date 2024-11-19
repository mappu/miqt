#pragma once
#ifndef MIQT_QT6_GEN_QRESULTSTORE_H
#define MIQT_QT6_GEN_QRESULTSTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultItem)
typedef QtPrivate::ResultItem QtPrivate__ResultItem;
#else
class QtPrivate__ResultItem;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultIteratorBase)
typedef QtPrivate::ResultIteratorBase QtPrivate__ResultIteratorBase;
#else
class QtPrivate__ResultIteratorBase;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ResultStoreBase)
typedef QtPrivate::ResultStoreBase QtPrivate__ResultStoreBase;
#else
class QtPrivate__ResultStoreBase;
#endif
#else
typedef struct QtPrivate__ResultItem QtPrivate__ResultItem;
typedef struct QtPrivate__ResultIteratorBase QtPrivate__ResultIteratorBase;
typedef struct QtPrivate__ResultStoreBase QtPrivate__ResultStoreBase;
#endif

void QtPrivate__ResultItem_new(const void* _result, int _count, QtPrivate__ResultItem** outptr_QtPrivate__ResultItem);
void QtPrivate__ResultItem_new2(const void* _result, QtPrivate__ResultItem** outptr_QtPrivate__ResultItem);
void QtPrivate__ResultItem_new3(QtPrivate__ResultItem** outptr_QtPrivate__ResultItem);
bool QtPrivate__ResultItem_IsValid(const QtPrivate__ResultItem* self);
bool QtPrivate__ResultItem_IsVector(const QtPrivate__ResultItem* self);
int QtPrivate__ResultItem_Count(const QtPrivate__ResultItem* self);
void QtPrivate__ResultItem_Delete(QtPrivate__ResultItem* self, bool isSubclass);

void QtPrivate__ResultIteratorBase_new(QtPrivate__ResultIteratorBase** outptr_QtPrivate__ResultIteratorBase);
int QtPrivate__ResultIteratorBase_VectorIndex(const QtPrivate__ResultIteratorBase* self);
int QtPrivate__ResultIteratorBase_ResultIndex(const QtPrivate__ResultIteratorBase* self);
int QtPrivate__ResultIteratorBase_BatchSize(const QtPrivate__ResultIteratorBase* self);
void QtPrivate__ResultIteratorBase_BatchedAdvance(QtPrivate__ResultIteratorBase* self);
bool QtPrivate__ResultIteratorBase_IsVector(const QtPrivate__ResultIteratorBase* self);
bool QtPrivate__ResultIteratorBase_CanIncrementVectorIndex(const QtPrivate__ResultIteratorBase* self);
bool QtPrivate__ResultIteratorBase_IsValid(const QtPrivate__ResultIteratorBase* self);
void QtPrivate__ResultIteratorBase_Delete(QtPrivate__ResultIteratorBase* self, bool isSubclass);

void QtPrivate__ResultStoreBase_new(QtPrivate__ResultStoreBase** outptr_QtPrivate__ResultStoreBase);
void QtPrivate__ResultStoreBase_SetFilterMode(QtPrivate__ResultStoreBase* self, bool enable);
bool QtPrivate__ResultStoreBase_FilterMode(const QtPrivate__ResultStoreBase* self);
int QtPrivate__ResultStoreBase_AddResult(QtPrivate__ResultStoreBase* self, int index, const void* result);
int QtPrivate__ResultStoreBase_AddResults(QtPrivate__ResultStoreBase* self, int index, const void* results, int vectorSize, int logicalCount);
bool QtPrivate__ResultStoreBase_HasNextResult(const QtPrivate__ResultStoreBase* self);
bool QtPrivate__ResultStoreBase_Contains(const QtPrivate__ResultStoreBase* self, int index);
int QtPrivate__ResultStoreBase_Count(const QtPrivate__ResultStoreBase* self);
int QtPrivate__ResultStoreBase_AddCanceledResult(QtPrivate__ResultStoreBase* self, int index);
void QtPrivate__ResultStoreBase_Delete(QtPrivate__ResultStoreBase* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
