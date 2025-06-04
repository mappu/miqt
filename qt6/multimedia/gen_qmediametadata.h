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
QVariant* QMediaMetaData_value(const QMediaMetaData* self, int k);
void QMediaMetaData_insert(QMediaMetaData* self, int k, QVariant* value);
void QMediaMetaData_remove(QMediaMetaData* self, int k);
struct miqt_array /* of int */  QMediaMetaData_keys(const QMediaMetaData* self);
QVariant* QMediaMetaData_operatorSubscript(QMediaMetaData* self, int k);
void QMediaMetaData_clear(QMediaMetaData* self);
bool QMediaMetaData_isEmpty(const QMediaMetaData* self);
struct miqt_string QMediaMetaData_stringValue(const QMediaMetaData* self, int k);
struct miqt_string QMediaMetaData_metaDataKeyToString(int k);

void QMediaMetaData_delete(QMediaMetaData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
