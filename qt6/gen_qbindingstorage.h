#pragma once
#ifndef MIQT_QT6_GEN_QBINDINGSTORAGE_H
#define MIQT_QT6_GEN_QBINDINGSTORAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBindingStatus;
class QBindingStorage;
class QUntypedPropertyData;
#else
typedef struct QBindingStatus QBindingStatus;
typedef struct QBindingStorage QBindingStorage;
typedef struct QUntypedPropertyData QUntypedPropertyData;
#endif

void QBindingStatus_Delete(QBindingStatus* self, bool isSubclass);

QBindingStorage* QBindingStorage_new();
bool QBindingStorage_IsEmpty(QBindingStorage* self);
bool QBindingStorage_IsValid(const QBindingStorage* self);
void QBindingStorage_RegisterDependency(const QBindingStorage* self, QUntypedPropertyData* data);
void QBindingStorage_Delete(QBindingStorage* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
