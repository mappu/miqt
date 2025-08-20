#pragma once
#ifndef MIQT_QT6_SQL_GEN_QSQLRESULT_H
#define MIQT_QT6_SQL_GEN_QSQLRESULT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSqlDriver;
class QSqlError;
class QSqlRecord;
class QSqlResult;
class QVariant;
#else
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlError QSqlError;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlResult QSqlResult;
typedef struct QVariant QVariant;
#endif

QVariant* QSqlResult_handle(const QSqlResult* self);
void QSqlResult_setAt(QSqlResult* self, int at);
void QSqlResult_setActive(QSqlResult* self, bool a);
void QSqlResult_setLastError(QSqlResult* self, QSqlError* e);
void QSqlResult_setQuery(QSqlResult* self, struct miqt_string query);
void QSqlResult_setSelect(QSqlResult* self, bool s);
void QSqlResult_setForwardOnly(QSqlResult* self, bool forward);
bool QSqlResult_exec(QSqlResult* self);
bool QSqlResult_prepare(QSqlResult* self, struct miqt_string query);
bool QSqlResult_savePrepare(QSqlResult* self, struct miqt_string sqlquery);
void QSqlResult_bindValue(QSqlResult* self, int pos, QVariant* val, int type);
void QSqlResult_bindValue2(QSqlResult* self, struct miqt_string placeholder, QVariant* val, int type);
QVariant* QSqlResult_data(QSqlResult* self, int i);
bool QSqlResult_isNull(QSqlResult* self, int i);
bool QSqlResult_reset(QSqlResult* self, struct miqt_string sqlquery);
bool QSqlResult_fetch(QSqlResult* self, int i);
bool QSqlResult_fetchNext(QSqlResult* self);
bool QSqlResult_fetchPrevious(QSqlResult* self);
bool QSqlResult_fetchFirst(QSqlResult* self);
bool QSqlResult_fetchLast(QSqlResult* self);
int QSqlResult_size(QSqlResult* self);
int QSqlResult_numRowsAffected(QSqlResult* self);
QSqlRecord* QSqlResult_record(const QSqlResult* self);
QVariant* QSqlResult_lastInsertId(const QSqlResult* self);
void QSqlResult_virtualHook(QSqlResult* self, int id, void* data);
bool QSqlResult_execBatch(QSqlResult* self, bool arrayBind);
void QSqlResult_detachFromResultSet(QSqlResult* self);
void QSqlResult_setNumericalPrecisionPolicy(QSqlResult* self, int policy);
bool QSqlResult_nextResult(QSqlResult* self);

void QSqlResult_delete(QSqlResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
