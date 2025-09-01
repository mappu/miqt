#pragma once
#ifndef MIQT_QT6_SQL_GEN_QSQLINDEX_H
#define MIQT_QT6_SQL_GEN_QSQLINDEX_H

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
class QSqlIndex;
class QSqlRecord;
#else
typedef struct QSqlField QSqlField;
typedef struct QSqlIndex QSqlIndex;
typedef struct QSqlRecord QSqlRecord;
#endif

QSqlIndex* QSqlIndex_new();
QSqlIndex* QSqlIndex_new2(QSqlIndex* other);
QSqlIndex* QSqlIndex_new3(struct miqt_string cursorName);
QSqlIndex* QSqlIndex_new4(struct miqt_string cursorName, struct miqt_string name);
void QSqlIndex_virtbase(QSqlIndex* src, QSqlRecord** outptr_QSqlRecord);
void QSqlIndex_operatorAssign(QSqlIndex* self, QSqlIndex* other);
void QSqlIndex_setCursorName(QSqlIndex* self, struct miqt_string cursorName);
struct miqt_string QSqlIndex_cursorName(const QSqlIndex* self);
void QSqlIndex_setName(QSqlIndex* self, struct miqt_string name);
struct miqt_string QSqlIndex_name(const QSqlIndex* self);
void QSqlIndex_append(QSqlIndex* self, QSqlField* field);
void QSqlIndex_append2(QSqlIndex* self, QSqlField* field, bool desc);
bool QSqlIndex_isDescending(const QSqlIndex* self, int i);
void QSqlIndex_setDescending(QSqlIndex* self, int i, bool desc);

void QSqlIndex_delete(QSqlIndex* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
