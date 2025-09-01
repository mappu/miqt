#pragma once
#ifndef MIQT_QT_SQL_GEN_QSQLRECORD_H
#define MIQT_QT_SQL_GEN_QSQLRECORD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSqlField;
class QSqlRecord;
class QVariant;
#else
typedef struct QSqlField QSqlField;
typedef struct QSqlRecord QSqlRecord;
typedef struct QVariant QVariant;
#endif

QSqlRecord* QSqlRecord_new();
QSqlRecord* QSqlRecord_new2(QSqlRecord* other);
void QSqlRecord_operatorAssign(QSqlRecord* self, QSqlRecord* other);
bool QSqlRecord_operatorEqual(const QSqlRecord* self, QSqlRecord* other);
bool QSqlRecord_operatorNotEqual(const QSqlRecord* self, QSqlRecord* other);
QVariant* QSqlRecord_value(const QSqlRecord* self, int i);
QVariant* QSqlRecord_valueWithName(const QSqlRecord* self, struct miqt_string name);
void QSqlRecord_setValue(QSqlRecord* self, int i, QVariant* val);
void QSqlRecord_setValue2(QSqlRecord* self, struct miqt_string name, QVariant* val);
void QSqlRecord_setNull(QSqlRecord* self, int i);
void QSqlRecord_setNullWithName(QSqlRecord* self, struct miqt_string name);
bool QSqlRecord_isNull(const QSqlRecord* self, int i);
bool QSqlRecord_isNullWithName(const QSqlRecord* self, struct miqt_string name);
int QSqlRecord_indexOf(const QSqlRecord* self, struct miqt_string name);
struct miqt_string QSqlRecord_fieldName(const QSqlRecord* self, int i);
QSqlField* QSqlRecord_field(const QSqlRecord* self, int i);
QSqlField* QSqlRecord_fieldWithName(const QSqlRecord* self, struct miqt_string name);
bool QSqlRecord_isGenerated(const QSqlRecord* self, int i);
bool QSqlRecord_isGeneratedWithName(const QSqlRecord* self, struct miqt_string name);
void QSqlRecord_setGenerated(QSqlRecord* self, struct miqt_string name, bool generated);
void QSqlRecord_setGenerated2(QSqlRecord* self, int i, bool generated);
void QSqlRecord_append(QSqlRecord* self, QSqlField* field);
void QSqlRecord_replace(QSqlRecord* self, int pos, QSqlField* field);
void QSqlRecord_insert(QSqlRecord* self, int pos, QSqlField* field);
void QSqlRecord_remove(QSqlRecord* self, int pos);
bool QSqlRecord_isEmpty(const QSqlRecord* self);
bool QSqlRecord_contains(const QSqlRecord* self, struct miqt_string name);
void QSqlRecord_clear(QSqlRecord* self);
void QSqlRecord_clearValues(QSqlRecord* self);
int QSqlRecord_count(const QSqlRecord* self);
QSqlRecord* QSqlRecord_keyValues(const QSqlRecord* self, QSqlRecord* keyFields);

void QSqlRecord_delete(QSqlRecord* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
