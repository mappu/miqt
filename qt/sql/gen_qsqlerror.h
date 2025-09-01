#pragma once
#ifndef MIQT_QT_SQL_GEN_QSQLERROR_H
#define MIQT_QT_SQL_GEN_QSQLERROR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSqlError;
#else
typedef struct QSqlError QSqlError;
#endif

QSqlError* QSqlError_new(struct miqt_string driverText, struct miqt_string databaseText, int type, int number);
QSqlError* QSqlError_new2();
QSqlError* QSqlError_new3(QSqlError* other);
QSqlError* QSqlError_new4(struct miqt_string driverText);
QSqlError* QSqlError_new5(struct miqt_string driverText, struct miqt_string databaseText);
QSqlError* QSqlError_new6(struct miqt_string driverText, struct miqt_string databaseText, int type);
QSqlError* QSqlError_new7(struct miqt_string driverText, struct miqt_string databaseText, int type, struct miqt_string errorCode);
void QSqlError_operatorAssign(QSqlError* self, QSqlError* other);
bool QSqlError_operatorEqual(const QSqlError* self, QSqlError* other);
bool QSqlError_operatorNotEqual(const QSqlError* self, QSqlError* other);
void QSqlError_swap(QSqlError* self, QSqlError* other);
struct miqt_string QSqlError_driverText(const QSqlError* self);
struct miqt_string QSqlError_databaseText(const QSqlError* self);
int QSqlError_type(const QSqlError* self);
int QSqlError_number(const QSqlError* self);
struct miqt_string QSqlError_nativeErrorCode(const QSqlError* self);
struct miqt_string QSqlError_text(const QSqlError* self);
bool QSqlError_isValid(const QSqlError* self);
void QSqlError_setDriverText(QSqlError* self, struct miqt_string driverText);
void QSqlError_setDatabaseText(QSqlError* self, struct miqt_string databaseText);
void QSqlError_setType(QSqlError* self, int type);
void QSqlError_setNumber(QSqlError* self, int number);

void QSqlError_delete(QSqlError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
