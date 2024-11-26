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

void QWebDatabase_new(QWebDatabase* other, QWebDatabase** outptr_QWebDatabase);
void QWebDatabase_OperatorAssign(QWebDatabase* self, QWebDatabase* other);
struct miqt_string QWebDatabase_Name(const QWebDatabase* self);
struct miqt_string QWebDatabase_DisplayName(const QWebDatabase* self);
long long QWebDatabase_ExpectedSize(const QWebDatabase* self);
long long QWebDatabase_Size(const QWebDatabase* self);
struct miqt_string QWebDatabase_FileName(const QWebDatabase* self);
QWebSecurityOrigin* QWebDatabase_Origin(const QWebDatabase* self);
void QWebDatabase_RemoveDatabase(QWebDatabase* param1);
void QWebDatabase_RemoveAllDatabases();
void QWebDatabase_Delete(QWebDatabase* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
