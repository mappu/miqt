#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBDATABASE_H
#define MIQT_QT_WEBKIT_GEN_QWEBDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWebDatabase;
class QWebSecurityOrigin;
#else
typedef struct QWebDatabase QWebDatabase;
typedef struct QWebSecurityOrigin QWebSecurityOrigin;
#endif

QWebDatabase* QWebDatabase_new(QWebDatabase* other);
void QWebDatabase_operatorAssign(QWebDatabase* self, QWebDatabase* other);
struct miqt_string QWebDatabase_name(const QWebDatabase* self);
struct miqt_string QWebDatabase_displayName(const QWebDatabase* self);
long long QWebDatabase_expectedSize(const QWebDatabase* self);
long long QWebDatabase_size(const QWebDatabase* self);
struct miqt_string QWebDatabase_fileName(const QWebDatabase* self);
QWebSecurityOrigin* QWebDatabase_origin(const QWebDatabase* self);
void QWebDatabase_removeDatabase(QWebDatabase* param1);
void QWebDatabase_removeAllDatabases();

void QWebDatabase_delete(QWebDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
