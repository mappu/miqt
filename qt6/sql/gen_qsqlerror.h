#pragma once
#ifndef MIQT_QT6_SQL_GEN_QSQLERROR_H
#define MIQT_QT6_SQL_GEN_QSQLERROR_H

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

QSqlError* QSqlError_new();
QSqlError* QSqlError_new2(QSqlError* other);
QSqlError* QSqlError_new3(struct miqt_string driverText);
QSqlError* QSqlError_new4(struct miqt_string driverText, struct miqt_string databaseText);
QSqlError* QSqlError_new5(struct miqt_string driverText, struct miqt_string databaseText, int type);
QSqlError* QSqlError_new6(struct miqt_string driverText, struct miqt_string databaseText, int type, struct miqt_string errorCode);
void QSqlError_operatorAssign(QSqlError* self, QSqlError* other);
bool QSqlError_operatorEqual(const QSqlError* self, QSqlError* other);
bool QSqlError_operatorNotEqual(const QSqlError* self, QSqlError* other);
void QSqlError_swap(QSqlError* self, QSqlError* other);
struct miqt_string QSqlError_driverText(const QSqlError* self);
struct miqt_string QSqlError_databaseText(const QSqlError* self);
int QSqlError_type(const QSqlError* self);
struct miqt_string QSqlError_nativeErrorCode(const QSqlError* self);
struct miqt_string QSqlError_text(const QSqlError* self);
bool QSqlError_isValid(const QSqlError* self);

void QSqlError_delete(QSqlError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
