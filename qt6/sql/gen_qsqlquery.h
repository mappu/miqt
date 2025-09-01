#pragma once
#ifndef MIQT_QT6_SQL_GEN_QSQLQUERY_H
#define MIQT_QT6_SQL_GEN_QSQLQUERY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSqlDatabase;
class QSqlDriver;
class QSqlError;
class QSqlQuery;
class QSqlRecord;
class QSqlResult;
class QVariant;
#else
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlError QSqlError;
typedef struct QSqlQuery QSqlQuery;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlResult QSqlResult;
typedef struct QVariant QVariant;
#endif

QSqlQuery* QSqlQuery_new(QSqlResult* r);
QSqlQuery* QSqlQuery_new2();
QSqlQuery* QSqlQuery_new3(QSqlDatabase* db);
QSqlQuery* QSqlQuery_new4(QSqlQuery* other);
QSqlQuery* QSqlQuery_new5(struct miqt_string query);
QSqlQuery* QSqlQuery_new6(struct miqt_string query, QSqlDatabase* db);
void QSqlQuery_operatorAssign(QSqlQuery* self, QSqlQuery* other);
void QSqlQuery_swap(QSqlQuery* self, QSqlQuery* other);
bool QSqlQuery_isValid(const QSqlQuery* self);
bool QSqlQuery_isActive(const QSqlQuery* self);
bool QSqlQuery_isNull(const QSqlQuery* self, int field);
bool QSqlQuery_isNullWithName(const QSqlQuery* self, struct miqt_string name);
int QSqlQuery_at(const QSqlQuery* self);
struct miqt_string QSqlQuery_lastQuery(const QSqlQuery* self);
int QSqlQuery_numRowsAffected(const QSqlQuery* self);
QSqlError* QSqlQuery_lastError(const QSqlQuery* self);
bool QSqlQuery_isSelect(const QSqlQuery* self);
int QSqlQuery_size(const QSqlQuery* self);
QSqlDriver* QSqlQuery_driver(const QSqlQuery* self);
QSqlResult* QSqlQuery_result(const QSqlQuery* self);
bool QSqlQuery_isForwardOnly(const QSqlQuery* self);
QSqlRecord* QSqlQuery_record(const QSqlQuery* self);
void QSqlQuery_setForwardOnly(QSqlQuery* self, bool forward);
bool QSqlQuery_exec(QSqlQuery* self, struct miqt_string query);
QVariant* QSqlQuery_value(const QSqlQuery* self, int i);
QVariant* QSqlQuery_valueWithName(const QSqlQuery* self, struct miqt_string name);
void QSqlQuery_setNumericalPrecisionPolicy(QSqlQuery* self, int precisionPolicy);
int QSqlQuery_numericalPrecisionPolicy(const QSqlQuery* self);
bool QSqlQuery_seek(QSqlQuery* self, int i);
bool QSqlQuery_next(QSqlQuery* self);
bool QSqlQuery_previous(QSqlQuery* self);
bool QSqlQuery_first(QSqlQuery* self);
bool QSqlQuery_last(QSqlQuery* self);
void QSqlQuery_clear(QSqlQuery* self);
bool QSqlQuery_exec2(QSqlQuery* self);
bool QSqlQuery_execBatch(QSqlQuery* self);
bool QSqlQuery_prepare(QSqlQuery* self, struct miqt_string query);
void QSqlQuery_bindValue(QSqlQuery* self, struct miqt_string placeholder, QVariant* val);
void QSqlQuery_bindValue2(QSqlQuery* self, int pos, QVariant* val);
void QSqlQuery_addBindValue(QSqlQuery* self, QVariant* val);
QVariant* QSqlQuery_boundValue(const QSqlQuery* self, struct miqt_string placeholder);
QVariant* QSqlQuery_boundValueWithPos(const QSqlQuery* self, int pos);
struct miqt_array /* of QVariant* */  QSqlQuery_boundValues(const QSqlQuery* self);
struct miqt_string QSqlQuery_executedQuery(const QSqlQuery* self);
QVariant* QSqlQuery_lastInsertId(const QSqlQuery* self);
void QSqlQuery_finish(QSqlQuery* self);
bool QSqlQuery_nextResult(QSqlQuery* self);
bool QSqlQuery_seek2(QSqlQuery* self, int i, bool relative);
bool QSqlQuery_execBatchWithMode(QSqlQuery* self, int mode);
void QSqlQuery_bindValue3(QSqlQuery* self, struct miqt_string placeholder, QVariant* val, int type);
void QSqlQuery_bindValue4(QSqlQuery* self, int pos, QVariant* val, int type);
void QSqlQuery_addBindValue2(QSqlQuery* self, QVariant* val, int type);

void QSqlQuery_delete(QSqlQuery* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
