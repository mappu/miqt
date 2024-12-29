#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QMEDIAMETADATA_H
#define MIQT_QT6_MULTIMEDIA_GEN_QMEDIAMETADATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaMetaData;
class QVariant;
#else
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QVariant QVariant;
#endif

QMediaMetaData* QMediaMetaData_new(QMediaMetaData* param1);
QMediaMetaData* QMediaMetaData_new2();
QVariant* QMediaMetaData_Value(const QMediaMetaData* self, int k);
void QMediaMetaData_Insert(QMediaMetaData* self, int k, QVariant* value);
void QMediaMetaData_Remove(QMediaMetaData* self, int k);
struct miqt_array /* of int */  QMediaMetaData_Keys(const QMediaMetaData* self);
QVariant* QMediaMetaData_OperatorSubscript(QMediaMetaData* self, int k);
void QMediaMetaData_Clear(QMediaMetaData* self);
bool QMediaMetaData_IsEmpty(const QMediaMetaData* self);
struct miqt_string QMediaMetaData_StringValue(const QMediaMetaData* self, int k);
struct miqt_string QMediaMetaData_MetaDataKeyToString(int k);
void QMediaMetaData_Delete(QMediaMetaData* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
