#pragma once
#ifndef MIQT_QT6_SQL_GEN_QSQLFIELD_H
#define MIQT_QT6_SQL_GEN_QSQLFIELD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaType;
class QSqlField;
class QVariant;
#else
typedef struct QMetaType QMetaType;
typedef struct QSqlField QSqlField;
typedef struct QVariant QVariant;
#endif

QSqlField* QSqlField_new();
QSqlField* QSqlField_new2(QSqlField* other);
QSqlField* QSqlField_new3(struct miqt_string fieldName, int type);
QSqlField* QSqlField_new4(struct miqt_string fieldName);
QSqlField* QSqlField_new5(struct miqt_string fieldName, QMetaType* type);
QSqlField* QSqlField_new6(struct miqt_string fieldName, QMetaType* type, struct miqt_string tableName);
QSqlField* QSqlField_new7(struct miqt_string fieldName, int type, struct miqt_string tableName);
void QSqlField_operatorAssign(QSqlField* self, QSqlField* other);
bool QSqlField_operatorEqual(const QSqlField* self, QSqlField* other);
bool QSqlField_operatorNotEqual(const QSqlField* self, QSqlField* other);
void QSqlField_setValue(QSqlField* self, QVariant* value);
QVariant* QSqlField_value(const QSqlField* self);
void QSqlField_setName(QSqlField* self, struct miqt_string name);
struct miqt_string QSqlField_name(const QSqlField* self);
void QSqlField_setTableName(QSqlField* self, struct miqt_string tableName);
struct miqt_string QSqlField_tableName(const QSqlField* self);
bool QSqlField_isNull(const QSqlField* self);
void QSqlField_setReadOnly(QSqlField* self, bool readOnly);
bool QSqlField_isReadOnly(const QSqlField* self);
void QSqlField_clear(QSqlField* self);
bool QSqlField_isAutoValue(const QSqlField* self);
QMetaType* QSqlField_metaType(const QSqlField* self);
void QSqlField_setMetaType(QSqlField* self, QMetaType* type);
int QSqlField_type(const QSqlField* self);
void QSqlField_setType(QSqlField* self, int type);
void QSqlField_setRequiredStatus(QSqlField* self, int status);
void QSqlField_setRequired(QSqlField* self, bool required);
void QSqlField_setLength(QSqlField* self, int fieldLength);
void QSqlField_setPrecision(QSqlField* self, int precision);
void QSqlField_setDefaultValue(QSqlField* self, QVariant* value);
void QSqlField_setSqlType(QSqlField* self, int type);
void QSqlField_setGenerated(QSqlField* self, bool gen);
void QSqlField_setAutoValue(QSqlField* self, bool autoVal);
int QSqlField_requiredStatus(const QSqlField* self);
int QSqlField_length(const QSqlField* self);
int QSqlField_precision(const QSqlField* self);
QVariant* QSqlField_defaultValue(const QSqlField* self);
int QSqlField_typeID(const QSqlField* self);
bool QSqlField_isGenerated(const QSqlField* self);
bool QSqlField_isValid(const QSqlField* self);

void QSqlField_delete(QSqlField* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
